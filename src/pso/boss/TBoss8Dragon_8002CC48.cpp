#include "types.h"
#include <stddef.h>
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8002D41C_lbl_80482060 { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8002D41C_lbl_80482060_size[sizeof(RecoveredGlobal_8002D41C_lbl_80482060) == 0x18 ? 1 : -1];

struct UV_8002D4C0 { s16 u, v; };

struct Vtx_8002D4C0 { s16 pad; s16 u; s16 v; };

struct Hdr_8002D4C0 { u8 pad[4]; s16 count; };

struct Obj_8002D4C0 { f32 x; u8 pad[4]; f32 z; };

typedef struct Ent_8002CE78 {
    f32 *dst;
    f32 base;
    f32 ofs;
    u8 padC[4];
} Ent_8002CE78;

typedef struct Obj_8002CE78 {
    u8 pad0[0x1C];
    s32 active;
    u8 pad20[0x14];
    f32 unk34;
    s32 unk38;
} Obj_8002CE78;

struct Trail_8002CC48 {
    u8 pad0[0x28];
    u8 pos[0x34 - 0x28];
    f32 f34;
    f32 f38;
    u8 pad3C[0x40 - 0x3C];
    s32 f40;
    s32 state;
    u8 pad48[0x4C - 0x48];
    s32 f4C;
};

struct Vec_8002CFB8 { f32 x; f32 y; f32 z; };
struct Ent_8002CFB8 { u8 pad0[8]; f32 f8; s32 state; };
struct Trail_8002CFB8 {
    u8 pad0[0x10];
    void *f10;
    u8 pad14[0x1C - 0x14];
    s32 f1C;
    Vec_8002CFB8 pos;
    f32 f2C;
    f32 f30;
    f32 f34;
    u8 pad38[4];
    s32 f3C;
};

struct Vtx_8002DB7C { f32 p[3]; f32 n[3]; };

struct Model_8002DB7C {
    u32 *vertices;
    u16 *polygons;
    f32 center[3];
    f32 radius;
};

struct Object_8002DB7C {
    u32 flags;
    Model_8002DB7C *model;
    f32 position[3];
    s32 rotation[3];
    f32 scale[3];
    Object_8002DB7C *child;
    Object_8002DB7C *sibling;
};

struct Grid_8002DB7C {
    s32 width;
    s32 strips;
    s32 stripWords;
    s32 materialWords;
    u32 *vertices;
    u16 *polygons;
    Model_8002DB7C model;
    Object_8002DB7C object;
};

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

extern M2C_UNK lbl_80482048[];
extern M2C_UNK lbl_80482060[];
extern s32 lbl_805D2698;
extern u8 *lbl_805D4B50;
extern s32 lbl_805D4B54;
extern int lbl_805D4B60;
extern int lbl_805D4B64;
extern int lbl_805D4B68;
extern int lbl_805D4B6C;
extern Hdr_8002D4C0 *lbl_805D4B70;
extern s32 lbl_805D4B74;
extern int lbl_805D4B78;
extern s32 lbl_805D4B7C;
extern s32 lbl_805D4B80;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D8178;
extern const f32 lbl_805D817C;
extern const f32 lbl_805D8180;
extern const f32 lbl_805D8184;
extern const f32 lbl_805D818C;
extern const f32 lbl_805D8198;
extern const f32 lbl_805D81A0;
extern const f32 lbl_805D81AC;
extern const f32 lbl_805D81B4;
extern const f32 lbl_805D81D0;
extern const f32 lbl_805D81D4;
extern const f32 lbl_805D81D8;
extern const f32 lbl_805D81DC;
extern const f32 lbl_805D81E0;
extern const f32 lbl_805D81E4;
extern const f32 lbl_805D81F4;
extern const f32 lbl_805D81F8;
extern const f32 lbl_805D8200;

void VecCopy__FP3VecPC3Vec(void *, void *);
s32 check_v2_mode__9TObjEneDDFv(void);
void __ct__7TObjectFP7TObject(void *, void *);
void translate_matrix(s32, f32, f32, f32);
void push_matrix(void);
void pop_matrix(void);
void post_translate_matrix(void *);
void set_global_param__8TObjFishFi(s32);
void set_chunk_material_override_pair(s32, s32, s32, s32);
void draw_chunk_object(void *);
void queue_destruction__7TObjectFv();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK __dl__FPv(void *);
void *alloc_buffer__11TOBoss4RockFPv(u32);
f32 newton_sqrtf(f32);
f32 calc_nearest_crater_distance(void *);
void *construct__13TObjBoss1RockFPvPvPvPvPv(void *, void *, void *, void *, void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
f32 horizontal_distance_squared(void *, void *);
s32 rand(void);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32, f32);
M2C_UNK update_scale__15TObjBoss2TunnelFPv(void *, f32);
void rotate_matrix_y(int, int);
void rotate_matrix_x(int, int);
void set_chunk_material_color(void *);

void update_dragon_trail_piece(Trail_8002CC48 *self);
s32 get_state__12TBoss8DragonFv(void);
void *TBoss8Dragon__sub_8002CD34(void *arg0, s16 arg1);
void *TBoss8Dragon__sub_8002CD8C(void *, void *, int);
void render_dragon_trail(Obj_8002CE78 *arg0);
void update_dragon_trail(Trail_8002CFB8 *self);
s32 is_dragon_trail_damaging(u8 *arg0);
void set_field_3c__12TBoss8DragonFPv(void* p);
void set_field_1c__12TBoss8DragonFPv(void* p);
void spawn_child_object__12TBoss8DragonFPv(void *arg0);
void *TBoss8Dragon__sub_8002D3C4(void *arg0, s16 arg1);
u8 *TBoss8Dragon__sub_8002D41C(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3);
void update_dragon_trail_uvs(Obj_8002D4C0 *self);
void free_resources__12TBoss8DragonFv(void);
s32 TBoss8Dragon__sub_8002DAEC(void *arg0);
s32 TBoss8Dragon__sub_8002DB04(void *arg0);
void *destroy__12TBoss8DragonFPvs(void *arg0, s16 arg1);
Grid_8002DB7C *TBoss8Dragon__sub_8002DB7C(Grid_8002DB7C *g, s32 width, s32 strips, s32 materialWords, s16 *material);
void apply_default_velocity_scale__12TBoss8DragonFv(void);
f32 apply_velocity_scale__12TBoss8DragonFPvff(void *arg0, f32 farg0, f32 farg1);
f32 lerp__9TDeadSpotFff(f32 farg0, f32 farg1);
f32 rand_signed_unit(void);
void render__13TObjBoss1RockFPv(Obj_8002DF7C *self);

void update_dragon_trail_piece(Trail_8002CC48 *self) {
    switch (self->state) {
    case 0:
        self->f34 += lbl_805D8178;
        if (self->f34 >= self->f38) {
            self->f34 = self->f38;
            self->state = 1;
        }
        VecCopy__FP3VecPC3Vec(self->pos, ((void *(*)(void *))get_state__12TBoss8DragonFv)(self));
        break;
    case 1:
        self->f40++;
        if (self->f40 > self->f4C) {
            self->state = 2;
        }
        break;
    case 2:
        self->f34 -= lbl_805D817C;
        if (self->f34 < lbl_805D8180) {
            queue_destruction__7TObjectFv();
        }
        break;
    }
}

s32 get_state__12TBoss8DragonFv(void) {
    return lbl_805D4B7C;
}

void *TBoss8Dragon__sub_8002CD34(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482048;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void render_dragon_trail(Obj_8002CE78 *arg0) {
    Ent_8002CE78 *p;
    s32 i;
    if (arg0->active != 0) {
        set_global_param__8TObjFishFi(lbl_805D4B54);
        update_dragon_trail_uvs((Obj_8002D4C0 *)((struct Obj_8002D4C0 *)lbl_805D4B7C));
        for (p = (Ent_8002CE78 *)lbl_805D4B78, i = 0; i < lbl_805D4B74; i++, p++) {
            *p->dst = p->base + p->ofs;
        }
        push_matrix();
        post_translate_matrix((void *)lbl_805D4B7C);
        translate_matrix(0, lbl_805D8198, arg0->unk34, lbl_805D8198);
        if (arg0->unk38 != 0) {
            lbl_805D5660 = some_id_805c6f74;
            lbl_805D5664 = lbl_805D7784;
            lbl_805D5668 = lbl_805D7780;
            some_id_805c6f74 |= 0x800;
            set_chunk_material_override_pair(0xFF00, 0x100, lbl_805D7780, lbl_805D7784);
            draw_chunk_object(*(void **)(*(u8 **)(lbl_805D4B50 + 0x42C) + 0x38));
            lbl_805D7784 = lbl_805D5664;
            lbl_805D7780 = lbl_805D5668;
            some_id_805c6f74 = lbl_805D5660;
        } else {
            draw_chunk_object(*(void **)(*(u8 **)(lbl_805D4B50 + 0x42C) + 0x38));
        }
        pop_matrix();
        for (p = (Ent_8002CE78 *)lbl_805D4B78, i = 0; i < lbl_805D4B74; i++, p++) {
            *p->dst = p->base;
        }
    }
}

#pragma push
#pragma fp_contract on
void update_dragon_trail(Trail_8002CFB8 *self) {
    Vec_8002CFB8 pos;
    Vec_8002CFB8 vel;
    f32 d;
    f32 ax;
    f32 az;
    f32 s;
    f32 c;
    s32 ang;
    void *o;
    Ent_8002CFB8 *p;
    s32 i;

    if (self->f1C != 0) {
        self->f30 += 0.5f;
        if (self->f30 > 0.0f) {
            self->f30 = 0.0f;
        }
        d = calc_nearest_crater_distance((void *)lbl_805D4B7C);
        self->f34 = self->f30;
        if (0.0f != d && d < 95.0f) {
            self->f34 = -(-0.31578946f * d - -30.0f);
            if (self->f34 > self->f30) {
                self->f34 = self->f30;
            }
        }
        if (self->f34 >= 0.0f) {
            self->f2C += newton_sqrtf(horizontal_distance_squared((void *)lbl_805D4B7C, &self->pos));
            VecCopy__FP3VecPC3Vec(&self->pos, (void *)lbl_805D4B7C);
            if (self->f2C >= 10.0f) {
                self->f2C = 0.0f;
                if (self->f3C != 0) {
                    o = __nw__7TObjectFUl(0x50);
                    if (o != NULL) {
                        TBoss8Dragon__sub_8002CD8C(o, self->f10, 0);
                    }
                } else {
                    o = __nw__7TObjectFUl(0x50);
                    if (o != NULL) {
                        TBoss8Dragon__sub_8002CD8C(o, self->f10, 0x1E);
                    }
                }
            }
            ang = *(s32 *)lbl_805D4B80;
            s = ((f32 (*)(s32))cos_table_lookup)(ang);
            c = sin_table_lookup(ang);
            ax = c * lbl_805D81AC + ((Vec_8002CFB8 *)lbl_805D4B7C)->x;
            az = s * lbl_805D81AC + ((Vec_8002CFB8 *)lbl_805D4B7C)->z;
            ang += (s32)(10000.0f * rand_signed_unit());
            s = ((f32 (*)(s32))cos_table_lookup)(ang);
            c = sin_table_lookup(ang);
            pos.x = c * lbl_805D81B4 + ((Vec_8002CFB8 *)lbl_805D4B7C)->x;
            pos.y = 0.0f;
            pos.z = s * lbl_805D81B4 + ((Vec_8002CFB8 *)lbl_805D4B7C)->z;
            vel.x = pos.x - ax;
            vel.z = pos.z - az;
            clamp_velocity__15TObjBoss2TunnelFPv(&vel);
            vel.x *= 1.5f;
            vel.z *= 1.5f;
            vel.y = lerp__9TDeadSpotFff(6.0f, 9.0f);
            o = __nw__7TObjectFUl(0x54);
            if (o != NULL) {
                construct__13TObjBoss1RockFPvPvPvPvPv(o, self->f10, &pos, &vel, (void *)1);
            }
        }
        for (p = (Ent_8002CFB8 *)lbl_805D4B78, i = 0; i < lbl_805D4B74; p++, i++) {
            switch (p->state) {
            case 0:
                if (p->f8 < -8.0f) {
                    p->f8 = -8.0f;
                    p->state = (s32)(70.0f * (3.0517578125e-05f * (f32)rand())) + 2;
                } else {
                    p->f8 = p->f8 - 0.2f;
                }
                break;
            case 1:
                if (p->f8 > 0.0f) {
                    p->f8 = 0.0f;
                    p->state = 0;
                } else {
                    p->f8 = p->f8 + lbl_805D8184;
                }
                break;
            default:
                p->state--;
                break;
            }
        }
    }
}
#pragma pop

s32 is_dragon_trail_damaging(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x34) >= lbl_805D81D0;
}

void set_field_3c__12TBoss8DragonFPv(void* p) { set_field_1c__12TBoss8DragonFPv((void*)((void*)(p))); *(int*)((char*)p + 0x3c) = 1; }
void set_field_1c__12TBoss8DragonFPv(void* p) { *(s32*)((char*)p + 0x1c) = 1; }

void spawn_child_object__12TBoss8DragonFPv(void *arg0) {
    void *o;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805D81A0;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_805D81A0;
    o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        TBoss8Dragon__sub_8002CD8C(o, M2C_FIELD(arg0, void **, 0x10), 30);
    }
    M2C_FIELD(arg0, u32 *, 0x3C) = 0;
}

