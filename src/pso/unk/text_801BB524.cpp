#include "types.h"
struct Player_801BB524 { u8 pad[0x30]; u32 flags; u8 pad34[0x324 - 0x34]; s16 control; };

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void TObjPlayer__sub_801BEB34(void *self, s32 role);
void TObjPlayer__sub_801BBD58(void *self);
s32 TObjPlayer__sub_801BA6BC(void *self);
s32 TObjPlayer__sub_801BB524(Player_801BB524 *self, s32 role);
M2C_UNK TObjPlayer__sub_80018F64(void *);
s32 TObjPlayer__sub_80019248(void *);
s16 obj_getS16_32C(void *);
s32 obj_testFlags30(void *, int);
u16 obj_getField1c(void *);
M2C_UNK obj_clearFlags30(void *, int);
s32 check_flag__10TObjPlayerFPvi(void *, int);
M2C_UNK TObjPlayer__sub_8011E204(void *, int);
M2C_UNK set_state_flags__10TObjPlayerFPvUi(void *, int);
M2C_UNK reset_movement__10TObjPlayerFPv(void *);
M2C_UNK release_member_90__10TObjPlayerFPv(void *);
M2C_UNK set_camera_mode__10TObjPlayerFi(int);
M2C_UNK reset_motion_fields__10TObjPlayerFPv();
s32 is_single_screen__10TObjPlayerFv();
s32 is_alive_and_ready__10TObjPlayerFi(void *);
M2C_UNK TObjPlayer__sub_801AF7E0(void *);
s32 is_key_machine_ready__10TObjPlayerFv();
M2C_UNK send_field_state__10TObjPlayerFi(void *);
M2C_UNK TObjPlayer__sub_801B1FA4(u16, s32, s32);
M2C_UNK send_code50_packet__10TObjPlayerFi(void *);
M2C_UNK send_code_49_1__10TObjPlayerFi(void *);
M2C_UNK play_effect_default__10TObjPlayerFii(void *, int);
M2C_UNK TObjPlayer__sub_801BB8A8(void *);
M2C_UNK TFontSmallLobby__ct(void *);
M2C_UNK TObjPlayer__sub_801BBB74(void *);
M2C_UNK update_lock_on_cursor__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801BC194(void *);
M2C_UNK reset_state__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801BC858(void *);
M2C_UNK TObjPlayer__sub_801BCA0C(void *);
M2C_UNK update_state__10TObjPlayerFi(void *);
M2C_UNK can_cast_technique__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801BCD50(void *);
M2C_UNK update_recobox__10TObjPlayerFi(void *);
M2C_UNK update_input_and_draw__10TObjPlayerFi(void *);
M2C_UNK TObjPlayer__sub_801BD3A4(void *);
s32 check_camera_mode__10TObjPlayerFv();
M2C_UNK set_battle_flag__10TObjPlayerFPvi(void *, int);
s32 get_anim_id__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801BEE18(void *, int);
M2C_UNK update_position_from_target__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801D8D14(void *);
s32 get_hospital_position__10TObjPlayerFPv(void *);
M2C_UNK TMedicalCenterMes__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK TLobby__sub_8024AC20(s32);
extern s32 tl_05;
void TObjPlayer__vt6(s32 arg0);
}

