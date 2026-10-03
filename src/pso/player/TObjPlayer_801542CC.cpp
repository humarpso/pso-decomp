#include "types.h"
#include "pso/collision/ActorBodyContact.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Elt_801542CC { char pad[0x18]; s32 f18; char pad2[0x2C - 0x1C]; };

struct M2CCopy_C { u8 bytes[0xc]; };

#pragma inline_depth(1)
#pragma auto_inline on
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_60 { u8 bytes[0x60]; };

#include <stddef.h>
struct Stack_80155050 {
    M2C_UNK sp8;
    f32 spC;
    u8 pad_10[0x4];
    f32 sp14;
};

struct Vec_801550DC { f32 x, y, z; };

struct CollisionVector_80155FBC { f32 x,y,z; };

struct CollisionBody_80155FBC { void* colliders; s32 count; CollisionVector_80155FBC position; s32 facing; };
struct CollisionVector_80155C54 { f32 x,y,z; };
struct Collider_80155C54 { CollisionVector_80155C54 offset; f32 radius; u32 unknown10; s32 shape; s32 flags; CollisionVector_80155C54 world; u32 unknown28; };
struct CollisionBox_80155C54 { f32 data[24]; };
struct CollisionSphere_80155C54 { CollisionVector_80155C54 center; f32 radius; };

struct E_801547E0 { u8 pad[0xc]; f32 f; u8 pad2[0x2c - 0x10]; };

struct Obj_801547E0 { u8 pad[0xa4]; E_801547E0 *arr; };

struct Part_80156780 { u8 pad[0x2c]; };

struct Obj_80156780 { u8 pad[0x9c]; void *f9c; u8 pad2[4]; Part_80156780 *parts; s32 count; };

struct Ent_80154CB4 { u8 pad[0x1c]; u16 id; };

struct State_80154954 { s16 a; s16 b; };

struct Pkt_80154954 { s16 hdr; u16 id; s32 state; s32 kind; };

struct Obj_80154954 { u8 pad[4]; s16 kind; };

struct Player_80154954 { u8 pad[0x1C]; u16 id; u8 pad1e[0x80 - 0x1E]; Obj_80154954 *obj; };

struct Coll_801564A0 { u8 pad[0x18]; s32 flags; };

struct Player_801564A0 { u8 pad[0x1C]; u16 id; u8 pad1e[0x28 - 0x1E]; s16 room; u8 pad2a[0xA4 - 0x2A]; Coll_801564A0 *coll; };

typedef s32 M2C_UNK;

struct Hit_801561C4 { u8 pad[0x18]; u32 flags; };

struct TObjPlayer_801561C4 { u8 pad[0xA4]; Hit_801561C4 *hit; };

struct Actor_801569F4 {
    u8 pad0[0x18];
    void *vtable;
    u8 pad1[0x90 - 0x1C];
    s32 f90;
    u16 f94;
    u8 pad2[0x98 - 0x96];
    u8 f98[8];
    s32 f9c_unused;
    u8 fa0[4];
    s32 fa4;
    s32 fa8;
};

struct E_801546D0 { u32 a; s32 b; };

struct G_80156720 { u8 pad0[0x9C]; u8 *f9c; u8 pad_A0[4]; void *fa4; };

struct Flg_8015610C { u8 pad[0x18]; u32 flags; };

struct P_8015610C { u8 pad[0xA4]; Flg_8015610C *f; };

struct Obj_80154A00 { u8 pad[0x1C]; u16 id; };

struct Vec_80156844 { f32 x, y, z; };

struct Hit_80156844 { u32 f0; Vec_80156844 *v; };

struct Obj_80154B60 { u8 pad[0x1C]; u16 id; };
struct Obj_801559D0 { u8 pad38[0x38]; CollisionVector_80155FBC pos; u8 pad44[0x60 - 0x44]; s32 f60; u8 pad64[0xA4 - 0x64]; u32 a4; s32 a8; };
struct Obj_80156268 { u8 pad0[0x30]; u32 flags; u8 pad34[4]; CollisionVector_80155FBC pos; u8 pad44[0x60 - 0x44]; s32 f60; u8 pad64[0xA4 - 0x64]; void *a4; s32 a8; };

struct V3_80154E3C { f32 x, y, z; };

struct Ent_80154E3C { u8 pad0[0x1C]; V3_80154E3C v; u8 pad[0x2C - 0x28]; };

struct Obj_80154E3C { u8 pad0[0x38]; V3_80154E3C pos; u8 pad44[0x60 - 0x44]; s32 f60; u8 pad64[0xA4 - 0x64]; Ent_80154E3C *ents; s32 count; };

struct Vec_80154EF8 { f32 x, y, z; };

struct Box_80154EF8 { u8 pad[0xC]; f32 hx; f32 hz; u8 pad2[0x1C - 0x14]; Vec_80154EF8 pos; };

struct Obj_801547E0;
#define SHIFT_80155294(yaw)                                              \
    push_matrix_from(lbl_8058D490);                                      \
    rotate_matrix_y(0, (yaw));                                           \
    rotate_vector_by_current_matrix(&v, &v);                                    \
    pop_matrix();                                                        \
    vec3_add_to(&v, arg0 + 0x38);                           \
    if (PATG_80155294(arg0, &v, 0) != 0) {                     \
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, &v);                          \
        moved = 1;                                                       \
    }
struct Vec_80155294 { f32 x, y, z; };

