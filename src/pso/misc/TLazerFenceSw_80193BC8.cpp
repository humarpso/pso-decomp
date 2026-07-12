#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__13TLazerFenceSwFv(u8 *arg0);
M2C_UNK fn_80156CA0(void *);
M2C_UNK TOKey__sub_8016AAE0(void *);

extern const f32 lbl_805DBE88;

void run_task__13TLazerFenceSwFv(u8 *arg0) {
    fn_80156CA0(arg0 + 0xF0);
    TOKey__sub_8016AAE0(arg0);
    M2C_FIELD(arg0, f32 *, 0x110) = (f32) (M2C_FIELD(arg0, f32 *, 0x110) + lbl_805DBE88);
}

}
