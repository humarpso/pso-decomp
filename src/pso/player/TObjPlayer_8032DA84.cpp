#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8032DC94_lbl_8050BEC0
{
  M2C_UNK value;
  u8 remaining[0x1C];
};

struct RecoveredGlobal_8032DC94_lbl_8058D4C0
{
  M2C_UNK value;
  u8 remaining[0xC];
};

extern "C" {
void TObjPlayer__sub_8032DDD8(u8 *arg0);
void * init_variant_2_dc28__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *TObjPlayer__sub_8032DB8C(u8 *arg0);
extern const f32 lbl_805DF7D8;
extern const f32 lbl_805DF7DC;
extern const f32 lbl_805DF7E0;
void TObjPlayer__sub_8032DD7C(u8 *arg0);
M2C_UNK copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
M2C_UNK *query_game_join_id__10TObjPlayerFv(M2C_UNK *);
M2C_UNK get_entity_id__10TObjPlayerFPv(int);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi();
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK scale_current_matrix(int);
M2C_UNK post_translate_matrix(int);
M2C_UNK draw_ginja_object(int);
M2C_UNK set_chunk_material_color(int);
extern RecoveredGlobal_8032DC94_lbl_8050BEC0 lbl_8050BEC0;
extern RecoveredGlobal_8032DC94_lbl_8058D4C0 lbl_8058D4C0;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DF7D8;
void TObjPlayer__sub_8032DC94(u8 *arg0);
}

extern "C" {

void *item_equip_variant_deleting_dtor_8032DBE4(void *arg0, s16 arg1);
void *TObjPlayer__sub_8032DC3C(void *arg0, s16 arg1);
void TObjPlayer__sub_8032DDE8(void* p);
void fire_projectiles__10TObjPlayerFPv(void *arg0);
M2C_UNK fire_shot_at_target__11TItemWeaponFv(void *, M2C_UNK *, s32, M2C_UNK);
s32 get_attack_stage__11TItemWeaponFPv(void *);
void TItemWeapon__ct(void *);
s16 get_validated_attack_stage(s32);
void __dl__7TObjectFPv(void *);
void destroy__18TItemWpnCardEffectFPvs(void *, int);
M2C_UNK draw_icon__10TObjPlayerFPvii(void *, M2C_UNK, M2C_UNK *);
void free_obj_heap__10TObjPlayerFPv(void *);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_8032DBE4(void *arg0, s16 arg1);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
M2C_UNK spawn_cane_effect__10TObjPlayerFiUii(s32, void *, M2C_UNK);

extern s32 tl_05;

void fire_projectiles__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;

    draw_icon__10TObjPlayerFPvii(arg0, 4, &sp8);
    if (get_validated_attack_stage(M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC) == 2) {
        fire_shot_at_target__11TItemWeaponFv(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), 0);
        fire_shot_at_target__11TItemWeaponFv(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), 0x1555);
        fire_shot_at_target__11TItemWeaponFv(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), -0x1555);
    } else {
        fire_shot_at_target__11TItemWeaponFv(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), 0);
    }
    if (get_attack_stage__11TItemWeaponFPv(arg0) == 0) {
        spawn_cane_effect__10TObjPlayerFiUii(tl_05, arg0, 4);
    }
}

extern M2C_UNK lbl_804EDC28[];

void *init_variant_2_dc28__10TObjPlayerFPv(void *arg0, M2C_UNK _w1, void * _w2) {
    TItemWeapon__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EDC28;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    return arg0;
}

extern M2C_UNK lbl_804EDC28[];

extern M2C_UNK lbl_804EDD20[];

u8 *TObjPlayer__sub_8032DB8C(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)init_variant_2_dc28__10TObjPlayerFPv((void *)(temp_r3), (M2C_UNK)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

void *item_equip_variant_deleting_dtor_8032DBE4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EDC28;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}
void *TObjPlayer__sub_8032DC3C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EDD20;
        destroy__18TItemWpnCardEffectFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef struct RecoveredGlobal_8032DC94_lbl_8050BEC0 RecoveredGlobal_8032DC94_lbl_8050BEC0;
