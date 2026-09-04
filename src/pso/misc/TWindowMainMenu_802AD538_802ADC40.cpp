#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 count_active_items__15TWindowMainMenuFi(s32 arg0);
s32 is_not_split_screen__15TWindowMainMenuFv(void);
s32 update_if_active__15TWindowMainMenuFv(void);
M2C_UNK TWindowMainMenu__sub_802AD74C();
s32 TWindowMainMenu__sub_802ADD38();
void clear_menu_flags__15TWindowMainMenuFPv(void* p);
int get_menu_flag__15TWindowMainMenuFPv(void* p);
int is_flag_set__15TWindowMainMenuFPv(void* p);
s32 is_item_active__15TWindowMainMenuFPv(s32);
s32 is_split_screen();

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

s32 is_not_split_screen__15TWindowMainMenuFv(void) {
    return (u32)__cntlzw(is_split_screen()) >> 5;
}

s32 update_if_active__15TWindowMainMenuFv(void) {
    s32 temp_r3;

    temp_r3 = TWindowMainMenu__sub_802ADD38();
    if (temp_r3 != 0) {
        TWindowMainMenu__sub_802AD74C();
    }
    return temp_r3;
}

}
