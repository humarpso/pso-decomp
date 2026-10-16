#include "types.h"
#include "pso/boss/TBoss6Type2.h"

struct O_80337054 { u8 pad[0x3CC]; s32 f3cc; u8 pad2[0x410 - 0x3D0]; s32 f410; };

extern "C" {
void TBoss6Type2__sub_8032F5C4(void *);
s32 set_action__9TBoss6MagFl(void * a0, s32 a1);
extern const f32 lbl_805DF978;
extern const f32 lbl_805DF97C;
s32 set_action__9TBoss6MagFl(void * a0, s32 a1);
extern const f32 lbl_805DF980;
extern const f32 lbl_805DF984;
void spawn_mag_mines__11TBoss6Type2Fv();
}

extern "C" {

void TBoss6Type2__sub_80336F00(void* p);
void TBoss6Type2__sub_80336FB8(void* p);
void TBoss6Type2__sub_80337108(void);
void TBoss6Type2__sub_80337160(void);
void TBoss6Type2__sub_803371B4(void* p);
int play_sound_effect(void*, void*, void*, void*);
s32 turn_toward_target__11TBoss6Type2Fv();
s32 fly_toward_target__11TBoss6Type2Fv();
s32 TBoss6Type2__sub_8032FB84();
s32 set_action__9TBoss6MagFl(void * a0 = 0, s32 a1 = 0);

#pragma push
#pragma opt_common_subs off
void TBoss6Type2::update_recover_timer() {
    u8 *arg0 = (u8 *)this;
    *(f32 *)((s8 *)arg0 + 0x400) = (f32) (*(f32 *)((s8 *)arg0 + 0x400) + lbl_805DF978);
    if (*(f32 *)((s8 *)arg0 + 0x400) < lbl_805DF97C) {
        *(f32 *)((s8 *)arg0 + 0x400) = (f32) lbl_805DF97C;
    }
    this->m_3cc = (s32) (this->m_3cc + 1);
    if ((s32) this->m_3cc >= 0x5A) {
        TBoss6Type2__sub_8032F5C4(arg0);
        if ((s32) this->m_40c != 0) {
            set_action__9TBoss6MagFl((void *)((void *) (arg0)), (s32)((int) (1)));
            return;
        }
        set_action__9TBoss6MagFl((void *)((void *) (arg0)), (s32)((int) (2)));
    }
}
#pragma pop

void TBoss6Type2__sub_80336F00(void* p) { *(int*)((char*)p + 0x3cc) = 0; play_sound_effect((void*)438292, (char*)p + 0x38, (void*)0, (void*)0); ((TBoss6Type2 *)p)->destroy_part_object((s32)((void*)((void*)0))); }

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void TBoss6Type2::update_ramp_timer() {
    u8 *arg0 = (u8 *)this;
    *(f32 *)((s8 *)arg0 + 0x400) = (f32) (*(f32 *)((s8 *)arg0 + 0x400) + lbl_805DF980);
    if (*(f32 *)((s8 *)arg0 + 0x400) > lbl_805DF984) {
        *(f32 *)((s8 *)arg0 + 0x400) = (f32) lbl_805DF984;
    }
    this->m_3cc = (s32) (this->m_3cc + 1);
    if ((s32) this->m_3cc >= (s32) this->m_3c0) {
        set_action__9TBoss6MagFl(arg0, 5);
    }
}
#pragma pop

void TBoss6Type2__sub_80336FB8(void* p) { *(int*)((char*)p + 0x3cc) = 0; ((TBoss6Type2 *)p)->ensure_particle_emitter((s32)((void*)0)); }
void TBoss6Type2::tick_attack_timer() {
    this->m_3cc = (s32) (this->m_3cc - 1);
    if ((s32) this->m_3cc < 0) {
        destroy_part_object((s32)((void*)(3)));
        if ((s32) this->m_40c != 0) {
            set_action__9TBoss6MagFl(this, 1);
            return;
        }
        set_action__9TBoss6MagFl(this, 2);
    }
}

void TBoss6Type2::start_mag_mines_state() {
    O_80337054 *arg0 = (O_80337054 *)this;
    arg0->f3cc = 0x25;
    switch (arg0->f410) {
    case 0:
        spawn_mag_mines__11TBoss6Type2Fv();
        break;
    default:
        break;
    }
    ((TBoss6Type2 *)arg0)->ensure_particle_emitter((s32)((void*)((void *)3)));
}

void TBoss6Type2::update_effect_subsystems() {
    turn_toward_target__11TBoss6Type2Fv();
    apply_random_drift();
    push_out_from_target();
    push_out_from_points();
    enforce_min_distance();
    if ((s32) this->m_40c != 0) {
        set_action__9TBoss6MagFl(this, 1);
    }
}
void TBoss6Type2__sub_80337108(void) {  }
void TBoss6Type2::update_attack_state() {
    fly_toward_target__11TBoss6Type2Fv();
    push_out_from_target();
    enforce_min_distance();
    if ((s32) this->m_40c == 0) {
        set_action__9TBoss6MagFl(this, 2);
    }
}
void TBoss6Type2__sub_80337160(void) {  }
void TBoss6Type2::advance_phase_counter() {
    TBoss6Type2__sub_8032FB84();
    this->m_3cc = (s32) (this->m_3cc + 1);
    if ((s32) this->m_3cc >= 4) {
        set_action__9TBoss6MagFl(this, 1);
    }
}
void TBoss6Type2__sub_803371B4(void* p) { *(s32*)((char*)p + 0x3cc) = 0; }

}
