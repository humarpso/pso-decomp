#ifndef DOLPHIN_GX_H
#define DOLPHIN_GX_H

#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef u8 GXBool;
typedef u8 GXTexFmt;

typedef struct GXColor {
    u8 r, g, b, a;
} GXColor;

typedef struct GXColorS10 {
    s16 r, g, b, a;
} GXColorS10;

typedef struct GXRenderModeObj {
    u32 viTVmode;
    u16 fbWidth;
    u16 efbHeight;
    u16 xfbHeight;
    u16 viXOrigin;
    u16 viYOrigin;
    u16 viWidth;
    u16 viHeight;
    u32 xfbMode;
    u8 field_rendering;
    u8 aa;
    u8 sample_pattern[12][2];
    u8 vfilter[7];
} GXRenderModeObj;

#ifdef __cplusplus
}
#endif

#endif
