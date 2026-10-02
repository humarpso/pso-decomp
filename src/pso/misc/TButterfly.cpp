#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8017E978 { char pad[0x18]; };
struct VObj_8017E978 : Base_8017E978 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual s32 m8(f32, f32); };

extern "C" {

void *__dt__10TButterflyFv(void *arg0, s16 arg1);
void init_motion__10TButterflyFPv(u8 *arg0);
void render__10TButterflyFv(void *arg0);
M2C_UNK TObjFish__sub_8001EDB0(s32, M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
M2C_UNK fn_8017E900(void *);
s32 rand();
M2C_UNK set_global_param__8TObjFishFi();

extern M2C_UNK lbl_80443970;
extern const f32 lbl_805DBAD8;
extern const f32 lbl_805DBADC;
extern const f32 lbl_805DBAE0;

void init_motion__10TButterflyFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x90, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) lbl_805DBAD8;
    M2C_FIELD(arg0, f32 *, 0xA0) = (f32) lbl_805DBAD8;
    M2C_FIELD(arg0, f32 *, 0xA4) = (f32) lbl_805DBAD8;
    M2C_FIELD(arg0, f32 *, 0xA8) = (f32) (lbl_805DBADC * (lbl_805DBAE0 * (f32) rand()));
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) lbl_805DBAD8;
    M2C_FIELD(arg0, s8 *, 0xB8) = 0;
    M2C_FIELD(arg0, s8 *, 0xB9) = 0;
    M2C_FIELD(arg0, s16 *, 0xB4) = 0x1E;
    M2C_FIELD(arg0, s16 *, 0xB6) = 0;
}

extern s32 lbl_805D5B10;
extern const f32 lbl_805DBAE4;
extern const f32 lbl_805DBAE8;

void render__10TButterflyFv(void *arg0) {
    if (((VObj_8017E978*)arg0)->m8(lbl_805DBAE4, lbl_805DBAE8) != 0) {
        TObjFish__sub_8001EDB0(lbl_805D5B10, 0);
        set_global_param__8TObjFishFi();
        fn_8017E900(arg0);
    }
}

extern M2C_UNK __vt__10TButterfly[];

void *__dt__10TButterflyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TButterfly;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
