#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 setup_window_draw_context(void *, void *);
M2C_UNK draw_visible_window_entries(void *, void *, int);
void draw_window_frame(void *arg0, s32 arg1);
extern M2C_UNK __vt__15TWindowQuantity[];
void fn_80246CE8(s32 arg0);
}

extern "C" {

void fn_80246CE8(s32 arg0) {
    s32 temp_r3;
    temp_r3 = setup_window_draw_context((void *)(arg0), (void *) (arg0 + 0x60));
    draw_window_frame((void *)((void *) (arg0)), (s32)((int) (temp_r3)));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
}

}
