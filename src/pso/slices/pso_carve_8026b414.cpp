#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
s32 fn_80132E58(s8);
M2C_UNK fn_8023F160();
M2C_UNK fn_8023F18C();
M2C_UNK fn_80244B1C(u32);
u32 fn_8026BB68(void *);

s32 TWindowOptionCtrl__sub_8026B414(void *arg0, s32 arg1) {
    if (fn_80132E58((s8) arg1) != 0) {
        fn_8023F160();
        fn_8023F18C();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x28));
            M2C_FIELD(arg0, u32 *, 0x28) = 0U;
        }
        M2C_FIELD(arg0, u32 *, 0x28) = fn_8026BB68(arg0);
        fn_80244B1C(M2C_FIELD(arg0, u32 *, 0x28));
        return 1;
    }
    return 0;
}

}
