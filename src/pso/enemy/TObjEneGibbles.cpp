#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_802D7BE0 {
    M2C_UNK sp8;
    f32 spC;
};

struct Stack_802D8140
{
  f32 sp8;
  f32 spC;
  f32 sp10;
};

#include <stddef.h>
struct Stack_802D7ED4 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_802D7ED4_lbl_80472780 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_802D7ED4_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_802D7A2C_lbl_804E28B0
{
  M2C_UNK value;
  u8 remaining[0x13C];
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 *csnVectorUnder(M2C_UNK *, s32, M2C_UNK, f32);
M2C_UNK spawn_particle_effect(void *, int);
M2C_UNK TObjEneGibbles__sub_802D7ACC(void *, void *, f32);
extern const f32 TObjEneGibbles__data_805DE7E8;
extern const f32 TObjEneGibbles__data_805DE7F4;
s32 TObjEneGibbles__sub_802D7BE0(s32 arg0);
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK queue_destruction__7TObjectFv();
M2C_UNK rotate_xz_pair_by_angle(f32 *, f32 *, s32, f32);
M2C_UNK spawn_effect_at_ground__10TObjPlayerFPvi(f32 *, M2C_UNK);
M2C_UNK TObjPlayer__sub_800D93C4(f32 *, M2C_UNK);
M2C_UNK advance_animation_playback();
M2C_UNK play_sound_effect(int, void *, int, int);
int TObjEneGibbles__sub_802D7F94(void *, int);
M2C_UNK vec3_add_to(f32 *, void *);
extern const f32 lbl_805DE7E0;
extern const f32 TObjEneGibbles__data_805DE7E4;
extern const f32 lbl_805DE810;
extern const f32 lbl_805DE814;
void TObjEneGibbles__sub_802D8140(u8 *arg0);
s32 TObjEneGibbles__sub_800D8988(void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK play_sound_effect(int, void *, int, int);
M2C_UNK TObjEneGibbles__sub_802D7ACC(void *, void *, f32);
int TObjEneGibbles__sub_802D7F94(void *, int);
extern const f32 TObjEneGibbles__data_805DE7F4;
extern const f32 TObjEneGibbles__data_805DE7F8;
extern const f32 lbl_805DE7FC;
extern const f32 lbl_805DE800;
void TObjEneGibbles__sub_802D7C78(s32 arg0);
s32 TObjEneGibbles__sub_800D8988(void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK play_sound_effect(int, void *, int, int);
M2C_UNK TObjEneGibbles__sub_802D7ACC(void *, void *, f32);
int TObjEneGibbles__sub_802D7F94(void *, int);
extern const f32 TObjEneGibbles__data_805DE7F4;
extern const f32 lbl_805DE804;
extern const f32 lbl_805DE808;
void TObjEneGibbles__sub_802D7DAC(s32 arg0);
s32 render_anim_model__10TObjPlayerFPvf(void *, f32);
s32 matrix_mult_vec(int, void *, void *);
s32 set_monitor_position_vec3__10TObjPlayerFPvPv(int, void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
s32 pop_matrix();
f32 post_translate_matrix(void *);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
extern RecoveredGlobal_802D7ED4_lbl_80472780 lbl_80472780;
extern RecoveredGlobal_802D7ED4_lbl_8058D490 lbl_8058D490;
extern s32 lbl_805D5678;
void TObjEneGibbles__sub_802D7ED4(u8 *arg0, s32 arg1, s32 arg2);
extern RecoveredGlobal_802D7A2C_lbl_804E28B0 lbl_804E28B0;
extern const f32 lbl_805DE7E0;
void TObjEneGibbles__sub_802D7A2C(M2C_UNK arg0, s32 arg1, f32 farg0);
s32 get_main_phase();
s32 is_split_screen();
void TCameraCtrl__sub_8006A044(s32, f32);
s32 get_stat_by_key_state__10TObjPlayerFPv(void *);
u32 get_player_by_client_id(void *);
extern s32 lbl_805D53A0;
extern const f32 lbl_805DE7E0;
void TObjEneGibbles__sub_802D7A54(void *arg0);
}

extern "C" {

void TObjEneGibbles__sub_802D7E3C(void);
int TObjEneGibbles__sub_802D7F94(void *, int);
void TObjEneGibbles__sub_802D8034(void);
void set_motion__14TObjEneGibblesFPv(void *arg0);
void sync_state__14TObjEneGibblesFPv(void *arg0);
void update_action_state__14TObjEneGibblesFPv(u8 *arg0);
void update_move_state__14TObjEneGibblesFPv(void *arg0);
void update_position__14TObjEneGibblesFPv(u8 *arg0);
void update_shadow_height__14TObjEneGibblesFPv(void *arg0);
M2C_UNK advance_animation_playback();
M2C_UNK play_sound_effect(int, void *, int, int);
M2C_UNK apply_actor_gravity(void *, int, f32);
M2C_UNK check_enemy_body_collisions(void *);
M2C_UNK submit_cursor_candidate(void *, int);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 calc_boss4_scale__10TObjPlayerFi(void *, int);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
M2C_UNK clamp_angle__14TObjEneGibblesFPvi(void *, int);
M2C_UNK minimap_render_dot(void *, int, int, int);
M2C_UNK refresh_lobby_state__10TObjPlayerFPv(void *);
M2C_UNK send_entity_set_flags__6TLobbyFPv(void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);

typedef struct RecoveredGlobal_802D7A2C_lbl_804E28B0 RecoveredGlobal_802D7A2C_lbl_804E28B0;
typedef char RecoveredGlobal_802D7A2C_lbl_804E28B0_size[((sizeof(RecoveredGlobal_802D7A2C_lbl_804E28B0)) == 0x140) ? (1) : (-1)];
void TObjEneGibbles__sub_802D7A2C(M2C_UNK arg0, s32 arg1, f32 farg0) {
  f32 var_f1;
  u8 *new_var;
  var_f1 = farg0;
  if (var_f1 < lbl_805DE7E0)
  {
    var_f1 = lbl_805DE7E0;
  }
  new_var = (u8 *) (&lbl_804E28B0.value);
  new_var = new_var + (arg1 * 0x10);
  *((f32 *) (((s8 *) new_var) + 8)) = var_f1;
}

void TObjEneGibbles__sub_802D7A54(void *arg0) {
    s16 t;
    s16 u;
    u32 r;
    if ((get_main_phase() == 0xF || is_split_screen() == 0) && (r = get_player_by_client_id((void *)lbl_805D53A0)) != 0) {
        t = get_stat_by_key_state__10TObjPlayerFPv((void *)r);
        u = get_stat_by_key_state__10TObjPlayerFPv(arg0);
        if (u == t) {
            TCameraCtrl__sub_8006A044(0x1E, lbl_805DE7E0);
        }
    }
}

s32 TObjEneGibbles__sub_802D7BE0(s32 arg0) {
    Stack_802D7BE0 stack;
    f32 temp_f1;
    s32 *temp_r3;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    temp_f1 = stack.spC;
    stack.spC = temp_f1 + TObjEneGibbles__data_805DE7E8;
    temp_r3 = (s32 *)(csnVectorUnder(&stack.sp8, arg0 + 0x120, 0x15, temp_f1));
    if (temp_r3 != NULL) {
        if (*temp_r3 & 4) {
            TObjEneGibbles__sub_802D7ACC((void *) (arg0), (void *) (arg0 + 0x38), (f32) (TObjEneGibbles__data_805DE7F4));
            return 0;
        }
        spawn_particle_effect((void *) (arg0 + 0x38), (int) (0x20E));
        return 1;
    }
    return 2;
}

void TObjEneGibbles__sub_802D7C78(s32 arg0) {
    if (objInBand__FP7GameObjf((void *) (arg0), (f32) (TObjEneGibbles__data_805DE7F8)) != 0) {
        if (((s32)TObjEneGibbles__sub_802D7ACC((void *)arg0, (void *)(arg0 + 0x38), TObjEneGibbles__data_805DE7F4)) != 0) {
            TObjEneGibbles__sub_800D8988((void *) (arg0 + 0x38));
            return;
        }
        play_sound_effect((int)((void *) (((s32)TObjEneGibbles__sub_802D7F94((void *) (arg0), (int) (0x3A83D))))), (void *)((void *) (arg0 + 0x38)), (int)((int) (0)), (int)((int) (0)));
        return;
    }
    if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DE7FC)) != 0) {
        if (((s32)TObjEneGibbles__sub_802D7ACC((void *)arg0, (void *)(arg0 + 0x38), TObjEneGibbles__data_805DE7F4)) != 0) {
            TObjEneGibbles__sub_800D8988((void *) (arg0 + 0x38));
            return;
        }
        play_sound_effect((int)((void *) (((s32)TObjEneGibbles__sub_802D7F94((void *) (arg0), (int) (0x3A83E))))), (void *)((void *) (arg0 + 0x38)), (int)((int) (0)), (int)((int) (0)));
        return;
    }
    if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DE800)) != 0) {
        if (((s32)TObjEneGibbles__sub_802D7ACC((void *)arg0, (void *)(arg0 + 0x38), TObjEneGibbles__data_805DE7F4)) != 0) {
            TObjEneGibbles__sub_800D8988((void *) (arg0 + 0x38));
            return;
        }
        play_sound_effect((int)((void *) (((s32)TObjEneGibbles__sub_802D7F94((void *) (arg0), (int) (0x3A83F))))), (void *)((void *) (arg0 + 0x38)), (int)((int) (0)), (int)((int) (0)));
    }
}

