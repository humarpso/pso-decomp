#include "types.h"

extern "C" {
extern const f32 lbl_805DB6B8;
extern const f32 lbl_805DB6BC;
void update_opening__13TOHealGeneralFPv(u8 *arg0);
s32 add_actor_tp(s32, s32);
s32 add_actor_hp(s32, s32);
s32 obj_testFlags30(s32, s32);
f32 horizontal_distance_squared(s32, void *);
s32 get_player_by_client_id(u32);
extern const f32 lbl_805DB6C4;
void apply_heal_to_target__13TOHealGeneralFPv(u8 *arg0);
s16 obj_getS16_32C(void *);
s32 is_valid_slot__17TOHangerMachine01FiUs(int, u16);
void apply_heal_to_target__13TOHealGeneralFPv(u8 *arg0);
void send_6x2F_change_player_hp(u16, u16, s16);
s32 get_player_by_client_id(u32);
extern const f32 lbl_805DB6B8;
extern const f32 lbl_805DB6BC;
extern const f32 lbl_805DB6C0;
void update_closing__13TOHealGeneralFPv(u8 *arg0);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void update_closing__13TOHealGeneralFPv(u8 *arg0) {
    s16 temp_r3_2;
    u8 *temp_r3;
    apply_heal_to_target__13TOHealGeneralFPv((u8 *)(arg0));
    *(s32 *)((s8 *)arg0 + 0xCC) = (s32) (*(s32 *)((s8 *)arg0 + 0xCC) + 0x147);
    *(f32 *)((s8 *)arg0 + 0xD0) = (f32) (*(f32 *)((s8 *)arg0 + 0xD0) - lbl_805DB6B8);
    *(f32 *)((s8 *)arg0 + 0xE4) = (f32) ((lbl_805DB6BC + *(f32 *)((s8 *)arg0 + 0x3C)) - *(f32 *)((s8 *)arg0 + 0xD0));
    if (*(f32 *)((s8 *)arg0 + 0xD0) <= lbl_805DB6C0) {
        *(f32 *)((s8 *)arg0 + 0xD0) = (f32) lbl_805DB6C0;
        *(s32 *)((s8 *)arg0 + 0xAC) = 0;
        if (is_valid_slot__17TOHangerMachine01FiUs((s32) arg0, *(u16 *)((s8 *)arg0 + 0xF4)) != 0) {
            temp_r3 = (u8 *)(get_player_by_client_id((u32) *(u16 *)((s8 *)arg0 + 0xF4)));
            if (temp_r3 != NULL) {
                temp_r3_2 = obj_getS16_32C(temp_r3);
                if (temp_r3_2 > 0) {
                    send_6x2F_change_player_hp(0xFFFFU, *(u16 *)((s8 *)arg0 + 0xF4), temp_r3_2);
                }
            }
        }
    }
}
#pragma pop

void update_opening__13TOHealGeneralFPv(u8 *arg0) {
    apply_heal_to_target__13TOHealGeneralFPv((u8 *)(arg0));
    *(s32 *)((s8 *)arg0 + 0xCC) = (s32) (*(s32 *)((s8 *)arg0 + 0xCC) + 0x147);
    *(f32 *)((s8 *)arg0 + 0xD0) = (f32) (*(f32 *)((s8 *)arg0 + 0xD0) + lbl_805DB6B8);
    *(f32 *)((s8 *)arg0 + 0xE4) = (f32) ((lbl_805DB6BC + *(f32 *)((s8 *)arg0 + 0x3C)) - *(f32 *)((s8 *)arg0 + 0xD0));
    if (lbl_805DB6BC <= *(f32 *)((s8 *)arg0 + 0xD0)) {
        *(f32 *)((s8 *)arg0 + 0xD0) = (f32) lbl_805DB6BC;
        *(s32 *)((s8 *)arg0 + 0xAC) = 2;
    }
}
void apply_heal_to_target__13TOHealGeneralFPv(u8 *arg0) {
    s32 temp_r3_2;
    u32 id = *(u16 *)((s8 *)arg0 + 0xF4);
    if ((id != 0xFFFF) && (id < 0x1000U)) {
        temp_r3_2 = get_player_by_client_id(id);
        if ((temp_r3_2 != 0) && (obj_testFlags30(temp_r3_2, 0x800) == 0) && (horizontal_distance_squared(temp_r3_2 + 0x38, arg0 + 0x38) < lbl_805DB6C4)) {
            add_actor_hp(temp_r3_2, 9);
            add_actor_tp(temp_r3_2, 9);
        }
    }
}

}
