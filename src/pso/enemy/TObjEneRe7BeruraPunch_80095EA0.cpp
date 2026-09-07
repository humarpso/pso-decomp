#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_14_c1c33b { char pad[0x14]; };

struct VObj_14_c1c33b : VBase_14_c1c33b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};

extern "C" {
M2C_UNK TObjEneRe7BeruraPunch__sub_80096300(void *);
extern const f32 lbl_805D979C;
extern const f32 TObjEneRe7BeruraPunch__data_805D97A0;
void TObjEneRe7BeruraPunch__sub_80095FAC(u8 *arg0);
}

extern "C" {

struct VObjHang_80095EA0 {
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

void launch__21TObjEneRe7BeruraPunchFPvii(u8 *arg0, s32 arg1, s32 arg2);
void render__21TObjEneRe7BeruraPunchFv(u8 *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(M2C_UNK, f32, f32, f32);
M2C_UNK TObjEneDD__sub_800B9D94(void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjEneRe7BeruraPunch__sub_80096300(void *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
u8 *TPhotonMylla__sub_80154CB4(u16);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK init_part__16TObjEneRe7BeruraFi(s32);
M2C_UNK reset__21TObjEneRe7BeruraPunchFPv(void *);
s32 toggle_flag_9__10TObjPlayerFPv(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();

extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D9794;
extern const f32 lbl_805D9798;

void render__21TObjEneRe7BeruraPunchFv(u8 *arg0) {
    f32 temp_f1;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) != 0) {
        lbl_805D5660 = some_id_805c6f74;
        clear_global_flag_400__9TObjEneDDFv();
        if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) == 2) {
            ((VObjHang_80095EA0 *)(arg0 + 0xF8))->m6();
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
            ((VObjHang_80095EA0 *)(arg0 + 0xF8))->m7();
        }
        end_effect_render__13TParticleCtrlFv();
        some_id_805c6f74 = lbl_805D5660;
    }
}

extern const f32 lbl_805D9794;
extern const f32 lbl_805D97B4;

#pragma push
#pragma fp_contract on
void TObjEneRe7BeruraPunch__sub_80095FAC(u8 *arg0) {
    if (((VObj_14_c1c33b *)((u8 *)(arg0) + (248)))->m4() != 0) {
        M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0xDC) = (f32) ((lbl_805D979C * (TObjEneRe7BeruraPunch__data_805D97A0 * M2C_FIELD(arg0, f32 *, 0xBC))) + M2C_FIELD(arg0, f32 *, 0xDC));
    M2C_FIELD(arg0, f32 *, 0xE4) = (f32) ((lbl_805D979C * (TObjEneRe7BeruraPunch__data_805D97A0 * M2C_FIELD(arg0, f32 *, 0xC4))) + M2C_FIELD(arg0, f32 *, 0xE4));
    TObjEneRe7BeruraPunch__sub_80096300((void *) (arg0));
}
#pragma pop

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
