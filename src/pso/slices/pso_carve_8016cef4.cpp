#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_80154A00(void *);
void fn_80156720(void *);
void __dt__5TOKeyFv(void *, int);
void __dl__7TObjectFPv(void *);
extern M2C_UNK __vt__14TOKeyGenericSw[];

void *__dt__14TOKeyGenericSwFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOKeyGenericSw;
        fn_80154A00(arg0);
        fn_80156720(arg0);
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
