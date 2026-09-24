#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_802ADC04 { u8 pad[0x124]; void *items[8]; };

extern "C" {
s32 is_item_active__15TWindowMainMenuFPv(s32);
u8 *TWindowMainMenu__sub_802ADB34(s32 arg0, s32 arg1);
int TWindowMainMenu__sub_802ADC04(Obj_802ADC04 *self);
}

extern "C" {

s32 find_free_slot__15TWindowMainMenuFi(s32 arg0);
void clear_menu_flags__15TWindowMainMenuFPv(void* p);
int get_menu_flag__15TWindowMainMenuFPv(void* p);
int is_flag_set__15TWindowMainMenuFPv(void* p);
s32 is_item_active__15TWindowMainMenuFPv(s32);

#pragma push
#pragma fp_contract on
u8 *TWindowMainMenu__sub_802ADB34(s32 arg0, s32 arg1) {
    s32 var_r31;
    u8 *var_r30;
    s32 var_r29;
    var_r29 = arg1;
    if (var_r29 == 0x1B) {
        var_r29 = 0x1A;
    }
    var_r30 = (u8 *)(arg0 + 0x64);
    var_r31 = 0;
loop_3:
    if ((is_item_active__15TWindowMainMenuFPv((s32)((int) (var_r30))) != 0) && ((s8) M2C_FIELD(var_r30, u8 *, 0x11) == var_r29)) {
        return var_r30;
    }
    var_r31 += 1;
    var_r30 += 0x18;
    if (var_r31 >= 8) {
        return NULL;
    }
    goto loop_3;
}
#pragma pop

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
int TWindowMainMenu__sub_802ADC04(Obj_802ADC04 *self) {
    s32 i;
    for (i = 0; i < 8; i++) {
        if (self->items[i] == 0) return i;
    }
    return 8;
}

}
