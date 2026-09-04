#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TWindowMainMenu__sub_80264674(void);
int TWindowMainMenu__sub_802646E4(void*, void*);
void TWindowMainMenu__sub_80264A64(void);
void TWindowMainMenu__vt7(void);
void close__15TWindowMainMenuFPv(void* p);
void close_submenu__15TWindowMainMenuFPvPv(void* p, void* a1);
void refresh_submenu__15TWindowMainMenuFPvPv(void* p, void* a1);
void render__15TWindowMainMenuFv(void);
void run_task__15TWindowMainMenuFv(void);
void show_child_window__15TWindowMainMenuFPv(void* p);
int test_keyboard_card_flag4(void* p);
void update_submenu__15TWindowMainMenuFPv(void *arg0);
void update_trade_submenu__15TWindowMainMenuFPv(void* p);
int TWindowMainMenu__sub_802AD90C(void*);
int TWindowMainMenu__sub_802AD980(void*);
int TWindowSubTradeMain__sub_80244A4C(void*);
int TWindow__close(void*);
int clear_menu_flags__15TWindowMainMenuFPv(void*);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);
s8 get_mode__6TLobbyFPv();
s32 is_split_screen();
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);
int update_scaled_position__15TWindowMainMenuFi(void*);
int window_request_show(void*);

void show_child_window__15TWindowMainMenuFPv(void* p) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { window_request_show(*(void**)((char*)p + 0x1c)); update_scaled_position__15TWindowMainMenuFi(*(void**)((char*)p + 0x1c)); } }
void update_trade_submenu__15TWindowMainMenuFPv(void* p) { void* m = *(void**)((char*)p + 0x1c); if (m) TWindowSubTradeMain__sub_80244A4C(m); }
void update_submenu__15TWindowMainMenuFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
        TWindowMainMenu__sub_802AD980((void*)(M2C_FIELD(arg0, void **, 0x1C)));
        update_scaled_position__15TWindowMainMenuFi((void*)(M2C_FIELD(arg0, u32 *, 0x1C)));
    }
    if (is_split_screen() != 0) {
        update_trade_submenu__15TWindowMainMenuFPv((void*)((void*)((void*)(arg0))));
    }
}
void close_submenu__15TWindowMainMenuFPvPv(void* p, void* a1) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { TWindowMainMenu__sub_802AD90C(*(void**)((char*)p + 0x1c)); clear_menu_flags__15TWindowMainMenuFPv(*(void**)((char*)p + 0x1c)); TWindowMainMenu__sub_802646E4((void*)(p), (void*)(a1)); } }
void refresh_submenu__15TWindowMainMenuFPvPv(void* p, void* a1) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { TWindowMainMenu__sub_802AD980(*(void**)((char*)p + 0x1c)); clear_menu_flags__15TWindowMainMenuFPv(*(void**)((char*)p + 0x1c)); TWindowMainMenu__sub_802646E4((void*)(p), (void*)(a1)); } }

void close__15TWindowMainMenuFPv(void* p) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { TWindow__close(*(void**)((char*)p + 0x1c)); *(int*)((char*)p + 0x1c) = 0; } }

int TWindowMainMenu__sub_80264674(void) { return 0; }
int TWindowMainMenu__sub_802646E4(void*, void*) { return 0; }

void render__15TWindowMainMenuFv(void) {  }
void run_task__15TWindowMainMenuFv(void) {  }

void TWindowMainMenu__sub_80264A64(void) {  }
void TWindowMainMenu__vt7(void) {  }
int test_keyboard_card_flag4(void* p) { return test_card_flag__19TWindowKeyBoardHardFii(p, 4); }

}
