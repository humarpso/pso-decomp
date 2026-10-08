#pragma push

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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
    M2C_UNK value;
    u8 remaining[0x50];
};

extern "C" {
void handle_area_selection__12TObjAreaWarpFPv(void *);
extern const f32 lbl_805DBAC0;
extern const f32 lbl_805DBAC4;
extern const f32 lbl_805DBAC8;
void run_task__19TObjGoalWarpAncientFv(u8 *arg0);
s32 is_split_screen();
s32 queue_destruction__7TObjectFv(void *);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 register_warp_object__19TObjGoalWarpAncientFPv(int);
s32 get_instance__19TObjGoalWarpAncientFv();
s32 register_warp__19TObjGoalWarpAncientFPv(int);
s32 TObjGoalWarpAncient__sub_8017D2D4(int);
s32 TObjAreaWarp__ct(void *, void *, void *);
s32 init__13TAdVIConfigGCFPvf(int, void *, f32);
s32 get_game_play_mode();
extern M2C_UNK __vt__19TObjGoalWarpAncient[];
extern s32 lbl_805D31EC;
extern const f32 lbl_805DBABC;
extern const f32 lbl_805DBAC4;
u8 *TObjGoalWarpAncient__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 register_warp_object__19TObjGoalWarpAncientFPv(int);
s32 get_instance__19TObjGoalWarpAncientFv();
M2C_UNK debug_print_area_num__12TObjAreaWarpFPv();
void set_global_count__12TObjNpcEnemyFi(s32 arg0);
void debug_printf_at(s32 id, const char *fmt, ...);
extern char lbl_80443288[];
extern char lbl_804432A4[];
void TObjGoalWarpAncient__vt18(void *arg0);
M2C_UNK draw_debug_destinations__11TObjMapWarpFPv();
void set_global_count__12TObjNpcEnemyFi(s32 arg0);
void debug_printf_at(s32 id, const char *fmt, ...);
extern char lbl_804432C8[];
extern char lbl_804432E8[];
void TObjMapWarpAncient__vt17(void *arg0);
}

extern "C" {

void *__dt__19TObjGoalWarpAncientFv(void *arg0, s16 arg1);
void render__19TObjGoalWarpAncientFv(u8 *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_object(s32);
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern const f32 lbl_805DBAB8;
extern const f32 lbl_805DBABC;

void render__19TObjGoalWarpAncientFv(u8 *arg0) {
    if (((VObj8017CB60_8017CB60_more_8017cca4_0 *) arg0)->m8(lbl_805DBAB8, lbl_805DBABC) != 0) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xD8));
        draw_ginja_model_with_motion(M2C_FIELD(arg0, s32 *, 0xCC), M2C_FIELD(arg0, s32 *, 0xE4), M2C_FIELD(arg0, f32 *, 0xC4));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xE0));
        draw_ginja_model_with_motion(M2C_FIELD(arg0, s32 *, 0xD4), M2C_FIELD(arg0, s32 *, 0xE8), M2C_FIELD(arg0, f32 *, 0xC8));
        end_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xDC));
        draw_ginja_object(M2C_FIELD(arg0, s32 *, 0xD0));
        pop_matrix();
    }
}

extern M2C_UNK __vt__19TObjGoalWarpAncient[];

typedef char RecoveredFields_8017CCA4_arg0_C4_offset[offsetof(RecoveredFields_8017CCA4_arg0, field_C4) == 0xC4 ? 1 : -1];
typedef char RecoveredFields_8017CCA4_arg0_C8_offset[offsetof(RecoveredFields_8017CCA4_arg0, field_C8) == 0xC8 ? 1 : -1];
typedef char RecoveredFields_8017CCA4_arg0_E4_offset[offsetof(RecoveredFields_8017CCA4_arg0, field_E4) == 0xE4 ? 1 : -1];
typedef char RecoveredFields_8017CCA4_arg0_E8_offset[offsetof(RecoveredFields_8017CCA4_arg0, field_E8) == 0xE8 ? 1 : -1];

void TObjGoalWarpAncient__vt18(void *arg0) {
    debug_print_area_num__12TObjAreaWarpFPv();
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x8C) < 0) {
        M2C_FIELD(arg0, s32 *, 0xD8) = get_instance__19TObjGoalWarpAncientFv();
        debug_printf_at(0x130022, lbl_80443288);
    } else {
        M2C_FIELD(arg0, s32 *, 0xD8) = register_warp_object__19TObjGoalWarpAncientFPv((int)(1));
        debug_printf_at(0x130022, lbl_804432A4);
    }
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

