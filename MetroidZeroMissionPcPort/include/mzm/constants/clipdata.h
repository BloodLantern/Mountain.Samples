#define MAX_AMOUNT_OF_CAA 16

#define CAA_NONE 0x0
#define CAA_REMOVE_SOLID 0x1
#define CAA_MAKE_SOLID_GRIPPABLE 0x2
#define CAA_MAKE_STOP_ENEMY 0x3
#define CAA_MAKE_NON_POWER_GRIP 0x4
#define CAA_BOMB_CHAIN_UNUSED 0x5
#define CAA_UNUSED 0x6
#define CAA_BEAM 0x7
#define CAA_BOMB_PISTOL 0x8
#define CAA_MISSILE 0x9
#define CAA_SUPER_MISSILE 0xA
#define CAA_POWER_BOMB 0xB
#define CAA_SPEEDBOOSTER 0xC
#define CAA_SPEEDBOOSTER_ON_GROUND 0xD
#define CAA_SCREW_ATTACK 0xE
#define CAA_BOMB_CHAIN 0xF

#define COLLISION_AIR 0x0
#define COLLISION_LEFT_SLIGHT_FLOOR_SLOPE 0x2
#define COLLISION_RIGHT_SLIGHT_FLOOR_SLOPE 0x3
#define COLLISION_LEFT_STEEP_FLOOR_SLOPE 0x4
#define COLLISION_RIGHT_STEEP_FLOOR_SLOPE 0x5
#define COLLISION_PASS_THROUGH_BOTTOM 0x10
#define COLLISION_SOLID 0x11
#define COLLISION_FLAGS_UNKNOWN (COLLISION_PASS_THROUGH_BOTTOM | 0x20 | 0x40 | 0x80)

#define CLIPDATA_MOVEMENT_NONE 0x0
#define CLIPDATA_MOVEMENT_ELEVATOR_DOWN_BLOCK 0x1
#define CLIPDATA_MOVEMENT_ELEVATOR_UP_BLOCK 0x2
#define CLIPDATA_MOVEMENT_NON_POWER_GRIP 0x6
#define CLIPDATA_MOVEMENT_STOP_ENEMY_BLOCK_SOLID 0x7
#define CLIPDATA_MOVEMENT_SPACE_PIRATE_ZONELINE 0x8
#define CLIPDATA_MOVEMENT_SPACE_PIRATE_WALLJUMP_POINT 0x9

#define HAZARD_TYPE_NONE 0x0
#define HAZARD_TYPE_WATER 0x1
#define HAZARD_TYPE_STRONG_LAVA 0x2
#define HAZARD_TYPE_WEAK_LAVA 0x3
#define HAZARD_TYPE_ACID 0x4
#define HAZARD_TYPE_HEAT 0x5
#define HAZARD_TYPE_COLD_KNOCKBACK 0x6
#define HAZARD_TYPE_COLD 0x7

#define GROUND_EFFECT_NONE 0x0
#define GROUND_EFFECT_WET_GROUND 0x1
#define GROUND_EFFECT_DUSTY_GROUND 0x2
#define GROUND_EFFECT_VERY_DUSTY_GROUND 0x3
#define GROUND_EFFECT_UNKNOWN 0x4
#define GROUND_EFFECT_BUBBLY_GROUND 0x5

#define CLIPDATA_ACTOR_SAMUS 0x0
#define CLIPDATA_ACTOR_NON_SPRITE 0x1
#define CLIPDATA_ACTOR_SPRITE 0x2

#define CLIPDATA_TYPE_AIR 0x0
#define CLIPDATA_TYPE_SOLID 0x1
#define CLIPDATA_TYPE_LEFT_STEEP_FLOOR_SLOPE 0x2
#define CLIPDATA_TYPE_RIGHT_STEEP_FLOOR_SLOPE 0x3
#define CLIPDATA_TYPE_LEFT_UPPER_SLIGHT_FLOOR_SLOPE 0x4
#define CLIPDATA_TYPE_LEFT_LOWER_SLIGHT_FLOOR_SLOPE 0x5
#define CLIPDATA_TYPE_RIGHT_LOWER_SLIGHT_FLOOR_SLOPE 0x6
#define CLIPDATA_TYPE_RIGHT_UPPER_SLIGHT_FLOOR_SLOPE 0x7
#define CLIPDATA_TYPE_ENEMY_ONLY 0x8
#define CLIPDATA_TYPE_STOP_ENEMY 0x9
#define CLIPDATA_TYPE_TANK 0xA
#define CLIPDATA_TYPE_DOOR 0xB
#define CLIPDATA_TYPE_PASS_THROUGH_BOTTOM 0xC
#define CLIPDATA_TYPE_SOLID_FLAG 0x1000000

