#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern const f32 lbl_805DB6B8;
extern const f32 lbl_805DB6BC;
void fn_80169230(u8 *arg0);
M2C_UNK add_actor_tp(s32, M2C_UNK);
M2C_UNK add_actor_hp(s32, M2C_UNK);
s32 obj_testFlags30(M2C_UNK, M2C_UNK);
f32 horizontal_distance_squared(s32, void *);
s32 get_player_by_client_id(u32);
extern const f32 lbl_805DB6C4;
void fn_801692AC(u8 *arg0);
s16 obj_getS16_32C(void *);
s32 is_valid_slot__17TOHangerMachine01FiUs(int, u16);
void fn_801692AC(u8 *arg0);
void TObjPlayer__sub_801B1E54(u16, u16, s16);
s32 get_player_by_client_id(u32);
extern const f32 lbl_805DB6B8;
extern const f32 lbl_805DB6BC;
extern const f32 lbl_805DB6C0;
void fn_8016916C(u8 *arg0);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void fn_8016916C(u8 *arg0) {
    s16 temp_r3_2;
    u8 *temp_r3;
    fn_801692AC((u8 *)(arg0));
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (M2C_FIELD(arg0, s32 *, 0xCC) + 0x147);
    M2C_FIELD(arg0, f32 *, 0xD0) = (f32) (M2C_FIELD(arg0, f32 *, 0xD0) - lbl_805DB6B8);
    M2C_FIELD(arg0, f32 *, 0xE4) = (f32) ((lbl_805DB6BC + M2C_FIELD(arg0, f32 *, 0x3C)) - M2C_FIELD(arg0, f32 *, 0xD0));
    if (M2C_FIELD(arg0, f32 *, 0xD0) <= lbl_805DB6C0) {
        M2C_FIELD(arg0, f32 *, 0xD0) = (f32) lbl_805DB6C0;
        M2C_FIELD(arg0, s32 *, 0xAC) = 0;
        if (is_valid_slot__17TOHangerMachine01FiUs((s32) arg0, M2C_FIELD(arg0, u16 *, 0xF4)) != 0) {
            temp_r3 = (u8 *)(get_player_by_client_id((u32) M2C_FIELD(arg0, u16 *, 0xF4)));
            if (temp_r3 != NULL) {
                temp_r3_2 = obj_getS16_32C(temp_r3);
                if (temp_r3_2 > 0) {
                    TObjPlayer__sub_801B1E54(0xFFFFU, M2C_FIELD(arg0, u16 *, 0xF4), temp_r3_2);
                }
            }
        }
    }
}
#pragma pop

void fn_80169230(u8 *arg0) {
    fn_801692AC((u8 *)(arg0));
    M2C_FIELD(arg0, s32 *, 0xCC) = (s32) (M2C_FIELD(arg0, s32 *, 0xCC) + 0x147);
    M2C_FIELD(arg0, f32 *, 0xD0) = (f32) (M2C_FIELD(arg0, f32 *, 0xD0) + lbl_805DB6B8);
    M2C_FIELD(arg0, f32 *, 0xE4) = (f32) ((lbl_805DB6BC + M2C_FIELD(arg0, f32 *, 0x3C)) - M2C_FIELD(arg0, f32 *, 0xD0));
    if (lbl_805DB6BC <= M2C_FIELD(arg0, f32 *, 0xD0)) {
        M2C_FIELD(arg0, f32 *, 0xD0) = (f32) lbl_805DB6BC;
        M2C_FIELD(arg0, s32 *, 0xAC) = 2;
    }
}
void fn_801692AC(u8 *arg0) {
    s32 temp_r3_2;
    u32 id = M2C_FIELD(arg0, u16 *, 0xF4);
    if ((id != 0xFFFF) && (id < 0x1000U)) {
        temp_r3_2 = get_player_by_client_id(id);
        if ((temp_r3_2 != 0) && (obj_testFlags30(temp_r3_2, 0x800) == 0) && (horizontal_distance_squared(temp_r3_2 + 0x38, arg0 + 0x38) < lbl_805DB6C4)) {
            add_actor_hp(temp_r3_2, 9);
            add_actor_tp(temp_r3_2, 9);
        }
    }
}

}
