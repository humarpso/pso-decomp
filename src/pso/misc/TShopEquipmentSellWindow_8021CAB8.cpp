#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_input_window_result__24TShopEquipmentSellWindowFPv(void *arg0);
M2C_UNK TObjCityMainWarp__sub_80266354(u32, s32, M2C_UNK, M2C_UNK);
f32 get_scale__15TShopWindowBaseFv(void *);
M2C_UNK TWindow__close(u32);
M2C_UNK fn_80073DC4(void *, M2C_UNK);
M2C_UNK fn_8013AD28(u32);
s32 fn_802115F4(u32);
s32 fn_80211600(u32);
s32 fn_80211608(u32);
s32 TLobby__sub_80222CFC(M2C_UNK);
M2C_UNK fn_8024422C(u32, f32, f32);
M2C_UNK fn_80265C30(u32);
M2C_UNK fn_80265F60(u32);
u32 fn_802664A8(M2C_UNK, M2C_UNK, u16);
M2C_UNK fn_8026CBB8(M2C_UNK);

s32 obj_getField1c(s32);

void handle_input_window_result__24TShopEquipmentSellWindowFPv(void *arg0) {
    f32 temp_f31;
    u16 temp_r31;

    if (((u32) M2C_FIELD(arg0, u32 *, 0x394) != 0U) && (fn_80211608(M2C_FIELD(arg0, u32 *, 0x394)) != 0)) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x390) == 0U) {
            temp_r31 = (u16) obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
            M2C_FIELD(arg0, u32 *, 0x390) = fn_802664A8(fn_8026CBB8(0x2B), 2, temp_r31);
            TObjCityMainWarp__sub_80266354(M2C_FIELD(arg0, u32 *, 0x390), TLobby__sub_80222CFC(6), 6, 0);
            TObjCityMainWarp__sub_80266354(M2C_FIELD(arg0, u32 *, 0x390), TLobby__sub_80222CFC(7), 6, 1);
            fn_80265F60(M2C_FIELD(arg0, u32 *, 0x390));
            fn_80265C30(M2C_FIELD(arg0, u32 *, 0x390));
            fn_8013AD28(M2C_FIELD(arg0, u32 *, 0x390));
            temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
            fn_8024422C(M2C_FIELD(arg0, u32 *, 0x390), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
        }
        M2C_FIELD(arg0, s32 *, 0x37C) = fn_80211600(M2C_FIELD(arg0, u32 *, 0x394));
        TWindow__close(M2C_FIELD(arg0, u32 *, 0x394));
        M2C_FIELD(arg0, u32 *, 0x394) = 0U;
        fn_80073DC4(arg0, 2);
        return;
    }
    if (((u32) M2C_FIELD(arg0, u32 *, 0x394) != 0U) && (fn_802115F4(M2C_FIELD(arg0, u32 *, 0x394)) != 0)) {
        TWindow__close(M2C_FIELD(arg0, u32 *, 0x394));
        M2C_FIELD(arg0, u32 *, 0x394) = 0U;
        fn_80073DC4(arg0, 5);
    }
}

}