#define CLIP_BEHAVIOR_NONE 0x0
#define CLIP_BEHAVIOR_ELEVATOR_DOWN 0x1
#define CLIP_BEHAVIOR_ELEVATOR_UP 0x2
#define CLIP_BEHAVIOR_DOOR_TRANSITION 0x3
#define CLIP_BEHAVIOR_VERTICAL_UP_TRANSITION 0x4
#define CLIP_BEHAVIOR_VERTICAL_DOWN_TRANSITION 0x5
#define CLIP_BEHAVIOR_NON_POWER_GRIP 0x6
#define CLIP_BEHAVIOR_STOP_ENEMY_SOLID 0x7
#define CLIP_BEHAVIOR_SPACE_PIRATE_ZONELINE 0x8
#define CLIP_BEHAVIOR_SPACE_PIRATE_WALLJUMP_POINT 0x9
#define CLIP_BEHAVIOR_SHOT_BLOCK_NEVER_REFORM 0x10
#define CLIP_BEHAVIOR_TOP_LEFT_SHOT_BLOCK_NEVER_REFORM 0x11
#define CLIP_BEHAVIOR_TOP_RIGHT_SHOT_BLOCK_NEVER_REFORM 0x12
#define CLIP_BEHAVIOR_BOTTOM_LEFT_SHOT_BLOCK_NEVER_REFORM 0x13
#define CLIP_BEHAVIOR_BOTTOM_RIGHT_SHOT_BLOCK_NEVER_REFORM 0x14
#define CLIP_BEHAVIOR_SHOT_BLOCK_NO_REFORM 0x15
#define CLIP_BEHAVIOR_TOP_LEFT_SHOT_BLOCK_NO_REFORM 0x16
#define CLIP_BEHAVIOR_TOP_RIGHT_SHOT_BLOCK_NO_REFORM 0x17
#define CLIP_BEHAVIOR_BOTTOM_LEFT_SHOT_BLOCK_NO_REFORM 0x18
#define CLIP_BEHAVIOR_BOTTOM_RIGHT_SHOT_BLOCK_NO_REFORM 0x19
#define CLIP_BEHAVIOR_SHOT_BLOCK_REFORM 0x1A
#define CLIP_BEHAVIOR_BOMB_BLOCK_NEVER_REFORM 0x1B
#define CLIP_BEHAVIOR_BOMB_BLOCK_REFORM 0x1C
#define CLIP_BEHAVIOR_MISSILE_BLOCK_NEVER_REFORM 0x1D
#define CLIP_BEHAVIOR_MISSILE_BLOCK_NO_REFORM 0x1E
#define CLIP_BEHAVIOR_SUPER_MISSILE_BLOCK_NEVER_REFORM 0x1F
#define CLIP_BEHAVIOR_SUPER_MISSILE_BLOCK_NO_REFORM 0x20
#define CLIP_BEHAVIOR_SPEEDBOOST_BLOCK_NO_REFORM 0x21
#define CLIP_BEHAVIOR_SPEEDBOOST_BLOCK_REFORM 0x22
#define CLIP_BEHAVIOR_CRUMBLE_BLOCK 0x23
#define CLIP_BEHAVIOR_POWER_BOMB_BLOCK_NEVER_REFORM 0x24
#define CLIP_BEHAVIOR_SCREW_ATTACK_BLOCK_NO_REFORM 0x25
#define CLIP_BEHAVIOR_VERTICAL_BOMB_CHAIN1 0x26
#define CLIP_BEHAVIOR_VERTICAL_BOMB_CHAIN2 0x27
#define CLIP_BEHAVIOR_VERTICAL_BOMB_CHAIN3 0x28
#define CLIP_BEHAVIOR_VERTICAL_BOMB_CHAIN4 0x29
#define CLIP_BEHAVIOR_HORIZONTAL_BOMB_CHAIN1 0x2A
#define CLIP_BEHAVIOR_HORIZONTAL_BOMB_CHAIN2 0x2B
#define CLIP_BEHAVIOR_HORIZONTAL_BOMB_CHAIN3 0x2C
#define CLIP_BEHAVIOR_HORIZONTAL_BOMB_CHAIN4 0x2D
#define CLIP_BEHAVIOR_SLOW_CRUMBLE_BLOCK 0x2E
#define CLIP_BEHAVIOR_HIDDEN_ENERGY_TANK 0x34
#define CLIP_BEHAVIOR_HIDDEN_MISSILE_TANK 0x35
#define CLIP_BEHAVIOR_HIDDEN_SUPER_MISSILE_TANK 0x36
#define CLIP_BEHAVIOR_HIDDEN_POWER_BOMB_TANK 0x37
#define CLIP_BEHAVIOR_ENERGY_TANK 0x38
#define CLIP_BEHAVIOR_MISSILE_TANK 0x39
#define CLIP_BEHAVIOR_SUPER_MISSILE_TANK 0x3A
#define CLIP_BEHAVIOR_POWER_BOMB_TANK 0x3B
#define CLIP_BEHAVIOR_UNDERWATER_ENERGY_TANK 0x3C
#define CLIP_BEHAVIOR_UNDERWATER_MISSILE_TANK 0x3D
#define CLIP_BEHAVIOR_UNDERWATER_SUPER_MISSILE_TANK 0x3E
#define CLIP_BEHAVIOR_UNDERWATER_POWER_BOMB_TANK 0x3F
#define CLIP_BEHAVIOR_WATER 0x40
#define CLIP_BEHAVIOR_STRONG_LAVA 0x41
#define CLIP_BEHAVIOR_WEAK_LAVA 0x42
#define CLIP_BEHAVIOR_ACID 0x43
#define CLIP_BEHAVIOR_BG0_TRIGGER_OPAQUE 0x44
#define CLIP_BEHAVIOR_BG0_TRIGGER_TRANSPARENT_LEVEL1 0x45
#define CLIP_BEHAVIOR_BG0_TRIGGER_TRANSPARENT_LEVEL2 0x46
#define CLIP_BEHAVIOR_BG0_TRIGGER_TRANSPARENT_LEVEL3 0x47
#define CLIP_BEHAVIOR_BG0_TRIGGER_TRANSPARENT_LEVEL4 0x48
#define CLIP_BEHAVIOR_BG0_TRIGGER_TRANSPARENT_LEVEL5 0x49
#define CLIP_BEHAVIOR_BG0_TRIGGER_TRANSPARENT_FULL 0x4A
#define CLIP_BEHAVIOR_BG0_TRIGGER_BRIGHTER_LEVEL1 0x4B
#define CLIP_BEHAVIOR_BG0_TRIGGER_BRIGHTER_LEVEL2 0x4C
#define CLIP_BEHAVIOR_BG0_TRIGGER_BRIGHTER_LEVEL3 0x4D
#define CLIP_BEHAVIOR_BG0_TRIGGER_BRIGHTER_LEVEL4 0x4E
#define CLIP_BEHAVIOR_BG0_TRIGGER_DEFAULT_TRANSPARENCY 0x4F
#define CLIP_BEHAVIOR_WET_GROUND 0x50
#define CLIP_BEHAVIOR_DUSTY_GROUND 0x51
#define CLIP_BEHAVIOR_GROUND_EFFECT_UNUSED 0x52
#define CLIP_BEHAVIOR_BUBBLY_GROUND 0x53
#define CLIP_BEHAVIOR_VERY_DUSTY_GROUND 0x54
#define CLIP_BEHAVIOR_GROUND_EFFECT_UNUSED1 0x55
#define CLIP_BEHAVIOR_GROUND_EFFECT_UNUSED2 0x56
#define CLIP_BEHAVIOR_GROUND_EFFECT_UNUSED3 0x57
#define CLIP_BEHAVIOR_GRAY_DOOR 0x80
#define CLIP_BEHAVIOR_REGULAR_DOOR 0x81
#define CLIP_BEHAVIOR_MISSILE_DOOR 0x82
#define CLIP_BEHAVIOR_SUPER_MISSILE_DOOR 0x83
#define CLIP_BEHAVIOR_POWER_BOMB_DOOR 0x84


