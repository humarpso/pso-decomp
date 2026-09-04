#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void run_task__18TObjLaboDesignBaseFv(void);

void run_task__18TObjLaboDesignBaseFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x80364C98
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create_instance__18TObjLaboDesignBaseFPv(void *arg0);
void *TObjLaboDesignBase__ct(void *, void *, void *, int);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create_instance__18TObjLaboDesignBaseFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TObjLaboDesignBase__ct(o, tl_05, arg0, 5);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80364D38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjLaboDesignBase__sub_80364D38(void *arg0);
void *TObjLaboDesignBase__ct(void *, void *, void *, int);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjLaboDesignBase__sub_80364D38(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TObjLaboDesignBase__ct(o, tl_05, arg0, 3);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80364DD8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *alloc_and_construct__18TObjLaboDesignBaseFPv(void *arg0);
void *TObjLaboDesignBase__ct(void *, void *, void *, int);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *alloc_and_construct__18TObjLaboDesignBaseFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TObjLaboDesignBase__ct(o, tl_05, arg0, 1);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80364E28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjLaboDesignBase__create(void *arg0);
void *TObjLaboDesignBase__ct(void *, void *, void *, int);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjLaboDesignBase__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC0);
    if (o != NULL) {
        o = TObjLaboDesignBase__ct(o, tl_05, arg0, 0);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80364FD0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__18TObjLaboDesignBaseFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjFish__sub_8001EDB0(int, int);
s32 TObjFish__sub_8001EDC4(int, int);
M2C_UNK set_global_param__8TObjFishFi();
M2C_UNK TObjLaboDesignBase__sub_80364F18(void *, int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK end_effect_render__13TParticleCtrlFv();

void render__18TObjLaboDesignBaseFPv(u8 *arg0) {
    TObjFish__sub_8001EDB0((int) (M2C_FIELD(arg0, s32 *, 0xAC)), (int) (0));
    set_global_param__8TObjFishFi();
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    TObjLaboDesignBase__sub_80364F18((void *) (arg0), (int) (TObjFish__sub_8001EDC4((int) (M2C_FIELD(arg0, s32 *, 0xAC)), (int) (0))));
    TObjPlayer__sub_803D9B78();
    end_effect_render__13TParticleCtrlFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036518C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__18TObjLaboDesignBaseFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__18TObjLaboDesignBase[];

void *__dt__18TObjLaboDesignBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjLaboDesignBase;
        if (M2C_FIELD(arg0, void **, 0xBC) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xBC)); M2C_FIELD(arg0, M2C_UNK *, 0xBC) = 0; }
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
