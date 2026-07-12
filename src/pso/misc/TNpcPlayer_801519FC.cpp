#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_follow_target__10TNpcPlayerFPv(u8 *arg0);
M2C_UNK TNpcPlayer__sub_8014E090(void *, int);
s32 TNpcPlayer__sub_8014FF5C(void *);
s32 TNpcPlayer__sub_801500F4();
M2C_UNK TNpcPlayer__sub_801501A0(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

s32 update_follow_target__10TNpcPlayerFPv(u8 *arg0) {
    if (TNpcPlayer__sub_801500F4() != 0) {
        TNpcPlayer__sub_801501A0((void *) (arg0));
        if (TNpcPlayer__sub_8014FF5C((void *) (arg0)) != 0) {
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xAC), (void *) (arg0 + 0xD0));
            if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 2U) {
                TNpcPlayer__sub_8014E090((void *) (arg0), (int) (1));
            }
        } else {
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xAC), (void *) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s32 *, 0x94) + 0x38));
        }
        return 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x80) & 0x20) && ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 8U)) {
        TNpcPlayer__sub_8014E090((void *) (arg0), (int) (0));
    }
    return 0;
}

}
