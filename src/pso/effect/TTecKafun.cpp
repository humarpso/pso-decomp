#ifndef PSO_CLASS_PACKAGE
#else
#if PSO_CLASS_PACKAGE == 0x802A9688
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__9TTecKafunFiiiiiiff(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1);
M2C_UNK TTecKafun__ct(u32, f32, f32, s32, s32, s32, s32, s32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);

void create__9TTecKafunFiiiiiiff(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0, f32 farg1) {
    u32 temp_r3 = __nw__7TObjectFUl(0x100);
    if (temp_r3 != 0U) {
        TTecKafun__ct(temp_r3, farg0, farg1, arg0, arg1, arg2, arg3, arg4, arg5);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A9710
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__9TTecKafunFiiiiiff(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0, f32 farg1);
M2C_UNK TTecKafun__sub_802A9948(void *, s32, s32, s32, s32, s32, f32, f32);
void *__nw__7TObjectFUl(M2C_UNK);

void create__9TTecKafunFiiiiiff(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0, f32 farg1) {
    void *ptr = __nw__7TObjectFUl(0x100);
    if (ptr != NULL) {
        TTecKafun__sub_802A9948(ptr, arg0, arg1, arg2, arg3, arg4, farg0, farg1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A9790
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__9TTecKafunFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_technique_base__9TTecLukerFPvs(void *, int);

extern M2C_UNK __vt__9TTecKafun[];

void *__dt__9TTecKafunFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TTecKafun;
        destroy_technique_base__9TTecLukerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802A97E8
#include "types.h"

extern "C" {

void render__9TTecKafunFv(void);

void render__9TTecKafunFv(void) {  }

}
#endif
#endif
