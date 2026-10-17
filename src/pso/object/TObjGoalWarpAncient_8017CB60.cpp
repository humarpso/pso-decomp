#pragma push

#include "types.h"
#include "pso/TParticleCtrl.h"
#include "pso/npc/TObjNpcEnemy.h"
#include "pso/object/TObjAreaWarp.h"
#include "pso/object/TObjFish.h"
#include "pso/object/TObjMapWarpAncient.h"
#include "pso/object/TObjGoalWarpAncient.h"

struct VBase8017CB60_8017CB60_more_8017cca4_0 { char pad[0x18]; };
struct VObj8017CB60_8017CB60_more_8017cca4_0 : VBase8017CB60_8017CB60_more_8017cca4_0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

#include <stddef.h>
struct RecoveredFields_8017CCA4_arg0 {
    u8 unknown_0[0xC4];
    f32 field_C4;
    f32 field_C8;
    u8 unknown_CC[0x18];
    u8 * field_E4;
    u8 * field_E8;
};

struct RecoveredGlobal_8017CDB4___vt__19TObjGoalWarpAncient {
    s32 value;
    u8 remaining[0x50];
};

extern "C" {
extern const f32 lbl_805DBAC0;
extern const f32 lbl_805DBAC4;
extern const f32 lbl_805DBAC8;
void run_task__19TObjGoalWarpAncientFv(u8 *arg0);
s32 is_split_screen();
s32 queue_destruction__7TObjectFv(void *);
s32 register_warp_object__19TObjGoalWarpAncientFPv(int);
s32 register_warp__19TObjGoalWarpAncientFPv(int);
s32 TObjGoalWarpAncient__sub_8017D2D4(int);
s32 TObjAreaWarp__ct(void *, void *, void *);
s32 init__13TAdVIConfigGCFf(int, void *, f32);
s32 get_game_play_mode();
extern s32 __vt__19TObjGoalWarpAncient[];
extern s32 TObjGoalWarpAncient__class_name;
extern const f32 lbl_805DBABC;
u8 *TObjGoalWarpAncient__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 debug_print_area_num__12TObjAreaWarpFv();
void debug_printf_at(s32 id, const char *fmt, ...);
extern char lbl_80443288[];
extern char lbl_804432A4[];
s32 draw_debug_destinations__11TObjMapWarpFv();
extern char lbl_804432C8[];
extern char lbl_804432E8[];
void *__dt__19TObjGoalWarpAncientFv(void *arg0, s16 arg1);
void render__19TObjGoalWarpAncientFv(u8 *arg0);
s32 post_translate_matrix(void *);
s32 draw_ginja_object(s32);
s32 draw_ginja_model_with_motion(s32, s32, f32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);

extern const f32 lbl_805DBAB8;

void render__19TObjGoalWarpAncientFv(u8 *arg0) {
    if (((VObj8017CB60_8017CB60_more_8017cca4_0 *) arg0)->m8(lbl_805DBAB8, lbl_805DBABC) != 0) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, ((TObjGoalWarpAncient *)arg0)->rotation_y);
        TParticleCtrl::begin_effect_render();
        TObjFish::set_global_param(*(s32 *)((s8 *)arg0 + 0xD8));
        draw_ginja_model_with_motion(*(s32 *)&((TObjGoalWarpAncient *)arg0)->m_e8, *(s32 *)((s8 *)arg0 + 0xE4), *(f32 *)((s8 *)arg0 + 0xC4));
        TObjFish::set_global_param(*(s32 *)((s8 *)arg0 + 0xE0));
        draw_ginja_model_with_motion(*(s32 *)((s8 *)arg0 + 0xD4), *(s32 *)((s8 *)arg0 + 0xE8), *(f32 *)((s8 *)arg0 + 0xC8));
        TParticleCtrl::end_effect_render();
        TObjFish::set_global_param(*(s32 *)((s8 *)arg0 + 0xDC));
        draw_ginja_object(*(s32 *)((s8 *)arg0 + 0xD0));
        pop_matrix();
    }
}

