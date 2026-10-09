#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
s32 get_attach_joint__14TItemEquipBaseFPv(void *);
s32 set_equip_flag__14TItemEquipBaseFPvUc(void *, void *);
void draw_weapon_at_joint(s32 arg0, s8 arg1);
M2C_UNK clear_id__10TObjPlayerFPv(void *);
M2C_UNK get_item_ptr__10TObjPlayerFPvi(void *, void *);
s32 is_flag_400__10TObjPlayerFPv(void *);
M2C_UNK get_mag_scale__10TObjPlayerFPv(void *);
M2C_UNK update_screen_particle_effect__10TObjPlayerFPv(void *);
M2C_UNK draw_shield_particle__10TObjPlayerFPv(void *);
M2C_UNK end_particle_effect__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_80101088();
M2C_UNK run_with_callback__10TObjPlayerFPvi(void *, void *);
M2C_UNK apply_sign_effect__10TObjPlayerFPvi(void *, void *);
M2C_UNK apply_to_child__10TObjPlayerFPvi(void *, void *);
s32 get_flag_40__8TItemMagFPv(void *);
u32 test_flags_1b8__10TObjPlayerFPvUi(void *, int);
s32 get_attach_joint__14TItemEquipBaseFPv(void *);
M2C_UNK TObjPlayer__sub_80121208(void *, void *);
M2C_UNK reset_model_node_counter();
M2C_UNK set_shadow_material_state();
M2C_UNK notify_fish_if_valid__10TObjPlayerFUi(int);
M2C_UNK warn_if_gauge_low__10TObjPlayerFv();
M2C_UNK set_model_fade_alpha__10TObjPlayerFf();
M2C_UNK TObjPlayer__sub_8036414C();
M2C_UNK TObjPlayer__sub_80364198();
M2C_UNK push_matrix_from();
M2C_UNK pop_matrix();
M2C_UNK set_color_blend_mode(int, int, int, int);
M2C_UNK draw_chunk_object(int);
M2C_UNK draw_model_motion(int, int, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(void *);
void apply_weapon_node_material();
extern s16 TObjPlayer__weapon_node_ids[];
extern M2C_UNK lbl_805D53EC;
extern s16 weapon_node_material_index;
extern u8 *lbl_805D5514;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DACA8;
extern const f32 lbl_805DACAC;
s32 draw_weapon_model(void *arg0);
}

