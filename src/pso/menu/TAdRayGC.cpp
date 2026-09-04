#ifndef PSO_CLASS_PACKAGE
#include "pso/TAdRayGC.h"

TAdRayGC::~TAdRayGC() {}
#else
#if PSO_CLASS_PACKAGE == 0x8029BF74
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__8TAdRayGCFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__8TAdRayGC[];
extern void *lbl_805D3D30;

void *__ct__8TAdRayGCFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TAdRayGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3D30;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0x20) = -1;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029BFC8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy_instance__8TAdRayGCFv(void);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D65C8;

void destroy_instance__8TAdRayGCFv(void) {
    if ((u32) lbl_805D65C8 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D65C8);
        lbl_805D65C8 = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029C054
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8029c054 { char pad[0x14]; };
struct VObj_8029c054 : Base_8029c054 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

extern "C" {

void TAdRayGC__sub_8029C054(u8 *arg0);
M2C_UNK set_cull_none__8TObjFishFv();

void TAdRayGC__sub_8029C054(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xD0) != 0) {
        ((VObj_8029c054*)(arg0 + 0xB4))->m7();
    }
    set_cull_none__8TObjFishFv();
}

}
#endif
#endif
