#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "pso/misc/TSceneMaterial.h"

struct Rec_80203510 { s32 id; f32 pos[3]; u8 pad[0xC]; f32 radius; u8 pad2[0x14]; };

struct Root_80203510 { u8 pad[8]; s16 count; u8 pad2[6]; Rec_80203510 *recs; };

struct Root_80204024 { u8 pad[0x178]; f32 x; f32 y; f32 z; };

struct Vec_80204024 { f32 x, y, z; };

struct Inner_802040D4 { u8 pad[0x20]; f32 radius; };

struct Obj_802040D4 { u8 pad[4]; Inner_802040D4 *inner; u8 pos[1]; };

struct Rec_8020430C { u8 pad0[4]; f32 pos[3]; u8 pad1[0x20]; u32 flags; };

struct Root_8020430C { u8 pad[8]; s16 count; u8 pad2[2]; f32 radius; Rec_8020430C *recs; };

struct Vec_8020430C { f32 x, y, z; };

struct W_8020430C { s32 a, b, c; };

struct Cam_8020430C { u8 pad[0x178]; W_8020430C pos; };

struct Obj_802040D4;
typedef s32 M2C_UNK;
struct Obj_80204B78 { u8 pad0[4]; f32 x; f32 y; f32 z; u8 pad10[0xC]; f32 radius; u8 pad20[0x10]; u32 flags; };

typedef void (*RecoveredCallback_2be3cacebb2e)(void);
struct SceneMaterialRoot;
struct Motion_80203F0C { u8 pad[4]; u32 frames; };

struct Anim_80203F0C {
    u8 pad0[4];
    Motion_80203F0C *motion;
    u8 pad8[4];
    f32 frame;
    f32 speed;
    u8 pad14[8];
    u32 flags;
};

struct Group_80203F0C {
    u8 pad0[0x24];
    Anim_80203F0C *anims;
    u8 pad28[4];
    s32 count;
    u8 pad30[4];
};

struct Root_80203F0C { u8 pad[8]; s16 count; u8 pad2[6]; Group_80203F0C *groups; };