void *TBoss8Dragon__sub_8002D3C4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482060;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TBoss8Dragon__sub_8002D41C(u8 *arg0, u8 *arg1, u8 *arg2, s32 arg3) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8002D41C_lbl_80482060 *)&lbl_80482060).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2698;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    (*(u8 * *)&lbl_805D4B7C) = arg2;
    lbl_805D4B80 = arg3;
    VecCopy__FP3VecPC3Vec(arg0 + 0x20, arg2);
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805D8198;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_805D81A0;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805D81A0;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    return arg0;
}

void update_dragon_trail_uvs(Obj_8002D4C0 *self) {
    s32 cnt;
    s16 n;
    s16 *p = (s16 *)((u8 *)lbl_805D4B70 + 6);
    UV_8002D4C0 *src = (*(UV_8002D4C0 * *)&lbl_805D4B6C);
    s32 i = 0;
    s16 du = (s16)(lbl_805D81D8 * (lbl_805D81DC * self->x));
    s16 dv = (s16)(lbl_805D81D8 * (lbl_805D81E0 * self->z));
    cnt = lbl_805D4B70->count & 0x3FFF;
    for (; i < cnt; i++) {
        n = *p++;
        s32 j;
        if (n < 0) {
            n = -n;
        }
        for (j = 0; j < n; j++) {
            Vtx_8002D4C0 *v = (Vtx_8002D4C0 *)p;
            v->u = src->u + du;
            v->v = src->v + dv;
            src++;
            p += 3;
        }
    }
}

