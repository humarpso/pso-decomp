#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_80203470 {
    s32 sp8;
    u8 trailing_storage[0x8];
};

extern "C" {
s32 get_floor_map_selection(void *, void *);
extern s32 lbl_805D5FC0;
extern s32 lbl_805D5FC4;
void set_current_floor_area(s32 arg0);
extern s32 lbl_8044A814[];
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 is_boss_area(void);
}

extern "C" {

s32 is_boss_area(void) {
    s32 state = get_global_state__14TOKeyMachine01Fv();
    s32 i = 0;
    while (lbl_8044A814[i] != -1) {
        if (state == lbl_8044A814[i++]) return 1;
    }
    return 0;
}

void set_current_floor_area(s32 arg0) {
    Stack_80203470 stack;
    lbl_805D5FC0 = arg0;
    if (get_floor_map_selection((void *) (arg0), (void *) (&stack.sp8)) == 1) {
        lbl_805D5FC4 = stack.sp8;
    }
}

}