extern "C" {
extern SceneMaterialRoot* TScene__data_805D5FCC;
SceneMaterialSection *find_scene_room_by_id(s32 id);
void matrix_mult_vec(int, void *, void *);
extern const f32 TScene__data_805DC5D8;
bool is_in_view_depth__6TSceneFf(f32 farg0);
f32 xyz_distance_squared(void *, void *);
extern SceneMaterialRoot* TScene__data_805D5FCC;
extern const f32 lbl_805DC5D0;
s32 find_section_at_position__6TSceneFPv(void *arg0);
f32 vec3_dot(void *, void *);
f32 project_point_onto_line(void *, void *, void *);
extern Root_80204024 *lbl_805D4DF0;
extern const f32 TScene__data_805DC5D8;
s32 TScene__sub_80204024(f32 thr, s32 unused, void *a, void *b, Vec_80204024 *c);
f32 xz_distance_squared(void *, void *);
bool is_in_view_depth__6TSceneFf(f32 farg0);
extern Root_80204024 *lbl_805D4DF0;
s32 TScene__sub_802040D4(void *arg0, Obj_802040D4 *o, f32 f0, f32 f1);
f32 xz_distance_squared(void *, void *);
extern Root_80204024 *lbl_805D4DF0;
extern SceneMaterialRoot* TScene__data_805D5FCC;
extern f32 TScene__data_805D5FE4;
void update_records_in_range__6TSceneFv(void);
SceneMaterialNode* resolve_indirect_node_record(void*,SceneMaterialStatic*);
SceneMaterialNode* resolve_indirect_object_record(void*,SceneMaterialAnimated*);
s32 TScene__sub_802040D4(void *arg0, Obj_802040D4 *o, f32 f0, f32 f1);
extern const f32 lbl_805DC5DC;
extern const f32 lbl_805DC5E0;
void update_room_object_visibility__6TSceneFPvPv(void *task, SceneMaterialSection *room);
extern SceneMaterialRoot* TScene__data_805D5FCC;
extern const f32 TScene__data_805DC5D8;
extern const f32 TScene__data_805DC600;
extern u8 lbl_8058D490[];
f32 vec3_dot(void *, void *);
s32 TScene__sub_80204024(f32 thr, s32 unused, void *a, void *b, Vec_80204024 *c);
void normalize_vector(Vec_80204024 *);
void push_matrix_from(void *);
void rotate_matrix_y(s32, s32);
void rotate_vector_by_matrix(s32, void *, Vec_80204024 *);
void pop_matrix(void);
s32 check_object_in_view_cone__6TSceneFiPvPvPvi(s32 arg0, Obj_80204B78 *obj, Vec_80204024 *pos, void *arg3, s32 arg4);
extern SceneMaterialRoot* TScene__data_805D5FCC;
extern RecoveredCallback_2be3cacebb2e TScene__data_805D5FF4;
extern s32 some_id_805c6f74;
extern s32 lbl_805D5660;
void draw_if_all_ready__10TObjPlayerFv(void);
void set_global_param__8TObjFishFi(void *);
void prepare_ginja_model(void);
void end_ginja_model_draw(void);
void push_matrix(void);
void pop_matrix(void);
s32 get_global_state__14TOKeyMachine01Fv(void);
void render_static_map_section__6TSceneFv(void *, SceneMaterialSection *, s32);
void render_animated_map_section__6TSceneFv(void *, SceneMaterialSection *, s32);
void post_translate_matrix(f32 *);
void rotate_matrix_by_node_angles(s32 *, s32);
void render_map_sections__6TSceneFPv(void *scene);
extern SceneMaterialRoot* TScene__data_805D5FCC;
extern const f32 TScene__data_805DC5D8;
void advance_scene_object_animations(void);
extern SceneMaterialRoot* TScene__data_805D5FCC;
extern void* TScene__data_805D6004;
SceneMaterialNode* resolve_indirect_node_record(void*,SceneMaterialStatic*);
SceneMaterialNode* resolve_indirect_object_record(void*,SceneMaterialAnimated*);
s32 load_texture_sequence_frame(void*,SceneMaterialCycle*);
f32 get_random_float__8TObjFishFv(f32);
void offset_position__6TSceneFPvii(void*,s32,s32);
void free_children__12TObjDoorJungFPvPv(void*,u16);
void PPCSync();
extern const f32 lbl_805DC5D4;
void tick_material_fmt2__6TSceneFPv(void *task);
extern SceneMaterialRoot* TScene__data_805D5FCC;
extern void* TScene__data_805D6004;
SceneMaterialNode* resolve_indirect_node_record(void*,SceneMaterialStatic*);
SceneMaterialNode* resolve_indirect_object_record(void*,SceneMaterialAnimated*);
s32 load_texture_sequence_frame(void*,SceneMaterialCycle*);
f32 get_random_float__8TObjFishFv(f32);
void scroll_ginja_mesh_uvs(void *, s32, s32, u16, s32);
void free_children__12TObjDoorJungFPvPv(void*,u16);
void PPCSync();
extern const f32 lbl_805DC5D4;
void tick_material_fmt1__6TSceneFPv(void *task);
struct Vec_8020533C { f32 x, y, z; };
struct Ang_8020533C { s32 x, y, z; };
struct Node_8020533C { u8 pad0[8]; Vec_8020533C pos; Ang_8020533C ang; };
struct Model_8020533C { u8 pad0[4]; void *tex; s32 f8; u8 padC[2]; u8 fE; u8 fF; };
struct Lobby_8020533C { Vec_8020533C v; Ang_8020533C a; void *param; Node_8020533C *node; s16 scene; u8 id; };

s32 get_state_flag__9TMainTaskFv(void);
void apply_single_screen_state__6TSceneFv();
void render_projected_shadow_receiver(void *, void *);
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void update_particle_if_active__12TObjEneReconFv(void);
void notify_scene__12TObjEneReconFi(s32);
void set_indirect_tev__6TSceneFii(u32, s32);
void draw_field_1c__6TSceneFPviii(void *, s32, s32, s32);
void release_indexed_entry__6TLobbyFi(Lobby_8020533C *);
void vec3_add_to(void *, void *);
void draw_ginja_object(void *);
void set_current_scene__6TSceneFi(u32);
extern s32 TScene__data_805D5FE0;
extern void (*TScene__data_805D5FEC)(Vec_8020533C *, Ang_8020533C *, u32);
extern void (*TScene__data_805D5FF0)(u32);

}

extern "C" {

s32 get_player_ctrl_field__6TSceneFUs(u16 arg0);
u32 get_player_by_client_id(void *);

s32 find_section_at_position__6TSceneFPv(void *arg0) {
    Rec_80203510 *r;
    s32 best = -1;
    s32 i;
    f32 bestd;
    if ((*(Root_80203510 * *)&TScene__data_805D5FCC) == NULL) {
        return -1;
    }
    bestd = lbl_805DC5D0;
    r = (*(Root_80203510 * *)&TScene__data_805D5FCC)->recs;
    for (i = 0; i < (*(Root_80203510 * *)&TScene__data_805D5FCC)->count; i++, r++) {
        if (r->id >= 0) {
            f32 d = xyz_distance_squared(arg0, r->pos);
            if (!(d > r->radius * r->radius) && d < bestd) {
                bestd = d;
                best = r->id;
            }
        }
    }
    return best;
}

s32 get_player_ctrl_field__6TSceneFUs(u16 arg0) {
    u32 temp_r3;

    temp_r3 = get_player_by_client_id((void *) (arg0));
    if (temp_r3 != 0U) {
        return find_section_at_position__6TSceneFPv((void *)((void *) (temp_r3 + 0x38)));
    }
    return -1;
}

}

