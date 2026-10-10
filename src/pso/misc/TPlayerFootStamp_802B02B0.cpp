#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void finish_and_dispatch_next_phase__14TBoss6PlotFalzFPv(u8 *arg0);
void update_plot_timer__14TBoss6PlotFalzFPv(void *arg0);
M2C_UNK set_state__14TBoss6PlotFalzFPvi(void *, M2C_UNK);
M2C_UNK award_exp_and_destroy__14TBoss6PlotFalzFPv(void *);
M2C_UNK get_target_pos_a__14TBoss6PlotFalzFii(void *, void *);
M2C_UNK refresh_players_equipment__14TBoss6PlotFalzFPv();
M2C_UNK end_cutscene_camera__14TBoss6PlotFalzFPv();
M2C_UNK freeze_all_players__14TBoss6PlotFalzFv();
M2C_UNK get_phase_values__11TBoss6Type2FPvPvPvPv(void *, void *, void *, void *);
M2C_UNK stop_audio_streams__6TLobbyFv();
M2C_UNK destroy_static_instance__14TBoss6PlotFalzFv(void *);
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(int);
M2C_UNK fn_8033E8C0(void *, void *);
s32 is_ending_or_split_screen__14TBoss6PlotFalzFv(void *);
s32 is_ready__14TBoss6PlotFalzFv(void *);
M2C_UNK obj_setArrS16_FC(void *, int, void *);
M2C_UNK try_dispatch_darkfalz_phase__12TBoss6ThanksFv();

void update_plot_timer__14TBoss6PlotFalzFPv(void *arg0) {
    s32 temp_r0;

    refresh_players_equipment__14TBoss6PlotFalzFPv();
    if (((s32) M2C_FIELD(arg0, s32 *, 0x3CC) > 1) && (is_ready__14TBoss6PlotFalzFv(arg0) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x3CC) = 0x2CA;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3CC) + 1;
    M2C_FIELD(arg0, s32 *, 0x3CC) = temp_r0;
    if (temp_r0 > 0x2CA) {
        if (is_ending_or_split_screen__14TBoss6PlotFalzFv(arg0) != 0) {
            set_state__14TBoss6PlotFalzFPvi(arg0, 8);
            return;
        }
        end_cutscene_camera__14TBoss6PlotFalzFPv();
        award_exp_and_destroy__14TBoss6PlotFalzFPv(arg0);
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
    get_target_pos_a__14TBoss6PlotFalzFii((void *) (arg0), (void *) (sp10));
    destroy_static_instance__14TBoss6PlotFalzFv((void *) (arg0));
    stop_audio_streams__6TLobbyFv();
    freeze_all_players__14TBoss6PlotFalzFv();
    M2C_FIELD(arg0, s32 *, 0x3D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    dispatch_by_main_phase__14TBoss4DarkFalzFUs((int) (0x57));
    try_dispatch_darkfalz_phase__12TBoss6ThanksFv();
    fn_8033E8C0((void *) (arg0), (void *) (sp10));
}

}