typedef struct RecoveredGlobal_8032DC94_lbl_8058D4C0 RecoveredGlobal_8032DC94_lbl_8058D4C0;
typedef char RecoveredGlobal_8032DC94_lbl_8050BEC0_size[((sizeof(RecoveredGlobal_8032DC94_lbl_8050BEC0)) == 0x20) ? (1) : (-1)];
typedef char RecoveredGlobal_8032DC94_lbl_8058D4C0_size[((sizeof(RecoveredGlobal_8032DC94_lbl_8058D4C0)) == 0x10) ? (1) : (-1)];
void TObjPlayer__sub_8032DC94(u8 *arg0) {
  M2C_UNK *var_r30;
  M2C_UNK *var_r31;
  M2C_UNK *var_r3;
  M2C_UNK *var_r4;
  M2C_UNK *new_var;
  f32 var_f0;
  f32 var_f1;
  u8 *var_r29;
  var_f0 = lbl_805DF7D8;
  var_r29 = (u8 *) arg0;
  var_f1 = *((f32 *) (((s8 *) arg0) + 0x80));
  if ((!(var_f1 <= var_f0)) && (all_parents_unqueued_for_destruction__7TObjectFv() != 0))
  {
    var_r3 = (M2C_UNK *) (*((M2C_UNK **) (((s8 *) var_r29) + 0x60)));
    var_r31 = (M2C_UNK *) query_game_join_id__10TObjPlayerFv(var_r3);
    if (var_r31 != 0)
    {
      new_var = (M2C_UNK *) (*((M2C_UNK **) (((s8 *) var_r31) + 0x188)));
      var_r30 = new_var;
      if (var_r30 != 0)
      {
        var_r3 = (M2C_UNK *) (&lbl_8050BEC0.value);
        var_r4 = (M2C_UNK *) (&lbl_8058D4C0.value);
        lbl_805D5660 = some_id_805c6f74;
        var_r3 = (M2C_UNK *) (&lbl_8050BEC0.value);
        var_r4 = (M2C_UNK *) (&lbl_8058D4C0.value);
        copy_vec4__13TRaderMapCoreFPvPv((void *) (&lbl_8050BEC0.value), (void *) (&lbl_8058D4C0.value));
        var_r3 = (M2C_UNK *) (var_r29 + 0x80);
        some_id_805c6f74 |= 0x20;
        set_chunk_material_color((int) var_r3);
        var_r3 = (M2C_UNK *) var_r31;
        get_entity_id__10TObjPlayerFPv((int) var_r3);
        notify_fish_if_valid__10TObjPlayerFUi();
        push_matrix();
        var_r3 = (M2C_UNK *) (var_r29 + 0x64);
        post_translate_matrix((int) var_r3);
        var_r4 = (M2C_UNK *) (*((M2C_UNK **) (((s8 *) var_r29) + 0x58)));
        var_r3 = (M2C_UNK *) ((u8 *) 0);
        rotate_matrix_y((int) 0, (int) var_r4);
        var_r3 = (M2C_UNK *) (var_r29 + 0x74);
        scale_current_matrix((int) var_r3);
        var_r3 = (M2C_UNK *) var_r30;
        draw_ginja_object((int) var_r3);
        pop_matrix();
        var_r3 = (M2C_UNK *) (&lbl_8058D4C0.value);
        var_r4 = (M2C_UNK *) (&lbl_8050BEC0.value);
        var_r3 = (M2C_UNK *) (&lbl_8058D4C0.value);
        var_r4 = (M2C_UNK *) (&lbl_8050BEC0.value);
        copy_vec4__13TRaderMapCoreFPvPv((void *) (&lbl_8058D4C0.value), (void *) (&lbl_8050BEC0.value));
        some_id_805c6f74 = lbl_805D5660;
      }
    }
  }
}

#pragma push
#pragma opt_common_subs off
void TObjPlayer__sub_8032DD7C(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x70) & 1) {
        M2C_FIELD(arg0, f32 *, 0x80) = (f32) (M2C_FIELD(arg0, f32 *, 0x80) + lbl_805DF7DC);
        if (M2C_FIELD(arg0, f32 *, 0x80) > lbl_805DF7E0) {
            M2C_FIELD(arg0, f32 *, 0x80) = (f32) lbl_805DF7E0;
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0x80) = (f32) (M2C_FIELD(arg0, f32 *, 0x80) - lbl_805DF7DC);
        if (M2C_FIELD(arg0, f32 *, 0x80) < lbl_805DF7D8) {
            M2C_FIELD(arg0, f32 *, 0x80) = (f32) lbl_805DF7D8;
        }
    }
}
#pragma pop

