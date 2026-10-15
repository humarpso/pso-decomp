#include "types.h"

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
s32 TObjPlayer__sub_80102C58(void *);
s32 TObjPlayer__sub_80102C68(void *);
s32 is_flag_20000_set__10TObjPlayerFv(int);
s32 test_flag_2000000__10TObjPlayerFPv(int);
s32 reset_key_machine_state__10TObjPlayerFv();
void update_owner_visibility__5TItemFPv(u8 *arg0);
s32 load_projection_tex_matrix__15TOTrapAncient02Fi(void *);
void load_projection_tex__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 test_flags_any(s32 *, s32);
extern s32 lbl_805D53EC;
s32 set_flags__10TObjPlayerFPvUi(s32 *, s32);
s32 begin_effect_render__13TParticleCtrlFv();
void play_particle_effect_once__10TObjPlayerFv(void);
s32 clear_flags__11TAdRicoRingFPvUi(s32 *, s32);
s32 test_flags_any(s32 *, s32);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
extern RecoveredGlobal_80101088_lbl_8050BEC0 saved_model_draw_color;
extern RecoveredGlobal_80101088_lbl_8058D4C0 model_material_color;
extern s32 lbl_805D53EC;
extern s32 lbl_805D5660;
extern s32 model_render_flags;
void TObjPlayer__sub_80101088(void);
s32 set_flags__10TObjPlayerFPvUi(s32 *, s32);
s32 test_flags_any(s32 *, s32);
s32 set_chunk_material_color(s32);
extern s32 lbl_805D53EC;
extern s32 model_render_flags;
void enable_flag20__10TObjPlayerFi(s32 arg0);
s32 set_flags__10TObjPlayerFPvUi(s32 *, s32);
s32 test_flags_any(s32 *, s32);
s32 set_chunk_material_color(s32);
extern s32 lbl_805D53EC;
extern s32 model_render_flags;
void enable_first_time_flag__10TObjPlayerFi(s32 arg0);
void has_bonus_stats__9TItemDataFPv(void *);
void copy_to_item_data__5TItemFPvPv(void *, void *);
void copy_item_data_to_icon__10TObjPlayerFPv(void *arg0);
s32 get_player_by_client_id(u16);
s16 *get_stat_bonus_ptr__14TItemEquipBaseFPv();
u32 get_equip_field_d04__10TObjPlayerFPv(s32, s32);
s32 get_stat_bonus__10TObjPlayerFPv(s32);
s16 calc_stat_bonus_sum__10TObjPlayerFUs(u16 arg0);
s32 get_player_by_client_id(u16);
s16 *get_stat_bonus_ptr__14TItemEquipBaseFPv();
u32 get_equip_field_d04__10TObjPlayerFPv(s32, s32);
s32 get_stat__10TObjPlayerFPv(s32);
s16 calc_equip_bonus__10TObjPlayerFUs(u16 arg0);
s32 obj_isState2_324(int);
s32 get_field_d8__10TObjPlayerFPv(void *);
s32 bswap_and_send_6x61__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_80102D84(void *);
s32 get_global_state__14TOKeyMachine01Fv();
void send_6x61_activate_mag_effect(u8 *arg0, s32 arg1);
s32 get_global_state__14TOKeyMachine01Fv();
struct VObj_80101350_80100E00 *find_item_by_id(s32);
s32 swap_6x61_fields__10TObjPlayerFPv(void *);
void handle_6x61_activate_mag_effect(void *arg0);
}

