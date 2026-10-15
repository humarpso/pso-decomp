#include "types.h"

struct Boss_802B057C { u8 pad[0x3CC]; s32 f3CC; };

extern "C" {
void apply_fade_alpha__14TBoss6PlotFalzFPvif(void *, f32, s32);
int end_cutscene_camera__14TBoss6PlotFalzFPv(void*);
void update_cutscene_fade__14TBoss6PlotFalzFPv(Boss_802B057C *o);
int refresh_players_equipment__14TBoss6PlotFalzFPv(void);
void apply_fade_alpha__14TBoss6PlotFalzFPvif(void *, f32, s32);
s32 set_state__14TBoss6PlotFalzFPvi(void *, s32);
void TBoss6PlotFalz__sub_802B06D0(void *arg0);
}

extern "C" {

void TBoss6PlotFalz__sub_802B03F4(void);
void TBoss6PlotFalz__sub_802B0448(void* p);
void advance_phase_if_ready__14TBoss6PlotFalzFPv(void* p);
void advance_timer__14TBoss6PlotFalzFPv(void *arg0);
void check_action_7__14TBoss6PlotFalzFi(s32 arg0);
void stop_adx_audio(void *arg0);
s32 set_state__14TBoss6PlotFalzFPvi(void *, s32);
s32 is_boss_active__14TBoss6PlotFalzFv();
int spawn_type2__14TBoss6PlotFalzFPv(void*);
int refresh_players_equipment__14TBoss6PlotFalzFPv(void);
int end_cutscene_camera__14TBoss6PlotFalzFPv(void*);
s32 freeze_all_players__14TBoss6PlotFalzFv();
int send_6xA3_action__14TBoss6PlotFalzFPvc(void*, void*);
s32 stop_audio_streams__6TLobbyFv();
s32 play_area_music(s32 *);
s32 create_boss6_type2_appearance(void *);
int is_ready__14TBoss6PlotFalzFv(void*);
s32 queue_destruction__7TObjectFv(void *);

void TBoss6PlotFalz__sub_802B03F4(void) {  }
void check_action_7__14TBoss6PlotFalzFi(s32 arg0) {
    if ((is_boss_active__14TBoss6PlotFalzFv() == 0) || (is_ready__14TBoss6PlotFalzFv((void*)(arg0)) != 0)) {
        send_6xA3_action__14TBoss6PlotFalzFPvc((void*)(arg0), (void*)(7));
    }
}
void TBoss6PlotFalz__sub_802B0448(void* p) { end_cutscene_camera__14TBoss6PlotFalzFPv(p); refresh_players_equipment__14TBoss6PlotFalzFPv(); *(int*)((char*)p + 0x3d0) = 0; *(int*)((char*)p + 0x3cc) = 0; spawn_type2__14TBoss6PlotFalzFPv(p); }
void advance_timer__14TBoss6PlotFalzFPv(void *arg0) {
    s32 temp_r0;

    refresh_players_equipment__14TBoss6PlotFalzFPv();
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x3CC) + 1;
    *(s32 *)((s8 *)arg0 + 0x3CC) = temp_r0;
    if (temp_r0 > 0x198) {
        set_state__14TBoss6PlotFalzFPvi(arg0, 6);
    }
}
void advance_phase_if_ready__14TBoss6PlotFalzFPv(void* p) { if (is_ready__14TBoss6PlotFalzFv(p) != 0) { send_6xA3_action__14TBoss6PlotFalzFPvc(p, (void*)6); } }

extern s32 lbl_80470990[];

void stop_adx_audio(void *arg0) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0x3DC) != 0U) {
        queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x3DC));
    }
    *(u32 *)((s8 *)arg0 + 0x3DC) = 0U;
    freeze_all_players__14TBoss6PlotFalzFv();
    stop_audio_streams__6TLobbyFv();
    play_area_music(lbl_80470990);
    *(s32 *)((s8 *)arg0 + 0x3CC) = 0;
    create_boss6_type2_appearance(arg0);
}
void update_cutscene_fade__14TBoss6PlotFalzFPv(Boss_802B057C *o) {
    s32 t = o->f3CC;
    if (t <= 0x2D) {
        apply_fade_alpha__14TBoss6PlotFalzFPvif(o, 1.0f, 0);
    } else if (t > 0x2D && t < 0x10E) {
        apply_fade_alpha__14TBoss6PlotFalzFPvif(o, (f32)(0x10E - t) / 225.0f, 0);
    }
    if (o->f3CC == 0x2D) {
        ((void (*)(void)) end_cutscene_camera__14TBoss6PlotFalzFPv)();
    }
    o->f3CC = o->f3CC + 1;
}

}

#include "types.h"

extern "C" {

void check_and_advance_state__14TBoss6PlotFalzFPv(void *arg0);
void init_hall_boss_scene(void *arg0);
s32 alloc__8TObjFishFPv(void *);
s32 get_plot_state__10TObjPlayerFPv(void *);
s32 init_warp__15TBoss6EmptyWarpFv();
s32 release_object__14TBoss6PlotFalzFPv(void *);

void check_and_advance_state__14TBoss6PlotFalzFPv(void *arg0) {
    void *temp_r3 = *(void **)((s8 *)arg0 + 0x3DC);
    if ((temp_r3 != NULL) && ((get_plot_state__10TObjPlayerFPv(temp_r3) != 0) || (is_ready__14TBoss6PlotFalzFv(arg0) != 0))) {
        send_6xA3_action__14TBoss6PlotFalzFPvc(arg0, (void *)5);
    }
}

extern s32 lbl_804709A8[];

void init_hall_boss_scene(void *arg0) {
    init_warp__15TBoss6EmptyWarpFv();
    release_object__14TBoss6PlotFalzFPv(arg0);
    play_area_music(lbl_804709A8);
    refresh_players_equipment__14TBoss6PlotFalzFPv();
    *(s32 *)((s8 *)arg0 + 0x3CC) = 0;
    *(s32 *)((s8 *)arg0 + 0x3DC) = alloc__8TObjFishFPv(arg0);
}
void TBoss6PlotFalz__sub_802B06D0(void *arg0) {
    f32 f;
    refresh_players_equipment__14TBoss6PlotFalzFPv();
    if (*(s32 *)((s8 *)arg0 + 0x3CC) > 0xF7) {
        f = (f32)(*(s32 *)((s8 *)arg0 + 0x3CC) - 0xF7) / 8.0f;
        if (f > 1.0f) {
            f = 1.0f;
        }
        apply_fade_alpha__14TBoss6PlotFalzFPvif(arg0, f, 0);
    }
    if (++*(s32 *)((s8 *)arg0 + 0x3CC) > 0x101) {
        set_state__14TBoss6PlotFalzFPvi(arg0, 4);
    }
}

}
