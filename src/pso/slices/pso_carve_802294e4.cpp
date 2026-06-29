#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8022988C(void *);
M2C_UNK render_clipout_and_fade__9TMainTaskFv();
M2C_UNK empty_func__7TObjectFv(void *);
M2C_UNK fn_803384D4();

void render_screen_overlay__9TMainTaskFv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1C) & 0x100) {
        render_clipout_and_fade__9TMainTaskFv();
        empty_func__7TObjectFv(arg0);
        fn_8022988C(arg0);
        fn_803384D4();
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) & 0xFFFFFE7F);
}

}
