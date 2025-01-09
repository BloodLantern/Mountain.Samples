#ifndef STATUE_OPENING_DATA_H
#define STATUE_OPENING_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/macros.h"
#include "mzm/types.h"

#include "mzm/structs/cutscene.h"

extern const struct CutscenePageData sStatueOpeningPageData[3];
extern const u8 sStatueOpening_Padding3ed4b0[4];

extern const struct OamArray sStatueOpeningOam[9];

extern const u16 sStatueOpeningPAL[8 * 16];
extern const u32 sStatueOpeningRoomGfx[2357];
extern const u32 sStatueOpeningRoomTileTable[318];
extern const u32 sStatueOpening_3effc8[242];


#ifdef __cplusplus
}
#endif

#endif /* STATUE_OPENING_DATA_H */
