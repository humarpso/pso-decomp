#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8021C870 { char pad[0x18]; };
struct VObj_8021C870 : Base_8021C870 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_8021C8A8_8021C870 { char pad[0x18]; };
struct VObj_8021C8A8_8021C870 : Base_8021C8A8_8021C870 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};
struct Base_8021C8E0_8021C870 { char pad[0x18]; };
struct VObj_8021C8E0_8021C870 : Base_8021C8E0_8021C870 {
    virtual int m0();
    virtual int m1();
    virtual int m2();
    virtual int m3();
    virtual int m4(int, int);
    virtual int m5();
    virtual int m6();
    virtual int m7();
    virtual int m8();
};
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TShopEquipmentSellWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void TShopEquipmentSellWindow__vt4(void *arg0);
void TShopEquipmentSellWindow__vt5(void *arg0);
void *__dt__24TShopEquipmentSellWindowFv(void *arg0, s16 arg1);
void close__24TShopEquipmentSellWindowFPv(void *arg0);
void handle_input_window_result__24TShopEquipmentSellWindowFPv(void *arg0);
void update__24TShopEquipmentSellWindowFPv(void *arg0);
u32 TCheckRoomSequence__sub_802664A8(M2C_UNK, M2C_UNK, u16);
s32 TLobby__sub_80222CFC(M2C_UNK);
int TShopWindowBase__sub_802239EC(void *);
int TShopWindowBase__sub_80223A48(void *);
M2C_UNK TWindowSubComCard__sub_80265C30(u32);
M2C_UNK TWindowSubComCard__sub_80265F60(u32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
void TWindow__close(void *);
void __ct__15TShopWindowBaseFv(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TShopWindowBaseFv(void *, int);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(u32, s32, M2C_UNK, M2C_UNK);
s32 get_result__24TShopEquipmentSellWindowFPv(u32);
f32 get_scale__15TShopWindowBaseFv(void *);
s32 is_confirmed__18TWindowInputNumberFPv(u32);
s32 is_confirmed__24TShopEquipmentSellWindowFPv(u32);
void memset(void *, int, int);
s32 obj_getField1c(s32);
int set_field_20__12TQuestListVMFPvi(void *, int);
M2C_UNK set_position_xy(u32, f32, f32);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(u32);

void TShopEquipmentSellWindow__vt5(void *arg0) {
    struct VObj_8021C870 *o = (struct VObj_8021C870 *)M2C_FIELD(arg0, void **, 0x388);
    if (o != NULL) {
        o->m5();
    }
}

void TShopEquipmentSellWindow__vt4(void *arg0) {
    struct VObj_8021C8A8_8021C870 *o = (struct VObj_8021C8A8_8021C870 *)M2C_FIELD(arg0, void **, 0x388);
    if (o != NULL) {
        o->m4();
    }
}

void update__24TShopEquipmentSellWindowFPv(void *arg0) {
    VObj_8021C8E0_8021C870 *o = (VObj_8021C8E0_8021C870 *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m4(0xc, 1);
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (int)(5));
    }
}

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
        TWindow__close((void *)(M2C_FIELD(arg0, u32 *, 0x394)));
        M2C_FIELD(arg0, u32 *, 0x394) = 0U;
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (int)(2));
        return;
    }
    if (((u32) M2C_FIELD(arg0, u32 *, 0x394) != 0U) && (is_confirmed__24TShopEquipmentSellWindowFPv(M2C_FIELD(arg0, u32 *, 0x394)) != 0)) {
        TWindow__close((void *)(M2C_FIELD(arg0, u32 *, 0x394)));
        M2C_FIELD(arg0, u32 *, 0x394) = 0U;
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (int)(5));
    }
}

void close__24TShopEquipmentSellWindowFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38C) != 0U) {
        clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x38C));
    }
    set_field_20__12TQuestListVMFPvi((void *)(arg0), (int)(1));
}

extern M2C_UNK __vt__24TShopEquipmentSellWindow[];

void *__dt__24TShopEquipmentSellWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__24TShopEquipmentSellWindow;
        if (M2C_FIELD(arg0, void **, 0x38C) != NULL) { TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x38C))); M2C_FIELD(arg0, M2C_UNK *, 0x38C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x390) != NULL) { TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x390))); M2C_FIELD(arg0, M2C_UNK *, 0x390) = 0; }
        if (M2C_FIELD(arg0, void **, 0x394) != NULL) { TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x394))); M2C_FIELD(arg0, M2C_UNK *, 0x394) = 0; }
        if (M2C_FIELD(arg0, void **, 0x39C) != NULL) { TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x39C))); M2C_FIELD(arg0, M2C_UNK *, 0x39C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x398) != NULL) { TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x398))); M2C_FIELD(arg0, M2C_UNK *, 0x398) = 0; }
        if (M2C_FIELD(arg0, void **, 0x3A0) != NULL) { TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x3A0))); M2C_FIELD(arg0, M2C_UNK *, 0x3A0) = 0; }
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__24TShopEquipmentSellWindow[];
extern void *lbl_805D36B0;

void *TShopEquipmentSellWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    __ct__15TShopWindowBaseFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__24TShopEquipmentSellWindow;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D36B0;
    M2C_FIELD(arg0, u32 *, 0x370) = 0;
    M2C_FIELD(arg0, u32 *, 0x374) = 0;
    M2C_FIELD(arg0, void **, 0x378) = arg4;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x37C) = 1;
    M2C_FIELD(arg0, u32 *, 0x380) = 0;
    M2C_FIELD(arg0, u32 *, 0x384) = 0;
    M2C_FIELD(arg0, void **, 0x388) = arg2;
    M2C_FIELD(arg0, u32 *, 0x38C) = 0;
    M2C_FIELD(arg0, u32 *, 0x390) = 0;
    M2C_FIELD(arg0, u32 *, 0x394) = 0;
    M2C_FIELD(arg0, u32 *, 0x39C) = 0;
    M2C_FIELD(arg0, u32 *, 0x398) = 0;
    M2C_FIELD(arg0, u32 *, 0x3A0) = 0;
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    M2C_FIELD(arg0, u32 *, 0x3A4) = 0;
    M2C_FIELD(arg0, u32 *, 0x3A8) = 0;
    memset((void *)((char *)arg0 + 40), 0, 840);
    return arg0;
}

}
