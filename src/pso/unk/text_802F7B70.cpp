#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct FadeBase_802F9A4C { char pad[0x14]; };

struct Fade_802F9A4C : FadeBase_802F9A4C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    u8 pad2[4];
};

struct Obj_802F9A4C { u8 pad[0x6DC]; Fade_802F9A4C fades[4]; };

struct VBase_802F9B8C { char pad[0x18]; };

struct VObj_802F9B8C : VBase_802F9B8C {
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
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
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
};

struct VBase_18_444bc5 { char pad[0x18]; };

struct VObj_18_444bc5 : VBase_18_444bc5 {
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
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
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
    virtual M2C_UNK m94();
};

extern "C" {
s32 TBoss8Dragon__sub_802FAF18(void *);
s32 TBoss8Dragon__sub_802FBA84(void *);
s32 TBoss8Dragon__sub_802FBBFC(void *, int);
void TBoss8Dragon__sub_802FA478(u8 *arg0, u32 arg1);
void set_speed__12TBoss8DragonFPvf(void *, f32);
s32 TBoss8Dragon__sub_802F46F4(void *);
void TBoss8Dragon__sub_802F9850(void *, u32);
s32 TBoss8Dragon__sub_802FBA84(void *);
extern const f32 lbl_805DEEA0;
void TBoss8Dragon__sub_802F9A4C(u8 *arg0, u32 arg1);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
s32 objInBand__FP7GameObjf(void *, f32);
s32 advance_animation_playback(void *, s32);
s32 TBoss8Dragon__sub_802FBA84(void *);
s32 TBoss8Dragon__sub_802FBBFC(void *, int);
void set_active_flag__12TBoss8DragonFPv(void *);
void reset_timer__12TBoss8DragonFPv(void *);
s32 spawn_effect__12TBoss8DragonFii(void *, s32);
void enable__19TBoss8DragonEffTailFPv(void *);
void disable__19TBoss8DragonEffTailFPv(void *);
extern const f32 TBoss8Dragon__data_805DED50;
extern const f32 TBoss8Dragon__data_805DED64;
extern const f32 TBoss8Dragon__data_805DEEA4;
extern const f32 lbl_805DEEA8;
void TBoss8Dragon__sub_802F9B8C(u8 *arg0, u32 arg1);
f32 calc_scaled_value__15TObjBoss2TunnelFif(int, f32);
s32 enemy_validate_retained_target(void *);
M2C_UNK copy_position__14TObjEneEpsilonFPv(void *, void *);
M2C_UNK enemy_copy_target_destination(void *);
M2C_UNK TBoss8Dragon__sub_802F4990();
s32 TBoss8Dragon__sub_802FBA84(void *);
M2C_UNK save_position__12TBoss8DragonFPv(void *);
M2C_UNK sync_target_pos__12TBoss8DragonFPv();
s32 TBoss8Dragon__sub_802FBBFC(void *, int);
M2C_UNK TBoss8Dragon__sub_802FBCBC(void *);
void set_active_flag__12TBoss8DragonFPv(void *);
void reset_timer__12TBoss8DragonFPv(void *);
s32 try_spawn_trap__12TBoss8DragonFPv(void *);
s32 TBoss8Dragon__sub_802FC910(void *);
s32 update_linked_position__12TBoss8DragonFv(void *);
extern u8 TBoss8Dragon__data_804744A8[];
extern u8 *TBoss8Dragon__data_80541DDC[];
extern const f32 TBoss8Dragon__data_805DED7C;
extern const f32 TBoss8Dragon__data_805DEDC8;
void TBoss8Dragon__sub_802FA16C(u8 *arg0, u32 arg1);
s32 advance_animation_playback(void *, s32);
s32 mask_flags__12TBoss8DragonFiii(void *, s32, s32);
s32 TBoss8Dragon__sub_802FBBFC(void *, int);
s32 try_spawn_trap__12TBoss8DragonFPv(void *);
s32 spawn_effect__12TBoss8DragonFii(void *, s32);
extern const f32 TBoss8Dragon__data_805DEDD4;
void TBoss8Dragon__sub_802FA374(u8 *arg0, u32 arg1);
}