extern "C" {

s32 draw_weapon_model(void *arg0) {
    s32 var_r30;
    u8 *temp_r4;
    if ((void *) M2C_FIELD(arg0, u8 **, 0xF0) == NULL || (u32) M2C_FIELD(arg0, u32 *, 0xF4) == 0U) {
        return;
    }
    {
        reset_model_node_counter();
        if (is_flag_400__10TObjPlayerFPv((void *) (arg0)) != 0) {
            var_r30 = 1;
        } else {
            var_r30 = ((VObj_18_26a62c *)(arg0))->m8(lbl_805DACA8, lbl_805DACAC);
        }
        notify_fish_if_valid__10TObjPlayerFUi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        get_item_ptr__10TObjPlayerFPvi((void *) (M2C_FIELD(arg0, u8 **, 0xF0)), (void *) ((s8)get_attach_joint__14TItemEquipBaseFPv((void *) (arg0))));
        push_matrix_from();
        if ((var_r30 != 0) && (get_flag_40__8TItemMagFPv((void *) (arg0)) == 0)) {
            lbl_805D5514 = (u8 *)arg0;
            weapon_node_material_index = M2C_FIELD(arg0, s16 *, 0x1CC);
            temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x1DC));
            TObjPlayer__weapon_node_ids[0] = (s16) M2C_FIELD(temp_r4, u8 *, 0x21);
            TObjPlayer__weapon_node_ids[1] = (s16) M2C_FIELD(temp_r4, u8 *, 0x22);
            TObjPlayer__weapon_node_ids[2] = (s16) M2C_FIELD(temp_r4, u8 *, 0x23);
            if ((u32) M2C_FIELD(arg0, u32 *, 0x17C) == 0U) {
                TObjPlayer__sub_80121208((void *) (arg0), (void *) (apply_weapon_node_material));
            } else {
                set_global_state__16TObjEneRe7BeruraFi((void *) (apply_weapon_node_material));
            }
            TObjPlayer__sub_80364198();
            some_id_805c6f74 &= 0xFFFFFFEF;
            get_mag_scale__10TObjPlayerFPv((void *) (arg0));
            set_model_fade_alpha__10TObjPlayerFf();
            if (is_flag_400__10TObjPlayerFPv((void *) (arg0)) != 0) {
                some_id_805c6f74 |= 0x8011;
                set_color_blend_mode((int) (1), (int) (4), (int) (5), (int) (0));
                set_shadow_material_state();
                if ((u32) M2C_FIELD(arg0, u32 *, 0x17C) == 0U) {
                    if (test_flags_1b8__10TObjPlayerFPvUi((void *) (arg0), (int) (0x800000)) != 0U) {
                        draw_chunk_object((int) (M2C_FIELD(arg0, u32 *, 0xF4)));
                    } else {
                        run_with_callback__10TObjPlayerFPvi((void *) (arg0), (void *) (0));
                    }
                } else {
                    set_global_flag__10TObjPlayerFv();
                    draw_model_motion((int) (M2C_FIELD(arg0, u32 *, 0xF4)), (int) (M2C_FIELD(arg0, u32 *, 0x17C)), (f32) (M2C_FIELD(arg0, f32 *, 0x1D8)));
                    clear_global_state__10TObjPlayerFv();
                }
                some_id_805c6f74 &= 0xFFFF7FEE;
            } else if ((u32) M2C_FIELD(arg0, u32 *, 0x17C) == 0U) {
                if (test_flags_1b8__10TObjPlayerFPvUi((void *) (arg0), (int) (0x40)) != 0U) {
                    apply_sign_effect__10TObjPlayerFPvi((void *) (arg0), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xF0), s32 *, 0xDB4)));
                } else if (test_flags_1b8__10TObjPlayerFPvUi((void *) (arg0), (int) (0x800000)) != 0U) {
                    draw_chunk_object((int) (M2C_FIELD(arg0, u32 *, 0xF4)));
                } else {
                    run_with_callback__10TObjPlayerFPvi((void *) (arg0), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xF0), s32 *, 0xDB4)));
                }
            } else {
                set_global_flag__10TObjPlayerFv();
                draw_model_motion((int) (M2C_FIELD(arg0, u32 *, 0xF4)), (int) (M2C_FIELD(arg0, u32 *, 0x17C)), (f32) (M2C_FIELD(arg0, f32 *, 0x1D8)));
                clear_global_state__10TObjPlayerFv();
            }
            TObjPlayer__sub_80101088();
            end_particle_effect__10TObjPlayerFv();
            draw_shield_particle__10TObjPlayerFPv((void *) (arg0));
            update_screen_particle_effect__10TObjPlayerFPv((void *) (arg0));
            warn_if_gauge_low__10TObjPlayerFv();
            TObjPlayer__sub_8036414C();
            if ((u32) M2C_FIELD(arg0, u32 *, 0x17C) == 0U) {
                TObjPlayer__sub_80121208((void *) (arg0), (void *) (NULL));
            } else {
                set_global_state__16TObjEneRe7BeruraFi((void *) (NULL));
            }
            clear_id__10TObjPlayerFPv((void *) (&lbl_805D53EC));
        } else {
            apply_to_child__10TObjPlayerFPvi((void *) (arg0), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xF0), s32 *, 0xDB4)));
        }
        pop_matrix();
        reset_model_node_counter();
    }
}

void draw_weapon_at_joint(s32 arg0, s8 arg1) {
    s8 temp_r31;
    temp_r31 = get_attach_joint__14TItemEquipBaseFPv((void *) (arg0));
    set_equip_flag__14TItemEquipBaseFPvUc((void *) (arg0), (void *) (arg1));
    draw_weapon_model((void *)((void *) (arg0)));
    set_equip_flag__14TItemEquipBaseFPvUc((void *) (arg0), (void *) (temp_r31));
}

}
