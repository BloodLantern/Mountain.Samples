#include "mzm/sprites_AI/sidehopper.h"
#include "mzm/macros.h"
#include "mzm/sprite_util.h"

#include "mzm/data/sprites/sidehopper.h"
#include "mzm/data/sprite_data.h"
#include "mzm/data/sprite_data.h"

#include "mzm/constants/clipdata.h"
#include "mzm/constants/sprite.h"
#include "mzm/constants/sprite_util.h"
#include "mzm/constants/particle.h"

#include "mzm/structs/sprite.h"

/**
 * @brief 3f684 | 20 | Checks if samus is near the dessgeega on the sides in a 5 block range
 * 
 * @return u8 1 if near, 0 otherwise
 */
u8 SidehopperCheckSamusNearLeftRight(void)
{
    u8 result;

    result = FALSE;
    if (SpriteUtilCheckSamusNearSpriteLeftRight(BLOCK_SIZE * 5, BLOCK_SIZE * 5) != NSLR_OUT_OF_RANGE)
    {
        result = TRUE;
        SpriteUtilMakeSpriteFaceSamusDirection();
    }

    return result;
}

/**
 * @brief 3f6a4 | d0 | Initializes a sidehopper sprite
 * 
 */
void SidehopperInit(void)
{
    SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - (BLOCK_SIZE + 0x4), gCurrentSprite.xPosition);

    if (gPreviousCollisionCheck & 0xF0)
    {
        gCurrentSprite.status |= SPRITE_STATUS_YFLIP;
        gCurrentSprite.yPosition -= BLOCK_SIZE;
    }

    gCurrentSprite.timer = 0x0;
    gCurrentSprite.pose = SIDEHOPPER_POSE_IDLE;

    if (gCurrentSprite.status & SPRITE_STATUS_YFLIP)
    {
        gCurrentSprite.drawDistanceTopOffset = 0x8;
        gCurrentSprite.drawDistanceBottomOffset = 0x28;
        gCurrentSprite.hitboxTopOffset = 0x0;
        gCurrentSprite.hitboxBottomOffset = 0x5C;
    }
    else
    {
        gCurrentSprite.drawDistanceTopOffset = 0x28;
        gCurrentSprite.drawDistanceBottomOffset = 0x8;
        gCurrentSprite.hitboxTopOffset = -0x5C;
        gCurrentSprite.hitboxBottomOffset = 0x0;
    }

    gCurrentSprite.drawDistanceHorizontalOffset = 0x1C;
    gCurrentSprite.hitboxLeftOffset = -0x48;
    gCurrentSprite.hitboxRightOffset = 0x48;

    gCurrentSprite.pOam = sSidehopperOAM_Idle;
    gCurrentSprite.animationDurationCounter = 0x0;
    gCurrentSprite.currentAnimationFrame = 0x0;

    gCurrentSprite.samusCollision = SSC_HURTS_SAMUS;
    gCurrentSprite.health = GET_PSPRITE_HEALTH(gCurrentSprite.spriteId);
    SpriteUtilChooseRandomXDirection();
}

/**
 * @brief 3f774 | 50 | Initializes a sidehopper to do the jump warning
 * 
 */
void SidehopperJumpWarningInit(void)
{
    gCurrentSprite.pose = SIDEHOPPER_POSE_JUMP_WARNING;

    gCurrentSprite.animationDurationCounter = 0x0;
    gCurrentSprite.currentAnimationFrame = 0x0;
    gCurrentSprite.pOam = sSidehopperOAM_JumpWarning;
}

/**
 * @brief 3f794 | 80 | Initializes a sidehopper to jump
 * 
 */
