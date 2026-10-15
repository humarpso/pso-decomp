#include "types.h"

extern "C" {
s32 stop_audio_streams__6TLobbyFv();
s32 queue_instance_destruction__14TBoss6PlotFalzFv(void *);
s32 freeze_all_players__14TBoss6PlotFalzFv();
s32 get_target_pos_b__14TBoss6PlotFalzFii(void *, void *);
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
    s32 sp8;
    get_target_pos_b__14TBoss6PlotFalzFii((void *) (arg0), (void *) (&sp8));
    queue_instance_destruction__14TBoss6PlotFalzFv((void *) (arg0));
    stop_audio_streams__6TLobbyFv();
    freeze_all_players__14TBoss6PlotFalzFv();
    *(s32 *)((s8 *)arg0 + 0x3D0) = 0;
    *(s32 *)((s8 *)arg0 + 0x3CC) = 0;
    create__14TBoss6PlotFalzFPvPv((void *) (arg0), (void *) (&sp8));
}

}
