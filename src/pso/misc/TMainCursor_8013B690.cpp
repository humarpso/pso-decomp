#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;

struct Target_8013B70C {
    u8 pad0[0x32E];
    s16 f32E;
    u8 pad330[0x424 - 0x330];
    u8 *f424;
};

extern "C" {
s32 is_split_screen();
s32 TCameraCtrl__sub_800688D0();
s32 get_mode__11TCameraCtrlFPv(void *);
M2C_UNK render__11TMainCursorFPv(void *);
M2C_UNK update_position__11TMainCursorFi(void *);
M2C_UNK get_render_flag__11TMainCursorFPv(void *);
s32 test_flag_2_at_20__11TMainCursorFPv(void *);
s32 init_render_flags__11TMainCursorFPv(void *);
s32 get_camera_no__11TCameraCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(void *);
extern u8 lbl_8048E5A0[];
extern u8 main_task[];
void render__11TMainCursorFv(u8 *arg0);
s32 obj_testFlags30(M2C_UNK, M2C_UNK);
s32 obj_getField1c(void *);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(void *, u32);
s32 TLobby__sub_800822E8(void *, s32);
s32 check_visible__11TMainCursorFPv(void *, void *, s32, s32);
M2C_UNK set_target_index__11TMainCursorFPvs(void *, s32);
u32 check_field_24__11TMainCursorFPv(s32);
M2C_UNK TMainCursor__sub_8013E310(void *);
u8 TMainCursor__sub_8013E338(void *);
u8 TMainCursor__sub_8013E358(void *);
s32 TMainCursor__sub_8013E378(void *, void *);
void *get_list__11TMainCursorFPv(void *);
M2C_UNK update_target_sub__11TMainCursorFPv(void *);
s8 TMainCursor__sub_8013F244(void);
s8 fn_8013F24C(void *, s32);
s32 is_any_teammate_in_state__10TObjPlayerFv(void);
s32 check_flag_100__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801CEC1C(void *);
u8 fn_801D9870(void *, s32);
s32 is_invalid_slot__10TObjPlayerFUc(u8);
s32 reset_key_machine_state__10TObjPlayerFv(void);
u8 *TTecCtrl__sub_8022DBC4(s32, s32, s32);
void TMainCursor__sub_8013B70C(u8 *self);
}

