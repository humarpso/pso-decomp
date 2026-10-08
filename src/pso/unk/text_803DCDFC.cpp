#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RMode_803DCDFC {
    u32 viTVmode;
    u16 fbWidth;
    u16 efbHeight;
    u16 xfbHeight;
    u16 viXOrigin;
    u16 viYOrigin;
    u16 viWidth;
    u16 viHeight;
    u32 xFBmode;
    u8 field_rendering;
};
typedef void (*RecoveredCallback_2be3cacebb2e)(void);

extern "C" {
struct RMode_803DD0D8 {
    u32 viTVmode;
    u16 fbWidth;
    u16 efbHeight;
    u16 xfbHeight;
    u8 pad0A[0x19 - 0xA];
    u8 aa;
    u8 sample_pattern[12][2];
    u8 vfilter[7];
};
struct Tlut_803DD0D8 { u32 w[4]; };

u32 VIGetNextField(void);
void GXInvalidateVtxCache(void);
void GXInvalidateTexAll(void);
void GXSetViewportJitter(f32, f32, f32, f32, f32, f32, u32);
void GXSetViewport(f32, f32, f32, f32, f32, f32);
void GXSetZMode(s32, s32, s32);
void GXSetColorUpdate(s32);
void GXCopyDisp(void *, s32);
void GXDrawDone(void);
s32 OSDisableInterrupts(void);
s32 OSRestoreInterrupts(s32);
void VIWaitForRetrace(void);
void VIFlush(void);
void VISetNextFrameBuffer(void *);
void VISetBlack(s32);
u32 VIGetRetraceCount(void);
M2C_UNK LCEnable();
s32 OSCreateHeap(int, int);
M2C_UNK get_render_mode_for_tv_format(void *, void *);
void *GXInit(s32, s32);
void GXInitTlutRegion(Tlut_803DD0D8 *, u32, u32);
void GXSetDispCopySrc(u16, u16, u16, u16);
void GXSetDispCopyDst(u16, u16);
f32 GXGetYScaleFactor(u16, u16);
u32 GXSetDispCopyYScale(f32);
void Dolphin_GXSetCopyFilter(u8, void *, int, void *);
void *GXSetTlutRegionCallback(void *);
void GXSetPixelFmt(int, int);
void GXSetScissor(u32, u32, u32, u32);
void *fn_803DD3C8(u32);

extern s32 *lbl_805D7734;
extern void *lbl_805D7738;
extern void *lbl_805D773C;
extern void *lbl_805D7740;
extern u8 lbl_805D46C8;
extern RecoveredCallback_2be3cacebb2e lbl_805D7718;
extern u32 lbl_805D772C;
extern s32 lbl_805D7730;
extern s32 lbl_805D7724;
extern s32 lbl_805D7728;
extern s32 lbl_805D7750;
extern s32 lbl_805D7754;
extern M2C_UNK lbl_8058D340[];
extern Tlut_803DD0D8 lbl_8058CE40[];
extern void *lbl_805D771C;
extern void *lbl_805D7720;

void func_803DCDFC__Fv(void);
void fn_803DCEC8(void);
void fn_803DCF0C(void);
void present_frame_and_wait_vsync(void);
void run_callback__6TMovieFv(void);
void init_locked_cache_heap(u8 *arg0);
void set_present_interval(M2C_UNK *arg0, s32 arg1);
void init_gx_display(void);
void fn_803DD294(void);
}

