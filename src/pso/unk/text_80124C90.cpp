#include "types.h"

struct Vec_80124C90 { f32 x, y, z; };

struct Hit_80124C90 { u8 pad0[4]; Vec_80124C90 *pos; };

struct Atk_80124C90 { s32 a; s32 b; s32 d8; s16 id0; s16 id1; s16 idx; s16 pad; f32 f; };

struct Part_80124C90 { u8 pad0[0x1C]; Vec_80124C90 v; u8 pad28[4]; };

struct Tgt_80124C90 { u8 pad0[0xA4]; Part_80124C90 *parts; };

struct Pl_80124C90 { u8 pad0[0x38]; Vec_80124C90 pos38; u8 pad44[0x60 - 0x44]; s32 angle; u8 pad64[0x2FC - 0x64]; Vec_80124C90 pos; };

struct Me_80124C90 { u8 pad0[0xF0]; Pl_80124C90 *pl; u8 padf4[0x1E4 - 0xF4]; f32 scale; };

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s16 obj_getField1c(void *);
Hit_80124C90 *csnVector(void *, void *, int);
s32 get_field_d8__10TObjPlayerFPv(void *);
void spawn_item_attacker(s32, void *, s32, void *);
void create_lavis_shot(void *, void *, void *, f32);
f32 *get_weapon_range_record(void *, s32);
void *get_extended_state__10TObjPlayerFPv(void *);
f32 query_extended_state__10TObjPlayerFPv(void *);
s16 get_captured_target_collider_index(void *);
u16 get_uid__10TObjPlayerFPv(void *);
void *get_captured_target_entry(void *, s32);
s32 get_captured_target_count(void *);
Tgt_80124C90 *resolve_hittable_target(u16, s16);
void vec3_add_to(void *, void *);
s32 rotate_matrix_y(int, int);
void push_matrix_from(void *);
s32 transform_point_by_current_matrix(void *, void *);
s32 pop_matrix();
f32 xyz_distance(void *, void *);
extern u8 identity_matrix[];
extern s32 tl_05;
void TObjPlayer__sub_80124C90(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_80124C90(u8 *arg0) {
    Me_80124C90 *me = (Me_80124C90 *)arg0;
    void *ext;
    Vec_80124C90 *pos;
    void *e;
    Tgt_80124C90 *t;
    s32 found;
    Atk_80124C90 atk;
    s32 i;
    Hit_80124C90 *hit;
    ext = get_extended_state__10TObjPlayerFPv(me->pl);
    if (ext == NULL) {
        return;
    }
    found = 0;
    pos = &me->pl->pos;
    Vec_80124C90 dst = *pos;
    if (get_captured_target_count(ext) != 0) {
        e = get_captured_target_entry(ext, get_captured_target_count(ext) - 1);
        t = resolve_hittable_target(get_uid__10TObjPlayerFPv(e), get_captured_target_collider_index(e));
        if (t != NULL) {
            Part_80124C90 *pp = &t->parts[get_captured_target_collider_index(e)];
            VecCopy__FP3VecPC3Vec(&dst, &pp->v);
            found = 1;
        }
    }
    if (found == 0) {
        Vec_80124C90 off;
        push_matrix_from(identity_matrix);
        f32 *r1 = get_weapon_range_record(arg0, 2);
        off.x = off.y = 0.0f;
        off.z = *r1;
        rotate_matrix_y(0, me->pl->angle);
        transform_point_by_current_matrix(&off, &dst);
        pop_matrix();
        vec3_add_to(&dst, pos);
    }
    hit = csnVector(pos, &dst, 0x8100);
    if (hit != NULL) {
        xyz_distance(pos, hit->pos);
    } else {
        xyz_distance(pos, &dst);
    }
    for (i = 0; i != get_captured_target_count(ext); i++) {
        e = get_captured_target_entry(ext, i);
        t = resolve_hittable_target(get_uid__10TObjPlayerFPv(e), get_captured_target_collider_index(e));
        if (t != NULL) {
            Part_80124C90 *part = &t->parts[get_captured_target_collider_index(e)];
            void *e2 = get_captured_target_entry(ext, i);
            atk.a = 0;
            atk.b = 1;
            atk.id0 = obj_getField1c(me->pl);
            atk.id1 = obj_getField1c(t);
            atk.d8 = get_field_d8__10TObjPlayerFPv(arg0);
            atk.idx = get_captured_target_collider_index(e2);
            atk.f = query_extended_state__10TObjPlayerFPv(me->pl);
            spawn_item_attacker(tl_05, &me->pl->pos38, (s32)(xyz_distance(pos, &part->v) / me->scale), &atk);
        }
    }
    {
        f32 *rec = get_weapon_range_record(arg0, 2);
        s32 ang = me->pl->angle;
        Vec_80124C90 o;
        Vec_80124C90 v;
        for (i = 0; i != 4; i++, ang += 0x4000) {
            push_matrix_from(identity_matrix);
            v.x = v.y = 0.0f;
            v.z = *rec;
            rotate_matrix_y(0, ang);
            transform_point_by_current_matrix(&v, &o);
            vec3_add_to(&o, pos);
            pop_matrix();
            hit = csnVector(pos, &o, 0x8100);
            if (hit != NULL) {
                VecCopy__FP3VecPC3Vec(&o, hit->pos);
            }
            create_lavis_shot(arg0, pos, &o, xyz_distance(pos, &o) / me->scale);
        }
    }
}

}
