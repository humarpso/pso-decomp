#include "types.h"

extern "C" {

s32 decrement_clamp__10TObjPlayerFPvi(s32 *arg0, s32 arg1);

s32 decrement_clamp__10TObjPlayerFPvi(s32 *arg0, s32 arg1) {
    *arg0 -= arg1;
    if ((s32) *arg0 < 0) {
        *arg0 = 0;
        return 0;
    }
    return 1;
}

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma fp_contract on

extern "C" {

void copy_offset_position__10TObjPlayerFPvPv(void *arg0, void *arg1);
void *get_quest_id__12TQuestListVMFPv(void *);

extern const f32 lbl_805DC334;

void copy_offset_position__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    f32 temp_f2;

    temp_f2 = M2C_FIELD(get_quest_id__12TQuestListVMFPv(arg1), f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 4) = (f32) ((lbl_805DC334 * temp_f2) + M2C_FIELD(arg1, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 0x40);
}

}

extern "C" {

void calc_pos_delta__10TObjPlayerFPvPvPv(void *arg0, void *arg1, void *arg2);

void calc_pos_delta__10TObjPlayerFPvPvPv(void *arg0, void *arg1, void *arg2) {
    M2C_FIELD(arg2, s16 *, 0) = (s16) (M2C_FIELD(arg1, s16 *, 0) - M2C_FIELD(arg0, s16 *, 0));
    M2C_FIELD(arg2, s16 *, 2) = (s16) (M2C_FIELD(arg1, s16 *, 2) - M2C_FIELD(arg0, s16 *, 2));
    M2C_FIELD(arg2, s16 *, 4) = (s16) (M2C_FIELD(arg1, s16 *, 4) - M2C_FIELD(arg0, s16 *, 4));
    M2C_FIELD(arg2, s16 *, 6) = (s16) (M2C_FIELD(arg1, s16 *, 6) - M2C_FIELD(arg0, s16 *, 6));
    M2C_FIELD(arg2, s16 *, 8) = (s16) (M2C_FIELD(arg1, s16 *, 8) - M2C_FIELD(arg0, s16 *, 8));
    M2C_FIELD(arg2, s16 *, 0xA) = (s16) (M2C_FIELD(arg1, s16 *, 0xA) - M2C_FIELD(arg0, s16 *, 0xA));
    M2C_FIELD(arg2, s16 *, 0x16) = (s16) (M2C_FIELD(arg1, s16 *, 0x16) - M2C_FIELD(arg0, s16 *, 0x16));
    M2C_FIELD(arg2, s16 *, 0x18) = (s16) (M2C_FIELD(arg1, s16 *, 0x18) - M2C_FIELD(arg0, s16 *, 0x18));
}

}

extern "C" {

void init_shield_params__10TObjPlayerFPvi(void *arg0, s32 arg1);
s16 get_field_2b8__14TItemProShieldFPv(s32);
void set_params__10TObjPlayerFPvPvPviPv(void *arg0, void *arg1, void *arg2, s32 arg3, void *arg4);

s16 obj_getS16_2BA(s32);

void init_shield_params__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    ((void (*)()) set_params__10TObjPlayerFPvPvPviPv)();
    M2C_FIELD(arg0, s16 *, 0x16) = get_field_2b8__14TItemProShieldFPv(arg1);
    M2C_FIELD(arg0, s16 *, 0x18) = obj_getS16_2BA(arg1);
}

}

struct RecoveredGlobal_801C5F54_TObjPlayer__data_8050E920 {
    M2C_UNK value;
    u8 remaining[0xEC];
};

struct ArrivalOverrides { u8 bytes[0xF0]; };

struct Vec_801C5F84 { f32 x, y, z; };
struct Arrival_801C5F84 {
    s32 active;
    s32 yaw;
    Vec_801C5F84 pos;
};

struct Pair_801C5FCC { f32 a; f32 b; };

struct Obj_801C5FCC { s32 n; Pair_801C5FCC e[16]; };

extern "C" {
extern Arrival_801C5F84 TObjPlayer__arrival_override_table[12];
void set_arrival_override_coords(u16 arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void set_arrival_override_pos(u16 idx, s32 yaw, void *pos);
extern const f32 lbl_805DC32C;
void clear_movement_history(Obj_801C5FCC *p);
}

extern "C" {

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
void set_arrival_override_coords(u16 arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2) {
    s32 temp_r5;
    u8 *temp_r3;
    temp_r5 = arg0 * 0x14;
    M2C_FIELD(((u8 *)TObjPlayer__arrival_override_table + temp_r5), s32 *, 0) = 1;
    temp_r3 = (u8 *)TObjPlayer__arrival_override_table + temp_r5;
    M2C_FIELD(temp_r3, s32 *, 4) = arg1;
    M2C_FIELD(temp_r3, f32 *, 8) = farg0;
    M2C_FIELD(temp_r3, f32 *, 0xC) = farg1;
    M2C_FIELD(temp_r3, f32 *, 0x10) = farg2;
}
#pragma pop

void set_arrival_override_pos(u16 idx, s32 yaw, void *pos) {
    TObjPlayer__arrival_override_table[idx].active = 1;
    TObjPlayer__arrival_override_table[idx].yaw = yaw;
    VecCopy__FP3VecPC3Vec(&TObjPlayer__arrival_override_table[idx].pos, pos);
}
void clear_movement_history(Obj_801C5FCC *p) {
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
