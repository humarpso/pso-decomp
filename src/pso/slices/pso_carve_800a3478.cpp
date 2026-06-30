#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK fn_80156720(void *);
M2C_UNK fn_80156990(void *, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
extern M2C_UNK lbl_804909C4[];

void *fn_800A3478(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804909C4;
        fn_80156720(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0xD0) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD0));
        }
        fn_80156990(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
