#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int get_list_item8__24TShopEquipmentListWindowFPv(void* p);
void open_menu_window__24TShopEquipmentListWindowFPv(void *arg0);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(u32, s32, s32, s32);
int set_field_20__12TQuestListVMFPvi(void*, int);
s32 set_ready_flag__18TCheckRoomSequenceFPv(u32);
s32 TLobby__sub_80222CFC(s32);
f32 get_scale__15TShopWindowBaseFv(void *);
s32 set_position_xy(u32, f32, f32);
s32 TWindowSubComCard__sub_80265C30(u32);
s32 TWindowSubComCard__sub_80265F60(u32);
u32 TCheckRoomSequence__sub_802664A8(s32, s32, u16);
s32 TWindowSubComCard__sub_8026CBB8(s32);

s32 obj_getField1c(s32);

void open_menu_window__24TShopEquipmentListWindowFPv(void *arg0) {
    f32 temp_f31;
    u16 temp_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) == 0U) {
        temp_r31 = obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, u32 *, 0x2C) = TCheckRoomSequence__sub_802664A8(TWindowSubComCard__sub_8026CBB8(0x2B), 2, temp_r31);
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x2C), TLobby__sub_80222CFC(4), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x2C), TLobby__sub_80222CFC(5), 6, 1);
        TWindowSubComCard__sub_80265F60(M2C_FIELD(arg0, u32 *, 0x2C));
        TWindowSubComCard__sub_80265C30(M2C_FIELD(arg0, u32 *, 0x2C));
        set_ready_flag__18TCheckRoomSequenceFPv(M2C_FIELD(arg0, u32 *, 0x2C));
        temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
        set_position_xy(M2C_FIELD(arg0, u32 *, 0x2C), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
    }
    set_field_20__12TQuestListVMFPvi((void*)(arg0), 2);
}
int get_list_item8__24TShopEquipmentListWindowFPv(void* p) { return set_field_20__12TQuestListVMFPvi(p, 8); }

}
