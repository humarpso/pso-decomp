#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_instance__11TCameraCtrlFv();
s32 TItemData__sub_8010EEDC(s32);
M2C_UNK set_position_xy(u32, f32, f32);
M2C_UNK set_field_1c__6TLobbyFPvf(u32, f32);
M2C_UNK TWindowSubComCard__sub_80265500(u32);
M2C_UNK set_scroll_target__17TWindowSubComCardFPvff(u32, f32, f32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(u32, s32, M2C_UNK, s32);
u32 TCheckRoomSequence__sub_802664A8(M2C_UNK, s32, s32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
s32 fn_8034BE30(s32);
extern M2C_UNK lbl_804F00A8[];
extern const f32 lbl_805DFD98;
extern const f32 lbl_805DFD9C;
extern const f32 lbl_805DFDA0;
extern const f32 lbl_805DFDA4;

void challenge4p_item_select_open_menu(void *arg0) {
    s32 temp_r0;
    u16 temp_r30;
    s32 var_r29;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24) - 1;
    M2C_FIELD(arg0, s32 *, 0x24) = temp_r0;
    if (temp_r0 <= 0) {
        temp_r30 = fn_8034BE30(M2C_FIELD(arg0, s32 *, 0x28));
        M2C_FIELD(arg0, u32 *, 0x2C) = TCheckRoomSequence__sub_802664A8(TWindowSubComCard__sub_8026CBB8(0x42), 8, temp_r30);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            var_r29 = 0;
            do {
                forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x2C), TItemData__sub_8010EEDC(lbl_804F00A8[var_r29]), 6, var_r29);
                var_r29 += 1;
            } while (var_r29 < 8);
            set_scroll_target__17TWindowSubComCardFPvff(M2C_FIELD(arg0, u32 *, 0x2C), lbl_805DFD98, lbl_805DFD9C);
            TWindowSubComCard__sub_80265500(M2C_FIELD(arg0, u32 *, 0x2C));
            set_field_1c__6TLobbyFPvf(M2C_FIELD(arg0, u32 *, 0x2C), lbl_805DFDA0);
            if (get_instance__11TCameraCtrlFv() > 2) {
                set_position_xy(M2C_FIELD(arg0, u32 *, 0x2C), lbl_805DFDA4, lbl_805DFDA4);
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 1;
        }
    }
}

}