void SidehopperJumpingInit(void)
{
    gCurrentSprite.pose = SIDEHOPPER_POSE_JUMPING;

    gCurrentSprite.animationDurationCounter = 0x0;
    gCurrentSprite.currentAnimationFrame = 0x0;
    gCurrentSprite.arrayOffset = 0x0;
    gCurrentSprite.pOam = sSidehopperOAM_Jumping;

    if (gSpriteRng & 0x1)
        gCurrentSprite.workVariable2 = TRUE;
    else
        gCurrentSprite.workVariable2 = FALSE;

    if (gCurrentSprite.status & SPRITE_STATUS_YFLIP)
        gCurrentSprite.hitboxBottomOffset = 0x70;
    else
        gCurrentSprite.hitboxTopOffset = -0x70;

    if (gCurrentSprite.status & SPRITE_STATUS_ONSCREEN)
        SoundPlayNotAlreadyPlaying(0x17F);
}

/**
 * @brief 3f814 | 50 | Initializes a sidehopper to land
 * 
 */
void SidehopperLandingInit(void)
{
    gCurrentSprite.pose = SIDEHOPPER_POSE_LANDING;

    gCurrentSprite.animationDurationCounter = 0x0;
    gCurrentSprite.currentAnimationFrame = 0x0;
    gCurrentSprite.pOam = sSidehopperOAM_Landing;

    if (gCurrentSprite.status & SPRITE_STATUS_YFLIP)
        gCurrentSprite.hitboxBottomOffset = 0x5C;
    else
        gCurrentSprite.hitboxTopOffset = -0x5C;

    if (gCurrentSprite.status & SPRITE_STATUS_ONSCREEN)
        SoundPlayNotAlreadyPlaying(0x180);
}

/**
 * @brief 3f864 | 74 | Initializes a sidehopper to be idle
 * 
 */
void SidehopperIdleInit(void)
{
    if (SidehopperCheckSamusNearLeftRight())
        SidehopperJumpWarningInit();
    else
    {
        gCurrentSprite.pose = SIDEHOPPER_POSE_IDLE;
        gCurrentSprite.animationDurationCounter = 0x0;
        gCurrentSprite.currentAnimationFrame = 0x0;
        gCurrentSprite.timer = 0x0;

        gCurrentSprite.workVariable = gSpriteRng & 0x3;

        if (gSpriteRng > 0x7)
            gCurrentSprite.pOam = sSidehopperOAM_Idle;
        else
        {
            gCurrentSprite.pOam = sSidehopperOAM_ShakingHead;
            if (gCurrentSprite.status & SPRITE_STATUS_ONSCREEN)
                SoundPlayNotAlreadyPlaying(0x181);
        }
    }
}

/**
 * @brief 3f8d8 | 24 | Initializes a sidehopper to be falling
 * 
 */
void SidehopperFallingInit(void)
{
    gCurrentSprite.pose = SIDEHOPPER_POSE_FALLING;
    gCurrentSprite.animationDurationCounter = 0x0;
    gCurrentSprite.currentAnimationFrame = 0x0;
    gCurrentSprite.arrayOffset = 0x0;
    gCurrentSprite.pOam = sSidehopperOAM_Jumping;
}

/**
 * @brief 3f8fc | 5c | Handles a sidehopper doing the jump warning when on the ground
 * 
 */
void SidehopperJumpWarningGround(void)
{
    if (SpriteUtilGetCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition) == COLLISION_AIR)
    {
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition + gCurrentSprite.hitboxRightOffset);
        if (gPreviousCollisionCheck == COLLISION_AIR)
        {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition + gCurrentSprite.hitboxLeftOffset);
            if (gPreviousCollisionCheck == COLLISION_AIR)
            {
                SidehopperFallingInit();
                return;
            }
        }
    }
    
    if (SpriteUtilCheckEndCurrentSpriteAnim())
        SidehopperJumpingInit();
}

/**
 * @brief 3f958 | 14 | Handles a sidehopper doing the jump warning when on the ceiling
 * 
 */
void SidehopperJumpWarningCeiling(void)
{
    if (SpriteUtilCheckEndCurrentSpriteAnim())
        SidehopperJumpingInit();
}

/**
 * @brief 3f96c | 1e8 | Handles a sidehopper jumping when on the ground
 * 
 */
