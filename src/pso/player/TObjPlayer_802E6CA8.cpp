#include "types.h"

struct VB_802E74E4 { u8 pad[0xC]; };

struct VObj_802E74E4 : VB_802E74E4 { virtual void m0(int); };

struct Vec_802E7888 { f32 x, y, z; };

struct Ang_802E7888 { s32 x, y, z; };

struct Obj_802E7888 {
    u8 pad0[0x7B0];
    u32 f7B0;
    Vec_802E7888 pos;
    Vec_802E7888 v7C0;
};

struct Col_802E6CB0 { f32 a; s32 b; s32 c; s32 d; };

struct Part_802E6CB0 { u8 pad0[0x18]; s32 f18; u8 pad1c[4]; s32 f20; f32 f24; s32 type; };

struct Node_802E6CB0 { u8 pad0[4]; s32 model; u8 pad8[0x28]; Node_802E6CB0 *next; };

struct Vec_802E6F10 { f32 x, y, z; };

struct Bone_802E6F10 { u8 pad0[4]; Vec_802E6F10 pos; Vec_802E6F10 rot; };

struct Model_802E6F10 { u8 pad0[4]; Bone_802E6F10 *bones; };

struct Part_802E6F10 {
    Vec_802E6F10 pos;
    Vec_802E6F10 rot;
    s32 f18;
    s32 f1C;
    s32 f20;
    f32 f24;
    s32 f28;
};

struct Vec_802E708C { f32 x, y, z; };

struct Col_802E708C { f32 a; s32 b; s32 c; s32 d; };

struct Part_802E708C { u8 pad0[0x18]; u8 rot[0xC]; f32 f24; s32 type; };

struct Node_802E708C { u8 pad0[4]; s32 model; u8 pad8[0x24]; Node_802E708C *child; Node_802E708C *next; };

typedef struct Vec_802E72DC { f32 x, y, z; } Vec_802E72DC;

typedef struct Src_802E72DC { u8 pad0[4]; Vec_802E72DC a; Vec_802E72DC b; } Src_802E72DC;

typedef struct Tbl_802E72DC { u8 pad0[4]; Src_802E72DC *items; } Tbl_802E72DC;

typedef struct Piece_802E72DC {
    Vec_802E72DC pos;
    Vec_802E72DC rot;
    s32 x18;
    s32 x1C;
    s32 x20;
    f32 x24;
    s32 x28;
} Piece_802E72DC;

typedef struct Obj_802E72DC {
    u8 pad0[0x18];
    s32 *vt;
    Tbl_802E72DC *tbl;
    u8 pad20[4];
    s32 count;
    Piece_802E72DC *pieces;
} Obj_802E72DC;

