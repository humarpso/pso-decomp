#ifndef PSO_CLASS_PACKAGE
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
#else
#if PSO_CLASS_PACKAGE == 0x8010ED54
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_stack_count__24TShopEquipmentListWindowFPvc(void *arg0, s8 arg1);
s32 lookup_item_def__9TItemDataFPv();

void set_stack_count__24TShopEquipmentListWindowFPvc(void *arg0, s8 arg1) {
    if (lookup_item_def__9TItemDataFPv() != 0) {
        M2C_FIELD(arg0, s8 *, 5) = arg1;
        return;
    }
    if ((u8) M2C_FIELD(arg0, u8 *, 0) == 3) {
        M2C_FIELD(arg0, s8 *, 5) = 0;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021B974
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8021B974 { char pad[0x18]; };
struct VObj_8021B974 : Base_8021B974 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_8021B9AC { char pad[0x18]; };
struct VObj_8021B9AC : Base_8021B9AC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_list__24TShopEquipmentListWindowFPvPv(void *arg0, void *arg1);
void TShopEquipmentListWindow__vt4(void *arg0);
void TShopEquipmentListWindow__vt5(void *arg0);
M2C_UNK get_item_count__24TShopEquipmentSellWindowFPv(void *a, s32 b);

void TShopEquipmentListWindow__vt5(void *arg0) {
    struct VObj_8021B974 *o = (struct VObj_8021B974 *)M2C_FIELD(arg0, void **, 0x28);
    if (o != NULL) {
        o->m5();
    }
}

void TShopEquipmentListWindow__vt4(void *arg0) {
    struct VObj_8021B9AC *o = (struct VObj_8021B9AC *)M2C_FIELD(arg0, void **, 0x28);
    if (o != NULL) {
        o->m4();
    }
}

void update_list__24TShopEquipmentListWindowFPvPv(void *arg0, void *arg1) {
    void *v = M2C_FIELD(arg0, void **, 0x3C);
    if (v != 0) {
        s32 n = M2C_FIELD(arg1, s32 *, 0x10);
        if (n > 0) {
            get_item_count__24TShopEquipmentSellWindowFPv(v, n);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021C040
#include "types.h"
struct Base_8021C040 { char pad[0x18]; };
struct VObj_8021C040 : Base_8021C040 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(int, int);
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual int  m8();
};
struct Base_8021C0D0 { char pad[0x18]; };
struct VObj_8021C0D0 : Base_8021C0D0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(int, int);
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual int  m8();
};

extern "C" {

void handle_confirm__24TShopEquipmentListWindowFPv(void *arg0);
void handle_select__24TShopEquipmentListWindowFPv(void *arg0);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 set_field_20__12TQuestListVMFPvi(void *, s32);
s32 clear_selected_and_update_entry__14TWindowSubItemFPv(s32);

void handle_confirm__24TShopEquipmentListWindowFPv(void *arg0) {
    VObj_8021C040 *o = (VObj_8021C040 *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m4(0xB, 1);
        clear_selected_and_update_entry__14TWindowSubItemFPv(*(s32 *)((s8 *)arg0 + 0x30));
        set_field_20__12TQuestListVMFPvi(arg0, 1);
    }
}

void handle_select__24TShopEquipmentListWindowFPv(void *arg0) {
    VObj_8021C0D0 *o = (VObj_8021C0D0 *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m4(0xB, 1);
        clear_selected_and_update_entry__14TWindowSubItemFPv(*(s32 *)((s8 *)arg0 + 0x30));
        set_field_20__12TQuestListVMFPvi(arg0, 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021C6EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__24TShopEquipmentListWindowFv(void *arg0, s16 arg1);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TShopWindowBaseFv(void *, int);

extern M2C_UNK __vt__24TShopEquipmentListWindow[];

void *__dt__24TShopEquipmentListWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__24TShopEquipmentListWindow;
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x38)); M2C_FIELD(arg0, M2C_UNK *, 0x38) = 0; }
        if (M2C_FIELD(arg0, void **, 0x3C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x3C)); M2C_FIELD(arg0, M2C_UNK *, 0x3C) = 0; }
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021C85C
#include "types.h"

extern "C" {

int TShopEquipmentListWindow__sub_8021C85C(int a0);

    extern int lbl_80513F40[];
int TShopEquipmentListWindow__sub_8021C85C(int a0) {  return lbl_80513F40[a0]; }

}
#endif
#endif