void SidehopperJumpingGround(void)
{
    u8 colliding;
    u8 offset;
    s32 movement;
    u32 blockTop;

    colliding = FALSE;

    if (gCurrentSprite.workVariable2)
        movement = sSidehopperLowJumpVelocity[gCurrentSprite.arrayOffset / 4];
    else
        movement = sSidehopperHighJumpVelocity[gCurrentSprite.arrayOffset / 4];

    if (gCurrentSprite.status & SPRITE_STATUS_FACING_RIGHT)
    {
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - QUARTER_BLOCK_SIZE,
            gCurrentSprite.xPosition + gCurrentSprite.hitboxRightOffset + 0x4);

        if (gPreviousCollisionCheck == COLLISION_SOLID)
        {
            colliding++;
            gCurrentSprite.xPosition -= 0x6;
        }
        else if (movement > 0x0)
            gCurrentSprite.xPosition += 0x4;
        else
            gCurrentSprite.xPosition += 0x5;
    }
    else
    {
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition - QUARTER_BLOCK_SIZE,
            gCurrentSprite.xPosition + gCurrentSprite.hitboxLeftOffset - 0x4);

        if (gPreviousCollisionCheck == COLLISION_SOLID)
        {
            colliding++;
            gCurrentSprite.xPosition += 0x6;
        }
        else if (movement > 0x0)
            gCurrentSprite.xPosition -= 0x4;
        else
            gCurrentSprite.xPosition -= 0x5;
    }

    gCurrentSprite.yPosition += movement;
    if (gCurrentSprite.arrayOffset < 0x27)
        gCurrentSprite.arrayOffset++;

    if (movement > 0x0)
    {
        if (colliding)
            gCurrentSprite.status ^= SPRITE_STATUS_FACING_RIGHT;

        blockTop = SpriteUtilCheckVerticalCollisionAtPositionSlopes(gCurrentSprite.yPosition, gCurrentSprite.xPosition);
        if (gPreviousVerticalCollisionCheck != COLLISION_AIR)
        {
            gCurrentSprite.yPosition = blockTop;
            SidehopperLandingInit();
            return;
        }

        if (!colliding)
        {
            blockTop = SpriteUtilCheckVerticalCollisionAtPositionSlopes(gCurrentSprite.yPosition, gCurrentSprite.xPosition + gCurrentSprite.hitboxRightOffset);
            if (gPreviousVerticalCollisionCheck != COLLISION_AIR)
                colliding++;
            else
            {
                blockTop = SpriteUtilCheckVerticalCollisionAtPositionSlopes(gCurrentSprite.yPosition, gCurrentSprite.xPosition + gCurrentSprite.hitboxLeftOffset);
                if (gPreviousVerticalCollisionCheck != COLLISION_AIR)
                    colliding++;
            }
    
            if (colliding)
            {
                gCurrentSprite.yPosition = blockTop;
                SidehopperLandingInit();
            }
        }
    }
    else
    {
        if (gCurrentSprite.status & SPRITE_STATUS_FACING_RIGHT)
        {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition + gCurrentSprite.hitboxTopOffset,
                gCurrentSprite.xPosition + gCurrentSprite.hitboxRightOffset);

            if (gPreviousCollisionCheck == COLLISION_SOLID)
            {
                colliding++;
                gCurrentSprite.xPosition -= 0x6;
                SidehopperFallingInit();
            }
        }
        else
        {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition + gCurrentSprite.hitboxTopOffset,
                gCurrentSprite.xPosition + gCurrentSprite.hitboxLeftOffset);

            if (gPreviousCollisionCheck == COLLISION_SOLID)
            {
                colliding++;
                gCurrentSprite.xPosition += 0x6;
                SidehopperFallingInit();
            }
        }

        if (colliding)
            gCurrentSprite.status ^= SPRITE_STATUS_FACING_RIGHT;
    }
}

/**
 * @brief 3fb54 | 1fc | Handles a sidehopper jumping when on the ceiling
 * 
 */