typedef char RecoveredFields_8017CCA4_arg0_C4_offset[offsetof(RecoveredFields_8017CCA4_arg0, field_C4) == 0xC4 ? 1 : -1];
typedef char RecoveredFields_8017CCA4_arg0_C8_offset[offsetof(RecoveredFields_8017CCA4_arg0, field_C8) == 0xC8 ? 1 : -1];
typedef char RecoveredFields_8017CCA4_arg0_E4_offset[offsetof(RecoveredFields_8017CCA4_arg0, field_E4) == 0xE4 ? 1 : -1];
typedef char RecoveredFields_8017CCA4_arg0_E8_offset[offsetof(RecoveredFields_8017CCA4_arg0, field_E8) == 0xE8 ? 1 : -1];

void TObjGoalWarpAncient::debug_print_area_num() {
    debug_print_area_num__12TObjAreaWarpFv();
    TObjNpcEnemy::set_global_count(0xFF00FF);
    if ((s32) *(s32 *)&this->m_8c < 0) {
        *(s32 *)((s8 *)this + 0xD8) = TObjGoalWarpAncient::get_instance();
        debug_printf_at(0x130022, lbl_80443288);
    } else {
        *(s32 *)((s8 *)this + 0xD8) = register_warp_object__19TObjGoalWarpAncientFPv((int)(1));
        debug_printf_at(0x130022, lbl_804432A4);
    }
    TObjNpcEnemy::set_global_count(0xF0F0F0FF);
}

