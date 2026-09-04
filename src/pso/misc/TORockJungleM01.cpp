#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__15TORockJungleM01Fv(void* p);
void TORockJungleM01__vt16(s32 arg0);

int TObjPlayer__sub_800D7BB0(void*);
int update_break_state__18TORockCaveBrakableFPv(void*);

void run_task__15TORockJungleM01Fv(void* p) { TObjPlayer__sub_800D7BB0((char*)p + 0xbc); update_break_state__18TORockCaveBrakableFPv(p); }

M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);

void TORockJungleM01__vt16(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4BC19, arg0 + 0x38, 0, 0);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8029C4B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__15TORockJungleM01FPv(void *arg0);
void *__dt__15TORockJungleM01Fv(void *arg0, s16 arg1);
void *TORockJungleM01__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__18TORockCaveBrakableFv(void *, int);
void *__nw__7TObjectFUl(int);
void TObjPlayer__sub_800D7C58(void *, int);
void TObjPlayer__sub_80154A00(void *);
void TObjEneGibbles__sub_80156720(void *);
void queue_destruction__7TObjectFv(void *);

void *create__15TORockJungleM01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = TORockJungleM01__ct(o, arg0);
    }
    return o;
}

extern M2C_UNK __vt__15TORockJungleM01[];

void *__dt__15TORockJungleM01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TORockJungleM01;
        if (M2C_FIELD(arg0, void **, 0xDC) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xDC)); M2C_FIELD(arg0, M2C_UNK *, 0xDC) = 0; }
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        TObjPlayer__sub_800D7C58((s8 *)arg0 + 0xBC, -1);
        __dt__18TORockCaveBrakableFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8029C6BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base { char pad[0x14]; };
struct VObj : Base {
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

void TORockJungleM01__vt13(u8 *arg0);
M2C_UNK set_cull_none__8TObjFishFv();

void TORockJungleM01__vt13(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xD8) != 0) {
        ((VObj*)(arg0 + 0xBC))->m7();
    }
    set_cull_none__8TObjFishFv();
}

}
#endif
#endif
