#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__17TObjEneMe3ShinowaFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEneDDFv(void *, int);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void TObjEneGibbles__sub_80156720(void *);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__17TObjEneMe3Shinowa[];

void *__dt__17TObjEneMe3ShinowaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneMe3Shinowa;
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3E4));
        M2C_FIELD(arg0, M2C_UNK *, 0x3E4) = 0;
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3E0));
        M2C_FIELD(arg0, M2C_UNK *, 0x3E0) = 0;
        if (M2C_FIELD(arg0, void **, 0x424) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x424)); M2C_FIELD(arg0, M2C_UNK *, 0x424) = 0; }
        if (M2C_FIELD(arg0, void **, 0x428) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x428)); M2C_FIELD(arg0, M2C_UNK *, 0x428) = 0; }
        TObjEneGibbles__sub_80156720(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x3E8, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x800E71A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneMe3Shinowa__sub_800E71A8(void);
void dispatch_if_active__17TObjEneMe3ShinowaFPv(u8 *arg0);
s32 update_effect__17TObjEneMe3ShinowaFPv(u8 *arg0);

void TObjEneMe3Shinowa__sub_800E71A8(void) {  }

struct E71ACBase_800e71ac { char pad[0x14]; };
struct E71ACObj_800e71ac : E71ACBase_800e71ac {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

void dispatch_if_active__17TObjEneMe3ShinowaFPv(u8 *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 == 1) || (temp_r0 == 9) || (M2C_FIELD(arg0, s32 *, 0x3C4) & 0x80000)) {
        ((E71ACObj_800e71ac*)(arg0 + 0x3E8))->m7();
    }
}

struct E71FCBase_800e71fc { char pad[0x14]; };
struct E71FCObj_800e71fc : E71FCBase_800e71fc {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

s32 update_effect__17TObjEneMe3ShinowaFPv(u8 *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 == 1) || (temp_r0 == 9) || (M2C_FIELD(arg0, s32 *, 0x3C4) & 0x80000)) {
        ((E71FCObj_800e71fc*)(arg0 + 0x3E8))->m6();
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E7288
#include "types.h"

extern "C" {

void TObjEneMe3Shinowa__vt105(void);

void TObjEneMe3Shinowa__vt105(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E7650
#include "types.h"

extern "C" {

int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneMe3Shinowa__vt61(void* p);
int VecCopy__FP3VecPC3Vec(void*, void*);
void fn_800E762C(void);
void TObjEneMe3Shinowa__sub_800E767C(void);
void TObjEneMe3Shinowa__sub_800E7720(void);

void copy_position_vector__17TObjEneMe3ShinowaFPv(void* p) { VecCopy__FP3VecPC3Vec((char*)p + 0x74, (char*)p + 0x2fc); }
void TObjEneMe3Shinowa__sub_800E767C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E76F0
#include "types.h"

extern "C" {

int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneMe3Shinowa__vt61(void* p);
int VecCopy__FP3VecPC3Vec(void*, void*);
void fn_800E762C(void);
void TObjEneMe3Shinowa__sub_800E767C(void);
void TObjEneMe3Shinowa__sub_800E7720(void);

void TObjEneMe3Shinowa__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 13) { TObjEneDD__sub_800BBA18(p, (void*)13); } }
void TObjEneMe3Shinowa__sub_800E7720(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800E7A24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneMe3Shinowa__ct(void *arg0);
void init_object__9TObjEneDDFPv(void *);
void init_common__18TObjEneMe3SinowZoaFPv(void *);

extern M2C_UNK __vt__17TObjEneMe3Shinowa[];
extern void *lbl_805D2AC8;

void *TObjEneMe3Shinowa__ct(void *arg0) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneMe3Shinowa;
    init_common__18TObjEneMe3SinowZoaFPv((void *)((char *)arg0 + 1000));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2AC8;
    return arg0;
}

}
#endif
#endif
