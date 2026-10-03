#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_800836E8 {
    f32 sp8;
    f32 spC;
    M2C_UNK sp10;
    u8 trailing_storage[0x2C];
};

extern "C" {
s32 is_split_screen();
s32 TCameraCtrl__sub_800689F4();
M2C_UNK calc_projection_screen_offset(void *, void *);
f64 calc_camera_fov_degrees();
M2C_UNK PSMTXConcat(void *, void *, void *);
M2C_UNK C_MTXLightPerspective(void *, f32, f32, f32, f32, f32, f32);
M2C_UNK rotate_matrix_y(int, void *);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK load_current_pos_matrix(int);
M2C_UNK load_current_tex_matrix(int);
extern const f64 lbl_80439358;
extern s32 lbl_805D7774;
extern const f32 lbl_805D93DC;
extern const f32 lbl_805D940C;
extern const f32 lbl_805D9414;
void TOTrapAncient02__sub_800837D4(s32 arg0);
f64 calc_camera_fov_degrees();
s32 is_split_screen();
s32 TCameraCtrl__sub_800689F4();
M2C_UNK calc_projection_screen_offset(void *, void *);
M2C_UNK PSMTXConcat(void *, void *, void *);
M2C_UNK C_MTXLightPerspective(void *, f32, f32, f32, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK load_current_pos_matrix(int);
M2C_UNK load_current_tex_matrix(int);
extern const f64 lbl_80439358;
extern s32 lbl_805D7774;
extern const f32 lbl_805D93DC;
extern const f32 lbl_805D9414;
void load_projected_texture_matrix(f32 farg0);
}

extern "C" {

void setup_particle_tev(s32 arg0);
void setup_tev_stage__10TObjPlayerFv(void);
M2C_UNK GXSetTevOp(M2C_UNK, M2C_UNK);
M2C_UNK GXSetTevOrder(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_803DC83C(M2C_UNK);
M2C_UNK TObjPlayer__sub_803DC850(M2C_UNK);
M2C_UNK load_list_texture(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 is_split_screen();
M2C_UNK set_global_param__8TObjFishFi(M2C_UNK *);
M2C_UNK set_tex_coord_gen__10TObjPlayerFiiii(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK lbl_8048E5B4[];
extern s32 some_id_805c6f74;

void setup_tev_stage__10TObjPlayerFv(void) {
    if (is_split_screen() == 0) {
        GXSetTevOrder(1, 1, 1, 4);
        GXSetTevOp(1, 2);
        set_tex_coord_gen__10TObjPlayerFiiii(1, 0, 0, 0x1E);
        set_global_param__8TObjFishFi(lbl_8048E5B4);
        load_list_texture(0, 0, 0, 1);
        some_id_805c6f74 |= 0x80000;
        TObjPlayer__sub_803DC850(1);
        TObjPlayer__sub_803DC83C(1);
    }
}

extern M2C_UNK lbl_8048E5B4[];
extern s32 some_id_805c6f74;

void setup_particle_tev(s32 arg0) {
    if (is_split_screen() == 0) {
        GXSetTevOrder(1, 1, 1, 4);
        if (arg0 != 0) {
            GXSetTevOp(1, 0);
        } else {
            GXSetTevOp(1, 1);
        }
        set_tex_coord_gen__10TObjPlayerFiiii(1, 0, 0, 0x1E);
        set_global_param__8TObjFishFi(lbl_8048E5B4);
        load_list_texture(0, 0, 0, 1);
        some_id_805c6f74 |= 0x80000;
        TObjPlayer__sub_803DC850(1);
        TObjPlayer__sub_803DC83C(1);
    }
}

void load_projected_texture_matrix(f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_800836E8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800836E8, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800836E8, sp10) == 0x8) ? 1 : -1];
    Stack_800836E8 stack;
    f32 temp_f31;
    if (is_split_screen() == 0) {
        calc_projection_screen_offset((void *) (&stack.spC), (void *) (&stack.sp8));
        push_matrix();
        temp_f31 = (f32) (lbl_80439358 * calc_camera_fov_degrees());
        if (TCameraCtrl__sub_800689F4() != 0) {
            C_MTXLightPerspective((void *) (&stack.sp10), (f32) (temp_f31), (f32) (farg0), (f32) (lbl_805D93DC), (f32) (lbl_805D9414), (f32) (lbl_805D93DC - stack.spC), (f32) (lbl_805D93DC - stack.sp8));
        } else {
            C_MTXLightPerspective((void *) (&stack.sp10), (f32) (temp_f31), (f32) (farg0), (f32) (lbl_805D93DC), (f32) (lbl_805D9414), (f32) (lbl_805D93DC), (f32) (lbl_805D93DC));
        }
        PSMTXConcat((void *) (&stack.sp10), (void *) (lbl_805D7774), (void *) (lbl_805D7774));
        load_current_tex_matrix((int) (0));
        pop_matrix();
        load_current_pos_matrix((int) (0));
    }
}

void TOTrapAncient02__sub_800837D4(s32 arg0) {
    u8 sp10[0x30];
    f32 spC;
    f32 sp8;
    f32 temp_f31;
    if (is_split_screen() == 0) {
        calc_projection_screen_offset((void *) (&spC), (void *) (&sp8));
        push_matrix();
        rotate_matrix_y((int) (0), (void *) (arg0));
        temp_f31 = (f32) (lbl_80439358 * calc_camera_fov_degrees());
        if (TCameraCtrl__sub_800689F4() != 0) {
            C_MTXLightPerspective((void *) (sp10), (f32) (temp_f31), (f32) (lbl_805D940C), (f32) (lbl_805D93DC), (f32) (lbl_805D9414), (f32) (lbl_805D93DC - spC), (f32) (lbl_805D93DC - sp8));
        } else {
            C_MTXLightPerspective((void *) (sp10), (f32) (temp_f31), (f32) (lbl_805D940C), (f32) (lbl_805D93DC), (f32) (lbl_805D9414), (f32) (lbl_805D93DC), (f32) (lbl_805D93DC));
        }
        PSMTXConcat((void *) (sp10), (void *) (lbl_805D7774), (void *) (lbl_805D7774));
        load_current_tex_matrix((int) (0));
        pop_matrix();
        load_current_pos_matrix((int) (0));
    }
}

}
