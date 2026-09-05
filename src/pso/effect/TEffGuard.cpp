#include "pso/TEffGuard.h"

void TEffGuard::run_task() {}

TEffGuard::~TEffGuard() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
void run_task__9TEffGuardFv(u8 *arg0);
}

extern "C" {

void *TEffGuard__ct(void *arg0, void *arg1);
void create__9TEffGuardFi(s32 arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
void TEffect__ct(void *);
void VecCopy__FP3VecPC3Vec(void *, void *);
u32 __nw__7TObjectFUl(M2C_UNK);

extern M2C_UNK __vt__9TEffGuard[];
extern void *lbl_805D2918;

void run_task__9TEffGuardFv(u8 *arg0) {
    s32 temp_r0;
    s32 var_r31;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x70);
    switch (temp_r0) {
    case 0:
        var_r31 = 0;
        M2C_FIELD(arg0, s32 *, 0x70) = 1;
        do {
            TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x20), (int) (var_r31));
            var_r31 += 1;
        } while (var_r31 < 4);
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x68) > 0x3C) {
            queue_destruction__7TObjectFv((void *)(arg0));
        }
        return;
    }
}

void *TEffGuard__ct(void *arg0, void *arg1) {
    TEffect__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TEffGuard;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2918;
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 32), arg1);
    M2C_FIELD(arg0, u32 *, 0x70) = 0;
    return arg0;
}

void create__9TEffGuardFi(s32 arg0) {
    u32 tmp;

    tmp = __nw__7TObjectFUl(0x74);
    if (tmp != 0U) {
        TEffGuard__ct((void *)(tmp), (void *)(arg0));
    }
    TBoss3Volopt__sub_8022675C(0x4001AA00, arg0, 0, 0);
}

}