extern "C" {
s32 test_player_overlap_with_players(void *arg0, Obj_801559D0 *self, CollisionVector_80155FBC *pos, void *out);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
M2C_UNK vec3_add_to(void *, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix_from(void *);
M2C_UNK rotate_vector_by_current_matrix(void *, void *);
M2C_UNK pop_matrix();
extern f32 lbl_8058D490[12];
void refresh_collision_body_centers(Obj_80154E3C *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u8 * TObjPlayer__sub_80155028(s32 arg0, s32 arg1);
M2C_UNK vec3_add_to(void *, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix_from(void *);
M2C_UNK rotate_vector_by_current_matrix(void *, void *);
M2C_UNK pop_matrix();
extern f32 lbl_8058D490[12];
s32 build_collision_box_corners(M2C_UNK arg0, s32 arg1, Box_80154EF8 *box, u32 out);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK subtract_vector(void *, void *);
extern s32 enable_v2_features;
f32 get_collision_body_radius(Obj_801547E0 *self, s32 i);
extern Vec_80155294 lbl_8050BEE0;
extern f32 lbl_8058D490[12];
M2C_UNK push_matrix_from(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_vector_by_current_matrix(void *, void *);
M2C_UNK pop_matrix();
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
extern const f64 lbl_804400F0;
s32 angle_difference_abs(s32, s32);
extern const f32 TObjPlayer__data_805DB270;
extern const f32 lbl_805DB284;
extern const f32 lbl_805DB288;
extern const f32 lbl_805DB28C;
extern const f32 lbl_805DB290;
extern const f32 lbl_805DB294;
s32 resolve_player_box_contact(u8 *arg0, u8 *arg1, u8 *arg2);
}

struct Obj_80156844 { u8 pad[0x1C]; u16 room; u8 pad2[0x90 - 0x1E]; void *f90; };

extern "C" {
void TObjPlayer__sub_801550B8(u8 *arg0, u8 *arg1);
u8 * TObjPlayer__sub_80155028(s32 arg0, s32 arg1);
M2C_UNK TObjPlayer__sub_8015434C(s32, s32, s32);
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern s32 TObjPlayer__data_805D5874;
void TObjPlayer__sub_8015431C(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
void TObjPlayer__sub_801550B8(u8 *arg0, u8 *arg1);
extern const f32 TObjPlayer__data_805DB270;
s32 test_collider_sphere_overlap_xz(M2C_UNK arg0, u8 *arg1, u32 arg2);
extern int lbl_8050DA90[];
int TObjPlayer__sub_80154E28(int a0, int a1);
s32 get_player_data__10TObjPlayerFi(s32);
s32 check_flag_pair__10TObjPlayerFii(s32 arg0, s32 arg1);
extern s32 lbl_805D5868;
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern const f32 TObjPlayer__data_805DB298;
void update_enemy_collision_flags__10TObjPlayerFPv(void *arg0);
s32 get_player_data__10TObjPlayerFi(s32);
s32 check_flag_pair__10TObjPlayerFii(s32 arg0, s32 arg1);
extern s32 lbl_805D586C;
extern const f32 TObjPlayer__data_805DB298;
void check_object_collisions__10TObjPlayerFPv(void *arg0);
void check_object_collisions__10TObjPlayerFPv(void *arg0);
void update_collisions__10TObjPlayerFPv(void* p);
void clear_obj_links(void* p);
void* initialize_linked_object_reference(void* p, void* a1);
int TObjPlayer__sub_80019828(void*);
void release_member_90__10TObjPlayerFPv(void* p);
void init_all_slots__10TObjPlayerFv(void);
void TObjPlayer__sub_80156934(void);
void init_all_slots__10TObjPlayerFv(void);
extern s32 lbl_805D5868;
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern s32 TObjPlayer__data_805D5874;
void reset__10TObjPlayerFv(void);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
extern M2C_UNK lbl_804AF8A0[];
void *destroy_particle_controller__10TObjPlayerFPvs(void *arg0, s16 arg1);
void TObjPlayer__sub_80156A68(void* p);
void TObjPlayer__sub_80156A74(void* p);
M2C_UNK copy_short_fields__6TLobbyFPvPv(void *, void *);
extern s32 TLobby__data_805D6140;
s32 access_object_saved_state(u8 *arg0, s32 arg1, s16 arg2);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 horizontal_distance_squared(void *, void *);
s32 angle_diff_s16(s32, s32);
M2C_UNK vec3_add_to(void *, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK subtract_vector(void *, void *);
M2C_UNK normalize_vector(void *);
M2C_UNK push_matrix_from(void *);
M2C_UNK rotate_vector_by_current_matrix(void *, void *);
M2C_UNK pop_matrix();
extern const f64 lbl_804400F0;
extern f32 lbl_8058D490[12];
extern const f32 TObjPlayer__data_805DB270;
extern const f32 lbl_805DB27C;
extern const f32 lbl_805DB280;
extern const f32 lbl_805DB284;
s32 resolve_actor_sphere_contact(u8 *arg0, M2C_UNK arg1, s32 arg2);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 horizontal_distance_squared(void *, void *);
s32 find_or_alloc_slot__10TObjPlayerFUi(u32 arg0);
void* refresh_actor_body_spheres(CollisionBody_80155FBC, CollisionBody_80155FBC);
void* find_actor_body_contact(u8* arg0, u8* arg1, f32 limit);
extern const f32 TObjPlayer__data_805DB270;
f32 get_collision_body_radius(Obj_801547E0 *self, s32 i);
extern s32 TObjPlayer__data_8050D460[];
extern s32 lbl_805D5868;
void TObjPlayer__sub_801549D0(void);
void *alloc_buffer__11TOBoss4RockFPv(s32);
void fn_8002B630(Part_80156780 *, Part_80156780 *);
void init_forward__10TObjPlayerFPv(void *);
void *__construct_new_array(void *, void (*)(void *), void *, s32, s32);
Part_80156780 *init_collision_body_parts(Obj_80156780 *self, Part_80156780 *src, s32 count);
void *get_player_by_client_id(u32 id);
extern s32 TObjPlayer__data_8050D460[];
extern s32 lbl_805D5868;
void *find_entity_by_id(u16 id);
M2C_UNK copy_short_fields__6TLobbyFPvPv(void *, void *);
s32 access_object_saved_state(u8 *arg0, s32 arg1, s16 arg2);
void TLobby__sub_80156BA8(Pkt_80154954 *pkt);
void update_and_send_60__6TLobbyFi(Pkt_80154954 *pkt);
void send_object_state_update(Player_80154954 *self, State_80154954 *src);
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern const f32 TObjPlayer__data_805DB298;
s32 get_player_data__10TObjPlayerFi(s32);
s32 check_flag_pair__10TObjPlayerFii(s32 arg0, s32 arg1);
void* find_actor_body_contact(u8* arg0, u8* arg1, f32 limit);
void check_enemy_body_collisions(void *arg0);
s32 resolve_actor_sphere_contact(u8 *arg0, M2C_UNK arg1, s32 arg2);
s32 respond_to_body_contact(u8 *arg0, u32 arg1, u8 *arg2);
u32 check_actor_body_contact(Obj_80156268 *, Obj_80156268 *, f32);
extern s32 TObjPlayer__data_8050D460[];
extern s32 lbl_805D586C;
void TObjPlayer__sub_801561C4(TObjPlayer_801561C4 *self, f32 range);
void init_forward__10TObjPlayerFPv(void *);
void TObjPlayer__sub_80156A68(void* p);
void TObjPlayer__sub_80156A74(void* p);
void TPhotonMagicSquare__sub_801A2640(void);
extern M2C_UNK lbl_804AF8A0[];
u8 *TObjPlayer__sub_801569F4(u8 *arg0);
extern unsigned char lbl_8050DAD0[];
extern int lbl_805D5878;
void TObjPlayer__sub_801546D0(u32 arg0, s32 arg1);
void free__11TOBoss4RockFUi(s32);
void free_collision_body_parts(G_80156720 *arg0);
u16 obj_getField1c(int);
u32 check_actor_body_contact(Obj_80156268 *, Obj_80156268 *, f32);
extern s32 TObjPlayer__data_8050D460[];
extern s32 lbl_805D5868;
extern const f32 lbl_805DB29C;
void mark_enemy_body_contacts(P_8015610C *arg0);
u16 obj_getField1c(int);
void *memcpy(void *, const void *, u32);
extern s32 TObjPlayer__data_8050D460[];
extern s32 lbl_805D5868;
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern s32 TObjPlayer__data_805D5874;
u16 unregister_object_by_id(Obj_80154A00 *self);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
Hit_80156844 *csnVectorUnder(Vec_80156844 *, void *, s32);
Hit_80156844 *csnVecterUnder(Vec_80156844 *, s32);
u16 TObjRoomId__sub_801A1DB8(u16);
extern const f32 lbl_805DB2A0;
s32 project_actor_to_ground(Obj_80156844 *self, Vec_80156844 *pos, Vec_80156844 *normal);
s32 TObjPlayer__sub_803E0ED4(CollisionBox_80155C54*,CollisionBox_80155C54*);
s32 test_box_sphere_contact(CollisionBox_80155C54*,CollisionSphere_80155C54*);
s32 spheres_overlap(CollisionSphere_80155C54*,CollisionSphere_80155C54*);
}

extern "C" {

void TOTrapAncient02R__sub_80154D78(void);
void TObjPlayer__sub_801542F4(s32 a);
void apply_status_effect__10TObjPlayerFi(s32 a);
s32 check_flag_pair__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 check_flags__10TObjPlayerFii(s32 arg0, s32 arg1);
void clear_player_status_flag__10TObjPlayerFPviUi(void *arg0, s32 arg1, u32 arg2);
s32 find_or_alloc_slot__10TObjPlayerFUi(u32 arg0);
void init_all_slots__10TObjPlayerFv(void);
void reset_global_table(void);
void reset_photon_effect__10TObjPlayerFPv(void* p);
void set_indexed_flags(void *arg0, s32 index, s32 flags);
u8 test_elt_flag__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2);
s32 obj_is_hit_receivable(void *);
s32 obj_testFlags30(void *, u32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
void *resolve_hittable_target(u16 actorId, s16 collider);
int get_or_assign_actor_id(void*, void*);
M2C_UNK TObjPlayer__sub_8015434C(s32, s32, s32);
u16 register_entity_by_id(void*);
u32 get_battle_param__10TObjPlayerFi(s32);
int memset(void*, void*, void*);

extern s32 lbl_805D586C;

extern "C" {
s32 project_actor_to_ground(Obj_80156844 *self, Vec_80156844 *pos, Vec_80156844 *normal);
}

void apply_status_effect__10TObjPlayerFi(s32 a) {
    TObjPlayer__sub_8015434C(a, 0, lbl_805D586C);
}

extern s32 lbl_805D586C;
extern s32 lbl_805D5870;

void TObjPlayer__sub_801542F4(s32 a) {
    TObjPlayer__sub_8015434C(a, lbl_805D586C, lbl_805D5870);
}

    extern unsigned char lbl_8050DAD0[];
    extern int lbl_805D5878;

void TObjPlayer__sub_8015431C(u8 *arg0) {
    TObjPlayer__sub_8015434C((s32)(arg0), (s32)(lbl_805D586C + lbl_805D5870), (s32)(TObjPlayer__data_805D5874));
}

void TObjPlayer__sub_801546D0(u32 arg0, s32 arg1) {
    E_801546D0 *p;
    s32 i;
    if ((u32)lbl_805D5878 < 0x10) {
        p = (E_801546D0 *)((u8 *)&lbl_8050DAD0);
        for (i = 0; i != lbl_805D5878; i++, p++) {
            if (p->a == arg0 && p->b == arg1) {
                return;
            }
        }
        p->a = arg0;
        p->b = arg1;
        lbl_805D5878++;
    }
}

void reset_global_table(void) { memset(lbl_8050DAD0, (void*)0, (void*)128); lbl_805D5878 = 0; }

void clear_player_status_flag__10TObjPlayerFPviUi(void *arg0, s32 arg1, u32 arg2) {
    arg0 = M2C_FIELD(arg0, void **, 0xA4);
    if (arg0 != 0) {
        arg0 = (char*)arg0 + (arg1 * 0x2C);
        M2C_FIELD(arg0, u32 *, 0x18) &= ~arg2;
    }
}

void set_indexed_flags(void *arg0, s32 index, s32 flags) {
    void *entry;

    entry = (void *)M2C_FIELD(arg0, u32 *, 0xA4);
    if (entry != NULL) {
        entry = (void *)((u8 *)entry + (index * 0x2C));
        M2C_FIELD(entry, s32 *, 0x18) =
            (s32)(M2C_FIELD(entry, s32 *, 0x18) | flags);
    }
}

u8 test_elt_flag__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    struct Elt_801542CC *temp_r3;

    temp_r3 = M2C_FIELD(arg0, struct Elt_801542CC **, 0xA4);
    if (temp_r3 != 0) {
        return (u8) ((arg2 & temp_r3[arg1].f18) != 0);
    }
    return 0U;
}

f32 get_collision_body_radius(Obj_801547E0 *self, s32 i) {
    if (self->arr != 0) {
        return self->arr[i].f;
    }
    return TObjPlayer__data_805DB270;
}

void *resolve_hittable_target(u16 actorId, s16 collider) {
    void *target = find_entity_by_id(actorId);
    if (target == NULL) {
        return NULL;
    }
    if (all_parents_unqueued_for_destruction__7TObjectFv(target) == 0 || obj_testFlags30(target, 0x04040800) != 0) {
        return NULL;
    }
    if (((s32 (*)(void *, s32, s32))test_elt_flag__10TObjPlayerFPvii)(target, collider, 1) == 0) {
        return NULL;
    }
    if (obj_is_hit_receivable(target) == 0) {
        return NULL;
    }
    return target;
}

void send_object_state_update(Player_80154954 *self, State_80154954 *src) {
    State_80154954 st;
    Obj_80154954 *obj;
    if (src != 0) {
        copy_short_fields__6TLobbyFPvPv(&st, src);
    } else {
        access_object_saved_state((u8 *)self, (s32)&st, 1);
    }
    obj = self->obj;
    if (obj != 0) {
        Pkt_80154954 pkt;
        TLobby__sub_80156BA8(&pkt);
        pkt.id = self->id;
        pkt.state = st.a;
        pkt.kind = obj->kind;
        update_and_send_60__6TLobbyFi(&pkt);
    }
}

void TObjPlayer__sub_801549D0(void) {
    s32 i;
    for (i = 0; i < 0x18c; i++) {
        TObjPlayer__data_8050D460[i] = 0;
    }
    lbl_805D5868 = 0;
}

u16 unregister_object_by_id(Obj_80154A00 *self) {
    s32 mid;
    s32 lo;
    s32 hi;
    s32 count;
    u16 id;
    lo = 0;
    id = self->id;
    count = lbl_805D5868;
    hi = count - 1;
    while (lo < hi) {
        mid = (lo + hi) / 2;
        if (((Obj_80154A00 *)TObjPlayer__data_8050D460[mid])->id < id) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    if ((Obj_80154A00 *)TObjPlayer__data_8050D460[lo] == self) {
        memcpy(&TObjPlayer__data_8050D460[lo], &TObjPlayer__data_8050D460[lo + 1], (count - (lo + 1)) * 4);
        lbl_805D5868--;
        u16 k = obj_getField1c((int)(self));
        if (k < 0x1000) {
            lbl_805D586C--;
        } else if (k < 0x4000) {
            lbl_805D5870--;
        } else {
            TObjPlayer__data_805D5874--;
        }
        TObjPlayer__data_8050D460[lbl_805D5868] = 0;
        return id;
    }
    return 0xFFFF;
}

void reset_photon_effect__10TObjPlayerFPv(void* p) { get_or_assign_actor_id(p, (void*)0); register_entity_by_id(p); }

#define o ((Obj_80154B60 *)ov)
#define TBL ((Obj_80154B60 **)TObjPlayer__data_8050D460)
u16 register_entity_by_id(void *ov) {
    u16 id;
    s32 lo;
    s32 mid;
    s32 hi;
    u16 t;

    id = o->id;
    if (id == 0xFFFF) {
        return id;
    }
    hi = lbl_805D5868 - 1;
    if (hi > -1 && id < TBL[hi]->id) {
        lo = 0;
        while (lo < hi) {
            mid = (lo + hi) / 2;
            if (TBL[mid]->id < id) {
                lo = mid + 1;
            } else {
                hi = mid;
            }
        }
        if (id == TBL[lo]->id) {
            return id;
        }
        memcpy(&TBL[lo + 1], &TBL[lo], (lbl_805D5868 - lo) * 4);
    } else {
        lo = lbl_805D5868;
    }
    TBL[lo] = o;
    lbl_805D5868++;
    t = obj_getField1c((int)o);
    if (t < 0x1000) {
        lbl_805D586C++;
    } else if (t < 0x4000) {
        lbl_805D5870++;
    } else {
        TObjPlayer__data_805D5874++;
    }
    return id;
}
#undef TBL
#undef o

void *find_entity_by_id(u16 id) {
    s32 lo;
    s32 mid;
    s32 hi;
    Ent_80154CB4 *e;
    if (id == 0xffff) {
        return 0;
    }
    if (id < 12) {
        return get_player_by_client_id(id);
    }
    lo = 0;
    hi = lbl_805D5868 - 1;
    while (lo < hi) {
        mid = (lo + hi) / 2;
        if (((Ent_80154CB4 **)TObjPlayer__data_8050D460)[mid]->id < id) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    e = ((Ent_80154CB4 **)TObjPlayer__data_8050D460)[lo];
    if (e != 0 && e->id == id) {
        return e;
    }
    return 0;
}

void TOTrapAncient02R__sub_80154D78(void) {  }
void init_all_slots__10TObjPlayerFv(void) { { int i; for (i = 0; i < 16; i++) { TObjPlayer__sub_80154E28((int)((void*)i), (int)((void*)0)); } } }
s32 find_or_alloc_slot__10TObjPlayerFUi(u32 arg0) {
    s32 var_r31;
    u32 temp_r3;

    var_r31 = 0;
loop_1:
    temp_r3 = get_battle_param__10TObjPlayerFi(var_r31);
    if (temp_r3 == arg0) {
        return var_r31;
    }
    if (temp_r3 == 0U) {
        return TObjPlayer__sub_80154E28((int)((void*)(var_r31)), (int)((void*)(arg0)));
    }
    var_r31 += 1;
    if (var_r31 >= 0x10) {
        return -1;
    }
    goto loop_1;
}

int TObjPlayer__sub_80154E28(int a0, int a1) {
  long long new_var;
  new_var = a0;
  lbl_8050DA90[new_var] = a1;
  return a0;
}

void refresh_collision_body_centers(Obj_80154E3C *arg0) {
    V3_80154E3C sp8;
    s32 n;
    s32 i;
    if (arg0 != NULL && arg0->ents != NULL && all_parents_unqueued_for_destruction__7TObjectFv(arg0) != 0) {
        n = arg0->count;
        push_matrix_from(lbl_8058D490);
        rotate_matrix_y(0, arg0->f60);
        for (i = 0; i < n; i++) {
            VecCopy__FP3VecPC3Vec(&sp8, &arg0->ents[i]);
            rotate_vector_by_current_matrix(&sp8, &sp8);
            vec3_add_to(&sp8, &arg0->pos);
            VecCopy__FP3VecPC3Vec(&arg0->ents[i].v, &sp8);
        }
        pop_matrix();
    }
}

s32 build_collision_box_corners(M2C_UNK arg0, s32 arg1, Box_80154EF8 *box, u32 out) {
    Vec_80154EF8 pos;
    Vec_80154EF8 c[8];
    s32 i;
    f32 y, nx, nz, ny, x, z;
    VecCopy__FP3VecPC3Vec(&pos, &box->pos);
    y = 50.0f;
    pos.y = 0.0f;
    ny = -y;
    x = box->hz;
    z = box->hx;
    nx = -x;
    nz = -z;
    c[0].x = nx;
    c[0].y = y;
    c[0].z = z;
    c[1].x = nx;
    c[1].y = y;
    c[1].z = nz;
    c[2].x = x;
    c[2].y = y;
    c[2].z = nz;
    c[3].x = x;
    c[3].y = y;
    c[3].z = z;
    c[4].x = nx;
    c[4].y = ny;
    c[4].z = z;
    c[5].x = nx;
    c[5].y = ny;
    c[5].z = nz;
    c[6].x = x;
    c[6].y = ny;
    c[6].z = nz;
    c[7].x = x;
    c[7].y = ny;
    c[7].z = z;
    push_matrix_from(lbl_8058D490);
    rotate_matrix_y(0, arg1);
    for (i = 0; i < 8; i++) {
        rotate_vector_by_current_matrix(&c[i], &c[i]);
        vec3_add_to(&c[i], &pos);
    }
    pop_matrix();
    if (out != 0) {
        TObjPlayer__sub_80155028(out, (s32)c);
        return 1;
    }
    return 0;
}

u8 * TObjPlayer__sub_80155028(s32 arg0, s32 arg1) {
    *(M2CCopy_60 *)(arg0) = *(const M2CCopy_60 *)(arg1);
    return (u8 *)arg0;
}

s32 test_collider_sphere_overlap_xz(M2C_UNK arg0, u8 *arg1, u32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_80155050, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80155050, spC) == 0x4) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_80155050, sp14) == 0xC) ? 1 : -1];
    Stack_80155050 stack;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg1 + 0x1C));
    stack.spC = TObjPlayer__data_805DB270;
    stack.sp14 = M2C_FIELD(arg1, f32 *, 0xC);
    if (arg2 != 0U) {
        TObjPlayer__sub_801550B8((u8 *)((void *) (arg2)), (u8 *)((void *) (&stack.sp8)));
        return 1;
    }
    return 0;
}

void TObjPlayer__sub_801550B8(u8 *arg0, u8 *arg1) {
    *(M2CCopy_C *)(arg0) = *(const M2CCopy_C *)(arg1);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
}

s32 resolve_actor_sphere_contact(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    Vec_801550DC displacement;
    f32 tangentScale;
    M2C_UNK var_r31;
    f32 temp_f1;
    u16 temp_r3;
    if (horizontal_distance_squared((void *) (arg0 + 0x38), (void *) (arg0 + 0x44)) < lbl_805DB27C) {
        return 0;
    }
    VecCopy__FP3VecPC3Vec((void *) (&displacement), (void *) (arg2 + 0x1C));
    subtract_vector((void *) (&displacement), (void *) (arg0 + 0x44));
    temp_r3 = angle_diff_s16((s32) (lbl_804400F0 * get_ad_end_text_start__10TObjPlayerFv(displacement.x, displacement.z)), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    if ((s32) temp_r3 < 0x4000) {
        tangentScale = lbl_805DB280;
        var_r31 = 0x4000;
        goto block_7;
    }
    var_r31 = 0xC000;
    if ((s32) temp_r3 < 0xC000) {
        return 0;
    }
    tangentScale = lbl_805DB280;
block_7:
    if ((u16) M2C_FIELD(arg0, u16 *, 0x1C) >= 0x1000U) {
        push_matrix_from((void *) (&lbl_8058D490));
        rotate_matrix_y((int) (0), (int) (var_r31));
        rotate_vector_by_current_matrix((void *) (&displacement), (void *) (&displacement));
        pop_matrix();
        if (lbl_805DB284 < ((displacement.x * displacement.x) + (displacement.z * displacement.z))) {
            displacement.y = TObjPlayer__data_805DB270;
            normalize_vector((void *) (&displacement));
            temp_f1 = displacement.x * tangentScale;
            displacement.x = temp_f1;
            displacement.z *= tangentScale;
            vec3_add_to((void *) (&displacement), (void *) (arg0 + 0x44));
            if (project_actor_to_ground((Obj_80156844 *)((void *) (arg0)), (Vec_80156844 *)((void *) (&displacement)), (Vec_80156844 *)((int) (0))) != 0) {
                VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (&displacement));
                return 1;
            }
        }
    }
    if (project_actor_to_ground((Obj_80156844 *)((void *) (arg0)), (Vec_80156844 *)((void *) (arg0 + 0x44)), (Vec_80156844 *)((int) (0))) != 0) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg0 + 0x44));
        return 1;
    }
    return 0;
}

