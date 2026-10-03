#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
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
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual M2C_UNK m39();
    virtual M2C_UNK m40();
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
    virtual M2C_UNK m85(s16, M2C_UNK);
    virtual M2C_UNK m86();
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
    virtual void m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual M2C_UNK m103();
};

struct RecoveredGlobal_80359DC4_lbl_804F1A78 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK project_sound_origin_from_camera(void *, void *, f32);
s32 query_teammate_state__9TObjEneDDFPv();
s32 update_lobby_state__9TObjEneDDFPv(void *);
s32 is_main_phase_15__9TObjEneDDFv();
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
M2C_UNK TObjEneDD__sub_800BBA0C(void *);
M2C_UNK add_radar_scaled_marker(void *, int, int, int, f32);
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);
M2C_UNK run_tasks__7TObjectFv(void *);
M2C_UNK TBoss8Dragon__sub_802FAC78(void *);
M2C_UNK TBoss8Dragon__sub_802FAE74(void *);
M2C_UNK store_position__12TBoss8DragonFi(void *);
M2C_UNK check_death__12TBoss8DragonFPv(void *);
M2C_UNK TBoss8Dragon__sub_802FCDB8(void *);
extern s32 lbl_805D53A0;
extern s32 TBoss8Dragon__data_805D69B8;
extern const f32 lbl_805E00B0;
extern const f32 lbl_805E00B4;
void TBoss8Dragon__sub_80359A7C(u8 *arg0);
u8 * TBoss8Dragon__ct(void *, M2C_UNK, s32);
extern M2C_UNK lbl_804F1A78[];
u8 *TBoss8Dragon__sub_80359DC4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
}

extern "C" {

void *TBoss8Dragon__sub_80359D6C(void *arg0, s16 arg1);
void TBoss8Dragon__sub_802FD354(void *, int);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_804F1A78[];

void TBoss8Dragon__sub_80359A7C(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;
    s32 temp_r30;
    s32 temp_r30_2;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18 *)(arg0))->m103();
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x3C0) & 8) {
        send_entity_set_flags__6TLobbyFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x74C) != 0) {
        TBoss8Dragon__sub_802FAE74((void *) (arg0));
        M2C_FIELD(arg0, s32 *, 0x754) = (s32) (M2C_FIELD(arg0, s32 *, 0x754) + 1);
    } else if ((is_main_phase_15__9TObjEneDDFv() != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x6D4) == 0)) {
        temp_r30 = M2C_FIELD(arg0, s32 *, 0x3E0);
        if (update_lobby_state__9TObjEneDDFPv((void *) (arg0)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x3E0) = 0;
            if ((s32) M2C_FIELD(arg0, s32 *, 0x3E0) != temp_r30) {
                M2C_FIELD(arg0, s32 *, 0x8A0) = 1;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x3E0) = 1;
        }
    }
    temp_r30_2 = query_teammate_state__9TObjEneDDFPv();
    ((VObj_18 *)(arg0))->m39();
    ((VObj_18 *)(arg0))->m40();
    if (temp_r30_2 == 0) {
        temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
        if ((temp_r0 == 0x15) || (temp_r0 == 0x17)) {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x800);
        } else {
            M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFF7FF);
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x74C) != 0) {
            if ((s32) M2C_FIELD(arg0, u16 *, 0x750) == (s32) lbl_805D53A0) {
                if ((s32) TBoss8Dragon__data_805D69B8 == 0) {
                    TBoss8Dragon__sub_802FAC78((void *) (arg0));
                } else {
                    check_death__12TBoss8DragonFPv((void *) (arg0));
                }
                ((VObj_18 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 8);
                ((VObj_18 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 0);
            } else {
                if ((s32) TBoss8Dragon__data_805D69B8 == 0) {
                    TBoss8Dragon__sub_802FAC78((void *) (arg0));
                }
                ((VObj_18 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 0);
            }
        } else {
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x3E0);
            if (temp_r0_2 != 1) {
                if (temp_r0_2 == 2) {
                    ((VObj_18 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 2);
                } else {
                    TBoss8Dragon__sub_802FCDB8((void *) (arg0));
                }
                ((VObj_18 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 8);
                ((VObj_18 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 0);
            } else {
                ((VObj_18 *)(arg0))->m85(M2C_FIELD(arg0, s16 *, 0x326), 0);
            }
        }
    }
    TObjEneDD__sub_800BBA0C((void *) (arg0));
    ((VObj_18 *)(arg0))->m86();
    store_position__12TBoss8DragonFi((void *) (arg0));
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
    add_radar_scaled_marker((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (1), (f32) (lbl_805E00B0));
    if (temp_r30_2 == 0) {
        run_tasks__7TObjectFv((void *) (arg0 + 0x3C4));
    }
    project_sound_origin_from_camera((void *) (arg0 + 0x38), (void *) (arg0 + 0x634), (f32) (lbl_805E00B4));
}

void *TBoss8Dragon__sub_80359D6C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F1A78;
        TBoss8Dragon__sub_802FD354(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80359DC4_lbl_804F1A78_size[sizeof(RecoveredGlobal_80359DC4_lbl_804F1A78) == 0x1B0 ? 1 : -1];
u8 *TBoss8Dragon__sub_80359DC4(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    TBoss8Dragon__ct(arg0, arg1, arg2);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80359DC4_lbl_804F1A78 *)&lbl_804F1A78).value;
    M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 0x40);
    M2C_FIELD(arg0, s16 *, 0x67A) = -1;
    M2C_FIELD(arg0, s16 *, 0x32C) = arg3;
    M2C_FIELD(arg0, s16 *, 0x2B8) = arg3;
    return arg0;
}

}
