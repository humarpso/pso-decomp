#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneDf2Bringer__sub_8009A128(u8 *arg0, const void *arg1, s32 arg2, f32 farg0);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, const void *);
M2C_UNK fn_8002B094(int);

extern const f32 lbl_805D9860;

void TObjEneDf2Bringer__sub_8009A128(u8 *arg0, const void *arg1, s32 arg2, f32 farg0) {
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), arg1);
    M2C_FIELD(arg0, s32 *, 0x60) = arg2;
    M2C_FIELD(arg0, f32 *, 0xB8) = TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) lbl_805D9860;
    M2C_FIELD(arg0, f32 *, 0xC0) = TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    M2C_FIELD(arg0, s32 *, 0xB0) = 1;
    fn_8002B094((int) (M2C_FIELD(arg0, s32 *, 0xC4)));
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805D9860;
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) lbl_805D9860;
    M2C_FIELD(arg0, f32 *, 0xD0) = farg0;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0x19;
}

}