extern "C" {
f32 vec3_add_to(void *, void *);
extern const f32 lbl_805DE9CC;
extern const f32 lbl_805DE9D0;
extern const f32 lbl_805DE9E8;
extern const f32 lbl_805DE9EC;
extern const float lbl_805DE9F0;
extern const f32 lbl_805DE9FC;
extern const f32 lbl_805DEA00;
extern const f32 lbl_805DEA04;
extern const f32 lbl_805DEA08;
extern const f32 lbl_805DEA0C;
s32 TObjPlayer__sub_802E76C8(u8 *arg0);
s32 __dt__7TObjectFv(void *, int);
s32 free__11TOBoss4RockFUi(int);
void __dl__7TObjectFPv(void *);
extern s32 lbl_804E3BD8[];
u8 *TObjPlayer__sub_802E74E4(u8 *arg0, s16 arg1);
f64 atan2_float(f32, f32);
f32 newton_sqrtf(f32);
s32 copy_vec3__11TBoss4Type2FPvPv(int, void *);
s32 copy_pos__11TNowLoadingFPvPv(int, void *);
f32 subtract_vector(Vec_802E7888 *, Vec_802E7888 *);
extern const f64 lbl_80473FA8[];
void update_attached_orientation__8TObjFishFPv(Obj_802E7888 *o);
s32 TObjLight__sub_801337F8(s32);
u8 *queue_boss_effect__10TObjPlayerFPv(s32);
s32 draw_effect__10TObjPlayerFv();
s32 rotate_matrix_z(int, s32);
s32 translate_matrix(int, f32, f32, f32);
s32 rotate_matrix_x(int, s32);
s32 concat_matrix__10TObjPlayerFUiUi(int, s32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_chunk_material_override_pair(int, int);
s32 set_chunk_material_color(Col_802E6CB0 *);
s32 set_chunk_blend(int);
s32 draw_chunk_model(s32);
extern Col_802E6CB0 lbl_80472C9C;
extern s32 current_scene_light;
extern s32 lbl_805D5660;
extern s32 model_render_flags;
void TObjPlayer__sub_802E6CB0(u8 *arg0);
f32 lerp__9TDeadSpotFff(f32, f32);
f32 rand_signed_unit();
void alloc_breakup_model__10TObjPlayerFPvi(void *arg0, s32 arg1);
void *init_zeroed_object__10TObjPlayerFPv(void *arg0);
u8 *queue_boss_effect__10TObjPlayerFPv(s32);
s32 matrix_mult_vec(int, void *, void *);
s32 set_matrix_identity(int);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 concat_matrix__10TObjPlayerFUiUi(int, s32);
s32 push_matrix();
s32 pop_matrix();
extern s32 lbl_804E3BA8[];
extern const f32 lbl_805DE9C8;
extern const f32 lbl_805DE9CC;
extern const f32 lbl_805DE9D4;
extern const f32 lbl_805DE9D8;
extern const f32 lbl_805DE9DC;
extern const f32 lbl_805DE9E0;
u8 *init_breakup_pieces__10TObjPlayerFPvPvi(u8 *arg0, void *arg1, s32 arg2);
s32 TObjLight__sub_801337F8(s32);
u8 *queue_boss_effect__10TObjPlayerFPv(s32);
s32 draw_effect__10TObjPlayerFv();
s32 rotate_matrix_by_node_angles(void *, int);
s32 push_matrix();
s32 pop_matrix();
s32 scale_current_matrix(Vec_802E708C *);
s32 post_translate_matrix(void *);
s32 set_chunk_material_override_pair(int, int);
s32 set_chunk_material_color(Col_802E6CB0 *);
s32 set_chunk_blend(int);
s32 draw_chunk_model(s32);
extern Col_802E708C lbl_80472C80;
extern Vec_802E708C lbl_80472C90;
extern s32 current_scene_light;
extern s32 lbl_805D5660;
extern s32 model_render_flags;
extern const f32 lbl_805DE9F8;
void draw_boss_effect_parts__10TObjPlayerFPv(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
int queue_destruction__7TObjectFv(void*);
f32 lerp__9TDeadSpotFff(f32, f32);
f32 rand_signed_unit();
s32 calc_random_scaled__10TObjPlayerFv(void);
s32 collect_and_count__12TBoss3VoloptFUii(s32, s32);
void alloc_breakup_model__10TObjPlayerFPvi(void *arg0, s32 arg1);
void *init_zeroed_object__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_802E7640(void *);
u8 *queue_boss_effect__10TObjPlayerFPv(s32);
f32 vec3_add_to(void *, void *);
extern s32 lbl_80472C68[];
extern s32 lbl_804E3BC0[];
extern const f32 lbl_805DE9C8;
extern const f32 lbl_805DE9D4;
extern const f32 lbl_805DE9D8;
extern const f32 lbl_805DE9DC;
extern const f32 lbl_805DE9E0;
Obj_802E72DC *TObjPlayer__sub_802E72DC(Obj_802E72DC *arg0, s32 arg1, Vec_802E72DC *arg2, s32 arg3);
}

extern "C" {

void TObjFish__sub_802E787C(void);
void *TObjPlayer__sub_802E6EB8(void *arg0, s16 arg1);
void TObjPlayer__sub_802E7084(void);
void TObjPlayer__sub_802E7088(void);
void *TObjPlayer__sub_802E7284(void *arg0, s16 arg1);
void TObjPlayer__sub_802E746C(void);
void TObjPlayer__sub_802E7470(void);
void alloc_breakup_model__10TObjPlayerFPvi(void *arg0, s32 arg1);
void destroy_child__8TObjFishFPv(void* p);
int get_instance__10TObjPlayerFv(void);
void *init_zeroed_object__10TObjPlayerFPv(void *arg0);
s32 *init_from_model__11TBreakUpMdlFPvi(s32 *, s32);
s32 TObjPlayer__sub_802E75B8(void *, s32 *);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
s32 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
int queue_destruction__7TObjectFv(void*);

    extern int multiplay_texture_f512_handle;
int get_instance__10TObjPlayerFv(void) {  return multiplay_texture_f512_handle; }

extern s32 lbl_804E3BA8[];

void TObjPlayer__sub_802E6CB0(u8 *arg0) {
    Node_802E6CB0 *node;
    Part_802E6CB0 *part;
    s32 i;
    u8 *fx = queue_boss_effect__10TObjPlayerFPv(2);
    Col_802E6CB0 c = lbl_80472C9C;
    node = *(Node_802E6CB0 **)((s8 *)fx + 0x2C);
    part = *(Part_802E6CB0 **)((s8 *)arg0 + 0x28);
    draw_effect__10TObjPlayerFv();
    push_matrix();
    for (i = 0; i < *(s32 *)((s8 *)arg0 + 0x24); i++) {
        push_matrix();
        post_translate_matrix(part);
        rotate_matrix_z(0, part->f20);
        rotate_matrix_x(0, part->f18);
        translate_matrix(0, -*(f32 *)((s8 *)arg0 + 0x30), -*(f32 *)((s8 *)arg0 + 0x34), -*(f32 *)((s8 *)arg0 + 0x38));
        concat_matrix__10TObjPlayerFUiUi(0, *(s32 *)((s8 *)arg0 + 0x2C));
        switch (part->type) {
        case 0:
        case 1:
            draw_chunk_model(node->model);
            break;
        case 2:
            lbl_805D5660 = model_render_flags;
            model_render_flags = lbl_805D5660 | 0x8810;
            c.a = part->f24;
            set_chunk_material_color(&c);
            set_chunk_material_override_pair(0xFF00, 0x800);
            set_chunk_blend(0x2500);
            draw_chunk_model(node->model);
            set_chunk_material_override_pair(0xFF00, 0);
            model_render_flags = lbl_805D5660;
            break;
        }
        pop_matrix();
        node = node->next;
        part++;
    }
    pop_matrix();
    TObjLight__sub_801337F8(current_scene_light);
}

void *TObjPlayer__sub_802E6EB8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E3BA8;
        TObjPlayer__sub_802E74E4((u8 *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *init_breakup_pieces__10TObjPlayerFPvPvi(u8 *arg0, void *arg1, s32 arg2) {
    Part_802E6F10 *part;
    s32 i;
    init_zeroed_object__10TObjPlayerFPv(arg0);
    *(u8 **)((s8 *)arg0 + 0x18) = ((u8 *)&lbl_804E3BA8);
    alloc_breakup_model__10TObjPlayerFPvi(arg0, ((s32)queue_boss_effect__10TObjPlayerFPv(2)));
    *(s32 *)((s8 *)arg0 + 0x2C) = arg2;
    part = *(Part_802E6F10 **)((s8 *)arg0 + 0x28);
    push_matrix();
    set_matrix_identity(0);
    concat_matrix__10TObjPlayerFUiUi(0, *(s32 *)((s8 *)arg0 + 0x2C));
    (*(Vec_802E6F10 *)((s8 *)arg0 + 0x30)).z = (*(Vec_802E6F10 *)((s8 *)arg0 + 0x30)).y = (*(Vec_802E6F10 *)((s8 *)arg0 + 0x30)).x = lbl_805DE9CC;
    matrix_mult_vec(0, arg0 + 0x30, arg0 + 0x30);
    for (i = 0; i < *(s32 *)((s8 *)arg0 + 0x24); i++) {
        matrix_mult_vec(0, &(*(Model_802E6F10 **)((s8 *)arg0 + 0x1C))->bones[i].pos, &part->pos);
        rotate_vector_by_matrix(0, &(*(Model_802E6F10 **)((s8 *)arg0 + 0x1C))->bones[i].rot, &part->rot);
        part->rot.y = lerp__9TDeadSpotFff(lbl_805DE9D4, lbl_805DE9D8);
        part->rot.z -= lerp__9TDeadSpotFff(lbl_805DE9C8, lbl_805DE9DC);
        part->f18 = 0;
        part->f1C = lbl_805DE9E0 * rand_signed_unit();
        part->f20 = 0;
        part->f28 = 0;
        part->f24 = lbl_805DE9C8;
        part++;
    }
    pop_matrix();
    return arg0;
}

void TObjPlayer__sub_802E7084(void) {  }
void TObjPlayer__sub_802E7088(void) {  }

extern s32 lbl_804E3BC0[];

void draw_boss_effect_parts__10TObjPlayerFPv(u8 *arg0) {
    Node_802E708C *node;
    Part_802E708C *part;
    u8 *fx = queue_boss_effect__10TObjPlayerFPv(3);
    Col_802E708C c = lbl_80472C80;
    node = *(Node_802E708C **)((s8 *)fx + 0x2C);
    Vec_802E708C s = lbl_80472C90;
    s.z = s.y = s.x = lbl_805DE9F8;
    part = *(Part_802E708C **)((s8 *)arg0 + 0x28);
    draw_effect__10TObjPlayerFv();
    for (node = node->child; node != NULL; node = node->next) {
        push_matrix();
        post_translate_matrix(part);
        rotate_matrix_by_node_angles(part->rot, 0);
        scale_current_matrix(&s);
        switch (part->type) {
        case 0:
        case 1:
            draw_chunk_model(node->model);
            break;
        case 2:
            lbl_805D5660 = model_render_flags;
            model_render_flags = lbl_805D5660 | 0x8810;
            c.a = part->f24;
            set_chunk_material_color((Col_802E6CB0 *)(&c));
            set_chunk_material_override_pair(0xFF00, 0x800);
            set_chunk_blend(0x2500);
            draw_chunk_model(node->model);
            set_chunk_material_override_pair(0xFF00, 0);
            model_render_flags = lbl_805D5660;
            break;
        }
        pop_matrix();
        part++;
    }
    TObjLight__sub_801337F8(current_scene_light);
}

void *TObjPlayer__sub_802E7284(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E3BC0;
        TObjPlayer__sub_802E74E4((u8 *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

Obj_802E72DC *TObjPlayer__sub_802E72DC(Obj_802E72DC *arg0, s32 arg1, Vec_802E72DC *arg2, s32 arg3) {
    s32 n;
    Piece_802E72DC *p;
    Vec_802E72DC *q;
    s32 i;
    init_zeroed_object__10TObjPlayerFPv(arg0);
    arg0->vt = lbl_804E3BC0;
    if (arg3 >= 0 && (u32)arg3 < 6) {
        n = lbl_80472C68[arg3];
    } else {
        n = -1;
    }
    if (n > 0) {
        alloc_breakup_model__10TObjPlayerFPvi(arg0, collect_and_count__12TBoss3VoloptFUii(((s32)queue_boss_effect__10TObjPlayerFPv(3)), n));
        TObjPlayer__sub_802E7640(arg0);
        p = arg0->pieces;
        for (i = 0; i < arg0->count; i++, p++) {
            VecCopy__FP3VecPC3Vec(&p->pos, arg2);
            vec3_add_to(&p->pos, &arg0->tbl->items[i].a);
            q = &p->rot;
            VecCopy__FP3VecPC3Vec(q, &arg0->tbl->items[i].b);
            q->y = lerp__9TDeadSpotFff(lbl_805DE9D4, lbl_805DE9D8);
            q->z -= lerp__9TDeadSpotFff(lbl_805DE9C8, lbl_805DE9DC);
            p->x18 = calc_random_scaled__10TObjPlayerFv();
            p->x1C = lbl_805DE9E0 * rand_signed_unit();
            p->x20 = calc_random_scaled__10TObjPlayerFv();
            p->x28 = 0;
            p->x24 = lbl_805DE9C8;
        }
    } else {
        queue_destruction__7TObjectFv(arg0);
    }
    return arg0;
}

void TObjPlayer__sub_802E746C(void) {  }
void TObjPlayer__sub_802E7470(void) {  }
void alloc_breakup_model__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    s32 *temp_r4;
    s32 *var_r0;

    var_r0 = alloc__23TAdSinglePlyChrSelectGCFPv(0x10);
    if (var_r0 != NULL) {
        var_r0 = init_from_model__11TBreakUpMdlFPvi(var_r0, arg1);
    }
    *(s32 **)((s8 *)arg0 + 0x1C) = var_r0;
    temp_r4 = *(s32 **)((s8 *)arg0 + 0x1C);
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *temp_r4;
    TObjPlayer__sub_802E75B8(arg0, temp_r4);
    *(s32 *)((s8 *)arg0 + 0x28) = alloc_buffer__11TOBoss4RockFPv(*(s32 *)((s8 *)arg0 + 0x24) * 0x2C);
}

extern s32 lbl_804E3BD8[];

u8 *TObjPlayer__sub_802E74E4(u8 *arg0, s16 arg1) {
    VObj_802E74E4 *temp_r3;
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E3BD8;
        free__11TOBoss4RockFUi(*(s32 *)((s8 *)arg0 + 0x28));
        temp_r3 = *(VObj_802E74E4 **)((s8 *)arg0 + 0x1C);
        if (temp_r3 != NULL) {
            temp_r3->m0(1);
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *init_zeroed_object__10TObjPlayerFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804E3BD8;
    *(u32 *)((s8 *)arg0 + 0x20) = 0;
    *(u32 *)((s8 *)arg0 + 0x1C) = 0;
    *(u32 *)((s8 *)arg0 + 0x24) = 0;
    *(u32 *)((s8 *)arg0 + 0x28) = 0;
    return arg0;
}

    extern float lbl_805D6910;
    extern const float lbl_805DE9F0;

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma fp_contract on
s32 TObjPlayer__sub_802E76C8(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    s32 temp_r0;
    s32 temp_r31;
    s32 var_r30;
    var_r30 = 0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x28);
    temp_r31 = *(s32 *)((s8 *)arg0 + 0x1C);
    switch (temp_r0) {
    case 0:
        *(f32 *)((s8 *)arg0 + 0x10) = (f32) (*(f32 *)((s8 *)arg0 + 0x10) - lbl_805DE9E8);
        vec3_add_to((void *) (arg0), (void *) (arg0 + 0xC));
        temp_f1 = *(f32 *)((s8 *)arg0 + 0x10);
        if (temp_f1 < lbl_805DE9CC) {
            temp_f2 = *(f32 *)((s8 *)arg0 + 4);
            if (temp_f2 < lbl_805DE9FC) {
                temp_f3 = *(f32 *)((s8 *)arg0 + 0);
                temp_f4 = *(f32 *)((s8 *)arg0 + 8);
                if ((temp_f3 <= lbl_805DEA00) && (temp_f3 >= lbl_805DEA04) && (temp_f4 <= lbl_805DEA08) && (temp_f4 >= lbl_805DEA0C)) {
                    *(f32 *)((s8 *)arg0 + 0x10) = (f32) (temp_f1 * lbl_805DE9D0);
                    *(s32 *)((s8 *)arg0 + 0x28) = 2;
                } else if (temp_f2 < (*(const f32 *)&lbl_805DE9F0)) {
                    var_r30 = 1;
                    *(s32 *)((s8 *)arg0 + 0x28) = 1;
                }
            }
        }
        *(s32 *)((s8 *)arg0 + 0x18) = (s32) (*(s32 *)((s8 *)arg0 + 0x18) + temp_r31);
        *(s32 *)((s8 *)arg0 + 0x20) = (s32) (*(s32 *)((s8 *)arg0 + 0x20) + (temp_r31 * 2));
        break;
    case 2:
        *(f32 *)((s8 *)arg0 + 0x10) = (f32) (*(f32 *)((s8 *)arg0 + 0x10) - lbl_805DE9E8);
        vec3_add_to((void *) (arg0), (void *) (arg0 + 0xC));
        *(f32 *)((s8 *)arg0 + 0x24) = (f32) (*(f32 *)((s8 *)arg0 + 0x24) - lbl_805DE9EC);
        if (*(f32 *)((s8 *)arg0 + 0x24) < lbl_805DE9CC) {
            *(f32 *)((s8 *)arg0 + 0x24) = (f32) lbl_805DE9CC;
            *(s32 *)((s8 *)arg0 + 0x28) = 3;
        }
        *(s32 *)((s8 *)arg0 + 0x18) = (s32) (*(s32 *)((s8 *)arg0 + 0x18) + temp_r31);
        *(s32 *)((s8 *)arg0 + 0x20) = (s32) (*(s32 *)((s8 *)arg0 + 0x20) + (temp_r31 * 2));
        break;
    case 1:
        *(f32 *)((s8 *)arg0 + 4) = (f32) ((lbl_805DE9E8 * *(f32 *)((s8 *)arg0 + 0x10)) + *(f32 *)((s8 *)arg0 + 4));
        *(f32 *)((s8 *)arg0 + 8) = (f32) (*(f32 *)((s8 *)arg0 + 8) + *(f32 *)((s8 *)arg0 + 0x14));
        break;
    }
    return var_r30;
}
#pragma pop

void TObjFish__sub_802E787C(void) { lbl_805D6910 = lbl_805DE9F0; }

void update_attached_orientation__8TObjFishFPv(Obj_802E7888 *o) {
    if (o->f7B0 != 0) {
        Vec_802E7888 d = o->pos;
        Ang_802E7888 ang;
        subtract_vector(&d, &o->v7C0);
        ang.x = -(s32)(lbl_80473FA8[0] * atan2_float(d.y, newton_sqrtf(d.x * d.x + d.z * d.z))) - 0x4000;
        ang.y = (s32)(lbl_80473FA8[0] * atan2_float(d.x, d.z));
        ang.z = 0;
        copy_pos__11TNowLoadingFPvPv(o->f7B0, &o->pos);
        copy_vec3__11TBoss4Type2FPvPv(o->f7B0, &ang);
    }
}

void destroy_child__8TObjFishFPv(void* p) { if (*(unsigned int*)((char*)p + 0x7b0) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x7b0)); *(int*)((char*)p + 0x7b0) = 0; } }

}
