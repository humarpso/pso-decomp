#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "pso/misc/RenderFadeState.h"
struct Base_800475A0_80044498 { char pad[0x18]; };

struct VObj_800475A0_80044498 : Base_800475A0_80044498 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58();
};

struct BaseA_80044498 { char pad[0x18]; };

struct VObjA_80044498 : BaseA_80044498 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual M2C_UNK m8(f32, f32);
};

struct BaseB_80044498 { char pad[0x14]; };

struct VObjB_80044498 : BaseB_80044498 {
    virtual M2C_UNK n0();
    virtual M2C_UNK n1();
    virtual M2C_UNK n2();
    virtual M2C_UNK n3();
    virtual M2C_UNK n4();
    virtual M2C_UNK n5();
    virtual M2C_UNK n6();
    virtual M2C_UNK n7();
};

struct Stack_80045A04 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct VBase_18_b8f5cb { char pad[0x18]; };

struct VObj_18_b8f5cb : VBase_18_b8f5cb {
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
    virtual M2C_UNK m53();
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
u32 TPhotonMylla__sub_80154CB4(u16);
M2C_UNK fn_80048C04();
extern u16 TBoss3Volopt__data_805D2710;
void check_and_notify__12TBoss3VoloptFv(s32 _w0);
f32 TBoss8Dragon__sub_803D64C0(s32);
extern const f32 TBoss3Volopt__data_805D87E4;
extern const f32 lbl_805D8818;
void update_state__12TBoss3VoloptFPv(void *arg0);
void check_and_notify__12TBoss3VoloptFv(s32 _w0);
s32 obj_testFlags30(void*, M2C_UNK);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);
void set_action_wait__12TBoss3VoloptFPvUs(void *arg0, u16 arg1);
s32 obj_testFlags30(void*, M2C_UNK);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);
void set_motion__12TBoss3VoloptFPvs(void *arg0, s16 arg1);
void check_and_notify__12TBoss3VoloptFv(s32 _w0);
s32 obj_testFlags30(void*, M2C_UNK);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);
void check_and_trigger__12TBoss3VoloptFPv(void *arg0);
void check_and_notify__12TBoss3VoloptFv(s32 _w0);
s32 obj_testFlags30(void*, M2C_UNK);
void set_action__12TBoss3VoloptFPvs(void *arg0, s16 arg1);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK TObjLight__sub_80134098();
M2C_UNK TObjLight__sub_80134194(void *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
extern s32 some_id_805c6f74;
extern const f32 lbl_805D881C;
extern const f32 lbl_805D8820;
void render__12TBoss3VoloptFPv(u8 *arg0);
void *__nw__7TObjectFUl(M2C_UNK);
void *fn_800480B0(void *, void *, void *);
extern void *tl_04;
void *TBoss3Volopt__sub_80047DD4(void *arg0);
void TBoss3Volopt__sub_800445A4(void *);
void TBoss3Volopt__sub_800450D0(void *);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_800D7C58(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);
void queue_destruction__7TObjectFv(void *);
extern M2C_UNK lbl_80484610[];
void *destroy__12TBoss3VoloptFPvs(void *arg0, s16 arg1);
s32 TObjEneDellBiter__sub_80087350(s32, s32);
s32 TOTrapAncient01__sub_80226578(s32, s32, u32, s16, s32);
s32 rand__11TOBoss4RockFv(void);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern s32 lbl_805D53A4;
extern const f32 lbl_805D87BC;
extern const f32 lbl_805D87C8;
extern const f32 lbl_805D87CC;
extern const f32 lbl_805D87D0;
extern const f32 lbl_805D87D4;
extern const f32 TBoss3Volopt__data_805D87D8;
extern const f32 lbl_805D87DC;
void TBoss3Volopt__sub_80045A04(u8 *arg0);
s32 obj_testFlags30(void*, M2C_UNK);
f32 get_random_float__8TObjFishFv(f32);
s32 TBoss3Volopt__sub_8003F398(void);
s32 check_demo_mode__10TObjPlayerFv();
s32 minimap_render_dot(void *, s32, s16, s32);
f32 TBoss8Dragon__sub_803D64C0(s32);
M2C_UNK TObjPlayer__sub_800192DC(void *);
s32 TObjPlayer__sub_800194AC(void *, int, int);
M2C_UNK obj_clearFlags30(void *, int);
M2C_UNK copy_position__20TBoss3VoloptHiraisinFi(void *);
M2C_UNK TBoss3Volopt__sub_80044498(void *);
M2C_UNK TBoss3Volopt__sub_80047714(void *);
M2C_UNK TObjPlayer__sub_800D7BB0(void *);
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_801B4A18(void *, int);
extern u8 *TBoss3Volopt__data_805D4D00;
extern const f32 TBoss3Volopt__data_805D87E4;
void TBoss3Volopt__sub_800477A0(u8 *arg0);
}