#pragma push
#pragma fp_contract on
struct Obj_80156844;
struct Vec_80156844;
#define PATG_80155294 ((s32 (*)(void *, void *, int))project_actor_to_ground)
s32 resolve_player_box_contact(u8 *arg0, u8 *arg1, u8 *arg2) {
    Vec_80155294 radial;
    Vec_80155294 v;
    s32 moved;
    if (arg1 == NULL || arg2 == NULL) {
        return 0;
    }
    VecCopy__FP3VecPC3Vec(&radial, arg0 + 0x44);
    subtract_vector(&radial, arg2 + 0x1C);
    if (enable_v2_features != 0 && *(u16 *)(arg0 + 0x1C) < 0x1000) {
        f32 hw = *(f32 *)(arg2 + 0x10);
        f32 hd = *(f32 *)(arg2 + 0xC);
        f32 xl;
        f32 zl;
        f32 xx;
        f32 zz;
        f32 dx;
        f32 dz;
        moved = 0;
        xl = hw * hw + get_collision_body_radius((Obj_801547E0 *)arg0, 0);
        zl = hd * hd + get_collision_body_radius((Obj_801547E0 *)arg0, 0);
        VecCopy__FP3VecPC3Vec(&lbl_8050BEE0, &radial);
        push_matrix_from(lbl_8058D490);
        rotate_matrix_y(0, -*(s32 *)(arg1 + 0x60));
        rotate_vector_by_current_matrix(&lbl_8050BEE0, &lbl_8050BEE0);
        pop_matrix();
        xx = lbl_8050BEE0.x * lbl_8050BEE0.x;
        zz = lbl_8050BEE0.z * lbl_8050BEE0.z;
        dx = xl - xx;
        dz = zl - zz;
        if (xx + zz < lbl_805DB284) {
            v.x = TObjPlayer__data_805DB270;
            v.y = TObjPlayer__data_805DB270;
            v.z = lbl_805DB288;
            SHIFT_80155294(*(s32 *)(arg0 + 0x60));
        } else if (*(u32 *)(arg2 + 0x18) & 0x20000000) {
            v.x = v.y = v.z = TObjPlayer__data_805DB270;
            if (hd < hw) {
                if (TObjPlayer__data_805DB270 < lbl_8050BEE0.z) {
                    v.z = lbl_805DB288;
                } else {
                    v.z = lbl_805DB28C;
                }
            } else {
                if (TObjPlayer__data_805DB270 < lbl_8050BEE0.x) {
                    v.x = lbl_805DB288;
                } else {
                    v.x = lbl_805DB28C;
                }
            }
            SHIFT_80155294(*(s32 *)(arg1 + 0x60));
        } else if (dx < dz) {
            v.x = lbl_8050BEE0.x < 0.0f ? lbl_805DB28C : lbl_805DB288;
            v.z = v.y = TObjPlayer__data_805DB270;
            SHIFT_80155294(*(s32 *)(arg1 + 0x60));
            v.x = TObjPlayer__data_805DB270;
            v.y = TObjPlayer__data_805DB270;
            if (lbl_8050BEE0.z < TObjPlayer__data_805DB270) {
                v.z = lbl_805DB290;
            } else {
                v.z = lbl_805DB294;
            }
            SHIFT_80155294(*(s32 *)(arg1 + 0x60));
        } else {
            v.x = TObjPlayer__data_805DB270;
            v.y = TObjPlayer__data_805DB270;
            if (lbl_8050BEE0.z < TObjPlayer__data_805DB270) {
                v.z = lbl_805DB28C;
            } else {
                v.z = lbl_805DB288;
            }
            SHIFT_80155294(*(s32 *)(arg1 + 0x60));
            v.x = lbl_8050BEE0.x < 0.0f ? lbl_805DB290 : lbl_805DB294;
            v.z = v.y = TObjPlayer__data_805DB270;
            SHIFT_80155294(*(s32 *)(arg1 + 0x60));
        }
        if (moved != 0) {
            return moved;
        }
    }
    if (angle_difference_abs((s32)(lbl_804400F0 * get_ad_end_text_start__10TObjPlayerFv(radial.x, radial.z)), *(s32 *)(arg0 + 0x60)) < 0x3000) {
        return 0;
    }
    if (PATG_80155294(arg0, arg0 + 0x44, 0) != 0) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x44);
        return 1;
    }
    return 1;
}
#pragma pop

