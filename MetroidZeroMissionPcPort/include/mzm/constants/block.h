#define BLOCK_TYPE_NONE 0x0
#define BLOCK_TYPE_SHOT_BLOCK_REFORM 0x1
#define BLOCK_TYPE_BOMB_BLOCK_REFORM 0x2
#define BLOCK_TYPE_SPEEDBOOSTER_BLOCK_REFORM 0x3
#define BLOCK_TYPE_CRUMBLE 0x4
#define BLOCK_TYPE_SLOW_CRUMBLE 0x5
#define BLOCK_TYPE_MISSILE_NEVER_REFORM 0x6
#define BLOCK_TYPE_MISSILE_NO_REFORM 0x7
#define BLOCK_TYPE_SUPER_MISSILE_NEVER_REFORM 0x8
#define BLOCK_TYPE_SUPER_MISSILE_NO_REFORM 0x9
#define BLOCK_TYPE_POWER_BOMB_NEVER_REFORM 0xA
#define BLOCK_TYPE_SCREW_NO_REFORM 0xB
#define BLOCK_TYPE_SPEEDBOOSTER_BLOCK_NO_REFORM 0xC
#define BLOCK_TYPE_BOMB_BLOCK_NEVER_REFORM 0xD
#define BLOCK_TYPE_VERTICAL_BOMB_CHAIN1 0xE
#define BLOCK_TYPE_VERTICAL_BOMB_CHAIN2 0xF
#define BLOCK_TYPE_VERTICAL_BOMB_CHAIN3 0x10
#define BLOCK_TYPE_VERTICAL_BOMB_CHAIN4 0x11
#define BLOCK_TYPE_HORIZONTAL_BOMB_CHAIN1 0x12
#define BLOCK_TYPE_HORIZONTAL_BOMB_CHAIN2 0x13
#define BLOCK_TYPE_HORIZONTAL_BOMB_CHAIN3 0x14
#define BLOCK_TYPE_HORIZONTAL_BOMB_CHAIN4 0x15

#define ITEM_TYPE_NONE 0x0
#define ITEM_TYPE_MISSILE 0x1
#define ITEM_TYPE_ENERGY 0x2
#define ITEM_TYPE_SUPER_MISSILE 0x3
#define ITEM_TYPE_POWER_BOMB 0x4
#define ITEM_TYPE_ABILITY 0x80

#define CAA_DAMAGE_TYPE_NONE 0x0
#define CAA_DAMAGE_TYPE_BEAM 0x1
#define CAA_DAMAGE_TYPE_BOMB_PISTOL 0x2
#define CAA_DAMAGE_TYPE_MISSILE 0x4
#define CAA_DAMAGE_TYPE_SUPER_MISSILE 0x8
#define CAA_DAMAGE_TYPE_POWER_BOMB 0x10
#define CAA_DAMAGE_TYPE_SPEEDBOOST 0x20
#define CAA_DAMAGE_TYPE_SPEEDBOOST_ON_GROUND 0x40
#define CAA_DAMAGE_TYPE_SCREW_ATTACK 0x80
#define CAA_DAMAGE_TYPE_BOMB_CHAIN 0x1000

#define TANK_WEAKNESS ((CAA_DAMAGE_TYPE_BEAM | CAA_DAMAGE_TYPE_BOMB_PISTOL | CAA_DAMAGE_TYPE_MISSILE | CAA_DAMAGE_TYPE_SUPER_MISSILE | CAA_DAMAGE_TYPE_POWER_BOMB))

#define BLOCK_LIFE_TYPE_NONE 0x0 
#define BLOCK_LIFE_TYPE_NO_NEVER_REFORM 0x1 
#define BLOCK_LIFE_TYPE_REFORM 0x2 
#define BLOCK_LIFE_TYPE_BOMB_CHAIN 0x3 
#define BLOCK_LIFE_TYPE_TANK 0x4 

#define BLOCK_SUB_TYPE_REFORM 0x0
#define BLOCK_SUB_TYPE_SQUARE_NO_REFORM 0x1
#define BLOCK_SUB_TYPE_NO_REFORM 0x2
#define BLOCK_SUB_TYPE_SQUARE_NEVER_REFORM 0x3
#define BLOCK_SUB_TYPE_BOMB_CHAIN 0x4

#define BOMB_CHAIN_TYPE_VERTICAL1 0x0
#define BOMB_CHAIN_TYPE_VERTICAL2 0x1
#define BOMB_CHAIN_TYPE_VERTICAL3 0x2
#define BOMB_CHAIN_TYPE_VERTICAL4 0x3
#define BOMB_CHAIN_TYPE_HORIZONTAL1 0x4
#define BOMB_CHAIN_TYPE_HORIZONTAL2 0x5
#define BOMB_CHAIN_TYPE_HORIZONTAL3 0x6
#define BOMB_CHAIN_TYPE_HORIZONTAL4 0x7

#define SUB_BOMB_CHAIN_REQUEST_HORIZONTAL_WHEN_GOING_UP 0x0
#define SUB_BOMB_CHAIN_REQUEST_HORIZONTAL_WHEN_GOING_DOWN 0x1
#define SUB_BOMB_CHAIN_REQUEST_VERTICAL_WHEN_GOING_LEFT 0x2
#define SUB_BOMB_CHAIN_REQUEST_VERTICAL_WHEN_GOING_RIGHT 0x3