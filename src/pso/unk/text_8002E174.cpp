#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 rand(void);
extern s32 lbl_805D26A0;
extern const f32 lbl_805D8200;
extern const f32 lbl_805D821C;
extern const f32 lbl_805D8220;
void TObjBoss1Rock__ct(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3);
}

extern "C" {

void *TObjBoss1Rock__sub_8002E174(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_80482078[];

void *TObjBoss1Rock__sub_8002E174(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482078;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void TObjBoss1Rock__ct(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D26A0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg1);
    VecCopy__FP3VecPC3Vec(arg0 + 0x28, arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (lbl_805D821C * (lbl_805D8220 * (f32) rand()));
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (lbl_805D821C * (lbl_805D8220 * (f32) rand()));
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) lbl_805D8200;
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) lbl_805D8200;
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) lbl_805D8200;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) lbl_805D8200;
    if (arg3 == 0) {
        M2C_FIELD(arg0, s32 *, 0x50) = 2;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x50) = 1;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef struct Unit { u8 pad[0x2C]; } Unit;

typedef struct Boss2 { u8 pad[0x20]; Unit units[0x1C]; } Boss2;

typedef s32 M2C_UNK;
struct Color_8002E3D4 { f32 a; s32 b, c, d; };

struct Vec_8002E3D4 { f32 x, y, z; };

struct Part_8002E3D4 {
    Vec_8002E3D4 pos;
    f32 fC;
    f32 f10;
    f32 f14;
    s32 f18;
    s32 f1C;
    s32 f20;
    f32 f24;
    s32 f28;
};

struct Node_8002E3D4 { u8 pad[4]; s32 f4; u8 pad8[0x30 - 8]; Node_8002E3D4 *next; };

struct Mesh_8002E3D4 { u8 pad[0x2C]; Node_8002E3D4 *nodes; };

struct Model_8002E3D4 { u8 pad[0x2C]; s32 f2C; u8 pad30[0x58 - 0x30]; Mesh_8002E3D4 *mesh; };

struct Holder_8002E3D4 { u8 pad[0x42C]; Model_8002E3D4 *model; };

struct Obj_8002E3D4 {
    u8 pad0[0x20];
    Part_8002E3D4 parts[0x1C];
    s32 f4F0;
    Vec_8002E3D4 f4F4;
};

struct Vec_8002E62C { f32 x, y, z; };

struct Part_8002E62C {
    Vec_8002E62C pos;
    f32 fC;
    f32 f10;
    f32 f14;
    s32 f18;
    s32 f1C;
    s32 f20;
    f32 f24;
    s32 f28;
};

struct Ent_8002E62C { u8 pad[4]; Vec_8002E62C a; Vec_8002E62C b; };

struct Model_8002E62C { u8 pad[4]; Ent_8002E62C *ents; };

