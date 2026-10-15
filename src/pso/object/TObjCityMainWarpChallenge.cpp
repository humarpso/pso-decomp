#include "types.h"

struct CityMainWarpChalBase_80187824 { char pad[0x18]; };
struct CityMainWarpChalVObj_80187824 : CityMainWarpChalBase_80187824 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Warp_80187B50 { u8 pad[0x144]; s32 arr[4]; };

extern "C" {
s32 check_demo_mode__10TObjPlayerFv();
s32 count_players_in_warp_radius__10TObjPlayerFPv(void *);
void update_state__25TObjCityMainWarpChallengeFPv(void *arg0);
extern const f32 lbl_805DBCC4;
extern const f32 lbl_805DBCC8;
extern const f32 lbl_805DBCCC;
void run_task__25TObjCityMainWarpChallengeFv(u8 *arg0);
s32 queue_destruction__7TObjectFv(void *);
s32 register_entity_by_id(void *, int, f32);
s32 TObjAreaWarp__ct();
s32 get_global_state__14TOKeyMachine01Fv();
extern s32 __vt__25TObjCityMainWarpChallenge[];
extern s32 lbl_805D32B8;
extern u8 *city_common_model_archive;
extern s32 city_main_warp_destination_id;
extern const f32 lbl_805DBCCC;
extern const f32 lbl_805DBCD0;
u8 *TObjCityMainWarpChallenge__ct(u8 *arg0);
s32 get_global_state__14TOKeyMachine01Fv();
void set_global_count__12TObjNpcEnemyFi(s32);
void debug_printf_at(s32 id, const char *fmt, ...);
extern char lbl_80444A44[];
extern char lbl_80444A58[];
void TObjCityMainWarpChallenge__vt18(void *arg0);
}

extern "C" {

void *__dt__25TObjCityMainWarpChallengeFv(void *arg0, s16 arg1);
void render__25TObjCityMainWarpChallengeFv(u8 *arg0);
void update_state__25TObjCityMainWarpChallengeFPv(void *arg0);
s32 post_translate_matrix(void *);
s32 draw_ginja_object(s32);
s32 update_floor_switch_state__16TObjCityMainWarpFPv();
s32 update_warp_sequence__16TObjCityMainWarpFPv();
s32 update_challenge_state__16TObjCityMainWarpFPv();
s32 draw_ginja_model_with_motion(s32, s32, f32);
s32 unregister_object_by_id(s32 *);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 __dl__7TObjectFPv(void *);
s32 __dt__12TObjAreaWarpFv(void *, s32);
s32 begin_effect_render__13TParticleCtrlFv();
s32 close_windows__16TObjCityMainWarpFPv(void *);
s32 end_effect_render__13TParticleCtrlFv();
f32 xz_distance_squared(s32, void *);
s32 set_global_param__8TObjFishFi(s32);
s32 update_challenge_warp_window();
s32 update_state__16TObjCityMainWarpFPv();

void update_state__25TObjCityMainWarpChallengeFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = *(s16 *)((s8 *)arg0 + 0xDE);
    switch (temp_r0) {
    case 0:
        update_challenge_state__16TObjCityMainWarpFPv();
        return;
    case 1:
        update_warp_sequence__16TObjCityMainWarpFPv();
        return;
    case 2:
        update_state__16TObjCityMainWarpFPv();
        return;
    case 3:
        update_challenge_warp_window();
        return;
    case 4:
        update_floor_switch_state__16TObjCityMainWarpFPv();
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
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    if (get_global_state__14TOKeyMachine01Fv() == 0) {
        debug_printf_at(0x130020, lbl_80444A44, *(s32 *)((u8 *)arg0 + 0x84));
    }
    debug_printf_at(0x130021, lbl_80444A58, *(s32 *)((u8 *)arg0 + 0x16C));
}

void render__25TObjCityMainWarpChallengeFv(u8 *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0xBC) == 0xE) {
        if (xz_distance_squared(camera_ctrl_instance + 0x178, arg0 + 0x38) > lbl_805DBCB8) {
            return;
        }
        goto block_4;
    }
    if (((CityMainWarpChalVObj_80187824*)arg0)->m8(lbl_805DBCBC, lbl_805DBCC0) != 0) {
block_4:
        set_global_param__8TObjFishFi(city_common_texture_list);
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        draw_ginja_object(*(s32 *)((s8 *)(*(void **)((s8 *)city_common_model_archive + 0x42C)) + 0xC8));
        begin_effect_render__13TParticleCtrlFv();
        draw_ginja_model_with_motion(*(s32 *)((s8 *)(*(void **)((s8 *)city_common_model_archive + 0x42C)) + 8), *(s32 *)((s8 *)(*(void **)((s8 *)city_common_model_archive + 0x430)) + 0x2C), *(f32 *)((s8 *)arg0 + 0xC4));
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

extern s32 __vt__25TObjCityMainWarpChallenge[];

void run_task__25TObjCityMainWarpChallengeFv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() != 1) {
        if (!(*(s16 *)((s8 *)arg0 + 0xE2) & 1) && ((s16) *(s16 *)((s8 *)arg0 + 0xDE) != (s16) *(s16 *)((s8 *)arg0 + 0xDC))) {
            if ((s16) *(s16 *)((s8 *)arg0 + 0xE0) != -1) {
                *(s16 *)((s8 *)arg0 + 0xE0) = -1;
                update_state__25TObjCityMainWarpChallengeFPv((void *) (arg0));
            }
            *(s16 *)((s8 *)arg0 + 0xDE) = (s16) *(s16 *)((s8 *)arg0 + 0xDC);
            *(s16 *)((s8 *)arg0 + 0xE0) = 0;
        }
        count_players_in_warp_radius__10TObjPlayerFPv((void *) (arg0));
        update_state__25TObjCityMainWarpChallengeFPv((void *) (arg0));
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
        close_windows__16TObjCityMainWarpFPv(arg0);
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
    if (get_global_state__14TOKeyMachine01Fv() == 0) {
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