void SidehopperJumpingCeiling(void)
{
    u8 colliding;
    u8 offset;
    s32 movement;
    u32 blockTop;

    colliding = FALSE;

    if (gCurrentSprite.workVariable2)
        movement = sSidehopperLowJumpVelocity[gCurrentSprite.arrayOffset / 4];
    else
        movement = sSidehopperHighJumpVelocity[gCurrentSprite.arrayOffset / 4];

    if (gCurrentSprite.status & SPRITE_STATUS_FACING_RIGHT)
    {
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition + QUARTER_BLOCK_SIZE,
            gCurrentSprite.xPosition + gCurrentSprite.hitboxRightOffset + 0x4);

        if (gPreviousCollisionCheck == COLLISION_SOLID)
        {
            colliding++;
            gCurrentSprite.xPosition -= 0x6;
        }
        else if (movement > 0x0)
            gCurrentSprite.xPosition += 0x4;
        else
            gCurrentSprite.xPosition += 0x5;
    }
    else
    {
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition + QUARTER_BLOCK_SIZE,
            gCurrentSprite.xPosition + gCurrentSprite.hitboxLeftOffset - 0x4);

        if (gPreviousCollisionCheck == COLLISION_SOLID)
        {
            colliding++;
            gCurrentSprite.xPosition += 0x6;
        }
        else if (movement > 0x0)
            gCurrentSprite.xPosition -= 0x4;
        else
            gCurrentSprite.xPosition -= 0x5;
    }

    gCurrentSprite.yPosition -= movement;
    if (gCurrentSprite.arrayOffset < 0x27)
        gCurrentSprite.arrayOffset++;

    if (movement < 0x0)
    {
        if (gCurrentSprite.status & SPRITE_STATUS_FACING_RIGHT)
        {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition + gCurrentSprite.hitboxBottomOffset,
                gCurrentSprite.xPosition + gCurrentSprite.hitboxRightOffset);

            if (gPreviousCollisionCheck == COLLISION_SOLID)
            {
                colliding++;
                gCurrentSprite.xPosition -= 0x6;
                SidehopperFallingInit();
            }
        }
        else
        {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition + gCurrentSprite.hitboxBottomOffset,
                gCurrentSprite.xPosition + gCurrentSprite.hitboxLeftOffset);

            if (gPreviousCollisionCheck == COLLISION_SOLID)
            {
                colliding++;
                gCurrentSprite.xPosition += 0x6;
                SidehopperFallingInit();
            }
        }

        if (colliding)
            gCurrentSprite.status ^= SPRITE_STATUS_FACING_RIGHT;
    }
    else
    {
        if (colliding)
            gCurrentSprite.status ^= SPRITE_STATUS_FACING_RIGHT;

        blockTop = SpriteUtilCheckVerticalCollisionAtPositionSlopes(gCurrentSprite.yPosition, gCurrentSprite.xPosition);
        if (gPreviousVerticalCollisionCheck & 0xF)
        {
            gCurrentSprite.yPosition = blockTop + BLOCK_SIZE;
            SidehopperLandingInit();
            return;
        }

        if (!colliding)
        {
            blockTop = SpriteUtilCheckVerticalCollisionAtPositionSlopes(gCurrentSprite.yPosition, gCurrentSprite.xPosition + gCurrentSprite.hitboxRightOffset);
            if (gPreviousVerticalCollisionCheck & 0xF)
                colliding++;
            else
            {
                blockTop = SpriteUtilCheckVerticalCollisionAtPositionSlopes(gCurrentSprite.yPosition, gCurrentSprite.xPosition + gCurrentSprite.hitboxLeftOffset);
                if (gPreviousVerticalCollisionCheck & 0xF)
                    colliding++;
            }
    
            if (colliding)
            {
                gCurrentSprite.yPosition = blockTop + BLOCK_SIZE;
                SidehopperLandingInit();
            }
        }
    }
}

/**
 * @brief 3fd50 | 14 | Checks if the landing animation as ended
 * 
 */
void SidehopperCheckLandingAnimEnded(void)
{
    if (SpriteUtilCheckEndCurrentSpriteAnim())
        SidehopperIdleInit();
}

