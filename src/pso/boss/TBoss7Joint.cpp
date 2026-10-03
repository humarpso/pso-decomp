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
    virtual M2C_UNK m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual M2C_UNK m86();
};

struct RecoveredGlobal_802EEC60___vt__11TBoss7Joint {
    M2C_UNK value;
    u8 remaining[0x1A0];
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

struct J_802EEB88 { u8 pad[0x38C]; u8 sub; };

extern "C" {
void TBoss7Joint__vt61(void* p);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
M2C_UNK add_radar_scaled_marker(void *, int, int, int, f32);
void store_position__11TBoss7JointFPv(void *arg0);
extern const f32 lbl_805DEBB8;
void run_task__11TBoss7JointFv(u8 *arg0);
void initialize_enemy_state__9TObjEneDDFPv(void *, s32);
void init_common_from__9TObjEneDDFPvPv(void *, void *);
u8 * TObjEneDD__ct(void *);
extern M2C_UNK __vt__11TBoss7Joint[];
extern s32 lbl_805D3FC0;
u8 *TBoss7Joint__ct(u8 *arg0, u8 *arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5);
s32 register_object__6TLobbyFPv(int);
s32 dispatch_shared_handler_b__6TLobbyFPv(int);
s32 register_boss__6TLobbyFPv(int);
M2C_UNK fn_8002B630(void *, void *);
M2C_UNK reset_hp__9TObjEneDDFPv(void *, int, int, int);
M2C_UNK check_state_flag_2__9TObjEneDDFPv(void *);
M2C_UNK TObjEneDD__sub_800BA934(void *);
M2C_UNK init_position_vectors__9TObjEneDDFPv();
M2C_UNK initialize_linked_object_reference(void *, void *);
s32 TBoss7Joint_get_shell_max_hp();
extern M2C_UNK lbl_80473FB8[];
extern M2C_UNK lbl_804E45C8[];
extern const f32 lbl_805DEBBC;
M2C_UNK TBoss7Joint__sub_802EEB88(void *arg0);
}

extern "C" {

struct VOff_802EE9A4_arg0_802EE9A4 { char pad_0[0x2FC]; char f_2FC[1]; };

void TBoss7Joint__vt26(void);
void TBoss7Joint__vt42(void);
void TBoss7Joint__vt43(void);
void TBoss7Joint__vt44(void);
void TBoss7Joint__vt45(void);
void TBoss7Joint__vt46(void);
void TBoss7Joint__vt47(void);
void TBoss7Joint__vt48(void);
void TBoss7Joint__vt59(void);
void TBoss7Joint__vt60(u8 *arg0);
void TBoss7Joint__vt85(void);
void *__dt__11TBoss7JointFv(void *arg0, s16 arg1);
void store_position__11TBoss7JointFPv(void *arg0);
M2C_UNK TBoss7Joint__sub_802EE820(void *);
M2C_UNK clear_attack_receipts(void *);
void TObjEneDD__vt0(void *, int);
M2C_UNK TObjFish__sub_802EC468(void *, f32, f32);
M2C_UNK TObjFish__sub_802ECB70(int, int, int);
void VecCopy__FP3VecPC3Vec(void *, void *);
void __dl__7TObjectFPv(void *);
void clear_obj_links(void *);
u32 is_part_active__11TBoss7JointFPv(void *, int);
M2C_UNK set_flag_800__11TBoss7JointFPv(int);

void store_position__11TBoss7JointFPv(void *arg0) {
    struct VOff_802EE9A4_arg0_802EE9A4 *self = (struct VOff_802EE9A4_arg0_802EE9A4 *)arg0;
    VecCopy__FP3VecPC3Vec(self->f_2FC, (void *)((char *)arg0 + 56));
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 116), self->f_2FC);
}

extern const f32 lbl_805DEBB0;
extern const f32 lbl_805DEBB4;

