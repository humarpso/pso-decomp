#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VObjBase_8004394c_800430AC {
    char pad[0x18];
};
struct VObj_8004394c_800430AC : VObjBase_8004394c_800430AC {
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
};
struct VBos_800430AC { char pad[0x18]; };
struct TBoss3VoloptP01_800430AC : VBos_800430AC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
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
    virtual s32 m30();
    virtual s32 m31();
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
    virtual M2C_UNK m53(s32);
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual M2C_UNK m60();
    virtual M2C_UNK m61();
};
extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK TObjPlayer__sub_800192DC(void *);
s32 TObjPlayer__sub_800194AC(void *, int, int);
s32 obj_testFlags30(void *, int);
M2C_UNK obj_clearFlags30(void *, int);
M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *, int, f32, f32);
void TBoss3VoloptP01__sub_80043CA8(void *);
M2C_UNK TBoss3VoloptP01__sub_80043CAC(void *);
s32 check_demo_mode__10TObjPlayerFv();
extern const f32 lbl_805D878C;
void run_task__15TBoss3VoloptP01Fv(u8 *arg0);
}

extern "C" {

void render__15TBoss3VoloptP01Fv(u8 *arg0);
void reset_state__15TBoss3VoloptP01FPv(void *arg0);
void update_state__15TBoss3VoloptP01FPv(u8 *arg0);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TBoss3VoloptP01__sub_80042F84(void *);
s32 TBoss3VoloptP01__sub_80042FCC();
s32 TBoss3Volopt__sub_8003F398();
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TBoss8Dragon__sub_803D64C0(s32);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjFish__sub_803E46BC(void *);
M2C_UNK TObjLight__sub_80134098();
M2C_UNK TObjLight__sub_80134194(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjPlayer__sub_803E4684(s32);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
f32 get_random_float__8TObjFishFv();
M2C_UNK link_photon__10TObjPlayerFUs(u16, M2C_UNK);
M2C_UNK minimap_render_dot(void *, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK set_grabbed_state__10TObjPlayerFi(M2C_UNK);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();

extern const f32 lbl_805D8770;

void reset_state__15TBoss3VoloptP01FPv(void *arg0) {
    void *temp_r3;

    M2C_FIELD(arg0, s8 *, 0x390) = 0;
    M2C_FIELD(arg0, f32 *, 0x38C) = (f32) lbl_805D8770;
    temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
    M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) | 1);
}

extern s32 lbl_805D4C28;

void update_state__15TBoss3VoloptP01FPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFDFF);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3A8) != 0) {
            lbl_805D4C28 = 1;
            link_photon__10TObjPlayerFUs(M2C_FIELD(arg0, u16 *, 0x2D4), 0);
            set_grabbed_state__10TObjPlayerFi(0x12C);
        }
        if (TBoss3Volopt__sub_8003F398() != 0) {
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x388);
            if (temp_r3 & 0x10000) {
                M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r3 & 0xFFFFFFFE);
                M2C_FIELD(arg0, s32 *, 0x374) = 2;
                M2C_FIELD(arg0, s16 *, 0x326) = 2;
                M2C_FIELD(arg0, s32 *, 0x37C) = (s32) M2C_FIELD(arg0, s32 *, 0x3A4);
            } else if (temp_r3 & 0x20000) {
                M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r3 & 0xFFFFFFFE);
                TBoss3VoloptP01__sub_80042F84(arg0);
            } else {
                TBoss3Volopt__sub_8022675C(0x4003A810, arg0 + 0x38, 0xA, 0);
                M2C_FIELD(arg0, s32 *, 0x37C) = 2;
            }
        } else {
            M2C_FIELD(arg0, s16 *, 0xB8) = 3;
            M2C_FIELD(arg0, s32 *, 0x37C) = 1;
        case 1:
            TBoss1Dragon__sub_80143504(arg0);
            if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 8U) {
                temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x388);
                if (temp_r3_2 & 0x10000) {
                    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r3_2 & 0xFFFFFFFE);
                    ((VObj_8004394c_800430AC*)arg0)->m58();
                } else if (temp_r3_2 & 0x20000) {
                    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r3_2 & 0xFFFFFFFE);
                    TBoss3VoloptP01__sub_80042F84(arg0);
                } else {
                    TBoss3Volopt__sub_8022675C(0x4003A810, arg0 + 0x38, 0xA, 0);
                    M2C_FIELD(arg0, s32 *, 0x37C) = 2;
                }
            }
        }
        break;
    case 2:
        if (TBoss3VoloptP01__sub_80042FCC() == 1) {
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
            ((VObj_8004394c_800430AC*)arg0)->m56();
        }
        break;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        break;
    }
    TObjPlayer__sub_801B4A18(arg0, -1);
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
}

