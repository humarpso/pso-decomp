#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void run_task__15TWindowMainMenuFv(void);
void render__15TWindowMainMenuFv(void);

void render__15TWindowMainMenuFv(void) {  }
void run_task__15TWindowMainMenuFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8024E3CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowMainMenu__sub_8024E3CC(void);
void TWindowMainMenu__sub_8024E3D0(void);
int TWindowMainMenu__sub_8024E3D4(void* p);
int TWindowMainMenu__sub_8024E3E0(void* p);
int initialize_subwindow__9TWindowDDFPv(void*);
void render_status__14TWindowDepositFPvi(void *arg0, s32 arg1);
int TWindowMainMenu__sub_8024E3F4(void* p);
void TWindowMainMenu__vt4(void);
void TWindowMainMenu__vt6(void);
int TWindowSubStatusDisp__sub_80257C28(void*, void*);
M2C_UNK TWindowSubStatusDisp__sub_80287580(s32, s32, M2C_UNK, f32);
void * get_array_entry__20TWindowSubStatusDispFPvi(s32 a0 = 0, s32 a1 = 0);

void TWindowMainMenu__sub_8024E3CC(void) {  }
void TWindowMainMenu__sub_8024E3D0(void) {  }
int TWindowMainMenu__sub_8024E3D4(void* p) { return (*(u32*)((char*)p + 0x4c) >> 3) & 0x1; }
int TWindowMainMenu__sub_8024E3E0(void* p) { return *(u32*)((char*)p + 0x4c) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024E3EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * get_array_entry__20TWindowSubStatusDispFPvi(s32 a0 = 0, s32 a1 = 0);
void render_status__14TWindowDepositFPvi(void *arg0, s32 arg1);
M2C_UNK TWindowSubStatusDisp__sub_80287580(s32, s32, M2C_UNK, f32);
int initialize_subwindow__9TWindowDDFPv(void*);
int TWindowSubStatusDisp__sub_80257C28(void*, void*);
void TWindowMainMenu__sub_8024E3CC(void);
void TWindowMainMenu__sub_8024E3D0(void);
int TWindowMainMenu__sub_8024E3D4(void* p);
int TWindowMainMenu__sub_8024E3E0(void* p);
void TWindowMainMenu__vt4(void);
void TWindowMainMenu__vt6(void);
int TWindowMainMenu__sub_8024E3F4(void* p);

void TWindowMainMenu__vt4(void) {  }
void TWindowMainMenu__vt6(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8024E3F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TWindowMainMenu__sub_8024E3F4(void* p);
void set_entry_field_20__15TWindowMainMenuFii(s32 arg0, s32 arg1);
int initialize_subwindow__9TWindowDDFPv(void*);
void render_status__14TWindowDepositFPvi(void *arg0, s32 arg1);
void TWindowMainMenu__sub_8024E3CC(void);
void TWindowMainMenu__sub_8024E3D0(void);
int TWindowMainMenu__sub_8024E3D4(void* p);
int TWindowMainMenu__sub_8024E3E0(void* p);
void TWindowMainMenu__vt4(void);
void TWindowMainMenu__vt6(void);
int TWindowSubStatusDisp__sub_80257C28(void*, void*);
M2C_UNK TWindowSubStatusDisp__sub_80287580(s32, s32, M2C_UNK, f32);
void * get_array_entry__20TWindowSubStatusDispFPvi(s32 a0 = 0, s32 a1 = 0);

int TWindowMainMenu__sub_8024E3F4(void* p) { return (*(u16*)((char*)p + 0x1c) >> 6) & 0x1; }
void set_entry_field_20__15TWindowMainMenuFii(s32 arg0, s32 arg1) {
    M2C_FIELD(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1), s32 *, 0x20) = arg1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80263B70
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_A_80263b70 { char pad[0x18]; };
struct V_A_80263b70 : Base_A_80263b70 {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual M2C_UNK m5();
};

extern "C" {

void try_open_battle_menu__15TWindowMainMenuFPvs(void *arg0, s16 arg1);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowMainMenu__sub_80263E40(void *, s16 *, s32 *);
M2C_UNK TWindowMainMenu__sub_80264674(void *, s16);
M2C_UNK TWindowSubEquip__sub_8026417C(void *, s16);
M2C_UNK reset_equip_slots__10TObjPlayerFPv(s32);

void try_open_battle_menu__15TWindowMainMenuFPvs(void *arg0, s16 arg1) {
    s32 spC;
    s16 sp8;
    s32 temp_r3;

    sp8 = arg1;
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x54));
    if ((temp_r3 != 0) && !(M2C_FIELD(arg0, s32 *, 0x4C) & 1) && (TWindowMainMenu__sub_80263E40(arg0, &sp8, &spC) != 0) && (spC != 0)) {
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C) | 1);
        M2C_FIELD(arg0, s32 *, 0x5C) = 0;
        TWindowMainMenu__sub_80264674(arg0, sp8);
        TWindowSubEquip__sub_8026417C(arg0, sp8);
        reset_equip_slots__10TObjPlayerFPv(temp_r3);
        ((V_A_80263b70 *) arg0)->m5();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80263C24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80263C24 { char pad[0x18]; };
struct VObj_80263C24 : Base_80263C24 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

extern "C" {

s32 close_active_submenu__15TWindowMainMenuFPv(void *arg0);
M2C_UNK TWindowMainMenu__sub_80263D7C(void *);
M2C_UNK TWindowMainMenu__sub_80263DBC(void *);
M2C_UNK destroy_submenu__15TWindowMainMenuFPv();
M2C_UNK close_submenu__15TWindowMainMenuFPvPv(void *, u32);

s32 close_active_submenu__15TWindowMainMenuFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C) & 0xFFFFFFFB);
    destroy_submenu__15TWindowMainMenuFPv();
    if ((u32) M2C_FIELD(arg0, u32 *, 0x5C) == 0U) {
        ((VObj_80263C24 *)arg0)->m6();
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x48) = 0x1F;
    TWindowMainMenu__sub_80263D7C(arg0);
    TWindowMainMenu__sub_80263DBC(arg0);
    close_submenu__15TWindowMainMenuFPvPv(arg0, M2C_FIELD(arg0, u32 *, 0x5C));
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80263CAC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_and_clear_flags__15TWindowMainMenuFPv(void *arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK destroy_submenu__15TWindowMainMenuFPv(void *);
M2C_UNK close__15TWindowMainMenuFPv(void *);
M2C_UNK close_child_window__15TWindowMainMenuFPv(void *, s32);
M2C_UNK init_parts__10TObjPlayerFPv();

void close_and_clear_flags__15TWindowMainMenuFPv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x4C);
    M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (temp_r4 & ~5);
    close_child_window__15TWindowMainMenuFPv(arg0, temp_r4);
    destroy_submenu__15TWindowMainMenuFPv(arg0);
    close__15TWindowMainMenuFPv(arg0);
    if (TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x54)) != 0U) {
        init_parts__10TObjPlayerFPv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80263D0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open__15TWindowMainMenuFPvi(void *arg0, s32 arg1);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK update_keyboard_card_state__15TWindowMainMenuFPv(void *, s32);
M2C_UNK TWindowMainMenu__sub_802646E4(void *, s32);
M2C_UNK reset_equip_slots__10TObjPlayerFPv(s32);

void open__15TWindowMainMenuFPvi(void *arg0, s32 arg1) {
    s32 temp_r3;
    s32 temp_r4;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x54));
    if (temp_r3 != 0) {
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x4C) | 1;
        M2C_FIELD(arg0, s32 *, 0x4C) = temp_r4;
        M2C_FIELD(arg0, s32 *, 0x5C) = arg1;
        M2C_FIELD(arg0, s16 *, 0x50) = 0;
        update_keyboard_card_state__15TWindowMainMenuFPv(arg0, temp_r4);
        TWindowMainMenu__sub_802646E4(arg0, M2C_FIELD(arg0, s32 *, 0x5C));
        reset_equip_slots__10TObjPlayerFPv(temp_r3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80263D94
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Elt80263D94_80263d94 { s16 f0; s16 f2; s32 f4; };

extern "C" {

void add_menu_entry__15TWindowMainMenuFPvs(u8 *arg0, s16 arg1);

void add_menu_entry__15TWindowMainMenuFPvs(u8 *arg0, s16 arg1) {
    struct Elt80263D94_80263d94 *arr = (struct Elt80263D94_80263d94 *)arg0;
    struct Elt80263D94_80263d94 *e = (struct Elt80263D94_80263d94 *)((char *)&arr[M2C_FIELD(arg0, s16 *, 0x50)] + 0x28);
    e->f0 = (s16) M2C_FIELD(arg0, s16 *, 0x52);
    e->f2 = arg1;
    e->f4 = (s32) M2C_FIELD(arg0, s32 *, 0x5C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80263DF4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_keyboard_card_state__15TWindowMainMenuFPv(void *arg0);
M2C_UNK TWindowMainMenu__sub_80263DBC(void *);
s32 test_keyboard_card_flag4(s32);

void update_keyboard_card_state__15TWindowMainMenuFPv(void *arg0) {
    if (test_keyboard_card_flag4(M2C_FIELD(arg0, s32 *, 0x54)) != 0) {
        M2C_FIELD(arg0, s16 *, 0x52) = 0;
        return;
    }
    TWindowMainMenu__sub_80263DBC(arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80263FE0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowMainMenu__sub_80263FE0(void *arg0);
M2C_UNK fn_80263A20(s32, s32);

void TWindowMainMenu__sub_80263FE0(void *arg0) {
    fn_80263A20(M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x54));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026400C
#include "types.h"

extern "C" {

void close_child_window__15TWindowMainMenuFPv(void* p);
int TWindow__close(void*);

void close_child_window__15TWindowMainMenuFPv(void* p) { if (*(unsigned int*)((char*)p + 0x24) != 0) { TWindow__close(*(void**)((char*)p + 0x24)); *(int*)((char*)p + 0x24) = 0; } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8026404C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_description_text__15TWindowMainMenuFPvi(void *arg0, s32 arg1);
M2C_UNK set_field_1c__6TLobbyFPvf(u32, f32);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, s32, M2C_UNK);
u32 TLobby__sub_80269CC0(u32, M2C_UNK *, M2C_UNK, s32);
u32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
s32 select_main_menu_item_10(s32);
M2C_UNK call_if_split_screen(u32, s32);

extern M2C_UNK lbl_8044F2E0[];
extern const f32 lbl_805DD13C;

void update_description_text__15TWindowMainMenuFPvi(void *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x48) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x48) = arg1;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) == 0U) {
            u32 tmp = TWindowSubComCard__sub_8026CBB8(0x1B);
            M2C_FIELD(arg0, u32 *, 0x24) = TLobby__sub_80269CC0(tmp, lbl_8044F2E0, 1, M2C_FIELD(arg0, s32 *, 0x54));
            set_field_1c__6TLobbyFPvf(M2C_FIELD(arg0, u32 *, 0x24), lbl_805DD13C);
            call_if_split_screen(M2C_FIELD(arg0, u32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x54));
        }
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x24), select_main_menu_item_10(arg1), 0x80);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802640E4
#include "types.h"

extern "C" {

void destroy_submenu__15TWindowMainMenuFPv(void* p);
int queue_destruction__7TObjectFv(void*);

void destroy_submenu__15TWindowMainMenuFPv(void* p) { if (*(unsigned int*)((char*)p + 0x20) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x20)); *(int*)((char*)p + 0x20) = 0; } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802644D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void show_child_window__15TWindowMainMenuFPv(void* p);
void update_trade_submenu__15TWindowMainMenuFPv(void* p);
void update_submenu__15TWindowMainMenuFPv(void *arg0);
void close_submenu__15TWindowMainMenuFPvPv(void* p, void* a1);
void refresh_submenu__15TWindowMainMenuFPvPv(void* p, void* a1);
int TWindowMainMenu__sub_802646E4(void* a0 = 0, void* a1 = 0);
int TWindowSubTradeMain__sub_80244A4C(void*);
int TWindow__close(void*);
void close__15TWindowMainMenuFPv(void* p);
int window_request_show(void*);
int TWindowMainMenu__sub_802AD90C(void*);
int TWindowMainMenu__sub_802AD980(void*);
int clear_menu_flags__15TWindowMainMenuFPv(void*);
int update_scaled_position__15TWindowMainMenuFi(void*);
s32 is_split_screen();

void show_child_window__15TWindowMainMenuFPv(void* p) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { window_request_show(*(void**)((char*)p + 0x1c)); update_scaled_position__15TWindowMainMenuFi(*(void**)((char*)p + 0x1c)); } }
void update_trade_submenu__15TWindowMainMenuFPv(void* p) { void* m = *(void**)((char*)p + 0x1c); if (m) TWindowSubTradeMain__sub_80244A4C(m); }
void update_submenu__15TWindowMainMenuFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
        TWindowMainMenu__sub_802AD980((void*)(M2C_FIELD(arg0, void **, 0x1C)));
        update_scaled_position__15TWindowMainMenuFi((void*)(M2C_FIELD(arg0, u32 *, 0x1C)));
    }
    if (is_split_screen() != 0) {
        update_trade_submenu__15TWindowMainMenuFPv((void*)((void*)(arg0)));
    }
}
void close_submenu__15TWindowMainMenuFPvPv(void* p, void* a1) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { TWindowMainMenu__sub_802AD90C(*(void**)((char*)p + 0x1c)); clear_menu_flags__15TWindowMainMenuFPv(*(void**)((char*)p + 0x1c)); TWindowMainMenu__sub_802646E4(p, a1); } }
void refresh_submenu__15TWindowMainMenuFPvPv(void* p, void* a1) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { TWindowMainMenu__sub_802AD980(*(void**)((char*)p + 0x1c)); clear_menu_flags__15TWindowMainMenuFPv(*(void**)((char*)p + 0x1c)); TWindowMainMenu__sub_802646E4(p, a1); } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80264634
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_split_screen();
int TWindow__close(void*);
int window_request_show(void*);
int TWindowMainMenu__sub_802AD90C(void*);
int TWindowMainMenu__sub_802AD980(void*);
int clear_menu_flags__15TWindowMainMenuFPv(void*);
int update_scaled_position__15TWindowMainMenuFi(void*);
int TWindowMainMenu__sub_802646E4(void* a0 = 0, void* a1 = 0);
void show_child_window__15TWindowMainMenuFPv(void* p);
void close_submenu__15TWindowMainMenuFPvPv(void* p, void* a1);
void refresh_submenu__15TWindowMainMenuFPvPv(void* p, void* a1);
void close__15TWindowMainMenuFPv(void* p);
void update_trade_submenu__15TWindowMainMenuFPv(void* p);
int TWindowSubTradeMain__sub_80244A4C(void*);

