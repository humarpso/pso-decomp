#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_80165EE8___vt__16TODummyKeyCave01 { M2C_UNK value; u8 remaining[0x34]; };

extern "C" {
u8 * TPhotonMagicSquare__sub_801A2640(void *);
M2C_UNK fn_80165940(void *, f32);
extern M2C_UNK __vt__16TODummyKeyCave01[];
extern s32 lbl_805D2FA8;
extern const f32 lbl_805DB5E0;
extern const f32 lbl_805DB5E8;
u8 *TODummyKeyCave01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void TODummyKeyCave01__sub_80165E88(void);
void TODummyKeyCave01__sub_80165E8C(void);
void *__dt__16TODummyKeyCave01Fv(void *arg0, s16 arg1);
void *create__16TODummyKeyCave01FPv(void *arg0);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern void *tl_05;

void *create__16TODummyKeyCave01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        o = TODummyKeyCave01__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

void TODummyKeyCave01__sub_80165E88(void) {  }
void TODummyKeyCave01__sub_80165E8C(void) {  }

extern M2C_UNK __vt__16TODummyKeyCave01[];

void *__dt__16TODummyKeyCave01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TODummyKeyCave01;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TODummyKeyCave01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80165EE8___vt__16TODummyKeyCave01 *)&__vt__16TODummyKeyCave01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2FA8;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, f32 *, 0xA8) = (f32) lbl_805DB5E8;
    M2C_FIELD(arg0, f32 *, 0xA4) = (f32) lbl_805DB5E8;
    M2C_FIELD(arg0, f32 *, 0xA0) = (f32) lbl_805DB5E8;
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) lbl_805DB5E8;
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) lbl_805DB5E0;
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) lbl_805DB5E0;
    M2C_FIELD(arg0, f32 *, 0xAC) = (f32) lbl_805DB5E0;
    M2C_FIELD(arg0, s32 *, 0xB8) = 1;
    fn_80165940((void *) (arg0), (f32) (lbl_805DB5E8));
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    return arg0;
}

}
