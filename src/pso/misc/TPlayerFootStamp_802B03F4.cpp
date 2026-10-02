#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Boss_802B057C { u8 pad[0x3CC]; s32 f3CC; };

extern "C" {
void TBoss6PlotFalz__sub_802AB568(void *, f32, s32);
int TBoss6PlotFalz__sub_802AC678(void*);
extern const f32 lbl_805DE218;
extern const f32 lbl_805DE21C;
void TBoss6PlotFalz__sub_802B057C(Boss_802B057C *o);
}

extern "C" {

void TBoss6PlotFalz__sub_802B03F4(void);
void TBoss6PlotFalz__sub_802B0448(void* p);
void advance_phase_if_ready__14TBoss6PlotFalzFPv(void* p);
void advance_timer__14TBoss6PlotFalzFPv(void *arg0);
void check_action_7__14TBoss6PlotFalzFi(s32 arg0);
void stop_adx_audio(void *arg0);
s32 TBoss6PlotFalz__sub_802AB2B8(void *, s32);
s32 TBoss6PlotFalz__sub_802ABA9C();
int TBoss6PlotFalz__sub_802ABC64(void*);
int TBoss6PlotFalz__sub_802AC4D8(void);
int TBoss6PlotFalz__sub_802AC678(void*);
M2C_UNK TBoss6PlotFalz__sub_802AC6D0();
int TBoss6PlotFalz__sub_802AC86C(void*, void*);
M2C_UNK TLobby__sub_8022743C();
M2C_UNK TObjBgmColCtrl__sub_802274B8(M2C_UNK *);
M2C_UNK create_variant__8TObjFishFPv(void *);
int is_ready__14TBoss6PlotFalzFv(void*);
M2C_UNK queue_destruction__7TObjectFv(void *);

void TBoss6PlotFalz__sub_802B03F4(void) {  }
void check_action_7__14TBoss6PlotFalzFi(s32 arg0) {
    if ((TBoss6PlotFalz__sub_802ABA9C() == 0) || (is_ready__14TBoss6PlotFalzFv((void*)(arg0)) != 0)) {
        TBoss6PlotFalz__sub_802AC86C((void*)(arg0), (void*)(7));
    }
}
void TBoss6PlotFalz__sub_802B0448(void* p) { TBoss6PlotFalz__sub_802AC678(p); TBoss6PlotFalz__sub_802AC4D8(); *(int*)((char*)p + 0x3d0) = 0; *(int*)((char*)p + 0x3cc) = 0; TBoss6PlotFalz__sub_802ABC64(p); }
void advance_timer__14TBoss6PlotFalzFPv(void *arg0) {
    s32 temp_r0;

    TBoss6PlotFalz__sub_802AC4D8();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3CC) + 1;
    M2C_FIELD(arg0, s32 *, 0x3CC) = temp_r0;
    if (temp_r0 > 0x198) {
        TBoss6PlotFalz__sub_802AB2B8(arg0, 6);
    }
}
void advance_phase_if_ready__14TBoss6PlotFalzFPv(void* p) { if (is_ready__14TBoss6PlotFalzFv(p) != 0) { TBoss6PlotFalz__sub_802AC86C(p, (void*)6); } }

extern M2C_UNK lbl_80470990[];

void stop_adx_audio(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3DC) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3DC));
    }
    M2C_FIELD(arg0, u32 *, 0x3DC) = 0U;
    TBoss6PlotFalz__sub_802AC6D0();
    TLobby__sub_8022743C();
    TObjBgmColCtrl__sub_802274B8(lbl_80470990);
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    create_variant__8TObjFishFPv(arg0);
}
void TBoss6PlotFalz__sub_802B057C(Boss_802B057C *o) {
    s32 t = o->f3CC;
    if (t <= 0x2D) {
        TBoss6PlotFalz__sub_802AB568(o, lbl_805DE218, 0);
    } else if (t > 0x2D && t < 0x10E) {
        TBoss6PlotFalz__sub_802AB568(o, (f32)(0x10E - t) / lbl_805DE21C, 0);
    }
    if (o->f3CC == 0x2D) {
        ((void (*)(void)) TBoss6PlotFalz__sub_802AC678)();
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
        TBoss6PlotFalz__sub_802AC86C(arg0, (void *)5);
    }
}

extern M2C_UNK lbl_804709A8[];

void init_hall_boss_scene(void *arg0) {
    init_warp__15TBoss6EmptyWarpFv();
    release_object__14TBoss6PlotFalzFPv(arg0);
    TObjBgmColCtrl__sub_802274B8(lbl_804709A8);
    TBoss6PlotFalz__sub_802AC4D8();
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3DC) = alloc__8TObjFishFPv(arg0);
}

extern const f32 lbl_805DE220;
void TBoss6PlotFalz__sub_802B06D0(void *arg0) {
    f32 f;
    TBoss6PlotFalz__sub_802AC4D8();
    if (M2C_FIELD(arg0, s32 *, 0x3CC) > 0xF7) {
        f = lbl_805DE220;
        f *= (f32)(M2C_FIELD(arg0, s32 *, 0x3CC) - 0xF7);
        if (f > lbl_805DE218) {
            f = lbl_805DE218;
        }
        TBoss6PlotFalz__sub_802AB568(arg0, f, 0);
    }
    if (++M2C_FIELD(arg0, s32 *, 0x3CC) > 0x101) {
        TBoss6PlotFalz__sub_802AB2B8(arg0, 4);
    }
}

}
