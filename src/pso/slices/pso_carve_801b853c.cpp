#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80011138(s32, s32);
s32 obj_getField1c(s32);
s32 TItem__sub_80101ED4(void *, s32);
s32 fn_8010ED0C(void *);
s32 TObjPlayer__sub_801B90C0();
int fn_801B853C(void* p);
int TObjPlayer__sub_801B8DE8(void*);

int fn_801B853C(void* p) { return TObjPlayer__sub_801B8DE8(p); }
int fn_801B855C(void) { return 0; }
s32 fn_801B85CC(s32 arg0, void *arg1) {
    if (TObjPlayer__sub_801B90C0() == 0) {
        return 1;
    }
    if (fn_80011138(arg0, M2C_FIELD(arg1, s32 *, 0x10) * fn_8010ED0C(arg1)) != 0) {
        TItem__sub_80101ED4(arg1, obj_getField1c(arg0));
        return 0;
    }
    return 2;
}

}