extern "C" {

int TObjPlayer__sub_80100F34(void);
void draw_shield_particle__10TObjPlayerFPv(void *arg0);
void end_particle_effect__10TObjPlayerFv(void);
f32 get_mag_scale__10TObjPlayerFPv(void *arg0);
void setup_particle_once__10TObjPlayerFPv(void *arg0);
void update_screen_particle_effect__10TObjPlayerFPv(void *arg0);
s32 test_flags_any(s32 *, s32);
s32 clear_flags__11TAdRicoRingFPvUi(s32 *, s32);
s32 disable_if_single_screen__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
f32 get_mag_scale_f__10TObjPlayerFPv(s32);
int get_object__13TParticleCtrlFPv(void*);
s32 notify_fish_if_valid__10TObjPlayerFUi(s32);
s32 set_flags__10TObjPlayerFPvUi(s32 *, s32);
s32 set_tev_direct__13TParticleCtrlFi(s32);
s32 setup_particle_tev(s32);

extern f32 lbl_805DAA90;

f32 get_mag_scale__10TObjPlayerFPv(void *arg0) {
    u32 temp_r3;

    temp_r3 = *(u32 *)((s8 *)arg0 + 0xF0);
    if (temp_r3 != 0U) {
        return get_mag_scale_f__10TObjPlayerFPv(temp_r3 + 0x608);
    }
    return lbl_805DAA90;
}

extern s32 lbl_805D53EC;

void update_owner_visibility__5TItemFPv(u8 *arg0) {
    u32 temp_r0;
    temp_r0 = *(u32 *)((s8 *)arg0 + 0xF0);
    if (temp_r0 != 0U) {
        if ((test_flag_2000000__10TObjPlayerFPv((int) (temp_r0)) == 0) && (reset_key_machine_state__10TObjPlayerFv() == 1) && (is_flag_20000_set__10TObjPlayerFv((int) (*(u32 *)((s8 *)arg0 + 0xF0))) == 0)) {
            TObjPlayer__sub_80102C68((void *) (arg0));
            return;
        }
        TObjPlayer__sub_80102C58((void *) (arg0));
        return;
    }
    TObjPlayer__sub_80102C58((void *) (arg0));
}

void load_projection_tex__10TObjPlayerFii(s32 arg0, s32 arg1) {
    load_projection_tex_matrix__15TOTrapAncient02Fi((void *) (arg1));
}

void update_screen_particle_effect__10TObjPlayerFPv(void *arg0) {
    if (test_flags_any(&lbl_805D53EC, 0x10) != 0) {
        disable_if_single_screen__13TParticleCtrlFv();
        set_tev_direct__13TParticleCtrlFi(1);
        notify_fish_if_valid__10TObjPlayerFUi(*(s32 *)((s8 *)arg0 + 0x24));
        clear_flags__11TAdRicoRingFPvUi(&lbl_805D53EC, 0x10);
    }
}

int TObjPlayer__sub_80100F34(void) { return get_object__13TParticleCtrlFPv((void*)(31)); }

extern s32 lbl_805D53EC;

void draw_shield_particle__10TObjPlayerFPv(void *arg0) {
    if (test_flags_any(&lbl_805D53EC, 8) != 0) {
        disable_if_single_screen__13TParticleCtrlFv();
        notify_fish_if_valid__10TObjPlayerFUi(*(s32 *)((s8 *)arg0 + 0x24));
        clear_flags__11TAdRicoRingFPvUi(&lbl_805D53EC, 8);
    }
}

extern s32 lbl_805D53EC;

void setup_particle_once__10TObjPlayerFPv(void *arg0) {
    play_particle_effect_once__10TObjPlayerFv();
    if (test_flags_any(&lbl_805D53EC, 8) == 0) {
        setup_particle_tev(0);
        notify_fish_if_valid__10TObjPlayerFUi(*(s32 *)((s8 *)arg0 + 0x24));
        set_flags__10TObjPlayerFPvUi(&lbl_805D53EC, 8);
    }
}

extern s32 lbl_805D53EC;

void end_particle_effect__10TObjPlayerFv(void) {
    if (test_flags_any(&lbl_805D53EC, 2) != 0) {
        end_effect_render__13TParticleCtrlFv();
        clear_flags__11TAdRicoRingFPvUi(&lbl_805D53EC, 2);
    }
}
void play_particle_effect_once__10TObjPlayerFv(void) {
    if (test_flags_any(&lbl_805D53EC, 2) == 0) {
        begin_effect_render__13TParticleCtrlFv();
        set_flags__10TObjPlayerFPvUi(&lbl_805D53EC, 2);
    }
}
void TObjPlayer__sub_80101088(void) {
    if (test_flags_any((s32 *)((void *) (&lbl_805D53EC)), (s32)((int) (1))) != 0) {
        copy_vec4__13TRaderMapCoreFPvPv((void *) (&model_material_color.value), (void *) (&saved_model_draw_color.value));
        model_render_flags = lbl_805D5660;
        clear_flags__11TAdRicoRingFPvUi((s32 *)((void *) (&lbl_805D53EC)), (s32)((int) (1)));
    }
}
void enable_flag20__10TObjPlayerFi(s32 arg0) {
    s32 temp_r0;
    if ((arg0 != 0) && (test_flags_any(&lbl_805D53EC, 1) == 0)) {
        temp_r0 = (*(volatile s32 *)&model_render_flags) & 0xFFFFFFEF;
        (*(volatile s32 *)&model_render_flags) = temp_r0;
        (*(volatile s32 *)&model_render_flags) = temp_r0 | 0x20;
        set_chunk_material_color(arg0);
        set_flags__10TObjPlayerFPvUi(&lbl_805D53EC, 1);
    }
}
void enable_first_time_flag__10TObjPlayerFi(s32 arg0) {
    s32 temp_r0;
    if ((arg0 != 0) && (test_flags_any(&lbl_805D53EC, 1) == 0)) {
        model_render_flags &= 0xFFFFFFDF;
        model_render_flags |= 0x10;
        set_chunk_material_color(arg0);
        set_flags__10TObjPlayerFPvUi(&lbl_805D53EC, 1);
    }
}
void copy_item_data_to_icon__10TObjPlayerFPv(void *arg0) {
    s32 sp8[4];
    copy_to_item_data__5TItemFPvPv(arg0, &sp8);
    has_bonus_stats__9TItemDataFPv(&sp8);
}
s16 calc_stat_bonus_sum__10TObjPlayerFUs(u16 arg0) {
    s32 temp_r3;
    s32 var_acc;
    s32 var_cnt;
    temp_r3 = get_player_by_client_id((u16) arg0);
    var_acc = 0;
    if (temp_r3 != 0) {
        var_cnt = 9;
        do {
            if (get_equip_field_d04__10TObjPlayerFPv(temp_r3, var_cnt) != 0U) {
                var_acc += *(s16 *)((s8 *)(get_stat_bonus_ptr__14TItemEquipBaseFPv()) + 2);
            }
            var_cnt += 1;
        } while (var_cnt != 0xD);
        return (s16) (get_stat_bonus__10TObjPlayerFPv(temp_r3) - var_acc);
    }
    return 0;
}
s16 calc_equip_bonus__10TObjPlayerFUs(u16 arg0) {
    s32 temp_r3;
    s32 var_acc;
    s32 var_cnt;
    temp_r3 = get_player_by_client_id((u16) arg0);
    var_acc = 0;
    if (temp_r3 != 0) {
        var_cnt = 9;
        do {
            if (get_equip_field_d04__10TObjPlayerFPv(temp_r3, var_cnt) != 0U) {
                var_acc += *get_stat_bonus_ptr__14TItemEquipBaseFPv();
            }
            var_cnt += 1;
        } while (var_cnt != 0xD);
        return (s16) (get_stat__10TObjPlayerFPv(temp_r3) - var_acc);
    }
    return 0;
}
void send_6x61_activate_mag_effect(u8 *arg0, s32 arg1) {
    Stack_801012DC stack;
    if (((u32) *(u32 *)((s8 *)arg0 + 0xF0) != 0U) && (get_global_state__14TOKeyMachine01Fv() != 0xF) && (obj_isState2_324((int) (*(u32 *)((s8 *)arg0 + 0xF0))) == 0)) {
        TObjPlayer__sub_80102D84((void *) (&stack.sp8));
        stack.spC = get_field_d8__10TObjPlayerFPv((void *) (arg0));
        stack.sp10 = arg1;
        bswap_and_send_6x61__10TObjPlayerFPv((void *) (&stack.sp8));
    }
}
void handle_6x61_activate_mag_effect(void *arg0) {
    struct VObj_80101350_80100E00 *obj;
    if (get_global_state__14TOKeyMachine01Fv() != 0xF) {
        swap_6x61_fields__10TObjPlayerFPv(arg0);
        obj = find_item_by_id(*(s32 *)((s8 *)arg0 + 4));
        if ((obj != NULL) && ((u32) *(u32 *)((s8 *)obj + 0xF0) != 0U)) {
            obj->m17(*(s32 *)((s8 *)arg0 + 8));
        }
    }
}

typedef char RecoveredGlobal_80101088_lbl_8050BEC0_size[sizeof(RecoveredGlobal_80101088_lbl_8050BEC0) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_80101088_lbl_8058D4C0_size[sizeof(RecoveredGlobal_80101088_lbl_8058D4C0) == 0x10 ? 1 : -1];

}
