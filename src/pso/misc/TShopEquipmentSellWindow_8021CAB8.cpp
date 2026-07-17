#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_input_window_result__24TShopEquipmentSellWindowFPv(void *arg0);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(u32, s32, M2C_UNK, M2C_UNK);
f32 get_scale__15TShopWindowBaseFv(void *);
M2C_UNK TWindow__close(u32);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(u32);
s32 is_confirmed__24TShopEquipmentSellWindowFPv(u32);
s32 get_result__24TShopEquipmentSellWindowFPv(u32);
s32 is_confirmed__18TWindowInputNumberFPv(u32);
s32 TLobby__sub_80222CFC(M2C_UNK);
M2C_UNK set_position_xy(u32, f32, f32);
M2C_UNK TWindowSubComCard__sub_80265C30(u32);
M2C_UNK TWindowSubComCard__sub_80265F60(u32);
u32 TCheckRoomSequence__sub_802664A8(M2C_UNK, M2C_UNK, u16);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

s32 obj_getField1c(s32);

void handle_input_window_result__24TShopEquipmentSellWindowFPv(void *arg0) {
    f32 temp_f31;
    u16 temp_r31;

    if (((u32) M2C_FIELD(arg0, u32 *, 0x394) != 0U) && (is_confirmed__18TWindowInputNumberFPv(M2C_FIELD(arg0, u32 *, 0x394)) != 0)) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x390) == 0U) {
            temp_r31 = (u16) obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
            M2C_FIELD(arg0, u32 *, 0x390) = TCheckRoomSequence__sub_802664A8(TWindowSubComCard__sub_8026CBB8(0x2B), 2, temp_r31);
            forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x390), TLobby__sub_80222CFC(6), 6, 0);
            forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x390), TLobby__sub_80222CFC(7), 6, 1);
            TWindowSubComCard__sub_80265F60(M2C_FIELD(arg0, u32 *, 0x390));
            TWindowSubComCard__sub_80265C30(M2C_FIELD(arg0, u32 *, 0x390));
            set_ready_flag__18TCheckRoomSequenceFPv(M2C_FIELD(arg0, u32 *, 0x390));
            temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
            set_position_xy(M2C_FIELD(arg0, u32 *, 0x390), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
        }
        M2C_FIELD(arg0, s32 *, 0x37C) = get_result__24TShopEquipmentSellWindowFPv(M2C_FIELD(arg0, u32 *, 0x394));
        TWindow__close(M2C_FIELD(arg0, u32 *, 0x394));
        M2C_FIELD(arg0, u32 *, 0x394) = 0U;
        set_field_20__12TQuestListVMFPvi(arg0, 2);
        return;
    }
    if (((u32) M2C_FIELD(arg0, u32 *, 0x394) != 0U) && (is_confirmed__24TShopEquipmentSellWindowFPv(M2C_FIELD(arg0, u32 *, 0x394)) != 0)) {
        TWindow__close(M2C_FIELD(arg0, u32 *, 0x394));
        M2C_FIELD(arg0, u32 *, 0x394) = 0U;
        set_field_20__12TQuestListVMFPvi(arg0, 5);
    }
}

}
