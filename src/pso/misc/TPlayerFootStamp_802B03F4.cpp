#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

}
