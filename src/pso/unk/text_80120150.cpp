#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

extern "C" {
int test_flags_1b8__10TObjPlayerFPvUi(void *, u32);
void set_status_flags__10TObjPlayerFPvUi(void *, u32);
void clear_equip_flags__10TObjPlayerFPvUi(void *, u32);
extern const f32 lbl_805DAC98;
extern const f32 lbl_805DAC9C;
extern const f32 lbl_805DACA0;
void advance_weapon_photon_phase(u8 *arg0);
extern s16 lbl_805D5510;
extern s16 lbl_80506248[];
extern u8* lbl_805D5514;
extern u32 lbl_805D53EC;
s32 get_player_list__10TObjPlayerFv();
void TObjPlayer__sub_80101088();
void end_particle_effect__10TObjPlayerFv();
void draw_shield_particle__10TObjPlayerFPv(void*);
void update_screen_particle_effect__10TObjPlayerFPv(void*);
void enable_first_time_flag__10TObjPlayerFi(const WeaponArgb*);
void play_particle_effect_once__10TObjPlayerFv();
s32 TObjPlayer__sub_8001BEF8(void*,u32);
void TObjPlayer__sub_801211F0();
void apply_weapon_node_material();
WeaponColorDescriptor_80120304 *TObjPlayer__sub_8011CDA0(s16 color_index);
f32 get_mag_scale__10TObjPlayerFPv(void *weapon);
void copy_vec4__13TRaderMapCoreFPvPv(void *, const void *);
extern const f32 lbl_805DAC98;
extern const f32 lbl_805DAC9C;
WeaponArgb TObjPlayer__sub_80120304(void *weapon);
}

extern "C" {

void apply_weapon_node_material() {
    const s32 node = get_player_list__10TObjPlayerFv();
    TObjPlayer__sub_80101088();
    end_particle_effect__10TObjPlayerFv();
    draw_shield_particle__10TObjPlayerFPv(lbl_805D5514);
    update_screen_particle_effect__10TObjPlayerFPv(lbl_805D5514);
    ((WeaponCallbackObject*)lbl_805D5514)->materialCallback();
    if(node == lbl_805D5510) {
        WeaponArgb color = TObjPlayer__sub_80120304((void *)(lbl_805D5514));
        enable_first_time_flag__10TObjPlayerFi(&color);
    }
    if(node == lbl_80506248[0] || node == lbl_80506248[1] || node == lbl_80506248[2]) {
        play_particle_effect_once__10TObjPlayerFv();
        if(TObjPlayer__sub_8001BEF8(&lbl_805D53EC,4)) {
            WeaponArgb color = TObjPlayer__sub_80120304((void *)(lbl_805D5514));
            enable_first_time_flag__10TObjPlayerFi(&color);
        }
    }
    TObjPlayer__sub_801211F0();
}

#pragma push
#pragma opt_common_subs off
void advance_weapon_photon_phase(u8 *arg0) {
    if (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0x02000000U) == 0U) {
        M2C_FIELD(arg0, f32 *, 0x1C8) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C8) + lbl_805DACA0);
    } else {
        M2C_FIELD(arg0, f32 *, 0x1C8) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C8) - lbl_805DACA0);
    }
    if (lbl_805DAC9C <= M2C_FIELD(arg0, f32 *, 0x1C8)) {
        M2C_FIELD(arg0, f32 *, 0x1C8) = (f32) lbl_805DAC9C;
        set_status_flags__10TObjPlayerFPvUi(arg0, 0x02000000U);
    }
    if (M2C_FIELD(arg0, f32 *, 0x1C8) <= lbl_805DAC98) {
        M2C_FIELD(arg0, f32 *, 0x1C8) = (f32) lbl_805DAC98;
        clear_equip_flags__10TObjPlayerFPvUi(arg0, 0x02000000U);
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
WeaponArgb TObjPlayer__sub_80120304(void *weapon) {
    WeaponArgb first, second;
    WeaponColorDescriptor_80120304 *descriptor;
    f32 override_alpha;
    if (M2C_FIELD(weapon, s16 *, 0x1E8) != -1) {
        descriptor = TObjPlayer__sub_8011CDA0(M2C_FIELD(weapon, s16 *, 0x1E8));
        if (descriptor->mode == 1) {
            copy_vec4__13TRaderMapCoreFPvPv(&first, &descriptor->first);
            copy_vec4__13TRaderMapCoreFPvPv(&second, &descriptor->second);
            first.alpha = M2C_FIELD(weapon, f32 *, 0x1C8) * (second.alpha - first.alpha) + first.alpha;
            first.red = M2C_FIELD(weapon, f32 *, 0x1C8) * (second.red - first.red) + first.red;
            first.green = M2C_FIELD(weapon, f32 *, 0x1C8) * (second.green - first.green) + first.green;
            first.blue = M2C_FIELD(weapon, f32 *, 0x1C8) * (second.blue - first.blue) + first.blue;
            override_alpha = get_mag_scale__10TObjPlayerFPv(weapon);
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

}
