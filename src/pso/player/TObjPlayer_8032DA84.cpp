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
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TBoss7Tentacle__sub_803D9BA0(int);
M2C_UNK TOHangerMachine01__sub_803D9C00(int);
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
M2C_UNK TObjPlayer__sub_8011EB84(void *, M2C_UNK *, s32, M2C_UNK);
s32 get_attack_stage__11TItemWeaponFPv(void *);
void TObjPlayer__sub_80120D50(void *);
s16 TObjPlayer__sub_801D2EA8(s32);
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
    if (TObjPlayer__sub_801D2EA8(M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC) == 2) {
        TObjPlayer__sub_8011EB84(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), 0);
        TObjPlayer__sub_8011EB84(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), 0x1555);
        TObjPlayer__sub_8011EB84(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), -0x1555);
    } else {
        TObjPlayer__sub_8011EB84(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0xF4), 0);
    }
    if (get_attack_stage__11TItemWeaponFPv(arg0) == 0) {
        spawn_cane_effect__10TObjPlayerFiUii(tl_05, arg0, 4);
    }
}

extern M2C_UNK lbl_804EDC28[];

void *init_variant_2_dc28__10TObjPlayerFPv(void *arg0, M2C_UNK _w1, void * _w2) {
    TObjPlayer__sub_80120D50(arg0);
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
        TObjPlayer__sub_803D9B2C();
        var_r3 = (M2C_UNK *) (var_r29 + 0x64);
        TOHangerMachine01__sub_803D9C00((int) var_r3);
        var_r4 = (M2C_UNK *) (*((M2C_UNK **) (((s8 *) var_r29) + 0x58)));
        var_r3 = (M2C_UNK *) ((u8 *) 0);
        rotate_matrix_y((int) 0, (int) var_r4);
        var_r3 = (M2C_UNK *) (var_r29 + 0x74);
        TBoss7Tentacle__sub_803D9BA0((int) var_r3);
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
