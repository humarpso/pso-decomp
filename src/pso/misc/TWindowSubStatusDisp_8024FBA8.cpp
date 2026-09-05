#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
extern s32 lbl_805D6430;
extern f32 lbl_805D6434;
extern f32 lbl_805D6438;
extern s32 lbl_805D643C;
extern s32 lbl_805D6440;
void TWindowSubStatusDisp__sub_802500F4(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
}

extern "C" {

void set_input_mode__20TWindowSubStatusDispFPvUc(void* p, u8 v);

void set_input_mode__20TWindowSubStatusDispFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x64) = v; }
void TWindowSubStatusDisp__sub_802500F4(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    lbl_805D6430 = arg0;
    lbl_805D6434 = farg0;
    lbl_805D6438 = farg1;
    lbl_805D643C = arg1;
    lbl_805D6440 = arg2;
}

}
