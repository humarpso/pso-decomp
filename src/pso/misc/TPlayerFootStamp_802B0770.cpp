#include "types.h"
#include "pso/boss/TBoss6PlotFalz.h"
#include "pso/misc/TLobby.h"

extern "C" {
s32 queue_instance_destruction__14TBoss6PlotFalzFv(void *);
}

extern "C" {

s32 TBoss6PlotFalz__sub_802ABADC();
int refresh_players_equipment__14TBoss6PlotFalzFPv(void);
int end_cutscene_camera__14TBoss6PlotFalzFPv(void*);
void TBoss6PlotFalz__sub_802B0808(void);
void TBoss6PlotFalz__sub_802B08F0(void* p);
int is_ready__14TBoss6PlotFalzFv(void*);

void TBoss6PlotFalz::set_state4_if_ready() { if (is_ready__14TBoss6PlotFalzFv(this) != 0) { send_6xA3_action((s8)((void*)4)); } }
void TBoss6PlotFalz::reset_and_recreate() {
    u8 *arg0 = (u8 *)this;
    s32 sp8;
    TBoss6PlotFalz::get_target_pos_b((s32)((void *) (arg0)), (s32)((void *) (&sp8)));
    queue_instance_destruction__14TBoss6PlotFalzFv((void *) (arg0));
    TLobby::stop_audio_streams();
    TBoss6PlotFalz::freeze_all_players();
    *(s32 *)((s8 *)arg0 + 0x3D0) = 0;
    *(s32 *)((s8 *)arg0 + 0x3CC) = 0;
    TBoss6PlotFalz::create((void *) (arg0), (void *) (&sp8));
}

}
