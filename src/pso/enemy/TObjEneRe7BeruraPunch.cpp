#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjEneRe7BeruraPunch__sub_800962F4(void* p);

void TObjEneRe7BeruraPunch__sub_800962F4(void* p) { *(s32*)((char*)p + 0xb4) = 0; }

}
#else
#if PSO_CLASS_PACKAGE == 0x80095E18
#include "types.h"

extern "C" {

int is_patrol_active__21TObjEneRe7BeruraPunchFPv(void* p);

int is_patrol_active__21TObjEneRe7BeruraPunchFPv(void* p) { return (*(u32*)((char*)p + 0xb0) >> 2) & 0x1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80095E24
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRe7BeruraPunch__vt20(void *arg0, s32 arg1);
M2C_UNK TObjEneDD__sub_800BA438(s32, s32);
s32 TObjEneDD__sub_800BA828();
s32 TPhotonMylla__sub_80154CB4(u16);
f32 calc_boss4_scale__10TObjPlayerFi();
s32 check_v2_mode__9TObjEneDDFv();
M2C_UNK apply_hit_if_active__10TObjPlayerFPvPvPv();

M2C_UNK obj_getField1c(s32);
extern f32 lbl_805D9790;

void TObjEneRe7BeruraPunch__vt20(void *arg0, s32 arg1) {
    s32 temp_r3;

    apply_hit_if_active__10TObjPlayerFPvPvPv();
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        obj_getField1c(arg1);
        if (TObjEneDD__sub_800BA828() != 0) {
            temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0xB0));
            if ((temp_r3 != 0) && (calc_boss4_scale__10TObjPlayerFi() < lbl_805D9790)) {
                TObjEneDD__sub_800BA438(temp_r3, arg1);
            }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80095EA0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__21TObjEneRe7BeruraPunchFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(M2C_UNK, f32, f32, f32);
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK TObjEneDD__sub_800B9D94(void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK init_part__16TObjEneRe7BeruraFi(s32);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();

extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D9794;
extern const f32 lbl_805D9798;

struct VObjHang {
    char pad[0x14];
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
};

void render__21TObjEneRe7BeruraPunchFv(u8 *arg0) {
    f32 temp_f1;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) != 0) {
        lbl_805D5660 = some_id_805c6f74;
        clear_global_flag_400__9TObjEneDDFv();
        if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) == 2) {
            ((VObjHang *)(arg0 + 0xF8))->m6();
            if (toggle_flag_9__10TObjPlayerFPv(arg0) != 0) {
                some_id_805c6f74 = lbl_805D5660;
                return;
            }
        }
        TObjEneDD__sub_800B9D94(arg0 + 0x38, arg0 + 0xE8, 0, 0);
        toggle_particle_effect__10TObjPlayerFv();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9624(0, lbl_805D9794, M2C_FIELD(arg0, f32 *, 0xCC), lbl_805D9794);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        temp_f1 = M2C_FIELD(arg0, f32 *, 0xF4);
        TOMonitorMachine01__sub_803D8B5C(0, temp_f1, temp_f1, lbl_805D9798);
        init_part__16TObjEneRe7BeruraFi(M2C_FIELD(arg0, s32 *, 0xB8));
        TObjPlayer__sub_803D9B78();
        if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) == 2) {
            ((VObjHang *)(arg0 + 0xF8))->m7();
        }
        end_effect_render__13TParticleCtrlFv();
        some_id_805c6f74 = lbl_805D5660;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80096258
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void launch__21TObjEneRe7BeruraPunchFPvii(u8 *arg0, s32 arg1, s32 arg2);
M2C_UNK TObjEneRe7BeruraPunch__sub_80096300(void *);
M2C_UNK reset__21TObjEneRe7BeruraPunchFPv(void *);
u8 *TPhotonMylla__sub_80154CB4(u16);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);

extern const f32 lbl_805D9794;
extern const f32 lbl_805D97B4;

void launch__21TObjEneRe7BeruraPunchFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *temp_r3;

    M2C_FIELD(arg0, s32 *, 0xB8) = arg1;
    VecCopy__FP3VecPC3Vec(arg0 + 0xDC, arg2);
    TObjEneRe7BeruraPunch__sub_80096300(arg0);
    temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0xB0));
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(temp_r3, s32 *, 0x60);
    } else {
        M2C_FIELD(arg0, s32 *, 0x60) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0xBC) = TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60));
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805D9794;
    M2C_FIELD(arg0, f32 *, 0xC4) = TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805D97B4;
    reset__21TObjEneRe7BeruraPunchFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0xB4) = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800963B0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset__21TObjEneRe7BeruraPunchFPv(u8 *arg0);
M2C_UNK fn_8002B094(s32);

extern const f32 lbl_805D9794;
extern const f32 lbl_805D9798;

struct BeruraBase { char pad[0x14]; };
struct BeruraObj : BeruraBase {
    virtual void m0();
    virtual void m1();
    virtual void m2();
};

void reset__21TObjEneRe7BeruraPunchFPv(u8 *arg0) {
    fn_8002B094(M2C_FIELD(arg0, s32 *, 0xD8));
    M2C_FIELD(arg0, f32 *, 0xF4) = (f32) lbl_805D9798;
    ((BeruraObj*)(arg0 + 0xF8))->m2();
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    M2C_FIELD(arg0, f32 *, 0x114) = (f32) lbl_805D9794;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80096608
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__21TObjEneRe7BeruraPunchFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TObjPlayer__sub_800A05B8(void *, int);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);
void TBoss8Dragon__sub_800BC5A0(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__21TObjEneRe7BeruraPunch[];

void *__dt__21TObjEneRe7BeruraPunchFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TObjEneRe7BeruraPunch;
        if (M2C_FIELD(arg0, void **, 0xD0) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD0)); M2C_FIELD(arg0, M2C_UNK *, 0xD0) = 0; }
        if (M2C_FIELD(arg0, void **, 0xD4) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD4)); M2C_FIELD(arg0, M2C_UNK *, 0xD4) = 0; }
        if (M2C_FIELD(arg0, void **, 0xD8) != NULL) { TBoss8Dragon__sub_800BC5A0(M2C_FIELD(arg0, void **, 0xD8), 1); M2C_FIELD(arg0, M2C_UNK *, 0xD8) = 0; }
        TObjPlayer__sub_800A05B8((s8 *)arg0 + 0xF8, -1);
        destroy_enemy_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800966BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init__21TObjEneRe7BeruraPunchFPv(u8 *arg0);
M2C_UNK reset__21TObjEneRe7BeruraPunchFPv(void *);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
s32 TBoss8Dragon__sub_800BC5EC(s32, s32);

extern const f32 lbl_805D9794;

struct EneBBase { char pad[0x14]; };
struct EneBVObj : EneBBase {
    virtual void m0();
    virtual void m1(M2C_UNK);
};
void init__21TObjEneRe7BeruraPunchFPv(u8 *arg0) {
    s32 var_r0;
    u32 var_a;

    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) lbl_805D9794;
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805D9794;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805D9794;
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805D9794;
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) lbl_805D9794;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    var_a = alloc__23TAdSinglePlyChrSelectGCFPv(0x10);
    var_r0 = var_a;
    if (var_r0 != 0) {
        var_r0 = TBoss8Dragon__sub_800BC5EC(var_a, 9);
    }
    M2C_FIELD(arg0, s32 *, 0xD8) = var_r0;
    ((EneBVObj*)(arg0 + 0xF8))->m1(0);
    reset__21TObjEneRe7BeruraPunchFPv(arg0);
}

}
#endif
#endif