s32 respond_to_body_contact(u8 *arg0, u32 arg1, u8 *arg2) {
    if (arg1 != 0 && arg2 != NULL) {
        switch (*(s32 *)(arg2 + 0x14)) {
        case 0:
            return resolve_actor_sphere_contact(arg0, arg1, (s32)arg2);
        default:
            return resolve_player_box_contact((u8 *)(arg0), (u8 *)(arg1), (u8 *)((s32)arg2));
        }
    }
    return 0;
}

s32 check_flag_pair__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (((arg0 & 0x2000) && (arg1 & 0x100)) || ((arg0 & 0x100) && (arg1 & 0x2000))) {
        return 1;
    }
    if (((arg0 & 0x4000) && (arg1 & 0x200)) || ((arg0 & 0x200) && (arg1 & 0x4000))) {
        return 1;
    }
    if (((arg0 & 0x8000) && (arg1 & 0x400)) || ((arg0 & 0x400) && (arg1 & 0x8000))) {
        return 1;
    }
    if (((arg0 & 0x10000) && (arg1 & 0x800)) || ((arg0 & 0x800) && (arg1 & 0x10000))) {
        return 1;
    }
    if (((arg0 & 0x40000) && (arg1 & 0x1000)) || ((arg0 & 0x1000) && (arg1 & 0x40000))) {
        return 1;
    }
    return 0;
}

