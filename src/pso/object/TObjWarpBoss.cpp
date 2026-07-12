#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__12TObjWarpBossFPv(void *arg0);
M2C_UNK update_warp_boss_visibility();
M2C_UNK TObjWarpBossMulti__sub_8019E798(void *);
M2C_UNK warp_boss_handle_window(void *);
M2C_UNK update_state__17TObjWarpBossMultiFPv(void *);
M2C_UNK TObjWarpBossMulti__sub_8019EA7C(void *);
M2C_UNK TObjWarpBossMulti__sub_8019EB94(void *);

void update__12TObjWarpBossFPv(void *arg0) {
    s16 temp_r0;

    update_warp_boss_visibility();
    temp_r0 = M2C_FIELD(arg0, s16 *, 0xDE);
    switch (temp_r0) {
    case 0:
        TObjWarpBossMulti__sub_8019EB94(arg0);
        return;
    case 1:
        TObjWarpBossMulti__sub_8019EA7C(arg0);
        return;
    case 2:
        update_state__17TObjWarpBossMultiFPv(arg0);
        return;
    case 3:
        warp_boss_handle_window(arg0);
        return;
    case 4:
        TObjWarpBossMulti__sub_8019E798(arg0);
        return;
    }
}

}
