#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8007EE8C(void *, s32, s32, s8 *);
int sprintf(s8 *, const char *, ...);
extern const char lbl_80438AD8[];
extern const f32 lbl_805D92AC;

void draw_percent_text(void *arg0, f32 farg0, f32 farg1) {
    s8 sp8;
    s32 var_r5;

    if (M2C_FIELD(arg0, s32 *, 0x20) & 2) {
        sp8 = 0;
        var_r5 = (s32) (lbl_805D92AC * M2C_FIELD(arg0, f32 *, 0x1C));
        if (var_r5 < 0) {
            var_r5 = 0;
        } else if (var_r5 > 0x64) {
            var_r5 = 0x64;
        }
        sprintf(&sp8, lbl_80438AD8, var_r5);
        fn_8007EE8C(arg0, (s32) farg0, (s32) farg1, &sp8);
    }
}

}
