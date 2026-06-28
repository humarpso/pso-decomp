#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80142B08();
s32 fn_801D0BC0(void *, s32, s32);
void fn_801CD904(void);
int fn_801CD908(void* p);
int fn_801BA2F4(void*);

void fn_801CD864(void *arg0) {
    if (((s16) M2C_FIELD(arg0, s16 *, 0x328) == 5) && (fn_80142B08() != 0)) {
        fn_801D0BC0(arg0, 1, 0);
    }
}
void fn_801CD8B4(void *arg0) {
    if (((s16) M2C_FIELD(arg0, s16 *, 0x328) == 5) && (fn_80142B08() != 0)) {
        fn_801D0BC0(arg0, 1, 0);
    }
}
void fn_801CD904(void) {  }
int fn_801CD908(void* p) { return fn_801BA2F4(p); }

}
