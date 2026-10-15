#include "types.h"

struct WeaponCallbackBase { u8 padding[0x18]; };

struct WeaponCallbackObject : WeaponCallbackBase {
    virtual void callback0();
    virtual void callback1();
    virtual void callback2();
    virtual void callback3();
    virtual void callback4();
    virtual void callback5();
    virtual void callback6();
    virtual void callback7();
    virtual void callback8();
    virtual void callback9();
    virtual void callback10();
    virtual void callback11();
    virtual void callback12();
    virtual void callback13();
    virtual void callback14();
    virtual void callback15();
    virtual void callback16();
    virtual void callback17();
    virtual void callback18();
    virtual void callback19();
    virtual void callback20();
    virtual void callback21();
    virtual void callback22();
    virtual void callback23();
    virtual void callback24();
    virtual void callback25();
    virtual void callback26();
    virtual void callback27();
    virtual void callback28();
    virtual void callback29();
    virtual void callback30();
    virtual void callback31();
    virtual void callback32();
    virtual void callback33();
    virtual void callback34();
    virtual void callback35();
    virtual void callback36();
    virtual void callback37();
    virtual void callback38();
    virtual void callback39();
    virtual void callback40();
    virtual void callback41();
    virtual void callback42();
    virtual void callback43();
    virtual void callback44();
    virtual void callback45();
    virtual void callback46();
    virtual void callback47();
    virtual void callback48();
    virtual void callback49();
    virtual void callback50();
    virtual void callback51();
    virtual void callback52();
    virtual void callback53();
    virtual void callback54();
    virtual void callback55();
    virtual void callback56();
    virtual void callback57();
    virtual void materialCallback();
};

struct WeaponArgb { f32 alpha, red, green, blue; };

struct WeaponColorDescriptor_80120304 { s32 mode; WeaponArgb first, second; };

typedef struct Sub_80120454 { u8 pad[0x18]; u8 f18; } Sub_80120454;

typedef struct Src_80120454 { u8 pad[0x1A4]; u8 ents[6]; u8 pad2[0x27]; u8 f1d1; u8 f1d2; u8 pad3[9]; Sub_80120454 *f1dc; } Src_80120454;

typedef struct Dst_80120454 { u8 pad[3]; u8 f3; u8 f4; u8 pad2; u8 ents[6]; } Dst_80120454;

extern "C" {
int test_flags_1b8__10TObjPlayerFUl(void *, u32);
void set_status_flags__10TObjPlayerFPvUi(void *, u32);
void clear_equip_flags__10TObjPlayerFPvUi(void *, u32);
extern const f32 lbl_805DAC98;
extern const f32 lbl_805DAC9C;
extern const f32 lbl_805DACA0;
void advance_weapon_photon_phase(u8 *arg0);
extern s16 weapon_node_material_index;
extern s16 TObjPlayer__weapon_node_ids[];
extern u8* weapon_render_callback_object;
extern u32 lbl_805D53EC;
s32 get_player_list__10TObjPlayerFv();
void TObjPlayer__sub_80101088();
void end_particle_effect__10TObjPlayerFv();
void draw_shield_particle__10TObjPlayerFv(void*);
void update_screen_particle_effect__10TObjPlayerFv(void*);
void enable_first_time_flag__10TObjPlayerFl(const WeaponArgb*);
void play_particle_effect_once__10TObjPlayerFv();
s32 test_flags_any(void*,u32);
void increment_model_node_counter();
void apply_weapon_node_material();
WeaponColorDescriptor_80120304 *get_photon_color_record(s16 color_index);
f32 get_mag_scale__10TObjPlayerFv(void *weapon);
void copy_vec4__13TRaderMapCoreFPvPv(void *, const void *);
extern const f32 lbl_805DAC98;
extern const f32 lbl_805DAC9C;
WeaponArgb get_weapon_color__11TItemWeaponFPv(void *weapon);
void copy_entry_bytes__10TObjPlayerFPv(void *, void *);
extern u8 lbl_805DACA4;
void TItemWeapon__write_item_data(Src_80120454 *arg0, Dst_80120454 *arg1);
}