void free_resources__12TBoss8DragonFv(void) { ((int (*)(void*))free__11TOBoss4RockFUi)((void*)(lbl_805D4B78)); lbl_805D4B78 = 0; ((int (*)(void*))free__11TOBoss4RockFUi)((void*)(lbl_805D4B6C)); lbl_805D4B6C = 0; ((int (*)(void*, void*))destroy__12TBoss8DragonFPvs)((void*)(lbl_805D4B64), (void*)1); lbl_805D4B64 = 0; ((int (*)(void*, void*))destroy__12TBoss8DragonFPvs)((void*)(lbl_805D4B68), (void*)1); lbl_805D4B68 = 0; ((int (*)(void*, void*))destroy__12TBoss8DragonFPvs)((void*)(lbl_805D4B60), (void*)1); lbl_805D4B60 = 0; }

s32 TBoss8Dragon__sub_8002DAEC(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x14) + ((M2C_FIELD(arg0, s32 *, 0xC) + 3) * 2);
}

s32 TBoss8Dragon__sub_8002DB04(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10) + 8;
}

void *destroy__12TBoss8DragonFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x10));
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x14));
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

Grid_8002DB7C *TBoss8Dragon__sub_8002DB7C(Grid_8002DB7C *g, s32 width, s32 strips, s32 materialWords, s16 *material) {
    s32 i;
    s32 first;
    s32 second;
    s16 *p;
    s32 row;
    s32 x;
    s32 count;
    u32 *v;
    Vtx_8002DB7C *vt;
    g->width = width;
    g->strips = strips;
    g->materialWords = materialWords;
    g->stripWords = g->width * 6 + 1;
    g->polygons = (u16 *)alloc_buffer__11TOBoss4RockFPv((g->materialWords + 5 + g->stripWords * g->strips) * 2);
    g->vertices = (u32 *)alloc_buffer__11TOBoss4RockFPv((g->width * (g->strips + 1) * 6 + 3) * 4);
    p = (s16 *)g->polygons;
    for (i = 0; i < g->materialWords; i++) {
        *p++ = *material++;
    }
    *p++ = 0x242;
    *p++ = g->stripWords * g->strips + 1;
    *p++ = g->strips;
    first = 0;
    second = g->width;
    for (row = 0; row < g->strips; row++) {
        *p++ = g->width * 2;
        for (x = 0; x < g->width;) {
            *p++ = first++;
            x++;
            *p++ = 0;
            *p++ = 0;
            *p++ = second++;
            *p++ = 0;
            *p++ = 0;
        }
    }
    *p++ = 0xff;
    *p = 0xff;
    count = g->width * (g->strips + 1);
    v = g->vertices;
    *v++ = ((count * 6 + 1) << 16) | 0x29;
    *v++ = count << 16;
    vt = (Vtx_8002DB7C *)v;
    for (i = 0; i < count; i++) {
        vt->p[0] = lbl_805D8198;
        vt->p[1] = lbl_805D8198;
        vt->p[2] = lbl_805D8198;
        vt->n[0] = lbl_805D8198;
        vt->n[1] = lbl_805D8198;
        vt->n[2] = lbl_805D8198;
        vt++;
    }
    *(u32 *)vt = 0xff;
    g->model.vertices = g->vertices;
    g->model.polygons = g->polygons;
    g->model.center[0] = lbl_805D8198;
    g->model.center[1] = lbl_805D8198;
    g->model.center[2] = lbl_805D8198;
    g->model.radius = lbl_805D8198;
    g->object.flags = 0x17;
    g->object.model = &g->model;
    g->object.position[0] = lbl_805D8198;
    g->object.position[1] = lbl_805D8198;
    g->object.position[2] = lbl_805D8198;
    g->object.rotation[0] = 0;
    g->object.rotation[1] = 0;
    g->object.rotation[2] = 0;
    g->object.scale[0] = lbl_805D81F4;
    g->object.scale[1] = lbl_805D81F4;
    g->object.scale[2] = lbl_805D81F4;
    g->object.child = NULL;
    g->object.sibling = NULL;
    return g;
}

