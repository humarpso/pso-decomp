#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_802BC6A8(void);
s32 VecCopy__FP3VecPC3Vec(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
void fn_802BD340(void);
s32 fn_802BD3C4(void* p);

void fn_802BD2A4(s32 arg0, s32 arg1) {
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x620, arg0);
}
void fn_802BD2D0(s32 arg0, s32 arg1, s32 arg2) {
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x5FC);
    VecCopy__FP3VecPC3Vec(arg2, arg0 + 0x5C0);
}
void fn_802BD314(s32 arg0, s32 arg1) {
    VecCopy__FP3VecPC3Vec(arg1, arg0 + 0x59C, arg0);
}
void fn_802BD340(void) {  }
void fn_802BD344(void *arg0, s32 arg1) {
    if ((arg1 > 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x418) == 0)) {
        fn_802BC6A8();
    }
}
int fn_802BD378(void) { return 0; }
s32 fn_802BD3C4(void* p) { return *(s32*)((char*)p + 0x418); }
int fn_802BD3CC(void) { return 0; }

}