extern "C" {

s32 TObjPlayer__sub_801BB524(Player_801BB524 *self, s32 role) {
    TObjPlayer__sub_801BEB34(self, role);
    if (role < 4) {
        self->control = 1;
    } else if (role == 4) {
        self->control = 2;
    } else if (role == 5) {
        self->control = 3;
    } else if (role == 6) {
        self->control = 6;
    } else if (role == 7) {
        self->control = 7;
    } else {
        return 0;
    }
    self->flags |= 0x10000000;
    TObjPlayer__sub_801BBD58(self);
    return TObjPlayer__sub_801BA6BC(self) != 1 ? 1 : 0;
}
void TObjPlayer__vt6(s32 arg0) {
    s32 temp_r30;
    s32 temp_r31;
    s32 temp_r3;
    reset_motion_fields__10TObjPlayerFPv();
    release_member_90__10TObjPlayerFPv((void *) (arg0));
    reset_movement__10TObjPlayerFPv((void *) (arg0));
    TObjPlayer__sub_80018F64((void *) (arg0));
    reset_state__10TObjPlayerFPv((void *) (arg0));
    TObjPlayer__sub_801BD3A4((void *) (arg0));
    TObjPlayer__sub_801BC194((void *) (arg0));
    update_input_and_draw__10TObjPlayerFi((void *) (arg0));
    TObjPlayer__sub_801BCD50((void *) (arg0));
    can_cast_technique__10TObjPlayerFPv((void *) (arg0));
    update_recobox__10TObjPlayerFi((void *) (arg0));
    update_state__10TObjPlayerFi((void *) (arg0));
    TObjPlayer__sub_801BCA0C((void *) (arg0));
    TObjPlayer__sub_801BC858((void *) (arg0));
    update_lock_on_cursor__10TObjPlayerFPv((void *) (arg0));
    TObjPlayer__sub_801BBB74((void *) (arg0));
    TFontSmallLobby__ct((void *) (arg0));
    TObjPlayer__sub_801BB8A8((void *) (arg0));
    if ((TObjPlayer__sub_80019248((void *) (arg0)) != 0) && (is_key_machine_ready__10TObjPlayerFv() != 0) && (check_flag__10TObjPlayerFPvi((void *) (arg0), (int) (0x800)) == 0) && ((obj_testFlags30((void *) (arg0), (int) (0x800)) != 0) || (obj_getS16_32C((void *) (arg0)) <= 0))) {
        obj_clearFlags30((void *) (arg0), (int) (0x800));
        if (check_camera_mode__10TObjPlayerFv() != 0) {
            send_code_49_1__10TObjPlayerFi((void *) (arg0));
        } else {
            if (is_single_screen__10TObjPlayerFv() == 0) {
                TObjPlayer__sub_801BEE18((void *) (arg0), (int) (0));
            }
            TObjPlayer__sub_801B1FA4(obj_getField1c((void *) (arg0)), get_hospital_position__10TObjPlayerFPv((void *) (arg0)), TObjPlayer__sub_801D8D14((void *) (arg0)));
            set_state_flags__10TObjPlayerFPvUi((void *) (arg0), (int) (0x800));
            set_battle_flag__10TObjPlayerFPvi((void *) (arg0), (int) (0));
        }
    }
    if ((TObjPlayer__sub_80019248((void *) (arg0)) != 0) && (check_flag__10TObjPlayerFPvi((void *) (arg0), (int) (0x800)) != 0)) {
        TObjPlayer__sub_8011E204((void *) (arg0), (int) (0x800));
        TLobby__sub_8024AC20(obj_getField1c((void *) (arg0)));
        play_effect_default__10TObjPlayerFii((void *) (arg0), (int) (0xF));
        update_position_from_target__10TObjPlayerFPv((void *) (arg0));
        send_code_49_1__10TObjPlayerFi((void *) (arg0));
        send_code50_packet__10TObjPlayerFi((void *) (arg0));
        if (is_alive_and_ready__10TObjPlayerFi((void *) (arg0)) != 0) {
            TObjPlayer__sub_801AF7E0((void *) (arg0));
        }
        temp_r3 = get_anim_id__10TObjPlayerFPv((void *) (arg0));
        switch (temp_r3) {
        case 2:
            break;
        case 0:
            set_camera_mode__10TObjPlayerFi((int) (2));
            send_field_state__10TObjPlayerFi((void *) (arg0));
            TObjPlayer__sub_801BEE18((void *) (arg0), (int) (0));
            {
                void *m = __nw__7TObjectFUl(0x234);
                if (m != 0) {
                    TMedicalCenterMes__ct(m, (void *) (tl_05), (void *) (arg0));
                }
            }
            break;
        case 1:
            set_camera_mode__10TObjPlayerFi((int) (1));
            break;
        }
        set_battle_flag__10TObjPlayerFPvi((void *) (arg0), (int) (0));
    }
}

}
