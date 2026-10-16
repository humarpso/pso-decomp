#include "types.h"
#include "pso/object/TObjCityMainWarpChallenge.h"
#include "pso/TParticleCtrl.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/npc/TObjNpcEnemy.h"
#include "pso/object/TObjCityMainWarp.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct CityMainWarpChalBase_80187824 { char pad[0x18]; };
struct CityMainWarpChalVObj_80187824 : CityMainWarpChalBase_80187824 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Warp_80187B50 { u8 pad[0x144]; s32 arr[4]; };

extern "C" {
extern const f32 lbl_805DBCC4;
extern const f32 lbl_805DBCC8;
extern const f32 lbl_805DBCCC;
s32 queue_destruction__7TObjectFv(void *);
s32 register_entity_by_id(void *, int, f32);
s32 TObjAreaWarp__ct();
extern s32 __vt__25TObjCityMainWarpChallenge[];
extern s32 lbl_805D32B8;
extern u8 *city_common_model_archive;
extern s32 city_main_warp_destination_id;
extern const f32 lbl_805DBCCC;
extern const f32 lbl_805DBCD0;
u8 *TObjCityMainWarpChallenge__ct(u8 *arg0);
void debug_printf_at(s32 id, const char *fmt, ...);
extern char lbl_80444A44[];
extern char lbl_80444A58[];
void TObjCityMainWarpChallenge__vt18(void *arg0);
}

extern "C" {

void *__dt__25TObjCityMainWarpChallengeFv(void *arg0, s16 arg1);
s32 post_translate_matrix(void *);
s32 draw_ginja_object(s32);
s32 update_floor_switch_state__16TObjCityMainWarpFv();
s32 update_warp_sequence__16TObjCityMainWarpFv();
s32 update_challenge_state__16TObjCityMainWarpFv();
s32 draw_ginja_model_with_motion(s32, s32, f32);
s32 unregister_object_by_id(s32 *);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 __dl__7TObjectFPv(void *);
s32 __dt__12TObjAreaWarpFv(void *, s32);
f32 xz_distance_squared(s32, void *);
s32 update_challenge_warp_window();
s32 update_state__16TObjCityMainWarpFv();

void TObjCityMainWarpChallenge::update_state() {
    s16 temp_r0;

    temp_r0 = *(s16 *)((s8 *)this + 0xDE);
    switch (temp_r0) {
    case 0:
        update_challenge_state__16TObjCityMainWarpFv();
        return;
    case 1:
        update_warp_sequence__16TObjCityMainWarpFv();
        return;
    case 2:
        update_state__16TObjCityMainWarpFv();
        return;
    case 3:
        update_challenge_warp_window();
        return;
    case 4:
        update_floor_switch_state__16TObjCityMainWarpFv();
        return;
    }
}

extern s32 camera_ctrl_instance;
extern u8 *city_common_model_archive;
extern s32 city_common_texture_list;
extern const f32 lbl_805DBCB8;
extern const f32 lbl_805DBCBC;
extern const f32 lbl_805DBCC0;

void TObjCityMainWarpChallenge__vt18(void *arg0) {
    s32 v = *(s32 *)((u8 *)arg0 + 0x88);
    if (v < 0 || v > 0xFF) {
        *(s32 *)((u8 *)arg0 + 0x16C) = -1;
    } else {
        *(s32 *)((u8 *)arg0 + 0x16C) = v;
    }
    TObjNpcEnemy::set_global_count(0xFF00FF);
    if (TOKeyMachine01::get_global_state() == 0) {
        debug_printf_at(0x130020, lbl_80444A44, *(s32 *)((u8 *)arg0 + 0x84));
    }
    debug_printf_at(0x130021, lbl_80444A58, *(s32 *)((u8 *)arg0 + 0x16C));
}

void TObjCityMainWarpChallenge::render() {
    u8 *arg0 = (u8 *)this;
    if ((s32) *(s32 *)((s8 *)arg0 + 0xBC) == 0xE) {
        if (xz_distance_squared(camera_ctrl_instance + 0x178, arg0 + 0x38) > lbl_805DBCB8) {
            return;
        }
        goto block_4;
    }
    if (((CityMainWarpChalVObj_80187824*)arg0)->m8(lbl_805DBCBC, lbl_805DBCC0) != 0) {
block_4:
        TObjFish::set_global_param(city_common_texture_list);
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        draw_ginja_object(*(s32 *)((s8 *)(*(void **)((s8 *)city_common_model_archive + 0x42C)) + 0xC8));
        TParticleCtrl::begin_effect_render();
        draw_ginja_model_with_motion(*(s32 *)((s8 *)(*(void **)((s8 *)city_common_model_archive + 0x42C)) + 8), *(s32 *)((s8 *)(*(void **)((s8 *)city_common_model_archive + 0x430)) + 0x2C), *(f32 *)((s8 *)arg0 + 0xC4));
        TParticleCtrl::end_effect_render();
        pop_matrix();
    }
}

extern s32 __vt__25TObjCityMainWarpChallenge[];

void TObjCityMainWarpChallenge::run_task() {
    u8 *arg0 = (u8 *)this;
    if (TObjPlayer::check_demo_mode() != 1) {
        if (!(*(s16 *)((s8 *)arg0 + 0xE2) & 1) && ((s16) *(s16 *)((s8 *)arg0 + 0xDE) != (s16) *(s16 *)((s8 *)arg0 + 0xDC))) {
            if ((s16) *(s16 *)((s8 *)arg0 + 0xE0) != -1) {
                *(s16 *)((s8 *)arg0 + 0xE0) = -1;
                update_state();
            }
            *(s16 *)((s8 *)arg0 + 0xDE) = (s16) *(s16 *)((s8 *)arg0 + 0xDC);
            *(s16 *)((s8 *)arg0 + 0xE0) = 0;
        }
        ((TObjPlayer *)arg0)->count_players_in_warp_radius();
        update_state();
        if ((void *) *(u8 **)((s8 *)arg0 + 0xD4) != NULL) {
            *(f32 *)((s8 *)arg0 + 0xC4) = (f32) (*(f32 *)((s8 *)arg0 + 0xC4) + lbl_805DBCC4);
            if ((lbl_805DBCC8 + *(f32 *)((s8 *)arg0 + 0xC4)) >= (f32) *(u32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xD4)) + 4)) {
                *(f32 *)((s8 *)arg0 + 0xC4) = (f32) lbl_805DBCCC;
            }
        }
    }
}

