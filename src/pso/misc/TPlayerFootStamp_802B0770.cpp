#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK stop_audio_streams__6TLobbyFv();
M2C_UNK queue_instance_destruction__14TBoss6PlotFalzFv(void *);
M2C_UNK freeze_all_players__14TBoss6PlotFalzFv();
s32 TBoss6PlotFalz__sub_802ABC14(void *, void *);
s32 create__14TBoss6PlotFalzFPvPv(void *, void *);
void reset_and_recreate__14TBoss6PlotFalzFPv(u8 *arg0);
}

extern "C" {

void set_state4_if_ready__14TBoss6PlotFalzFPv(void* p);
s32 set_state__14TBoss6PlotFalzFPvi(void *, s32);
s32 TBoss6PlotFalz__sub_802ABADC();
int spawn_type1__14TBoss6PlotFalzFPv(void*);
int refresh_players_equipment__14TBoss6PlotFalzFPv(void);
int end_cutscene_camera__14TBoss6PlotFalzFPv(void*);
int send_6xA3_action__14TBoss6PlotFalzFPvc(void*, void*);
void TBoss6PlotFalz__sub_802B0808(void);
void TBoss6PlotFalz__sub_802B08F0(void* p);
void enter_active_state__14TBoss6PlotFalzFPv(void* p);
int is_ready__14TBoss6PlotFalzFv(void*);

void set_state4_if_ready__14TBoss6PlotFalzFPv(void* p) { if (is_ready__14TBoss6PlotFalzFv(p) != 0) { send_6xA3_action__14TBoss6PlotFalzFPvc(p, (void*)4); } }
void reset_and_recreate__14TBoss6PlotFalzFPv(u8 *arg0) {
    M2C_UNK sp8;
    TBoss6PlotFalz__sub_802ABC14((void *) (arg0), (void *) (&sp8));
    queue_instance_destruction__14TBoss6PlotFalzFv((void *) (arg0));
    stop_audio_streams__6TLobbyFv();
    freeze_all_players__14TBoss6PlotFalzFv();
    M2C_FIELD(arg0, s32 *, 0x3D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    create__14TBoss6PlotFalzFPvPv((void *) (arg0), (void *) (&sp8));
}

}