#define CLIPDATA_AIR 0x0
#define CLIPDATA_PASS_THROUGH_BOTTOM 0x1
#define CLIPDATA_NON_POWER_GRIP 0x2
#define CLIPDATA_ENEMY_ONLY 0x7
#define CLIPDATA_STOP_ENEMY_SOLID 0x9
#define CLIPDATA_SOLID 0x10
#define CLIPDATA_RIGHT_STEEP_FLOOR_SLOPE 0x11
#define CLIPDATA_LEFT_STEEP_FLOOR_SLOPE 0x12
#define CLIPDATA_RIGHT_LOWER_SLIGHT_FLOOR_SLOPE 0x13
#define CLIPDATA_RIGHT_UPPER_SLIGHT_FLOOR_SLOPE 0x14
#define CLIPDATA_LEFT_UPPER_SLIGHT_FLOOR_SLOPE 0x15
#define CLIPDATA_LEFT_LOWER_SLIGHT_FLOOR_SLOPE 0x16
#define CLIPDATA_STOP_ENEMY_AIR 0x17
#define CLIPDATA_SPACE_PIRATE_ZONELINE 0x18
#define CLIPDATA_SPACE_PIRATE_WALLJUMP_POINT 0x19
#define CLIPDATA_SOLID_UNUSED 0x1A
#define CLIPDATA_WATER 0x1B
#define CLIPDATA_WET_GROUND 0x1C
#define CLIPDATA_DUSTY_GROUND 0x1D
#define CLIPDATA_GROUND_EFFECT_UNUSED 0x1E
#define CLIPDATA_DOOR_TRANSITION 0x20
#define CLIPDATA_LEFT_STEEP_CEILING_SLOPE 0x21
#define CLIPDATA_RIGHT_STEEP_CEILING_SLOPE 0x22
#define CLIPDATA_LEFT_UPPER_SLIGHT_CEILING_SLOPE 0x23
#define CLIPDATA_LEFT_LOWER_SLIGHT_CEILING_SLOPE 0x24
#define CLIPDATA_RIGHT_LOWER_SLIGHT_CEILING_SLOPE 0x25
#define CLIPDATA_RIGHT_UPPER_SLIGHT_CEILING_SLOPE 0x26
#define CLIPDATA_VERTICAL_UP_TRANSITION 0x27
#define CLIPDATA_VERTICAL_DOWN_TRANSITION 0x28
#define CLIPDATA_ELEVATOR_UP 0x29
#define CLIPDATA_ELEVATOR_DOWN 0x2A
#define CLIPDATA_BUBBLY_GROUND 0x2C
#define CLIPDATA_VERY_DUSTY_GROUND 0x2D
#define CLIPDATA_GRAY_DOOR 0x30
#define CLIPDATA_REGULAR_DOOR 0x36
#define CLIPDATA_MISSILE_DOOR 0x40
#define CLIPDATA_SUPER_MISSILE_DOOR 0x46
#define CLIPDATA_POWER_BOMB_DOOR 0x4C
#define CLIPDATA_TOP_LEFT_SHOT_BLOCK_NEVER_REFORM 0x50
#define CLIPDATA_TOP_RIGHT_SHOT_BLOCK_NEVER_REFORM 0x51
#define CLIPDATA_SHOT_BLOCK_NEVER_REFORM 0x52
#define CLIPDATA_TOP_LEFT_SHOT_BLOCK_NO_REFORM 0x53
#define CLIPDATA_TOP_RIGHT_SHOT_BLOCK_NO_REFORM 0x54
#define CLIPDATA_SHOT_BLOCK_NO_REFORM 0x55
#define CLIPDATA_CRUMBLE 0x56
#define CLIPDATA_BOMB_BLOCK_NEVER_REFORM 0x57
#define CLIPDATA_MISSILE_BLOCK_NEVER_REFORM 0x58
#define CLIPDATA_SUPER_MISSILE_BLOCK_NEVER_REFORM 0x59
#define CLIPDATA_SPEEDBOOST_BLOCK_NO_REFORM 0x5A
#define CLIPDATA_POWER_BOMB_BLOCK_NEVER_REFORM 0x5B
#define CLIPDATA_ENERGY_TANK 0x5C
#define CLIPDATA_MISSILE_TANK 0x5D
#define CLIPDATA_SUPER_MISSILE_TANK 0x5E
#define CLIPDATA_POWER_BOMB_TANK 0x5F
#define CLIPDATA_BOTTOM_LEFT_SHOT_BLOCK_NEVER_REFORM 0x60
#define CLIPDATA_BOTTOM_RIGHT_SHOT_BLOCK_NEVER_REFORM 0x61
#define CLIPDATA_SHOT_BLOCK_REFORM 0x62
#define CLIPDATA_BOTTOM_LEFT_SHOT_BLOCK_NO_REFORM 0x63
#define CLIPDATA_BOTTOM_RIGHT_SHOT_BLOCK_NO_REFORM 0x64
#define CLIPDATA_SLOW_CRUMBLE 0x66
#define CLIPDATA_BOMB_BLOCK_REFORM 0x67
#define CLIPDATA_MISSILE_BLOCK_NO_REFORM 0x68
#define CLIPDATA_SUPER_MISSILE_BLOCK_NO_REFORM 0x69
#define CLIPDATA_SPEEDBOOST_BLOCK_REFORM 0x6A
#define CLIPDATA_SCREW_ATTACK_NO_REFORM 0x6B
#define CLIPDATA_HIDDEN_ENERGY_TANK 0x6C
#define CLIPDATA_HIDDEN_MISSILE_TANK 0x6D
#define CLIPDATA_HIDDEN_SUPER_MISSILE_TANK 0x6E
#define CLIPDATA_HIDDEN_POWER_BOMB_TANK 0x6F
#define CLIPDATA_VERTICAL_BOMB_CHAIN1 0x70
#define CLIPDATA_VERTICAL_BOMB_CHAIN2 0x71
#define CLIPDATA_VERTICAL_BOMB_CHAIN3 0x72
#define CLIPDATA_VERTICAL_BOMB_CHAIN4 0x73
#define CLIPDATA_HORIZONTAL_BOMB_CHAIN1 0x74
#define CLIPDATA_HORIZONTAL_BOMB_CHAIN2 0x75
#define CLIPDATA_HORIZONTAL_BOMB_CHAIN3 0x76
#define CLIPDATA_HORIZONTAL_BOMB_CHAIN4 0x77
#define CLIPDATA_UNDERWATER_ENERGY_TANK 0x7C
#define CLIPDATA_UNDERWATER_MISSILE_TANK 0x7D
#define CLIPDATA_UNDERWATER_SUPER_MISSILE_TANK 0x7E
#define CLIPDATA_UNDERWATER_POWER_BOMB_TANK 0x7F
#define CLIPDATA_BG0_TRIGGER_OPAQUE 0x80
#define CLIPDATA_BG0_TRIGGER_TRANSPARENT_LEVEL1 0x81
#define CLIPDATA_BG0_TRIGGER_TRANSPARENT_LEVEL2 0x82
#define CLIPDATA_BG0_TRIGGER_TRANSPARENT_LEVEL3 0x83
#define CLIPDATA_BG0_TRIGGER_TRANSPARENT_LEVEL4 0x84
#define CLIPDATA_BG0_TRIGGER_TRANSPARENT_LEVEL5 0x85
#define CLIPDATA_BG0_TRIGGER_TRANSPARENT_FULL 0x86
#define CLIPDATA_BG0_TRIGGER_BRIGHTER_LEVEL1 0x87
#define CLIPDATA_BG0_TRIGGER_BRIGHTER_LEVEL2 0x88
#define CLIPDATA_BG0_TRIGGER_BRIGHTER_LEVEL3 0x89
#define CLIPDATA_BG0_TRIGGER_BRIGHTER_LEVEL4 0x8A
#define CLIPDATA_BG0_TRIGGER_DEFAULT_TRANSPARENCY 0x8B
#define CLIPDATA_WEAK_LAVA 0xA0
#define CLIPDATA_STRONG_LAVA 0xA1
#define CLIPDATA_ACID 0xA2


