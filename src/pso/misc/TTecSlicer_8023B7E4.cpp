#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__10TTecSlicerFi(s32 arg0);
M2C_UNK TTecSlicer__sub_8023B5D8(s32);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
M2C_UNK TObjPlayer__sub_8001BED8(s32, M2C_UNK);
f32 TObjPlayer__sub_80141CF8(s32, s32);
s32 fn_8023B454(s32, s32, s32, s32, s32);
M2C_UNK TBoss6Type1__sub_803D9370(s32, s32);
M2C_UNK TNpcPlayer__sub_803D97B4(s32);

extern f32 lbl_805DC958;

void update__10TTecSlicerFi(s32 arg0) {
    if (TObjPlayer__sub_80141CF8(arg0 + 0x38, arg0 + 0xA8) < lbl_805DC958) {
        TTecSlicer__sub_8023B5D8(arg0);
        if (fn_8023B454(arg0 + 0xC8, arg0 + 0xA8, arg0 + 0xC4, arg0 + 0xC6, arg0 + 0xBC) == 0) {
            TObjPlayer__sub_8001BED8(arg0 + 0xC0, 1);
        } else {
            VecCopy__FP3VecPC3Vec(arg0 + 0x90, arg0 + 0xA8);
            TBoss6Type1__sub_803D9370(arg0 + 0x90, arg0 + 0x38);
        }
        TNpcPlayer__sub_803D97B4(arg0 + 0x90);
    }
}

}