extern "C" {

void TBoss3Volopt__sub_80045234(void);
void apply_hit_reaction__12TBoss3VoloptFPvf(void *arg0, f32 farg0);
s32 count_dead_parts__12TBoss3VoloptFPv(void *arg0);
void create_cage__12TBoss3VoloptFPvUs(void *arg0, u16 arg1);
M2C_UNK TObjVoloptCage__ct(void *, void *, u16, u16, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
void *__nw__7TObjectFUl(M2C_UNK);
s32 obj_testFlags30(void*, M2C_UNK);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);

extern f32 lbl_805D87B8;

void apply_hit_reaction__12TBoss3VoloptFPvf(void *arg0, f32 farg0) {
    if ((obj_testFlags30(arg0, 0x800) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x20000) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xC)) {
        check_and_notify__12TBoss3VoloptFv((s32)(arg0));
        M2C_FIELD(arg0, f32 *, 0x508) = (f32) (lbl_805D87B8 + farg0);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xC);
    }
}

s32 count_dead_parts__12TBoss3VoloptFPv(void *arg0) {
    s32 count = 0;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (*(s16 *)((u8 *)arg0 + 1196 + i * 2) <= 0) {
            count++;
        }
    }
    return count;
}

void TBoss3Volopt__sub_80045234(void) {  }

extern u16 TBoss3Volopt__data_805D2710;
extern s32 lbl_805D2714;

void create_cage__12TBoss3VoloptFPvUs(void *arg0, u16 arg1) {
    void *temp_r3;
    M2C_FIELD(arg0, u16 *, 0x338) = arg1;
    M2C_FIELD(arg0, u32 *, 0x2A8) = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x338));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2A8) != 0U) {
        temp_r3 = __nw__7TObjectFUl(0x394);
        if (temp_r3 != 0) {
            TObjVoloptCage__ct(temp_r3, arg0, arg1, TBoss3Volopt__data_805D2710, lbl_805D2714);
        }
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x200000);
    }
}

#pragma push
#pragma fp_contract on
void TBoss3Volopt__sub_80045A04(u8 *arg0) {
    Stack_80045A04 stack;
    f32 temp_f31;
    s32 temp_r31;
    if (lbl_805D53A4 & 1) {
        temp_f31 = (lbl_805D87CC * (lbl_805D87BC * (f32) rand__11TOBoss4RockFv())) + lbl_805D87C8;
        temp_r31 = (s32) (lbl_805D87D0 * (lbl_805D87D4 * (lbl_805D87BC * (f32) rand__11TOBoss4RockFv())));
        stack.sp8 = (temp_f31 * TBoss8Dragon__sub_803D64DC(temp_r31)) + M2C_FIELD(arg0, f32 *, 0x38);
        stack.spC = (lbl_805D87DC * (lbl_805D87BC * (f32) rand__11TOBoss4RockFv())) + TBoss3Volopt__data_805D87D8;
        stack.sp10 = (temp_f31 * TBoss8Dragon__sub_803D64C0(temp_r31)) + M2C_FIELD(arg0, f32 *, 0x40);
        TObjEneDellBiter__sub_80087350((s32) &stack.sp8, 0xFB);
    }
    TOTrapAncient01__sub_80226578(0x4003AD21, (s32) arg0, (u32) (arg0 + 0x38), 0, 0);
}
#pragma pop