#include "pso/misc/TSceneMaterial.h"
extern "C" {
extern SceneMaterialRoot* TScene__data_805D5FCC;
extern void* TScene__data_805D6004;
SceneMaterialNode* resolve_indirect_node_record(void*,SceneMaterialStatic*);
SceneMaterialNode* resolve_indirect_object_record(void*,SceneMaterialAnimated*);
s32 load_texture_sequence_frame(void*,SceneMaterialCycle*);

f32 get_random_float__8TObjFishFv(f32);
void offset_position__6TSceneFPvii(void*,s32,s32);
void free_children__12TObjDoorJungFPvPv(void*,u16);
void PPCSync();
extern const f32 lbl_805DC5D4;

SceneMaterialSection *find_scene_room_by_id(s32 id) {
    s32 i;
    s16 count = TScene__data_805D5FCC->count;
    for (i = 0; i < count; i++) {
        if (TScene__data_805D5FCC->sections[i].id == id) {
            return &TScene__data_805D5FCC->sections[i];
        }
    }
    return NULL;
}

void tick_material_fmt2__6TSceneFPv(void *task) {
    SceneMaterialSection *room;
    s32 section;
    SceneMaterialStatic *object;
    s32 i;
    SceneMaterialAnimated *anim;
    SceneMaterialNode *node;
    SceneMaterialUv *uv;
    if ((*(void * *)&TScene__data_805D6004) == NULL || (*(SceneMaterialRoot * *)&TScene__data_805D5FCC) == NULL) {
        return;
    }
    room = (*(SceneMaterialRoot * *)&TScene__data_805D5FCC)->sections;
    for (section = 0; section < (*(SceneMaterialRoot * *)&TScene__data_805D5FCC)->count; section++, room++) {
        SceneMaterialStatic *o2;
        s32 k;
        o2 = room->objects;
        for (k = 0; k < room->count; k++, o2++) {
            o2->flags &= ~0x20000;
        }
        {
            SceneMaterialAnimated *a2;
            s32 k2;
            a2 = room->animated;
            for (k2 = 0; k2 < room->animatedCount; k2++, a2++) {
                a2->flags &= ~0x20000;
            }
        }
    }
    room = (*(SceneMaterialRoot * *)&TScene__data_805D5FCC)->sections;
    for (section = 0; section < (*(SceneMaterialRoot * *)&TScene__data_805D5FCC)->count; section++, room++) {
        object = room->objects;
        for (i = 0; i < room->count; i++, object++) {
            if (object->flags & 0x20000) {
                continue;
            }
            if (object->flags & 0x04000000) {
                continue;
            }
            node = ((SceneMaterialNode *)resolve_indirect_node_record((void*)(task), (SceneMaterialStatic*)(object)));
            if (object->flags & 0x20) {
                uv = object->uv;
                uv->u += uv->du;
                uv->v += uv->dv;
                if (get_random_float__8TObjFishFv(uv->u) >= lbl_805DC5D4 || get_random_float__8TObjFishFv(uv->v) >= lbl_805DC5D4) {
                    if (uv->buffer != NULL) {
                        offset_position__6TSceneFPvii((void*)(uv->buffer), (s32)((s32)uv->u), (s32)((s32)uv->v));
                    }
                    uv->u -= (f32)(s32)uv->u;
                    uv->v -= (f32)(s32)uv->v;
                }
            }
            if (object->flags & 0x40) {
                object->cycle->timer--;
                if (object->cycle->timer < 0) {
                    (*(s16 *)&object->cycle->index)++;
                    load_texture_sequence_frame((void*)(task), (SceneMaterialCycle*)(object->cycle));
                    free_children__12TObjDoorJungFPvPv((void*)(node->model), (u16)(object->cycle->texture));
                    if (object->flags & 0x20) {
                        object->uv->texture = object->cycle->texture;
                    }
                }
            }
            object->flags |= 0x20000;
        }
        anim = room->animated;
        for (i = 0; i < room->animatedCount; i++, anim++) {
            if (anim->flags & 0x20000) {
                continue;
            }
            if (anim->flags & 0x04000000) {
                continue;
            }
            node = ((SceneMaterialNode *)resolve_indirect_object_record((void*)(task), (SceneMaterialAnimated*)(anim)));
            if (anim->flags & 0x20) {
                uv = anim->uv;
                uv->u += uv->du;
                uv->v += uv->dv;
                if (uv->u >= 1.0f || uv->v >= 1.0f) {
                    if (uv->buffer != NULL) {
                        offset_position__6TSceneFPvii((void*)(uv->buffer), (s32)((s32)uv->u), (s32)((s32)uv->v));
                    }
                    uv->u -= (f32)(s32)uv->u;
                    uv->v -= (f32)(s32)uv->v;
                }
            }
            if (anim->flags & 0x40) {
                anim->cycle->timer--;
                if (anim->cycle->timer < 0) {
                    (*(s16 *)&anim->cycle->index)++;
                    load_texture_sequence_frame((void*)(task), (SceneMaterialCycle*)(anim->cycle));
                    free_children__12TObjDoorJungFPvPv((void*)(node->model), (u16)(anim->cycle->texture));
                }
            }
            anim->flags |= 0x20000;
        }
    }
    PPCSync();
}

void tick_material_fmt1__6TSceneFPv(void *task) {
    SceneMaterialSection *room;
    s32 section;
    SceneMaterialStatic *object;
    s32 i;
    SceneMaterialAnimated *anim;
    SceneMaterialNode *node;
    SceneMaterialUv *uv;
    if ((*(void * *)&TScene__data_805D6004) == NULL || (*(SceneMaterialRoot * *)&TScene__data_805D5FCC) == NULL) {
        return;
    }
    room = (*(SceneMaterialRoot * *)&TScene__data_805D5FCC)->sections;
    for (section = 0; section < (*(SceneMaterialRoot * *)&TScene__data_805D5FCC)->count; section++, room++) {
        SceneMaterialStatic *o2;
        s32 k;
        o2 = room->objects;
        for (k = 0; k < room->count; k++, o2++) {
            o2->flags &= ~0x20000;
        }
        {
            SceneMaterialAnimated *a2;
            s32 k2;
            a2 = room->animated;
            for (k2 = 0; k2 < room->animatedCount; k2++, a2++) {
                a2->flags &= ~0x20000;
            }
        }
    }
    room = (*(SceneMaterialRoot * *)&TScene__data_805D5FCC)->sections;
    for (section = 0; section < (*(SceneMaterialRoot * *)&TScene__data_805D5FCC)->count; section++, room++) {
        object = room->objects;
        for (i = 0; i < room->count; i++, object++) {
            if (object->flags & 0x20000) {
                continue;
            }
            if (object->flags & 0x04000000) {
                continue;
            }
            node = ((SceneMaterialNode *)resolve_indirect_node_record((void*)(task), (SceneMaterialStatic*)(object)));
            if (object->flags & 0x20) {
                uv = object->uv;
                uv->u += uv->du;
                uv->v += uv->dv;
                if (get_random_float__8TObjFishFv(uv->u) >= lbl_805DC5D4 || get_random_float__8TObjFishFv(uv->v) >= lbl_805DC5D4) {
                    scroll_ginja_mesh_uvs(node->model, (s32)uv->u, (s32)uv->v, uv->texture, 1);
                    uv->u -= (f32)(s32)uv->u;
                    uv->v -= (f32)(s32)uv->v;
                }
            }
            if (object->flags & 0x40) {
                object->cycle->timer--;
                if (object->cycle->timer < 0) {
                    (*(s16 *)&object->cycle->index)++;
                    load_texture_sequence_frame((void*)(task), (SceneMaterialCycle*)(object->cycle));
                    free_children__12TObjDoorJungFPvPv((void*)(node->model), (u16)(object->cycle->texture));
                    if (object->flags & 0x20) {
                        object->uv->texture = object->cycle->texture;
                    }
                }
            }
            object->flags |= 0x20000;
        }
        anim = room->animated;
        for (i = 0; i < room->animatedCount; i++, anim++) {
            if (anim->flags & 0x20000) {
                continue;
            }
            if (anim->flags & 0x04000000) {
                continue;
            }
            node = ((SceneMaterialNode *)resolve_indirect_object_record((void*)(task), (SceneMaterialAnimated*)(anim)));
            if (anim->flags & 0x20) {
                uv = anim->uv;
                uv->u += uv->du;
                uv->v += uv->dv;
                if (uv->u >= 1.0f || uv->v >= 1.0f) {
                    scroll_ginja_mesh_uvs(node->model, (s32)uv->u, (s32)uv->v, uv->texture, 1);
                    uv->u -= (f32)(s32)uv->u;
                    uv->v -= (f32)(s32)uv->v;
                }
            }
            if (anim->flags & 0x40) {
                anim->cycle->timer--;
                if (anim->cycle->timer < 0) {
                    (*(s16 *)&anim->cycle->index)++;
                    load_texture_sequence_frame((void*)(task), (SceneMaterialCycle*)(anim->cycle));
                    free_children__12TObjDoorJungFPvPv((void*)(node->model), (u16)(anim->cycle->texture));
                }
            }
            anim->flags |= 0x20000;
        }
    }
    PPCSync();
}

void advance_scene_object_animations(void) {
    Group_80203F0C *g;
    s32 i;
    Anim_80203F0C *a;
    s32 j;
    if ((*(Root_80203F0C **)&TScene__data_805D5FCC) == NULL) {
        return;
    }
    g = (*(Root_80203F0C **)&TScene__data_805D5FCC)->groups;
    for (i = 0; i < (*(Root_80203F0C **)&TScene__data_805D5FCC)->count; i++, g++) {
        a = g->anims;
        for (j = 0; j < g->count; j++, a++) {
            a->flags &= ~0x40000;
        }
    }
    g = (*(Root_80203F0C **)&TScene__data_805D5FCC)->groups;
    for (i = 0; i < (*(Root_80203F0C **)&TScene__data_805D5FCC)->count; i++, g++) {
        a = g->anims;
        for (j = 0; j < g->count; j++, a++) {
            if (!(a->flags & 0x40000)) {
                a->frame += a->speed;
                if (a->motion != NULL && a->frame > (f32)(a->motion->frames - 1)) {
                    a->frame = TScene__data_805DC5D8;
                }
                a->flags |= 0x40000;
            }
        }
    }
}

s32 TScene__sub_80204024(f32 thr, s32 unused, void *a, void *b, Vec_80204024 *c) {
    struct { Vec_80204024 p, q; } s;
    Vec_80204024 o;
    if (vec3_dot(b, c) < TScene__data_805DC5D8) {
        return 0;
    }
    s.p.x = lbl_805D4DF0->x;
    s.p.y = TScene__data_805DC5D8;
    s.p.z = lbl_805D4DF0->z;
    s.q.x = c->x;
    s.q.y = c->y;
    s.q.z = c->z;
    return project_point_onto_line(a, &s, &o) <= thr;
}

s32 TScene__sub_802040D4(void *arg0, Obj_802040D4 *o, f32 f0, f32 f1) {
    if (o->inner != NULL && (*(u8 * *)&lbl_805D4DF0) != NULL) {
        void *p = o->pos;
        if (xz_distance_squared((*(u8 * *)&lbl_805D4DF0) + 0x178, p) < o->inner->radius * o->inner->radius) {
            return 1;
        }
        return ((s32 (*)(void *, void *, f32, f32))is_in_view_depth__6TSceneFf)(arg0, p, f0, f1);
    }
    return 0;
}

bool is_in_view_depth__6TSceneFf(f32 farg0) {
    f32 sp[6];
    void *unused;
    matrix_mult_vec(0, unused, &sp[0]);
    if (sp[2] > TScene__data_805DC5D8) {
        return 0;
    }
    return (sp[2] < -farg0) == 0;
}

void update_room_object_visibility__6TSceneFPvPv(void *task, SceneMaterialSection *room) {
    SceneMaterialStatic *object;
    s32 i;
    SceneMaterialAnimated *anim;
    i = 0;
    room->flags |= 0x10000;
    for (object = room->objects; i < room->count; i++, object++) {
        if (object->node != NULL) {
            if (TScene__sub_802040D4(task, (Obj_802040D4 *)((SceneMaterialNode *)resolve_indirect_node_record((void*)(task), (SceneMaterialStatic*)(object))), lbl_805DC5DC, lbl_805DC5E0) != 0) {
                object->flags |= 0x10000;
            } else {
                object->flags &= ~0x10000;
            }
        }
    }
    for (anim = room->animated, i = 0; i < room->animatedCount; i++, anim++) {
        if (anim->node != NULL) {
            if (TScene__sub_802040D4(task, (Obj_802040D4 *)((SceneMaterialNode *)resolve_indirect_object_record((void*)(task), (SceneMaterialAnimated*)(anim))), lbl_805DC5DC, lbl_805DC5E0) != 0) {
                anim->flags |= 0x10000;
            } else {
                anim->flags &= ~0x10000;
            }
        }
    }
}

void update_records_in_range__6TSceneFv(void) {
    f32 r;
    f32 r2;
    s32 off;
    s32 i;
    W_8020430C v = (*(Cam_8020430C * *)&lbl_805D4DF0)->pos;
    i = 0;
    off = 0;
    r = (*(Root_8020430C * *)&TScene__data_805D5FCC)->radius + TScene__data_805D5FE4;
    r2 = r * r;
    for (; i < (*(Root_8020430C * *)&TScene__data_805D5FCC)->count; i++, off += 0x34) {
        Rec_8020430C *rec = (Rec_8020430C *)((u8 *)(*(Root_8020430C * *)&TScene__data_805D5FCC)->recs + off);
        if (xz_distance_squared(&v, rec->pos) < r2) {
            rec->flags |= 0x10000;
        } else {
            rec->flags &= ~0x10000;
        }
    }
}
struct Cam_80204688 { u8 pad[0x178]; f32 x; f32 y; f32 z; u8 pad184[0x194 - 0x184]; s32 a194; u8 pad198[4]; s32 a19C; };
struct Task_80204688 { u8 pad[0x1C]; s32 count; };
struct Model_80204688 { u8 pad[0x14]; f32 x, y, z; };
struct Node_80204688 { u32 flags; Model_80204688 *model; f32 x, y, z; };

extern "C" {
extern SceneMaterialRoot* TScene__data_805D5FCC;
extern const f32 TScene__data_805DC5D8;
extern const f32 TScene__data_805DC600;
extern const f32 lbl_805DC5E0;
extern const f32 lbl_805DC5E8;
extern const f32 lbl_805DC5EC;
extern const f32 lbl_805DC5F0;
extern const f32 lbl_805DC5F4;
extern const f32 lbl_805DC5F8;
extern const f32 lbl_805DC5FC;
extern Vec_80204024 lbl_8044A84C[];
extern u8 lbl_8058D490[];
extern Root_80204024 *lbl_805D4DF0;
bool is_in_view_depth__6TSceneFf(f32 farg0);
s32 TScene__sub_80204024(f32 thr, s32 unused, void *a, void *b, Vec_80204024 *c);
void update_room_object_visibility__6TSceneFPvPv(void *task, SceneMaterialSection *room);
SceneMaterialNode* resolve_indirect_node_record(void*,SceneMaterialStatic*);
SceneMaterialNode* resolve_indirect_object_record(void*,SceneMaterialAnimated*);
f32 vec3_dot(void *, void *);
void normalize_vector(Vec_80204024 *);
void push_matrix_from(void *);
void rotate_matrix_y(s32, s32);
void rotate_vector_by_matrix(s32, void *, Vec_80204024 *);
void pop_matrix(void);
void pop_matrices(s32);
s32 is_split_screen(void);

#define CAM ((Cam_80204688 *)lbl_805D4DF0)
#define TEST ((s32 (*)(f32, void *, void *, void *, Vec_80204024 *))TScene__sub_80204024)
#define VIS ((s32 (*)(void *, void *, f32, f32))is_in_view_depth__6TSceneFf)

void cull_sections__6TSceneFPv(Task_80204688 *task) {
    static f32 s_near = lbl_805DC5E8;
    static f32 s_far = lbl_805DC5EC;
    static f32 s_pad = lbl_805DC5F0;
    Vec_80204024 dir;
    Vec_80204024 d;
    Vec_80204024 up = lbl_8044A84C[0];
    Vec_80204024 p;
    Vec_80204024 v;
    s32 i;
    SceneMaterialSection *sec;

    if (TScene__data_805D5FCC == NULL) {
        return;
    }
    if (is_split_screen() != 0) {
        s_near = lbl_805DC5F4;
        s_far = lbl_805DC5F8;
    } else {
        s_near = lbl_805DC5FC;
        s_far = TScene__data_805D5FCC->radius;
    }
    task->count = 0;
    push_matrix_from(lbl_8058D490);
    rotate_matrix_y(0, CAM->a194);
    rotate_vector_by_matrix(0, &up, &dir);
    normalize_vector(&dir);
    pop_matrix();

    sec = TScene__data_805D5FCC->sections;
    for (i = 0; i < TScene__data_805D5FCC->count; i++) {
        if (sec->flags & 0x80000) {
            update_room_object_visibility__6TSceneFPvPv(task, sec);
            sec++;
        } else {
            f32 dist;
            f32 dot;
            p.x = sec->position[0];
            p.y = TScene__data_805DC5D8;
            p.z = sec->position[2];
            d.x = p.x - CAM->x;
            d.y = TScene__data_805DC5D8;
            d.z = p.z - CAM->z;
            dist = d.x * d.x + d.y * d.y + d.z * d.z;
            if (dist < sec->radius * sec->radius) {
                sec->flags |= 0x10000;
                sec++;
                task->count++;
            } else if (dist > s_far * s_far) {
                sec->flags &= ~0x10000;
                sec++;
            } else {
                normalize_vector(&d);
                dot = vec3_dot(&dir, &d);
                if (dot < TScene__data_805DC5D8) {
                    sec->flags &= ~0x10000;
                    sec++;
                } else if (dot >= TScene__data_805DC5D8 && dot < TScene__data_805DC600) {
                    push_matrix_from(lbl_8058D490);
                    rotate_matrix_y(0, CAM->a19C);
                    rotate_vector_by_matrix(0, &dir, &up);
                    normalize_vector(&up);
                    pop_matrices(1);
                    if (TEST(sec->radius, task, &p, &d, &up) != 0) {
                        sec->flags |= 0x10000;
                        sec++;
                        task->count++;
                    } else {
                        push_matrix_from(lbl_8058D490);
                        rotate_matrix_y(0, -CAM->a19C);
                        rotate_vector_by_matrix(0, &dir, &up);
                        normalize_vector(&up);
                        pop_matrices(1);
                        if (TEST(sec->radius, task, &p, &d, &up) != 0) {
                            sec->flags |= 0x10000;
                            sec++;
                            task->count++;
                        } else {
                            goto clear;
                        }
                    }
                } else {
                    sec->flags |= 0x10000;
                    sec++;
                    task->count++;
                }
            }
        }
        continue;
    clear:
        sec->flags &= ~0x10000;
        sec++;
    }

    sec = TScene__data_805D5FCC->sections;
    for (i = 0; i < TScene__data_805D5FCC->count; i++, sec++) {
        if (sec->flags & 0x100000) {
            SceneMaterialStatic *st = sec->objects;
            s32 j;
            for (j = 0; j < sec->count; j++, st++) {
                Node_80204688 *n = (Node_80204688 *)resolve_indirect_node_record(task, st);
                v.x = n->model->x + (sec->position[0] + n->x);
                v.y = n->model->y + (sec->position[1] + n->y);
                v.z = n->model->z + (sec->position[2] + n->z);
                if (VIS(task, &v, s_near + s_pad, lbl_805DC5E0) != 0) {
                    st->flags |= 0x10000;
                } else {
                    st->flags &= ~0x10000;
                }
            }
            {
                SceneMaterialAnimated *an = sec->animated;
                for (j = 0; j < sec->animatedCount; j++, an++) {
                    Node_80204688 *n = (Node_80204688 *)resolve_indirect_object_record(task, an);
                    v.x = sec->position[0] + n->x;
                    v.y = sec->position[1] + n->y;
                    v.z = sec->position[2] + n->z;
                    if (VIS(task, &v, s_near + s_pad, lbl_805DC5E0) != 0) {
                        an->flags |= 0x10000;
                    } else {
                        an->flags &= ~0x10000;
                    }
                }
            }
        }
    }
}

}
#undef CAM
#undef TEST
#undef VIS

s32 check_object_in_view_cone__6TSceneFiPvPvPvi(s32 arg0, Obj_80204B78 *obj, Vec_80204024 *pos, void *arg3, s32 arg4) {
    Vec_80204024 c;
    Vec_80204024 a;
    Vec_80204024 b;
    f32 r2;
    f32 g2;
    f32 k;
    f32 z;
    f32 x;
    f32 dist2;
    f32 d;
    k = TScene__data_805DC5D8;
    x = obj->x;
    a.x = x;
    a.y = k;
    z = obj->z;
    a.z = z;
    b.x = x - pos->x;
    b.y = k;
    b.z = z - pos->z;
    dist2 = b.x * b.x + b.y * b.y + b.z * b.z;
    r2 = obj->radius * obj->radius;
    g2 = TScene__data_805D5FCC->radius * TScene__data_805D5FCC->radius;
    if (dist2 < r2) {
        obj->flags |= 0x10000;
        return 1;
    }
    if (dist2 > g2) {
        obj->flags &= ~0x10000;
        return 0;
    }
    normalize_vector(&b);
    d = vec3_dot(arg3, &b);
    if (d < TScene__data_805DC5D8) {
        obj->flags &= ~0x10000;
        return 0;
    }
    if (d >= TScene__data_805DC5D8 && d < TScene__data_805DC600) {
        push_matrix_from(lbl_8058D490);
        rotate_matrix_y(0, arg4);
        rotate_vector_by_matrix(0, arg3, &c);
        normalize_vector(&c);
        pop_matrix();
        if (TScene__sub_80204024(obj->radius, arg0, &a, &b, &c) != 0) {
            obj->flags |= 0x10000;
            return 1;
        }
        push_matrix_from(lbl_8058D490);
        rotate_matrix_y(0, -arg4);
        rotate_vector_by_matrix(0, arg3, &c);
        normalize_vector(&c);
        pop_matrix();
        if (TScene__sub_80204024(obj->radius, arg0, &a, &b, &c) != 0) {
            obj->flags |= 0x10000;
            return 1;
        }
    } else {
        obj->flags |= 0x10000;
        return 1;
    }
    obj->flags &= ~0x10000;
    return 0;
}
void render_static_map_section__6TSceneFv(void *arg0, SceneMaterialSection *arg1, s32 arg2) {
    SceneMaterialStatic *e;
    s32 i;
    Node_8020533C *node;
    void *tex;

    for (i = 0, e = arg1->objects; i < arg1->count; i++, e++) {
        if (arg2 != 0 && !(e->flags & 0x10000)) {
            continue;
        }
        if (e->node == NULL) {
            continue;
        }
        if (TScene__data_805D5FE0 == 1 && !(e->flags & 0x100)) {
            continue;
        }
        if (TScene__data_805D5FE0 == 0 && (e->flags & 0x100)) {
            continue;
        }
        if (e->flags & 1) {
            begin_effect_render__13TParticleCtrlFv();
        }
        if (e->flags & 2) {
            some_id_805c6f74 |= 1;
        }
        if (e->flags & 0x10) {
            Node_8020533C *sh = (Node_8020533C *)resolve_indirect_node_record(arg0, e);
            if (sh != NULL) {
                Vec_8020533C v;
                Ang_8020533C a;
                v.x = sh->pos.x;
                v.y = sh->pos.y;
                v.z = sh->pos.z;
                vec3_add_to(&v, arg1->position);
                a.x = sh->ang.x + arg1->angles[0];
                a.y = sh->ang.y + arg1->angles[1];
                a.z = sh->ang.z + arg1->angles[2];
                render_projected_shadow_receiver(&v, &a);
            }
        }
        node = (Node_8020533C *)resolve_indirect_node_record(arg0, e);
        if (TScene__data_805D5FEC != NULL) {
            Vec_8020533C v;
            Ang_8020533C a;
            v.x = node->pos.x;
            v.y = node->pos.y;
            v.z = node->pos.z;
            vec3_add_to(&v, arg1->position);
            a.x = node->ang.x + arg1->angles[0];
            a.y = node->ang.y + arg1->angles[1];
            a.z = node->ang.z + arg1->angles[2];
            TScene__data_805D5FEC(&v, &a, e->flags);
        }
        if (e->flags & 0x200) {
            if (e->flags & 0x80) {
                Model_8020533C *m = (Model_8020533C *)e->node;
                if (m != NULL) {
                    notify_scene__12TObjEneReconFi(m->fF);
                } else {
                    notify_scene__12TObjEneReconFi(-1);
                }
                set_global_param__8TObjFishFi((void *)M2C_FIELD(TScene__data_805D5FCC, s32 *, 0x14));
                set_current_scene__6TSceneFi(TScene__data_805D5FCC->flags);
                draw_ginja_object(node);
                update_particle_if_active__12TObjEneReconFv();
            } else if (e->flags & 0x400) {
                Model_8020533C *m = (Model_8020533C *)e->node;
                if (m != NULL && get_state_flag__9TMainTaskFv() == 1) {
                    Lobby_8020533C l;
                    l.v.x = node->pos.x;
                    l.v.y = node->pos.y;
                    l.v.z = node->pos.z;
                    vec3_add_to(&l.v, arg1->position);
                    l.a.x = node->ang.x + arg1->angles[0];
                    l.a.y = node->ang.y + arg1->angles[1];
                    l.a.z = node->ang.z + arg1->angles[2];
                    l.param = (void *)M2C_FIELD(TScene__data_805D5FCC, s32 *, 0x14);
                    l.node = node;
                    l.scene = TScene__data_805D5FCC->flags;
                    l.id = m->fF;
                    release_indexed_entry__6TLobbyFi(&l);
                }
            } else {
                Model_8020533C *m = (Model_8020533C *)e->node;
                if (m != NULL) {
                    if (m->tex != NULL) {
                        draw_field_1c__6TSceneFPviii(tex = m->tex, m->f8, m->fE, 0);
                        set_global_param__8TObjFishFi((void *)M2C_FIELD(TScene__data_805D5FCC, s32 *, 0x14));
                        set_current_scene__6TSceneFi(TScene__data_805D5FCC->flags);
                        draw_ginja_object(node);
                        set_indirect_tev__6TSceneFii((u32)tex, 0);
                    }
                }
            }
        } else {
            set_current_scene__6TSceneFi(TScene__data_805D5FCC->flags);
            draw_ginja_object(node);
        }
        if (e->flags & 0x10) {
            apply_single_screen_state__6TSceneFv();
        }
        if (e->flags & 2) {
            some_id_805c6f74 &= ~1;
        }
        if (e->flags & 1) {
            end_effect_render__13TParticleCtrlFv();
        }
        if (TScene__data_805D5FF0 != NULL) {
            TScene__data_805D5FF0(e->flags);
        }
    }
}
void render_map_sections__6TSceneFPv(void *scene) {
    SceneMaterialSection *sec;
    s32 i;
    if (TScene__data_805D5FCC != NULL) {
        draw_if_all_ready__10TObjPlayerFv();
        if (TScene__data_805D5FF4 != NULL) {
            TScene__data_805D5FF4();
        }
        if (*(void **)((u8 *)TScene__data_805D5FCC + 0x14) != NULL) {
            set_global_param__8TObjFishFi(*(void **)((u8 *)TScene__data_805D5FCC + 0x14));
        }
        sec = TScene__data_805D5FCC->sections;
        prepare_ginja_model();
        lbl_805D5660 = some_id_805c6f74;
        for (i = 0; i < TScene__data_805D5FCC->count; i++, sec++) {
            if (sec->flags & 0x10000) {
                if (sec->flags & 0x80000) {
                    push_matrix();
                    switch (get_global_state__14TOKeyMachine01Fv()) {
                    case 0:
                    case 0xF:
                    case 0x12:
                        render_static_map_section__6TSceneFv(scene, sec, 0);
                        render_animated_map_section__6TSceneFv(scene, sec, 0);
                        break;
                    default:
                        render_static_map_section__6TSceneFv(scene, sec, 1);
                        render_animated_map_section__6TSceneFv(scene, sec, 1);
                        break;
                    }
                    pop_matrix();
                } else if (sec->flags & 0x100000) {
                    push_matrix();
                    post_translate_matrix(sec->position);
                    rotate_matrix_by_node_angles(sec->angles, 1);
                    render_static_map_section__6TSceneFv(scene, sec, 1);
                    render_animated_map_section__6TSceneFv(scene, sec, 1);
                    pop_matrix();
                } else {
                    push_matrix();
                    post_translate_matrix(sec->position);
                    rotate_matrix_by_node_angles(sec->angles, 1);
                    render_static_map_section__6TSceneFv(scene, sec, 0);
                    render_animated_map_section__6TSceneFv(scene, sec, 0);
                    pop_matrix();
                }
            }
        }
        some_id_805c6f74 = lbl_805D5660;
        end_ginja_model_draw();
    }
}

}