s32 check_flags__10TObjPlayerFii(s32 arg0, s32 arg1) {
    s32 temp_r5;

    temp_r5 = arg0 & arg1;
    if (!(temp_r5 & 1)) {
        return 0;
    }
    if (!(temp_r5 & 6)) {
        return 0;
    }
    if (((arg0 & 8) && (arg1 & 0x2000)) || ((arg1 & 8) && (arg0 & 0x2000))) {
        return 0;
    }
    if (((arg0 & 0x10) && (arg1 & 0x4000)) || ((arg1 & 0x10) && (arg0 & 0x4000))) {
        return 0;
    }
    if (((arg0 & 0x20) && (arg1 & 0x8000)) || ((arg1 & 0x20) && (arg0 & 0x8000))) {
        return 0;
    }
    if (((arg0 & 0x40) && (arg1 & 0x10000)) || ((arg1 & 0x40) && (arg0 & 0x10000))) {
        return 0;
    }
    if (((arg0 & 0x80) && (arg1 & 0x40000)) || ((arg1 & 0x80) && (arg0 & 0x40000))) {
        return 0;
    }
    return 1;
}
s32 test_player_overlap_with_players(void *arg0, Obj_801559D0 *self, CollisionVector_80155FBC *pos, void *out) {
    CollisionBody_80155FBC a;
    CollisionBody_80155FBC b;
    s32 i;
    Obj_801559D0 *o;
    void *r;

    if (self != 0 && self->a4 != 0) {
        a.colliders = (void *)self->a4;
        a.count = self->a8;
        VecCopy__FP3VecPC3Vec(&a.position, pos);
        a.facing = self->f60;
        for (i = lbl_805D586C; i < lbl_805D5868; i++) {
            o = (Obj_801559D0 *)get_player_data__10TObjPlayerFi(i);
            if (o != 0 && o != self && obj_testFlags30(o, 0x80000800) == 0 && o->a4 != 0 &&
                horizontal_distance_squared(&self->pos, &o->pos) < TObjPlayer__data_805DB298) {
                b.colliders = (void *)o->a4;
                b.count = o->a8;
                VecCopy__FP3VecPC3Vec(&b.position, &o->pos);
                b.facing = o->f60;
                r = refresh_actor_body_spheres(a, b);
                if (r != 0) {
                    if (out != 0) {
                        fn_8002B630((Part_80156780 *)out, (Part_80156780 *)r);
                    }
                    return 1;
                }
            }
        }
    }
    return 0;
}

