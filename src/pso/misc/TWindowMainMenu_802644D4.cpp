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
void TWindowMainMenu__sub_802645E4(void* p, void* a1);
int TWindowMainMenu__sub_802646E4(void* a0 = 0, void* a1 = 0);
int TWindowSubTradeMain__sub_80244A4C(void*);
int TWindow__close(void*);
void close__15TWindowMainMenuFPv(void* p);
int window_request_show(void*);
int TWindowMainMenu__sub_802AD90C(void*);
int TWindowMainMenu__sub_802AD980(void*);
int TWindowMainMenu__sub_802ADB0C(void*);
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
void close_submenu__15TWindowMainMenuFPvPv(void* p, void* a1) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { TWindowMainMenu__sub_802AD90C(*(void**)((char*)p + 0x1c)); TWindowMainMenu__sub_802ADB0C(*(void**)((char*)p + 0x1c)); TWindowMainMenu__sub_802646E4(p, a1); } }
void TWindowMainMenu__sub_802645E4(void* p, void* a1) { if (*(unsigned int*)((char*)p + 0x1c) != 0) { TWindowMainMenu__sub_802AD980(*(void**)((char*)p + 0x1c)); TWindowMainMenu__sub_802ADB0C(*(void**)((char*)p + 0x1c)); TWindowMainMenu__sub_802646E4(p, a1); } }

}
