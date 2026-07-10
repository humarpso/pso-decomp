#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void setup__13TObjTombstoneFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK TObjTombstone__sub_80076390(void *, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK fn_80074E04(s32, void *);

extern s32 lbl_805D4E48;
extern const f32 lbl_805D9174;

void setup__13TObjTombstoneFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0(lbl_805D4E48, 0);
    M2C_FIELD(arg0, s32 *, 0x34) = TObjFish__sub_8001EDC4(lbl_805D4E48, 0);
    M2C_FIELD(arg0, s32 *, 0xAC) = arg1;
    TObjTombstone__sub_80076390(arg0 + 0xC0, arg2);
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0xD0);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0xAC) << 0xD);
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) lbl_805D9174;
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) lbl_805D9174;
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805D9174;
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) lbl_805D9174;
    M2C_FIELD(arg0, s32 *, 0x230) = 0;
    fn_80074E04(M2C_FIELD(arg0, s32 *, 0xAC), arg0 + 0x38);
}

}
