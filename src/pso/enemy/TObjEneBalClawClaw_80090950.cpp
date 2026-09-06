#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBaseA_80090950 { char pad[0x18]; };
struct VA_80090950 : VBaseA_80090950 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual M2C_UNK m9(f32, f32, f32);
};
struct VBaseB_80090950 { char pad[0x14]; };
struct VB_80090950 : VBaseB_80090950 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual M2C_UNK m8();
};

struct VBase_18_4841bb { char pad[0x18]; };

struct VObj_18_4841bb : VBase_18_4841bb {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual M2C_UNK m53();
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void TObjEneBalClawClaw__sub_80090798(void *);
void TObjEneBalClawClaw__sub_80090A10(u8 *arg0, u8 *arg1, s32 arg2, s16 arg3);
}

extern "C" {

s32 check_active__18TObjEneBalClawClawFPv(void *arg0);
void clear_flag__18TObjEneBalClawClawFPv(void *arg0);
void render__18TObjEneBalClawClawFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
M2C_UNK TObjEneBalClaw__sub_8008D700(void *, M2C_UNK);
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK TObjLight__sub_80134098();
M2C_UNK TObjLight__sub_80134194(void *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK reset_active_state__18TObjEneBalClawClawFPv();
M2C_UNK set_global_param__8TObjFishFi(s32);
s32 toggle_flag_9__10TObjPlayerFPv(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();

void clear_flag__18TObjEneBalClawClawFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xDFFFFFFF);
    reset_active_state__18TObjEneBalClawClawFPv();
}

s32 check_active__18TObjEneBalClawClawFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0xA00) {
        return 0;
    }
    return (u32) __cntlzw(M2C_FIELD(arg0, s32 *, 0x388) & 0x10000000) >> 5;
}

extern s32 some_id_805c6f74;
extern const f32 TObjEneBalClawClaw__data_805D968C;
extern const f32 lbl_805D9698;
extern const f32 lbl_805D969C;
extern const f32 lbl_805D96A0;

void TObjEneBalClawClaw__sub_80090A10(u8 *arg0, u8 *arg1, s32 arg2, s16 arg3) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg1);
    M2C_FIELD(arg0, s32 *, 0x60) = arg2;
    M2C_FIELD(arg0, s16 *, 0x33E) = arg3;
    M2C_FIELD(arg0, s16 *, 0x32C) = arg3;
    TObjEneBalClawClaw__sub_80090798(arg0);
    ((VObj_18_4841bb *)(arg0))->m53();
}

void render__18TObjEneBalClawClawFPv(u8 *arg0) {
    M2C_UNK var_r30;
    s32 temp_r3;
    s32 var_r29;

    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000000)) {
        temp_r3 = ((VA_80090950 *)arg0)->m9(lbl_805D9698, lbl_805D969C, lbl_805D96A0);
        if (temp_r3 != 0) {
            var_r30 = 1;
            set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
            TObjLight__sub_80134194(arg0);
            toggle_particle_effect__10TObjPlayerFv();
            TObjPlayer__sub_803D9B2C();
            some_id_805c6f74 &= 0xFFFFFBFF;
            if (check_demo_mode__10TObjPlayerFv() == 1) {
                TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
                TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x5C));
                TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
                TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0x34));
            } else {
                TObjPlayer__sub_803D9624(0, TObjEneBalClawClaw__data_805D968C, M2C_FIELD(arg0, f32 *, 0x3B4) + M2C_FIELD(arg0, f32 *, 0x3BC), TObjEneBalClawClaw__data_805D968C);
                TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
                TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x5C));
                TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
                if (M2C_FIELD(arg0, s32 *, 0x388) & 4) {
                    if (((VB_80090950 *)(arg0 + 0x390))->m8() != 0) {
                        ((VB_80090950 *)(arg0 + 0x390))->m6();
                        var_r29 = 1;
                        if (toggle_flag_9__10TObjPlayerFPv(arg0) != 0) {
                            var_r29 = 0;
                        }
                        if (var_r29 != 0) {
                            if (temp_r3 == 1) {
                                draw__16TObjEneRe7BeruraFPv(arg0);
                            } else {
                                render_world_model__10TObjPlayerFPv(arg0);
                            }
                        }
                        ((VB_80090950 *)(arg0 + 0x390))->m7();
                    } else {
                        var_r30 = 0;
                    }
                } else if (temp_r3 == 1) {
                    draw__16TObjEneRe7BeruraFPv(arg0);
                } else {
                    render_world_model__10TObjPlayerFPv(arg0);
                }
            }
            TObjPlayer__sub_803D9B78();
            TObjLight__sub_80134098();
            end_effect_render__13TParticleCtrlFv();
            TObjEneBalClaw__sub_8008D700(arg0, var_r30);
        }
    }
}

}