void run_task__19TObjGoalWarpAncientFv(u8 *arg0) {
    ((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C4 = (f32) (((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C4 + lbl_805DBAC0);
    if ((f32) (M2C_FIELD(((RecoveredFields_8017CCA4_arg0 *)arg0)->field_E4, u32 *, 4) - 1) < ((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C4) {
        ((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C4 = (f32) lbl_805DBAC4;
    }
    ((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C8 = (f32) (((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C8 + lbl_805DBAC8);
    if ((f32) (M2C_FIELD(((RecoveredFields_8017CCA4_arg0 *)arg0)->field_E8, u32 *, 4) - 1) < ((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C8) {
        ((RecoveredFields_8017CCA4_arg0 *)arg0)->field_C8 = (f32) lbl_805DBAC4;
    }
    handle_area_selection__12TObjAreaWarpFPv(arg0);
}

void *__dt__19TObjGoalWarpAncientFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TObjGoalWarpAncient;
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

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
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
extern const f32 lbl_805DBAC0;
extern const f32 lbl_805DBAC4;
void run_task__18TObjMapWarpAncientFv(u8 *arg0);
}

extern "C" {

void *TObjMapWarpAncient__create(void *arg0);
void render__18TObjMapWarpAncientFv(u8 *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_object(s32);
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);
void *TObjMapWarpAncient__ct(void *, void *, void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern void *tl_05;

typedef char RecoveredGlobal_8017CDB4___vt__19TObjGoalWarpAncient_size[sizeof(RecoveredGlobal_8017CDB4___vt__19TObjGoalWarpAncient) == 0x54 ? 1 : -1];
u8 *TObjGoalWarpAncient__ct(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r0;
    TObjAreaWarp__ct((void *) (arg0), (void *) (arg1), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8017CDB4___vt__19TObjGoalWarpAncient *)&__vt__19TObjGoalWarpAncient).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D31EC;
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805DBAC4;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DBAC4;
    M2C_FIELD(arg0, s32 *, 0xCC) = TObjGoalWarpAncient__sub_8017D2D4((int) (1));
    M2C_FIELD(arg0, s32 *, 0xD0) = TObjGoalWarpAncient__sub_8017D2D4((int) (3));
    M2C_FIELD(arg0, s32 *, 0xD4) = TObjGoalWarpAncient__sub_8017D2D4((int) (5));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x8C) < 0) {
        M2C_FIELD(arg0, s32 *, 0xD8) = get_instance__19TObjGoalWarpAncientFv();
    } else {
        M2C_FIELD(arg0, s32 *, 0xD8) = register_warp_object__19TObjGoalWarpAncientFPv((int) (1));
    }
    M2C_FIELD(arg0, s32 *, 0xDC) = register_warp_object__19TObjGoalWarpAncientFPv((int) (3));
    M2C_FIELD(arg0, s32 *, 0xE0) = register_warp_object__19TObjGoalWarpAncientFPv((int) (5));
    M2C_FIELD(arg0, s32 *, 0xE4) = register_warp__19TObjGoalWarpAncientFPv((int) (0));
    M2C_FIELD(arg0, s32 *, 0xE8) = register_warp__19TObjGoalWarpAncientFPv((int) (2));
    if ((get_game_play_mode() == 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x8C) >= 0)) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
    if (is_split_screen() == 1) {
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x88));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = init__13TAdVIConfigGCFPvf((int) (temp_r3), (void *) (arg0 + 0x38), (f32) (lbl_805DBABC));
        }
        M2C_FIELD(arg0, s32 *, 0xC0) = var_r0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
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

extern const f32 lbl_805DBAB8;
extern const f32 lbl_805DBABC;

void render__18TObjMapWarpAncientFv(u8 *arg0) {
    if (((VObj_8017CED8_more_8017cca4_1*)arg0)->m8(lbl_805DBAB8, lbl_805DBABC) != 0) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        begin_effect_render__13TParticleCtrlFv();
        if ((s32) M2C_FIELD(arg0, s32 *, 0x88) >= 0) {
            set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x10C));
            draw_ginja_model_with_motion(M2C_FIELD(arg0, s32 *, 0x100), M2C_FIELD(arg0, s32 *, 0x118), M2C_FIELD(arg0, f32 *, 0xFC));
        }
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x110));
        draw_ginja_object(M2C_FIELD(arg0, s32 *, 0x104));
        end_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x114));
        draw_ginja_object(M2C_FIELD(arg0, s32 *, 0x108));
        pop_matrix();
    }
}

void TObjMapWarpAncient__vt17(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x88) < 0) {
        set_global_count__12TObjNpcEnemyFi(0xFF00FF);
        debug_printf_at(0x130021, lbl_804432C8);
        set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
        return;
    }
    draw_debug_destinations__11TObjMapWarpFPv();
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    debug_printf_at(0x130021, lbl_804432E8);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

void run_task__18TObjMapWarpAncientFv(u8 *arg0) {
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
