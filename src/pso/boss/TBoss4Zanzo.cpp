#ifndef PSO_CLASS_PACKAGE
#include "pso/TBoss4Zanzo.h"

TBoss4Zanzo::~TBoss4Zanzo() {}
#else
#if PSO_CLASS_PACKAGE == 0x80055780
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__11TBoss4ZanzoFv(void *arg0);
M2C_UNK queue_destruction__7TObjectFv();

void run_task__11TBoss4ZanzoFv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x48) + 1;
    M2C_FIELD(arg0, s32 *, 0x48) = temp_r4;
    if (temp_r4 >= (s32) M2C_FIELD(arg0, s32 *, 0x44)) {
        queue_destruction__7TObjectFv();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80055810
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__11TBoss4ZanzoFv(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);
void fn_8005586C(void *, void *);

extern M2C_UNK __vt__11TBoss4Zanzo[];
extern void *lbl_805D27DC;

void *__ct__11TBoss4ZanzoFv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TBoss4Zanzo;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D27DC;
    fn_8005586C((void *)((char *)arg0 + 28), arg2);
    M2C_FIELD(arg0, u32 *, 0x48) = 0;
    return arg0;
}

}
#endif
#endif
