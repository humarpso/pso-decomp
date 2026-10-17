#include "types.h"
#include "pso/misc/TOHealGeneral.h"
#include "pso/misc/TOHangerMachine01.h"

extern "C" {
extern const f32 lbl_805DB6B8;
extern const f32 lbl_805DB6BC;
s32 add_actor_tp(s32, s32);
s32 add_actor_hp(s32, s32);
s32 obj_testFlags30(s32, s32);
f32 horizontal_distance_squared(s32, void *);
s32 get_player_by_client_id(u32);
extern const f32 lbl_805DB6C4;
s16 obj_getS16_32C(void *);
void send_6x2F_change_player_hp(u16, u16, s16);
extern const f32 lbl_805DB6C0;

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void TOHealGeneral::update_closing() {
    u8 *arg0 = (u8 *)this;
    s16 temp_r3_2;
    u8 *player;
    apply_heal_to_target();
    *(s32 *)&this->m_cc = (s32) (*(s32 *)&this->m_cc + 0x147);
    *(f32 *)&this->_padD0 = (f32) (*(f32 *)&this->_padD0 - lbl_805DB6B8);
    *(f32 *)((s8 *)arg0 + 0xE4) = (f32) ((lbl_805DB6BC + *(f32 *)((s8 *)arg0 + 0x3C)) - *(f32 *)&this->_padD0);
    if (*(f32 *)&this->_padD0 <= lbl_805DB6C0) {
        *(f32 *)&this->_padD0 = (f32) lbl_805DB6C0;
        *(s32 *)&this->m_ac = 0;
        if (TOHangerMachine01::is_valid_slot((s32) arg0, this->m_f4) != 0) {
            player = (u8 *)(get_player_by_client_id((u32) this->m_f4));
            if (player != NULL) {
                temp_r3_2 = obj_getS16_32C(player);
                if (temp_r3_2 > 0) {
                    send_6x2F_change_player_hp(0xFFFFU, this->m_f4, temp_r3_2);
                }
            }
        }
    }
}
#pragma pop

void TOHealGeneral::update_opening() {
    u8 *arg0 = (u8 *)this;
    apply_heal_to_target();
    *(s32 *)&this->m_cc = (s32) (*(s32 *)&this->m_cc + 0x147);
    *(f32 *)&this->_padD0 = (f32) (*(f32 *)&this->_padD0 + lbl_805DB6B8);
    *(f32 *)((s8 *)arg0 + 0xE4) = (f32) ((lbl_805DB6BC + *(f32 *)((s8 *)arg0 + 0x3C)) - *(f32 *)&this->_padD0);
    if (lbl_805DB6BC <= *(f32 *)&this->_padD0) {
        *(f32 *)&this->_padD0 = (f32) lbl_805DB6BC;
        *(s32 *)&this->m_ac = 2;
    }
}
void TOHealGeneral::apply_heal_to_target() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r3_2;
    u32 id = this->m_f4;
    if ((id != 0xFFFF) && (id < 0x1000U)) {
        temp_r3_2 = get_player_by_client_id(id);
        if ((temp_r3_2 != 0) && (obj_testFlags30(temp_r3_2, 0x800) == 0) && (horizontal_distance_squared(temp_r3_2 + 0x38, arg0 + 0x38) < lbl_805DB6C4)) {
            add_actor_hp(temp_r3_2, 9);
            add_actor_tp(temp_r3_2, 9);
        }
    }
}

}
