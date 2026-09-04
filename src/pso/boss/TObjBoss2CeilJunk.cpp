#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__17TObjBoss2CeilJunkFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK __vt__17TObjBoss2CeilJunk[];

void *__dt__17TObjBoss2CeilJunkFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjBoss2CeilJunk;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8003A81C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__17TObjBoss2CeilJunkFPv(void *arg0);
void TObjBoss2CeilJunk__sub_8003A868(void);
void *TObjBoss2CeilJunk__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__17TObjBoss2CeilJunkFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB8);
    if (o != NULL) {
        o = TObjBoss2CeilJunk__ct(o, tl_05, arg0);
    }
    return o;
}

    extern float lbl_805D4BE0;
    extern const float lbl_805D8258;
void TObjBoss2CeilJunk__sub_8003A868(void) { lbl_805D4BE0 = lbl_805D8258; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8003B07C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_particle__17TObjBoss2CeilJunkFv(void);
M2C_UNK create_particle_effect__15TObjBoss2TunnelFiif(f32);

extern const f32 lbl_805D85D8;

void create_particle__17TObjBoss2CeilJunkFv(void) {
    create_particle_effect__15TObjBoss2TunnelFiif(lbl_805D85D8);
}

}
#endif
#endif
