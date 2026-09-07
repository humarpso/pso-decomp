#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8021F134 { char pad[0x18]; };
struct VObj_8021F134 : Base_8021F134 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_8021F16C_8021F134 { char pad[0x18]; };
struct VObj_8021F16C_8021F134 : Base_8021F16C_8021F134 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};
struct Base_8021F678_8021F134 { char pad[0x18]; };
struct VObj_8021F678_8021F134 : Base_8021F678_8021F134 {
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
struct Base_8021F708_8021F134 { char pad[0x18]; };
struct VObj_8021F708_8021F134 : Base_8021F708_8021F134 {
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

struct RecoveredGlobal_8021FDC8___vt__19TShopItemListWindow {
    M2C_UNK value;
    u8 remaining[0x2C];
};

extern "C" {
s32 calc_item_count__18TShopGetItemWindowFPvPv(int, void *);
s32 TShopWindowBase__sub_8022397C(void *);
s32 __ct__15TShopWindowBaseFv(void *);
s32 set_6264_and_call_2244B0__6TLobbyFii(void *, int);
extern M2C_UNK __vt__19TShopItemListWindow[];
extern s32 lbl_805D36D0;
u8 *TShopItemListWindow__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
}

extern "C" {

void TShopItemListWindow__vt4(void *arg0);
void TShopItemListWindow__vt5(void *arg0);
void *__dt__19TShopItemListWindowFv(void *arg0, s16 arg1);
void handle_confirm__19TShopItemListWindowFPv(void *arg0);
void update__19TShopItemListWindowFPv(void *arg0);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TShopWindowBaseFv(void *, int);
s32 clear_selected_and_update_entry__14TWindowSubItemFPv(s32);
s32 set_field_20__12TQuestListVMFPvi(void *, s32);

void TShopItemListWindow__vt5(void *arg0) {
    struct VObj_8021F134 *temp_r3;

    temp_r3 = (struct VObj_8021F134 *)M2C_FIELD(arg0, void **, 0x2C);
    if (temp_r3 != NULL) {
        temp_r3->m5();
    }
}

void TShopItemListWindow__vt4(void *arg0) {
    struct VObj_8021F16C_8021F134 *temp_r3;

    temp_r3 = (struct VObj_8021F16C_8021F134 *)M2C_FIELD(arg0, void **, 0x2C);
    if (temp_r3 != NULL) {
        temp_r3->m4();
    }
}

void handle_confirm__19TShopItemListWindowFPv(void *arg0) {
    VObj_8021F678_8021F134 *o = (VObj_8021F678_8021F134 *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m4(0xB, 1);
        clear_selected_and_update_entry__14TWindowSubItemFPv(*(s32 *)((s8 *)arg0 + 0x28));
        set_field_20__12TQuestListVMFPvi(arg0, 1);
    }
}

void update__19TShopItemListWindowFPv(void *arg0) {
    VObj_8021F708_8021F134 *o = (VObj_8021F708_8021F134 *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m4(0xB, 1);
        clear_selected_and_update_entry__14TWindowSubItemFPv(*(s32 *)((s8 *)arg0 + 0x28));
        set_field_20__12TQuestListVMFPvi(arg0, 1);
    }
}

extern M2C_UNK __vt__19TShopItemListWindow[];

void *__dt__19TShopItemListWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TShopItemListWindow;
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x38)); M2C_FIELD(arg0, M2C_UNK *, 0x38) = 0; }
        if (M2C_FIELD(arg0, void **, 0x3C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x3C)); M2C_FIELD(arg0, M2C_UNK *, 0x3C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x40) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x40)); M2C_FIELD(arg0, M2C_UNK *, 0x40) = 0; }
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8021FDC8___vt__19TShopItemListWindow_size[sizeof(RecoveredGlobal_8021FDC8___vt__19TShopItemListWindow) == 0x30 ? 1 : -1];
u8 *TShopItemListWindow__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 sp8;
    __ct__15TShopWindowBaseFv((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8021FDC8___vt__19TShopItemListWindow *)&__vt__19TShopItemListWindow).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D36D0;
    M2C_FIELD(arg0, s32 *, 0x24) = arg3;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    calc_item_count__18TShopGetItemWindowFPvPv((int) (M2C_FIELD(arg0, s32 *, 0x24)), (void *) (&sp8));
    set_6264_and_call_2244B0__6TLobbyFii((void *) (TShopWindowBase__sub_8022397C((void *) (arg0))), (int) (sp8));
    return arg0;
}

}