void apply_default_velocity_scale__12TBoss8DragonFv(void) {
    ((M2C_UNK (*)(f32, f32))apply_velocity_scale__12TBoss8DragonFPvff)(lbl_805D81E4, lbl_805D81D4);
}

f32 apply_velocity_scale__12TBoss8DragonFPvff(void *arg0, f32 farg0, f32 farg1) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 var_f31;
    s32 temp_r31;

    temp_f1 = ((f32 (*)(void))clamp_velocity__15TObjBoss2TunnelFPv)();
    if (temp_f1 > farg0) {
        var_f31 = lbl_805D8198;
        M2C_FIELD(arg0, f32 *, 0) = var_f31;
        M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_805D81F4;
        M2C_FIELD(arg0, f32 *, 8) = var_f31;
    } else {
        temp_r31 = (s32) (lbl_805D81F8 * (temp_f1 / farg0));
        var_f31 = farg1 * (lbl_805D81F4 + cos_table_lookup(temp_r31, lbl_805D81F8));
        temp_f1_2 = sin_table_lookup(temp_r31);
        temp_f2 = M2C_FIELD(arg0, f32 *, 0) * temp_f1_2;
        M2C_FIELD(arg0, f32 *, 0) = temp_f2;
        M2C_FIELD(arg0, f32 *, 4) = (f32) lbl_805D81F4;
        M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) * temp_f1_2);
        update_scale__15TObjBoss2TunnelFPv(arg0, temp_f1_2);
    }
    return var_f31;
}

