#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void update_variant_a__20TWindowShortListCtrlFPv(void* p);
void update_variant_b__20TWindowShortListCtrlFPv(void* p);
void update_variant_c__20TWindowShortListCtrlFPv(void* p);
int TShopArmorListWindow__sub_80266CF8(void*);
int save_cursor_selection__20TShopArmorListWindowFPv(void*);
int TShopArmorListWindow__sub_80266DB0(void*);
int refresh_battle_stat_list(void*);
int fn_802789E0(void*);
int build_shop_item_list__10TObjPlayerFPv(void*);

void update_variant_a__20TWindowShortListCtrlFPv(void* p) { save_cursor_selection__20TShopArmorListWindowFPv(p); TShopArmorListWindow__sub_80266DB0(p); refresh_battle_stat_list(p); TShopArmorListWindow__sub_80266CF8(p); }

void update_variant_b__20TWindowShortListCtrlFPv(void* p) { save_cursor_selection__20TShopArmorListWindowFPv(p); TShopArmorListWindow__sub_80266DB0(p); fn_802789E0(p); TShopArmorListWindow__sub_80266CF8(p); }

void update_variant_c__20TWindowShortListCtrlFPv(void* p) { save_cursor_selection__20TShopArmorListWindowFPv(p); TShopArmorListWindow__sub_80266DB0(p); build_shop_item_list__10TObjPlayerFPv(p); TShopArmorListWindow__sub_80266CF8(p); }

}
#else
#if PSO_CLASS_PACKAGE == 0x80076D1C
#include "types.h"