void close__15TWindowMainMenuFPv(void* p) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { TWindow__close(*(void**)((char*)p + 0x1c)); *(int*)((char*)p + 0x1c) = 0; } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802AD740
#include "types.h"

extern "C" {

int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*);
void set_symbol_chat_parts__15TWindowMainMenuFPv(void* p);
int is_item_active__15TWindowMainMenuFPv(void* p);
void TWindowMainMenu__sub_802AD74C(void* p);

int is_item_active__15TWindowMainMenuFPv(void* p) { return *(u8*)((char*)p + 0x13) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802AD74C
#include "types.h"

extern "C" {

int copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void*);
void set_symbol_chat_parts__15TWindowMainMenuFPv(void* p);
int is_item_active__15TWindowMainMenuFPv(void* p);
void TWindowMainMenu__sub_802AD74C(void* p);

void TWindowMainMenu__sub_802AD74C(void* p) { *(u8*)((char*)p + 0x13) |= 0x2; }
void set_symbol_chat_parts__15TWindowMainMenuFPv(void* p) { copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(p); *(unsigned char*)((char*)p + 0x14) = 8; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802ADB0C
#include "types.h"

extern "C" {

s32 is_item_active__15TWindowMainMenuFPv(s32);
void clear_menu_flags__15TWindowMainMenuFPv(void* p);
int is_flag_set__15TWindowMainMenuFPv(void* p);
int get_menu_flag__15TWindowMainMenuFPv(void* p);

void clear_menu_flags__15TWindowMainMenuFPv(void* p) { *(u8*)((char*)p + 0x60) &= 0xfc; }
int is_flag_set__15TWindowMainMenuFPv(void* p) { return (*(u8*)((char*)p + 0x60) >> 1) & 0x1; }
int get_menu_flag__15TWindowMainMenuFPv(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x802ADBAC
#include "types.h"

extern "C" {

s32 is_item_active__15TWindowMainMenuFPv(s32);
void clear_menu_flags__15TWindowMainMenuFPv(void* p);
int is_flag_set__15TWindowMainMenuFPv(void* p);
int get_menu_flag__15TWindowMainMenuFPv(void* p);

s32 find_free_slot__15TWindowMainMenuFi(s32 arg0) {
    s32 counter;
    s32 ptr;

    ptr = arg0 + 0x64;
    counter = 0;
loop_1:
    if (is_item_active__15TWindowMainMenuFPv(ptr) == 0) {
        return ptr;
    }
    counter += 1;
    ptr += 0x18;
    if (counter >= 8) {
        return 0;
    }
    goto loop_1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802ADC40
#include "types.h"

extern "C" {

s32 is_item_active__15TWindowMainMenuFPv(s32);
void clear_menu_flags__15TWindowMainMenuFPv(void* p);
int is_flag_set__15TWindowMainMenuFPv(void* p);
int get_menu_flag__15TWindowMainMenuFPv(void* p);

s32 count_active_items__15TWindowMainMenuFi(s32 arg0) {
    s32 counter;
    s32 ptr;

    ptr = arg0 + 0x64;
    counter = 0;
loop_1:
    if (is_item_active__15TWindowMainMenuFPv(ptr) == 0) {
        return counter;
    }
    counter += 1;
    ptr += 0x18;
    if (counter >= 8) {
        return 8;
    }
    goto loop_1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802ADDFC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_target_y__15TWindowMainMenuFPvf(void *arg0, f32 farg0);
void update_scaled_position__15TWindowMainMenuFi(s32 arg0);
s32 count_active_items__15TWindowMainMenuFi();
s32 is_not_split_screen__15TWindowMainMenuFv();

extern f32 lbl_805DE15C;
extern f32 lbl_805DE160;
extern f32 lbl_805DE164;

void set_target_y__15TWindowMainMenuFPvf(void *arg0, f32 farg0) {
    if (is_not_split_screen__15TWindowMainMenuFv() != 0) {
        farg0 += lbl_805DE15C;
    } else {
        farg0 += lbl_805DE160;
    }
    farg0 += lbl_805DE164;
    if (M2C_FIELD(arg0, f32 *, 0x3C) != farg0) {
        M2C_FIELD(arg0, f32 *, 0x3C) = farg0;
        M2C_FIELD(arg0, s32 *, 0x50) = 8;
    }
}

extern f32 lbl_805DE150;

void update_scaled_position__15TWindowMainMenuFi(s32 arg0) {
    set_target_y__15TWindowMainMenuFPvf((void *)(arg0), lbl_805DE150 * (f32) count_active_items__15TWindowMainMenuFi());
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802AE400
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowMainMenu__sub_802AE400(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void TWindowMainMenu__sub_802AE400(void *arg0) {
    TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802AE928
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_menu__15TWindowMainMenuFPvPv(void *arg0, void *arg1);
void *TWindowMenuMainMenu__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_menu__15TWindowMainMenuFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x144);
    if (o != NULL) {
        o = TWindowMenuMainMenu__ct(o, arg0, arg1);
    }
    return o;
}

}
#endif
#endif