extern "C" {

#define lbl_805D7734 ((RMode_803DCDFC *)lbl_805D7734)
void func_803DCDFC__Fv(void) {
    RMode_803DCDFC *rmode = lbl_805D7734;
    if (rmode->field_rendering) {
        GXSetViewportJitter(0.0f, 0.0f, rmode->fbWidth, rmode->efbHeight, 0.0f, 1.0f, VIGetNextField());
    } else {
        GXSetViewport(0.0f, 0.0f, rmode->fbWidth, rmode->efbHeight, 0.0f, 1.0f);
    }
    GXInvalidateVtxCache();
    GXInvalidateTexAll();
}
#undef lbl_805D7734

void fn_803DCEC8(void) {
    GXSetZMode(1, 3, 1);
    GXSetColorUpdate(1);
    GXCopyDisp(lbl_805D7738, 1);
    GXDrawDone();
}

void fn_803DCF0C(void) {
    present_frame_and_wait_vsync();
}

void present_frame_and_wait_vsync(void) {
    s32 level;
    VISetNextFrameBuffer(lbl_805D7738);
    if (lbl_805D46C8 != 0) {
        VISetBlack(0);
        lbl_805D46C8 = 0;
    }
    level = OSDisableInterrupts();
    while (VIGetRetraceCount() < lbl_805D772C + lbl_805D7730 - 1) {
        VIWaitForRetrace();
    }
    OSRestoreInterrupts(level);
    VIFlush();
    VIWaitForRetrace();
    lbl_805D772C = VIGetRetraceCount();
    if (lbl_805D7718 != NULL) {
        lbl_805D7718();
    }
    lbl_805D7738 = (lbl_805D7738 == lbl_805D7740) ? lbl_805D773C : lbl_805D7740;
}

#define lbl_805D7718 (*(M2C_UNK (**)())&lbl_805D7718)
#define lbl_805D7738 (*(s32 *)&lbl_805D7738)
#define lbl_805D773C (*(s32 *)&lbl_805D773C)
#define lbl_805D7740 (*(s32 *)&lbl_805D7740)
void run_callback__6TMovieFv(void) {
    if (((M2C_UNK (*)()) lbl_805D7718) != NULL) {
        lbl_805D7718();
    }
}

void init_locked_cache_heap(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r3;

    LCEnable();
    lbl_805D7740 = M2C_FIELD(arg0, s32 *, 8);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC);
    lbl_805D773C = temp_r0;
    lbl_805D7738 = temp_r0;
    lbl_805D7728 = M2C_FIELD(arg0, s32 *, 0x10);
    lbl_805D7724 = M2C_FIELD(arg0, s32 *, 0x14);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x18);
    lbl_805D7754 = OSCreateHeap((int) (temp_r3), (int) (temp_r3 + M2C_FIELD(arg0, s32 *, 0x1C)));
    lbl_805D7750 = M2C_FIELD(arg0, s32 *, 0x1C);
}

#define lbl_805D772C (*(s32 *)&lbl_805D772C)
void set_present_interval(M2C_UNK *arg0, s32 arg1) {
    s32 var_r4;
    var_r4 = arg1;
    if (arg0 != NULL) {
        (*(M2C_UNK * *)&lbl_805D7734) = arg0;
    } else {
        get_render_mode_for_tv_format((void *) ((*(M2C_UNK * *)&lbl_805D7734)), (void *) (lbl_8058D340));
        (*(M2C_UNK * *)&lbl_805D7734) = lbl_8058D340;
        var_r4 = 1;
    }
    lbl_805D7730 = var_r4;
    lbl_805D772C = VIGetRetraceCount();
}

#define rmode ((RMode_803DD0D8 *)lbl_805D7734)
void init_gx_display(void) {
    s32 i;
    s32 n;
    u32 addr;

    lbl_805D771C = lbl_805D7720 = GXInit(lbl_805D7728, lbl_805D7724);
    GXSetViewport(0.0f, 0.0f, rmode->fbWidth, rmode->efbHeight, 0.0f, 1.0f);
    GXSetScissor(0, 0, rmode->fbWidth, rmode->efbHeight);
    GXSetDispCopySrc(0, 0, rmode->fbWidth, rmode->efbHeight);
    GXSetDispCopyDst(rmode->fbWidth, rmode->xfbHeight);
    GXSetDispCopyYScale(GXGetYScaleFactor(rmode->efbHeight, rmode->xfbHeight));
    Dolphin_GXSetCopyFilter(rmode->aa, rmode->sample_pattern, 1, rmode->vfilter);
    if (rmode->aa) {
        GXSetPixelFmt(2, 0);
    } else {
        GXSetPixelFmt(0, 0);
    }
    addr = 0xC0000;
    n = 0;
    for (i = 0; i < 0x40; i++, n++) {
        GXInitTlutRegion(&lbl_8058CE40[n], addr, 1);
        addr += 0x200;
    }
    for (i = 0; i < 0x10; i++, n++) {
        GXInitTlutRegion(&lbl_8058CE40[n], addr, 0x10);
        addr += 0x2000;
    }
    GXSetTlutRegionCallback((void *)fn_803DD3C8);
    GXCopyDisp((void *)lbl_805D7738, 1);
}
#undef rmode

void fn_803DD294(void) {
    VISetNextFrameBuffer((void *) (lbl_805D7740));
    lbl_805D7738 = lbl_805D773C;
    VIFlush();
    VIWaitForRetrace();
    if ((u32) (*lbl_805D7734 & 1) != 0) {
        VIWaitForRetrace();
    }
}
#undef lbl_805D772C
#undef lbl_805D7718
#undef lbl_805D7738
#undef lbl_805D773C
#undef lbl_805D7740

}