#define CLIPDATA_TILEMAP_FLAG 0x400

#define CLIPDATA_TILEMAP_AIR 0x0
#define CLIPDATA_TILEMAP_SOLID 0x1
#define CLIPDATA_TILEMAP_SOLID_BREAKING_1 0x2
#define CLIPDATA_TILEMAP_SOLID_BREAKING_2 0x3
#define CLIPDATA_TILEMAP_SOLID_BREAKING_3 0x4
#define CLIPDATA_TILEMAP_SHOT_BLOCK_REFORM 0x5
#define CLIPDATA_TILEMAP_BOMB_BLOCK_REFORM 0x6
#define CLIPDATA_TILEMAP_POWER_BOMB_NEVER_REFORM 0x7
#define CLIPDATA_TILEMAP_SPEEDBOOST_NO_REFORM 0x8
#define CLIPDATA_TILEMAP_SPEEDBOOST_REFORM 0x9
#define CLIPDATA_TILEMAP_SCREW_ATTACK_NO_REFORM 0xA
#define CLIPDATA_TILEMAP_CRUMBLE 0xB
#define CLIPDATA_TILEMAP_MISSILE_NEVER_REFORM 0xC
#define CLIPDATA_TILEMAP_MISSILE_NO_REFORM 0xD
#define CLIPDATA_TILEMAP_SUPER_MISSILE_NEVER_REFORM 0xE
#define CLIPDATA_TILEMAP_SUPER_MISSILE_NO_REFORM 0xF

