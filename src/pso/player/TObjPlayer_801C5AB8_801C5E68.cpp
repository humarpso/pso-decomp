#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801C5F54_TObjPlayer__data_8050E920 {
    M2C_UNK value;
    u8 remaining[0xEC];
};

struct ArrivalOverrides { u8 bytes[0xF0]; };

struct Pair_801C5FCC { f32 a; f32 b; };

struct Obj_801C5FCC { s32 n; Pair_801C5FCC e[16]; };

extern "C" {
extern RecoveredGlobal_801C5F54_TObjPlayer__data_8050E920 TObjPlayer__data_8050E920;
void TObjPlayer__sub_801C5F54(u16 arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
extern RecoveredGlobal_801C5F54_TObjPlayer__data_8050E920 TObjPlayer__data_8050E920;
void TObjPlayer__sub_801C5F84(u16 arg0, s32 arg1, s32 arg2);
extern const f32 lbl_805DC32C;
void TObjPlayer__sub_801C5FCC(Obj_801C5FCC *p);
}

extern "C" {

void set_params__10TObjPlayerFPvPvPviPv(void *arg0, void *arg1, void *arg2, s32 arg3, void *arg4);
s16 TObjPlayer__sub_800194E8(s32, s16);
s32 get_level__10TObjPlayerFPv(s32);

extern M2C_UNK lbl_80447120;
extern const f32 lbl_805DC330;

void set_params__10TObjPlayerFPvPvPviPv(void *arg0, void *arg1, void *arg2, s32 arg3, void *arg4) {
    s16 temp_r4;

    M2C_FIELD(arg0, s16 *, 0) = (s16) (M2C_FIELD(arg2, s16 *, 0) + get_level__10TObjPlayerFPv(arg3));
    temp_r4 = M2C_FIELD(arg2, s16 *, 8);
    M2C_FIELD(arg0, s16 *, 2) = (s16) (temp_r4 + M2C_FIELD(arg4, s32 *, 0x1C));
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg2, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 6) = (s16) (lbl_805DC330 * (f32) (M2C_FIELD(arg2, s16 *, 0xA) + TObjPlayer__sub_800194E8(arg3, temp_r4)));
    M2C_FIELD(arg0, s16 *, 8) = (s16) (M2C_FIELD(arg2, s16 *, 4) + M2C_FIELD(arg4, s16 *, 0));
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) M2C_FIELD(arg2, s16 *, 0xC);
    M2C_FIELD(arg0, s16 *, 0xC) = (s16) M2C_FIELD(arg4, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 0xE) = (s16) M2C_FIELD(arg4, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 0x10) = (s16) M2C_FIELD(arg4, s16 *, 6);
    M2C_FIELD(arg0, s16 *, 0x12) = (s16) M2C_FIELD(arg4, s16 *, 8);
    M2C_FIELD(arg0, s16 *, 0x14) = (s16) M2C_FIELD(arg4, s16 *, 0xA);
}
#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_801C5F54_TObjPlayer__data_8050E920_size[sizeof(RecoveredGlobal_801C5F54_TObjPlayer__data_8050E920) == 0xF0 ? 1 : -1];
void TObjPlayer__sub_801C5F54(u16 arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2) {
    s32 temp_r5;
    u8 *temp_r3;
    temp_r5 = arg0 * 0x14;
    M2C_FIELD(((u8 *)(&TObjPlayer__data_8050E920.value) + temp_r5), s32 *, 0) = 1;
    temp_r3 = (u8 *)(&TObjPlayer__data_8050E920.value) + temp_r5;
    M2C_FIELD(temp_r3, s32 *, 4) = arg1;
    M2C_FIELD(temp_r3, f32 *, 8) = farg0;
    M2C_FIELD(temp_r3, f32 *, 0xC) = farg1;
    M2C_FIELD(temp_r3, f32 *, 0x10) = farg2;
}
#pragma pop

void TObjPlayer__sub_801C5F84(u16 arg0, s32 arg1, s32 arg2) {
    u8 *temp_r7;
    temp_r7 = (u8 *)&TObjPlayer__data_8050E920 + (arg0 * 0x14);
    M2C_FIELD(temp_r7, s32 *, 0) = 1;
    M2C_FIELD(temp_r7, s32 *, 4) = arg1;
    VecCopy__FP3VecPC3Vec((void *) (temp_r7 + 8), (void *) (arg2));
}
void TObjPlayer__sub_801C5FCC(Obj_801C5FCC *p) {
    s32 i;
    Pair_801C5FCC *e;
    p->n = 0;
    e = p->e;
    for (i = 0; i < 16; i++) {
        e->b = lbl_805DC32C;
        e->a = lbl_805DC32C;
        e++;
    }
}

}
