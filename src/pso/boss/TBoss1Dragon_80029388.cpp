#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8002967C_80029388 { char pad[0x18]; };
struct VObj_8002967C_80029388 : Base_8002967C_80029388 {
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
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83();
    virtual void m84(); virtual void m85(s16, s32);
};
struct Base_80029724_80029388 { char pad[0x18]; };
struct VObj_80029724_80029388 : Base_80029724_80029388 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual M2C_UNK vcall(s16 a, int b);
};

extern "C" {

void TBoss1Dragon__sub_8002966C(void);
void TBoss1Dragon__sub_80029670(void);
void TBoss1Dragon__sub_80029674(void);
void TBoss1Dragon__sub_80029678(void);
void TBoss1Dragon__sub_8002A384(s16 arg0);
int TBoss1Dragon__sub_8002AC4C(void);
int TBoss1Dragon__sub_8002ACE0(void);
int TBoss1Dragon__sub_8002AD54(void);
void TBoss1Dragon__sub_8002ADAC(void);
void TBoss1Dragon__sub_8002ADB0(void);
void TBoss1Dragon__sub_8002ADB4(void);
void TBoss1Dragon__sub_8002ADB8(void);
void TBoss1Dragon__sub_8002ADBC(void);
void TBoss1Dragon__sub_8002ADC0(void);
void TBoss1Dragon__sub_8002ADC4(void);
void calc_target_vector__12TBoss1DragonFPv(u8 *arg0);
void check_death__12TBoss1DragonFPv(void *arg0);
void choose_next_action__12TBoss1DragonFPv(void *arg0);
void *dt__12TBoss1DragonFPvs(void *arg0, s16 arg1);
void free_resources__12TBoss1DragonFv(void);
s32 get_instance__12TBoss1DragonFv(void);
void *init_base__12TBoss1DragonFPv(void *arg0);
void update_linked_epsilon_position__12TBoss1DragonFv(void);
void update_position_history__12TBoss1DragonFi(s32 arg0);
M2C_UNK TBoss1Dragon__sub_800284B4(void *, M2C_UNK);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
s32 VecCopy__FP3VecPC3Vec(s32, s32);
void __dl__7TObjectFPv(void *);
s32 check_phase_advance__12TBoss1DragonFPv(void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *, f32, f32);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);
void fn_800BC4C8(void *);
s32 is_hp_low__12TBoss1DragonFPv();
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);
M2C_UNK update_linked_position__14TObjEneEpsilonFPv(f32);
s32 update_max_hp_phase__12TBoss1DragonFPv(void *);

extern const f32 TBoss1Dragon__data_805D7F28;

void calc_target_vector__12TBoss1DragonFPv(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x394);
    M2C_FIELD(arg0, f32 *, 0x5C8) = (f32) (temp_f2 - M2C_FIELD(arg0, f32 *, 0x40C));
    M2C_FIELD(arg0, f32 *, 0x5CC) = (f32) TBoss1Dragon__data_805D7F28;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x39C);
    M2C_FIELD(arg0, f32 *, 0x5D0) = (f32) (temp_f1 - M2C_FIELD(arg0, f32 *, 0x414));
    M2C_FIELD(arg0, f32 *, 0x5D4) = clamp_velocity__15TObjBoss2TunnelFPv(arg0 + 0x5C8, temp_f1, temp_f2);
}

extern const f32 lbl_805D7F30;

void update_linked_epsilon_position__12TBoss1DragonFv(void) {
    update_linked_position__14TObjEneEpsilonFPv(lbl_805D7F30);
}

void update_position_history__12TBoss1DragonFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x430);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}
void TBoss1Dragon__sub_8002966C(void) {  }
void TBoss1Dragon__sub_80029670(void) {  }
void TBoss1Dragon__sub_80029674(void) {  }
void TBoss1Dragon__sub_80029678(void) {  }

void check_death__12TBoss1DragonFPv(void *arg0) {
    if (is_hp_low__12TBoss1DragonFPv() != 0) {
        if (update_max_hp_phase__12TBoss1DragonFPv(arg0) != 0) {
            return;
        }
        goto block_8;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x3C0) & 0x800) && ((s32) M2C_FIELD(arg0, s16 *, 0x32C) <= 0)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3E4) == 1) {
            TBoss1Dragon__sub_800284B4(arg0, 0xC);
            return;
        }
        TBoss1Dragon__sub_800284B4(arg0, 0x15);
        return;
    }
