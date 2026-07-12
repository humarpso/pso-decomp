#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_slot__14TWindowSubItemFiii(s32 arg1, s32 arg2, s32 arg3);
void dispatch_warp_status__14TWindowSubItemFii(s32 arg0, s32 arg1);
s32 create_count_input__14TWindowSubItemFPvi(void *arg0, s32 arg1);
s32 TOKeyMachine01__sub_802034A8();
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, s32);
s32 TWindowInputNumber__ct(s32, s32, M2C_UNK, s32, M2C_UNK, s16);
M2C_UNK set_value__18TWindowInputNumberFPvf(s32, f32);
M2C_UNK create__18TWindowInputNumberFPvi(s32, s32);
M2C_UNK set_flag60_bit10__14TWindowSubItemFPv(s32);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
s32 TObjPlayer__sub_80203418();
s32 reset_key_machine_state__10TObjPlayerFv(s32);
M2C_UNK set_field_1c__6TLobbyFPvf(s32);
M2C_UNK TWindowSubEquip__sub_80263AF8(s32, M2C_UNK);
M2C_UNK draw_text_gray__17TWindowSubComCardFiiii(s32, s32, M2C_UNK, s32);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);

void draw_slot__14TWindowSubItemFiii(s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r3 = (u32)__cntlzw(4 - (arg3 & 0xF)) >> 5;
    temp_r31 = temp_r3 + 4;
    if ((reset_key_machine_state__10TObjPlayerFv(temp_r3) == 0) || (TObjPlayer__sub_80203418() != 0)) {
        draw_text_gray__17TWindowSubComCardFiiii((s32)(arg2), (s32)(TAdSinglePlyChrSelectGC__sub_80132F2C(0x10, 0xF)), (M2C_UNK)(6), (s32)(temp_r31));
        return;
    }
    forward_trade_action_default__16TObjCityMainWarpFPviii((s32)(arg2), (s32)(TAdSinglePlyChrSelectGC__sub_80132F2C(0x10, 0xF)), (M2C_UNK)(0x26), (s32)(temp_r31));
}

void dispatch_warp_status__14TWindowSubItemFii(s32 arg0, s32 arg1) {
    if (TOKeyMachine01__sub_802034A8() == 0xF) {
        draw_text_gray__17TWindowSubComCardFiiii((s32)(arg1), (s32)(get_message_10__20TWindowSubStatusDispFPv(0x5F)), (M2C_UNK)(6), (s32)(6));
        return;
    }
    forward_trade_action_default__16TObjCityMainWarpFPviii((s32)(arg1), (s32)(get_message_10__20TWindowSubStatusDispFPv(0x5F)), (M2C_UNK)(6), (s32)(6));
}

extern const f32 lbl_805DD630;

s32 create_count_input__14TWindowSubItemFPvi(void *arg0, s32 arg1) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x7C);
    if (var_r31 != 0) {
        var_r31 = TWindowInputNumber__ct(var_r31, TWindowSubComCard__sub_8026CBB8(5), 1, arg1, 1, (s16) M2C_FIELD(arg0, s32 *, 0x24));
    }
    create__18TWindowInputNumberFPvi(var_r31, get_message_10__20TWindowSubStatusDispFPv(0x28));
    TWindowSubEquip__sub_80263AF8(M2C_FIELD(arg0, s32 *, 0x2C), 3);
    set_field_1c__6TLobbyFPvf(var_r31);
    set_value__18TWindowInputNumberFPvf(var_r31, lbl_805DD630);
    set_flag60_bit10__14TWindowSubItemFPv(var_r31);
    return var_r31;
}

}