void TBoss7Joint__vt60(u8 *arg0) {
    s16 temp_r4;
    s32 temp_r31;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x32C);
    temp_r31 = M2C_FIELD(arg0, s16 *, 0x2B8) - temp_r4;
    if (is_part_active__11TBoss7JointFPv((void *) (arg0), (int) (temp_r4)) != 0U) {
        TObjFish__sub_802EC468((void *) (arg0 + 0x38), (f32) (lbl_805DEBB0), (f32) (lbl_805DEBB4));
        TObjFish__sub_802ECB70((int) (M2C_FIELD(arg0, s32 *, 0x10)), (int) (temp_r31), (int) (M2C_FIELD(arg0, u16 *, 0x2D4)));
    } else {
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) - temp_r31);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x3C4) = 0;
            TBoss7Joint__sub_802EE820((void *) (arg0));
        }
    }
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s16 *, 0x2B8);
    set_flag_800__11TBoss7JointFPv((int) (M2C_FIELD(arg0, s32 *, 0x10)));
    clear_attack_receipts((void *) (arg0));
}

extern M2C_UNK __vt__11TBoss7Joint[];

void run_task__11TBoss7JointFv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() == 0) {
        VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x38)), (void *)((int) (M2C_FIELD(arg0, s32 *, 0x3C0))));
        ((VObj_18 *)(arg0))->m81();
        store_position__11TBoss7JointFPv((void *) (arg0));
        ((VObj_18 *)(arg0))->m86();
        if (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), s32 *, 0x18) & 1) {
            set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
            add_radar_scaled_marker((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (1), (f32) (lbl_805DEBB8));
        }
    }
}

void *__dt__11TBoss7JointFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TBoss7Joint;
        clear_obj_links(arg0);
        TObjEneDD__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_802EEC60___vt__11TBoss7Joint_size[sizeof(RecoveredGlobal_802EEC60___vt__11TBoss7Joint) == 0x1A4 ? 1 : -1];

#pragma opt_common_subs off
M2C_UNK TBoss7Joint__sub_802EEB88(void *arg0) {
    ((M2C_UNK (*)(void *))init_position_vectors__9TObjEneDDFPv)(arg0);
    fn_8002B630(&((J_802EEB88 *)arg0)->sub, lbl_80473FB8);
    initialize_linked_object_reference(arg0, &((J_802EEB88 *)arg0)->sub);
    TObjEneDD__sub_800BA934(arg0);
    reset_hp__9TObjEneDDFPv(arg0, register_boss__6TLobbyFPv(0x10), dispatch_shared_handler_b__6TLobbyFPv(0xF), register_object__6TLobbyFPv(0x10));
    M2C_FIELD(arg0, s16 *, 0x32C) = 0x4E20;
    M2C_FIELD(arg0, s16 *, 0x2B8) = 0x4E20;
    check_state_flag_2__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x350) = lbl_804E45C8;
    M2C_FIELD(arg0, s16 *, 0x33E) = M2C_FIELD(arg0, s16 *, 0x2B8);
    M2C_FIELD(arg0, f32 *, 0x37C) = lbl_805DEBBC;
    ((VObj_18_444bc5 *)(arg0))->m94();
    M2C_FIELD(arg0, s32 *, 0x3BC) = 0;
    return M2C_FIELD(arg0, s32 *, 0x3C4) = TBoss7Joint_get_shell_max_hp();
}

u8 *TBoss7Joint__ct(u8 *arg0, u8 *arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5) {
    TObjEneDD__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802EEC60___vt__11TBoss7Joint *)&__vt__11TBoss7Joint).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3FC0;
    init_common_from__9TObjEneDDFPvPv(arg0, arg1);
    M2C_FIELD(arg0, s16 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x3C0) = arg4;
    M2C_FIELD(arg0, s32 *, 0x3B8) = arg5;
    initialize_enemy_state__9TObjEneDDFPv(arg0, 0x49);
    TBoss7Joint__sub_802EEB88((void *)((void *) (arg0)));
    return arg0;
}

void TBoss7Joint__vt85(void) {  }
void TBoss7Joint__vt26(void) {  }

void TBoss7Joint__vt61(void* p) { *(u32*)((char*)p + 0x30) &= 0xfffff7ff; }

void TBoss7Joint__vt59(void) {  }
void TBoss7Joint__vt42(void) {  }
void TBoss7Joint__vt43(void) {  }
void TBoss7Joint__vt44(void) {  }
void TBoss7Joint__vt45(void) {  }
void TBoss7Joint__vt46(void) {  }
void TBoss7Joint__vt47(void) {  }
void TBoss7Joint__vt48(void) {  }

}