extern "C" {

void TBoss8Dragon__sub_802F9A4C(u8 *arg0, u32 arg1) {
    s32 i;
    switch (arg1) {
    case 4:
        for (i = 0; i < 4; i++) {
            set_speed__12TBoss8DragonFPvf(&((Obj_802F9A4C *)arg0)->fades[i], lbl_805DEEA0);
        }
        M2C_FIELD(arg0, s32 *, 0x3C0) |= 0x100;
        TBoss8Dragon__sub_802F9850(arg0, arg1);
        break;
    case 2:
    case 11:
        M2C_FIELD(arg0, s32 *, 0x754) = 0;
        if (TBoss8Dragon__sub_802F46F4(arg0) == 0) {
            TBoss8Dragon__sub_802FBA84(arg0);
        }
        break;
    case 9:
        if (TBoss8Dragon__sub_802F46F4(arg0) == 0) {
            TBoss8Dragon__sub_802FBA84(arg0);
        }
        break;
    case 0:
        switch (M2C_FIELD(arg0, s32 *, 0x84C)) {
        case 0:
            break;
        case 1:
            for (i = 0; i < 4; i++) {
                ((Obj_802F9A4C *)arg0)->fades[i].m4();
            }
            break;
        }
        TBoss8Dragon__sub_802F9850(arg0, arg1);
        break;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x3C0) &= ~0x100;
        TBoss8Dragon__sub_802F9850(arg0, arg1);
        break;
    default:
        TBoss8Dragon__sub_802F9850(arg0, arg1);
        break;
    }
}

void TBoss8Dragon__sub_802F9B8C(u8 *arg0, u32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 7;
        ((VObj_802F9B8C *)arg0)->m94();
        reset_timer__12TBoss8DragonFPv(arg0);
        set_active_flag__12TBoss8DragonFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x3C0) &= ~0x34;
        M2C_FIELD(arg0, s32 *, 0x3C0) |= 2;
        M2C_FIELD(arg0, s32 *, 0x84C) = 0;
        enable__19TBoss8DragonEffTailFPv(M2C_FIELD(arg0, u8 **, 0x67C));
        break;
    case 2:
    case 11:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
            TBoss8Dragon__sub_802FBBFC(arg0, 0x18);
        }
        break;
    case 9:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
            TBoss8Dragon__sub_802FBA84(arg0);
        }
        break;
    case 0:
        ((s32 (*)(void *))advance_animation_playback)(arg0);
        M2C_FIELD(arg0, s32 *, 0x84C)++;
        if (objInBand__FP7GameObjf(arg0, TBoss8Dragon__data_805DED50) != 0 || objInBand__FP7GameObjf(arg0, TBoss8Dragon__data_805DED64) != 0) {
            spawn_effect__12TBoss8DragonFii(arg0, 0x4003AD09);
        }
        if (M2C_FIELD(arg0, s32 *, 0x84C) > 1) {
            if (objInBand__FP7GameObjf(arg0, TBoss8Dragon__data_805DEEA4) != 0) {
                disable__19TBoss8DragonEffTailFPv(M2C_FIELD(arg0, u8 **, 0x67C));
            } else if (objInBand__FP7GameObjf(arg0, lbl_805DEEA8) != 0) {
                enable__19TBoss8DragonEffTailFPv(M2C_FIELD(arg0, u8 **, 0x67C));
            }
            M2C_FIELD(arg0, VObj_802F9B8C **, 0x67C)->m1();
        }
        break;
    }
}