void check_and_notify__12TBoss3VoloptFv(s32 _w0) {
    if (TPhotonMylla__sub_80154CB4(TBoss3Volopt__data_805D2710) != 0U) {
        fn_80048C04();
    }
}
void update_state__12TBoss3VoloptFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x46C) = 6;
        TBoss3Volopt__sub_80044498((void *)(arg0));
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805D8818 * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x46C) * 0x3000));
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x46C) - 1;
        M2C_FIELD(arg0, s32 *, 0x46C) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
            temp_r0_3 = M2C_FIELD(arg0, s32 *, 0x380);
            M2C_FIELD(arg0, s32 *, 0x374) = temp_r0_3;
            M2C_FIELD(arg0, s16 *, 0x326) = (s16) temp_r0_3;
            M2C_FIELD(arg0, s32 *, 0x37C) = (s32) M2C_FIELD(arg0, s32 *, 0x470);
        }
        break;
    case -1:
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) TBoss3Volopt__data_805D87E4;
        break;
    }
}
void set_action_wait__12TBoss3VoloptFPvUs(void *arg0, u16 arg1) {
    if ((obj_testFlags30((void*)((void *)(arg0)), (M2C_UNK)((s32)(0x800))) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x80000) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xA)) {
        check_and_notify__12TBoss3VoloptFv((s32)(arg0));
        if ((u16) arg1 != 0xFFFF) {
            M2C_FIELD(arg0, u16 *, 0x338) = arg1;
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xA);
        }
    }
}
void set_motion__12TBoss3VoloptFPvs(void *arg0, s16 arg1) {
    if ((obj_testFlags30((void*)((void *)(arg0)), (M2C_UNK)((s32)(0x800))) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x10000) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 9)) {
        M2C_FIELD(arg0, s16 *, 0x338) = arg1;
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 9);
    }
}
void check_and_trigger__12TBoss3VoloptFPv(void *arg0) {
    if ((obj_testFlags30((void*)((void *)(arg0)), (M2C_UNK)((s32)(0x800))) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x40000)) {
        check_and_notify__12TBoss3VoloptFv((s32)(arg0));
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0xB);
    }
}
void set_action__12TBoss3VoloptFPvs(void *arg0, s16 arg1) {
    if ((obj_testFlags30((void*)((void *)(arg0)), (M2C_UNK)((s32)(0x800))) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x20000) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 2)) {
        check_and_notify__12TBoss3VoloptFv((s32)(arg0));
        M2C_FIELD(arg0, s16 *, 0x338) = arg1;
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        ((VObj_800475A0_80044498 *)arg0)->m58();
    }
}
void render__12TBoss3VoloptFPv(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000000) && (((VObjA_80044498 *)arg0)->m8(lbl_805D881C, lbl_805D8820) != 0)) {
        if (((RenderFadeState*)(arg0 + 0x490))->updateFromCamera((const f32*)(arg0 + 0x2FC)) != 0) {
            ((VObjB_80044498 *)(arg0 + 0x490))->n6();
        }
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjLight__sub_80134194(arg0);
        toggle_particle_effect__10TObjPlayerFv();
        TObjPlayer__sub_803D9B2C();
        some_id_805c6f74 &= 0xFFFFFBFF;
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        if (check_demo_mode__10TObjPlayerFv() == 1) {
            TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0x34));
        } else {
            draw__16TObjEneRe7BeruraFPv(arg0);
        }
        TObjPlayer__sub_803D9B78();
        TObjLight__sub_80134098();
        end_effect_render__13TParticleCtrlFv();
        ((VObjB_80044498 *)(arg0 + 0x490))->n7();
    }
}

