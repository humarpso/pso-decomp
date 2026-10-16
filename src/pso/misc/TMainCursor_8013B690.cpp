#include "types.h"
#include "pso/misc/TMainCursor.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct Target_8013B70C {
    u8 pad0[0x32E];
    s16 f32E;
    u8 pad330[0x424 - 0x330];
    u8 *f424;
};

extern "C" {
s32 is_split_screen();
s32 get_split_screen_view_index__11TCameraCtrlFUs();
s32 get_mode__11TCameraCtrlFPv(void *);
s32 render__11TMainCursorFPv(void *);
extern u8 shared_effect_texture_list[];
s32 obj_testFlags30(s32, s32);
s32 obj_getField1c(void *);
s32 clear_flags__11TAdRicoRingFUl(void *, u32);
s32 test_action_mask__10TObjPlayerFl(void *, s32);
s32 check_visible__11TMainCursorFv(void *, void *, s32, s32);
s32 set_target_index__11TMainCursorFs(void *, s32);
s32 TMainCursor__sub_8013E310(void *);
u8 TMainCursor__sub_8013E338(void *);
u8 TMainCursor__sub_8013E358(void *);
s32 is_same_target__11TMainCursorFPvPv(void *, void *);
s8 TMainCursor__sub_8013F244(void);
s8 fn_8013F24C(void *, s32);
s32 check_flag_100__10TObjPlayerFPv(void *);
u8 get_cast_technique_level(void *, s32);
s32 is_invalid_slot__10TObjPlayerFUc(u8);
s32 reset_key_machine_state__10TObjPlayerFv(void);
u8 *calc_technique_parameters(s32, s32, s32);
void validate_target__11TMainCursorFPv(u8 *self);
}

