#include "types.h"
#include "pso/boss/Boss6Type2Appearance.h"
#include "pso/misc/TLoadCtrl_80227390.h"
#include "pso/misc/TPlayerFootStamp_802B03F4.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/boss/TBoss6PlotFalz.h"
#include "pso/misc/TLobby.h"

struct Boss_802B057C { u8 pad[0x3CC]; s32 f3CC; };

extern "C" {
void apply_fade_alpha__14TBoss6PlotFalzFlf(void *, f32, s32);
int end_cutscene_camera__14TBoss6PlotFalzFPv(void*);
int refresh_players_equipment__14TBoss6PlotFalzFPv(void);
int is_ready__14TBoss6PlotFalzFv(void*);

void TBoss6PlotFalz__sub_802B03F4(void) {  }
void TBoss6PlotFalz::check_action_7() {
    s32 arg0 = (s32)this;
    if ((TBoss6PlotFalz::is_boss_active() == 0) || (is_ready__14TBoss6PlotFalzFv((void*)arg0) != 0)) {
        ((TBoss6PlotFalz *)arg0)->send_6xA3_action((s8)((void*)(7)));
    }
}
void TBoss6PlotFalz__sub_802B0448(void* p) { end_cutscene_camera__14TBoss6PlotFalzFPv(p); refresh_players_equipment__14TBoss6PlotFalzFPv(); *(int*)((char*)p + 0x3d0) = 0; *(int*)((char*)p + 0x3cc) = 0; ((TBoss6PlotFalz *)p)->spawn_type2(); }
void TBoss6PlotFalz::advance_timer() {
    s32 temp_r0;

    refresh_players_equipment__14TBoss6PlotFalzFPv();
    temp_r0 = *(s32 *)((s8 *)this + 0x3CC) + 1;
    *(s32 *)((s8 *)this + 0x3CC) = temp_r0;
    if (temp_r0 > 0x198) {
        this->set_state(6);
    }
}
void TBoss6PlotFalz::advance_phase_if_ready() { if (is_ready__14TBoss6PlotFalzFv(this) != 0) { this->send_6xA3_action((s8)((void*)6)); } }

extern s32 lbl_80470990[];

void stop_adx_audio(void *arg0) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0x3DC) != 0U) {
        queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x3DC));
    }
    *(u32 *)((s8 *)arg0 + 0x3DC) = 0U;
    TBoss6PlotFalz::freeze_all_players();
    TLobby::stop_audio_streams();
    play_area_music((char *)lbl_80470990);
    *(s32 *)((s8 *)arg0 + 0x3CC) = 0;
    create_boss6_type2_appearance(arg0);
}
void TBoss6PlotFalz::update_cutscene_fade() {
    s32 t = ((Boss_802B057C *)this)->f3CC;
    if (t <= 0x2D) {
        apply_fade_alpha__14TBoss6PlotFalzFlf(this, 1.0f, 0);
    } else if (t > 0x2D && t < 0x10E) {
        apply_fade_alpha__14TBoss6PlotFalzFlf(this, (f32)(0x10E - t) / 225.0f, 0);
    }
    if (((Boss_802B057C *)this)->f3CC == 0x2D) {
        ((void (*)(void)) end_cutscene_camera__14TBoss6PlotFalzFPv)();
    }
    ((Boss_802B057C *)this)->f3CC = ((Boss_802B057C *)this)->f3CC + 1;
}

}

#include "pso/boss/TBoss6EmptyWarp.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 alloc__8TObjFishFPv(void *);

void TBoss6PlotFalz::check_and_advance_state() {
    void *temp_r3 = *(void **)((s8 *)this + 0x3DC);
    if ((temp_r3 != NULL) && ((((TObjPlayer *)temp_r3)->get_plot_state() != 0) || (is_ready__14TBoss6PlotFalzFv(this) != 0))) {
        send_6xA3_action((s8)((void *)5));
    }
}

extern s32 lbl_804709A8[];

void init_hall_boss_scene(void *arg0) {
    TBoss6EmptyWarp::init_warp();
    ((TBoss6PlotFalz *)arg0)->release_object();
    play_area_music((char *)lbl_804709A8);
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
        apply_fade_alpha__14TBoss6PlotFalzFlf(arg0, f, 0);
    }
    if (++*(s32 *)((s8 *)arg0 + 0x3CC) > 0x101) {
        ((TBoss6PlotFalz *)arg0)->set_state(4);
    }
}

}
