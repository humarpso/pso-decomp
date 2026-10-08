#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Boss_802B057C { u8 pad[0x3CC]; s32 f3CC; };

typedef s32 M2C_UNK;
extern "C" {
void TBoss6PlotFalz__sub_802AB568(void *, f32, s32);
int end_cutscene_camera__14TBoss6PlotFalzFPv(void*);
void TBoss6PlotFalz__sub_802B057C(Boss_802B057C *o);
int refresh_players_equipment__14TBoss6PlotFalzFPv(void);
void TBoss6PlotFalz__sub_802AB568(void *, f32, s32);
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
s32 TBoss6PlotFalz__sub_802ABA9C();
int TBoss6PlotFalz__sub_802ABC64(void*);
int refresh_players_equipment__14TBoss6PlotFalzFPv(void);
int end_cutscene_camera__14TBoss6PlotFalzFPv(void*);
M2C_UNK freeze_all_players__14TBoss6PlotFalzFv();
int send_6xA3_action__14TBoss6PlotFalzFPvc(void*, void*);
M2C_UNK stop_audio_streams__6TLobbyFv();
M2C_UNK play_area_music(M2C_UNK *);
M2C_UNK create_variant__8TObjFishFPv(void *);
int is_ready__14TBoss6PlotFalzFv(void*);
M2C_UNK queue_destruction__7TObjectFv(void *);

void TBoss6PlotFalz__sub_802B03F4(void) {  }
void check_action_7__14TBoss6PlotFalzFi(s32 arg0) {
    if ((TBoss6PlotFalz__sub_802ABA9C() == 0) || (is_ready__14TBoss6PlotFalzFv((void*)(arg0)) != 0)) {
        send_6xA3_action__14TBoss6PlotFalzFPvc((void*)(arg0), (void*)(7));
    }
}
void TBoss6PlotFalz__sub_802B0448(void* p) { end_cutscene_camera__14TBoss6PlotFalzFPv(p); refresh_players_equipment__14TBoss6PlotFalzFPv(); *(int*)((char*)p + 0x3d0) = 0; *(int*)((char*)p + 0x3cc) = 0; TBoss6PlotFalz__sub_802ABC64(p); }
void advance_timer__14TBoss6PlotFalzFPv(void *arg0) {
    s32 temp_r0;

    refresh_players_equipment__14TBoss6PlotFalzFPv();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3CC) + 1;
    M2C_FIELD(arg0, s32 *, 0x3CC) = temp_r0;
    if (temp_r0 > 0x198) {
        set_state__14TBoss6PlotFalzFPvi(arg0, 6);
    }
}
void advance_phase_if_ready__14TBoss6PlotFalzFPv(void* p) { if (is_ready__14TBoss6PlotFalzFv(p) != 0) { send_6xA3_action__14TBoss6PlotFalzFPvc(p, (void*)6); } }

extern M2C_UNK lbl_80470990[];

void stop_adx_audio(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3DC) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3DC));
    }
    M2C_FIELD(arg0, u32 *, 0x3DC) = 0U;
    freeze_all_players__14TBoss6PlotFalzFv();
    stop_audio_streams__6TLobbyFv();
    play_area_music(lbl_80470990);
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    create_variant__8TObjFishFPv(arg0);
}
void TBoss6PlotFalz__sub_802B057C(Boss_802B057C *o) {
    s32 t = o->f3CC;
    if (t <= 0x2D) {
        TBoss6PlotFalz__sub_802AB568(o, 1.0f, 0);
    } else if (t > 0x2D && t < 0x10E) {
        TBoss6PlotFalz__sub_802AB568(o, (f32)(0x10E - t) / 225.0f, 0);
    }
    if (o->f3CC == 0x2D) {
        ((void (*)(void)) end_cutscene_camera__14TBoss6PlotFalzFPv)();
    }
    o->f3CC = o->f3CC + 1;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_and_advance_state__14TBoss6PlotFalzFPv(void *arg0);
void init_hall_boss_scene(void *arg0);
s32 alloc__8TObjFishFPv(void *);
s32 get_plot_state__10TObjPlayerFPv(void *);
M2C_UNK init_warp__15TBoss6EmptyWarpFv();
M2C_UNK release_object__14TBoss6PlotFalzFPv(void *);

void check_and_advance_state__14TBoss6PlotFalzFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x3DC);
    if ((temp_r3 != NULL) && ((get_plot_state__10TObjPlayerFPv(temp_r3) != 0) || (is_ready__14TBoss6PlotFalzFv(arg0) != 0))) {
        send_6xA3_action__14TBoss6PlotFalzFPvc(arg0, (void *)5);
    }
}

extern M2C_UNK lbl_804709A8[];

void init_hall_boss_scene(void *arg0) {
    init_warp__15TBoss6EmptyWarpFv();
    release_object__14TBoss6PlotFalzFPv(arg0);
    play_area_music(lbl_804709A8);
    refresh_players_equipment__14TBoss6PlotFalzFPv();
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3DC) = alloc__8TObjFishFPv(arg0);
}
void TBoss6PlotFalz__sub_802B06D0(void *arg0) {
    f32 f;
    refresh_players_equipment__14TBoss6PlotFalzFPv();
    if (M2C_FIELD(arg0, s32 *, 0x3CC) > 0xF7) {
        f = (f32)(M2C_FIELD(arg0, s32 *, 0x3CC) - 0xF7) / 8.0f;
        if (f > 1.0f) {
            f = 1.0f;
        }
        TBoss6PlotFalz__sub_802AB568(arg0, f, 0);
    }
    if (++M2C_FIELD(arg0, s32 *, 0x3CC) > 0x101) {
        set_state__14TBoss6PlotFalzFPvi(arg0, 4);
    }
}

}
