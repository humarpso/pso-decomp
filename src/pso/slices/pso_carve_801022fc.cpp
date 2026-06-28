#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8010319C(s32);
s32 fn_801B4A18(void *, s32);
void fn_80102420(void);

int fn_801022FC(void) { return 0; }
void fn_801023A8(void *arg0) {
    s16 temp_r3;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x60);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (temp_r4 + 0x200);
    if (fn_8010319C((s32) arg0) != 0) {
        temp_r3 = M2C_FIELD(arg0, s16 *, 0xE6);
        if (temp_r3 == 0x384) {
            M2C_FIELD(arg0, u16 *, 0x94) = 0xFFFF;
            M2C_FIELD(arg0, s16 *, 0xE6) = 0;
        } else {
            M2C_FIELD(arg0, s16 *, 0xE6) = (s16) (temp_r3 + 1);
        }
    }
    fn_801B4A18(arg0, -1);
}
void fn_80102420(void) {  }

}
