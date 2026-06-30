#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8003B1FC(void *, s32);
void *TParticleCtrl__sub_800882C4(void *, s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 fn_80088670(s32);
void *__nw__7TObjectFUl(M2C_UNK);

}

struct Base_8003B0A0 { char pad[0x18]; };
struct VObj_8003B0A0 : Base_8003B0A0 {
    virtual void m0();
    virtual void m1();
};

extern "C" {

void fn_8003B0A0(s32 arg0, s32 arg1, s32 arg2) {
    void *var_r31;

    var_r31 = __nw__7TObjectFUl(0x78);
    if (var_r31 != NULL) {
        var_r31 = TParticleCtrl__sub_800882C4(var_r31, arg0, fn_80088670(arg1), 1, 0, 0, 1, 0x40);
    }
    if (var_r31 != NULL) {
        ((VObj_8003B0A0 *)var_r31)->m1();
        fn_8003B1FC(var_r31, arg2);
    }
}

}