block_8:
    ((VObj_8002967C_80029388 *)arg0)->m85(M2C_FIELD(arg0, s16 *, 0x326), 0xB);
}

extern s32 enable_v2_features;
extern s32 lbl_805D4B34;

void choose_next_action__12TBoss1DragonFPv(void *arg0) {
    if (is_hp_low__12TBoss1DragonFPv() != 0) {
        if (!(M2C_FIELD(arg0, s32 *, 0x3C0) & 0x400)) {
            if (update_max_hp_phase__12TBoss1DragonFPv(arg0) == 0) {
                if (check_phase_advance__12TBoss1DragonFPv(arg0) != 0) {
                    return;
                }
                goto block_12;
            }
        } else {
            goto block_12;
        }
    } else {
        if (!(M2C_FIELD(arg0, s32 *, 0x3C0) & 0x800) && (M2C_FIELD(arg0, s16 *, 0x32C) <= 0)) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3E4) == 1) {
                if ((s32) enable_v2_features != 0) {
                    TBoss1Dragon__sub_800284B4(arg0, 0xC);
                    return;
                }
                TObjEneDD__sub_800BBA18(arg0, 0xC);
                return;
            }
            TBoss1Dragon__sub_800284B4(arg0, 0x15);
            return;
        }
block_12:
        if ((s32) lbl_805D4B34 != 0) {
            ((VObj_80029724_80029388 *) arg0)->vcall(M2C_FIELD(arg0, s16 *, 0x326), 2);
            return;
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x760) != 0) {
            ((VObj_80029724_80029388 *) arg0)->vcall(M2C_FIELD(arg0, s16 *, 0x326), 0xB);
            return;
        }
        ((VObj_80029724_80029388 *) arg0)->vcall(M2C_FIELD(arg0, s16 *, 0x326), 9);
    }
}

extern s32 enable_v2_features;
extern s32 TBoss1Dragon__data_805D4B38;
extern s16 TBoss1Dragon__data_805D4B3C;

void TBoss1Dragon__sub_8002A384(s16 arg0) {
    if ((s32) enable_v2_features != 0) {
        TBoss1Dragon__data_805D4B3C = arg0;
        TBoss1Dragon__data_805D4B38 = 1;
    }
}

extern u32 TBoss1Dragon__data_805D4B08;
extern u32 TBoss1Dragon__data_805D4B28;

void free_resources__12TBoss1DragonFv(void) {
    if ((u32) TBoss1Dragon__data_805D4B28 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)TBoss1Dragon__data_805D4B28);
        TBoss1Dragon__data_805D4B28 = 0U;
    }
    if ((u32) TBoss1Dragon__data_805D4B08 != 0U) {
        TLobby__sub_8001FE7C((void*)TBoss1Dragon__data_805D4B08, 1);
        TBoss1Dragon__data_805D4B08 = 0U;
    }
}

extern s32 TBoss1Dragon__data_805D4B2C;

s32 get_instance__12TBoss1DragonFv(void) {
    return TBoss1Dragon__data_805D4B2C;
}

extern M2C_UNK lbl_80481B34[];

void *dt__12TBoss1DragonFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80481B34;
        destroy_enemy_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_80481B34[];

void *init_base__12TBoss1DragonFPv(void *arg0) {
    fn_800BC4C8(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80481B34;
    return arg0;
}

int TBoss1Dragon__sub_8002AC4C(void) { return 0; }
int TBoss1Dragon__sub_8002ACE0(void) { return 0; }
int TBoss1Dragon__sub_8002AD54(void) { return 0; }

void TBoss1Dragon__sub_8002ADAC(void) {  }
void TBoss1Dragon__sub_8002ADB0(void) {  }
void TBoss1Dragon__sub_8002ADB4(void) {  }
void TBoss1Dragon__sub_8002ADB8(void) {  }
void TBoss1Dragon__sub_8002ADBC(void) {  }
void TBoss1Dragon__sub_8002ADC0(void) {  }
void TBoss1Dragon__sub_8002ADC4(void) {  }

}
