#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "dolphin/mtx.h"

extern "C" {
s32 disallow_rendering__7TObjectFv(void *);
s32 create_particle_emitter(void *, void *);
s32 get_field_d8__10TObjPlayerFPv(void *);
u32 get_item_ctrl__10TObjPlayerFv();
s32 draw_icon__10TObjPlayerFPvii(s32, s32, M2C_UNK *);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK item_follow_effect_vtable[];
u8 *construct_item_follow_effect(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
u8 *construct_item_follow_effect(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
u32 __nw__7TObjectFUl(s32 a0 = 0);
void spawn_item_follow_effect(s32 arg0, u32 arg1, s32 arg2, s32 arg3);
s32 is_mode_two_and_ready__10TObjPlayerFPv();
s32 TObjPlayer__sub_8011E618(void *);
s32 update_active_game_effect__10TObjPlayerFPv(void *);
s32 draw_icon__10TObjPlayerFPvii(s32, s32, M2C_UNK *);
s32 get_tp__10TObjPlayerFPv(void *);
s16 get_tech_level__10TObjPlayerFPv(s32);
s32 create__10TTecGiFoieFPvPvPv(s32, s32 *, s32);
void cast_gifoie__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_80125C70(void* p);
s32 get_id__13TItemProArmorFPv(void *);
s32 TObjPlayer__sub_8011E618(void *);
s32 alloc__13TItemProArmorFi(s32);
s32 ct__13TItemProArmorFPv(s32, u32, s32, s32);
void create_pro_armor__10TObjPlayerFPv(void *arg0);
void spawn_item_follow_effect(s32 arg0, u32 arg1, s32 arg2, s32 arg3);
s32 get_global_state__14TOKeyMachine01Fv();
s32 is_mag_active__10TObjPlayerFPv(void *);
s32 is_item_area_enabled(s32);
extern s32 tl_05;
void update_terminal_state__10TObjPlayerFPv(void *arg0);
}

extern "C" {

void update_item_follow_effect(void *arg0);
void *destroy_item_follow_effect(void *arg0, s16 arg1);
s32 get_flag_40__8TItemMagFPv(s32);
s32 find_item_by_id(s32);
u32 get_item_ctrl__10TObjPlayerFv();
s8 TObjPlayer__sub_80102C30();
s32 draw_icon__10TObjPlayerFPvii(s32, s32, M2C_UNK *);
M2C_UNK clear_active_flag__13TParticleCtrlFPv(u32);
M2C_UNK enable__13TParticleCtrlFPv(u32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK copy_pos__11TNowLoadingFPvPv(u32, M2C_UNK *);
s32 obj_testFlags30(s32, M2C_UNK);
void queue_destruction__7TObjectFv(void *);

void render__7TObjectFv();
void render_shadows__7TObjectFv();
M2C_UNK item_follow_effect_vtable[6] = { 0, 0, (s32)&destroy_item_follow_effect, (s32)&update_item_follow_effect, (s32)&render__7TObjectFv, (s32)&render_shadows__7TObjectFv };
void update_item_follow_effect(void *arg0) {
    M2C_UNK sp8[5];
    s32 var_r31;
    s32 var_r30;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != get_item_ctrl__10TObjPlayerFv()) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return;
    }
    var_r31 = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        var_r30 = find_item_by_id(M2C_FIELD(arg0, s32 *, 0x1C));
        if ((var_r30 != 0) && (TObjPlayer__sub_80102C30() == 2)) {
            var_r31 = 1;
            if (draw_icon__10TObjPlayerFPvii(var_r30, M2C_FIELD(arg0, s32 *, 0x20), sp8) != 0) {
                copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, u32 *, 0x24), sp8);
                if ((get_flag_40__8TItemMagFPv(var_r30) == 0) || (obj_testFlags30(var_r30, 0x08000000) == 0)) {
                    clear_active_flag__13TParticleCtrlFPv(M2C_FIELD(arg0, u32 *, 0x24));
                } else {
                    enable__13TParticleCtrlFPv(M2C_FIELD(arg0, u32 *, 0x24));
                }
            } else {
                enable__13TParticleCtrlFPv(M2C_FIELD(arg0, u32 *, 0x24));
            }
        }
    }
    if (var_r31 == 0) {
        queue_destruction__7TObjectFv((void *)(arg0));
    }
}

extern M2C_UNK item_follow_effect_vtable[];

void *destroy_item_follow_effect(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = item_follow_effect_vtable;
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { queue_destruction__7TObjectFv((void *)(M2C_FIELD(arg0, void **, 0x24))); }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *construct_item_follow_effect(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    Vec position;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = item_follow_effect_vtable;
    disallow_rendering__7TObjectFv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x1C) = get_field_d8__10TObjPlayerFPv((void *) (arg2));
    M2C_FIELD(arg0, s32 *, 0x20) = arg3;
    draw_icon__10TObjPlayerFPvii((s32)((void *) (arg2)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x20))), (M2C_UNK *)((void *) (&position)));
    M2C_FIELD(arg0, s32 *, 0x24) = create_particle_emitter((void *) (&position), (void *) (arg4));
    M2C_FIELD(arg0, s32 *, 0x28) = ((s32)get_item_ctrl__10TObjPlayerFv());
    return arg0;
}
void spawn_item_follow_effect(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    if ((arg0 != 0) && (arg1 != 0U) && ((obj = __nw__7TObjectFUl(0x2C)) != 0U)) {
        construct_item_follow_effect((u8 *)(obj), (s32)(arg0), (s32)(arg1), (s32)(arg2), (s32)(arg3));
    }
}
void cast_gifoie__10TObjPlayerFPv(void *arg0) {
    s32 sp8;
    if (is_mode_two_and_ready__10TObjPlayerFPv() != 0) {
        if ((get_tech_level__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC) == 0) && (draw_icon__10TObjPlayerFPvii((s32)(arg0), (s32)(0), (M2C_UNK *)(&sp8)) != 0)) {
            create__10TTecGiFoieFPvPvPv(M2C_FIELD(arg0, s32 *, 0xF0), &sp8, get_tp__10TObjPlayerFPv(arg0));
            TObjPlayer__sub_8011E618(arg0);
        }
    } else {
        update_active_game_effect__10TObjPlayerFPv(arg0);
    }
}
void TObjPlayer__sub_80125C70(void* p) { *(s32*)((char*)p + 0x1f8) = -1; }
void create_pro_armor__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;
    M2C_FIELD(arg0, s32 *, 0x1F8) = -1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U) {
        temp_r3 = alloc__13TItemProArmorFi(0x2C);
        if (temp_r3 != 0) {
            ct__13TItemProArmorFPv(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), get_id__13TItemProArmorFPv(arg0), 0x5A);
        }
    }
    TObjPlayer__sub_8011E618(arg0);
    TObjPlayer__sub_8011E618(arg0);
}
void update_terminal_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;
    temp_r3 = get_global_state__14TOKeyMachine01Fv();
    if ((temp_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x1F8)) && (is_mag_active__10TObjPlayerFPv(arg0) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = temp_r3;
        if (is_item_area_enabled(temp_r3) != 0) {
            spawn_item_follow_effect((s32)(tl_05), (u32)(arg0), (s32)(1), (s32)(0x1AE));
            spawn_item_follow_effect((s32)(tl_05), (u32)(arg0), (s32)(2), (s32)(0x1AE));
        }
    }
}

}