extern "C" {

s32 TLobby__sub_80076BC8(void *);
s32 TWindowSubSymbolChat__sub_80076F88(void *);
s32 TWindowDD__sub_80348C78(void *);
void TWindowShortListCtrl__sub_80076D1C(void);
int TWindowKeyBoardSoft__sub_80076E2C(void);
int fn_80076CD0(void);
void TAdSinglePlyChrSelectGC__sub_80076DF4(void* p, void* q);

void TWindowShortListCtrl__sub_80076D1C(void) { TWindowKeyBoardSoft__sub_80076E2C(); fn_80076CD0(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A4FC0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__20TWindowShortListCtrlFPvs(void *arg0, s16 arg1);
void TLobby__sub_8022743C();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804C2298[];

void *destroy__20TWindowShortListCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C2298;
        TLobby__sub_8022743C();
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x24)); M2C_FIELD(arg0, M2C_UNK *, 0x24) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A513C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowShortListCtrl__sub_801A513C(void* p);
int TWindowShortListCtrl__sub_801A5144(void* p);
s32 get_card_status_bits__20TWindowShortListCtrlFv(void);
s32 get_card_window_flags__20TWindowShortListCtrlFv(void);
void *get_card_window__17TWindowSubComCardFUi();

s32 TWindowShortListCtrl__sub_801A513C(void* p) { return *(s32*)((char*)p + 0x24); }
int TWindowShortListCtrl__sub_801A5144(void* p) { return *(u8*)((char*)p + 0x1d) & 0x1; }
s32 get_card_window_flags__20TWindowShortListCtrlFv(void) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi();
    if (temp_r3 == NULL) {
        return 0;
    }
    return ((u32) M2C_FIELD(temp_r3, u32 *, 0x10) >> 0x10U) & 3;
}
s32 get_card_status_bits__20TWindowShortListCtrlFv(void) {
    void *temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi();
    if (temp_r3 == NULL) {
        return 0;
    }
    return ((u32) M2C_FIELD(temp_r3, u32 *, 0x10) >> 0xDU) & 7;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A6DA0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TWindowShortListCtrl__check_controller_button(void *arg0);
s32 pack_flags__13TRaderMapCoreFii();

u8 TWindowShortListCtrl__check_controller_button(void *arg0) {
    return (u8) ((M2C_FIELD(arg0, s32 *, 0x4C) & pack_flags__13TRaderMapCoreFii()) != 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80221828
#include "types.h"

extern "C" {

void set_flag70_bit10__20TWindowShortListCtrlFPv(void* p);

void set_flag70_bit10__20TWindowShortListCtrlFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x10; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026E7DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_displayed_item__20TWindowShortListCtrlFPvi(void *arg0, s32 arg1);
M2C_UNK TWindowHelpItem__set_displayed_item_by_id(u32);

void set_displayed_item__20TWindowShortListCtrlFPvi(void *arg0, s32 arg1) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) && (arg1 != (s32) M2C_FIELD(arg0, s32 *, 0x38))) {
        M2C_FIELD(arg0, s32 *, 0x38) = arg1;
        TWindowHelpItem__set_displayed_item_by_id(M2C_FIELD(arg0, u32 *, 0x34));
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026E81C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_technique_usable__20TWindowShortListCtrlFPv(u8 *arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
s32 is_technique_ready__8TTecCtrlFv();

s32 is_technique_usable__20TWindowShortListCtrlFPv(u8 *arg0) {
    u32 temp_r3;
    u8 *temp_r31;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    if (temp_r3 == 0U) {
        return 0;
    }
    temp_r31 = (unsigned char *) (temp_r3 + 0x85C);
    if (temp_r31 == NULL) {
        return 0;
    }
    if (is_technique_ready__8TTecCtrlFv() != 0) {
        return 1;
    }
    return ((u32) M2C_FIELD(temp_r31, u32 *, 0x34) >> 4U) & 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026E9F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_children__20TWindowShortListCtrlFPv(void *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);

void destroy_children__20TWindowShortListCtrlFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x2C));
        M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026EC50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TWindowShortListCtrl__sub_8026EBB0(void* a0 = 0, void* a1 = 0, void* a2 = 0);

s32 set_flag70_bit10__16TObjCityMainWarpFPv();
void *TCheckRoomSequence__sub_802664A8(s32, s32, s32);
s32 set_flag70_bit100__17TWindowOptionCtrlFPv(void *);
void render__20TWindowShortListCtrlFv(void);

void *create_window__20TWindowShortListCtrlFPvii(void *arg0, s32 arg1, s32 arg2) {
    void *temp_r31;

    temp_r31 = TCheckRoomSequence__sub_802664A8(arg1, 0x13, M2C_FIELD(arg0, s32 *, 0x24));
    set_flag70_bit10__16TObjCityMainWarpFPv();
    M2C_FIELD(temp_r31, s32 *, 0x5C) = 0x01000000;
    set_flag70_bit100__17TWindowOptionCtrlFPv(temp_r31);
    TWindowShortListCtrl__sub_8026EBB0((void*)(arg0), (void*)(temp_r31), (void*)(arg2));
    return temp_r31;
}
void render__20TWindowShortListCtrlFv(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026F414
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__20TWindowShortListCtrlFv(void *arg0, s16 arg1);
M2C_UNK init_parts__10TObjPlayerFPv(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowCtrl__sub_8024AF74(s32);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
s32 TWindowCtrl__sub_8024A1A8();
M2C_UNK TWindowChat__sub_8024AD30(s32);
M2C_UNK clear_flag_8__11TWindowCtrlFv();

extern void *__vt__20TWindowShortListCtrl[];

void *__dt__20TWindowShortListCtrlFv(void *arg0, s16 arg1) {
    s32 temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = __vt__20TWindowShortListCtrl;
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x24));
        if ((temp_r3 != 0) && (TWindowCtrl__sub_8024AF74(M2C_FIELD(arg0, s32 *, 0x24)) == 0) && (TWindowCtrl__sub_8024A1A8() == 0)) {
            init_parts__10TObjPlayerFPv(temp_r3);
        }
        TWindowChat__sub_8024AD30(M2C_FIELD(arg0, s32 *, 0x24));
        clear_flag_8__11TWindowCtrlFv();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2C));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026F638
#include "types.h"

extern "C" {

s16 get_cursor_pos__20TWindowShortListCtrlFPv(void* p);
s16 get_selected_index__20TWindowShortListCtrlFPv(void* p);
s32 set_card_window_flags__19TWindowKeyBoardHardFPvii(s32, s32, s32);

void set_card_window_flags__20TWindowShortListCtrlFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii(arg0, arg1 << 0x10, 0xFFFCFFFF);
}
s16 get_cursor_pos__20TWindowShortListCtrlFPv(void* p) { return *(s16*)((char*)p + 0x78); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026F69C
#include "types.h"

extern "C" {

s16 get_cursor_pos__20TWindowShortListCtrlFPv(void* p);
s16 get_selected_index__20TWindowShortListCtrlFPv(void* p);
s32 set_card_window_flags__19TWindowKeyBoardHardFPvii(s32, s32, s32);

s16 get_selected_index__20TWindowShortListCtrlFPv(void* p) { return *(s16*)((char*)p + 0x7a); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80277D3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void assign_shortcut__20TWindowShortListCtrlFiii(s32 arg0, s32 arg1, s32 arg2);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 get_field_d8__10TObjPlayerFPv(u32);
u32 TLobby__sub_80101AB0(s32);
u32 test_item_flags__10TObjPlayerFPvUi(s32, s32);
M2C_UNK TObjPlayer__sub_801B9EDC(s32, s32);
M2C_UNK TObjPlayer__sub_801BA0F0(s32, s32, s32);
u32 get_slot_value__10TObjPlayerFPvi(s32, s32);

void assign_shortcut__20TWindowShortListCtrlFiii(s32 arg0, s32 arg1, s32 arg2) {
    u32 temp_r31;
    s32 temp_r3;
    s32 temp_r0;
    u32 temp_r3b;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg2);
    if (temp_r3 != 0) {
        temp_r31 = get_slot_value__10TObjPlayerFPvi(temp_r3 + 0xD04, arg0);
        temp_r3b = TLobby__sub_80101AB0(arg1);
        if (temp_r31 == temp_r3b) {
            TObjPlayer__sub_801B9EDC(temp_r3, arg1);
            return;
        }
        if (test_item_flags__10TObjPlayerFPvUi(temp_r3b, 8) != 0U) {
            TObjPlayer__sub_801B9EDC(temp_r3, arg1);
        }
        if (temp_r31 != 0U) {
            temp_r0 = get_field_d8__10TObjPlayerFPv(temp_r31);
            TObjPlayer__sub_801B9EDC(temp_r3, temp_r0);
        }
        TObjPlayer__sub_801BA0F0(temp_r3, arg1, arg0);
    }
}

}
#endif
#endif