s32 test_player_body_overlap_at(M2C_UNK arg0, u8 *self, void *pos) {
    CollisionBody_80155FBC source;
    CollisionBody_80155FBC destination;
    s32 i;
    u8 *other;
    void *data;

    if (self != NULL && (data = *(void **)(self + 0xA4)) != NULL) {
        source.colliders = data;
        source.count = *(s32 *)(self + 0xA8);
        VecCopy__FP3VecPC3Vec(&source.position, pos);
        source.facing = *(s32 *)(self + 0x60);
        for (i = 0; i < lbl_805D5868; i++) {
            other = (u8 *)get_player_data__10TObjPlayerFi(i);
            if (other != NULL && other != self && (data = *(void **)(other + 0xA4)) != NULL) {
                destination.colliders = data;
                destination.count = *(s32 *)(other + 0xA8);
                VecCopy__FP3VecPC3Vec(&destination.position, other + 0x38);
                destination.facing = *(s32 *)(other + 0x60);
                if (refresh_actor_body_spheres(source, destination) != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
#define build_collision_box_corners ((void (*)(CollisionVector_80155C54,s32,Collider_80155C54*,CollisionBox_80155C54*))build_collision_box_corners)
#define test_collider_sphere_overlap_xz ((void (*)(CollisionVector_80155C54,Collider_80155C54*,CollisionSphere_80155C54*))test_collider_sphere_overlap_xz)
void* refresh_actor_body_spheres(CollisionBody_80155FBC a,CollisionBody_80155FBC b) {
    CollisionBox_80155C54 boxAA,boxBB,boxAB,boxBA;
    CollisionVector_80155C54 worldA,worldB,offsetA,offsetB;
    CollisionSphere_80155C54 sphereAB,sphereBA,sphereAA,sphereBB;
    Collider_80155C54* source;
    Collider_80155C54* destination;
    s32 facingA,facingB,countA,countB;
    s32 flags;
    s32 i,j;
    countA=a.count;countB=b.count;
    for (i=0;i<countA;++i) {
        source=&((Collider_80155C54*)a.colliders)[i];
        flags=source->flags;
        VecCopy__FP3VecPC3Vec(&worldA,&a.position);
        VecCopy__FP3VecPC3Vec(&offsetA,source);
        facingA=a.facing;
        push_matrix_from(lbl_8058D490);
        rotate_matrix_y(0,facingA);
        rotate_vector_by_current_matrix(&offsetA,&offsetA);
        pop_matrix();
        vec3_add_to(&worldA,&offsetA);
        VecCopy__FP3VecPC3Vec(&source->world,&worldA);
        VecCopy__FP3VecPC3Vec(&worldA,&a.position);
        for (j=0;j<countB;++j) {
            destination=&((Collider_80155C54*)b.colliders)[j];
            if (check_flags__10TObjPlayerFii(flags,destination->flags)) {
                VecCopy__FP3VecPC3Vec(&worldB,&b.position);
                VecCopy__FP3VecPC3Vec(&offsetB,destination);
                facingB=b.facing;
                push_matrix_from(lbl_8058D490);
                rotate_matrix_y(0,facingB);
                rotate_vector_by_current_matrix(&offsetB,&offsetB);
                pop_matrix();
                vec3_add_to(&worldB,&offsetB);
                VecCopy__FP3VecPC3Vec(&destination->world,&worldB);
                VecCopy__FP3VecPC3Vec(&worldB,&b.position);
                switch (source->shape) {
                case 1:
                    switch(destination->shape) {
                    case 1:
                        build_collision_box_corners(worldA,facingA,source,&boxAA);
                        build_collision_box_corners(worldB,facingB,destination,&boxBB);
                        if (TObjPlayer__sub_803E0ED4(&boxAA,&boxBB)) return destination;
                        break;
                    case 0: default:
                        build_collision_box_corners(worldA,facingA,source,&boxAB);
                        test_collider_sphere_overlap_xz(worldB,destination,&sphereAB);
                        if (test_box_sphere_contact(&boxAB,&sphereAB)) return destination;
                        break;
                    }
                    break;
                case 0: default:
                    switch(destination->shape) {
                    case 1:
                        test_collider_sphere_overlap_xz(worldA,source,&sphereBA);
                        build_collision_box_corners(worldB,facingB,destination,&boxBA);
                        if (test_box_sphere_contact(&boxBA,&sphereBA)) return destination;
                        break;
                    case 0: default:
                        test_collider_sphere_overlap_xz(worldA,source,&sphereAA);
                        test_collider_sphere_overlap_xz(worldB,destination,&sphereBB);
                        if (spheres_overlap(&sphereAA,&sphereBB)) return destination;
                        break;
                    }
                    break;
                }
            }
        }
    }
    return 0;
}

#undef build_collision_box_corners
#undef test_collider_sphere_overlap_xz

void* find_actor_body_contact(u8* arg0, u8* arg1, f32 limit) {
    CollisionBody_80155FBC source, destination;
    void* result;
    if (arg1!=arg0 && arg1 && !(*(u32*)(arg0+0x30)&0x800) && !(*(u32*)(arg1+0x30)&0x80000800)) {
        if (limit<horizontal_distance_squared((void *)(arg0+0x38), (void *)(arg1+0x38))) return 0;
        void* data=*(void**)(arg0+0xA4);
        if (data && *(void**)(arg1+0xA4)) {
            source.colliders=data;
            source.count=*(s32*)(arg0+0xA8);
            VecCopy__FP3VecPC3Vec((void *)(&source.position), (void *)(arg0+0x38));
            source.facing=*(s32*)(arg0+0x60);
            destination.colliders=*(void**)(arg1+0xA4);
            destination.count=*(s32*)(arg1+0xA8);
            VecCopy__FP3VecPC3Vec((void *)(&destination.position), (void *)(arg1+0x38));
            destination.facing=*(s32*)(arg1+0x60);
            result=refresh_actor_body_spheres(source,destination);
            if (result) {find_or_alloc_slot__10TObjPlayerFUi((u32)(arg1));return result;}
        }
    }
    return 0;
}

void mark_enemy_body_contacts(P_8015610C *arg0) {
    u32 obj;
    s32 i;
    Flg_8015610C *f = arg0->f;
    if (f != NULL) {
        f->flags = f->flags & 0xFFEFFFFF;
        for (i = 0; i < lbl_805D5868; i++) {
            obj = TObjPlayer__data_8050D460[i];
            if (obj == 0U) {
                break;
            }
            u16 t = obj_getField1c(obj);
            if (t >= 0x1000U && t < 0x4000U && check_actor_body_contact((Obj_80156268 *)arg0, (Obj_80156268 *)obj, lbl_805DB29C) != 0U) {
                arg0->f->flags = arg0->f->flags | 0x100000;
            }
        }
    }
}

void TObjPlayer__sub_801561C4(TObjPlayer_801561C4 *self, f32 range) {
    Hit_801561C4 *hit = self->hit;
    if (hit) {
        hit->flags &= ~0x80000;
        for (s32 i = 0; i < lbl_805D586C; i++) {
            void *entry = ((void * *)&TObjPlayer__data_8050D460)[i];
            if (entry && check_actor_body_contact((Obj_80156268 *)self, (Obj_80156268 *)entry, range)) {
                self->hit->flags |= 0x80000;
            }
        }
    }
}

u32 check_actor_body_contact(Obj_80156268 *self, Obj_80156268 *o, f32 range) {
    CollisionBody_80155FBC a;
    CollisionBody_80155FBC b;
    u8 *hit;

    if (o != self && o != 0 && !(self->flags & 0x800) && !(o->flags & 0x80000800)) {
        if (range * range < horizontal_distance_squared(&self->pos, &o->pos)) {
            return 0;
        }
        if (self->a4 != 0 && o->a4 != 0) {
            a.colliders = self->a4;
            a.count = self->a8;
            VecCopy__FP3VecPC3Vec(&a.position, &self->pos);
            a.facing = self->f60;
            b.colliders = o->a4;
            b.count = o->a8;
            VecCopy__FP3VecPC3Vec(&b.position, &o->pos);
            b.facing = o->f60;
            hit = (u8 *)refresh_actor_body_spheres(a, b);
            if (hit != 0) {
                find_or_alloc_slot__10TObjPlayerFUi((u32)o);
                *(u32 *)(hit + 0x18) |= 0x04000000;
                return (u32)hit;
            }
        }
    }
    return 0;
}

void update_enemy_collision_flags__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;
    s32 var_r30;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r5;
    temp_r5 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_r5 != NULL) {
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFEDFFFFF);
        for (var_r30 = lbl_805D586C + lbl_805D5870; var_r30 < (s32) lbl_805D5868; var_r30++) {
            temp_r3 = get_player_data__10TObjPlayerFi(var_r30);
            if (temp_r3 != 0) {
                temp_r3_2 = find_actor_body_contact((u8*)(arg0), (u8*)(temp_r3), TObjPlayer__data_805DB298);
                if ((temp_r3_2 != NULL) && (check_flag_pair__10TObjPlayerFii(M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18), M2C_FIELD(temp_r3_2, s32 *, 0x18)) == 0) && (respond_to_body_contact((u8 *)(arg0), (u32)(temp_r3), (u8 *)(temp_r3_2)) != 0)) {
                    temp_r3_3 = M2C_FIELD(arg0, void **, 0xA4);
                    M2C_FIELD(temp_r3_3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_3, s32 *, 0x18) | 0x01200000);
                }
            }
        }
    }
}