#define CLIPDATA_TILEMAP_CLOSED_DOOR_TOP_LEFT 0x1A
#define CLIPDATA_TILEMAP_CLOSED_DOOR_TOP_RIGHT 0x1B
#define CLIPDATA_TILEMAP_ENERGY_TANK 0x1C
#define CLIPDATA_TILEMAP_MISSILE_TANK 0x1D
#define CLIPDATA_TILEMAP_SUPER_MISSILE_TANK 0x1E
#define CLIPDATA_TILEMAP_POWER_BOMB_TANK 0x1F

#define CLIPDATA_TILEMAP_CLOSED_DOOR_MIDDLE_TOP_LEFT 0x2A
#define CLIPDATA_TILEMAP_CLOSED_DOOR_MIDDLE_TOP_RIGHT 0x2B
#define CLIPDATA_TILEMAP_UNDERWATER_ENERGY_TANK 0x2C
#define CLIPDATA_TILEMAP_UNDERWATER_MISSILE_TANK 0x2D
#define CLIPDATA_TILEMAP_UNDERWATER_SUPER_MISSILE_TANK 0x2E
#define CLIPDATA_TILEMAP_UNDERWATER_POWER_BOMB_TANK 0x2F

#define CLIPDATA_TILEMAP_CLOSED_DOOR_MIDDLE_BOTTOM_LEFT 0x3A
#define CLIPDATA_TILEMAP_CLOSED_DOOR_MIDDLE_BOTTOM_RIGHT 0x3B
#define CLIPDATA_TILEMAP_WATER 0x3C
#define CLIPDATA_TILEMAP_STOP_ENEMY_AIR 0x3D
#define CLIPDATA_TILEMAP_SOLID2 0x3E
#define CLIPDATA_TILEMAP_NON_POWER_GRIP 0x3F