extern "C" {

void apply_weapon_node_material() {
    const s32 node = get_player_list__10TObjPlayerFv();
    TObjPlayer__sub_80101088();
    end_particle_effect__10TObjPlayerFv();
    draw_shield_particle__10TObjPlayerFv(weapon_render_callback_object);
    update_screen_particle_effect__10TObjPlayerFv(weapon_render_callback_object);
    ((WeaponCallbackObject*)weapon_render_callback_object)->materialCallback();
    if(node == weapon_node_material_index) {
        WeaponArgb color = get_weapon_color__11TItemWeaponFPv((void *)(weapon_render_callback_object));
        enable_first_time_flag__10TObjPlayerFl(&color);
    }
    if(node == TObjPlayer__weapon_node_ids[0] || node == TObjPlayer__weapon_node_ids[1] || node == TObjPlayer__weapon_node_ids[2]) {
        play_particle_effect_once__10TObjPlayerFv();
        if(test_flags_any(&lbl_805D53EC,4)) {
            WeaponArgb color = get_weapon_color__11TItemWeaponFPv((void *)(weapon_render_callback_object));
            enable_first_time_flag__10TObjPlayerFl(&color);
        }
    }
    increment_model_node_counter();
}

#pragma push
#pragma opt_common_subs off
void advance_weapon_photon_phase(u8 *arg0) {
    if (test_flags_1b8__10TObjPlayerFUl(arg0, 0x02000000U) == 0U) {
        *(f32 *)((s8 *)arg0 + 0x1C8) = (f32) (*(f32 *)((s8 *)arg0 + 0x1C8) + lbl_805DACA0);
    } else {
        *(f32 *)((s8 *)arg0 + 0x1C8) = (f32) (*(f32 *)((s8 *)arg0 + 0x1C8) - lbl_805DACA0);
    }
    if (lbl_805DAC9C <= *(f32 *)((s8 *)arg0 + 0x1C8)) {
        *(f32 *)((s8 *)arg0 + 0x1C8) = (f32) lbl_805DAC9C;
        set_status_flags__10TObjPlayerFPvUi(arg0, 0x02000000U);
    }
    if (*(f32 *)((s8 *)arg0 + 0x1C8) <= lbl_805DAC98) {
        *(f32 *)((s8 *)arg0 + 0x1C8) = (f32) lbl_805DAC98;
        clear_equip_flags__10TObjPlayerFPvUi(arg0, 0x02000000U);
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
WeaponArgb get_weapon_color__11TItemWeaponFPv(void *weapon) {
    WeaponArgb first, second;
    WeaponColorDescriptor_80120304 *descriptor;
    f32 override_alpha;
    if (*(s16 *)((s8 *)weapon + 0x1E8) != -1) {
        descriptor = get_photon_color_record(*(s16 *)((s8 *)weapon + 0x1E8));
        if (descriptor->mode == 1) {
            copy_vec4__13TRaderMapCoreFPvPv(&first, &descriptor->first);
            copy_vec4__13TRaderMapCoreFPvPv(&second, &descriptor->second);
            first.alpha = *(f32 *)((s8 *)weapon + 0x1C8) * (second.alpha - first.alpha) + first.alpha;
            first.red = *(f32 *)((s8 *)weapon + 0x1C8) * (second.red - first.red) + first.red;
            first.green = *(f32 *)((s8 *)weapon + 0x1C8) * (second.green - first.green) + first.green;
            first.blue = *(f32 *)((s8 *)weapon + 0x1C8) * (second.blue - first.blue) + first.blue;
            override_alpha = get_mag_scale__10TObjPlayerFv(weapon);
            if (lbl_805DAC9C != override_alpha) {
                first.alpha = override_alpha;
            }
            return first;
        } else {
            return descriptor->first;
        }
    } else {
        WeaponArgb fallback;
        fallback.alpha = lbl_805DAC9C;
        fallback.blue = fallback.green = fallback.red = lbl_805DAC98;
        return fallback;
    }
}
#pragma pop

void TItemWeapon__write_item_data(Src_80120454 *arg0, Dst_80120454 *arg1) {
    s32 off;
    u32 i;
    u8 t;
    s32 ok;
    for (i = 0, off = 0; i != 3; i++, off += 2) {
        copy_entry_bytes__10TObjPlayerFPv(&arg1->ents[off], &arg0->ents[off]);
    }
    ok = 1;
    arg1->f3 = arg0->f1d1;
    t = arg0->f1d2;
    if (t & 0x80) {
        ok = 0;
    }
    if (arg0->f1dc->f18 == 0) {
        arg1->f4 = t;
    } else {
        arg1->f4 = 0;
    }
    if (ok == 0) {
        arg1->f4 = arg1->f4 | lbl_805DACA4;
    }
}

}
