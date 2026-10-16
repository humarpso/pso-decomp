#include "types.h"
#include "pso/object/TObjDoaEx01.h"
#include "pso/TParticleCtrl.h"

struct NjObj_8018DD0C {
    u32 evalflags;
    u32 model;
    f32 pos[3];
    s32 ang[3];
    f32 scl[3];
    NjObj_8018DD0C *child;
    NjObj_8018DD0C *sibling;
};

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
s32 rotate_matrix_by_node_angles(void *, int);
s32 push_matrix();
s32 pop_matrix();
s32 scale_current_matrix(void *);
s32 post_translate_matrix(void *);
s32 draw_ginja_model(int);
s32 set_chunk_material_color(void *);
extern u8 chunk_material_color_half_alpha_f32[];
extern s32 lbl_805D5660;
extern u8 *TObjDoaEx01__alpha_model_node;
extern u8 *TObjDoaEx01__alpha_model_sibling;
extern s32 model_render_flags;
s32 get_bml_motion(s32, s32);
s32 TObjFish__sub_8001EDB0(s32, s32);
s32 get_bml_model(s32, s32);
s32 free_children__12TObjDoorJungFPv(s32, s32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFl();
s32 draw_ginja_model_with_motion(s32, s32, f32);
extern s32 TObjDoaEx01__resource_bundle;
extern u8 *TObjDoaEx01__alpha_model_node;
extern u8 *TObjDoaEx01__alpha_model_sibling;
extern const f32 TObjDoaEx01__data_805DBDA0;
extern const f32 lbl_805DBDB4;
extern const f32 lbl_805DBDB8;
}

extern "C" {

s32 post_translate_matrix(void *);
s32 free_children__12TObjDoorJungFPv(s32, s32);
s32 TObjFish__sub_8001EDB0(s32, s32);
s32 get_bml_model(s32, s32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 set_global_param__8TObjFishFl();

struct TObjDoaEx01_base { char pad[0x18]; };
struct TObjDoaEx01_VObj : TObjDoaEx01_base {
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
extern s32 TObjDoaEx01__resource_bundle;
extern u8 *TObjDoaEx01__alpha_model_node;
extern u8 *TObjDoaEx01__alpha_model_sibling;
extern const f32 lbl_805DBDB4;
extern const f32 lbl_805DBDB8;

s32 TObjDoaEx01::draw_object_tree(s32 arg1) {
    NjObj_8018DD0C *obj = (NjObj_8018DD0C *)arg1;
    u32 flags = obj->evalflags;
    push_matrix();
    if (!(flags & 1)) {
        post_translate_matrix(obj->pos);
    }
    if (!(flags & 2)) {
        rotate_matrix_by_node_angles(obj->ang, flags & 0x20);
    }
    if (!(flags & 4)) {
        scale_current_matrix(obj->scl);
    }
    if (!(flags & 8) && obj->model != 0) {
        if ((u8 *)obj == TObjDoaEx01__alpha_model_node || (u8 *)obj == TObjDoaEx01__alpha_model_sibling) {
            TParticleCtrl::begin_effect_render();
            lbl_805D5660 = model_render_flags;
            model_render_flags = model_render_flags | 0x10;
            set_chunk_material_color((u8 *)this + 0xD4);
            draw_ginja_model(obj->model);
            set_chunk_material_color(chunk_material_color_half_alpha_f32);
            model_render_flags = lbl_805D5660;
            TParticleCtrl::end_effect_render();
        } else {
            draw_ginja_model(obj->model);
        }
    }
    if (obj->child != 0) {
        draw_object_tree((s32)obj->child);
    }
    pop_matrix();
    if (obj->sibling != 0) {
        draw_object_tree((s32)obj->sibling);
    }
}

void TObjDoaEx01::try_open() {
    s32 temp_r31;

    temp_r31 = get_bml_model(TObjDoaEx01__resource_bundle, 0);
    if (((TObjDoaEx01_VObj*)((u8 *)this))->m8(lbl_805DBDB4, lbl_805DBDB8) != 0) {
        free_children__12TObjDoorJungFPv(*(s32 *)((s8 *)TObjDoaEx01__alpha_model_node + 4), 1);
        free_children__12TObjDoorJungFPv(*(s32 *)((s8 *)TObjDoaEx01__alpha_model_sibling + 4), 1);
        TObjFish__sub_8001EDB0(TObjDoaEx01__resource_bundle, 0);
        set_global_param__8TObjFishFl();
        push_matrix();
        post_translate_matrix(((u8 *)this) + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)((u8 *)this) + 0x60));
        ((TObjDoaEx01 *)((u8 *)this))->draw_object_tree((s32)(temp_r31));
        pop_matrix();
    }
}
void TObjDoaEx01::draw_model() {
    f32 temp_f31;
    s32 temp_r31;
    s32 temp_r31_2;
    if (((VObj_18_26a62c *)(((u8 *)this)))->m8(lbl_805DBDB4, lbl_805DBDB8) != 0) {
        free_children__12TObjDoorJungFPv((*(s32 *)((s8 *)TObjDoaEx01__alpha_model_node + 4)), (0));
        free_children__12TObjDoorJungFPv((*(s32 *)((s8 *)TObjDoaEx01__alpha_model_sibling + 4)), (0));
        temp_r31 = get_bml_model((TObjDoaEx01__resource_bundle), (0));
        TObjFish__sub_8001EDB0((TObjDoaEx01__resource_bundle), (0));
        set_global_param__8TObjFishFl();
        push_matrix();
        post_translate_matrix((void *) (((u8 *)this) + 0x38));
        rotate_matrix_y((0), (*(s32 *)((s8 *)((u8 *)this) + 0x60)));
        temp_f31 = *(f32 *)((s8 *)((u8 *)this) + 0xB0);
        if (temp_f31 > TObjDoaEx01__data_805DBDA0) {
            temp_r31 = get_bml_motion((TObjDoaEx01__resource_bundle), (0));
            draw_ginja_model_with_motion(get_bml_model((TObjDoaEx01__resource_bundle), (0)), temp_r31, temp_f31);
        } else {
            ((TObjDoaEx01 *)((u8 *)this))->draw_object_tree((temp_r31));
        }
        pop_matrix();
    }
}

}