#define CLIPDATA_TILEMAP_CLOSED_DOOR_BOTTOM_LEFT 0x4A
#define CLIPDATA_TILEMAP_CLOSED_DOOR_BOTTOM_RIGHT 0x4B

#define CLIPDATA_TILEMAP_VERTICAL_BOMB_CHAIN1 0x5C
#define CLIPDATA_TILEMAP_VERTICAL_BOMB_CHAIN2 0x5D
#define CLIPDATA_TILEMAP_VERTICAL_BOMB_CHAIN3 0x5E
#define CLIPDATA_TILEMAP_VERTICAL_BOMB_CHAIN4 0x5F
// Missing ones
#define CLIPDATA_TILEMAP_HORIZONTAL_BOMB_CHAIN1 0x6C
#define CLIPDATA_TILEMAP_HORIZONTAL_BOMB_CHAIN2 0x6D
#define CLIPDATA_TILEMAP_HORIZONTAL_BOMB_CHAIN3 0x6E
#define CLIPDATA_TILEMAP_HORIZONTAL_BOMB_CHAIN4 0x6F
// Missing ones
#define CLIPDATA_TILEMAP_BOMB_NEVER_REFORM 0x7C
#define CLIPDATA_TILEMAP_SLOW_CRUMBLE 0x7D

#define CLIPDATA_TILEMAP_GRAY_DOOR_TOP_LEFT 0x90
#define CLIPDATA_TILEMAP_GRAY_DOOR_TOP_RIGHT 0x91
#define CLIPDATA_TILEMAP_REGULAR_DOOR_TOP_LEFT 0x92
#define CLIPDATA_TILEMAP_REGULAR_DOOR_TOP_RIGHT 0x93
#define CLIPDATA_TILEMAP_MISSILE_DOOR_TOP_LEFT 0x94
#define CLIPDATA_TILEMAP_MISSILE_DOOR_TOP_RIGHT 0x95
#define CLIPDATA_TILEMAP_SUPER_MISSILE_DOOR_TOP_LEFT 0x96
#define CLIPDATA_TILEMAP_SUPER_MISSILE_DOOR_TOP_RIGHT 0x97
#define CLIPDATA_TILEMAP_POWER_BOMB_DOOR_TOP_LEFT 0x98
#define CLIPDATA_TILEMAP_POWER_BOMB_DOOR_TOP_RIGHT 0x99
#define CLIPDATA_TILEMAP_NO_HATCH_DOOR_TOP_LEFT 0x9A
#define CLIPDATA_TILEMAP_NO_HATCH_DOOR_TOP_RIGHT 0x9B

#define CLIPDATA_TILEMAP_GRAY_DOOR_MIDDLE_TOP_LEFT 0xA0
#define CLIPDATA_TILEMAP_GRAY_DOOR_MIDDLE_TOP_RIGHT 0xA1
#define CLIPDATA_TILEMAP_REGULAR_DOOR_MIDDLE_TOP_LEFT 0xA2
#define CLIPDATA_TILEMAP_REGULAR_DOOR_MIDDLE_TOP_RIGHT 0xA3
#define CLIPDATA_TILEMAP_MISSILE_DOOR_MIDDLE_TOP_LEFT 0xA4
#define CLIPDATA_TILEMAP_MISSILE_DOOR_MIDDLE_TOP_RIGHT 0xA5
#define CLIPDATA_TILEMAP_SUPER_MISSILE_DOOR_MIDDLE_TOP_LEFT 0xA6
#define CLIPDATA_TILEMAP_SUPER_MISSILE_DOOR_MIDDLE_TOP_RIGHT 0xA7
#define CLIPDATA_TILEMAP_POWER_BOMB_DOOR_MIDDLE_TOP_LEFT 0xA8
#define CLIPDATA_TILEMAP_POWER_BOMB_DOOR_MIDDLE_TOP_RIGHT 0xA9
#define CLIPDATA_TILEMAP_NO_HATCH_DOOR_MIDDLE_TOP_LEFT 0xAA
#define CLIPDATA_TILEMAP_NO_HATCH_DOOR_MIDDLE_TOP_RIGHT 0xAB

#define CLIPDATA_TILEMAP_GRAY_DOOR_MIDDLE_BOTTOM_LEFT 0xB0
#define CLIPDATA_TILEMAP_GRAY_DOOR_MIDDLE_BOTTOM_RIGHT 0xB1
#define CLIPDATA_TILEMAP_REGULAR_DOOR_MIDDLE_BOTTOM_LEFT 0xB2
#define CLIPDATA_TILEMAP_REGULAR_DOOR_MIDDLE_BOTTOM_RIGHT 0xB3
#define CLIPDATA_TILEMAP_MISSILE_DOOR_MIDDLE_BOTTOM_LEFT 0xB4
#define CLIPDATA_TILEMAP_MISSILE_DOOR_MIDDLE_BOTTOM_RIGHT 0xB5
#define CLIPDATA_TILEMAP_SUPER_MISSILE_DOOR_MIDDLE_BOTTOM_LEFT 0xB6
#define CLIPDATA_TILEMAP_SUPER_MISSILE_DOOR_MIDDLE_BOTTOM_RIGHT 0xB7
#define CLIPDATA_TILEMAP_POWER_BOMB_DOOR_MIDDLE_BOTTOM_LEFT 0xB8
#define CLIPDATA_TILEMAP_POWER_BOMB_DOOR_MIDDLE_BOTTOM_RIGHT 0xB9
#define CLIPDATA_TILEMAP_NO_HATCH_DOOR_MIDDLE_BOTTOM_LEFT 0xBA
#define CLIPDATA_TILEMAP_NO_HATCH_DOOR_MIDDLE_BOTTOM_RIGHT 0xBB

