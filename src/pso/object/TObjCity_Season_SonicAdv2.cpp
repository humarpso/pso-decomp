#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjCity_Season_SonicAdv2__create(void *arg0);
void *dt__25TObjCity_Season_SonicAdv2FPvs(void *arg0, s16 arg1);
void *TObjCity_Season_SonicAdv2__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs(void *, int);

extern void *tl_05;

void *TObjCity_Season_SonicAdv2__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB4);
    if (o != NULL) {
        o = TObjCity_Season_SonicAdv2__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK lbl_804B5CC4[];

void *dt__25TObjCity_Season_SonicAdv2FPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5CC4;
        destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80183BFC
#include "types.h"

extern "C" {

void TObjCity_Season_SonicAdv2__sub_80183BFC(void* a0);
int TObjCity_Season_EasterEgg__sub_80184A08(void*, int, f32);
int TObjCity_Season_SonicAdv2__sub_80183C38(void);

    extern f32 lbl_805DBC5C;
void TObjCity_Season_SonicAdv2__sub_80183BFC(void* a0) { TObjCity_Season_EasterEgg__sub_80184A08(a0, TObjCity_Season_SonicAdv2__sub_80183C38(), lbl_805DBC5C); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80183C38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjCity_Season_SonicAdv2__sub_80183C38(void *arg0);

s32 TObjCity_Season_SonicAdv2__sub_80183C38(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x84) < 0) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x84) < 4) {
        return M2C_FIELD(arg0, s32 *, 0x84);
    }
    return 3;
}

}
#endif
#endif
