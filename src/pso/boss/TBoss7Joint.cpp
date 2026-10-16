#include "types.h"
#include "pso/boss/TBoss7Joint.h"
#include "pso/boss/TBoss8Dragon.h"
#include "pso/player/TObjPlayer.h"

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
    virtual s32 m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual s32 m86();
};

struct RecoveredGlobal_802EEC60___vt__11TBoss7Joint {
    s32 value;
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
    virtual s32 m94();
};

struct J_802EEB88 { u8 pad[0x38C]; u8 sub; };

extern "C" {
void vfunc_63__11TBoss7JointFv(void* p);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 add_radar_scaled_marker(void *, int, int, int, f32);
extern const f32 lbl_805DEBB8;
void initialize_enemy_state__9TObjEneDDFv(void *, s32);
void init_common_from__9TObjEneDDFPUc(void *, void *);
u8 * TObjEneDD__ct(void *);
extern s32 __vt__11TBoss7Joint[];
extern s32 lbl_805D3FC0;
u8 *TBoss7Joint__ct(u8 *arg0, u8 *arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5);
s32 register_object__6TLobbyFl(int);
s32 dispatch_shared_handler_b__6TLobbyFl(int);
s32 register_boss__6TLobbyFl(int);
s32 fn_8002B630(void *, void *);
s32 reset_hp__9TObjEneDDFv(void *, int, int, int);
s32 check_state_flag_2__9TObjEneDDFv(void *);
s32 transform_part_positions__9TObjEneDDFv(void *);
s32 init_position_vectors__9TObjEneDDFPv();
s32 initialize_linked_object_reference__13TUnk_804AF8A0FPv(void *, void *);
s32 TBoss7Joint_get_shell_max_hp();
extern s32 lbl_80473FB8[];
extern s32 lbl_804E45C8[];
extern const f32 lbl_805DEBBC;
}

extern "C" {

struct VOff_802EE9A4_arg0_802EE9A4 { char pad_0[0x2FC]; char f_2FC[1]; };

void vfunc_28__11TBoss7JointFv(void);
void apply_poison_status__11TBoss7JointFv(void);
void apply_paralysis__11TBoss7JointFv(void);
void apply_slow_status__11TBoss7JointFv(void);
void apply_confusion_status__11TBoss7JointFv(void);
void apply_movement_ailment__11TBoss7JointFl(void);
void apply_shock_status__11TBoss7JointFv(void);
void clear_harmful_statuses__11TBoss7JointFv(void);
void vfunc_61__11TBoss7JointFv(void);
void vfunc_62__11TBoss7JointFv(u8 *arg0);
void TBoss7Joint__vt85(void);
void *__dt__11TBoss7JointFv(void *arg0, s16 arg1);
s32 init_boss_stats__11TBoss7JointFv(void *);
s32 clear_attack_receipts__9TObjEneDDFv(void *);
void TObjEneDD__vt0(void *, int);
s32 TObjFish__sub_802EC468(void *, f32, f32);
s32 apply_damage_and_set_effect__8TObjFishFPvi(int, int, int);
void VecCopy__FP3VecPC3Vec(void *, void *);
void __dl__7TObjectFPv(void *);
void clear_obj_links__13TUnk_804AF8A0Fv(void *);
u32 is_part_active__11TBoss7JointFv(void *, int);
s32 set_flag_800__14TBoss7DeRolLeCFv(int);

void TBoss7Joint::store_position() {
    struct VOff_802EE9A4_arg0_802EE9A4 *self = (struct VOff_802EE9A4_arg0_802EE9A4 *)this;
    VecCopy__FP3VecPC3Vec(self->f_2FC, (void *)((char *)this + 56));
    VecCopy__FP3VecPC3Vec((void *)((char *)this + 116), self->f_2FC);
}

extern const f32 lbl_805DEBB0;
extern const f32 lbl_805DEBB4;

void TBoss7Joint::vfunc_62() {
    s16 temp_r4;
    s32 temp_r31;

    temp_r4 = *(s16 *)((s8 *)((u8 *)this) + 0x32C);
    temp_r31 = *(s16 *)((s8 *)((u8 *)this) + 0x2B8) - temp_r4;
    if (is_part_active__11TBoss7JointFv((void *) (((u8 *)this)), (int) (temp_r4)) != 0U) {
        TObjFish__sub_802EC468((void *) (((u8 *)this) + 0x38), (f32) (lbl_805DEBB0), (f32) (lbl_805DEBB4));
        apply_damage_and_set_effect__8TObjFishFPvi((int) (*(s32 *)((s8 *)((u8 *)this) + 0x10)), (int) (temp_r31), (int) (*(u16 *)((s8 *)((u8 *)this) + 0x2D4)));
    } else {
        *(s32 *)((s8 *)((u8 *)this) + 0x3C4) = (s32) (*(s32 *)((s8 *)((u8 *)this) + 0x3C4) - temp_r31);
        if ((s32) *(s32 *)((s8 *)((u8 *)this) + 0x3C4) <= 0) {
            *(s32 *)((s8 *)((u8 *)this) + 0x3C4) = 0;
            init_boss_stats__11TBoss7JointFv((void *) (((u8 *)this)));
        }
    }
    *(s16 *)((s8 *)((u8 *)this) + 0x32C) = (s16) *(s16 *)((s8 *)((u8 *)this) + 0x2B8);
    set_flag_800__14TBoss7DeRolLeCFv((int) (*(s32 *)((s8 *)((u8 *)this) + 0x10)));
    clear_attack_receipts__9TObjEneDDFv((void *) (((u8 *)this)));
}

extern s32 __vt__11TBoss7Joint[];

void TBoss7Joint::run_task() {
    u8 *arg0 = (u8 *)this;
    if (TObjPlayer::check_demo_mode() == 0) {
        VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x38)), (void *)((int) (*(s32 *)((s8 *)arg0 + 0x3C0))));
        this->vfunc_83();
        store_position();
        ((VObj_18 *)(arg0))->m86();
        if (*(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xA4)) + 0x18) & 1) {
            ((TBoss8Dragon *)arg0)->set_player_state_default();
            add_radar_scaled_marker((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (1), (f32) (lbl_805DEBB8));
        }
    }
}

