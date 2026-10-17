#include "types.h"
#include "pso/player/TObjPlayer_80100E00.h"
#include "pso/player/TObjPlayer_801211F0.h"
#include "pso/player/TObjPlayer_80363BE0.h"
#include "pso/unk/text_80120150.h"
#include "pso/unk/text_803DC86C.h"
#include "pso/object/TObjMotion.h"
#include "pso/items/TItemWeapon.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/item/TItemEquipBase.h"
#include "pso/item/TItemMag.h"
#include "pso/player/TObjPlayer.h"

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
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
s32 get_attach_joint__11TItemWeaponFv(void *);
void draw_weapon_at_joint(s32 arg0, s8 arg1);
void set_shadow_material_state(void);
s32 set_model_fade_alpha__10TObjPlayerFf();
s32 push_matrix_from();
s32 pop_matrix();
void draw_chunk_object(void *child);
void draw_model_motion(void *arg0, void *arg1, f32 farg0);
extern s16 TObjPlayer__weapon_node_ids[];
extern s32 lbl_805D53EC;
extern s16 weapon_node_material_index;
extern u8 *weapon_render_callback_object;
extern s32 model_render_flags;
extern const f32 lbl_805DACA8;
extern const f32 lbl_805DACAC;
s32 draw_weapon_model(void *arg0);

s32 draw_weapon_model(void *arg0) {
    s32 var_r30;
    u8 *temp_r4;
    if ((void *) *(u8 * *)&((TItemWeapon *)arg0)->player == NULL || (u32) *(u32 *)((s8 *)arg0 + 0xF4) == 0U) {
        return;
    }
    {
        reset_model_node_counter();
        if (((TItemWeapon *)arg0)->is_flag_400() != 0) {
            var_r30 = 1;
        } else {
            var_r30 = ((VObj_18_26a62c *)(arg0))->m8(lbl_805DACA8, lbl_805DACAC);
        }
        TObjPlayer::notify_fish_if_valid((int) (*(s32 *)((s8 *)arg0 + 0x24)));
        ((TObjMotion *)(*(u8 * *)&((TItemWeapon *)arg0)->player))->get_item_ptr((s32)((void *) ((s8)get_attach_joint__11TItemWeaponFv((void *) (arg0)))));
        push_matrix_from();
        if ((var_r30 != 0) && (((TItemMag *)arg0)->get_flag_40() == 0)) {
            weapon_render_callback_object = (u8 *)arg0;
            weapon_node_material_index = *(s16 *)((s8 *)arg0 + 0x1CC);
            temp_r4 = (u8 *)(*(u8 * *)&((TItemWeapon *)arg0)->parameters);
            TObjPlayer__weapon_node_ids[0] = (s16) *(u8 *)((s8 *)temp_r4 + 0x21);
            TObjPlayer__weapon_node_ids[1] = (s16) *(u8 *)((s8 *)temp_r4 + 0x22);
            TObjPlayer__weapon_node_ids[2] = (s16) *(u8 *)((s8 *)temp_r4 + 0x23);
            if ((u32) *(u32 *)((s8 *)arg0 + 0x17C) == 0U) {
                ((TItemWeapon *)arg0)->sub_80121208((s32)((void *) (apply_weapon_node_material)));
            } else {
                TObjEneRe7Berura::set_global_state((s32)((void *) (apply_weapon_node_material)));
            }
            TObjPlayer__sub_80364198();
            model_render_flags &= 0xFFFFFFEF;
            ((TObjPlayer *)arg0)->get_mag_scale();
            set_model_fade_alpha__10TObjPlayerFf();
            if (((TItemWeapon *)arg0)->is_flag_400() != 0) {
                model_render_flags |= 0x8011;
                set_color_blend_mode((1), (4), (5), (0));
                set_shadow_material_state();
                if ((u32) *(u32 *)((s8 *)arg0 + 0x17C) == 0U) {
                    if (((TItemWeapon *)arg0)->test_flags_1b8((int) (0x800000)) != 0U) {
                        draw_chunk_object((void *)(*(u32 *)((s8 *)arg0 + 0xF4)));
                    } else {
                        ((TItemWeapon *)arg0)->run_with_callback((int)((void *) (0)));
                    }
                } else {
                    TObjPlayer::set_global_flag();
                    draw_model_motion((void *)(*(u32 *)((s8 *)arg0 + 0xF4)), (void *)(*(u32 *)((s8 *)arg0 + 0x17C)), (f32) (((TItemWeapon *)arg0)->motion_frame));
                    TObjPlayer::clear_global_state();
                }
                model_render_flags &= 0xFFFF7FEE;
            } else if ((u32) *(u32 *)((s8 *)arg0 + 0x17C) == 0U) {
                if (((TItemWeapon *)arg0)->test_flags_1b8((int) (0x40)) != 0U) {
                    ((TItemWeapon *)arg0)->apply_sign_effect((int)((void *) (*(s32 *)((s8 *)(*(u8 * *)&((TItemWeapon *)arg0)->player) + 0xDB4))));
                } else if (((TItemWeapon *)arg0)->test_flags_1b8((int) (0x800000)) != 0U) {
                    draw_chunk_object((void *)(*(u32 *)((s8 *)arg0 + 0xF4)));
                } else {
                    ((TItemWeapon *)arg0)->run_with_callback((int)((void *) (*(s32 *)((s8 *)(*(u8 * *)&((TItemWeapon *)arg0)->player) + 0xDB4))));
                }
            } else {
                TObjPlayer::set_global_flag();
                draw_model_motion((void *)(*(u32 *)((s8 *)arg0 + 0xF4)), (void *)(*(u32 *)((s8 *)arg0 + 0x17C)), (f32) (((TItemWeapon *)arg0)->motion_frame));
                TObjPlayer::clear_global_state();
            }
            TObjPlayer__sub_80101088();
            TObjPlayer::end_particle_effect();
            ((TItemWeapon *)arg0)->draw_shield_particle();
            ((TItemWeapon *)arg0)->update_screen_particle_effect();
            TObjPlayer::warn_if_gauge_low();
            TObjPlayer__sub_8036414C();
            if ((u32) *(u32 *)((s8 *)arg0 + 0x17C) == 0U) {
                ((TItemWeapon *)arg0)->sub_80121208((s32)((void *) (NULL)));
            } else {
                TObjEneRe7Berura::set_global_state((s32)((void *) (NULL)));
            }
            ((TObjPlayer *)(&lbl_805D53EC))->clear_id();
        } else {
            ((TItemWeapon *)arg0)->apply_to_child((int)((void *) (*(s32 *)((s8 *)(*(u8 * *)&((TItemWeapon *)arg0)->player) + 0xDB4))));
        }
        pop_matrix();
        reset_model_node_counter();
    }
}

void draw_weapon_at_joint(s32 arg0, s8 arg1) {
    s8 temp_r31;
    temp_r31 = get_attach_joint__11TItemWeaponFv((void *) (arg0));
    ((TItemEquipBase *)arg0)->set_equip_flag((s32)((void *) (arg1)));
    draw_weapon_model((void *)((void *) (arg0)));
    ((TItemEquipBase *)arg0)->set_equip_flag((s32)((void *) (temp_r31)));
}

}
