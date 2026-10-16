#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/player/TUnk_804E70A8.h"
#include "pso/player/TUnk_804E71A0.h"

struct RecoveredGlobal_80307784_lbl_804E70A8 {
    s32 value;
    u8 remaining[0xF4];
};

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *TObjPlayer__sub_80307800(s32 arg0);
extern const f32 lbl_805DF0AC;
void TObjPlayer__sub_803076F8(u8 *arg0);
u8 get_slot_count__14TItemProShieldFv(void *);
u8 * TItemWeapon__ct(void *, void *);
s32 set_status_flags__10TObjPlayerFPvUi(void *, s32);
extern s32 lbl_804E70A8[];
u8 *TObjPlayer__sub_80307784(u8 *arg0, u8 *arg1, s32 _w2);
extern char shared_capture_texture_list[];
char *get_shared_capture_texture_list(void);
}

extern "C" {

void *item_equip_variant_deleting_dtor_80307858(void *arg0, s16 arg1);
void *TObjPlayer__sub_8030790C(void *arg0, s16 arg1);
f32 sin_table_lookup(s32);
s32 TKeyBoardControl__sub_8000F91C(s32);
s32 TKeyBoardControl__sub_8000F9CC(s32);
s32 draw_weapon_model();
s32 draw_weapon_at_joint(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_80307858(void *arg0, s16 arg1);
s32 queue_destruction__7TObjectFv();
s32 set_status_flags__10TObjPlayerFPvUi(void *, s32);

void TUnk_804E70A8::reserved_53() {
    s32 temp_r31;

    temp_r31 = *(s32 *)((s8 *)((u8 *)this) + 0xF4);
    draw_weapon_model();
    *(s32 *)((s8 *)((u8 *)this) + 0xF4) = (s32) *(s32 *)((s8 *)((u8 *)this) + 0x188);
    draw_weapon_at_joint(((u8 *)this), 0x23);
    *(s32 *)((s8 *)((u8 *)this) + 0xF4) = temp_r31;
}

extern f32 lbl_805DF0A8;

void TUnk_804E70A8::update_weapon() {
    if ((s32) *(s32 *)((s8 *)this + 0x1F8) > 0) {
        if (get_slot_count__14TItemProShieldFv((void *)(this)) == 1) {
            *(s32 *)((s8 *)this + 0x1F8) = (s32) (*(s32 *)((s8 *)this + 0x1F8) - 1);
            if ((s32) *(s32 *)((s8 *)this + 0x1F8) == 0) {
                set_status_flags__10TObjPlayerFPvUi(this, 0x800);
            }
        }
    } else {
        *(s32 *)((s8 *)this + 0x200) = (s32) (*(s32 *)((s8 *)this + 0x200) + 0xB6);
        *(s32 *)((s8 *)this + 0x1FC) = (s32) (lbl_805DF0A8 * sin_table_lookup(*(s32 *)((s8 *)this + 0x200)));
    }
}

extern s32 lbl_804E70A8[];

void TObjPlayer__sub_803076F8(u8 *arg0) {
    s32 temp_r31;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x1F8) == 0) {
        temp_r31 = TObjPlayer::get_player_list();
        ((TObjPlayer *)arg0)->setup_particle_once();
        TObjPlayer::load_projection_tex((s32)((void *) (arg0)), (s32)((int) ((s32) (lbl_805DF0AC * (f32) (*(s32 *)((s8 *)arg0 + 0x1FC) + (temp_r31 * 3))))));
    }
}

typedef char RecoveredGlobal_80307784_lbl_804E70A8_size[sizeof(RecoveredGlobal_80307784_lbl_804E70A8) == 0xF8 ? 1 : -1];
u8 *TObjPlayer__sub_80307784(u8 *arg0, u8 *arg1, s32 _w2) {
    TItemWeapon__ct(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80307784_lbl_804E70A8 *)&lbl_804E70A8).value;
    set_status_flags__10TObjPlayerFPvUi((void *)(arg0), (s32)(1));
    if (get_slot_count__14TItemProShieldFv((void *)(arg0)) == 1) {
        set_status_flags__10TObjPlayerFPvUi((void *)(arg0), (s32)(0x800));
    }
    *(s32 *)((s8 *)arg0 + 0x1F8) = 5;
    *(s32 *)((s8 *)arg0 + 0x1FC) = 0;
    *(s32 *)((s8 *)arg0 + 0x200) = 0;
    return arg0;
}

u8 *TObjPlayer__sub_80307800(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x204));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TObjPlayer__sub_80307784((u8 *)(temp_r3), (u8 *)(tl_05), (s32)(arg0)));
        }
        return var_r0;
    }
    return NULL;
}
#include "types.h"

#include "types.h"
#include "pso/player/TObjPlayer.h"

void *item_equip_variant_deleting_dtor_80307858(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E70A8;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}
char *get_shared_capture_texture_list(void) {
    return shared_capture_texture_list;
}

void TUnk_804E71A0::render() {  }

extern s32 ending_movie_active_flag;

void TObjPlayer::disable_keyboard_control() {
    queue_destruction__7TObjectFv();
    if ((s32) ending_movie_active_flag != 0) {
        TKeyBoardControl__sub_8000F9CC(2);
        return;
    }
    TKeyBoardControl__sub_8000F91C(2);
    TKeyBoardControl__sub_8000F9CC(0x12);
}

void TUnk_804E71A0::run_task() {  }

extern s32 lbl_804E71A0[];

void *TObjPlayer__sub_8030790C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E71A0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
