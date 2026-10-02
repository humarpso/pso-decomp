#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_aim_target__10TObjPlayerFPv(void *arg0);
void apply_damage_and_reset__10TObjPlayerFPv(void* p);
s32 is_locally_controlled__10TObjPlayerFPv(void *);
s32 check_actor_blocking_move__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801B5EA4(void *);
int TObjPlayer__sub_8001053C(void*);
s32 check_player_flag1__6TLobbyFPv(void *);
s32 is_inactive__10TObjPlayerFPv();
int TObjEnePanarms__sub_800E2DE4(void*, void*);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32, f32, f32);

extern const f32 TObjPlayer__data_805DC36C;
extern const f32 lbl_805DC3B0;

s32 update_aim_target__10TObjPlayerFPv(void *arg0) {
    f32 temp_f1;
    s32 temp_r3;

    if (is_inactive__10TObjPlayerFPv() == 0) {
        return 0;
    }
    temp_f1 = lbl_805DC3B0 * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x3F0));
    M2C_FIELD(arg0, f32 *, 0x308) = temp_f1;
    M2C_FIELD(arg0, f32 *, 0x30C) = (f32) TObjPlayer__data_805DC36C;
    M2C_FIELD(arg0, f32 *, 0x310) = (f32) (lbl_805DC3B0 * TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x3F0), temp_f1, lbl_805DC3B0));
    if (check_actor_blocking_move__10TObjPlayerFPv(arg0) != 0) {
        TObjPlayer__sub_8001053C((void*)(arg0));
        return 0;
    }
    temp_r3 = TObjPlayer__sub_801B5EA4(arg0);
    if (temp_r3 == 0) {
        return 1;
    }
    if ((is_locally_controlled__10TObjPlayerFPv(arg0) != 0) && (check_player_flag1__6TLobbyFPv(arg0) == 0) && (temp_r3 == 4)) {
        return 1;
    }
    return 0;
}

void apply_damage_and_reset__10TObjPlayerFPv(void* p) { TObjEnePanarms__sub_800E2DE4(p, (void*)256); TObjPlayer__sub_8001053C((void*)(p)); }

}