void run_task__19TObjGoalWarpAncientFv(u8 *arg0) {
    ((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C4 = (f32) (((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C4 + lbl_805DBAC0);
    if ((f32) (*(u32 *)((s8 *)(((RecoveredFields_8017CCA4_arg0 *)arg0)->field_E4) + 4) - 1) < ((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C4) {
        ((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C4 = (f32) lbl_805DBAC4;
    }
    ((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C8 = (f32) (((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C8 + lbl_805DBAC8);
    if ((f32) (*(u32 *)((s8 *)(((RecoveredFields_8017CCA4_arg0 *)arg0)->field_E8) + 4) - 1) < ((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C8) {
        ((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C8 = (f32) lbl_805DBAC4;
    }
    ((TObjAreaWarp *)arg0)->handle_area_selection();
}

void *__dt__19TObjGoalWarpAncientFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TObjGoalWarpAncient;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

#pragma pop

#pragma push

#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct VObjBase_8017CED8_more_8017cca4_1 { char pad[0x18]; };
struct VObj_8017CED8_more_8017cca4_1 : VObjBase_8017CED8_more_8017cca4_1 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {
void process_player_warps__11TObjMapWarpFPv(void *);
void *TObjMapWarpAncient__create(void *arg0);
void *TObjMapWarpAncient__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

typedef char RecoveredGlobal_8017CDB4___vt__19TObjGoalWarpAncient_size[sizeof(RecoveredGlobal_8017CDB4___vt__19TObjGoalWarpAncient) == 0x54 ? 1 : -1];
u8 *TObjGoalWarpAncient__ct(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r0;
    TObjAreaWarp__ct((void *) (arg0), (void *) (arg1), (void *) (arg2));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8017CDB4___vt__19TObjGoalWarpAncient *)&__vt__19TObjGoalWarpAncient).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjGoalWarpAncient__class_name;
    *(f32 *)((s8 *)arg0 + 0xC8) = (f32) lbl_805DBAC4;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) lbl_805DBAC4;
    *(s32 *)&((TObjGoalWarpAncient *)arg0)->m_e8 = TObjGoalWarpAncient__sub_8017D2D4((int) (1));
    *(s32 *)((s8 *)arg0 + 0xD0) = TObjGoalWarpAncient__sub_8017D2D4((int) (3));
    *(s32 *)((s8 *)arg0 + 0xD4) = TObjGoalWarpAncient__sub_8017D2D4((int) (5));
    if ((s32) *(s32 *)&((TObjGoalWarpAncient *)arg0)->m_8c< 0) {
        *(s32 *)((s8 *)arg0 + 0xD8) = TObjGoalWarpAncient::get_instance();
    } else {
        *(s32 *)((s8 *)arg0 + 0xD8) = register_warp_object__19TObjGoalWarpAncientFPv((int) (1));
    }
    *(s32 *)((s8 *)arg0 + 0xDC) = register_warp_object__19TObjGoalWarpAncientFPv((int) (3));
    *(s32 *)((s8 *)arg0 + 0xE0) = register_warp_object__19TObjGoalWarpAncientFPv((int) (5));
    *(s32 *)((s8 *)arg0 + 0xE4) = register_warp__19TObjGoalWarpAncientFPv((int) (0));
    *(s32 *)((s8 *)arg0 + 0xE8) = register_warp__19TObjGoalWarpAncientFPv((int) (2));
    if ((get_game_play_mode() == 1) && ((s32) *(s32 *)&((TObjGoalWarpAncient *)arg0)->m_8c >= 0)) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
    if (is_split_screen() == 1) {
        temp_r3 = ((TAdSinglePlyChrSelectGC *)0x88)->alloc();
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = init__13TAdVIConfigGCFf((int) (temp_r3), (void *) (arg0 + 0x38), (f32) (lbl_805DBABC));
        }
        *(s32 *)&((TObjGoalWarpAncient *)arg0)->m_dc = var_r0;
    } else {
        *(s32 *)&((TObjGoalWarpAncient *)arg0)->m_dc = 0;
    }
    return arg0;
}

void *TObjMapWarpAncient__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x11C);
    if (o != NULL) {
        o = TObjMapWarpAncient__ct(o, tl_05, arg0);
    }
    return o;
}

void TObjMapWarpAncient::render() {
    u8 *arg0 = (u8 *)this;
    if (((VObj_8017CED8_more_8017cca4_1*)arg0)->m8(lbl_805DBAB8, lbl_805DBABC) != 0) {
        push_matrix();
        post_translate_matrix((u8 *)&this->position);
        rotate_matrix_y(0, this->rotation_y);
        TParticleCtrl::begin_effect_render();
        if ((s32) *(s32 *)((s8 *)arg0 + 0x88) >= 0) {
            TObjFish::set_global_param(*(s32 *)&this->m_10c);
            draw_ginja_model_with_motion(*(s32 *)&this->m_100, *(s32 *)&this->m_118, *(f32 *)&this->unk_FC);
        }
        TObjFish::set_global_param(*(s32 *)&this->m_110);
        draw_ginja_object(*(s32 *)&this->m_104);
        TParticleCtrl::end_effect_render();
        TObjFish::set_global_param(*(s32 *)&this->m_114);
        draw_ginja_object(*(s32 *)&this->m_108);
        pop_matrix();
    }
}

void TObjMapWarpAncient::slot4C() {
    if ((s32) *(s32 *)((s8 *)this + 0x88) < 0) {
        TObjNpcEnemy::set_global_count(0xFF00FF);
        debug_printf_at(0x130021, lbl_804432C8);
        TObjNpcEnemy::set_global_count(0xF0F0F0FF);
        return;
    }
    draw_debug_destinations__11TObjMapWarpFv();
    TObjNpcEnemy::set_global_count(0xFF00FF);
    debug_printf_at(0x130021, lbl_804432E8);
    TObjNpcEnemy::set_global_count(0xF0F0F0FF);
}

void TObjMapWarpAncient::run_task() {
    u8 *arg0 = (u8 *)this;
  if (((s32) (*((s32 *) (((s8 *) arg0) + 0x88)))) >= 0)
  {
    *((f32 *) (((s8 *) arg0) + 0xFC)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xFC))) + lbl_805DBAC0);
    if (((f32) (((*((s32 *) (((s8 *) (*((u8 **) (((s8 *) arg0) + 0x118)))) + 4))) - 1) & 0xFFFFFFFFu)) < (*((f32 *) (((s8 *) arg0) + 0xFC))))
    {
      *((f32 *) (((s8 *) arg0) + 0xFC)) = (f32) lbl_805DBAC4;
    }
    process_player_warps__11TObjMapWarpFPv(arg0);
  }
}

}

#pragma pop