extern u8 *lbl_805D4CCC;
extern const f32 lbl_805D8780;
extern const f32 lbl_805D8784;
extern const f32 lbl_805D8788;

void render__15TBoss3VoloptP01Fv(u8 *arg0) {
    s32 temp_r3;

    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000000) && (((TBoss3VoloptP01_800430AC*)arg0)->m8(lbl_805D8780, lbl_805D8784) != 0)) {
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjLight__sub_80134194(arg0);
        toggle_particle_effect__10TObjPlayerFv();
        TObjPlayer__sub_803D9B2C();
        if (check_demo_mode__10TObjPlayerFv() == 1) {
            TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
            TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
            TObjFish__sub_803E46BC(M2C_FIELD(arg0, void **, 0x34));
        } else {
            TObjPlayer__sub_803D9624(0, M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x38C), M2C_FIELD(arg0, f32 *, 0x40));
            TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x388);
            if (temp_r3 & 0x40000) {
                TObjPlayer__sub_803E4684(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x2C), s32 *, 4));
            } else {
                if (temp_r3 & 0x80000) {
                    TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x3B4));
                    M2C_FIELD(lbl_805D4CCC, s8 *, 7) = (s8) (lbl_805D8788 * get_random_float__8TObjFishFv());
                    M2C_FIELD(lbl_805D4CCC, s8 *, 4) = 0;
                    M2C_FIELD(lbl_805D4CCC, s8 *, 5) = 0;
                } else {
                    M2C_FIELD(lbl_805D4CCC, s8 *, 7) = 0;
                    M2C_FIELD(lbl_805D4CCC, u8 *, 4) = 0xCC;
                    M2C_FIELD(lbl_805D4CCC, u8 *, 5) = 0xFF;
                }
                draw__16TObjEneRe7BeruraFPv(arg0);
            }
        }
        TObjPlayer__sub_803D9B78();
        TObjLight__sub_80134098();
        end_effect_render__13TParticleCtrlFv();
    }
}

void TBoss3VoloptP01__sub_80043CA8(void * _w0) {  }
void run_task__15TBoss3VoloptP01Fv(u8 *arg0) {
    f32 temp_f2;
    s32 temp_r4_2;
    u8 *temp_r4;
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        TBoss3VoloptP01__sub_80043CA8((void *)((void *) (arg0)));
        return;
    }
    if (((VObj_18 *)(arg0))->m31() != 0) {
        ((VObj_18 *)(arg0))->m61();
    } else if ((((VObj_18 *)(arg0))->m30() != 0) && !(M2C_FIELD(arg0, s32 *, 0x30) & 0x04000000)) {
        ((VObj_18 *)(arg0))->m60();
    }
    if (obj_testFlags30((void *) (arg0), (int) (0x4000)) != 0) {
        if (TObjPlayer__sub_800194AC((void *) (arg0), (int) (4), (int) (-1)) <= 0) {
            TObjPlayer__sub_800192DC((void *) (arg0 + 0x284));
            obj_clearFlags30((void *) (arg0), (int) (0x4000));
        }
    } else {
        if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s32) M2C_FIELD(arg0, s32 *, 0x374)) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x37C) != -1) {
                M2C_FIELD(arg0, s32 *, 0x37C) = -1;
                TBoss3VoloptP01__sub_80043CAC((void *) (arg0));
            }
            M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
            M2C_FIELD(arg0, s32 *, 0x37C) = 0;
        }
        TBoss3VoloptP01__sub_80043CAC((void *) (arg0));
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x300);
        M2C_FIELD(arg0, f32 *, 0x300) = (f32) (temp_f2 + (lbl_805D878C + M2C_FIELD(arg0, f32 *, 0x38C)));
        temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
        M2C_FIELD(temp_r4, f32 *, 4) = (f32) (lbl_805D878C + M2C_FIELD(arg0, f32 *, 0x38C));
        copy_position__20TBoss3VoloptHiraisinFi((void *) (arg0), (int) (temp_r4), (f32) (lbl_805D878C), (f32) (temp_f2));
        temp_r4_2 = M2C_FIELD(arg0, s32 *, 0x3B4);
        M2C_FIELD(arg0, s32 *, 0x3B4) = (s32) (temp_r4_2 + 0x400);
        ((VObj_18 *)(arg0))->m53(temp_r4_2);
    }
}

}