void TObjEneGibbles__sub_802D7DAC(s32 arg0) {
    if ((objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DE804)) != 0) || (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DE808)) != 0)) {
        if (((s32)TObjEneGibbles__sub_802D7ACC((void *) (arg0), (void *) (arg0 + 0x38), (f32) (TObjEneGibbles__data_805DE7F4))) != 0) {
            TObjEneGibbles__sub_800D8988((void *) (arg0 + 0x38));
            return;
        }
        play_sound_effect((int)((void *) (((s32)TObjEneGibbles__sub_802D7F94((void *) (arg0), (int) (0x3A82B))))), (void *)((void *) (arg0 + 0x38)), (int)((int) (0)), (int)((int) (0)));
    }
}

void TObjEneGibbles__sub_802D7E3C(void) {  }
void update_shadow_height__14TObjEneGibblesFPv(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C));
}

extern const f32 TObjEneGibbles__data_805DE7E8;

void update_position__14TObjEneGibblesFPv(u8 *arg0) {
    s16 temp_r0;

    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + TObjEneGibbles__data_805DE7E8);
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 2:
    case 6:
    case 0xA:
        M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + M2C_FIELD(arg0, f32 *, 0x38C));
        break;
    }
}

typedef char RecoveredGlobal_802D7ED4_lbl_80472780_size[sizeof(RecoveredGlobal_802D7ED4_lbl_80472780) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_802D7ED4_lbl_8058D490_size[sizeof(RecoveredGlobal_802D7ED4_lbl_8058D490) == 0x30 ? 1 : -1];
void TObjEneGibbles__sub_802D7ED4(u8 *arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_802D7ED4, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802D7ED4, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802D7ED4, sp10) == 0x8) ? 1 : -1];
    Stack_802D7ED4 stack;
    set_global_flag__10TObjPlayerFv();
    push_matrix_from((void *) (&lbl_8058D490.value));
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    set_monitor_position_vec3__10TObjPlayerFPvPv((int) (0), (void *) (arg0 + 0x68));
    set_global_flag__10TObjPlayerFv();
    render_anim_model__10TObjPlayerFPvf((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    clear_global_state__10TObjPlayerFv();
    pop_matrix();
    push_matrix_from((void *) (lbl_805D5678 + (arg2 * 0x30)));
    stack.sp8 = M2C_FIELD(&lbl_80472780.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_80472780.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_80472780.value, s32 *, 8);
    matrix_mult_vec((int) (0), (void *) (&stack.sp8), (void *) (arg1));
    pop_matrix();
    clear_global_state__10TObjPlayerFv();
}

int TObjEneGibbles__sub_802D7F94(void *, int) { return 0; }

void TObjEneGibbles__sub_802D8034(void) {  }
void sync_state__14TObjEneGibblesFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x380);
    switch (temp_r0) {
    case 0x0:
        break;
    default:
        update_move_state__14TObjEneGibblesFPv((void *)(arg0));
    case 0x107:
    case 0x10E:
        if (M2C_FIELD(arg0, s32 *, 0x374) & 4) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x384) != (s32) M2C_FIELD(arg0, s32 *, 0x380)) {
                M2C_FIELD(arg0, s32 *, 0x384) = M2C_FIELD(arg0, s32 *, 0x380);
            }
        }
        break;
    }
}