#pragma push
#pragma fp_contract on
f32 lerp__9TDeadSpotFff(f32 farg0, f32 farg1) {
    return ((farg1 - farg0) * (lbl_805D818C * (f32) rand())) + farg0;
}
#pragma pop

#pragma push
#pragma fp_contract on
f32 rand_signed_unit(void) {
    return lbl_805D8184 * ((lbl_805D818C * (f32) rand()) - lbl_805D817C);
}
#pragma pop

#pragma push
#pragma fp_contract on
void render__13TObjBoss1RockFPv(Obj_8002DF7C *self) {
    if (self->color < lbl_805D8200) {
        lbl_805D5660 = some_id_805c6f74;
        some_id_805c6f74 = lbl_805D5660 | 0x810;
        ((void (*)(s32, s32))set_chunk_material_override_pair)(0xFF00, 0x800);
        set_chunk_material_color(&self->color);
        push_matrix();
        set_global_param__8TObjFishFi(lbl_805D4B54);
        post_translate_matrix(self->pos);
        rotate_matrix_y(0, self->ry);
        rotate_matrix_x(0, self->rx);
        ((void (*)(s32))draw_chunk_object)((*(Res_8002DF7C **)&lbl_805D4B50)->ents[self->idx].id);
        pop_matrix();
        ((void (*)(s32, s32))set_chunk_material_override_pair)(0xFF00, 0);
        some_id_805c6f74 = lbl_805D5660;
    } else {
        push_matrix();
        set_global_param__8TObjFishFi(lbl_805D4B54);
        post_translate_matrix(self->pos);
        rotate_matrix_y(0, self->ry);
        rotate_matrix_x(0, self->rx);
        ((void (*)(s32))draw_chunk_object)((*(Res_8002DF7C **)&lbl_805D4B50)->ents[self->idx].id);
        pop_matrix();
    }
}
#pragma pop

}