void TBoss8Dragon__sub_802FA16C(u8 *arg0, u32 arg1) {
    f32 temp_f1;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;
    s32 var_r30;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        ((VObj_18_444bc5 *)(arg0))->m94();
        reset_timer__12TBoss8DragonFPv((void *) (arg0));
        set_active_flag__12TBoss8DragonFPv((void *) (arg0));
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & ~0x36);
        M2C_FIELD(arg0, s32 *, 0x84C) = 0;
        temp_f1 = M2C_FIELD(TBoss8Dragon__data_80541DDC[0], f32 *, 0x10);
        M2C_FIELD(arg0, f32 *, 0x864) = (f32) (TBoss8Dragon__data_805DEDC8 + calc_scaled_value__15TObjBoss2TunnelFif((s32) (TBoss8Dragon__data_805DED7C * temp_f1), temp_f1));
        return;
    case 2:
    case 11:
        TBoss8Dragon__sub_802FBBFC((void *) (arg0), (int) (0x18));
        return;
    case 9:
        temp_r4_2 = M2C_FIELD(arg0, s32 *, 0x84C);
        var_r30 = 0;
        if ((temp_r4_2 >= 0x96) && ((u32) M2C_FIELD(arg0, u32 *, 0x390) != 0U)) {
            if (M2C_FIELD(arg0, f32 *, 0x3AC) < M2C_FIELD(arg0, f32 *, 0x864)) {
                var_r30 = 1;
            } else if (TBoss8Dragon__sub_802FC910((void *) (arg0)) != 0) {
                var_r30 = 1;
            } else if ((s32) M2C_FIELD(arg0, s32 *, 0x84C) >= 0x258) {
                var_r30 = 1;
            }
        } else if (temp_r4_2 >= 0x12C) {
            var_r30 = 1;
        }
        if (var_r30 != 0) {
            TBoss8Dragon__sub_802FBA84((void *) (arg0));
        }
    default:
        return;
    case 8:
        try_spawn_trap__12TBoss8DragonFPv((void *) (arg0));
        update_linked_position__12TBoss8DragonFv((void *) (arg0));
        M2C_FIELD(arg0, s32 *, 0x84C) = (s32) (M2C_FIELD(arg0, s32 *, 0x84C) + 1);
        if ((s32) (M2C_FIELD(arg0, s32 *, 0x84C) % 20) == 0x13) {
            if (enemy_validate_retained_target((void *) (arg0)) != 0) {
                enemy_copy_target_destination((void *) (arg0));
            } else {
                copy_position__14TObjEneEpsilonFPv((void *) (arg0), (void *) (TBoss8Dragon__data_804744A8));
            }
            save_position__12TBoss8DragonFPv((void *) (arg0));
            TBoss8Dragon__sub_802FBCBC((void *) (arg0));
            return;
        }
        break;
    case 7:
        sync_target_pos__12TBoss8DragonFPv();
        return;
    case 6:
        M2C_FIELD(arg0, s32 *, 0x3B0) = (s32) M2C_FIELD(arg0, s32 *, 0x3B4);
        if (update_linked_position__12TBoss8DragonFv((void *) (arg0)) != 0) {
            enemy_copy_target_destination((void *) (arg0));
        } else {
            copy_position__14TObjEneEpsilonFPv((void *) (arg0), (void *) (TBoss8Dragon__data_804744A8));
        }
        save_position__12TBoss8DragonFPv((void *) (arg0));
        return;
    case 0:
        TBoss8Dragon__sub_802F4990();
        break;
    }
}

void TBoss8Dragon__sub_802FA374(u8 *arg0, u32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x84C) = 0;
        if (M2C_FIELD(arg0, s32 *, 0x3C0) & 0x40) {
            try_spawn_trap__12TBoss8DragonFPv(arg0);
        } else {
            spawn_effect__12TBoss8DragonFii(arg0, 0x4003AD00);
        }
        break;
    case 2:
    case 11:
        if (mask_flags__12TBoss8DragonFiii(arg0, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x6D8), s32 *, 8), 4) != 0) {
            TBoss8Dragon__sub_802FBBFC(arg0, 3);
        } else if (mask_flags__12TBoss8DragonFiii(arg0, M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x6D8), s32 *, 8), 0x400) != 0) {
            TBoss8Dragon__sub_802FBBFC(arg0, 5);
        } else if (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x6D8), f32 *, 0x24) > TBoss8Dragon__data_805DEDD4) {
            TBoss8Dragon__sub_802FBBFC(arg0, 0x19);
        }
        break;
    case 0:
        advance_animation_playback(arg0, M2C_FIELD(arg0, s32 *, 0x84C)++);
        break;
    }
}

void TBoss8Dragon__sub_802FA478(u8 *arg0, u32 arg1) {
    switch (arg1) {
    case 4:
        TBoss8Dragon__sub_802FAF18((void *) (arg0));
        return;
    case 2:
    case 11:
        TBoss8Dragon__sub_802FBBFC((void *) (arg0), (int) (0x18));
        return;
    case 9:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x74C) != 0) {
            TBoss8Dragon__sub_802FBBFC((void *) (arg0), (int) (0x18));
            return;
        }
        TBoss8Dragon__sub_802FBA84((void *) (arg0));
    default:
        return;
    }
}

}
