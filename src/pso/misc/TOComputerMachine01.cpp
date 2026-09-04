#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__19TOComputerMachine01FPv(void *arg0);
void *TOComputerMachine01__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__19TOComputerMachine01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE8);
    if (o != NULL) {
        o = TOComputerMachine01__ct(o, arg0);
    }
    return o;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8015B2C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOComputerMachine01__vt8(s32 arg0, f32 farg0, f32 farg1);
f32 fn_8013157C(s32, s32);
s32 fn_801A2340(s32, f32, f32);

extern s32 lbl_805D4DF0;

s32 TOComputerMachine01__vt8(s32 arg0, f32 farg0, f32 farg1) {
    if (fn_8013157C(arg0 + 0x38, lbl_805D4DF0 + 0x178) < (farg1 * farg1)) {
        M2C_FIELD(arg0, s16 *, 0x1e) = 1;
        return M2C_FIELD(arg0, s16 *, 0x1e);
    }
    return fn_801A2340(arg0, farg0, farg1);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8015B5DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__19TOComputerMachine01Fv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK destroy_key_object__5TOKeyFPvs(void *, M2C_UNK);

extern M2C_UNK __vt__19TOComputerMachine01[];

void *__dt__19TOComputerMachine01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TOComputerMachine01;
        TObjEneGibbles__sub_80156720(arg0);
        TObjPlayer__sub_80154A00(arg0);
        destroy_key_object__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