void check_enemy_body_collisions(void *arg0) {
    Player_801564A0 *self = (Player_801564A0 *)arg0;
    Player_801564A0 *other;
    s32 i;
    Coll_801564A0 *ct;
    if (self->coll != 0) {
        self->coll->flags &= ~0x900000;
        for (i = lbl_805D586C; i < lbl_805D586C + lbl_805D5870; i++) {
            other = (Player_801564A0 *)get_player_data__10TObjPlayerFi(i);
            if (other != 0) {
                if (self->room == other->room || self->id < 0x1000) {
                    ct = (Coll_801564A0 *)find_actor_body_contact((u8 *)self, (u8 *)other, TObjPlayer__data_805DB298);
                    if (ct != 0) {
                        self->coll->flags |= 0x100000;
                        if (check_flag_pair__10TObjPlayerFii(self->coll->flags, ct->flags) == 0 &&
                            respond_to_body_contact((u8 *)(self), (u32)((s32)other), (u8 *)(ct)) != 0) {
                            self->coll->flags |= 0x800000;
                        }
                    }
                }
            }
        }
    }
}

void check_object_collisions__10TObjPlayerFPv(void *arg0) {
    void *temp_r3;
    s32 var_r29;
    void *temp_r3_2;
    void *temp_r3_3;
    void *temp_r3_4;
    void *temp_r5;
    temp_r5 = M2C_FIELD(arg0, void **, 0xA4);
    if (temp_r5 != NULL) {
        M2C_FIELD(temp_r5, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r5, s32 *, 0x18) & 0xFFB7FFFF);
        for (var_r29 = 0; var_r29 < (s32) lbl_805D586C; var_r29++) {
            temp_r3 = ((void *)get_player_data__10TObjPlayerFi(var_r29));
            if ((temp_r3 != NULL) && ((u16) M2C_FIELD(temp_r3, u16 *, 0x1C) < 0x1000U)) {
                temp_r3_2 = find_actor_body_contact((u8*)((void *)(arg0)), (u8*)((s32)(temp_r3)), TObjPlayer__data_805DB298);
                if (temp_r3_2 != NULL) {
                    temp_r3_3 = M2C_FIELD(arg0, void **, 0xA4);
                    M2C_FIELD(temp_r3_3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_3, s32 *, 0x18) | 0x80000);
                    if ((check_flag_pair__10TObjPlayerFii(M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18), M2C_FIELD(temp_r3_2, s32 *, 0x18)) == 0) && (respond_to_body_contact((u8 *)((void *)(arg0)), (u32)((s32)(temp_r3)), (u8 *)((void *)(temp_r3_2))) != 0)) {
                        temp_r3_4 = M2C_FIELD(arg0, void **, 0xA4);
                        M2C_FIELD(temp_r3_4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3_4, s32 *, 0x18) | 0x400000);
                    }
                }
            }
        }
        if (!(M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0x480000)) {
            refresh_collision_body_centers((Obj_80154E3C *)(arg0));
        }
    }
}
void update_collisions__10TObjPlayerFPv(void* p) { check_object_collisions__10TObjPlayerFPv((void *)(p)); check_enemy_body_collisions((void *)(p)); }
void clear_obj_links(void* p) { *(s32*)((char*)p + 0x9c) = 0; *(s32*)((char*)p + 0xa4) = 0; }
void* initialize_linked_object_reference(void* p, void* a1) { *(int*)((char*)p + 0xa8) = 1; *(void**)((char*)p + 0xa4) = a1; *(void**)((char*)p + 0x9c) = (char*)p + 0xa0; refresh_collision_body_centers((Obj_80154E3C *)((void *)(p))); return *(void**)((char*)p + 0xa4); }

