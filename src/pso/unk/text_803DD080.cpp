#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK VIWaitForRetrace();
M2C_UNK VIFlush();
M2C_UNK VISetNextFrameBuffer(void *);
extern s32 *lbl_805D7734;
extern s32 lbl_805D7738;
extern s32 lbl_805D773C;
extern s32 lbl_805D7740;
void fn_803DD294(void);
s32 VIGetRetraceCount();
M2C_UNK fn_803DD430(void *, void *);
extern M2C_UNK lbl_8058D340[];
extern s32 lbl_805D772C;
extern s32 lbl_805D7730;
extern s32 *lbl_805D7734;
void set_present_interval(M2C_UNK *arg0, s32 arg1);
}

extern "C" {

void set_present_interval(M2C_UNK *arg0, s32 arg1) {
    s32 var_r4;
    var_r4 = arg1;
    if (arg0 != NULL) {
        (*(M2C_UNK * *)&lbl_805D7734) = arg0;
    } else {
        fn_803DD430((void *) ((*(M2C_UNK * *)&lbl_805D7734)), (void *) (lbl_8058D340));
        (*(M2C_UNK * *)&lbl_805D7734) = lbl_8058D340;
        var_r4 = 1;
    }
    lbl_805D7730 = var_r4;
    lbl_805D772C = VIGetRetraceCount();
}

void fn_803DD294(void) {
    VISetNextFrameBuffer((void *) (lbl_805D7740));
    lbl_805D7738 = lbl_805D773C;
    VIFlush();
    VIWaitForRetrace();
    if ((u32) (*lbl_805D7734 & 1) != 0) {
        VIWaitForRetrace();
    }
}

}
