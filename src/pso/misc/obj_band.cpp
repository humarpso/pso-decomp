#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Key_80142950
{
  u32 frame;
  f32 f4;
  f32 f8;
  f32 val;
} Key_80142950;

typedef struct Joint_80142950
{
  Key_80142950 *keys;
  s32 f4;
  s32 count;
} Joint_80142950;

typedef struct Motion_80142950
{
  Joint_80142950 *joint;
} Motion_80142950;

typedef struct Actor_80142950
{
  u8 pad0[0x60];
  s32 angle;
  u8 pad64[0xC0 - 0x64];
  f32 time;
  f32 fC4;
  f32 step;
  u8 padCC[0xF8 - 0xCC];
  Motion_80142950 *motion;
} Actor_80142950;

extern "C" {
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern const f32 lbl_805DB168;
f32 sample_attack_root_motion(Actor_80142950 *a, f32 *x, f32 *z);
}

extern "C" {

struct E16_80142b8c_80142B08 { u8 a[4]; s32 f4; u8 b[8]; };

struct E8_80142b8c_80142B08  { u8 a[4]; s32 f4; };

struct E1_80142BB4 { s32 a; s32 idx; s32 c; s32 d; };

struct E2_80142BB4 { s32 a; s32 b; };

struct Obj_80142BB4 { u8 pad[0xd8]; E1_80142BB4 *e1; E2_80142BB4 *e2; };

struct GameObj {
    u8 _pad00[0xB0];
    u32 flags;
    u8 _pad_B4[0x4];
    s16 a;
    s16 b;
    u8 _pad_BC[0x4];
    f32 c;
    u8 _pad_C4[0x4];
    f32 d;
};

struct AnimEnt_80143504 { s16 mode; s16 next; u8 pad4[4]; f32 speed; u8 padC[4]; };

struct Anim_80143504 {
    u8 pad0[0xB0];
    s32 flags;
    u8 padB4[4];
    s16 cur;
    s16 req;
    u8 padBC[4];
    f32 frame;
    f32 end;
    f32 speed;
    u8 padCC[4];
    f32 xD0;
    u8 padD4[4];
    AnimEnt_80143504 *tbl;
    u8 padDC[0xF4 - 0xDC];
    s16 mode;
    s16 nextmode;
};

struct A_80142B3C { u32 a0; u32 idx; u32 a8; u32 aC; };

struct D_80142B3C { u32 d0; u32 d4; };

struct R_80142B3C { u32 r0; u32 val; };

struct P_80142B3C { D_80142B3C *d0; s32 pad; };

struct O_80142B3C { u8 pad[0xD8]; A_80142B3C *tab; struct { u32 x; R_80142B3C *r; } *tab2; };

int set_field_dc__10TObjPlayerFPvi(void*, void*);
int set_field_d8__10TObjPlayerFPvi(void*);
f32 get_speed__10TObjPlayerFPv();
void TObjEnePanarms__sub_800E2DE4(void *, int);
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK restore_actor_draw_lighting(s32);
M2C_UNK setup_actor_draw_lighting();
s32 is_anim_finished__10TObjPlayerFPv(void *arg0);
void update_animation_frame__10TObjPlayerFPvi(u8 *arg0, s32 arg1);
s32 TObjPlayer__sub_80142BB4(Obj_80142BB4 *self, s16 i);
void serialize_node_flags__10TObjPlayerFPv(u8 *arg0);
void clear_next_entry__10TObjPlayerFiPv(s32 arg0, u8 *arg1);
s32 draw_model_with_callback__10TObjPlayerFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0);
s32 render_anim_model__10TObjPlayerFPvf(void *arg0, f32 farg0);
f32 get_speed_or_default__10TObjPlayerFPv(void *arg0);
void save_joint_matrix_callback(void);
void draw_motion_model_saving_joints(u8 *arg0);
void draw_model_with_callback__10TObjPlayerFPv(u8 *arg0);
void render_world_model__10TObjPlayerFPv(u8 *arg0);
void draw__16TObjEneRe7BeruraFPv(u8 *arg0);
void draw_model__12TObjNpcEnemyFPv(u8 *arg0);
void apply_animation_transition(void *, s16);
void init_npc_animation__10TObjPlayerFPvPvPvPv(void* p, void* a1, void* a2, void* a3);
void set_animation__10TObjPlayerFPvs(void *arg0, s16 arg1);
void advance_animation_playback(Anim_80143504 *a);
M2C_UNK set_motion_interpolation_flag(void *, f64);
s32 TBoss1Dragon__sub_80143960(void *, int);
void * get_anim_entry__10TObjPlayerFPvi(void *, s16);
M2C_UNK draw_ginja_model_tree__10TObjPlayerFPvPv(s32, void *, f32);
M2C_UNK draw_ginja_model__10TObjPlayerFPvi(s32, s32, f32);
M2C_UNK render_model_tree__12TBoss8DragonFPvPv(u32, s32, f32);
int get_current_matrix(void*);
M2C_UNK set_npc_enemy_param(s32);
M2C_UNK draw_model_blend_motion(s32, void *, f32);
M2C_UNK draw_model_motion(s32, s32, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(M2C_UNK *);

extern s32 anim_model_matrix_array;
extern s32 player_joint_matrix_write_ptr;
extern u8 *lbl_805D5684;
extern s32 lbl_805D7710;
extern s32 lbl_805D7810;
extern const f32 lbl_805DB168;
extern const f32 lbl_805DB16C;

typedef struct Actor_80142950 Actor_80142950;
typedef struct Joint_80142950 Joint_80142950;
typedef struct Key_80142950 Key_80142950;
typedef struct Motion_80142950 Motion_80142950;
f32 sample_attack_root_motion(Actor_80142950 *a, f32 *x, f32 *z) {
  f32 t;
  f32 dv;
  f32 t2;
  f32 span;
  f32 d;
  f32 end;
  f32 start;
  Joint_80142950 *j;
  Key_80142950 *k;
  s32 n;
  s32 i;
  j = a->motion->joint;
  t = a->time;
  i = 0;
  k = j->keys;
  n = j->count - 1;
  for (; i < n; i++)
  {
    if (k[1].frame > ((s32) t))
    {
      break;
    }
    k++;
  }
  if (i >= n)
  {
    *x = lbl_805DB168;
    *z = lbl_805DB168;
    return lbl_805DB168;
  }
  t2 = t + a->step;
  span = (f32) (k[1].frame - k->frame);
  dv = k[1].val - k->val;
  t = a->time;
  start = k->val + ((dv * (t - ((f32) k->frame))) / span);
  for (; i < n; i++)
  {
    if (k[1].frame >= ((s32) t2))
    {
      break;
    }
    k++;
  }
  if (i >= n)
  {
    end = k->val;
  }
  else
  {
    span = (f32) (k[1].frame - k->frame);
    dv = k[1].val - k->val;
    end = k->val + ((dv * (t2 - ((f32) k->frame))) / span);
  }
  d = end - start;
  *x = d * sin_table_lookup(a->angle);
  *z = d * cos_table_lookup(a->angle);
  return d;
}

s32 is_anim_finished__10TObjPlayerFPv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xB0);
    if ((!(temp_r4 & 4) || (temp_r4 & 1)) && ((s16) M2C_FIELD(arg0, s16 *, 0xB8) == (s16) M2C_FIELD(arg0, s16 *, 0xBA))) {
        return 1;
    }
    return 0;
}

