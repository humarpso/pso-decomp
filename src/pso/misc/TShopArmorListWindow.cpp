#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TShopArmorListWindow__sub_8021AA08(void* p);
void open_menu_window__20TShopArmorListWindowFPv(void *arg0);
s32 TObjCityMainWarp__sub_80266354(u32, s32, s32, s32);
int TQuestListVM__sub_80073DC4(void*, int);
s32 TCheckRoomSequence__sub_8013AD28(u32);
s32 TLobby__sub_80222CFC(s32);
f32 get_scale__15TShopWindowBaseFv(void *);
s32 fn_8024422C(u32, f32, f32);
s32 TWindowSubComCard__sub_80265C30(u32);
s32 TWindowSubComCard__sub_80265F60(u32);
u32 TCheckRoomSequence__sub_802664A8(s32, s32, u16);
s32 TWindowSubComCard__sub_8026CBB8(s32);

s32 obj_getField1c(s32);

void open_menu_window__20TShopArmorListWindowFPv(void *arg0) {
    f32 temp_f31;
    u16 temp_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) == 0U) {
        temp_r31 = obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, u32 *, 0x30) = TCheckRoomSequence__sub_802664A8(TWindowSubComCard__sub_8026CBB8(0x2B), 2, temp_r31);
        TObjCityMainWarp__sub_80266354(M2C_FIELD(arg0, u32 *, 0x30), TLobby__sub_80222CFC(4), 6, 0);
        TObjCityMainWarp__sub_80266354(M2C_FIELD(arg0, u32 *, 0x30), TLobby__sub_80222CFC(5), 6, 1);
        TWindowSubComCard__sub_80265F60(M2C_FIELD(arg0, u32 *, 0x30));
        TWindowSubComCard__sub_80265C30(M2C_FIELD(arg0, u32 *, 0x30));
        TCheckRoomSequence__sub_8013AD28(M2C_FIELD(arg0, u32 *, 0x30));
        temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
        fn_8024422C(M2C_FIELD(arg0, u32 *, 0x30), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
    }
    TQuestListVM__sub_80073DC4((void*)(arg0), 2);
}
int TShopArmorListWindow__sub_8021AA08(void* p) { return TQuestListVM__sub_80073DC4(p, 8); }

}
