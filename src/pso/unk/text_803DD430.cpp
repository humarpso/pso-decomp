




#include "types.h"
typedef struct GXRenderModeObj_803DD430 { u8 data[0x3C]; } GXRenderModeObj_803DD430;


struct SinCos_803DD4EC { f32 c; f32 s; };

extern "C" {
s32 VIGetTvFormat(void);
void OSPanic(const char *file, int line, const char *msg, ...);
void GXAdjustForOverscan(GXRenderModeObj_803DD430 *rmin, GXRenderModeObj_803DD430 *rmout, u16 hor, u16 ver);
extern GXRenderModeObj_803DD430 GXNtsc480IntDf;
extern GXRenderModeObj_803DD430 GXMpal480IntDf;
extern GXRenderModeObj_803DD430 GXPal528IntDf;
extern char lbl_804FC668[];
extern char lbl_804FC674[];
void get_render_mode_for_tv_format(GXRenderModeObj_803DD430 *rmode, GXRenderModeObj_803DD430 *out);
void *OSGetArenaLo(void);
void OSSetArenaLo(void *);
f64 cos(f64);
f64 sin(f64);
extern SinCos_803DD4EC *lbl_805D7748;
extern const f32 lbl_805E0F9C;
extern const f32 lbl_805E0FA0;
void init_sin_cos_table(void);
}

extern "C" {



void get_render_mode_for_tv_format(GXRenderModeObj_803DD430 *rmode, GXRenderModeObj_803DD430 *out) {
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

#pragma push
#pragma optimize_for_size on
#pragma use_lmw_stmw off
void init_sin_cos_table(void) {
    s32 j;
    SinCos_803DD4EC *p;
    s32 i;
    SinCos_803DD4EC *base;
    f32 a;
    base = (SinCos_803DD4EC *) OSGetArenaLo();
    OSSetArenaLo((u8 *) base + 0x80000);
    lbl_805D7748 = base;
    p = base;
    for (i = 0, j = 0; i < 0x10000; j += 2, i++) {
        a = (lbl_805E0F9C * (f32) j) / lbl_805E0FA0;
        p->c = sin(a);
        p->s = cos(a);
        p++;
    }
}
#pragma pop



}
