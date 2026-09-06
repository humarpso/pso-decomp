#include <dolphin/mtx.h>
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u32 TObjEneDellBiter__sub_80087350(void *, int);
s32 set_flags__11TBoss4Type2FPvUi(int, int);
extern const f32 lbl_805D8A90;
void fn_80050E64(M2C_UNK arg0, s32 arg1);
}

extern "C" {

void fn_80050E64(M2C_UNK arg0, s32 arg1) {
    Vec position;
    u32 temp_r3;
    VecCopy__FP3VecPC3Vec((void *) (&position.x), (void *) (arg1));
    position.y += lbl_805D8A90;
    temp_r3 = TObjEneDellBiter__sub_80087350((void *) (&position.x), (int) (0xF3));
    if (temp_r3 != 0U) {
        set_flags__11TBoss4Type2FPvUi((int) (temp_r3), (int) (0x40));
    }
}

}
