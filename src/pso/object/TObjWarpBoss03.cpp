#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int run_task__14TObjWarpBoss03Fv(void* p);
void TObjWarpBoss03__vt18(void* p);
int TObjAreaWarp__sub_8019C924(void*);
int TObjAreaWarp__sub_8019CAB0(void*);
int fn_8019F9E4(void*);

void TObjWarpBoss03__vt18(void* p) { TObjAreaWarp__sub_8019C924(p); fn_8019F9E4(p); }
int run_task__14TObjWarpBoss03Fv(void* p) { return TObjAreaWarp__sub_8019CAB0(p); }

}
#else
#if PSO_CLASS_PACKAGE == 0x8019FA9C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__14TObjWarpBoss03Fv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);

extern M2C_UNK __vt__14TObjWarpBoss03[];

void *__dt__14TObjWarpBoss03Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjWarpBoss03;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8019FAF4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjWarpBoss03__ct(void *arg0);
void TObjAreaWarp__ct(void *);

extern const f32 lbl_805DC034;
extern M2C_UNK __vt__14TObjWarpBoss03[];
extern void *lbl_805D3490;

void *TObjWarpBoss03__ct(void *arg0) {
    TObjAreaWarp__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjWarpBoss03;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3490;
    M2C_FIELD(arg0, f32 *, 0xAC) = lbl_805DC034;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A2AEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__14TObjWarpBoss03FPv(void *arg0);
void *TObjWarpBoss03__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__14TObjWarpBoss03FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC4);
    if (o != NULL) {
        o = TObjWarpBoss03__ct(o, tl_05, arg0);
    }
    return o;
}

}
#endif
#endif