/**
 * @brief 3fd64 | a4 | Handles a dessgeega falling from the ground
 * 
 */
void SidehopperFallingGround(void)
{
    u8 colliding;
    u32 blockTop;
    u8 offset;
    s32 movement;

    colliding = FALSE;

    blockTop = SpriteUtilCheckVerticalCollisionAtPositionSlopes(gCurrentSprite.yPosition, gCurrentSprite.xPosition);
    if (gPreviousVerticalCollisionCheck != COLLISION_AIR)
        colliding++;
    else
    {
        blockTop = SpriteUtilCheckVerticalCollisionAtPositionSlopes(gCurrentSprite.yPosition,
            gCurrentSprite.xPosition + gCurrentSprite.hitboxRightOffset);
        if (gPreviousVerticalCollisionCheck != COLLISION_AIR)
            colliding++;
        else
        {
            blockTop = SpriteUtilCheckVerticalCollisionAtPositionSlopes(gCurrentSprite.yPosition,
                gCurrentSprite.xPosition + gCurrentSprite.hitboxLeftOffset);
            if (gPreviousVerticalCollisionCheck != COLLISION_AIR)
                colliding++;
        }
    }

    if (colliding)
    {
        gCurrentSprite.yPosition = blockTop;
        SidehopperLandingInit();
    }
    else
    {
        offset = gCurrentSprite.arrayOffset;
        movement = sSpritesFallingSpeed[offset];

        if (movement == SHORT_MAX)
        {
            movement = sSpritesFallingSpeed[offset - 1];
            gCurrentSprite.yPosition += movement;
        }
        else
        {
            gCurrentSprite.arrayOffset++;
            gCurrentSprite.yPosition += movement;
        }
    }
}

/**
 * @brief 3fe08 | a8 | Handles a dessgeega falling from the ceiling
 * 
 */
void SidehopperFallingCeiling(void)
{
    u8 colliding;
    u32 blockTop;
    u8 offset;
    s32 movement;

    colliding = FALSE;

    blockTop = SpriteUtilCheckVerticalCollisionAtPositionSlopes(gCurrentSprite.yPosition, gCurrentSprite.xPosition);
    if (gPreviousVerticalCollisionCheck != COLLISION_AIR)
        colliding++;
    else
    {
        blockTop = SpriteUtilCheckVerticalCollisionAtPositionSlopes(gCurrentSprite.yPosition,
            gCurrentSprite.xPosition + gCurrentSprite.hitboxRightOffset);
        if (gPreviousVerticalCollisionCheck != COLLISION_AIR)
            colliding++;
        else
        {
            blockTop = SpriteUtilCheckVerticalCollisionAtPositionSlopes(gCurrentSprite.yPosition,
                gCurrentSprite.xPosition + gCurrentSprite.hitboxLeftOffset);
            if (gPreviousVerticalCollisionCheck != COLLISION_AIR)
                colliding++;
        }
    }

    if (colliding)
    {
        gCurrentSprite.yPosition = blockTop + BLOCK_SIZE;
        SidehopperLandingInit();
    }
    else
    {
        offset = gCurrentSprite.arrayOffset;
        movement = sSpritesFallingCeilingSpeed[offset];

        if (movement == SHORT_MAX)
        {
            movement = sSpritesFallingCeilingSpeed[offset - 1];
            gCurrentSprite.yPosition += movement;
        }
        else
        {
            gCurrentSprite.arrayOffset++;
            gCurrentSprite.yPosition += movement;
        }
    }
}

/**
 * @brief 3feb0 | 9c | Handles a sidehopper being idle on the ground
 * 
 */
