#ifndef ZEBETITE_AND_CANNON_AI_H
#define ZEBETITE_AND_CANNON_AI_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"

#define ZEBETITE_HEALTH_THRESHOLD 20
#define ZEBETITE_HEAL_TIMER 30

#define CANNON_AIM_LEFT 0
#define CANNON_AIM_LEFT_TO_DOWN_LEFT_TRANSITION 1
#define CANNON_AIM_DOWN_LEFT 2
#define CANNON_AIM_DOWN_LEFT_TO_DOWN_TRANSITION 3
#define CANNON_AIM_DOWN 4
#define CANNON_AIM_DOWN_TO_DOWN_RIGHT_TRANSITION 5
#define CANNON_AIM_DOWN_RIGHT 6
#define CANNON_AIM_DOWN_RIGHT_TO_RIGHT_TRANSITION 7
#define CANNON_AIM_RIGHT 8

#define CANNON_VIEW_EVERWHERE 0
#define CANNON_VIEW_RIGHT 1
#define CANNON_VIEW_LEFT 2

#define CANNON_BULLET_SPEED (PIXEL_SIZE + ONE_SUB_PIXEL)
#define CANNON_BULLET_SPEED_DIAG (CANNON_BULLET_SPEED - CANNON_BULLET_SPEED / 2)

void Zebetite(void);
void CannonFireBullet(void);
void CannonCheckSurroundings(void);
void Cannon(void);
void CannonBullet(void);

#ifdef __cplusplus
}
#endif

#endif /* ZEBETITE_AND_CANNON_AI_H */