f32 get_table_value_f32__10TObjPlayerFPvs(O_80142B3C *arg0, s16 arg1) {
    return (f32)arg0->tab2[arg0->tab[arg1].idx].r->val;
}

void update_animation_frame__10TObjPlayerFPvi(u8 *arg0, s32 arg1) {
    struct E16_80142b8c_80142B08 *a = *(struct E16_80142b8c_80142B08 **)(arg0 + 0xD8);
    s32 n = a[arg1].f4;
    struct E8_80142b8c_80142B08 *b = *(struct E8_80142b8c_80142B08 **)(arg0 + 0xDC);
    *(s32 *)(arg0 + 0xF8) = b[n].f4;
}

s32 TObjPlayer__sub_80142BB4(Obj_80142BB4 *self, s16 i) {
    return self->e2[self->e1[i].idx].b;
}

void serialize_node_flags__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r4;
    u8 *test_2c;
    u8 *test_30;

    M2C_FIELD(lbl_805D5684, void **, 0) = arg0;
    M2C_FIELD(lbl_805D5684, s32 *, 4) = 0;
    if (!(M2C_FIELD(arg0, s32 *, 0) & 1)) {
        M2C_FIELD(lbl_805D5684, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D5684, s32 *, 4) | 1);
    }
    if (!(M2C_FIELD(arg0, s32 *, 0) & 2)) {
        M2C_FIELD(lbl_805D5684, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D5684, s32 *, 4) | 2);
    }
    if (!(M2C_FIELD(arg0, s32 *, 0) & 4)) {
        M2C_FIELD(lbl_805D5684, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D5684, s32 *, 4) | 4);
    }
    temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 4));
    if (temp_r4 != NULL) {
        M2C_FIELD(lbl_805D5684, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D5684, s32 *, 4) | 8);
        if ((u32) M2C_FIELD(temp_r4, u32 *, 0) != 0U) {
            M2C_FIELD(lbl_805D5684, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D5684, s32 *, 4) | 0x10);
        }
        if ((u32) M2C_FIELD(temp_r4, u32 *, 4) != 0U) {
            M2C_FIELD(lbl_805D5684, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D5684, s32 *, 4) | 0x20);
        }
    }
    test_2c = (unsigned char *) (M2C_FIELD(arg0, void **, 0x2C));
    if (test_2c != NULL) {
        M2C_FIELD(lbl_805D5684, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D5684, s32 *, 4) | 0x40);
        lbl_805D5684 = lbl_805D5684 + 8;
        serialize_node_flags__10TObjPlayerFPv((u8 *)((u8 *)(test_2c)));
    }
    test_30 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x30));
    if (test_30 != NULL) {
        M2C_FIELD(lbl_805D5684, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D5684, s32 *, 4) | 0x80);
        lbl_805D5684 = lbl_805D5684 + 8;
        serialize_node_flags__10TObjPlayerFPv((u8 *)((u8 *)(test_30)));
    }
}

