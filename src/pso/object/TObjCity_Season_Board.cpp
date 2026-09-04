#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjCity_Season_Board__create(void *arg0);
void *dt__21TObjCity_Season_BoardFPvs(void *arg0, s16 arg1);
void *TObjCity_Season_Board__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern void *tl_05;

void *TObjCity_Season_Board__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x94);
    if (o != NULL) {
        o = TObjCity_Season_Board__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK lbl_804B5C90[];

void *dt__21TObjCity_Season_BoardFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5C90;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80183970
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjCity_Season_Board__sub_80183970(void *arg0);

void TObjCity_Season_Board__sub_80183970(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) + 2);
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x90);
    if (temp_r4 >= 0x100) {
        M2C_FIELD(arg0, s32 *, 0x90) = (s32) (temp_r4 - 0x100);
    }
}

}
#endif
#endif
