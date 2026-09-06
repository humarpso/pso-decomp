#include "pso/TEffClitical.h"

TEffClitical::~TEffClitical() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_80082688 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
f32 TEffStarLightChild__sub_80141FBC(void *, void *, void *, f32);
f32 TBoss6Kakusan__sub_803D8BD8(void *);
void TTecRaFoie__sub_80082688(u8 *arg0, u8 *arg1, f32 farg0);
}

extern "C" {

void TEffClitical__sub_80082674(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void *__ct__12TEffCliticalFv(void *arg0, void *arg1);
void create__12TEffCliticalFPv(void *arg0);
void __ct__7TEffectFv(void *);
void VecCopy__FP3VecPC3Vec(void *, void *);
void *__nw__7TObjectFUl(int);

extern M2C_UNK __vt__12TEffClitical[];
extern void *lbl_805D2904;
extern const f32 lbl_805D93B0;

void *__ct__12TEffCliticalFv(void *arg0, void *arg1) {
    __ct__7TEffectFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TEffClitical;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2904;
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 32), arg1);
    M2C_FIELD(arg0, u32 *, 0x70) = 0;
    M2C_FIELD(arg0, f32 *, 0x2C) = lbl_805D93B0;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_805D93B0;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805D93B0;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805D93B0;
    M2C_FIELD(arg0, f32 *, 0x3C) = lbl_805D93B0;
    M2C_FIELD(arg0, f32 *, 0x40) = lbl_805D93B0;
    M2C_FIELD(arg0, f32 *, 0x44) = lbl_805D93B0;
    M2C_FIELD(arg0, u32 *, 0x74) = 0;
    return arg0;
}

void create__12TEffCliticalFPv(void *arg0) {
    void *o;
    o = __nw__7TObjectFUl(0x78);
    if (o != NULL) {
        __ct__12TEffCliticalFv((void *)(o), (void *)(arg0));
    }
}

void TEffClitical__sub_80082674(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0) = arg2;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = arg4;
    M2C_FIELD(arg0, s32 *, 0xC) = arg3;
}
void TTecRaFoie__sub_80082688(u8 *arg0, u8 *arg1, f32 farg0) {
    Stack_80082688 stack;
    f32 temp_f1;
    stack.sp8 = M2C_FIELD(arg0, f32 *, 0) - M2C_FIELD(arg1, f32 *, 0);
    stack.spC = M2C_FIELD(arg0, f32 *, 4) - M2C_FIELD(arg1, f32 *, 4);
    stack.sp10 = M2C_FIELD(arg0, f32 *, 8) - M2C_FIELD(arg1, f32 *, 8);
    temp_f1 = TBoss6Kakusan__sub_803D8BD8(&stack.sp8);
    if (temp_f1 > farg0) {
        TEffStarLightChild__sub_80141FBC(arg0, arg1, arg0, temp_f1 * farg0);
    }
}

}
