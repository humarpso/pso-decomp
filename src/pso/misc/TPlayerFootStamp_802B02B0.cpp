#include "types.h"
#include "pso/boss/TBoss6PlotFalz.h"
#include "pso/boss/TBoss4DarkFalz.h"
#include "pso/boss/TBoss6Thanks.h"
#include "pso/misc/TLobby.h"

extern "C" {

void finish_and_dispatch_next_phase__14TBoss6PlotFalzFPv(u8 *arg0);
s32 refresh_players_equipment__14TBoss6PlotFalzFPv();
s32 end_cutscene_camera__14TBoss6PlotFalzFPv();
s32 get_phase_values__11TBoss6Type2FPvPvPvPv(void *, void *, void *, void *);
s32 destroy_static_instance__14TBoss6PlotFalzFv(void *);
s32 create_boss6_type2_death(void *, void *);
s32 is_ending_or_split_screen__14TBoss6PlotFalzFv(void *);
s32 is_ready__14TBoss6PlotFalzFv(void *);
s32 obj_setArrS16_FC(void *, int, void *);

void TBoss6PlotFalz::update_plot_timer() {
    s32 temp_r0;

    refresh_players_equipment__14TBoss6PlotFalzFPv();
    if (((s32) *(s32 *)((s8 *)this + 0x3CC) > 1) && (is_ready__14TBoss6PlotFalzFv(this) != 0)) {
        *(s32 *)((s8 *)this + 0x3CC) = 0x2CA;
    }
    temp_r0 = *(s32 *)((s8 *)this + 0x3CC) + 1;
    *(s32 *)((s8 *)this + 0x3CC) = temp_r0;
    if (temp_r0 > 0x2CA) {
        if (is_ending_or_split_screen__14TBoss6PlotFalzFv(this) != 0) {
            set_state(8);
            return;
        }
        end_cutscene_camera__14TBoss6PlotFalzFPv();
        award_exp_and_destroy();
    }
}

extern u32 TBoss6PlotFalz__type2_instance;

void finish_and_dispatch_next_phase__14TBoss6PlotFalzFPv(u8 *arg0) {
    s32 sp10[2];
    u16 sp8[4];
    s32 var_r29;

    if ((u32) TBoss6PlotFalz__type2_instance != 0U) {
        get_phase_values__11TBoss6Type2FPvPvPvPv((void *) (TBoss6PlotFalz__type2_instance), (void *) (arg0 + 0x2D6), (void *) (arg0 + 0x2D4), (void *) (sp8));
        var_r29 = 0;
        do {
            obj_setArrS16_FC((void *) (arg0), (int) (var_r29), (void *) (sp8[var_r29]));
            var_r29 += 1;
        } while (var_r29 < 4);
    }
    TBoss6PlotFalz::get_target_pos_a((s32)((void *) (arg0)), (s32)((void *) (sp10)));
    destroy_static_instance__14TBoss6PlotFalzFv((void *) (arg0));
    TLobby::stop_audio_streams();
    TBoss6PlotFalz::freeze_all_players();
    *(s32 *)((s8 *)arg0 + 0x3D0) = 0;
    *(s32 *)((s8 *)arg0 + 0x3CC) = 0;
    TBoss4DarkFalz::dispatch_by_main_phase((int) (0x57));
    TBoss6Thanks::try_dispatch_darkfalz_phase();
    create_boss6_type2_death((void *) (arg0), (void *) (sp10));
}

}