#define CLIPDATA_TILEMAP_GRAY_DOOR_BOTTOM_LEFT 0xC0
#define CLIPDATA_TILEMAP_GRAY_DOOR_BOTTOM_RIGHT 0xC1
#define CLIPDATA_TILEMAP_REGULAR_DOOR_BOTTOM_LEFT 0xC2
#define CLIPDATA_TILEMAP_REGULAR_DOOR_BOTTOM_RIGHT 0xC3
#define CLIPDATA_TILEMAP_MISSILE_DOOR_BOTTOM_LEFT 0xC4
#define CLIPDATA_TILEMAP_MISSILE_DOOR_BOTTOM_RIGHT 0xC5
#define CLIPDATA_TILEMAP_SUPER_MISSILE_DOOR_BOTTOM_LEFT 0xC6
#define CLIPDATA_TILEMAP_SUPER_MISSILE_DOOR_BOTTOM_RIGHT 0xC7
#define CLIPDATA_TILEMAP_POWER_BOMB_DOOR_BOTTOM_LEFT 0xC8
#define CLIPDATA_TILEMAP_POWER_BOMB_DOOR_BOTTOM_RIGHT 0xC9
#define CLIPDATA_TILEMAP_NO_HATCH_DOOR_BOTTOM_LEFT 0xCA
#define CLIPDATA_TILEMAP_NO_HATCH_DOOR_BOTTOM_RIGHT 0xCB


