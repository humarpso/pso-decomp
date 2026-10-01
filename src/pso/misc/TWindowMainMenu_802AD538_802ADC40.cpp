#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Menu_802ADD38 {
    u8 pad[0x60];
    u8 flags;
    s8 cur;
    s16 count;
    u8 pad2[0x124 - 0x64];
    s32 slots[8];
};

extern "C" {
void set_symbol_chat_parts__15TWindowMainMenuFPv(void* p, void * _w1);
M2C_UNK TWindowMainMenu__sub_802AD790(s32, void *, s8, s8);
s32 TWindowMainMenu__sub_802ADB34(void *, s32);
s32 find_free_slot__15TWindowMainMenuFi(void *);
s32 TWindowMainMenu__sub_802ADC04();
M2C_UNK TWindowMainMenu__sub_802ADC98(void *, void *, s32);
s32 TWindowMainMenu__sub_802ADD38(Menu_802ADD38 *arg0, s32 arg1);
}

extern "C" {

s32 count_active_items__15TWindowMainMenuFi(s32 arg0);
s32 is_not_split_screen__15TWindowMainMenuFv(void);
s32 update_if_active__15TWindowMainMenuFv(Menu_802ADD38 * _w0, s32 _w1);
M2C_UNK TWindowMainMenu__sub_802AD74C();
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

s32 update_if_active__15TWindowMainMenuFv(Menu_802ADD38 * _w0, s32 _w1) {
    s32 temp_r3;

    temp_r3 = TWindowMainMenu__sub_802ADD38((Menu_802ADD38 *)(_w0), (s32)(_w1));
    if (temp_r3 != 0) {
        TWindowMainMenu__sub_802AD74C();
    }
    return temp_r3;
}
s32 TWindowMainMenu__sub_802ADD38(Menu_802ADD38 *arg0, s32 arg1) {
    u8 sp8[8];
    s32 n;
    s32 slot;
    n = TWindowMainMenu__sub_802ADC04();
    if (n >= 8) {
        return 0;
    }
    TWindowMainMenu__sub_802ADC98(arg0, sp8, n + arg0->count);
    slot = TWindowMainMenu__sub_802ADB34(arg0, arg1);
    if (slot == 0) {
        slot = find_free_slot__15TWindowMainMenuFi(arg0);
        if (slot == 0) {
            return 0;
        }
        TWindowMainMenu__sub_802AD790(slot, sp8, arg1, -(n * 2));
    } else {
        set_symbol_chat_parts__15TWindowMainMenuFPv((void *)slot, sp8);
    }
    arg0->slots[n] = slot;
    arg0->flags &= ~4;
    return slot;
}

}
