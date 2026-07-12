#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TAdChrSelASlotGC__sub_800740FC(u32);
s32 TWindowSubStatusDisp__sub_80077760(M2C_UNK);
u32 TObjWarpBossMulti__sub_8019E570(f32);
M2C_UNK TWindow__close(void *);
M2C_UNK request_active_window_close();
M2C_UNK clear_flag__11TWindowCtrlFv();
M2C_UNK fn_8024ACEC(s32);
M2C_UNK TWindowChat__sub_8024AD30(s32);
M2C_UNK TWindowCtrl__sub_8024AEAC(s32);
M2C_UNK TWindowCtrl__sub_8024AEF0(s32);
M2C_UNK TWindowSubComCard__sub_80265C30(u32);
M2C_UNK TWindowSubComCard__sub_80265F60(u32);
M2C_UNK TWindowSubTradeMain__sub_80266200(u32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
u32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
extern s32 lbl_805D53A0;

void warp_boss_handle_window(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xE0);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0xE0) = 1;
        M2C_FIELD(arg0, s32 *, 0xD0) = 0;
        return;
    case 1:
        if (TObjWarpBossMulti__sub_8019E570(M2C_FIELD(arg0, f32 *, 0xAC)) != 0U) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) == 0U) {
                M2C_FIELD(arg0, u32 *, 0xB0) = check_room_seq_4__16TAdChrSelASlotGCFii(TWindowSubComCard__sub_8026CBB8(0x35), 7);
                if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
                    TWindowSubTradeMain__sub_80266200(M2C_FIELD(arg0, u32 *, 0xB0), TWindowSubStatusDisp__sub_80077760(0x40), 0, 0, -1);
                    TAdChrSelASlotGC__sub_800740FC(M2C_FIELD(arg0, u32 *, 0xB0));
                    TWindowSubComCard__sub_80265F60(M2C_FIELD(arg0, u32 *, 0xB0));
                    TWindowSubComCard__sub_80265C30(M2C_FIELD(arg0, u32 *, 0xB0));
                }
                fn_8024ACEC(lbl_805D53A0);
                request_active_window_close();
                TWindowCtrl__sub_8024AEAC(lbl_805D53A0);
            }
        } else {
            if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
                TWindow__close(M2C_FIELD(arg0, void **, 0xB0));
                M2C_FIELD(arg0, u32 *, 0xB0) = 0U;
            }
            TWindowChat__sub_8024AD30(lbl_805D53A0);
            clear_flag__11TWindowCtrlFv();
            TWindowCtrl__sub_8024AEF0(lbl_805D53A0);
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x15C) == 0) {
            M2C_FIELD(arg0, s16 *, 0xDC) = 0;
        }
        return;
    case -1:
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0xB0));
            M2C_FIELD(arg0, u32 *, 0xB0) = 0U;
        }
        TWindowChat__sub_8024AD30(lbl_805D53A0);
        clear_flag__11TWindowCtrlFv();
        TWindowCtrl__sub_8024AEF0(lbl_805D53A0);
        break;
    }
}

}
