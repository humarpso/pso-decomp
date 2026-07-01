#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8031A494(void *);
s32 fn_8031A4D0();
extern const f32 lbl_805DF304;
extern const f32 lbl_805DF360;
extern const f32 lbl_805DF388;
extern const f32 lbl_805DF38C;

void TObjEneMe3SinowZoa__sub_8031AA20(void *arg0) {
    if (fn_8031A4D0() != 0) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x3C4) = fn_8031A494(arg0);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 1) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
    } else {
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) (lbl_805DF388 + M2C_FIELD(arg0, f32 *, 0x35C));
    M2C_FIELD(arg0, f32 *, 0x3EC) = (f32) (lbl_805DF360 + M2C_FIELD(arg0, f32 *, 0x358));
    M2C_FIELD(arg0, f32 *, 0x3F0) = (f32) (lbl_805DF38C + M2C_FIELD(arg0, f32 *, 0x364));
    M2C_FIELD(arg0, f32 *, 0x3F4) = (f32) (lbl_805DF304 + M2C_FIELD(arg0, f32 *, 0x360));
    M2C_FIELD(arg0, s32 *, 0x400) = (s32) M2C_FIELD(arg0, s32 *, 0x368);
}

}
