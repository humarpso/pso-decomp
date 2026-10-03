#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_801BC194 { u8 pad[0x14]; };

extern "C" {

s32 get_main_phase();
M2C_UNK calc_attach_pos__10TObjPlayerFPv(void *);
s32 is_locally_controlled__10TObjPlayerFPv(void *);
s32 obj_isState2_324(void *);
u16 obj_getField1c(void *);
s32 check_flag__10TObjPlayerFPvi(void *, int);
M2C_UNK save_position__14TBoss4DarkFalzFi(void *);
M2C_UNK TBoss4DarkFalz__sub_8004C220(void *, void *);
M2C_UNK reset_cameras_to_actor(void *, int);
M2C_UNK set_state_flags__10TObjPlayerFPvUi(void *, int);
M2C_UNK set_camera_mode__10TObjPlayerFi(int);
s32 is_current_room__10TObjRoomIdFPv(void *);
s32 is_single_screen__10TObjPlayerFv();
s32 is_key_machine_ready__10TObjPlayerFv();
M2C_UNK play_effect_default__10TObjPlayerFii(void *, int);
void *get_player_by_client_id(s32);
s32 has_active_camera_event__10TObjPlayerFv(void *);
u8 *find_player_arrival_set(void *, s32);
M2C_UNK TObjPlayer__sub_801BEA38(void *, int, f32, f32);
M2C_UNK set_position__10TObjPlayerFPvfff(void *, f32, f32, f32);
u8 *get_sub_object__10TObjPlayerFPv(void *);
s32 get_lock_timer__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801BF954(void *, int);
s32 TObjPlayer__sub_801BF95C(void *);
M2C_UNK TForceOperate__ct(void *, s32, u16);
M2C_UNK copy_offset_position__10TObjPlayerFPvPv(void *, void *);
M2C_UNK clear_movement_history(void *);
s32 TObjPlayer__sub_801D8C3C(void *);
u8 *TObjPlayer__sub_801D8C6C(void *);
void *__nw__7TObjectFUl(u32);
void *consume_telepipe_arrival(u16, void *);
extern Ent_801BC194 TObjPlayer__data_8050E920[];
extern s32 lbl_805D53A0;
extern s32 tl_02;
extern const f32 TObjPlayer__data_805DC278;

void place_on_area_entry__10TObjPlayerFPv(u8 *arg0) {
    void *obj;
    void *p;
    Ent_801BC194 *e;
    u8 *other;

    if (get_main_phase() == 0xE && is_single_screen__10TObjPlayerFv() == 0 &&
        is_locally_controlled__10TObjPlayerFPv(arg0) != 0 && has_active_camera_event__10TObjPlayerFv(arg0) == 0 &&
        check_flag__10TObjPlayerFPvi(arg0, 0x100000) == 0 && is_key_machine_ready__10TObjPlayerFv() != 0) {
        set_state_flags__10TObjPlayerFPvUi(arg0, 0x100000);
        TBoss4DarkFalz__sub_8004C220(arg0, TObjPlayer__sub_801D8C6C(arg0));
        M2C_FIELD(arg0, s32 *, 0x60) = TObjPlayer__sub_801D8C3C(arg0);
        play_effect_default__10TObjPlayerFii(arg0, 0x1E);
        set_camera_mode__10TObjPlayerFi(3);
        obj = __nw__7TObjectFUl(0x24);
        if (obj != NULL) {
            TForceOperate__ct(obj, tl_02, obj_getField1c(arg0));
        }
    } else if (obj_isState2_324(arg0) == 0) {
        p = consume_telepipe_arrival(obj_getField1c(arg0), arg0 + 0x60);
        if (p != NULL) {
            TBoss4DarkFalz__sub_8004C220(arg0, p);
        } else {
            e = &TObjPlayer__data_8050E920[obj_getField1c(arg0)];
            if (obj_isState2_324(arg0) == 0 && TObjPlayer__sub_801BF95C(e) == 1) {
                TObjPlayer__sub_801BF954(e, 0);
                M2C_FIELD(arg0, s32 *, 0x60) = get_lock_timer__10TObjPlayerFPv(e);
                TBoss4DarkFalz__sub_8004C220(arg0, get_sub_object__10TObjPlayerFPv(e));
            } else {
                other = find_player_arrival_set(arg0, obj_getField1c(arg0));
                if (other != NULL) {
                    TBoss4DarkFalz__sub_8004C220(arg0, other + 0x38);
                    M2C_FIELD(arg0, s32 *, 0x60) = M2C_FIELD(other, s32 *, 0x60);
                } else {
                    set_position__10TObjPlayerFPvfff(arg0, TObjPlayer__data_805DC278, TObjPlayer__data_805DC278, TObjPlayer__data_805DC278);
                }
            }
        }
    }
    save_position__14TBoss4DarkFalzFi(arg0);
    calc_attach_pos__10TObjPlayerFPv(arg0);
    copy_offset_position__10TObjPlayerFPvPv(arg0 + 0x84C, arg0);
    TObjPlayer__sub_801BEA38(arg0, 0, M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x40));
    clear_movement_history(arg0 + 0x6AC);
    if (is_single_screen__10TObjPlayerFv() != 0) {
        reset_cameras_to_actor(arg0, 0);
    } else if (is_current_room__10TObjRoomIdFPv(arg0) != 0) {
        if (is_locally_controlled__10TObjPlayerFPv(arg0) == 0 && (p = get_player_by_client_id(lbl_805D53A0)) != NULL) {
            reset_cameras_to_actor(p, 0);
        } else {
            reset_cameras_to_actor(arg0, 0);
        }
    }
}

}
