#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__16TORockCaveSimpleFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__10TORockCaveFv(void *, int);

extern M2C_UNK __vt__16TORockCaveSimple[];

void *__dt__16TORockCaveSimpleFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TORockCaveSimple;
        __dt__10TORockCaveFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x80175024
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base1_80175024 { char pad[0x18]; };
struct VObj1_80175024 : Base1_80175024 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void play_trigger_effect__16TORockCaveSimpleFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

void play_trigger_effect__16TORockCaveSimpleFPv(u8 *arg0) {
    VObj1_80175024 *self = (VObj1_80175024 *)arg0;
    if (self->m8(M2C_FIELD(arg0, f32 *, 0xAC), M2C_FIELD(arg0, f32 *, 0xB0)) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjBoss2Tunnel__sub_803DB470(M2C_FIELD(arg0, s32 *, 0x34));
        TObjPlayer__sub_803D9B78();
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801750F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TORockCaveSimple__ct(void *arg0);
void TORockCave__ct(void *);

extern M2C_UNK __vt__16TORockCaveSimple[];
extern void *lbl_805D30FC;

void *TORockCaveSimple__ct(void *arg0) {
    TORockCave__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TORockCaveSimple;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D30FC;
    return arg0;
}

}
#endif
#endif
