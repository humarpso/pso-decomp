#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__9TTecZaruaFv(void);
void create_instance__9TTecZaruaFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TTecZarua__sub_8023C420(u32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0, s32 a4 = 0);
u32 __nw__7TObjectFUl(s32 a0 = 0);

void create_instance__9TTecZaruaFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    obj = __nw__7TObjectFUl(0x14C);
    if (obj != 0U) {
        TTecZarua__sub_8023C420(obj, arg0, arg1, arg2, arg3);
    }
}
void render__9TTecZaruaFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8023C07C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_range__9TTecZaruaFPv(u8 *arg0);
M2C_UNK TTecAnti__sub_8022B35C(void *, s32);
s32 TTecCtrl__sub_8022DBC4(M2C_UNK, s16, M2C_UNK);

extern const f64 lbl_8044DC98;

void calc_range__9TTecZaruaFPv(u8 *arg0) {
    s32 ret;
    struct { s32 v; } tmp;

    ret = TTecCtrl__sub_8022DBC4(0xC, M2C_FIELD(arg0, s16 *, 0x78), 0xFFFF);
    tmp.v = ret;
    TTecAnti__sub_8022B35C(arg0 + 0x88, tmp.v);
    M2C_FIELD(arg0, f32 *, 0x88) = (f32) (M2C_FIELD(arg0, s16 *, 0xAC) * M2C_FIELD(arg0, s16 *, 0x78));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023C278
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__9TTecZaruaFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_technique_base__9TTecLukerFPvs(void *, int);

extern M2C_UNK __vt__9TTecZarua[];

void *__dt__9TTecZaruaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TTecZarua;
        destroy_technique_base__9TTecLukerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
