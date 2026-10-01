




#include "types.h"
typedef struct GXRenderModeObj_803DD430 { u8 data[0x3C]; } GXRenderModeObj_803DD430;

extern "C" {
s32 VIGetTvFormat(void);
void OSPanic(const char *file, int line, const char *msg, ...);
void GXAdjustForOverscan(GXRenderModeObj_803DD430 *rmin, GXRenderModeObj_803DD430 *rmout, u16 hor, u16 ver);
extern GXRenderModeObj_803DD430 GXNtsc480IntDf;
extern GXRenderModeObj_803DD430 GXMpal480IntDf;
extern GXRenderModeObj_803DD430 GXPal528IntDf;
extern char lbl_804FC668[];
extern char lbl_804FC674[];
void fn_803DD430(GXRenderModeObj_803DD430 *rmode, GXRenderModeObj_803DD430 *out);
}

extern "C" {



void fn_803DD430(GXRenderModeObj_803DD430 *rmode, GXRenderModeObj_803DD430 *out) {
    switch (VIGetTvFormat()) {
    case 0:
        rmode = &GXNtsc480IntDf;
        break;
    case 1:
        rmode = &GXPal528IntDf;
        break;
    case 2:
        rmode = &GXMpal480IntDf;
        break;
    default:
        OSPanic(lbl_804FC668, 0x340, lbl_804FC674);
        break;
    }
    GXAdjustForOverscan(rmode, out, 0, 0);
}

}
