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
int TWindowMainMenu__sub_802ADB0C(void*);
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