void *__dt__25TObjCityMainWarpChallengeFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__25TObjCityMainWarpChallenge;
        unregister_object_by_id((s32 *)arg0);
        ((TObjCityMainWarp *)arg0)->close_windows();
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TObjCityMainWarpChallenge__ct(u8 *arg0) {
    s32 var_r3;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 var_ctr;
    TObjAreaWarp__ct();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__25TObjCityMainWarpChallenge;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D32B8;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) lbl_805DBCCC;
    *(f32 *)((s8 *)arg0 + 0xAC) = (f32) lbl_805DBCD0;
    *(s32 *)((s8 *)arg0 + 0xBC) = (s32) *(s32 *)((s8 *)arg0 + 0x84);
    temp_r4 = *(s32 *)((s8 *)arg0 + 0xBC);
    city_main_warp_destination_id = temp_r4;
    *(s32 *)((s8 *)arg0 + 0xA4) = 0;
    register_entity_by_id((void *) (arg0), (int) (temp_r4), (f32) (lbl_805DBCCC));
    *(s32 *)((s8 *)arg0 + 0x164) = 0;
    *(s32 *)((s8 *)arg0 + 0x168) = 0;
    if (TOKeyMachine01::get_global_state() == 0) {
        *(s32 *)((s8 *)arg0 + 0x16C) = -1;
    } else {
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x88);
        if ((temp_r0 < 0) || (temp_r0 > 0xFF)) {
            *(s32 *)((s8 *)arg0 + 0x16C) = -1;
        } else {
            *(s32 *)((s8 *)arg0 + 0x16C) = temp_r0;
        }
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x16C) >= 0) {
        *(s16 *)((s8 *)arg0 + 0xDC) = 4;
        *(s16 *)((s8 *)arg0 + 0xDE) = 4;
    } else {
        *(s16 *)((s8 *)arg0 + 0xDC) = 0;
        *(s16 *)((s8 *)arg0 + 0xDE) = 0;
    }
    *(s16 *)((s8 *)arg0 + 0xE0) = 0;
    *(s16 *)((s8 *)arg0 + 0xE2) = 0;
    *(s32 *)((s8 *)arg0 + 0xD0) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)city_common_model_archive + 0x42C)) + 8);
    *(s32 *)((s8 *)arg0 + 0xD4) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)city_common_model_archive + 0x430)) + 0x2C);
    if ((u32) *(u32 *)((s8 *)arg0 + 0xB4) != 0U) {
        queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0xB4));
        *(u32 *)((s8 *)arg0 + 0xB4) = 0U;
    }
    for (var_ctr = 0; var_ctr < 4; var_ctr++) {
        ((Warp_80187B50 *)arg0)->arr[var_ctr] = 0;
    }
    return arg0;
}

}