#pragma push
#pragma fp_contract on
void TBoss3Volopt__sub_800477A0(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    temp_f1 = TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x47C));
    M2C_FIELD(TBoss3Volopt__data_805D4D00, s8 *, 6) = (s8) get_random_float__8TObjFishFv(temp_f1 * M2C_FIELD(arg0, f32 *, 0x484));
    M2C_FIELD(TBoss3Volopt__data_805D4D00, s8 *, 5) = (s8) get_random_float__8TObjFishFv(temp_f1 * M2C_FIELD(arg0, f32 *, 0x488));
    M2C_FIELD(TBoss3Volopt__data_805D4D00, s8 *, 4) = (s8) get_random_float__8TObjFishFv(temp_f1 * M2C_FIELD(arg0, f32 *, 0x48C));
    M2C_FIELD(arg0, s32 *, 0x47C) = (s32) (M2C_FIELD(arg0, s32 *, 0x47C) + M2C_FIELD(arg0, s32 *, 0x480));
    if (check_demo_mode__10TObjPlayerFv() != 1) {
        if (((VObj_18_b8f5cb *)(arg0))->m31() != 0) {
            ((VObj_18_b8f5cb *)(arg0))->m61();
        } else if (((VObj_18_b8f5cb *)(arg0))->m30() != 0) {
            if (TBoss3Volopt__sub_8003F398() != 0) {
                TBoss3Volopt__sub_80044498((void *)((void *) (arg0)));
                M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
                M2C_FIELD(arg0, f32 *, 0x3C) = (f32) TBoss3Volopt__data_805D87E4;
            } else {
                ((VObj_18_b8f5cb *)(arg0))->m60();
            }
        }
        if (obj_testFlags30((void*)(arg0), (M2C_UNK)(0x4000)) != 0) {
            if (TObjPlayer__sub_800194AC((void *) (arg0), (int) (4), (int) (-1)) <= 0) {
                TObjPlayer__sub_800192DC((void *) (arg0 + 0x284));
                obj_clearFlags30((void *) (arg0), (int) (0x4000));
            }
        } else {
            if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != (s32) M2C_FIELD(arg0, s32 *, 0x374)) {
                temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
                if (temp_r0 != -1) {
                    M2C_FIELD(arg0, s32 *, 0x470) = temp_r0;
                    M2C_FIELD(arg0, s32 *, 0x37C) = -1;
                    TBoss3Volopt__sub_80047714((void *) (arg0));
                }
                M2C_FIELD(arg0, s32 *, 0x380) = (s32) M2C_FIELD(arg0, s16 *, 0x326);
                M2C_FIELD(arg0, s16 *, 0x326) = (s16) M2C_FIELD(arg0, s32 *, 0x374);
                M2C_FIELD(arg0, s32 *, 0x37C) = 0;
            }
            TBoss3Volopt__sub_80047714((void *) (arg0));
            update_prev_position__10TObjPlayerFPv((void *) (arg0));
            copy_position__20TBoss3VoloptHiraisinFi((void *) (arg0));
            TObjPlayer__sub_801B4A18((void *) (arg0), (int) (-1));
            minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
            TObjPlayer__sub_800D7BB0((void *) (arg0 + 0x490));
            ((VObj_18_b8f5cb *)(arg0))->m53();
        }
    }
}
#pragma pop

void *TBoss3Volopt__sub_80047DD4(void *arg0) {
    void *o = __nw__7TObjectFUl((M2C_UNK)(0x510));
    if (o != NULL) {
        o = fn_800480B0(o, tl_04, arg0);
    }
    return o;
}
void *destroy__12TBoss3VoloptFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80484610;
        TObjEneGibbles__sub_80156720(arg0);
        if (M2C_FIELD(arg0, void **, 0x474) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x474)); }
        if (M2C_FIELD(arg0, void **, 0x478) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x478)); }
        TBoss3Volopt__sub_800450D0(arg0);
        TBoss3Volopt__sub_800445A4(arg0);
        TObjPlayer__sub_800D7C58((s8 *)arg0 + 0x490, -1);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
