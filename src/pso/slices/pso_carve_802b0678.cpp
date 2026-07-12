#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjBgmColCtrl__sub_802274B8(M2C_UNK *);
M2C_UNK release_object__14TBoss6PlotFalzFPv(void *);
M2C_UNK TBoss6PlotFalz__sub_802AC4D8();
M2C_UNK init_warp__15TBoss6EmptyWarpFv();
s32 fn_803403B0(void *);
extern M2C_UNK lbl_804709A8[];

void init_hall_boss_scene(void *arg0) {
    init_warp__15TBoss6EmptyWarpFv();
    release_object__14TBoss6PlotFalzFPv(arg0);
    TObjBgmColCtrl__sub_802274B8(lbl_804709A8);
    TBoss6PlotFalz__sub_802AC4D8();
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3DC) = fn_803403B0(arg0);
}

}
