#include "types.h"
#include "pso/item/TItemEquipBase.h"
#include "pso/items/TItemWeapon.h"
#include "pso/item/TItem.h"
#include "pso/player/TObjPlayer.h"
#include "pso/TAdRicoRing.h"
#include "pso/TParticleCtrl.h"
#include "pso/item/TItemData.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/misc/TOTrapAncient02.h"

struct RecoveredGlobal_80101088_lbl_8050BEC0 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_80101088_lbl_8058D4C0 {
    s32 value;
    u8 remaining[0xC];
};

struct Base_80101350_80100E00 { char pad[0x18]; };

struct VObj_80101350_80100E00 : Base_80101350_80100E00 {
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17(s32);
};

struct Stack_801012DC {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

extern "C" {
s32 is_flag_20000_set__10TObjPlayerFv(int);
s32 test_flag_2000000__10TObjPlayerFPv(int);
s32 reset_key_machine_state__10TObjPlayerFv();
s32 test_flags_any(s32 *, s32);
extern s32 lbl_805D53EC;
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
extern RecoveredGlobal_80101088_lbl_8050BEC0 saved_model_draw_color;
extern RecoveredGlobal_80101088_lbl_8058D4C0 model_material_color;
extern s32 lbl_805D5660;
extern s32 model_render_flags;
void TObjPlayer__sub_80101088(void);
s32 set_chunk_material_color(s32);
void copy_to_item_data__5TItemFPv(void *, void *);
s32 get_player_by_client_id(u16);
s16 *get_stat_bonus_ptr__14TItemEquipBaseFv();
u32 get_equip_field_d04__10TObjPlayerFv(s32, s32);
s32 get_stat_bonus__10TObjPlayerFv(s32);
s32 get_stat__10TObjPlayerFv(s32);
s32 obj_isState2_324__13TUnk_804806E8Fv(int);
void TObjPlayer__sub_80102D84(u8 *arg0);
struct VObj_80101350_80100E00 *find_item_by_id(s32);
void handle_6x61_activate_mag_effect(void *arg0);
int TObjPlayer__sub_80100F34(void);
s32 setup_particle_tev(s32);

extern f32 lbl_805DAA90;

f32 TObjPlayer::get_mag_scale() {
    u32 temp_r3;

    temp_r3 = *(u32 *)&this->unk_F0;
    if (temp_r3 != 0U) {
        return ((TObjPlayer *)(temp_r3 + 0x608))->get_mag_scale_f();
    }
    return lbl_805DAA90;
}

void TItem::update_owner_visibility() {
    u8 *arg0 = (u8 *)this;
    u32 temp_r0;
    temp_r0 = this->m_f0;
    if (temp_r0 != 0U) {
        if ((test_flag_2000000__10TObjPlayerFPv((int) (temp_r0)) == 0) && (reset_key_machine_state__10TObjPlayerFv() == 1) && (is_flag_20000_set__10TObjPlayerFv((int) (this->m_f0)) == 0)) {
            ((TItem *)arg0)->sub_80102C68();
            return;
        }
        ((TItem *)arg0)->sub_80102C58();
        return;
    }
    ((TItem *)arg0)->sub_80102C58();
}

void TObjPlayer::load_projection_tex(s32 arg0, s32 arg1) {
    ((TOTrapAncient02 *)arg1)->load_projection_tex_matrix();
}

void TItemWeapon::update_screen_particle_effect() {
    if (test_flags_any(&lbl_805D53EC, 0x10) != 0) {
        TParticleCtrl::disable_if_single_screen();
        TParticleCtrl::set_tev_direct(1);
        TObjPlayer::notify_fish_if_valid(*(s32 *)((s8 *)this + 0x24));
        ((TAdRicoRing *)(&lbl_805D53EC))->clear_flags(0x10);
    }
}

int TObjPlayer__sub_80100F34(void) { return ((TParticleCtrl *)31)->get_object(); }

void TItemWeapon::draw_shield_particle() {
    if (test_flags_any(&lbl_805D53EC, 8) != 0) {
        TParticleCtrl::disable_if_single_screen();
        TObjPlayer::notify_fish_if_valid(*(s32 *)((s8 *)this + 0x24));
        ((TAdRicoRing *)(&lbl_805D53EC))->clear_flags(8);
    }
}

void TObjPlayer::setup_particle_once() {
    TObjPlayer::play_particle_effect_once();
    if (test_flags_any(&lbl_805D53EC, 8) == 0) {
        setup_particle_tev(0);
        TObjPlayer::notify_fish_if_valid(*(s32 *)&this->texture_id);
        ((TObjPlayer *)(&lbl_805D53EC))->set_flags(8);
    }
}

void TObjPlayer::end_particle_effect() {
    if (test_flags_any(&lbl_805D53EC, 2) != 0) {
        TParticleCtrl::end_effect_render();
        ((TAdRicoRing *)(&lbl_805D53EC))->clear_flags(2);
    }
}
void TObjPlayer::play_particle_effect_once() {
    if (test_flags_any(&lbl_805D53EC, 2) == 0) {
        TParticleCtrl::begin_effect_render();
        ((TObjPlayer *)(&lbl_805D53EC))->set_flags(2);
    }
}
void TObjPlayer__sub_80101088(void) {
    if (test_flags_any((s32 *)((void *) (&lbl_805D53EC)), (s32)((int) (1))) != 0) {
        copy_vec4__13TRaderMapCoreFPvPv((void *) (&model_material_color.value), (void *) (&saved_model_draw_color.value));
        model_render_flags = lbl_805D5660;
        ((TAdRicoRing *)(&lbl_805D53EC))->clear_flags((s32)((int) (1)));
    }
}
void TObjPlayer::enable_flag20(s32 arg0) {
    s32 temp_r0;
    if ((arg0 != 0) && (test_flags_any(&lbl_805D53EC, 1) == 0)) {
        temp_r0 = (*(volatile s32 *)&model_render_flags) & 0xFFFFFFEF;
        (*(volatile s32 *)&model_render_flags) = temp_r0;
        (*(volatile s32 *)&model_render_flags) = temp_r0 | 0x20;
        set_chunk_material_color(arg0);
        ((TObjPlayer *)(&lbl_805D53EC))->set_flags(1);
    }
}
void TObjPlayer::enable_first_time_flag(s32 arg0) {
    s32 temp_r0;
    if ((arg0 != 0) && (test_flags_any(&lbl_805D53EC, 1) == 0)) {
        model_render_flags &= 0xFFFFFFDF;
        model_render_flags |= 0x10;
        set_chunk_material_color(arg0);
        ((TObjPlayer *)(&lbl_805D53EC))->set_flags(1);
    }
}
void TObjPlayer::copy_item_data_to_icon() {
    s32 sp8[4];
    copy_to_item_data__5TItemFPv(this, &sp8);
    ((TItemData *)(&sp8))->has_bonus_stats();
}
s16 TObjPlayer::calc_stat_bonus_sum(u16 arg0) {
    s32 temp_r3;
    s32 var_acc;
    s32 var_cnt;
    temp_r3 = get_player_by_client_id((u16) arg0);
    var_acc = 0;
    if (temp_r3 != 0) {
        var_cnt = 9;
        do {
            if (get_equip_field_d04__10TObjPlayerFv(temp_r3, var_cnt) != 0U) {
                var_acc += *(s16 *)((s8 *)(get_stat_bonus_ptr__14TItemEquipBaseFv()) + 2);
            }
            var_cnt += 1;
        } while (var_cnt != 0xD);
        return (s16) (get_stat_bonus__10TObjPlayerFv(temp_r3) - var_acc);
    }
    return 0;
}
s16 TObjPlayer::calc_equip_bonus(u16 arg0) {
    s32 temp_r3;
    s32 var_acc;
    s32 var_cnt;
    temp_r3 = get_player_by_client_id((u16) arg0);
    var_acc = 0;
    if (temp_r3 != 0) {
        var_cnt = 9;
        do {
            if (get_equip_field_d04__10TObjPlayerFv(temp_r3, var_cnt) != 0U) {
                var_acc += *get_stat_bonus_ptr__14TItemEquipBaseFv();
            }
            var_cnt += 1;
        } while (var_cnt != 0xD);
        return (s16) (get_stat__10TObjPlayerFv(temp_r3) - var_acc);
    }
    return 0;
}
void TItemEquipBase::send_6x61_activate_mag_effect(s32 arg1) {
    Stack_801012DC stack;
    if (((u32) this->m_f0 != 0U) && (TOKeyMachine01::get_global_state() != 0xF) && (obj_isState2_324__13TUnk_804806E8Fv((int) (this->m_f0)) == 0)) {
        TObjPlayer__sub_80102D84((u8 *)(&stack.sp8));
        stack.spC = ((TItem *)((u8 *)this))->get_field_d8();
        stack.sp10 = arg1;
        ((TObjPlayer *)(&stack.sp8))->bswap_and_send_6x61();
    }
}
void handle_6x61_activate_mag_effect(void *arg0) {
    struct VObj_80101350_80100E00 *obj;
    if (TOKeyMachine01::get_global_state() != 0xF) {
        ((TObjPlayer *)arg0)->swap_6x61_fields();
        obj = find_item_by_id(*(s32 *)((s8 *)arg0 + 4));
        if ((obj != NULL) && ((u32) *(u32 *)((s8 *)obj + 0xF0) != 0U)) {
            obj->m17(*(s32 *)((s8 *)arg0 + 8));
        }
    }
}

typedef char RecoveredGlobal_80101088_lbl_8050BEC0_size[sizeof(RecoveredGlobal_80101088_lbl_8050BEC0) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_80101088_lbl_8058D4C0_size[sizeof(RecoveredGlobal_80101088_lbl_8058D4C0) == 0x10 ? 1 : -1];

}
