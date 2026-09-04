#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss2Mine__sub_80037C6C(void *arg0);
void move_mine__10TBoss2MineFPv(u8 *arg0);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
s32 is_alive__9TObjEneDDFPv(s32);

extern const f32 lbl_805D84E8;

void move_mine__10TBoss2MineFPv(u8 *arg0) {
    if (is_alive__9TObjEneDDFPv(M2C_FIELD(arg0, s32 *, 0x3F0)) != 0) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x390, M2C_FIELD(arg0, s32 *, 0x3F0) + 0x38);
        TBoss4Zako__sub_803D8910(arg0 + 0x390, arg0 + 0x3F8);
        M2C_FIELD(arg0, f32 *, 0x394) = (f32) (M2C_FIELD(arg0, f32 *, 0x394) + lbl_805D84E8);
    }
}

extern f32 TBoss2Mine__data_805D84EC;

void TBoss2Mine__sub_80037C6C(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (TBoss2Mine__data_805D84EC + (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C)));
}

}
