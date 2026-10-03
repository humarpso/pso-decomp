#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_8002DF7C { u8 pad0[8]; s32 id; u8 padc[4]; };

struct Res_8002DF7C { u8 pad0[0x42C]; Ent_8002DF7C *ents; };

struct Obj_8002DF7C {
    u8 pad0[0x1C];
    u8 pos[0x18];
    s32 ry;
    s32 rx;
    f32 x3c;
    f32 color;
    u8 pad44[0x50 - 0x44];
    s32 idx;
};

extern "C" {
s32 rand();
extern const f32 lbl_805D817C;
extern const f32 lbl_805D8184;
extern const f32 lbl_805D818C;
f32 rand_signed_unit(void);
void rotate_matrix_y(int, int);
void rotate_matrix_x(int, int);
void push_matrix();
void pop_matrix();
void post_translate_matrix(void *);
void set_global_param__8TObjFishFi(s32);
void set_chunk_material_override_pair(s32, s32);
void set_chunk_material_color(void *);
void draw_chunk_object(s32);
extern Res_8002DF7C *lbl_805D4B50;
extern s32 lbl_805D4B54;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D8200;
void render__13TObjBoss1RockFPv(Obj_8002DF7C *self);
}

extern "C" {

f32 lerp__9TDeadSpotFff(f32 farg0, f32 farg1);
s32 rand();

extern M2C_UNK lbl_804355D0;
extern const f32 lbl_805D818C;

f32 lerp__9TDeadSpotFff(f32 farg0, f32 farg1) {
    return ((farg1 - farg0) * (lbl_805D818C * (f32) rand())) + farg0;
}
f32 rand_signed_unit(void) {
    return lbl_805D8184 * ((lbl_805D818C * (f32) rand()) - lbl_805D817C);
}
void render__13TObjBoss1RockFPv(Obj_8002DF7C *self) {
    if (self->color < lbl_805D8200) {
        lbl_805D5660 = some_id_805c6f74;
        some_id_805c6f74 = lbl_805D5660 | 0x810;
        set_chunk_material_override_pair(0xFF00, 0x800);
        set_chunk_material_color(&self->color);
        push_matrix();
        set_global_param__8TObjFishFi(lbl_805D4B54);
        post_translate_matrix(self->pos);
        rotate_matrix_y(0, self->ry);
        rotate_matrix_x(0, self->rx);
        draw_chunk_object(lbl_805D4B50->ents[self->idx].id);
        pop_matrix();
        set_chunk_material_override_pair(0xFF00, 0);
        some_id_805c6f74 = lbl_805D5660;
    } else {
        push_matrix();
        set_global_param__8TObjFishFi(lbl_805D4B54);
        post_translate_matrix(self->pos);
        rotate_matrix_y(0, self->ry);
        rotate_matrix_x(0, self->rx);
        draw_chunk_object(lbl_805D4B50->ents[self->idx].id);
        pop_matrix();
    }
}

}