extern M2C_UNK TObjEneGibbles__data_80472790;
extern f32 lbl_805DE80C;

void update_move_state__14TObjEneGibblesFPv(void *arg0) {
    s16 temp_r0;
    s16 temp_r6;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x38A);
    temp_r6 = M2C_FIELD(arg0, s16 *, 0x388);
    if (temp_r0 == temp_r6) {
        M2C_FIELD(arg0, s32 *, 0x380) = 0x101;
        return;
    }
    if ((lbl_805DE80C * (f32) temp_r0) < (f32) temp_r6) {
        M2C_FIELD(arg0, s32 *, 0x380) = 0x102;
        return;
    }
    if (temp_r6 > 0) {
        M2C_FIELD(arg0, s32 *, 0x380) = 0x103;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x380) = 0;
}

typedef struct Stack_802D8140 Stack_802D8140;
void TObjEneGibbles__sub_802D8140(u8 *arg0) {
  Stack_802D8140 stack;
  s16 temp_r0;
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x328));
  switch (temp_r0)
  {
    case 0:
      *((s16 *) (((s8 *) arg0) + 0x328)) = 1;
      *((f32 *) (((s8 *) arg0) + 0x3A0)) = (f32) TObjEneGibbles__data_805DE7E4;
      apply_actor_gravity((void *)((void *) arg0), (int)(0), TObjEneGibbles__data_805DE7E4);
      play_sound_effect((int)((void *) ((M2C_UNK)TObjEneGibbles__sub_802D7F94((void *)(arg0), (int)(0x3A333)))), (void *)(arg0 + 0x38), (int)(0), (int)(0));
      return;
    case 1:
      advance_animation_playback();
      if ((*((s32 *) (((s8 *) arg0) + 0xB0))) & 0x10)
    {
      *((s16 *) (((s8 *) arg0) + 0x328)) = 4;
      stack.sp8 = TObjEneGibbles__data_805DE7E4;
      stack.spC = TObjEneGibbles__data_805DE7E4;
      stack.sp10 = lbl_805DE810;
      rotate_xz_pair_by_angle(&stack.sp8, &stack.sp10, *((s32 *) (((s8 *) arg0) + 0x60)), TObjEneGibbles__data_805DE7E4);
      vec3_add_to(&stack.sp8, arg0 + 0x38);
      TObjPlayer__sub_800D93C4(&stack.sp8, 0xA);
      spawn_effect_at_ground__10TObjPlayerFPvi(&stack.sp8, 0x46);
    }
    case 2:
      return;
    case 4:
      *((f32 *) (((s8 *) arg0) + 0x3C)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x3C))) - lbl_805DE7E0);
      *((f32 *) (((s8 *) arg0) + 0x3A0)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x3A0))) + lbl_805DE7E0);
      if ((*((f32 *) (((s8 *) arg0) + 0x3A0))) > lbl_805DE814)
    {
      *((s16 *) (((s8 *) arg0) + 0x328)) = 3;
      return;
    }
      break;
    case 3:
      queue_destruction__7TObjectFv();
      break;
    return;
  }
}