void free_collision_body_parts(G_80156720 *arg0) {
    u8 *p = arg0->f9c;
    if (p != 0) {
        if (p != 0) {
            free__11TOBoss4RockFUi((s32)(p - 0x10));
        }
        arg0->f9c = 0;
    }
    if (arg0->fa4 != 0) {
        free__11TOBoss4RockFUi((s32)arg0->fa4);
        arg0->fa4 = 0;
    }
}

Part_80156780 *init_collision_body_parts(Obj_80156780 *self, Part_80156780 *src, s32 count) {
    s32 n;
    s32 i;
    if (self->parts == 0) {
        self->count = count;
        self->parts = (Part_80156780 *)alloc_buffer__11TOBoss4RockFPv(self->count * 0x2c);
        for (i = 0; i < self->count; i++) {
            fn_8002B630(&self->parts[i], src++);
        }
        refresh_collision_body_centers((Obj_80154E3C *)(self));
    }
    if (self->f9c == 0) {
        n = self->count;
        self->f9c = __construct_new_array(alloc_buffer__11TOBoss4RockFPv(n * 4 + 0x10), init_forward__10TObjPlayerFPv, 0, 4, n);
    }
    return self->parts;
}

s32 project_actor_to_ground(Obj_80156844 *self, Vec_80156844 *pos, Vec_80156844 *normal) {
    Vec_80156844 v;
    Hit_80156844 *hit;
    u16 r;
    void *coll;
    s32 flags;
    VecCopy__FP3VecPC3Vec(&v, pos);
    v.y += lbl_805DB2A0;
    r = TObjRoomId__sub_801A1DB8(self->room);
    flags = 0x15;
    if (r == 0) {
        flags = 0x55;
    }
    coll = self->f90;
    if (coll != 0) {
        hit = csnVectorUnder(&v, coll, flags);
    } else {
        hit = csnVecterUnder(&v, flags);
    }
    if (hit == NULL) {
        return 0;
    }
    VecCopy__FP3VecPC3Vec(pos, hit->v);
    if (normal != NULL) {
        VecCopy__FP3VecPC3Vec(normal, &hit->v[1]);
    }
    return 1;
}

void release_member_90__10TObjPlayerFPv(void* p) { void* m = *(void**)((char*)p + 0x90); if (m) TObjPlayer__sub_80019828(m); }
void TObjPlayer__sub_80156934(void) { TObjPlayer__sub_801549D0(); init_all_slots__10TObjPlayerFv(); }
void reset__10TObjPlayerFv(void) { (*(int *)&lbl_805D5868) = 0; (*(int *)&lbl_805D586C) = 0; (*(int *)&lbl_805D5870) = 0; (*(int *)&TObjPlayer__data_805D5874) = 0; TObjPlayer__sub_801549D0(); init_all_slots__10TObjPlayerFv(); }
void *destroy_particle_controller__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804AF8A0;
        M2C_FIELD(arg0, M2C_UNK *, 0xA8) = 0;
        M2C_FIELD(arg0, M2C_UNK *, 0xA4) = 0;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjPlayer__sub_801569F4(u8 *arg0) {
    struct Actor_801569F4 *s = (struct Actor_801569F4 *) arg0;
    TPhotonMagicSquare__sub_801A2640();
    s->vtable = ((void * *)&lbl_804AF8A0);
    TObjPlayer__sub_80156A74((void*)(arg0 + 0x98));
    init_forward__10TObjPlayerFPv(arg0 + 0xA0);
    *(s32 *) (arg0 + 0x90) = 0;
    *(s32 *) (arg0 + 0xA8) = 0;
    *(s32 *) (arg0 + 0xA4) = 0;
    *(u16 *) (arg0 + 0x94) = 0xFFFF;
    *(s32 *) (arg0 + 0x9C) = 0;
    TObjPlayer__sub_80156A68((void*)(arg0));
    return arg0;
}

void TObjPlayer__sub_80156A68(void* p) { *(s16*)((char*)p + 0x96) = 0; }
void TObjPlayer__sub_80156A74(void* p) { *(s32*)((char*)p + 0x0) = 0; }
s32 access_object_saved_state(u8 *arg0, s32 arg1, s16 arg2) {
    s16 temp_r31;
    u8 *temp_r3;
    temp_r3 = M2C_FIELD(arg0, u8 **, 0x80);
    if (temp_r3 == NULL) {
        return 0;
    }
    temp_r31 = M2C_FIELD(temp_r3, s16 *, 4);
    if ((temp_r31 < 0) || (temp_r31 > 0xB9F)) {
        return 0;
    }
    if (arg2 == 0) {
        copy_short_fields__6TLobbyFPvPv((void *) (TLobby__data_805D6140 + (temp_r31 * 4)), (void *) (arg1));
    }
    if (arg2 == 1) {
        copy_short_fields__6TLobbyFPvPv((void *) (arg1), (void *) (TLobby__data_805D6140 + (temp_r31 * 4)));
    }
    return 1;
}

}