void TObjPlayer__sub_8032DDD8(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x70) = (s32) (M2C_FIELD(arg0, s32 *, 0x70) & 0xFFFFFFFE);
}

void TObjPlayer__sub_8032DDE8(void* p) { *(u32*)((char*)p + 0x70) |= 0x1; }

}

extern "C" {

void init_offset_vectors__10TObjPlayerFPv(void* a0);

    extern const float lbl_805DF7D8;
    extern const float lbl_805DF7E0;
    extern const float lbl_805DF7E4;
void init_offset_vectors__10TObjPlayerFPv(void* a0) { *(int*)((char*)a0 + 0x70) = 0; *(float*)((char*)a0 + 0x74) = lbl_805DF7E4; *(float*)((char*)a0 + 0x78) = lbl_805DF7E4; *(float*)((char*)a0 + 0x7c) = lbl_805DF7E4; *(float*)((char*)a0 + 0x80) = lbl_805DF7D8; *(float*)((char*)a0 + 0x84) = lbl_805DF7E0; *(float*)((char*)a0 + 0x88) = lbl_805DF7E0; *(float*)((char*)a0 + 0x8c) = lbl_805DF7E0; }

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_offsets_object__10TObjPlayerFPv(void *arg0);
void *init_effect_object__10TObjPlayerFPv(void *arg0);
void init_offset_vectors__10TObjPlayerFPv(void *);
void fn_8032E34C(void *);
void TObjPlayer__sub_8032E400(void *);

extern M2C_UNK lbl_804EDD20[];

void *init_offsets_object__10TObjPlayerFPv(void *arg0) {
    fn_8032E34C(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EDD20;
    init_offset_vectors__10TObjPlayerFPv(arg0);
    return arg0;
}

extern M2C_UNK lbl_804EDD20[];

void *init_effect_object__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_8032E400(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EDD20;
    init_offset_vectors__10TObjPlayerFPv(arg0);
    return arg0;
}

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void alloc_and_init__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void create_and_init_effect__10TObjPlayerFiPvi(s32 arg0, u32 *arg1, s32 arg2);
void *__nw__7TObjectFUl(M2C_UNK);

extern s32 tl_05;

void alloc_and_init__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    void* obj = __nw__7TObjectFUl((M2C_UNK)(0x90));
    if (obj != 0) {
        ((M2C_UNK (*)(void *, s32, s32, s32, s32, s32))init_offsets_object__10TObjPlayerFPv)(obj, tl_05, arg1, arg2, 0, arg0);
    }
}

extern s32 tl_05;

void create_and_init_effect__10TObjPlayerFiPvi(s32 arg0, u32 *arg1, s32 arg2) {
    void *obj;

    if ((arg1 != NULL) && ((u32) *arg1 != 0U)) {
        obj = __nw__7TObjectFUl((M2C_UNK)(0x90));
        if (obj != NULL) {
            ((M2C_UNK (*)(void *, s32, u32 *, s32, s32, s32))init_effect_object__10TObjPlayerFPv)(obj, tl_05, arg1, arg2, 0, arg0);
        }
    }
}

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_8032DFF8 { u8 pad[0x1C]; void *o[3]; };

struct VBase_18_95e344 { char pad[0x18]; };

struct VObj_18_95e344 : VBase_18_95e344 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
};

struct VBase_8032E11C { u8 pad[0x18]; };

struct VObj_8032E11C : VBase_8032E11C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6();
};