struct Obj_8002E62C {
    u8 pad0[0x18];
    M2C_UNK *vt;
    u8 pad1c[0x20 - 0x1C];
    Part_8002E62C parts[0x1C];
    s32 f4F0;
    Vec_8002E62C f4F4;
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 TObjPlayer__sub_8002EDCC(void *);
M2C_UNK create_particle__17TObjBoss2CeilJunkFv(void *, M2C_UNK);
void TObjPlayer__sub_8002E53C(u8 *arg0);
M2C_UNK TObjLight__sub_801337F8(s32);
M2C_UNK rotate_matrix_z(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK concat_matrix__10TObjPlayerFUiUi(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK set_chunk_material_override_pair(int, int);
M2C_UNK set_chunk_material_color(void *);
M2C_UNK set_chunk_blend(int);
M2C_UNK draw_chunk_model(s32);
extern Color_8002E3D4 lbl_8043560C;
extern Holder_8002E3D4 *lbl_805D4BA4;
extern s32 current_scene_light;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
void draw_part_models__10TObjPlayerFPv(Obj_8002E3D4 *self);
f32 lerp__9TDeadSpotFff(f32, f32);
f32 rand_signed_unit();
M2C_UNK init_base__10TObjPlayerFPv(void *);
M2C_UNK matrix_mult_vec(int, void *, void *);
M2C_UNK set_matrix_identity(int);
M2C_UNK rotate_vector_by_matrix(int, void *, void *);
M2C_UNK concat_matrix__10TObjPlayerFUiUi(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
extern M2C_UNK lbl_80482090[];
extern Model_8002E62C *lbl_805D4B8C;
extern const f32 lbl_805D8228;
extern const f32 lbl_805D822C;
extern const f32 lbl_805D8234;
extern const f32 lbl_805D8238;
extern const f32 lbl_805D823C;
extern const f32 lbl_805D8240;
Obj_8002E62C *construct_piece_controller__10TObjPlayerFPvii(Obj_8002E62C *self, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void TObjBoss1Rock__sub_8002E3CC(void);
void TObjBoss1Rock__sub_8002E3D0(void);
void *TObjPlayer__sub_8002E5D4(void *arg0, s16 arg1);
void *construct__13TObjBoss1RockFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void deleting_dtor__10TObjPlayerFPvs(void *, int);

extern M2C_UNK lbl_80482078[];

void *construct__13TObjBoss1RockFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482078;
    TObjBoss1Rock__ct((u8 *)arg0, (u8 *)arg2, (u8 *)arg3, (s32)arg4);
    return arg0;
}

extern const f32 lbl_805D8224;

void *construct_random__13TObjBoss1RockFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    s32 flag;

    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482078;
    if (lbl_805D8220 * (f32)rand() > lbl_805D8224) {
        flag = 0;
    } else {
        flag = 1;
    }
    TObjBoss1Rock__ct((u8 *)arg0, (u8 *)arg2, (u8 *)arg3, (s32)flag);
    return arg0;
}

void TObjBoss1Rock__sub_8002E3CC(void) {  }
void TObjBoss1Rock__sub_8002E3D0(void) {  }

extern M2C_UNK lbl_80482090[];

struct Ctr;
typedef struct Ctr Ctr;

void draw_part_models__10TObjPlayerFPv(Obj_8002E3D4 *self) {
    Node_8002E3D4 *n;
    Part_8002E3D4 *p;
    s32 i;
    Model_8002E3D4 *model;
    Mesh_8002E3D4 *mesh;
    p = self->parts;
    model = lbl_805D4BA4->model;
    mesh = model->mesh;
    {
        Color_8002E3D4 c = lbl_8043560C;
        n = mesh->nodes;
        set_global_param__8TObjFishFi(model->f2C);
        push_matrix();
        for (i = 0; i < 0x1C; i++, n = n->next, p++) {
            push_matrix();
            post_translate_matrix(p);
            rotate_matrix_z(0, p->f20);
            rotate_matrix_x(0, p->f18);
            translate_matrix(0, -self->f4F4.x, -self->f4F4.y, -self->f4F4.z);
            concat_matrix__10TObjPlayerFUiUi(0, self->f4F0);
            switch (p->f28) {
            case 0:
            case 1:
                draw_chunk_model(n->f4);
                break;
            case 2:
                lbl_805D5660 = some_id_805c6f74;
                some_id_805c6f74 = lbl_805D5660 | 0x8810;
                c.a = p->f24;
                set_chunk_material_color(&c);
                set_chunk_material_override_pair(0xFF00, 0x800);
                set_chunk_blend(0x2500);
                draw_chunk_model(n->f4);
                set_chunk_material_override_pair(0xFF00, 0);
                some_id_805c6f74 = lbl_805D5660;
                break;
            }
            pop_matrix();
        }
    }
    pop_matrix();
    TObjLight__sub_801337F8(current_scene_light);
}

void TObjPlayer__sub_8002E53C(u8 *arg0) {
    u8 *temp_r30;
    s32 var_r29;
    Boss2 *self;
    self = (Boss2 *)arg0;
    {
        s32 *ctr = (s32 *)(arg0 + 0x1C);
        *ctr += 1;
        if (*ctr >= 0xA0) {
            queue_destruction__7TObjectFv((void *)(arg0));
            return;
        }
    }
    var_r29 = 0;
    do {
        temp_r30 = (u8 *)&self->units[var_r29];
        if (TObjPlayer__sub_8002EDCC(temp_r30) != 0) {
            if ((var_r29 % 2) == 0) {
                create_particle__17TObjBoss2CeilJunkFv(temp_r30, 0x170);
            }
        }
        var_r29 += 1;
    } while (var_r29 < 0x1C);
}

void *TObjPlayer__sub_8002E5D4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482090;
        deleting_dtor__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
Obj_8002E62C *construct_piece_controller__10TObjPlayerFPvii(Obj_8002E62C *self, M2C_UNK arg1, s32 arg2) {
    Part_8002E62C *p;
    s32 i;
    Vec_8002E62C *v;
    init_base__10TObjPlayerFPv(self);
    p = self->parts;
    self->vt = lbl_80482090;
    self->f4F0 = arg2;
    push_matrix();
    set_matrix_identity(0);
    concat_matrix__10TObjPlayerFUiUi(0, self->f4F0);
    v = &self->f4F4;
    v->x = lbl_805D822C;
    v->y = lbl_805D822C;
    v->z = lbl_805D822C;
    matrix_mult_vec(0, v, v);
    for (i = 0; i < 0x1C; i++, p++) {
        matrix_mult_vec(0, &lbl_805D4B8C->ents[i].a, &p->pos);
        rotate_vector_by_matrix(0, &lbl_805D4B8C->ents[i].b, &p->fC);
        p->f10 = lerp__9TDeadSpotFff(lbl_805D8234, lbl_805D8238);
        p->f14 -= lerp__9TDeadSpotFff(lbl_805D8228, lbl_805D823C);
        p->f18 = 0;
        p->f1C = (s32)(lbl_805D8240 * rand_signed_unit());
        p->f20 = 0;
        p->f28 = 0;
        p->f24 = lbl_805D8228;
    }
    pop_matrix();
    return self;
}

}