void clear_next_entry__10TObjPlayerFiPv(s32 arg0, u8 *arg1) {
    lbl_805D5684 = arg1;
    ((M2C_UNK (*)(void))serialize_node_flags__10TObjPlayerFPv)();
    lbl_805D5684 += 8;
    M2C_FIELD(lbl_805D5684, s32 *, 0) = 0;
}

s32 draw_model_with_callback__10TObjPlayerFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    if ((arg1 == 0) || ((u32) M2C_FIELD(arg0, u32 *, 0x34) == 0U)) {
        return 0;
    }
    set_global_flag__10TObjPlayerFv();
    player_joint_matrix_write_ptr = arg2;
    set_global_state__16TObjEneRe7BeruraFi((M2C_UNK *)save_joint_matrix_callback);
    render_model_tree__12TBoss8DragonFPvPv(M2C_FIELD(arg0, u32 *, 0x34), arg1, farg0);
    set_global_state__16TObjEneRe7BeruraFi(NULL);
    clear_global_state__10TObjPlayerFv();
    return 1;
}

s32 render_anim_model__10TObjPlayerFPvf(void *arg0, f32 farg0) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0xF8) == 0U) || ((u32) M2C_FIELD(arg0, u32 *, 0x34) == 0U)) {
        return 0;
    }
    set_global_flag__10TObjPlayerFv();
    player_joint_matrix_write_ptr = anim_model_matrix_array;
    set_global_state__16TObjEneRe7BeruraFi((M2C_UNK *)save_joint_matrix_callback);
    ((M2C_UNK (*)(u32, u32, f32))render_model_tree__12TBoss8DragonFPvPv)(M2C_FIELD(arg0, u32 *, 0x34), M2C_FIELD(arg0, u32 *, 0xF8), farg0);
    set_global_state__16TObjEneRe7BeruraFi(NULL);
    clear_global_state__10TObjPlayerFv();
    return 1;
}

