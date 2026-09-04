#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int run_task__16TObjMapForceWarpFv(void* p);
void render__16TObjMapForceWarpFv(void);
int TObjPlayer__sub_8019D250(void*);

void render__16TObjMapForceWarpFv(void) {  }
int run_task__16TObjMapForceWarpFv(void* p) { return TObjPlayer__sub_8019D250(p); }

}
#else
#if PSO_CLASS_PACKAGE == 0x8019B944
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjMapForceWarp__vt16(void *arg0, u16 arg1);
M2C_UNK fn_8019B8D8(void *, int);

s32 TObjMapForceWarp__vt16(void *arg0, u16 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xFC) != 0) {
        fn_8019B8D8(arg0, arg1);
    }
    return 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019BA58
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__16TObjMapForceWarpFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__11TObjMapWarpFv(void *, int);

extern M2C_UNK __vt__16TObjMapForceWarp[];

void *__dt__16TObjMapForceWarpFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjMapForceWarp;
        __dt__11TObjMapWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019BAB0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjMapForceWarp__ct(void *arg0);
M2C_UNK TObjMapWarp__ct();
M2C_UNK disallow_rendering__7TObjectFv(void *);
M2C_UNK set_flag_4__9TObjLukerFPv(u32);

extern M2C_UNK __vt__16TObjMapForceWarp[];
extern s32 lbl_805D3478;

void *TObjMapForceWarp__ct(void *arg0) {
    TObjMapWarp__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjMapForceWarp;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3478;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x8C) > 0) {
        M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xFC) = 1;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 0U) {
        disallow_rendering__7TObjectFv(M2C_FIELD(arg0, void **, 0xB4));
        set_flag_4__9TObjLukerFPv(M2C_FIELD(arg0, u32 *, 0xB4));
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019DC4C
#include "types.h"

extern "C" {

void register_warp__16TObjMapForceWarpFPv(void* a0);
int TObjFish__sub_8001EDC4(void*, void*);

    extern int lbl_805D5C78;
void register_warp__16TObjMapForceWarpFPv(void* a0) { TObjFish__sub_8001EDC4((void*)(lbl_805D5C78), a0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019DC74
#include "types.h"

extern "C" {

void TObjMapForceWarp__vt13(void);

void TObjMapForceWarp__vt13(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A2AA0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjMapForceWarp__create(void *arg0);
void *TObjMapForceWarp__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjMapForceWarp__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x100);
    if (o != NULL) {
        o = TObjMapForceWarp__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#endif