void set_motion__14TObjEneGibblesFPv(void *arg0) {
    void *temp_r4;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 9) {
        M2C_FIELD(arg0, s16 *, 0x326) = 9;
        M2C_FIELD(arg0, s16 *, 0x328) = 0;
        M2C_FIELD(arg0, s16 *, 0xB8) = 9;
        temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFFFFFFFE);
        refresh_lobby_state__10TObjPlayerFPv(arg0);
        send_entity_set_flags__6TLobbyFPv(arg0);
    }
}

extern const f32 TObjEneGibbles__data_805DE7E4;

void update_action_state__14TObjEneGibblesFPv(u8 *arg0) {
    s16 temp_r0;
    u8 *temp_r4;

    advance_animation_playback();
    clamp_angle__14TObjEneGibblesFPvi((void *) (arg0), (int) (0));
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 2:
        break;
    case 0:
        M2C_FIELD(arg0, s16 *, 0x328) = 1;
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        play_sound_effect(TObjEneGibbles__sub_802D7F94((void *)((void *) (arg0)), (int)((int) (0x3AD34))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        break;
    case 1:
        M2C_FIELD(arg0, f32 *, 0x310) = (f32) TObjEneGibbles__data_805DE7E4;
        M2C_FIELD(arg0, f32 *, 0x308) = (f32) TObjEneGibbles__data_805DE7E4;
        apply_actor_gravity((void *) (arg0), (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 8U) {
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
        }
        break;
    case 3:
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800000)) {
            apply_actor_gravity((void *) (arg0), (int) (0), (f32) (TObjEneGibbles__data_805DE7E4));
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFF9FF);
        temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
        M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFBFFFFFF);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        if (calc_boss4_scale__10TObjPlayerFi((void *) (arg0), (int) (temp_r4)) < M2C_FIELD(arg0, f32 *, 0x398)) {
            M2C_FIELD(arg0, s16 *, 0x326) = 6;
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 4;
            M2C_FIELD(arg0, s32 *, 0x374) = (s32) (M2C_FIELD(arg0, s32 *, 0x374) | 0x90);
        }
        break;
    }
    check_object_collisions__10TObjPlayerFPv((void *) (arg0));
    check_enemy_body_collisions((void *) (arg0));
    update_enemy_collision_flags__10TObjPlayerFPv((void *) (arg0));
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) (1), (int) (0));
    submit_cursor_candidate((void *) (arg0), (int) (-1));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
}

}
