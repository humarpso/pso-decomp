#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowRoom__vt1(void* p);
int fn_8026D504(void* p);
void fn_8026D528(void *arg0, s32 arg1);
void fn_8026D564(void *arg0, s32 arg1);
void fn_8026D594(s32 arg0);
int TWindowSubStatusDisp__sub_80223B88(void*, int);
s32 TWindowSubStatusDisp__sub_8025AC50(s32, s32, s32);
s32 fn_80244CF4();
int fn_8024664C(void*);
s32 fn_80257BC0(s32, s32, s32);
int fn_80257C28(void*, void*);
M2C_UNK fn_80287580(s32, s32, M2C_UNK, f32);

int fn_8026D504(void* p) { return TWindowSubStatusDisp__sub_80223B88(p, 0); }
void fn_8026D528(void *arg0, s32 arg1) {
    TWindowSubStatusDisp__sub_8025AC50(TWindowSubStatusDisp__sub_80223B88((void*)(arg0), 0), arg1, 0x60);
}
void fn_8026D564(void *arg0, s32 arg1) {
    fn_80287580(arg1, arg1 + 0x10, 3, M2C_FIELD(arg0, f32 *, 0x60));
}
void fn_8026D594(s32 arg0) {
    s32 temp_r3;

    temp_r3 = fn_80244CF4();
    fn_8026D564((void *)(arg0), temp_r3);
    fn_80257BC0(arg0, arg0 + 0x24, temp_r3);
}
void TWindowRoom__vt1(void* p) { fn_8024664C(p); fn_80257C28(p, (char*)p + 0x24); }

}
