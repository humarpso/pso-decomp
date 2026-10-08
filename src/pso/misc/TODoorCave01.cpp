#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_801618fc { char pad[0x18]; };
struct VObj_801618fc : VBase_801618fc {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual M2C_UNK m8(f32, f32);
};

extern "C" {
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_ginja_model(int);
M2C_UNK set_chunk_material_color(void *, int);
extern u8 chunk_material_color_half_alpha_f32[];
extern s32 lbl_805D5660;
extern u8 *TODoorCave01__data_805D595C;
extern s32 some_id_805c6f74;
M2C_UNK draw_door_model__12TODoorCave01FPvii(void *p0, int p1, int arg2);
}

extern "C" {

void *create__12TODoorCave01FPv(void *arg0);
void render__12TODoorCave01Fv(u8 *arg0);
void *TODoorCave01__ct(void *, void *, void *);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_model_with_motion(void *, int, f32);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
void *__nw__7TObjectFUl(int);
s32 is_in_view_depth(void *, f32);
M2C_UNK set_global_param__8TObjFishFi(int);

extern u8 *TODoorCave01__data_805D595C;
extern const f32 lbl_805DB4A4;

M2C_UNK draw_door_model__12TODoorCave01FPvii(void *p0, int p1, int arg2) {
    s32 temp_r4;
    u8 *temp_r31;
    u8 *temp_r31_2;
    set_global_param__8TObjFishFi((int) (M2C_FIELD(TODoorCave01__data_805D595C, M2C_UNK *, (arg2 * 4))));
    push_matrix();
    translate_matrix((int) (0), (f32) (M2C_FIELD(((u8 *) p1), f32 *, 8)), (f32) (M2C_FIELD(((u8 *) p1), f32 *, 0xC)), (f32) (M2C_FIELD(((u8 *) p1), f32 *, 0x10)));
    draw_ginja_model((int) (M2C_FIELD(((u8 *) p1), s32 *, 4)));
    temp_r31 = M2C_FIELD(((u8 *) p1), u8 **, 0x2C);
    if (arg2 != 1) {
        temp_r4 = some_id_805c6f74;
        lbl_805D5660 = temp_r4;
        some_id_805c6f74 = temp_r4 | 0x10;
        set_chunk_material_color((void *) (((s32) p0) + 0xDC), (int) (temp_r4));
    }
    begin_effect_render__13TParticleCtrlFv();
    push_matrix();
    translate_matrix((int) (0), (f32) (M2C_FIELD(temp_r31, f32 *, 8)), (f32) (M2C_FIELD(temp_r31, f32 *, 0xC)), (f32) (M2C_FIELD(temp_r31, f32 *, 0x10)));
    draw_ginja_model((int) (M2C_FIELD(temp_r31, s32 *, 4)));
    temp_r31_2 = M2C_FIELD(temp_r31, u8 **, 0x2C);
    push_matrix();
    translate_matrix((int) (0), (f32) (M2C_FIELD(temp_r31_2, f32 *, 8)), (f32) (M2C_FIELD(temp_r31_2, f32 *, 0xC)), (f32) (M2C_FIELD(temp_r31_2, f32 *, 0x10)));
    draw_ginja_model((int) (M2C_FIELD(temp_r31_2, s32 *, 4)));
    pop_matrix();
    pop_matrix();
    end_effect_render__13TParticleCtrlFv();
    if (arg2 != 1) {
        ((void (*)(void *)) set_chunk_material_color)(chunk_material_color_half_alpha_f32);
        some_id_805c6f74 = lbl_805D5660;
    }
    pop_matrix();
}

void render__12TODoorCave01Fv(u8 *arg0) {
    u8 *var_r30;
    s32 var_r29;

    if ((((VObj_801618fc *) arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) && (is_in_view_depth((void *) (arg0), (f32) (lbl_805DB4A4)) != 0)) {
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xAC) == 0) {
            var_r29 = 0;
            var_r30 = (unsigned char *) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x2C));
            do {
                draw_door_model__12TODoorCave01FPvii((void *)((void *) (arg0)), (int)((int) (var_r30)), (int)(M2C_FIELD(arg0, s32 *, 0xD0) & (1 << (var_r29 + 0x10)) ? 1 : 0));
                var_r29 += 1;
                var_r30 = (unsigned char *) (M2C_FIELD(var_r30, void **, 0x30));
            } while (var_r29 < 4);
        } else {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(TODoorCave01__data_805D595C, s32 *, 4)));
            draw_ginja_model_with_motion((void *) (M2C_FIELD(arg0, void **, 0x34)), (int) (M2C_FIELD(arg0, s32 *, 0xBC)), (f32) (M2C_FIELD(arg0, f32 *, 0xB0)));
        }
        pop_matrix();
    }
}

extern void *tl_05;

void *create__12TODoorCave01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xEC);
    if (o != NULL) {
        o = TODoorCave01__ct(o, tl_05, arg0);
    }
    return o;
}

}
