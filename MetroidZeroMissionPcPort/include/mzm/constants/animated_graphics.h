#define BACKGROUND_EFFECT_NONE 0
#define BACKGROUND_EFFECT_LIGHTNING 1
#define BACKGROUND_EFFECT_SLIGHT_YELLOW 2
#define BACKGROUND_EFFECT_HEAVY_YELLOW 3
#define BACKGROUND_EFFECT_EXIT_ZEBES_FADE 4
#define BACKGROUND_EFFECT_INTRO_TEXT_FADE 5
#define BACKGROUND_EFFECT_QUICK_FLASH 6
#define BACKGROUND_EFFECT_ALL_BLACK 7
#define BACKGROUND_EFFECT_ALL_WHITE 8

#define BACKGROUND_EFFECT_COMMAND_WAIT_FOR_TIMER 0
#define BACKGROUND_EFFECT_COMMAND_WAIT_FOR_TIMER_RANDOM 1
#define BACKGROUND_EFFECT_COMMAND_WAIT_FOR_TIMER_BEFORE 2
#define BACKGROUND_EFFECT_COMMAND_CHECK_APPLY_FIRST_COLOR 3
#define BACKGROUND_EFFECT_COMMAND_CHECK_APPLY_SECOND_COLOR 4
#define BACKGROUND_EFFECT_COMMAND_PLAY_SOUND 5
#define BACKGROUND_EFFECT_COMMAND_END_AND_KILL 6
#define BACKGROUND_EFFECT_COMMAND_END 7
#define BACKGROUND_EFFECT_COMMAND_END_EXIT_ZEBES 8
#define BACKGROUND_EFFECT_COMMAND_END_BEFORE_INTRO_TEXT 9

#define ANIMATED_PALETTE_TYPE_NONE 0
#define ANIMATED_PALETTE_TYPE_NORMAL 1
#define ANIMATED_PALETTE_TYPE_ALTERNATE 2
#define ANIMATED_PALETTE_TYPE_REVERSE 3

#define ANIMATED_PALETTE_ID_ZIPLINE 3

#define ANIMATED_PALETTE_PALRAM (gPalramBuffer + 0x1E0)
#define ANIMATED_PALETTE_EWRAM (gEwramBuffer + 0x355E0)

#define ANIMATED_GFX_TYPE_NONE 0
#define ANIMATED_GFX_TYPE_NORMAL 1
#define ANIMATED_GFX_TYPE_NORMAL_ONCE 3
#define ANIMATED_GFX_TYPE_ALTERNATE 4
#define ANIMATED_GFX_TYPE_REVERSE_ONCE 5
#define ANIMATED_GFX_TYPE_REVERSE 6

#define ANIMATED_GFX_ID_CRYSTAL 0
#define ANIMATED_GFX_ID_WATER_SURFACE 1
#define ANIMATED_GFX_ID_WATER_DEPTH_1 2
#define ANIMATED_GFX_ID_WATER_DEPTH_2 3
#define ANIMATED_GFX_ID_WATER_DEPTH_3 4
#define ANIMATED_GFX_ID_LAVA_BUBBLES_FAST 5
#define ANIMATED_GFX_ID_LAVA_SURFACE_FAST 6
#define ANIMATED_GFX_ID_LAVA_SHALLOW_FAST 7
#define ANIMATED_GFX_ID_LAVA_DEPTH_FAST 8
#define ANIMATED_GFX_ID_ACID_SURFACE_FAST 9
#define ANIMATED_GFX_ID_ACID_DEPTH_FAST 10
#define ANIMATED_GFX_ID_LAVA_DEPTH_BUBBLES 11

#define ANIMATED_GFX_ID_RAIN 13
#define ANIMATED_GFX_ID_RAIN_SPLASH 14
#define ANIMATED_GFX_ID_ACID_SURFACE_SLOW 15
#define ANIMATED_GFX_ID_ACID_DEPTH_SLOW 16

#define ANIMATED_GFX_ID_ACID_FALL_LEFT 30
#define ANIMATED_GFX_ID_ACID_FALL_MIDDLE 31
#define ANIMATED_GFX_ID_ACID_FALL_RIGHT 32
#define ANIMATED_GFX_ID_ALARM_SLOW 33
#define ANIMATED_GFX_ID_ALARM_FAST 34
#define ANIMATED_GFX_ID_ALARM_HEAVY 35
#define ANIMATED_GFX_ID_WIND 36
#define ANIMATED_GFX_ID_WIND_FAST 37

#define ANIMATED_GFX_SIZE 0x80
#define ANIMATED_GFX_SIZE_16_BITS (ANIMATED_GFX_SIZE / 2)
#define ANIMATED_GFX_gEwramBuffer (gEwramBuffer + 0x1B000)
#define ANIMATED_GFX_gVramBuffer (gVramBuffer + 0x4000)
#define ANIMATED_GFX_VRAM_END (gVramBuffer + 0xFF60)
#define ANIMATED_GFX_EWRAM_POS(position) (ANIMATED_GFX_gEwramBuffer + ANIMATED_GFX_SIZE * (position))
#define ANIMATED_GFX_VRAM_POS(position) (ANIMATED_GFX_gVramBuffer + ANIMATED_GFX_SIZE * (position))
#define ANIMATED_GFX_VRAM_END_POS(position) (ANIMATED_GFX_VRAM_END - ANIMATED_GFX_SIZE * (position))

#define ANIMATED_GFX_TANK_NBR 4
#define ANIMATED_GFX_TANK_FRAME_DELAY 5
#define ANIMATED_GFX_TANK_SIZE (ANIMATED_GFX_SIZE * ANIMATED_GFX_TANK_NBR)
#define ANIMATED_GFX_TANK_VRAM_POS(position) (ANIMATED_GFX_gVramBuffer + ANIMATED_GFX_SIZE * 16 + ANIMATED_GFX_SIZE / 4 + ANIMATED_GFX_SIZE * (position))
#define ANIMATED_GFX_TANK_POS(type, frame) (ANIMATED_GFX_SIZE * ANIMATED_GFX_TANK_NBR * (type) + ANIMATED_GFX_SIZE * (frame))