extern "C" {

s32 check_can_pickup__11TMainCursorFi(s32 arg0);
s32 play_sound_effect(s32, void *, s32, s32);
s32 TMainCursor__sub_8013F180(void *);
s32 find_entity_by_id();
s32 can_pickup_item_by_id__10TObjPlayerFii(u32, s32);
s32 obj_testFlags30(s32, s32);
s32 queue_destruction__7TObjectFv(void *);

extern "C" void __dt__11TMainCursorFPvs();
extern "C" u8 lbl_8043F090[];
extern "C" u8 lbl_8043F0A4[];
extern "C" u8 lbl_8043F0B8[];
extern "C" u8 lbl_8043F0D0[];
extern "C" u8 bm_ply_lock_on_cursor_motion_names[];
extern "C" void render__7TObjectFv();
extern "C" void render_shadows__7TObjectFv();
extern "C" void run_task__14TLOC_ListClearFv();
extern void *bm_ply_lock_on_cursor_model_names[4];
void *bm_ply_lock_on_cursor_model_names[4] = {
    (void *)&lbl_8043F090, (void *)&lbl_8043F0A4, (void *)&lbl_8043F0B8, (void *)0x0,
};
void *target_cursor_resource_descriptor[4] = {
    (void *)&lbl_8043F0D0, (void *)&bm_ply_lock_on_cursor_model_names, (void *)&bm_ply_lock_on_cursor_motion_names, (void *)0x30000,
};
void *cursor_action_priority_table[5] = {
    (void *)0x3080b05, (void *)0xa0d0409, (void *)0xc071516, (void *)0x13140010,
    (void *)0x110e0600,
};
void *target_cursor_color_table[24] = {
    (void *)0x3f800000, (void *)0x0, (void *)0x3f47ae14, (void *)0x0,
    (void *)0x3f800000, (void *)0x0, (void *)0x3f47ae14, (void *)0x0,
    (void *)0x3f800000, (void *)0x3f333333, (void *)0x3f333333, (void *)0x3f333333,
    (void *)0x3f800000, (void *)0x3f800000, (void *)0x0, (void *)0x0,
    (void *)0x3f800000, (void *)0x0, (void *)0x3ec7ae14, (void *)0x0,
    (void *)0x3f800000, (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_804A71C4[6] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__11TMainCursorFPvs, (void *)&run_task__14TLOC_ListClearFv,
    (void *)&render__7TObjectFv, (void *)&render_shadows__7TObjectFv,
};

s32 check_can_pickup__11TMainCursorFi(s32 arg0) {
    s32 temp_r3;
    u32 temp_r3b;

    ((TMainCursor *)(arg0 + 0x60))->get_id();
    temp_r3 = find_entity_by_id();
    if ((temp_r3 != 0) && ((u32) (obj_testFlags30(temp_r3, 0x80000000) + 0x80000000) == 0U) && ((temp_r3b = ((TMainCursor *)arg0)->check_field_24()) != 0U) && (can_pickup_item_by_id__10TObjPlayerFii(temp_r3b, temp_r3) == 0)) {
        return 1;
    }
    return 0;
}

extern const f32 TMainCursor__data_805DB0C0;
extern const f32 TMainCursor__data_805DB0CC;
extern const f32 lbl_805DB0D0;

#pragma push
#pragma opt_common_subs off
void validate_target__11TMainCursorFPv(u8 *self) {
    Target_8013B70C *t;
    clear_flags__11TAdRicoRingFUl(self + 0x20, 0xB);
    t = (Target_8013B70C *)((TMainCursor *)self)->check_field_24();
    if (t == NULL) {
        ((TMainCursor *)self)->update_target_sub();
        return;
    }
    if (t->f424 == NULL) {
        ((TMainCursor *)self)->update_target_sub();
        return;
    }
    if (is_same_target__11TMainCursorFPvPv(self + 0x60, ((TMainCursor *)(t->f424 + 0x4EC))->get_list()) == 0) {
        ((TMainCursor *)self)->update_target_sub();
        return;
    }
    if (TMainCursor__sub_8013E358(self + 0x60) != 1) {
        if (check_visible__11TMainCursorFv((u8 *)t + 0x500, t, TMainCursor__sub_8013E358(self + 0x60),
                                            TMainCursor__sub_8013E338(self + 0x60)) == -1) {
            set_target_index__11TMainCursorFs(t->f424 + 0x4F8, 0xFFFF);
            ((TMainCursor *)self)->update_target_sub();
            return;
        }
    }
    if (TObjPlayer::is_any_teammate_in_state() != 0) {
        TMainCursor__sub_8013E310(self);
        return;
    }
    switch (TMainCursor__sub_8013E358(self + 0x60)) {
    case 0:
        ((TMainCursor *)self)->update_target_sub();
        return;
    case 1:
        return;
    case 2:
        if (((TObjPlayer *)t)->can_perform_physical_action() == 0) {
            ((TMainCursor *)self)->update_target_sub();
            return;
        }
        return;
    case 3:
        if (is_invalid_slot__10TObjPlayerFUc(get_cast_technique_level((u8 *)t + 0x428, TMainCursor__sub_8013E338(self + 0x60))) != 0) {
            ((TMainCursor *)self)->update_target_sub();
            return;
        }
        if (check_flag_100__10TObjPlayerFPv(t) == 0 && obj_testFlags30((s32)t, 0x20006) != 0) {
            ((TMainCursor *)self)->update_target_sub();
            return;
        }
        if (test_action_mask__10TObjPlayerFl(t, 0x548000) != 0) {
            ((TMainCursor *)self)->update_target_sub();
            return;
        }
        if (reset_key_machine_state__10TObjPlayerFv() == 0) {
            ((TMainCursor *)self)->update_target_sub();
            return;
        }
        if (t->f32E - *(s16 *)(calc_technique_parameters(TMainCursor__sub_8013E338(self + 0x60),
                                                      get_cast_technique_level((u8 *)t + 0x428, TMainCursor__sub_8013E338(self + 0x60)),
                                                      obj_getField1c(t)) + 0x10) < 0) {
            ((TMainCursor *)self)->update_target_sub();
            return;
        }
        return;
    case 4:
        return;
    case 5:
        if (fn_8013F24C((u8 *)t + 0x4AC, TMainCursor__sub_8013E338(self + 0x60)) != TMainCursor__sub_8013F244()) {
            ((TMainCursor *)self)->update_target_sub();
            return;
        }
        if (test_action_mask__10TObjPlayerFl(t, 0x548000) != 0) {
            ((TMainCursor *)self)->update_target_sub();
            return;
        }
        if (reset_key_machine_state__10TObjPlayerFv() == 0) {
            ((TMainCursor *)self)->update_target_sub();
        }
        return;
    case 6:
    case 7:
        return;
    }
}
#pragma pop

void TMainCursor::render() {
    u8 *arg0 = (u8 *)this;
    s32 cam;
    s32 no;
    if (((TMainCursor *)arg0)->init_render_flags() != 0) {
        return;
    }
    switch (((TMainCursor *)arg0)->test_flag_2_at_20()) {
    case 0:
        break;
    default:
        return;
    }
    if (is_split_screen() != 0) {
        ((TMainCursor *)arg0)->get_render_flag();
        cam = get_split_screen_view_index__11TCameraCtrlFUs();
        no = TCameraCtrl::get_camera_no();
        if (no != cam) {
            return;
        }
    } else if (get_mode__11TCameraCtrlFPv(((u8 *)&main_task)) & 0x10) {
        return;
    }
    switch (*(s32 *)(arg0 + 0x1C)) {
    case 0:
    case 1:
        ((TMainCursor *)arg0)->update_position();
        break;
    case 2:
        break;
    default:
        return;
    }
    TObjFish::set_global_param((s32)shared_effect_texture_list);
    render__11TMainCursorFPv(arg0);
}

void TMainCursor::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;

    if ((s32) *(s32 *)((s8 *)arg0 + 0x1C) != 2) {
        validate_target__11TMainCursorFPv((u8 *)(arg0));
        if (((TMainCursor *)arg0)->check_flag_1() != 0) {
            *(s32 *)((s8 *)arg0 + 0x1C) = 2;
        }
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x1C);
    switch (temp_r0) {
    case 0:
        *(f32 *)((s8 *)arg0 + 0x30) = (f32) (*(f32 *)((s8 *)arg0 + 0x30) - TMainCursor__data_805DB0CC);
        if (!(*(f32 *)((s8 *)arg0 + 0x30) > *(f32 *)((s8 *)arg0 + 0x34))) {
            *(f32 *)((s8 *)arg0 + 0x30) = (f32) *(f32 *)((s8 *)arg0 + 0x28);
            *(s32 *)((s8 *)arg0 + 0x1C) = 1;
            if (((TMainCursor *)arg0)->init_render_flags() == 0) {
                if (((TMainCursor *)arg0)->update() != 0) {
                    play_sound_effect(0x3816, arg0 + 0x40, 0, 1);
                    return;
                }
                play_sound_effect(0x3111, arg0 + 0x40, 0, 1);
            }
        }
    case 1:
        return;
    case 2:
        if ((((TMainCursor *)(arg0 + 0x4C))->get_pos() - lbl_805DB0D0) > TMainCursor__data_805DB0C0) {
            TMainCursor__sub_8013F180(arg0 + 0x4C);
            return;
        }
        queue_destruction__7TObjectFv(arg0);
        break;
    }
}

}
