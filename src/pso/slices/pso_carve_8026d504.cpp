#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_8026D564(void *arg0, s32 arg1);
M2C_UNK fn_80287580(s32, s32, M2C_UNK, f32);
int fn_8024664C(void*);
int fn_80257C28(void*, void*);
int fn_8026D504(void* p);
int fn_80223B88(void*, int);

int fn_8026D504(void* p) { return fn_80223B88(p, 0); }
int fn_8026D528(void) { return 0; }
void fn_8026D564(void *arg0, s32 arg1) {
    fn_80287580(arg1, arg1 + 0x10, 3, M2C_FIELD(arg0, f32 *, 0x60));
}
int fn_8026D594(void) { return 0; }
void TWindowRoom__vt1(void* p) { fn_8024664C(p); fn_80257C28(p, (char*)p + 0x24); }

}
