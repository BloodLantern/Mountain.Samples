#ifndef WAVER_DATA_H
#define WAVER_DATA_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "mzm/types.h"
#include "mzm/oam.h"

extern const u32 sWaverGfx[289];
extern const u16 sWaverPAL[16];

extern const u16 sWaverOAM_Frame0[7];

extern const u16 sWaverOAM_Frame1[4];

extern const u16 sWaverOAM_Frame2[4];

extern const u16 sWaverOAM_Frame3[4];

extern const u16 sWaverOAM_Frame4[7];

extern const u16 sWaverOAM_Frame5[7];

extern const struct FrameData sWaverOAM[7];

#ifdef __cplusplus
}
#endif

#endif