f32 get_speed_or_default__10TObjPlayerFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 4) {
        return (*(f32 *)&lbl_805DB168);
    }
    return get_speed__10TObjPlayerFPv();
}

}
int objInBand(GameObj* obj, f32 v) {
    u32 flags = obj->flags;
    if (!((flags & 4) && !(flags & 1)) &&
        obj->a == obj->b &&
        v < obj->c &&
        obj->c <= v + obj->d)
        return 1;
    return 0;
}

extern "C" {
void save_joint_matrix_callback(void) { get_current_matrix((void*)((*(int *)&player_joint_matrix_write_ptr))); (*(int *)&player_joint_matrix_write_ptr) = ((*(int *)&player_joint_matrix_write_ptr) + 0x30); }

void draw_motion_model_saving_joints(u8 *arg0) {
    s32 temp_r3;
    (*(int *)&player_joint_matrix_write_ptr) = M2C_FIELD(arg0, s32 *, 0xE0);
    ((M2C_UNK (*)(void *))set_global_state__16TObjEneRe7BeruraFi)((void *) save_joint_matrix_callback);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0xB0);
    if ((temp_r3 & 4) && !(temp_r3 & 0x400)) {
        ((M2C_UNK (*)(int, void *, f32))draw_model_blend_motion)(M2C_FIELD(arg0, s32 *, 0x34), arg0 + 0xE4, M2C_FIELD(arg0, f32 *, 0xC0));
    } else {
        ((M2C_UNK (*)(int, int, f32))draw_model_motion)(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
    }
    ((M2C_UNK (*)(void *))set_global_state__16TObjEneRe7BeruraFi)(NULL);
    reset_transform_state__10TObjPlayerFv();
}

void draw_model_with_callback__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_r3;
    u32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u32 *, 0xE0);
    if (temp_r0 != 0U) {
        (*(u32 *)&player_joint_matrix_write_ptr) = temp_r0;
        set_global_state__16TObjEneRe7BeruraFi((M2C_UNK *)(save_joint_matrix_callback));
        temp_r3 = M2C_FIELD(arg0, s32 *, 0xB0);
        if ((temp_r3 & 4) && !(temp_r3 & 0x400)) {
            draw_model_blend_motion(M2C_FIELD(arg0, s32 *, 0x34), arg0 + 0xE4, M2C_FIELD(arg0, f32 *, 0xC0));
        } else {
            draw_model_motion(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
        }
        set_global_state__16TObjEneRe7BeruraFi((M2C_UNK *)(NULL));
        reset_transform_state__10TObjPlayerFv();
    }
}

void render_world_model__10TObjPlayerFPv(u8 *arg0) {
    set_global_flag__10TObjPlayerFv();
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 4) {
        draw_model_blend_motion(M2C_FIELD(arg0, s32 *, 0x34), arg0 + 0xE4, M2C_FIELD(arg0, f32 *, 0xC0));
    } else {
        set_global_state__16TObjEneRe7BeruraFi((M2C_UNK *)(lbl_805D7810));
        draw_model_motion(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
        set_global_state__16TObjEneRe7BeruraFi((M2C_UNK *)(0));
    }
    reset_transform_state__10TObjPlayerFv();
    clear_global_state__10TObjPlayerFv();
}

void draw__16TObjEneRe7BeruraFPv(u8 *arg0) {
    set_global_flag__10TObjPlayerFv();
    setup_actor_draw_lighting();
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 4) {
        draw_model_blend_motion(M2C_FIELD(arg0, s32 *, 0x34), arg0 + 0xE4, M2C_FIELD(arg0, f32 *, 0xC0));
    } else {
        ((M2C_UNK (*)(s32))set_global_state__16TObjEneRe7BeruraFi)(lbl_805D7810);
        draw_model_motion(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
        ((M2C_UNK (*)(s32))set_global_state__16TObjEneRe7BeruraFi)(0);
    }
    reset_transform_state__10TObjPlayerFv();
    restore_actor_draw_lighting(M2C_FIELD(arg0, s32 *, 0));
    clear_global_state__10TObjPlayerFv();
}

