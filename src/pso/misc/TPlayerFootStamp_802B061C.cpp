#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void check_and_advance_state__14TBoss6PlotFalzFPv(void *arg0);
void init_hall_boss_scene(void *arg0);
M2C_UNK TBoss6PlotFalz__sub_802AC4D8();
M2C_UNK TBoss6PlotFalz__sub_802AC86C(void *, M2C_UNK);
M2C_UNK TObjBgmColCtrl__sub_802274B8(M2C_UNK *);
s32 alloc__8TObjFishFPv(void *);
s32 get_plot_state__10TObjPlayerFPv(void *);
M2C_UNK init_warp__15TBoss6EmptyWarpFv();
s32 is_ready__14TBoss6PlotFalzFv(void *);
M2C_UNK release_object__14TBoss6PlotFalzFPv(void *);

void check_and_advance_state__14TBoss6PlotFalzFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x3DC);
    if ((temp_r3 != NULL) && ((get_plot_state__10TObjPlayerFPv(temp_r3) != 0) || (is_ready__14TBoss6PlotFalzFv(arg0) != 0))) {
        TBoss6PlotFalz__sub_802AC86C(arg0, 5);
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

}
