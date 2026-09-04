#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_displayed_item__14TWindowSubItemFPvi(void *arg0, s32 arg1);
M2C_UNK TWindowHelpItem__set_displayed_item_by_id(u32);

void set_displayed_item__14TWindowSubItemFPvi(void *arg0, s32 arg1) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) && (arg1 != (s32) M2C_FIELD(arg0, s32 *, 0x20))) {
        M2C_FIELD(arg0, s32 *, 0x20) = arg1;
        TWindowHelpItem__set_displayed_item_by_id(M2C_FIELD(arg0, u32 *, 0x40));
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801F8FD4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_selected_and_update_entry__14TWindowSubItemFPv(void *arg0);
M2C_UNK set_entry_state__20TWindowSubStatusDispFPvc(M2C_UNK, M2C_UNK);

void clear_selected_and_update_entry__14TWindowSubItemFPv(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) & 0xFFFFFFFD);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        set_entry_state__20TWindowSubStatusDispFPvc(M2C_FIELD(arg0, M2C_UNK *, 0x80), 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80249058
#include "types.h"

extern "C" {

s32 get_cursor_pos__14TWindowSubItemFPv(void* p);
int is_flag_4_set__20TWindowSubStatusDispFPv(void* p);
int get_flag__20TWindowSubStatusDispFPv(void* p);

s32 get_cursor_pos__14TWindowSubItemFPv(void* p) { return *(s32*)((char*)p + 0x18); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80279858
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_windows__14TWindowSubItemFPvi(void *arg0, s32 arg1);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TWindow__close(void *);
M2C_UNK close_sub_window__10TObjPlayerFPv();

void close_windows__14TWindowSubItemFPvi(void *arg0, s32 arg1) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x24)) != 0U) {
        switch (arg1) {
        case 0:
            close_sub_window__10TObjPlayerFPv();
            M2C_FIELD(arg0, s8 *, 0x1C) = 0x16;
            return;
        case 1:
            if (M2C_FIELD(arg0, void **, 0x38) != NULL) {
                TWindow__close(M2C_FIELD(arg0, void **, 0x38));
                M2C_FIELD(arg0, u32 *, 0x38) = 0U;
            }
            if (M2C_FIELD(arg0, void **, 0x34) != NULL) {
                TWindow__close(M2C_FIELD(arg0, void **, 0x34));
                M2C_FIELD(arg0, u32 *, 0x34) = 0U;
            }
            M2C_FIELD(arg0, s8 *, 0x1C) = 0xA;
            break;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802798F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_A { char pad[0x18]; };
struct V_A : Base_A {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual void f22();
    virtual void f23();
    virtual void f24();
    virtual void f25();
    virtual void f26();
    virtual void f27();
    virtual void f28();
    virtual void f29();
    virtual void f30();
    virtual s32 m31();
};

extern "C" {

void exec_item_command__14TWindowSubItemFPvii(void *arg0, s32 arg1, s32 arg2);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 get_field_d8__10TObjPlayerFPv();
void *TLobby__sub_80101AB0(s32);
M2C_UNK fn_801B7F4C(s32, s32);
M2C_UNK TObjPlayer__sub_801B9EDC(s32, s32);
M2C_UNK TObjPlayer__sub_801BA0F0(s32, s32, M2C_UNK);
u32 get_slot_value__10TObjPlayerFPvi(s32, s8);

void exec_item_command__14TWindowSubItemFPvii(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    void *temp_r3_2;
    s32 t;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x24));
    if ((temp_r3 != 0) && (temp_r3_2 = TLobby__sub_80101AB0(arg1), ((temp_r3_2 == NULL) == 0))) {
        switch (arg2) {
        case 3:
            break;
        case 0:
            fn_801B7F4C(temp_r3, arg1);
            M2C_FIELD(arg0, s8 *, 0x1C) = 0x16;
            break;
        case 1:
            if (get_slot_value__10TObjPlayerFPvi(temp_r3 + 0xD04, (s8) ((V_A *) temp_r3_2)->m31()) != 0U) {
                t = get_field_d8__10TObjPlayerFPv();
                TObjPlayer__sub_801B9EDC(temp_r3, t);
            }
            TObjPlayer__sub_801BA0F0(temp_r3, arg1, 0);
            M2C_FIELD(arg0, s8 *, 0x1C) = 0x16;
            break;
        case 2:
            TObjPlayer__sub_801B9EDC(temp_r3, arg1);
            M2C_FIELD(arg0, s8 *, 0x1C) = 0x16;
            break;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80279CB8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_slot__14TWindowSubItemFiii(s32 arg1, s32 arg2, s32 arg3);
void dispatch_warp_status__14TWindowSubItemFii(s32 arg0, s32 arg1);
s32 create_count_input__14TWindowSubItemFPvi(void *arg0, s32 arg1);
s32 get_global_state__14TOKeyMachine01Fv();
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
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
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
#endif
#if PSO_CLASS_PACKAGE == 0x80279FF8
#include "types.h"

extern "C" {

void render__14TWindowSubItemFv(void);

void render__14TWindowSubItemFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027A860
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__14TWindowSubItemFv(void *arg0, s16 arg1);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK __vt__14TWindowSubItem[];

void *__dt__14TWindowSubItemFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TWindowSubItem;
        if (M2C_FIELD(arg0, void **, 0x3C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x3C)); M2C_FIELD(arg0, M2C_UNK *, 0x3C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x38)); M2C_FIELD(arg0, M2C_UNK *, 0x38) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        if (M2C_FIELD(arg0, void **, 0x40) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x40)); M2C_FIELD(arg0, M2C_UNK *, 0x40) = 0; }
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027A934
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TWindowSubItem__ct(void *arg0, s32 arg1, s32 arg2);
M2C_UNK set_flag70_bit10__20TWindowShortListCtrlFPv(s32);
M2C_UNK __ct__7TObjectFP7TObject();
M2C_UNK set_field_1c__6TLobbyFPvf(s32);
M2C_UNK TWindowSubEquip__sub_80263AF8(s32, M2C_UNK);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
s32 fn_8027AD5C(s32, M2C_UNK *, s32);

extern M2C_UNK lbl_8044F998[];
extern M2C_UNK __vt__14TWindowSubItem[];
extern s32 lbl_805D3A50;

void *TWindowSubItem__ct(void *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TWindowSubItem;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3A50;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    M2C_FIELD(arg0, s32 *, 0x30) = fn_8027AD5C(TWindowSubComCard__sub_8026CBB8(3), lbl_8044F998, M2C_FIELD(arg0, s32 *, 0x24));
    TWindowSubEquip__sub_80263AF8(M2C_FIELD(arg0, s32 *, 0x2C), 0);
    set_field_1c__6TLobbyFPvf(M2C_FIELD(arg0, s32 *, 0x30));
    set_flag70_bit10__20TWindowShortListCtrlFPv(M2C_FIELD(arg0, s32 *, 0x30));
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = -1;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027A9E4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
void get_selected_entry__14TWindowSubItemFPv(void *arg0);
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);
M2C_UNK get_cursor_pos__14TWindowSubItemFPv();
int TShopArmorListWindow__sub_80266CF8(void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);
int TShopArmorListWindow__sub_80266DB0(void*);
int TWindowSubStatusDisp__sub_80266EB8(void*);
int fn_8027ABFC(void* a0 = 0);
void refresh__14TWindowSubItemFPv(void* p);
void set_flag60_bit10__14TWindowSubItemFPv(void* p);
void reset_selected__14TWindowSubItemFPv(void* p);
void set_field_74__14TWindowSubItemFPvs(void* p, s16 v);

void set_flag60_bit10__14TWindowSubItemFPv(void* p) { *(u16*)((char*)p + 0x60) |= 0x10; }
void clear_flag_and_release__14TWindowSubItemFPv(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) & 0xFFFFFFFD);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        set_entry_state__20TWindowSubStatusDispFPvc(M2C_FIELD(arg0, s32 *, 0x70), 1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027AA3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
void get_selected_entry__14TWindowSubItemFPv(void *arg0);
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);
M2C_UNK get_cursor_pos__14TWindowSubItemFPv();
int TShopArmorListWindow__sub_80266CF8(void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);
int TShopArmorListWindow__sub_80266DB0(void*);
int TWindowSubStatusDisp__sub_80266EB8(void*);
int fn_8027ABFC(void* a0 = 0);
void refresh__14TWindowSubItemFPv(void* p);
void set_flag60_bit10__14TWindowSubItemFPv(void* p);
void reset_selected__14TWindowSubItemFPv(void* p);
void set_field_74__14TWindowSubItemFPvs(void* p, s16 v);

void reset_selected__14TWindowSubItemFPv(void* p) { *(s16*)((char*)p + 0x88) = -1; }
void set_field_74__14TWindowSubItemFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x74) = v; }
void get_selected_entry__14TWindowSubItemFPv(void *arg0) {
    get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x88));
    get_cursor_pos__14TWindowSubItemFPv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027ABA8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_entry_state__20TWindowSubStatusDispFPvc(s32 a0 = 0, s32 a1 = 0);
void get_selected_entry__14TWindowSubItemFPv(void *arg0);
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);
M2C_UNK get_cursor_pos__14TWindowSubItemFPv();
int TShopArmorListWindow__sub_80266CF8(void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);
int TShopArmorListWindow__sub_80266DB0(void*);
int TWindowSubStatusDisp__sub_80266EB8(void*);
int fn_8027ABFC(void* a0 = 0);
void refresh__14TWindowSubItemFPv(void* p);
void set_flag60_bit10__14TWindowSubItemFPv(void* p);
void reset_selected__14TWindowSubItemFPv(void* p);
void set_field_74__14TWindowSubItemFPvs(void* p, s16 v);

void refresh__14TWindowSubItemFPv(void* p) { save_cursor_selection__20TShopArmorListWindowFPv(p); TShopArmorListWindow__sub_80266DB0(p); fn_8027ABFC(p); TShopArmorListWindow__sub_80266CF8(p); TWindowSubStatusDisp__sub_80266EB8(p); reset_selected__14TWindowSubItemFPv(p); }

}
#endif
#endif