extern "C" {

s32 check_can_pickup__11TMainCursorFi(s32 arg0);
void run_task__11TMainCursorFv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TMainCursor__sub_8013F180(void *);
s32 find_entity_by_id();
s32 can_pickup_item_by_id__10TObjPlayerFii(u32, s32);
u32 check_field_24__11TMainCursorFPv(s32);
s32 check_flag_1__11TMainCursorFPv(void *);
M2C_UNK get_id__11TMainCursorFPv(s32);
f32 get_pos__11TMainCursorFPv(void *);
s32 init_render_flags__11TMainCursorFPv(void *);
s32 obj_testFlags30(M2C_UNK, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 update__11TMainCursorFPv(void *);

s32 check_can_pickup__11TMainCursorFi(s32 arg0) {
    s32 temp_r3;
    u32 temp_r3b;

    get_id__11TMainCursorFPv(arg0 + 0x60);
    temp_r3 = find_entity_by_id();
    if ((temp_r3 != 0) && ((u32) (obj_testFlags30(temp_r3, 0x80000000) + 0x80000000) == 0U) && ((temp_r3b = check_field_24__11TMainCursorFPv(arg0)) != 0U) && (can_pickup_item_by_id__10TObjPlayerFii(temp_r3b, temp_r3) == 0)) {
        return 1;
    }
    return 0;
}

extern const f32 TMainCursor__data_805DB0C0;
extern const f32 TMainCursor__data_805DB0CC;
extern const f32 lbl_805DB0D0;

#pragma push
#pragma opt_common_subs off
void TMainCursor__sub_8013B70C(u8 *self) {
    Target_8013B70C *t;
    clear_flags__11TAdRicoRingFPvUi(self + 0x20, 0xB);
    t = (Target_8013B70C *)((u8 *(*)(u8 *))check_field_24__11TMainCursorFPv)(self);
    if (t == NULL) {
        update_target_sub__11TMainCursorFPv(self);
        return;
    }
    if (t->f424 == NULL) {
        update_target_sub__11TMainCursorFPv(self);
        return;
    }
    if (TMainCursor__sub_8013E378(self + 0x60, get_list__11TMainCursorFPv(t->f424 + 0x4EC)) == 0) {
        update_target_sub__11TMainCursorFPv(self);
        return;
    }
    if (TMainCursor__sub_8013E358(self + 0x60) != 1) {
        if (check_visible__11TMainCursorFPv((u8 *)t + 0x500, t, TMainCursor__sub_8013E358(self + 0x60),
                                            TMainCursor__sub_8013E338(self + 0x60)) == -1) {
            set_target_index__11TMainCursorFPvs(t->f424 + 0x4F8, 0xFFFF);
            update_target_sub__11TMainCursorFPv(self);
            return;
        }
    }
    if (is_any_teammate_in_state__10TObjPlayerFv() != 0) {
        TMainCursor__sub_8013E310(self);
        return;
    }
    switch (TMainCursor__sub_8013E358(self + 0x60)) {
    case 0:
        update_target_sub__11TMainCursorFPv(self);
        return;
    case 1:
        return;
    case 2:
        if (TObjPlayer__sub_801CEC1C(t) == 0) {
            update_target_sub__11TMainCursorFPv(self);
            return;
        }
        return;
    case 3:
        if (is_invalid_slot__10TObjPlayerFUc(fn_801D9870((u8 *)t + 0x428, TMainCursor__sub_8013E338(self + 0x60))) != 0) {
            update_target_sub__11TMainCursorFPv(self);
            return;
        }
        if (check_flag_100__10TObjPlayerFPv(t) == 0 && obj_testFlags30((M2C_UNK)t, 0x20006) != 0) {
            update_target_sub__11TMainCursorFPv(self);
            return;
        }
        if (TLobby__sub_800822E8(t, 0x548000) != 0) {
            update_target_sub__11TMainCursorFPv(self);
            return;
        }
        if (reset_key_machine_state__10TObjPlayerFv() == 0) {
            update_target_sub__11TMainCursorFPv(self);
            return;
        }
        if (t->f32E - *(s16 *)(TTecCtrl__sub_8022DBC4(TMainCursor__sub_8013E338(self + 0x60),
                                                      fn_801D9870((u8 *)t + 0x428, TMainCursor__sub_8013E338(self + 0x60)),
                                                      obj_getField1c(t)) + 0x10) < 0) {
            update_target_sub__11TMainCursorFPv(self);
            return;
        }
        return;
    case 4:
        return;
    case 5:
        if (fn_8013F24C((u8 *)t + 0x4AC, TMainCursor__sub_8013E338(self + 0x60)) != TMainCursor__sub_8013F244()) {
            update_target_sub__11TMainCursorFPv(self);
            return;
        }
        if (TLobby__sub_800822E8(t, 0x548000) != 0) {
            update_target_sub__11TMainCursorFPv(self);
            return;
        }
        if (reset_key_machine_state__10TObjPlayerFv() == 0) {
            update_target_sub__11TMainCursorFPv(self);
        }
        return;
    case 6:
    case 7:
        return;
    }
}
#pragma pop

void render__11TMainCursorFv(u8 *arg0) {
    s32 cam;
    s32 no;
    if (init_render_flags__11TMainCursorFPv(arg0) != 0) {
        return;
    }
    switch (test_flag_2_at_20__11TMainCursorFPv(arg0)) {
    case 0:
        break;
    default:
        return;
    }
    if (is_split_screen() != 0) {
        get_render_flag__11TMainCursorFPv(arg0);
        cam = TCameraCtrl__sub_800688D0();
        no = get_camera_no__11TCameraCtrlFv();
        if (no != cam) {
            return;
        }
    } else if (get_mode__11TCameraCtrlFPv(main_task) & 0x10) {
        return;
    }
    switch (*(s32 *)(arg0 + 0x1C)) {
    case 0:
    case 1:
        update_position__11TMainCursorFi(arg0);
        break;
    case 2:
        break;
    default:
        return;
    }
    set_global_param__8TObjFishFi(lbl_8048E5A0);
    render__11TMainCursorFPv(arg0);
}

void run_task__11TMainCursorFv(u8 *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 2) {
        TMainCursor__sub_8013B70C((u8 *)(arg0));
        if (check_flag_1__11TMainCursorFPv(arg0) != 0) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        }
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) (M2C_FIELD(arg0, f32 *, 0x30) - TMainCursor__data_805DB0CC);
        if (!(M2C_FIELD(arg0, f32 *, 0x30) > M2C_FIELD(arg0, f32 *, 0x34))) {
            M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
            M2C_FIELD(arg0, s32 *, 0x1C) = 1;
            if (init_render_flags__11TMainCursorFPv(arg0) == 0) {
                if (update__11TMainCursorFPv(arg0) != 0) {
                    TBoss3Volopt__sub_8022675C(0x3816, arg0 + 0x40, 0, 1);
                    return;
                }
                TBoss3Volopt__sub_8022675C(0x3111, arg0 + 0x40, 0, 1);
            }
        }
    case 1:
        return;
    case 2:
        if ((get_pos__11TMainCursorFPv(arg0 + 0x4C) - lbl_805DB0D0) > TMainCursor__data_805DB0C0) {
            TMainCursor__sub_8013F180(arg0 + 0x4C);
            return;
        }
        queue_destruction__7TObjectFv(arg0);
        break;
    }
}

}
