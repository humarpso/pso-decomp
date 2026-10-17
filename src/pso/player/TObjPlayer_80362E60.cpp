#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/items/TItemWeapon.h"
#include "pso/player/TUnk_804F27E0.h"

struct VBase_18_f1aa6a { char pad[0x18]; };

struct VObj_18_f1aa6a : VBase_18_f1aa6a {
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
    virtual s32 m63(s32, s32 *);
};

#include <stddef.h>
struct Stack_80362FB4 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_80362FB4_lbl_80479FC8 {
    s32 value;
    u8 remaining[0xC];
};

extern "C" {
s32 draw_weapon_model(void *);
s16 get_validated_attack_stage(void *);
s32 fire_shot_at_target__11TItemWeaponFv(void *, void *, int, int);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *TObjPlayer__sub_803630F0(u8 *arg0);
s32 rotate_matrix_x(int, int);
s32 push_matrix();
s32 pop_matrix();
f32 post_translate_matrix(void *);
extern RecoveredGlobal_80362FB4_lbl_80479FC8 lbl_80479FC8;
void TObjPlayer__sub_80362FB4(u8 *arg0);
void *__dt__13TUnk_804F27E0Fv(void *arg0, s16 arg1);
s32 get_attack_stage__11TItemWeaponFv();
void construct_srank_weapon(void *);
void __dt__13TUnk_804A4948Fv(void *, int);
void set_status_flags__10TObjPlayerFUl(void *, int);

void TObjPlayer::set_pause_flag_from_state() {
    if (get_attack_stage__11TItemWeaponFv() == 2) {
        this->m_1fc = (s32) (this->m_1fc | 1);
        return;
    }
    this->m_1fc = (s32) (this->m_1fc & 0xFFFFFFFE);
}

void TObjPlayer::create_cane_if_ready(s32 arg0, void *position) {
    if (get_attack_stage__11TItemWeaponFv() == 0) {
        ((TObjPlayer *)tl_05)->create_item_eff_cane((TItem*)arg0, (s32)(-1), (s32)0x1BD);
    }
}

extern s32 lbl_804F27E0[];

void TUnk_804F27E0::emit_marker_effects() {
    u8 *arg0 = (u8 *)this;
    s32 sp8;
    u8 *temp_r3;
    temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0xF0));
    ((VObj_18_f1aa6a *)(temp_r3))->m63(0x30, &sp8);
    if (get_validated_attack_stage(*(u8 **)((s8 *)arg0 + 0xF0) + 0x7CC) == 2) {
        fire_shot_at_target__11TItemWeaponFv((void *) (arg0), (void *) (&sp8), (int) (*(s32 *)((s8 *)arg0 + 0xF4)), (int) (0));
        fire_shot_at_target__11TItemWeaponFv((void *) (arg0), (void *) (&sp8), (int) (*(s32 *)((s8 *)arg0 + 0xF4)), (int) (0x1555));
        fire_shot_at_target__11TItemWeaponFv((void *) (arg0), (void *) (&sp8), (int) (*(s32 *)((s8 *)arg0 + 0xF4)), (int) (-0x1555));
    } else {
        fire_shot_at_target__11TItemWeaponFv((void *) (arg0), (void *) (&sp8), (int) (*(s32 *)((s8 *)arg0 + 0xF4)), (int) (0));
    }
    TObjPlayer::create_cane_if_ready((s32)((void *) (arg0)), (void *)((void *) (&sp8)));
}

typedef char RecoveredGlobal_80362FB4_lbl_80479FC8_size[sizeof(RecoveredGlobal_80362FB4_lbl_80479FC8) == 0x10 ? 1 : -1];
void TObjPlayer__sub_80362FB4(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80362FB4, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80362FB4, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80362FB4, sp10) == 0x8) ? 1 : -1];
    Stack_80362FB4 stack;
    if (TObjPlayer::get_player_list() == 0) {
        stack.sp8 = *(s32 *)((s8 *)(&lbl_80479FC8.value) + 0);
        stack.spC = *(s32 *)((s8 *)(&lbl_80479FC8.value) + 4);
        stack.sp10 = *(s32 *)((s8 *)(&lbl_80479FC8.value) + 8);
        post_translate_matrix((void *) (&stack.sp8));
        rotate_matrix_x((int) (0), (int) (0x18E3));
        if (*(s32 *)((s8 *)arg0 + 0x1FC) & 1) {
            push_matrix();
            rotate_matrix_x((int) (0), (int) (0x2AAA));
            ((TItemWeapon *)arg0)->check_boss2tunnel_field_f4();
            pop_matrix();
            push_matrix();
            rotate_matrix_x((int) (0), (int) (-0x2AAA));
            ((TItemWeapon *)arg0)->check_boss2tunnel_field_f4();
            pop_matrix();
        }
    }
}

void TUnk_804F27E0::reserved_53() {
    u8 *arg0 = (u8 *)this;
    if (((TItemWeapon *)arg0)->test_flags_1b8(0x01000000U) == 0U) {
        draw_weapon_model((void *) (arg0));
    }
}

void *TUnk_804F27E0::enter_state_804F27E0(s32 _w1, void *_w2) {
    construct_srank_weapon(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804F27E0;
    set_status_flags__10TObjPlayerFUl(this, 3);
    *(u32 *)&(*(s32 *)((u8 *)this + 0x1FC)) = 0;
    return this;
}
u8 *TObjPlayer__sub_803630F0(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x200));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)((TUnk_804F27E0 *)temp_r3)->enter_state_804F27E0((s32)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

void *__dt__13TUnk_804F27E0Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804F27E0;
        __dt__13TUnk_804A4948Fv(arg0, 0);
        if (arg1 > 0) {
            TObjPlayer::free_obj_heap(arg0);
        }
    }
    return arg0;
}

}
