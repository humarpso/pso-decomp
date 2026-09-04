#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TShopArmorListWindow__sub_8021AA08(void* p);
void open_menu_window__20TShopArmorListWindowFPv(void *arg0);
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

void open_menu_window__20TShopArmorListWindowFPv(void *arg0) {
    f32 temp_f31;
    u16 temp_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) == 0U) {
        temp_r31 = obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, u32 *, 0x30) = TCheckRoomSequence__sub_802664A8(TWindowSubComCard__sub_8026CBB8(0x2B), 2, temp_r31);
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x30), TLobby__sub_80222CFC(4), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, u32 *, 0x30), TLobby__sub_80222CFC(5), 6, 1);
        TWindowSubComCard__sub_80265F60(M2C_FIELD(arg0, u32 *, 0x30));
        TWindowSubComCard__sub_80265C30(M2C_FIELD(arg0, u32 *, 0x30));
        set_ready_flag__18TCheckRoomSequenceFPv(M2C_FIELD(arg0, u32 *, 0x30));
        temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
        set_position_xy(M2C_FIELD(arg0, u32 *, 0x30), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
    }
    set_field_20__12TQuestListVMFPvi((void*)(arg0), 2);
}
int TShopArmorListWindow__sub_8021AA08(void* p) { return set_field_20__12TQuestListVMFPvi(p, 8); }

}
#else
#if PSO_CLASS_PACKAGE == 0x8021A394
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8021A394 { char pad[0x18]; };
struct VObj_8021A394 : Base_8021A394 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};
struct Base_8021A3CC { char pad[0x18]; };
struct VObj_8021A3CC : Base_8021A3CC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
};
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_selection__20TShopArmorListWindowFPvPv(void *arg0, void *arg1);
void TShopArmorListWindow__vt4(void *arg0);
void TShopArmorListWindow__vt5(void *arg0);
M2C_UNK get_item_count__24TShopEquipmentSellWindowFPv(void *a, s32 b);

void TShopArmorListWindow__vt5(void *arg0) {
    struct VObj_8021A394 *o = (struct VObj_8021A394 *)M2C_FIELD(arg0, void **, 0x28);
    if (o != NULL) {
        o->m5();
    }
}

void TShopArmorListWindow__vt4(void *arg0) {
    struct VObj_8021A3CC *o = (struct VObj_8021A3CC *)M2C_FIELD(arg0, void **, 0x28);
    if (o != NULL) {
        o->m4();
    }
}

void update_selection__20TShopArmorListWindowFPvPv(void *arg0, void *arg1) {
    void *r3 = M2C_FIELD(arg0, void **, 0x3C);
    if (r3 != 0) {
        s32 r4 = M2C_FIELD(arg1, s32 *, 0x10);
        if (r4 > 0) {
            get_item_count__24TShopEquipmentSellWindowFPv(r3, r4);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021AA2C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__20TShopArmorListWindowFPv(void *arg0);
void handle_select__20TShopArmorListWindowFPv(void *arg0);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(s32);

}

struct Base_8021AA2C { char pad[0x18]; };
struct VObj_8021AA2C : Base_8021AA2C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32);
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8();
};

extern "C" {

void update__20TShopArmorListWindowFPv(void *arg0) {
    if ((((VObj_8021AA2C *)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        ((VObj_8021AA2C *)arg0)->m4(0xB, 1);
        clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, s32 *, 0x2C));
        set_field_20__12TQuestListVMFPvi(arg0, 1);
    }
}

}

struct Base_8021AABC { char pad[0x18]; };
struct VObj_8021AABC : Base_8021AABC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32);
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8();
};

extern "C" {

void handle_select__20TShopArmorListWindowFPv(void *arg0) {
    if ((((VObj_8021AABC *)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        ((VObj_8021AABC *)arg0)->m4(0xB, 1);
        clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, s32 *, 0x2C));
        set_field_20__12TQuestListVMFPvi(arg0, 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8021B0F8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__20TShopArmorListWindowFv(void *arg0, s16 arg1);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TShopWindowBaseFv(void *, int);

extern M2C_UNK __vt__20TShopArmorListWindow[];

void *__dt__20TShopArmorListWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TShopArmorListWindow;
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
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
#if PSO_CLASS_PACKAGE == 0x80266D78
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void save_cursor_selection__20TShopArmorListWindowFPv(void *arg0);
s32 select_cursor_entry__6TLobbyFPv();

void save_cursor_selection__20TShopArmorListWindowFPv(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x78) = (s16) M2C_FIELD(arg0, s16 *, 0x74);
    M2C_FIELD(arg0, s32 *, 0x7C) = select_cursor_entry__6TLobbyFPv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802785FC
#include "types.h"

extern "C" {

void close_list__20TShopArmorListWindowFPv(void* p);
int TShopArmorListWindow__sub_80266CF8(void*);
int TShopArmorListWindow__sub_80266DB0(void*);
int fn_802788A8(void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);

void close_list__20TShopArmorListWindowFPv(void* p) { save_cursor_selection__20TShopArmorListWindowFPv(p); TShopArmorListWindow__sub_80266DB0(p); fn_802788A8(p); TShopArmorListWindow__sub_80266CF8(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027870C
#include "types.h"

extern "C" {

void save_and_refresh_cursor__20TShopArmorListWindowFPvPvPv(void* p, void* a1, void* a2);
int TShopArmorListWindow__sub_80266CF8(void*);
int TShopArmorListWindow__sub_80266DB0(void*);
int fn_80278BD8(void*, void*, void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);

void save_and_refresh_cursor__20TShopArmorListWindowFPvPvPv(void* p, void* a1, void* a2) { save_cursor_selection__20TShopArmorListWindowFPv(p); TShopArmorListWindow__sub_80266DB0(p); fn_80278BD8(p, a1, a2); TShopArmorListWindow__sub_80266CF8(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802787AC
#include "types.h"

extern "C" {

void save_and_close__20TShopArmorListWindowFPv(void* p);
int TShopArmorListWindow__sub_80266CF8(void*);
int TShopArmorListWindow__sub_80266DB0(void*);
int fn_80278DA4(void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);

void save_and_close__20TShopArmorListWindowFPv(void* p) { save_cursor_selection__20TShopArmorListWindowFPv(p); TShopArmorListWindow__sub_80266DB0(p); fn_80278DA4(p); TShopArmorListWindow__sub_80266CF8(p); }

}
#endif
#endif
