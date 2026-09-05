#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TObjPlayer__sub_80102C58(void *);
M2C_UNK TObjPlayer__sub_80102C68(void *);
s32 is_flag_20000_set__10TObjPlayerFv(int);
s32 test_flag_2000000__10TObjPlayerFPv(int);
s32 reset_key_machine_state__10TObjPlayerFv();
void TObjPlayer__sub_80100E38(u8 *arg0);
}

extern "C" {

int TObjPlayer__sub_80100F34(void);
void draw_shield_particle__10TObjPlayerFPv(void *arg0);
void end_particle_effect__10TObjPlayerFv(void);
f32 get_mag_scale__10TObjPlayerFPv(void *arg0);
void setup_particle_once__10TObjPlayerFPv(void *arg0);
void update_screen_particle_effect__10TObjPlayerFPv(void *arg0);
s32 TObjPlayer__sub_8001BEF8(M2C_UNK *, M2C_UNK);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(M2C_UNK *, M2C_UNK);
M2C_UNK disable_if_single_screen__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
f32 get_mag_scale_f__10TObjPlayerFPv(s32);
int get_object__13TParticleCtrlFPv(void*);
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi(s32);
M2C_UNK play_particle_effect_once__10TObjPlayerFv();
M2C_UNK set_flags__10TObjPlayerFPvUi(M2C_UNK *, M2C_UNK);
M2C_UNK set_tev_direct__13TParticleCtrlFi(M2C_UNK);
M2C_UNK setup_particle_tev(M2C_UNK);

extern f32 lbl_805DAA90;

f32 get_mag_scale__10TObjPlayerFPv(void *arg0) {
    u32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u32 *, 0xF0);
    if (temp_r3 != 0U) {
        return get_mag_scale_f__10TObjPlayerFPv(temp_r3 + 0x608);
    }
    return lbl_805DAA90;
}

extern M2C_UNK lbl_805D53EC;

void TObjPlayer__sub_80100E38(u8 *arg0) {
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0xF0);
    if (temp_r0 != 0U) {
        if ((test_flag_2000000__10TObjPlayerFPv((int) (temp_r0)) == 0) && (reset_key_machine_state__10TObjPlayerFv() == 1) && (is_flag_20000_set__10TObjPlayerFv((int) (M2C_FIELD(arg0, u32 *, 0xF0))) == 0)) {
            TObjPlayer__sub_80102C68((void *) (arg0));
            return;
        }
        TObjPlayer__sub_80102C58((void *) (arg0));
        return;
    }
    TObjPlayer__sub_80102C58((void *) (arg0));
}

void update_screen_particle_effect__10TObjPlayerFPv(void *arg0) {
    if (TObjPlayer__sub_8001BEF8(&lbl_805D53EC, 0x10) != 0) {
        disable_if_single_screen__13TParticleCtrlFv();
        set_tev_direct__13TParticleCtrlFi(1);
        notify_fish_if_valid__10TObjPlayerFUi(M2C_FIELD(arg0, s32 *, 0x24));
        clear_flags__11TAdRicoRingFPvUi(&lbl_805D53EC, 0x10);
    }
}

int TObjPlayer__sub_80100F34(void) { return get_object__13TParticleCtrlFPv((void*)(31)); }

extern M2C_UNK lbl_805D53EC;

void draw_shield_particle__10TObjPlayerFPv(void *arg0) {
    if (TObjPlayer__sub_8001BEF8(&lbl_805D53EC, 8) != 0) {
        disable_if_single_screen__13TParticleCtrlFv();
        notify_fish_if_valid__10TObjPlayerFUi(M2C_FIELD(arg0, s32 *, 0x24));
        clear_flags__11TAdRicoRingFPvUi(&lbl_805D53EC, 8);
    }
}

extern M2C_UNK lbl_805D53EC;

void setup_particle_once__10TObjPlayerFPv(void *arg0) {
    play_particle_effect_once__10TObjPlayerFv();
    if (TObjPlayer__sub_8001BEF8(&lbl_805D53EC, 8) == 0) {
        setup_particle_tev(0);
        notify_fish_if_valid__10TObjPlayerFUi(M2C_FIELD(arg0, s32 *, 0x24));
        set_flags__10TObjPlayerFPvUi(&lbl_805D53EC, 8);
    }
}

extern M2C_UNK lbl_805D53EC;

void end_particle_effect__10TObjPlayerFv(void) {
    if (TObjPlayer__sub_8001BEF8(&lbl_805D53EC, 2) != 0) {
        end_effect_render__13TParticleCtrlFv();
        clear_flags__11TAdRicoRingFPvUi(&lbl_805D53EC, 2);
    }
}

}
