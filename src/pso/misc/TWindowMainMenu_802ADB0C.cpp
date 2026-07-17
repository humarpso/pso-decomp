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
