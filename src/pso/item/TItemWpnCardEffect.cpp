#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *destroy__18TItemWpnCardEffectFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void TObjPlayer__sub_8032DFF8(void *);

extern M2C_UNK lbl_804EDD44[];

void *destroy__18TItemWpnCardEffectFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EDD44;
        TObjPlayer__sub_8032DFF8(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8032E588
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemWpnCardEffect__sub_8032E588(s32 arg0, s32 arg1, s32 arg2);
void* __nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_8032E34C(void*, s32, s32, s32, s32, s32);

extern s32 tl_05;

void TItemWpnCardEffect__sub_8032E588(s32 arg0, s32 arg1, s32 arg2) {
    void* obj = __nw__7TObjectFUl(0x70);
    if (obj != 0) {
        fn_8032E34C(obj, tl_05, arg1, arg2, 0xFFFF0000, arg0);
    }
}

}
#endif
#endif
