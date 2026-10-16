#include "types.h"
#include "pso/misc/TODoorCave01.h"
#include "pso/TParticleCtrl.h"
#include "pso/object/TObjFish.h"

struct VBase_801618fc { char pad[0x18]; };
struct VObj_801618fc : VBase_801618fc {
    virtual s32 m0();
    virtual s32 m1();
    virtual s32 m2();
    virtual s32 m3();
    virtual s32 m4();
    virtual s32 m5();
    virtual s32 m6();
    virtual s32 m7();
    virtual s32 m8(f32, f32);
};

extern "C" {
s32 translate_matrix(int, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
s32 draw_ginja_model(int);
s32 set_chunk_material_color(void *, int);
extern u8 chunk_material_color_half_alpha_f32[];
extern s32 lbl_805D5660;
extern u8 *TODoorCave01__texture_lists;
extern s32 model_render_flags;
}

extern "C" {

void render__12TODoorCave01Fv(u8 *arg0);
void *TODoorCave01__ct(void *, void *, void *);
s32 post_translate_matrix(void *);
s32 draw_ginja_model_with_motion(void *, int, f32);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
void *__nw__7TObjectFUl(int);
s32 is_in_view_depth__13TUnk_804AFBF8Ff(void *, f32);

extern u8 *TODoorCave01__texture_lists;
extern const f32 lbl_805DB4A4;

s32 TODoorCave01::draw_door_model(void *p0, int p1, int arg2) {
    s32 temp_r4;
    u8 *temp_r31;
    u8 *temp_r31_2;
    TObjFish::set_global_param((int) (*(s32 *)((s8 *)TODoorCave01__texture_lists + (arg2 * 4))));
    push_matrix();
    translate_matrix((int) (0), (f32) (*(f32 *)((s8 *)((u8 *) p1) + 8)), (f32) (*(f32 *)((s8 *)((u8 *) p1) + 0xC)), (f32) (*(f32 *)((s8 *)((u8 *) p1) + 0x10)));
    draw_ginja_model((int) (*(s32 *)((s8 *)((u8 *) p1) + 4)));
    temp_r31 = *(u8 **)((s8 *)((u8 *) p1) + 0x2C);
    if (arg2 != 1) {
        temp_r4 = model_render_flags;
        lbl_805D5660 = temp_r4;
        model_render_flags = temp_r4 | 0x10;
        set_chunk_material_color((void *) (((s32) p0) + 0xDC), (int) (temp_r4));
    }
    TParticleCtrl::begin_effect_render();
    push_matrix();
    translate_matrix((int) (0), (f32) (*(f32 *)((s8 *)temp_r31 + 8)), (f32) (*(f32 *)((s8 *)temp_r31 + 0xC)), (f32) (*(f32 *)((s8 *)temp_r31 + 0x10)));
    draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31 + 4)));
    temp_r31_2 = *(u8 **)((s8 *)temp_r31 + 0x2C);
    push_matrix();
    translate_matrix((int) (0), (f32) (*(f32 *)((s8 *)temp_r31_2 + 8)), (f32) (*(f32 *)((s8 *)temp_r31_2 + 0xC)), (f32) (*(f32 *)((s8 *)temp_r31_2 + 0x10)));
    draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31_2 + 4)));
    pop_matrix();
    pop_matrix();
    TParticleCtrl::end_effect_render();
    if (arg2 != 1) {
        ((void (*)(void *)) set_chunk_material_color)(chunk_material_color_half_alpha_f32);
        model_render_flags = lbl_805D5660;
    }
    pop_matrix();
}

void render__12TODoorCave01Fv(u8 *arg0) {
    u8 *var_r30;
    s32 var_r29;

    if ((((VObj_801618fc *) arg0)->m8(*(f32 *)((s8 *)arg0 + 0xC0), *(f32 *)((s8 *)arg0 + 0xC4)) != 0) && (is_in_view_depth__13TUnk_804AFBF8Ff((void *) (arg0), (f32) (lbl_805DB4A4)) != 0)) {
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
        if ((s32) *(s32 *)((s8 *)arg0 + 0xAC) == 0) {
            var_r29 = 0;
            var_r30 = (unsigned char *) (*(void **)((s8 *)(*(void **)((s8 *)arg0 + 0x34)) + 0x2C));
            do {
                TODoorCave01::draw_door_model((void *)((void *) (arg0)), (int)((int) (var_r30)), (int)(*(s32 *)((s8 *)arg0 + 0xD0) & (1 << (var_r29 + 0x10)) ? 1 : 0));
                var_r29 += 1;
                var_r30 = (unsigned char *) (*(void **)((s8 *)var_r30 + 0x30));
            } while (var_r29 < 4);
        } else {
            TObjFish::set_global_param((int) (*(s32 *)((s8 *)TODoorCave01__texture_lists + 4)));
            draw_ginja_model_with_motion((void *) (*(void **)((s8 *)arg0 + 0x34)), (int) (*(s32 *)((s8 *)arg0 + 0xBC)), (f32) (*(f32 *)((s8 *)arg0 + 0xB0)));
        }
        pop_matrix();
    }
}

extern void *tl_05;

void *TODoorCave01::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xEC);
    if (o != NULL) {
        o = TODoorCave01__ct(o, tl_05, arg0);
    }
    return o;
}

}
