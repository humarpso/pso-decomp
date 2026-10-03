#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_target_lock__10TObjPlayerFPv(void *arg0);
s32 is_target_in_facing_cone__10TObjPlayerFPvPv(void *, s32);
u32 find_entity_by_id(u16);
s32 get_position_ptr__10TObjPlayerFPv();
M2C_UNK fn_801C1B88(s32);
f32 fn_801C1B90(s32, u32);
u16 fn_801C1B98(s32);

extern const f32 lbl_805DC2C0;
extern const f32 lbl_805DC2C4;

s32 update_target_lock__10TObjPlayerFPv(void *arg0) {
    f32 temp_f31;
    u32 temp_r3;
    u16 var_r31;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0x424);
    if (temp_r3 == 0U) {
        return 0;
    }
    var_r31 = fn_801C1B98(temp_r3 + 0x510);
    temp_f31 = fn_801C1B90(M2C_FIELD(arg0, u32 *, 0x424) + 0x510, M2C_FIELD(arg0, u32 *, 0x424));
    fn_801C1B88(M2C_FIELD(arg0, u32 *, 0x424) + 0x510);
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x100000)) {
        if ((u16) var_r31 == 0xFFFF) {
            return 0;
        }
        if (find_entity_by_id(var_r31) == 0U) {
            return 0;
        }
        if (!(temp_f31 < lbl_805DC2C0)) {
            goto block_17;
        }
        if (is_target_in_facing_cone__10TObjPlayerFPvPv(arg0, get_position_ptr__10TObjPlayerFPv()) == 0) {
            goto block_17;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x100000);
        return 1;
    }
    if ((u16) var_r31 == 0xFFFF) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFEFFFFF);
        return 0;
    }
    if (find_entity_by_id(var_r31) == 0U) {
        return 0;
    }
    if (temp_f31 > lbl_805DC2C4) {
        goto clear_and_return;
    }
    if (is_target_in_facing_cone__10TObjPlayerFPvPv(arg0, get_position_ptr__10TObjPlayerFPv()) != 0) {
        goto block_17;
    }
clear_and_return:
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFEFFFFF);
    return 0;
block_17:
    return 0;
}

}
