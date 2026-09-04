#include "pso/TNECFontEORFunction.h"

void TNECFontEORFunction::run_task() {}

TNECFontEORFunction::~TNECFontEORFunction() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK DCFlushRange(void *, int);
M2C_UNK fn_803DB05C(int, int, int, void *);
extern s32 lbl_805D56B4;
extern s32 lbl_805D56B8;
extern u8 lbl_805D56C0;
M2C_UNK DCFlushRange(void *, int);
M2C_UNK fn_803DB05C(int, int, int, void *);
extern s32 lbl_805D56B4;
extern s32 lbl_805D56B8;
extern u8 lbl_805D56C0;
}

extern "C" {

void run_task__19TNECFontEORFunctionFv(void) {
    if (lbl_805D56B8 & 2) {
        DCFlushRange((void *) (lbl_805D56B4), (int) (0x80));
        fn_803DB05C((int) (0), (int) (2), (int) (0x80), (void *) (lbl_805D56B4));
        lbl_805D56B8 &= 0xFFFFFFFD;
    }
    if (lbl_805D56B8 & 1) {
        lbl_805D56B8 &= 0xFFFFFFFE;
        lbl_805D56C0 += 1;
    }
}

}
