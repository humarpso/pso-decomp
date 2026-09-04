#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_warp_state__17TObjWarpBossMultiFPv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
s32 TObjWarpBossMulti__sub_8019E4E8(void *);
u32 TObjWarpBossMulti__sub_8019E570(f32);
M2C_UNK close_windows__17TObjWarpBossMultiFPv();
M2C_UNK TObjWarpBossMulti__sub_8019E6C0(void *, M2C_UNK);
M2C_UNK warp_player__17TObjWarpBossMultiFPvi(void *, s32);
M2C_UNK TObjWarpBossMulti__sub_8019EFF0(void *);
s32 get_warp_state__19TWindowSubTradeMainFv();

extern s32 lbl_805D53A0;
extern s32 lbl_805D5C94;
extern s32 lbl_805D5C9C;

void update_warp_state__17TObjWarpBossMultiFPv(u8 *arg0) {
    s16 temp_r0;
    s32 var_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xE0);
    switch (temp_r0) {
    case 2:
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x160) = 0x12C;
        TBoss3Volopt__sub_8022675C(0x40003205, arg0 + 0x38, 0, 0);
        M2C_FIELD(arg0, s16 *, 0xE0) = 1;
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) lbl_805D5C94;
        M2C_FIELD(arg0, s32 *, 0xD4) = (s32) lbl_805D5C9C;
        return;
    case 1:
        if (TObjWarpBossMulti__sub_8019E570(M2C_FIELD(arg0, f32 *, 0xAC)) != 0U) {
            TObjWarpBossMulti__sub_8019EFF0(arg0);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x170) == 0) {
                warp_player__17TObjWarpBossMultiFPvi(arg0, lbl_805D53A0);
                M2C_FIELD(arg0, s32 *, 0x170) = 1;
            }
        }
        if (get_warp_state__19TWindowSubTradeMainFv() != 0) {
            M2C_FIELD(arg0, s32 *, 0x160) = (s32) (M2C_FIELD(arg0, s32 *, 0x160) - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x160) <= 0) {
                var_r3 = 1;
            } else {
                var_r3 = TObjWarpBossMulti__sub_8019E4E8(arg0);
            }
            if (var_r3 != 0) {
                TObjWarpBossMulti__sub_8019E6C0(arg0, 2);
                M2C_FIELD(arg0, s16 *, 0xE0) = 2;
            }
        }
        break;
    case -1:
        close_windows__17TObjWarpBossMultiFPv();
        break;
    }
}

}