void draw_model__12TObjNpcEnemyFPv(u8 *arg0) {
    set_global_flag__10TObjPlayerFv();
    setup_actor_draw_lighting();
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 4) {
        draw_ginja_model_tree__10TObjPlayerFPvPv(M2C_FIELD(arg0, s32 *, 0x34), arg0 + 0xE4, M2C_FIELD(arg0, f32 *, 0xC0));
    } else {
        set_npc_enemy_param(lbl_805D7710);
        draw_ginja_model__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
        set_npc_enemy_param(0);
    }
    reset_transform_state__10TObjPlayerFv();
    restore_actor_draw_lighting(M2C_FIELD(arg0, s32 *, 0));
    clear_global_state__10TObjPlayerFv();
}

void init_npc_animation__10TObjPlayerFPvPvPvPv(void* p, void* a1, void* a2, void* a3) { set_field_d8__10TObjPlayerFPvi(p); set_field_dc__10TObjPlayerFPvi(p, a2); ((int (*)(void*, void*))set_animation__10TObjPlayerFPvs)(p, a3); }

void set_animation__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    void *temp_r3;
    f32 conv;

    M2C_FIELD(arg0, s16 *, 0xB8) = arg1;
    M2C_FIELD(arg0, s16 *, 0xBA) = (s16) M2C_FIELD(arg0, s16 *, 0xB8);
    ((M2C_UNK (*)(void *, s16))update_animation_frame__10TObjPlayerFPvi)(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    temp_r3 = get_anim_entry__10TObjPlayerFPvi(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) M2C_FIELD(temp_r3, f32 *, 8);
    M2C_FIELD(arg0, s16 *, 0xF4) = (s16) M2C_FIELD(temp_r3, s16 *, 0);
    conv = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), u32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xC4) = conv;
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB168;
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) & 0xFFFFFFFB);
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) M2C_FIELD(temp_r3, s32 *, 0xC);
    M2C_FIELD(arg0, void **, 0xE4) = (void *) M2C_FIELD(arg0, void **, 0xF8);
    M2C_FIELD(arg0, f32 *, 0xEC) = (f32) lbl_805DB168;
    M2C_FIELD(arg0, void **, 0xE8) = (void *) M2C_FIELD(arg0, void **, 0xF8);
    M2C_FIELD(arg0, f32 *, 0xF0) = (f32) lbl_805DB168;
    M2C_FIELD(arg0, s16 *, 0xBC) = (s16) M2C_FIELD(arg0, s16 *, 0xB8);
    if (M2C_FIELD(arg0, s32 *, 0xB4) & 0x20000000) {
        set_motion_interpolation_flag(arg0, conv);
    }
}

void advance_animation_playback(Anim_80143504 *a) {
    f32 last;
    if (a->flags & 0x40) {
        return;
    }
    a->frame += a->speed;
    last = a->end - lbl_805DB16C;
    a->flags &= ~0x82A;
    if (a->cur != a->req) {
        if (a->frame >= a->end) {
            a->frame -= a->speed;
        }
        apply_animation_transition(a, a->cur);
    }
    switch (a->mode) {
    case 1:
        if (a->frame >= a->end) {
            a->frame -= a->end;
            if (TBoss1Dragon__sub_80143960(a, 0x100) != 0) {
                a->speed = a->xD0;
            }
        }
        break;
    case 2:
        if (a->frame >= last) {
            if (((u32 (*)(void *, s16))TObjPlayer__sub_80142BB4)(a, a->tbl[a->cur].next) == 0) {
                a->frame -= a->end;
            } else {
                a->cur = a->tbl[a->cur].next;
                apply_animation_transition(a, a->cur);
                a->flags |= 0x800;
            }
        }
        break;
    case 3:
        if (a->frame >= last) {
            a->mode = 5;
            a->frame -= a->speed;
            a->speed = lbl_805DB168;
            a->flags |= 0x30;
        }
        break;
    case 4:
        if (a->frame >= lbl_805DB16C) {
            a->frame = lbl_805DB168;
            if (TBoss1Dragon__sub_80143960(a, 0x100) != 0) {
                TObjEnePanarms__sub_800E2DE4(a, 0x100);
                a->speed = a->xD0;
            } else {
                a->speed = a->tbl[a->cur].speed;
            }
            a->mode = a->nextmode;
            a->flags &= ~4;
            a->flags |= 8;
        }
        break;
    case 5:
        a->frame -= a->speed;
        break;
    }
}

}