void SidehopperIdleGround(void)
{
    if (SidehopperCheckSamusNearLeftRight())
        SidehopperJumpWarningInit();
    else
    {
        SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition + gCurrentSprite.hitboxRightOffset);
        if (gPreviousCollisionCheck == COLLISION_AIR)
        {
            SpriteUtilCheckCollisionAtPosition(gCurrentSprite.yPosition, gCurrentSprite.xPosition + gCurrentSprite.hitboxLeftOffset);
            if (gPreviousCollisionCheck == COLLISION_AIR)
            {
                SidehopperFallingInit();
                return;
            }
        }

        if (SpriteUtilCheckEndCurrentSpriteAnim())
        {
            if (gCurrentSprite.timer++ == gCurrentSprite.workVariable)
                SidehopperJumpWarningInit();
            else
            {
                if (gCurrentSprite.pOam == sSidehopperOAM_ShakingHead && gCurrentSprite.status & SPRITE_STATUS_ONSCREEN)
                    SoundPlayNotAlreadyPlaying(0x181);
            }
        }
    }
}

/**
 * @brief 3ff4c | 5c | Handles a sidehopper being idle on the ceiling
 * 
 */
void SidehopperIdleCeiling(void)
{
    if (SidehopperCheckSamusNearLeftRight())
        SidehopperJumpWarningInit();
    else
    {
        if (SpriteUtilCheckEndCurrentSpriteAnim())
        {
            if (gCurrentSprite.timer++ == gCurrentSprite.workVariable)
                SidehopperJumpWarningInit();
            else
            {
                if (gCurrentSprite.pOam == sSidehopperOAM_ShakingHead && gCurrentSprite.status & SPRITE_STATUS_ONSCREEN)
                    SoundPlayNotAlreadyPlaying(0x181);
            }
        }
    }
}

/**
 * @brief 3ffa8 | 38 | Handles the death of a sidehopper
 * 
 */
void SidehopperDeath(void)
{
    u16 yPosition;

    if (gCurrentSprite.status & SPRITE_STATUS_YFLIP)
        yPosition = gCurrentSprite.yPosition + 0x34;
    else
        yPosition = gCurrentSprite.yPosition - 0x34;

    SpriteUtilSpriteDeath(DEATH_NORMAL, yPosition, gCurrentSprite.xPosition, TRUE, PE_SPRITE_EXPLOSION_SINGLE_THEN_BIG);
}

/**
 * @brief 3ffe0 | 198 | Sidehopper AI
 * 
 */
void Sidehopper(void)
{
    if (gCurrentSprite.properties & SP_DAMAGED)
    {
        gCurrentSprite.properties &= ~SP_DAMAGED;
        if (gCurrentSprite.status & SPRITE_STATUS_ONSCREEN)
            SoundPlayNotAlreadyPlaying(0x182);
    }

    if (gCurrentSprite.freezeTimer != 0x0)
        SpriteUtilUpdateFreezeTimer();
    else
    {
        if (SpriteUtilIsSpriteStunned())
            return;

        switch (gCurrentSprite.pose)
        {
            case 0x0:
                SidehopperInit();
                break;

            case SIDEHOPPER_POSE_JUMP_WARNING_INIT:
                SidehopperJumpWarningInit();

            case SIDEHOPPER_POSE_JUMP_WARNING:
                if (gCurrentSprite.status & SPRITE_STATUS_YFLIP)
                    SidehopperJumpWarningCeiling();
                else
                    SidehopperJumpWarningGround();
                break;

            case SIDEHOPPER_POSE_JUMPING:
                if (gCurrentSprite.status & SPRITE_STATUS_YFLIP)
                    SidehopperJumpingCeiling();
                else
                    SidehopperJumpingGround();
                break;

            case SIDEHOPPER_POSE_LANDING:
                SidehopperCheckLandingAnimEnded();
                break;

            case SIDEHOPPER_POSE_IDLE:
                if (gCurrentSprite.status & SPRITE_STATUS_YFLIP)
                    SidehopperIdleCeiling();
                else
                    SidehopperIdleGround();
                break;

            case SIDEHOPPER_POSE_FALLING:
                if (gCurrentSprite.status & SPRITE_STATUS_YFLIP)
                    SidehopperFallingCeiling();
                else
                    SidehopperFallingGround();
                break;

            default:
                SidehopperDeath();
        }
    }
}