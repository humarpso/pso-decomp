#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBaseA { char pad[0x18]; };
struct VA : VBaseA {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual M2C_UNK m9(f32, f32, f32);
};
struct VBaseB { char pad[0x14]; };
struct VB : VBaseB {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual M2C_UNK m8();
};

extern "C" {

void render__18TObjEneBalClawClawFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
M2C_UNK TObjEneBalClaw__sub_8008D700(void *, M2C_UNK);
M2C_UNK TObjLight__sub_80134098();
M2C_UNK TObjLight__sub_80134194(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjFish__sub_803DA798(s32);
M2C_UNK TObjFish__sub_803E46BC(s32);

extern s32 some_id_805c6f74;
extern const f32 TObjEneBalClawClaw__data_805D968C;
extern const f32 lbl_805D9698;
extern const f32 lbl_805D969C;
extern const f32 lbl_805D96A0;

void render__18TObjEneBalClawClawFPv(u8 *arg0) {
    M2C_UNK var_r30;
    s32 temp_r3;
    s32 var_r29;

    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000000)) {
        temp_r3 = ((VA *)arg0)->m9(lbl_805D9698, lbl_805D969C, lbl_805D96A0);
        if (temp_r3 != 0) {
            var_r30 = 1;
            TObjFish__sub_803DA798(M2C_FIELD(arg0, s32 *, 0x24));
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
                    if (((VB *)(arg0 + 0x390))->m8() != 0) {
                        ((VB *)(arg0 + 0x390))->m6();
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
                        ((VB *)(arg0 + 0x390))->m7();
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
