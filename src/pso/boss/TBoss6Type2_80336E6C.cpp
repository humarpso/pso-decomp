#include "types.h"

struct O_80337054 { u8 pad[0x3CC]; s32 f3cc; u8 pad2[0x410 - 0x3D0]; s32 f410; };

extern "C" {
void TBoss6Type2__sub_8032F5C4(void *);
s32 set_action__11TBoss6Type2FPvi(void * a0, s32 a1);
extern const f32 lbl_805DF978;
extern const f32 lbl_805DF97C;
void update_recover_timer__11TBoss6Type2FPv(u8 *arg0);
s32 set_action__11TBoss6Type2FPvi(void * a0, s32 a1);
extern const f32 lbl_805DF980;
extern const f32 lbl_805DF984;
void update_ramp_timer__11TBoss6Type2FPv(u8 *arg0);
int ensure_particle_emitter__11TBoss6Type2FPvi(void*, void*);
void spawn_mag_mines__11TBoss6Type2FPv();
void start_mag_mines_state__11TBoss6Type2FPv(O_80337054 *arg0);
}

extern "C" {

void TBoss6Type2__sub_80336F00(void* p);
void TBoss6Type2__sub_80336FB8(void* p);
void TBoss6Type2__sub_80337108(void);
void TBoss6Type2__sub_80337160(void);
void TBoss6Type2__sub_803371B4(void* p);
void advance_phase_counter__11TBoss6Type2FPv(void *arg0);
void tick_attack_timer__11TBoss6Type2FPv(void *arg0);
void update_attack_state__11TBoss6Type2FPv(void *arg0);
void update_effect_subsystems__11TBoss6Type2FPv(void *arg0);
int play_sound_effect(void*, void*, void*, void*);
int destroy_part_object__11TBoss6Type2Fii(void*, void*);
int ensure_particle_emitter__11TBoss6Type2FPvi(void*, void*);
s32 enforce_min_distance__11TBoss6Type2FPv(void *);
s32 push_out_from_points__11TBoss6Type2FPv(void *);
s32 push_out_from_target__11TBoss6Type2FPv(void *);
s32 apply_random_drift__11TBoss6Type2FPv(void *);
s32 turn_toward_target__11TBoss6Type2FPv();
s32 fly_toward_target__11TBoss6Type2FPv();
s32 TBoss6Type2__sub_8032FB84();
s32 set_action__11TBoss6Type2FPvi(void * a0 = 0, s32 a1 = 0);

#pragma push
#pragma opt_common_subs off
void update_recover_timer__11TBoss6Type2FPv(u8 *arg0) {
    *(f32 *)((s8 *)arg0 + 0x400) = (f32) (*(f32 *)((s8 *)arg0 + 0x400) + lbl_805DF978);
    if (*(f32 *)((s8 *)arg0 + 0x400) < lbl_805DF97C) {
        *(f32 *)((s8 *)arg0 + 0x400) = (f32) lbl_805DF97C;
    }
    *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) + 1);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x3CC) >= 0x5A) {
        TBoss6Type2__sub_8032F5C4(arg0);
        if ((s32) *(s32 *)((s8 *)arg0 + 0x40C) != 0) {
            set_action__11TBoss6Type2FPvi((void *)((void *) (arg0)), (s32)((int) (1)));
            return;
        }
        set_action__11TBoss6Type2FPvi((void *)((void *) (arg0)), (s32)((int) (2)));
    }
}
#pragma pop

void TBoss6Type2__sub_80336F00(void* p) { *(int*)((char*)p + 0x3cc) = 0; play_sound_effect((void*)438292, (char*)p + 0x38, (void*)0, (void*)0); destroy_part_object__11TBoss6Type2Fii((void*)(p), (void*)((void*)0)); }

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void update_ramp_timer__11TBoss6Type2FPv(u8 *arg0) {
    *(f32 *)((s8 *)arg0 + 0x400) = (f32) (*(f32 *)((s8 *)arg0 + 0x400) + lbl_805DF980);
    if (*(f32 *)((s8 *)arg0 + 0x400) > lbl_805DF984) {
        *(f32 *)((s8 *)arg0 + 0x400) = (f32) lbl_805DF984;
    }
    *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) + 1);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x3CC) >= (s32) *(s32 *)((s8 *)arg0 + 0x3C0)) {
        set_action__11TBoss6Type2FPvi(arg0, 5);
    }
}
#pragma pop

void TBoss6Type2__sub_80336FB8(void* p) { *(int*)((char*)p + 0x3cc) = 0; ensure_particle_emitter__11TBoss6Type2FPvi(p, (void*)0); }
void tick_attack_timer__11TBoss6Type2FPv(void *arg0) {
    *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) - 1);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x3CC) < 0) {
        destroy_part_object__11TBoss6Type2Fii((void*)(arg0), (void*)(3));
        if ((s32) *(s32 *)((s8 *)arg0 + 0x40C) != 0) {
            set_action__11TBoss6Type2FPvi(arg0, 1);
            return;
        }
        set_action__11TBoss6Type2FPvi(arg0, 2);
    }
}

void start_mag_mines_state__11TBoss6Type2FPv(O_80337054 *arg0) {
    arg0->f3cc = 0x25;
    switch (arg0->f410) {
    case 0:
        spawn_mag_mines__11TBoss6Type2FPv();
        break;
    default:
        break;
    }
    ensure_particle_emitter__11TBoss6Type2FPvi((void*)(arg0), (void*)((void *)3));
}

void update_effect_subsystems__11TBoss6Type2FPv(void *arg0) {
    turn_toward_target__11TBoss6Type2FPv();
    apply_random_drift__11TBoss6Type2FPv(arg0);
    push_out_from_target__11TBoss6Type2FPv(arg0);
    push_out_from_points__11TBoss6Type2FPv(arg0);
    enforce_min_distance__11TBoss6Type2FPv(arg0);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x40C) != 0) {
        set_action__11TBoss6Type2FPvi(arg0, 1);
    }
}
void TBoss6Type2__sub_80337108(void) {  }
void update_attack_state__11TBoss6Type2FPv(void *arg0) {
    fly_toward_target__11TBoss6Type2FPv();
    push_out_from_target__11TBoss6Type2FPv(arg0);
    enforce_min_distance__11TBoss6Type2FPv(arg0);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x40C) == 0) {
        set_action__11TBoss6Type2FPvi(arg0, 2);
    }
}
void TBoss6Type2__sub_80337160(void) {  }
void advance_phase_counter__11TBoss6Type2FPv(void *arg0) {
    TBoss6Type2__sub_8032FB84();
    *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) + 1);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x3CC) >= 4) {
        set_action__11TBoss6Type2FPvi(arg0, 1);
    }
}
void TBoss6Type2__sub_803371B4(void* p) { *(s32*)((char*)p + 0x3cc) = 0; }

}