extern "C" {
u32 create_particle_emitter(void *, int);
M2C_UNK set_tint_color__13TParticleCtrlFPvi(u32, int);
void create_tint_particle_emitter__10TObjPlayerFPv(u8 *arg0);
M2C_UNK set_position_xy__10TObjPlayerFPvff(u32, f32, f32);
u32 spawn_particle_effect_with_rotation(void *, void *, int, int);
M2C_UNK spawn_particle_effect(void *, int);
M2C_UNK set_tint_color__13TParticleCtrlFPvi(u32, int);
extern const f32 lbl_805DF7E8;
void TObjPlayer__sub_8032E0A4(u8 *arg0);
u8 *find_entity_by_id(u16);
void TObjPlayer__sub_8032DF74(u8 *arg0);
void queue_destruction__7TObjectFv(void *);
void destroy_effect_objects__10TObjPlayerFPv(O_8032DFF8 *arg0);
void queue_destruction__7TObjectFv(void *);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
u32 find_item_by_id(s32);
s8 TObjPlayer__sub_80102C30();
void TObjPlayer__sub_8032DF74(u8 *arg0);
void destroy_effect_objects__10TObjPlayerFPv(O_8032DFF8 *arg0);
void TObjPlayer__sub_8032E11C(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_8032E054(void);

void TObjPlayer__sub_8032DF74(u8 *arg0) {
  u16 temp_r3;
  u8 *temp_r3_2;
  temp_r3 = *((u16 *) (((s8 *) arg0) + 0x34));
  if (temp_r3 != ((-1U) & 0xFFFFu))
  {
    if (find_entity_by_id(temp_r3) != 0)
    {
      temp_r3_2 = (u8 *) ((*((s32 *) (((s8 *) (*((u8 **) (((s8 *) arg0) + 0x28)))) + 0xA4))) + ((*((s32 *) (((s8 *) arg0) + 0x2C))) * 0x2C));
      *((f32 *) (((s8 *) arg0) + 0x64)) = (f32) ((*((f32 *) (((s8 *) temp_r3_2) + 0x1C))) - (*((f32 *) (((s8 *) arg0) + 0x44))));
      *((f32 *) (((s8 *) arg0) + 0x68)) = (f32) ((*((f32 *) (((s8 *) temp_r3_2) + 0x20))) - (*((f32 *) (((s8 *) arg0) + 0x48))));
      *((f32 *) (((s8 *) arg0) + 0x6C)) = (f32) ((*((f32 *) (((s8 *) temp_r3_2) + 0x24))) - (*((f32 *) (((s8 *) arg0) + 0x4C))));
    }
  }
}

void destroy_effect_objects__10TObjPlayerFPv(O_8032DFF8 *arg0) {
    s32 i;
    for (i = 0; i != 3; i++) {
        if (arg0->o[i] != 0) {
            queue_destruction__7TObjectFv(arg0->o[i]);
            arg0->o[i] = 0;
        }
    }
}

void TObjPlayer__sub_8032E054(void) {  }
#pragma push
#pragma fp_contract on
void create_tint_particle_emitter__10TObjPlayerFPv(u8 *arg0) {
    M2C_FIELD(arg0, u32 *, 0x24) = create_particle_emitter((void *) (arg0 + 0x64), (int) (0x1B6));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        set_tint_color__13TParticleCtrlFPvi(M2C_FIELD(arg0, u32 *, 0x24), (int) (-0x78));
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_8032E0A4(u8 *arg0) {
    u32 p;
    u32 q;
    M2C_FIELD(arg0, u32 *, 0x1C) = spawn_particle_effect_with_rotation((void *) (arg0 + 0x64), (void *) (arg0 + 0x54), (int) (0x1B9), (int) (0x104));
    p = M2C_FIELD(arg0, u32 *, 0x1C);
    if (p != 0U) {
        set_position_xy__10TObjPlayerFPvff(p, (f32) (lbl_805DF7E8), (f32) (lbl_805DF7E8));
        q = M2C_FIELD(arg0, u32 *, 0x50);
        if (q != 0U) {
            set_tint_color__13TParticleCtrlFPvi((u32)(M2C_FIELD(arg0, u32 *, 0x1C)), (int)(q));
        }
    }
    spawn_particle_effect((void *) (arg0 + 0x64), (int) (0x30));
}
#pragma pop

void TObjPlayer__sub_8032E11C(u8 *arg0) {
    s32 i;
    if (find_item_by_id(M2C_FIELD(arg0, s32 *, 0x60)) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if (TObjPlayer__sub_80102C30() != 2) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    TObjPlayer__sub_8032DF74(arg0);
    for (i = 0; i != 3; i++) {
        if (((O_8032DFF8 *)arg0)->o[i] != NULL) {
            copy_pos__11TNowLoadingFPvPv(((O_8032DFF8 *)arg0)->o[i], arg0 + 0x64);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x30) == 0) {
        ((VObj_8032E11C *)arg0)->m4();
    } else if (M2C_FIELD(arg0, s32 *, 0x30) == 6) {
        destroy_effect_objects__10TObjPlayerFPv((O_8032DFF8 *)arg0);
        ((VObj_8032E11C *)arg0)->m5();
    } else if (M2C_FIELD(arg0, s32 *, 0x30) == 12) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    ((VObj_8032E11C *)arg0)->m6();
    M2C_FIELD(arg0, s32 *, 0x30)++;
}

}