#define CLIPDATA_DEBUG_AIR 0x0
#define CLIPDATA_DEBUG_SOLID 0x1
#define CLIPDATA_DEBUG_WATER 0x2
#define CLIPDATA_DEBUG_DOOR_TRANSITION 0x3
#define CLIPDATA_DEBUG_NON_POWER_GRIP 0x4
#define CLIPDATA_DEBUG_RIGHT_STEEP_FLOOR_SLOPE 0x10
#define CLIPDATA_DEBUG_LEFT_STEEP_FLOOR_SLOPE 0x11
#define CLIPDATA_DEBUG_RIGHT_LOWER_SLIGHT_FLOOR_SLOPE 0x12
#define CLIPDATA_DEBUG_RIGHT_UPPER_SLIGHT_FLOOR_SLOPE 0x13
#define CLIPDATA_DEBUG_LEFT_UPPER_SLIGHT_FLOOR_SLOPE 0x14
#define CLIPDATA_DEBUG_LEFT_LOWER_SLIGHT_FLOOR_SLOPE 0x15
#define CLIPDATA_DEBUG_STOP_ENEMY 0x16
#define CLIPDATA_DEBUG_STOP_ENEMY_SOLID 0x17
#define CLIPDATA_DEBUG_SPACE_PIRATE_ZONELINE 0x18
#define CLIPDATA_DEBUG_SPACE_PIRATE_WALLJUMP_POINT 0x19
#define CLIPDATA_DEBUG_GRAY_DOOR 0x30
#define CLIPDATA_DEBUG_REGULAR_DOOR 0x31
#define CLIPDATA_DEBUG_MISSILE_DOOR 0x32
#define CLIPDATA_DEBUG_SUPER_MISSILE_DOOR 0x33
#define CLIPDATA_DEBUG_POWER_BOMB_DOOR 0x34
#define CLIPDATA_DEBUG_TOP_LEFT_SHOT_BLOCK_NEVER_REFORM 0x40
#define CLIPDATA_DEBUG_TOP_RIGHT_SHOT_BLOCK_NEVER_REFORM 0x41
#define CLIPDATA_DEBUG_SHOT_BLOCK_NEVER_REFORM 0x42
#define CLIPDATA_DEBUG_BOMB_BLOCK_NEVER_REFORM 0x43
#define CLIPDATA_DEBUG_MISSILE_BLOCK_NEVER_REFORM 0x44
#define CLIPDATA_DEBUG_SUPER_MISSILE_BLOCK_NEVER_REFORM 0x45
#define CLIPDATA_DEBUG_SPEEDBOOST_BLOCK_NO_REFORM 0x46
#define CLIPDATA_DEBUG_BOTTOM_LEFT_SHOT_BLOCK_NEVER_REFORM 0x50
#define CLIPDATA_DEBUG_BOTTOM_RIGHT_SHOT_BLOCK_NEVER_REFORM 0x51
#define CLIPDATA_DEBUG_SHOT_BLOCK_REFORM 0x52
#define CLIPDATA_DEBUG_BOMB_BLOCK_REFORM 0x53
#define CLIPDATA_DEBUG_MISSILE_NO_REFORM 0x54
#define CLIPDATA_DEBUG_SUPER_MISSILE_NO_REFORM 0x55
#define CLIPDATA_DEBUG_SPEEDBOOSTER_REFORM 0x56
#define CLIPDATA_DEBUG_SCREW_ATTACK_NO_REFORM 0x57
#define CLIPDATA_DEBUG_CRUMBLE_BLOCK 0x58
#define CLIPDATA_DEBUG_POWER_BOMB_NEVER_REFORM 0x59
#define CLIPDATA_DEBUG_SLOW_CRUMBLE_BLOCK 0x5A
#define CLIPDATA_DEBUG_TOP_LEFT_SHOT_BLOCK_NO_REFORM 0x60
#define CLIPDATA_DEBUG_TOP_RIGHT_SHOT_BLOCK_NO_REFORM 0x61
#define CLIPDATA_DEBUG_SHOT_BLOCK_NO_REFORM 0x62
#define CLIPDATA_DEBUG_HIDDEN_MISSILE_TANK 0x63
#define CLIPDATA_DEBUG_HIDDEN_ENERGY_TANK 0x64
#define CLIPDATA_DEBUG_HIDDEN_POWER_BOMB_TANK 0x65
#define CLIPDATA_DEBUG_HIDDEN_SUPER_MISSILE_TANK 0x66
#define CLIPDATA_DEBUG_BOTTOM_LEFT_SHOT_BLOCK_NO_REFORM 0x70
#define CLIPDATA_DEBUG_BOTTOM_RIGHT_SHOT_BLOCK_NO_REFORM 0x71
#define CLIPDATA_DEBUG_MISSILE_TANK 0x73
#define CLIPDATA_DEBUG_ENERGY_TANK 0x74
#define CLIPDATA_DEBUG_POWER_BOMB_TANK 0x75
#define CLIPDATA_DEBUG_SUPER_MISSILE_TANK 0x76
#define CLIPDATA_DEBUG_VERTICAL_BOMB_CHAIN1 0x78
#define CLIPDATA_DEBUG_VERTICAL_BOMB_CHAIN2 0x79
#define CLIPDATA_DEBUG_VERTICAL_BOMB_CHAIN3 0x7A
#define CLIPDATA_DEBUG_VERTICAL_BOMB_CHAIN4 0x7B
#define CLIPDATA_DEBUG_HORIZONTAL_BOMB_CHAIN1 0x7C
#define CLIPDATA_DEBUG_HORIZONTAL_BOMB_CHAIN2 0x7D
#define CLIPDATA_DEBUG_HORIZONTAL_BOMB_CHAIN3 0x7E
#define CLIPDATA_DEBUG_HORIZONTAL_BOMB_CHAIN4 0x7F
#define CLIPDATA_DEBUG_UNDERWATER_MISSILE_TANK 0x83
#define CLIPDATA_DEBUG_UNDERWATER_ENERGY_TANK 0x84
#define CLIPDATA_DEBUG_UNDERWATER_POWER_BOMB_TANK 0x85
#define CLIPDATA_DEBUG_UNDERWATER_SUPER_MISSILE_TANK 0x86
#define CLIPDATA_DEBUG_BG0_TRIGGER_OPAQUE 0x88
#define CLIPDATA_DEBUG_BG0_TRIGGER_TRANSPARENT_LEVEL1 0x89
#define CLIPDATA_DEBUG_BG0_TRIGGER_TRANSPARENT_LEVEL2 0x8A
#define CLIPDATA_DEBUG_BG0_TRIGGER_TRANSPARENT_LEVEL3 0x8B
#define CLIPDATA_DEBUG_BG0_TRIGGER_TRANSPARENT_LEVEL4 0x8C
#define CLIPDATA_DEBUG_BG0_TRIGGER_TRANSPARENT_LEVEL5 0x8D
#define CLIPDATA_DEBUG_BG0_TRIGGER_TRANSPARENT_FULL 0x8E
#define CLIPDATA_DEBUG_BG0_TRIGGER_DEFAUL_TRANSPARENCY 0x8F
#define CLIPDATA_DEBUG_BG0_TRIGGER_BRIGHTER1 0x98
#define CLIPDATA_DEBUG_BG0_TRIGGER_BRIGHTER2 0x99
#define CLIPDATA_DEBUG_BG0_TRIGGER_BRIGHTER3 0x9A
#define CLIPDATA_DEBUG_BG0_TRIGGER_BRIGHTER4 0x9B