void *__dt__11TBoss7JointFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TBoss7Joint;
        clear_obj_links__13TUnk_804AF8A0Fv(arg0);
        TObjEneDD__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_802EEC60___vt__11TBoss7Joint_size[sizeof(RecoveredGlobal_802EEC60___vt__11TBoss7Joint) == 0x1A4 ? 1 : -1];

#pragma opt_common_subs off
s32 TBoss7Joint::init_params() {
    ((s32 (*)(void *))init_position_vectors__9TObjEneDDFPv)(this);
    fn_8002B630(&((J_802EEB88 *)this)->sub, lbl_80473FB8);
    initialize_linked_object_reference__13TUnk_804AF8A0FPv(this, &((J_802EEB88 *)this)->sub);
    transform_part_positions__9TObjEneDDFv(this);
    reset_hp__9TObjEneDDFv(this, register_boss__6TLobbyFl(0x10), dispatch_shared_handler_b__6TLobbyFl(0xF), register_object__6TLobbyFl(0x10));
    *(s16 *)((s8 *)this + 0x32C) = 0x4E20;
    *(s16 *)((s8 *)this + 0x2B8) = 0x4E20;
    check_state_flag_2__9TObjEneDDFv(this);
    *(s32 **)((s8 *)this + 0x350) = lbl_804E45C8;
    *(s16 *)((s8 *)this + 0x33E) = *(s16 *)((s8 *)this + 0x2B8);
    *(f32 *)((s8 *)this + 0x37C) = lbl_805DEBBC;
    ((VObj_18_444bc5 *)(this))->m94();
    *(s32 *)((s8 *)this + 0x3BC) = 0;
    return *(s32 *)((s8 *)this + 0x3C4) = TBoss7Joint_get_shell_max_hp();
}

u8 *TBoss7Joint__ct(u8 *arg0, u8 *arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5) {
    TObjEneDD__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_802EEC60___vt__11TBoss7Joint *)&__vt__11TBoss7Joint).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3FC0;
    init_common_from__9TObjEneDDFPUc(arg0, arg1);
    *(s16 *)((s8 *)arg0 + 0x1C) = arg2;
    *(s16 *)((s8 *)arg0 + 0x2C) = arg3;
    *(s32 *)((s8 *)arg0 + 0x3C0) = arg4;
    *(s32 *)((s8 *)arg0 + 0x3B8) = arg5;
    initialize_enemy_state__9TObjEneDDFv(arg0, 0x49);
    ((TBoss7Joint *)arg0)->init_params();
    return arg0;
}

void TBoss7Joint__vt85(void) {  }
void TBoss7Joint::vfunc_28() {  }

void TBoss7Joint::vfunc_63() { *(u32*)((char*)this + 0x30) &= 0xfffff7ff; }

void TBoss7Joint::vfunc_61() {  }
void TBoss7Joint::apply_poison_status() {  }
void TBoss7Joint::apply_paralysis() {  }
void TBoss7Joint::apply_slow_status() {  }
void TBoss7Joint::apply_confusion_status() {  }
void TBoss7Joint::apply_movement_ailment(s32) {  }
void TBoss7Joint::apply_shock_status() {  }
void TBoss7Joint::clear_harmful_statuses() {  }

}
