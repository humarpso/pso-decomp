#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800D98D8_lbl_80500F8C {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_800D98D8_lbl_80500FA4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void draw_motion_trail__11TBoss4Type3FPviiii(void *, s32, s32, s32, s32);
extern RecoveredGlobal_800D98D8_lbl_80500F8C lbl_80500F8C;
extern RecoveredGlobal_800D98D8_lbl_80500FA4 lbl_80500FA4;
void TObjEneMe3ShinowaMirage__sub_800D98D8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4, u8 *arg5);
}

extern "C" {

typedef char RecoveredGlobal_800D98D8_lbl_80500F8C_size[sizeof(RecoveredGlobal_800D98D8_lbl_80500F8C) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_800D98D8_lbl_80500FA4_size[sizeof(RecoveredGlobal_800D98D8_lbl_80500FA4) == 0xC ? 1 : -1];
void TObjEneMe3ShinowaMirage__sub_800D98D8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4, u8 *arg5) {
    M2C_FIELD(&lbl_80500FA4.value, s32 *, 0) = arg3;
    M2C_FIELD(&lbl_80500FA4.value, s32 *, 4) = arg3;
    VecCopy__FP3VecPC3Vec(&lbl_80500F8C.value, arg4);
    VecCopy__FP3VecPC3Vec((u8 *)&lbl_80500F8C.value + 0xC, arg5);
    draw_motion_trail__11TBoss4Type3FPviiii(arg0, arg1, arg2, (s32) &lbl_80500FA4.value, (s32) &lbl_80500F8C.value);
}

}
