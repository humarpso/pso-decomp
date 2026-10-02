#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_825e13 { char pad[0x18]; };

struct VObj_18_825e13 : VBase_18_825e13 {
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
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual M2C_UNK m72(M2C_UNK);
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual s32 m81();
    virtual void m82();
    virtual M2C_UNK m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual M2C_UNK m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual M2C_UNK m103();
};

extern "C" {
void obj_setFlags30(void *, u32);
void queue_destruction__7TObjectFv(void *);
s32 check_demo_mode__10TObjPlayerFv(void);
void enable__13TParticleCtrlFPv(void *);
s32 check_v2_mode__9TObjEneDDFv(void);
int set_player_state_default__12TBoss8DragonFPv(void *);
M2C_UNK TObjPlayer__sub_800113E4(void *, int);
u8 *create_particle_emitter(void *, M2C_UNK);
s32 find_entity_by_id(int);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
M2C_UNK TObjEneRecon__sub_8031C190(void *);
M2C_UNK update_position_from_offsets__12TObjEneReconFPv(void *);
s32 is_anim_6__12TObjEneReconFPv(int);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern const f32 lbl_805DF400;
extern const f32 lbl_805DF424;
extern const f32 lbl_805DF428;
void run_task__12TObjEneReconFv(u8 *arg0);
s32 handle_message__12TObjEneReconFPvi(void *, void *);
s32 TObjEneRecon__sub_8031C364(void *, void *);
s32 TObjEneRecon__sub_8031C624(void *, void *);
s32 run_task__12TObjEneReconFPvi(void *, void *);
s32 TObjEneRecon__sub_8031C920(void *, void *);
s32 TObjEneRecon__sub_8031CCFC(void *, void *);
s32 TObjEneRecon__sub_8031CF30(void *, void *);
s32 TObjEneRecon__sub_8031D380(void *, void *);
s32 TObjEneRecon__sub_8031D4B0(void *, void *);
void TObjEneRecon__vt85(s32 arg0, u32 arg1, s32 arg2);
}

extern "C" {

void TObjEneRecon__vt85(s32 arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        TObjEneRecon__sub_8031D4B0((void *) (arg0), (void *) (arg2));
        return;
    case 1:
        TObjEneRecon__sub_8031D380((void *) (arg0), (void *) (arg2));
        return;
    case 2:
        TObjEneRecon__sub_8031CF30((void *) (arg0), (void *) (arg2));
        return;
    case 3:
        TObjEneRecon__sub_8031CCFC((void *) (arg0), (void *) (arg2));
        return;
    case 4:
        TObjEneRecon__sub_8031C920((void *) (arg0), (void *) (arg2));
        return;
    case 6:
        TObjEneRecon__sub_8031C624((void *) (arg0), (void *) (arg2));
        return;
    case 7:
        TObjEneRecon__sub_8031C364((void *) (arg0), (void *) (arg2));
        return;
    case 5:
        run_task__12TObjEneReconFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 8:
        handle_message__12TObjEneReconFPvi((void *) (arg0), (void *) (arg2));
    default:
        return;
    }
}

void run_task__12TObjEneReconFv(u8 *arg0) {
    f32 temp_f2;
    f32 temp_f31;
    f32 var_f30;
    s16 temp_r0;
    s16 temp_r0_2;
    s32 temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    u8 *temp_r3_4;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18_825e13 *)(arg0))->m103();
        return;
    }
    temp_r3 = find_entity_by_id((int) (M2C_FIELD(arg0, u16 *, 0x434)));
    if ((temp_r3 == 0) || (all_parents_unqueued_for_destruction__7TObjectFv() == 0)) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 8) && (temp_r0 != 7) && (is_anim_6__12TObjEneReconFPv((int) (temp_r3)) == 1)) {
        M2C_FIELD(arg0, s32 *, 0x2DC) = (s32) (M2C_FIELD(arg0, s32 *, 0x2DC) | 4);
        TObjPlayer__sub_800113E4((void *) (arg0), (int) (0));
        obj_setFlags30(arg0, 0xA00U);
        ((VObj_18_825e13 *)(arg0))->m72(0);
    }
    if (((VObj_18_825e13 *)(arg0))->m81() != 4) {
        ((VObj_18_825e13 *)(arg0))->m83();
        temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x478));
        if (temp_r3_2 == NULL) {
            M2C_FIELD(arg0, u8 **, 0x478) = create_particle_emitter(arg0 + 0x2FC, 0x217);
            temp_r3_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x478));
            if (temp_r3_3 != NULL) {
                enable__13TParticleCtrlFPv(temp_r3_3);
            }
        } else {
            temp_r0_2 = M2C_FIELD(arg0, s16 *, 0x326);
            if ((temp_r0_2 == 8) || (temp_r0_2 == 7)) {
                enable__13TParticleCtrlFPv(temp_r3_2);
            } else {
                if ((s32) M2C_FIELD(arg0, s32 *, 0x47C) == 0) {
                    var_f30 = lbl_805DF400;
                    M2C_FIELD(arg0, s32 *, 0x47C) = 1;
                } else {
                    var_f30 = lbl_805DF428;
                    M2C_FIELD(arg0, s32 *, 0x47C) = 0;
                }
                if (check_v2_mode__9TObjEneDDFv() != 0) {
                    var_f30 *= lbl_805DF400;
                }
                temp_f31 = var_f30 * TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0x60)));
                temp_f2 = var_f30 * -TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0x60)));
                M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x478), f32 *, 0x60) = (f32) (M2C_FIELD(arg0, f32 *, 0x2FC) + temp_f31);
                M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x478), f32 *, 0x64) = (f32) (lbl_805DF424 + M2C_FIELD(arg0, f32 *, 0x300));
                M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x478), f32 *, 0x68) = (f32) (M2C_FIELD(arg0, f32 *, 0x304) + temp_f2);
            }
        }
    } else {
        temp_r3_4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x478));
        if (temp_r3_4 != NULL) {
            enable__13TParticleCtrlFPv(temp_r3_4);
        }
    }
    update_position_from_offsets__12TObjEneReconFPv((void *) (arg0));
    set_player_state_default__12TBoss8DragonFPv(arg0);
    ((VObj_18_825e13 *)(arg0))->m98();
    TObjEneRecon__sub_8031C190((void *) (arg0));
}

}
