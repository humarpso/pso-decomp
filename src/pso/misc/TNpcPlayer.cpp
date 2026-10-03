#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_8014FEAC {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct Rec_8014F844 { s32 id; s32 f4; f32 dist; };

struct Npc_8014F844 {
    s32 f0;
    Rec_8014F844 recs[10];
    s32 f7C;
    s32 f80;
    s32 f84;
    s16 f88;
    u16 f8A;
    s32 f8C;
    s32 f90;
    s32 f94;
    s32 f98;
    f32 f9C;
    f32 fA0;
    f32 fA4;
    void *fA8;
    f32 fAC;
    f32 fB0;
    f32 fB4;
    f32 fB8;
    f32 fBC;
    s32 fC0;
    s32 fC4;
    u8 padC8[0x104 - 0xC8];
    s32 f104;
};

struct Stack_801515E0 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct Msg_80150DE8 { u8 hdr[2]; u16 type; f32 x; f32 z; };

struct Npc_80150DE8 { u8 pad[0x78]; void *owner; u8 pad7c[0xAC - 0x7C]; f32 x; f32 y; f32 z; };

struct Msg_80150E44 { u8 hdr[2]; u16 type; f32 x; f32 z; u32 flags; };

struct Obj_80150E44 { u8 pad[0x30]; u32 flags; };

struct Owner_80150E44 { u8 pad[0x94]; Obj_80150E44 *obj; };

struct Npc_80150E44 { u8 pad[0x78]; Owner_80150E44 *owner; u8 pad7c[0xAC - 0x7C]; f32 x; f32 y; f32 z; };

struct V3_80150050 { f32 x, y, z; };

struct Tgt_80150050 { u8 pad[0x38]; V3_80150050 pos; };

struct Mid_80150050 { u8 pad[0x94]; Tgt_80150050 *tgt; };

struct Npc_80150050 { u8 pad0[0x74]; Mid_80150050 *mid; u8 pad78[0x34]; V3_80150050 pos; u8 pad_b8[0x18]; V3_80150050 dst; };

struct Msg_80150A34 {
    u8 pad0[2];
    u16 type;
    s8 kind;
    u8 pad5;
    s8 e;
    s8 one;
    u8 sub[0x2C];
};
struct Owner_80150A34 { u8 pad[0x94]; u8 *actor; };
struct Npc_80150A34 { u8 pad[0x74]; void *p74; Owner_80150A34 *p78; u8 pad7C[4]; u32 flags; };

struct Npc_801518A4 {
    u8 pad0[0x44];
    f32 f44;
    f32 f48;
    u8 pad4C[0x58 - 0x4C];
    f32 f58;
    u8 a5C[0x74 - 0x5C];
    void *p74;
    u8 *p78;
    u8 pad7C[4];
    u32 flags;
};
struct Tgt_801518A4 { s32 a; s32 b; };

struct Cand_80151708 { u32 id; s32 idx; f32 dist; };

struct View_80151708 { s32 count; Cand_80151708 c[10]; };

struct Pos_80151708 { u8 pad[0x38]; f32 x; f32 y; f32 z; };

struct Obj_80151708 { u8 pad[0x38]; f32 pos[0x300 / 4 - 0x38 / 4]; f32 f300; };

struct Owner_80151708 { u8 pad[0x94]; Obj_80151708 *obj; };

struct Npc_80151708 {
    u8 pad0[0x4C];
    f32 f4C;
    u8 pad50[0x5C - 0x50];
    u8 f5C[0x78 - 0x5C];
    Owner_80151708 *f78;
    u8 pad7C[4];
    u32 f80;
    u8 pad84[0xDC - 0x84];
    f32 dst[3];
};

struct Tgt_801510F8 { s32 a; s32 b; };

struct Obj_801510F8 { u8 pad[0x94]; u8 *obj; };

struct Npc_801510F8 {
    u8 pad0[0x34];
    s32 f34;
    u8 pad38[0x48 - 0x38];
    f32 f48;
    u8 pad4C[0x5C - 0x4C];
    u8 counters[0x74 - 0x5C];
    Obj_801510F8 *f74;
    Obj_801510F8 *f78;
    u8 pad7C[0x80 - 0x7C];
    s32 f80;
    s32 f84;
    u8 pad88[0x92 - 0x88];
    s16 f92;
    u8 pad94[0xDC - 0x94];
    u8 dst[0xC];
};

struct RecoveredGlobal_801520B8___vt__10TNpcPlayer { M2C_UNK value; u8 remaining[0x14]; };

struct Own_80152168 { u8 pad[0x94]; u8 *obj; };
struct Npc_80152168 {
    s32 f0;
    u8 pad4[0x14];
    M2C_UNK *vt;
    s32 f1C;
    s32 f20;
    s32 f24;
    u8 pad28[4];
    s16 f2C;
    u8 pad2E[2];
    u8 f30[0x28];
    f32 f58;
    u8 f5C[0x74 - 0x5C];
    void *f74;
    Own_80152168 *f78;
    s32 f7C;
    s32 f80;
    s32 f84;
    f32 f88;
    s8 f8C;
    s8 f8D;
    s16 f8E;
    u8 pad90[0xAC - 0x90];
    f32 fAC;
    f32 fB0;
    f32 fB4;
    u8 padB8[0xC4 - 0xB8];
    s32 fC4;
    s32 fC8;
    s32 fCC;
    f32 fD0;
    f32 fD4;
    f32 fD8;
    f32 fDC;
    f32 fE0;
    f32 fE4;
};

struct Own_80152330 { u8 pad[0x94]; u8 *obj; };
struct Npc_80152330 {
    s32 f0;
    u8 pad4[0x14];
    M2C_UNK *vt;
    s32 f1C;
    s32 f20;
    s32 f24;
    u8 pad28[4];
    s16 f2C;
    u8 pad2E[2];
    u8 f30[0x28];
    f32 f58;
    u8 f5C[0x74 - 0x5C];
    void *f74;
    Own_80152330 *f78;
    s32 f7C;
    s32 f80;
    s32 f84;
    f32 f88;
    s8 f8C;
    s8 f8D;
    s16 f8E;
    u8 pad90[0xAC - 0x90];
    f32 fAC;
    f32 fB0;
    f32 fB4;
    u8 padB8[0xC4 - 0xB8];
    s32 fC4;
    s32 fC8;
    s32 fCC;
    f32 fD0;
    f32 fD4;
    f32 fD8;
    f32 fDC;
    f32 fE0;
    f32 fE4;
};

struct Obj_801528A8 { u8 pad[0x5c]; u8 arr[1]; };

struct Vec_801501A0 {
    f32 x, y, z;
};

struct Actor_801501A0 {
    u8 pad0[0x38];
    Vec_801501A0 pos;
    u8 pad44[0x2FC - 0x44];
    Vec_801501A0 anchor;
};

struct View_801501A0 {
    u8 pad0[0x94];
    Actor_801501A0 *actor;
    u8 pad98[4];
    Vec_801501A0 v9c;
};

struct Self_801501A0 {
    u8 pad0[0x78];
    View_801501A0 *view;
    u8 pad7c[4];
    u32 flags;
    u8 pad84[8];
    s8 s8c;
    s8 s8d;
    u8 pad8e[2];
    s16 s90;
    u8 pad92[2];
    Vec_801501A0 dir;
    Vec_801501A0 wp;
    u8 padac[0xD0 - 0xAC];
    Vec_801501A0 target;
    Vec_801501A0 dest;
};

struct Obj_80150B90;
struct Owner_80150B90 { u8 pad[0x94]; Obj_80150B90 *obj; };
struct Npc_80150B90 {
    u8 pad0[0x34];
    u32 f34;
    u8 pad38[0x50 - 0x38];
    s8 f50;
    u8 pad51[2];
    u8 f53;
    u8 pad54[0x78 - 0x54];
    Owner_80150B90 *f78;
    u8 pad7C[4];
    u32 f80;
};
struct Tec_80150B90 { u8 pad[0x10]; s16 f10; };

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 get_random_float__8TObjFishFv(f32);
f32 horizontal_distance_squared(void *, void *, int);
M2C_UNK change_ai_state__10TNpcPlayerFPvUi(void *, int);
M2C_UNK request_chatter__10TNpcPlayerFPvUi(void *, int);
s32 select_recovery_action__10TNpcPlayerFv(Npc_801510F8 *self, s32 arg1);
s32 calc_follow_goal__10TNpcPlayerFPv(u8 *arg0);
s32 choose_attack_target__10TNpcPlayerFPv(Npc_80151708 *self);
s32 check_return_to_leader__10TNpcPlayerFPv(Npc_801518A4 *arg0);
void reset_partner_counter(s32 arg0, s32 arg1);
s32 get_action_state__10TNpcPlayerFPv(void *);
s32 can_perform_physical_action__10TObjPlayerFi(void *);
s32 get_global_state__14TOKeyMachine01Fv();
s32 rand(void);
extern const f32 TNpcPlayer__data_805DB1F4;
extern const f32 TNpcPlayer__data_805DB22C;
extern const f32 TNpcPlayer__data_805DB23C;
extern const f32 lbl_805DB244;
extern const f32 lbl_805DB248;
extern const f32 lbl_805DB24C;
void decide_action__10TNpcPlayerFv(u8 *arg0);
}

extern "C" {
void *dt__10TNpcPlayerFPvs(void *arg0, s16 arg1);
s32 refresh_npc_view_actor_lost(void *arg0);
Npc_8014F844 *TNpcPlayer__sub_8014F844(Npc_8014F844 *self, s32 id);
s32 partner_view_update_hp_change(void *arg0);
s32 partner_view_update_conditions(u8 *arg0);
s32 try_update_target_flag__10TNpcPlayerFPvi(void *arg0, s32 arg1);
s32 check_and_set_reached__10TNpcPlayerFPv(void *arg0);
s32 try_attack__10TNpcPlayerFPvii(void *arg0, s32 arg1, s32 arg2);
s32 partner_view_check_moved(u8 *arg0);
s32 check_movement_progress__10TNpcPlayerFPv(u8 *arg0);
void render__10TNpcPlayerFv(void);
void TNpcPlayer__sub_80150050(Npc_80150050 *arg0);
s32 needs_movement__10TNpcPlayerFPvPvi(u8 *arg0, void * _w1, int _w2);
void select_path_waypoint__10TNpcPlayerFv(Self_801501A0 *self);
void partner_observe_surroundings(u8 *arg0);
void update_condition_flags__10TNpcPlayerFPv(u8 *arg0);
void init_state__10TNpcPlayerFPv(void *arg0);
void request_technique_cast__10TNpcPlayerFPvi(Npc_80150A34 *self, s32 kind);
void update_combat_action__10TNpcPlayerFv(Npc_80150B90 *self);
void send_run_request__10TNpcPlayerFPv(Npc_80150DE8 *self);
void send_walk_request__10TNpcPlayerFPv(Npc_80150E44 *self);
s32 select_recovery_action__10TNpcPlayerFv(Npc_801510F8 *self, s32 arg1);
s32 calc_follow_goal__10TNpcPlayerFPv(u8 *arg0);
s32 choose_attack_target__10TNpcPlayerFPv(Npc_80151708 *self);
s32 check_return_to_leader__10TNpcPlayerFPv(Npc_801518A4 *arg0);
s32 update_follow_target__10TNpcPlayerFPv(u8 *arg0);
void run_task__10TNpcPlayerFv(u8 *arg0);
u8 *__dt__10TNpcPlayerFv(u8 *arg0, s16 arg1);
Npc_80152168 *TNpcPlayer__ct(Npc_80152168 *self, s32 a, s32 b, s16 kind, s32 arg4, void *parent);
void copy__10TNpcPlayerFPvPv(void* p, void* q);
Npc_80152330 *TNpcPlayer__sub_80152330(Npc_80152330 *self, s32 a, s32 b, s16 kind, void *parent);
void ensure_rock_singleton__10TNpcPlayerFv(void);
void TNpcPlayer__sub_8015286C(void);
void set_technique_seed_level(Obj_801528A8 *self, s16 i, u8 v);
void reset_partner_counter(s32 arg0, s32 arg1);
void increment_partner_counter(s32 arg0, s32 arg1);
s32 TNpcPlayer__sub_801528DC(void* p);
s32 get_npc_state__10TNpcPlayerFPv(void* p);
u16 get_npc_type__10TNpcPlayerFPv(void* p);
M2C_UNK deliver_partner_action__10TNpcPlayerFv(void *);

u32 get_player_by_client_id(u16);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
f32 horizontal_distance_squared(void *, void *, int);
M2C_UNK request_chatter__10TNpcPlayerFPvUi(void *, int);
s16 get_partner_counter(void *, int);
M2C_UNK npc_counter_reset_if_reached(void *, int, int);
u8 *get_position_ptr__10TObjPlayerFPv(s32);
u8 *get_target_ptr__11TCameraCtrlFPv(s32);
f32 vector_length(void *, int, f32, f32);
s16 obj_getS16_32E(void *);
s16 obj_getS16_2BA(void *);
s16 obj_getS16_32C(void *);
s16 get_field_2b8__14TItemProShieldFPv(void *);
s32 find_entity_by_id(u16);
void init_collision_body_parts(void *, void *, s32);
void *TObjPlayer__sub_801569F4(void *, void *);
void *__nw__7TObjectFUl(u32);
s32 TNpcPlayer__sub_8014F424(void *, s32, s32, s32);
s32 scan_nearby_enemies__10TNpcPlayerFPvPvf(void *, s32);
M2C_UNK free_collision_body_parts(u32);
M2C_UNK __dl__FPv(void *);
s32 find_inventory_item_id__10TObjPlayerFPvcc(s32, M2C_UNK, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 try_camera_action__10TObjPlayerFii(void *, s32);
void TNpcPlayer__sub_80152C48(void *);
void TNpcPlayer__sub_80152D04(void *);
void set_state__10TNpcPlayerFPvs(void *, s16);
void set_type__10TNpcPlayerFPvs(void *, u16);
s8 get_cast_technique_level(void *, s16);
u8 *find_active_entity_by_id(int);
Tgt_801518A4 *TNpcPlayer__sub_80152A30(void *);
s32 get_condition__10TNpcPlayerFPv(s32);
s32 is_target_line_clear__10TNpcPlayerFPvUs(void *, u32);
void TNpcPlayer__sub_80152A34(void *, u32, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_action_state__10TNpcPlayerFPv(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(int, f32, f32, f32);
M2C_UNK partner_probe_obstacles(void *);
M2C_UNK normalize_vector(void *);
void reset_move_state__10TNpcPlayerFPv(void *m);
void reset_model__10TNpcPlayerFPv(void *m);
void TNpcPlayer__sub_80152E74(void *m);
void sync_from_lobby__10TNpcPlayerFPv(void *m);
M2C_UNK reset_fields_8c__10TNpcPlayerFPv(s32);
s32 partner_clip_path_point(void *self, Vec_801501A0 *from, Vec_801501A0 *to, Vec_801501A0 *out);
s32 route_around_object__10TNpcPlayerFv(void *, Vec_801501A0 *);
void partner_compute_stalled_detour(void *self, Vec_801501A0 *from, Vec_801501A0 *to, Vec_801501A0 *d, Vec_801501A0 *out);
s32 partner_route_around_wall(void *self, Vec_801501A0 *from, Vec_801501A0 *to, Vec_801501A0 *d, Vec_801501A0 *out, Vec_801501A0 *out2);
s32 partner_find_wall_segment(void *self, Vec_801501A0 *from, Vec_801501A0 *to, Vec_801501A0 *hit, Vec_801501A0 *normal);
u32 TNpcPlayer__sub_80152978(void *);
s32 can_perform_physical_action__10TObjPlayerFi(void *);
s32 rand(void);
f32 get_random_float__8TObjFishFv(f32);
void partner_request_physical_attack(void *);
Tec_80150B90 *calc_technique_parameters(s32, s32, s32);
void TNpcPlayer__sub_8014DC3C(void *, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
void init_equipment__10TNpcPlayerFPv(void *);
void __ct__7TObjectFP7TObject(void *, void *);
s32 is_inactive__10TObjPlayerFPv(void *);
M2C_UNK change_ai_state__10TNpcPlayerFPvUi(void *, int);
s32 is_partner_counter_reached(void *, int, int);
s32 clamp_partner_counter(void *, int, int);
u16 get_action_flags__10TNpcPlayerFPv(void *);
void send_item_pickup_request__10TObjPlayerFi(s32);
void __dl__7TObjectFPv(s32);
M2C_UNK __dt__7TObjectFv(void *, int);
void *__ct__12TPlyCharDataFv(void *self);
void __dt__12TPlyCharDataFv(void *self, s32 flag);
void __register_global_object(void *obj, void *dtor, void *link);
void* init__10TNpcPlayerFPv(void* p);
u32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);

extern void *tl_05;
extern const f32 TNpcPlayer__data_805DB1F0;
extern const f32 TNpcPlayer__data_805DB1F4;
extern const f32 lbl_805DB1F8;
extern const f32 lbl_805DB1FC;
extern const f32 lbl_805DB208;
extern const f32 TNpcPlayer__data_805DB20C;
extern const f32 lbl_805DB214;
extern f32 TNpcPlayer__data_805DB218;
extern const f32 lbl_805DB21C;
extern const f32 lbl_805DB220;
extern const f32 lbl_805DB224;
extern const f32 lbl_805DB228;
extern const f32 TNpcPlayer__data_805DB22C;
extern const f32 lbl_805DB230;
extern const f32 lbl_805DB234;
extern const f32 lbl_805DB238;
extern const f32 TNpcPlayer__data_805DB23C;
extern const f32 lbl_805DB244;
extern const f64 lbl_8043FFD8;
extern V3_80150050 lbl_8043FFAC;
extern u8 TNpcPlayer__data_804ABC90[][0x28];
extern s32 lbl_805D2E74;
extern RecoveredGlobal_801520B8___vt__10TNpcPlayer __vt__10TNpcPlayer;
extern u8 lbl_8050CFC4[];
extern u8 lbl_8050CFB8[];
}

extern "C" {

#define reset_partner_counter(a, b) ((M2C_UNK (*)(void *, int))reset_partner_counter)(a, b)
#define increment_partner_counter(a, b) ((M2C_UNK (*)(void *, int))increment_partner_counter)(a, b)
#define try_camera_action__10TObjPlayerFii(a, b) ((s32 (*)(s32, M2C_UNK))try_camera_action__10TObjPlayerFii)(a, b)
#define queue_destruction__7TObjectFv(a) ((M2C_UNK (*)(u32))queue_destruction__7TObjectFv)(a)
#define horizontal_distance_squared(a, b) ((f32 (*)(void *, void *))horizontal_distance_squared)(a, b)
#define vector_length(a, b) ((f32 (*)(void *, f32))vector_length)(a, b)

void *dt__10TNpcPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xA8) != 0U) {
            free_collision_body_parts(M2C_FIELD(arg0, u32 *, 0xA8));
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, u32 *, 0xA8));
            M2C_FIELD(arg0, u32 *, 0xA8) = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
s32 refresh_npc_view_actor_lost(void *arg0) {
    u32 v;
    M2C_FIELD(arg0, u32 *, 0x94) = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x8A));
    v = M2C_FIELD(arg0, u32 *, 0x94);
    if (v == 0U) {
        return 1;
    }
    return (u32) __cntlzw(all_parents_unqueued_for_destruction__7TObjectFv((void *)v)) >> 5;
}
#pragma pop

Npc_8014F844 *TNpcPlayer__sub_8014F844(Npc_8014F844 *self, s32 id) {
    s32 i;
    void *p;
    self->f94 = find_entity_by_id(id);
    self->f9C = TNpcPlayer__data_805DB1F0;
    self->fA0 = TNpcPlayer__data_805DB1F0;
    self->fA4 = TNpcPlayer__data_805DB1F0;
    self->f8C = 0;
    self->f90 = 0;
    self->f8A = id;
    self->f88 = -1;
    self->f84 = 0;
    self->f0 = 0;
    for (i = 0; i < 10; i++) {
        self->recs[i].id = 0xFFFF;
        self->recs[i].dist = TNpcPlayer__data_805DB1F0;
    }
    self->f104 = 0;
    self->fAC = TNpcPlayer__data_805DB1F0;
    self->fB0 = TNpcPlayer__data_805DB1F0;
    self->fB4 = TNpcPlayer__data_805DB20C;
    self->fB8 = lbl_805DB214;
    self->fBC = TNpcPlayer__data_805DB20C;
    self->fC0 = 0;
    self->fC4 = 0x1103;
    p = __nw__7TObjectFUl(0xAC);
    if (p != 0) {
        p = TObjPlayer__sub_801569F4(p, tl_05);
    }
    self->fA8 = p;
    if (self->fA8 != 0) {
        init_collision_body_parts(self->fA8, &self->fAC, 1);
    }
    self->f7C = 0xFFFF;
    self->f80 = 0xFFFF;
    return self;
}

s32 partner_view_update_hp_change(void *arg0) {
    s16 temp_r0;
    s16 temp_r31;
    s16 temp_r3;
    s16 temp_r4;
    temp_r31 = obj_getS16_32C((void *)(M2C_FIELD(arg0, s32 *, 0x94)));
    temp_r3 = get_field_2b8__14TItemProShieldFPv((void *)(M2C_FIELD(arg0, s32 *, 0x94)));
    if (M2C_FIELD(arg0, s16 *, 0x88) <= 0) {
        M2C_FIELD(arg0, s16 *, 0x88) = temp_r31;
        return 0;
    }
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x88);
    temp_r0 = (s16)(temp_r4 - temp_r31);
    if (temp_r4 >= (s32) (temp_r31 - 1)) {
        if ((f32) temp_r0 > (lbl_805DB21C * (f32) temp_r3)) {
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x40);
        } else if ((f32) temp_r0 > ((*(const f32 *)&TNpcPlayer__data_805DB218) * (f32) temp_r3)) {
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x80);
        } else if ((f32) temp_r0 > (lbl_805DB220 * (f32) temp_r3)) {
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x100);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x200);
    }
    M2C_FIELD(arg0, s16 *, 0x88) = temp_r31;
    return temp_r0 ? 1 : 0;
}

s32 partner_view_update_conditions(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f31;
    f32 temp_f31_2;
    s32 temp_r3;
    s32 var_r31;
    var_r31 = 0;
    temp_f31 = (f32) obj_getS16_32C(M2C_FIELD(arg0, u8 **, 0x94));
    temp_f1 = temp_f31 / (f32) get_field_2b8__14TItemProShieldFPv(M2C_FIELD(arg0, u8 **, 0x94));
    if (M2C_FIELD(arg0, s32 *, 0x8C) & 2) {
        if (temp_f1 <= lbl_805DB224) {
            var_r31 = 1;
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 8);
            M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) | 4);
        }
        if (temp_f1 <= lbl_805DB228) {
            var_r31 = 1;
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x1000);
        }
    } else if (temp_f1 <= lbl_805DB228) {
        var_r31 = 1;
        M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 8);
        M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) | 4);
    }
    if (temp_f1 <= TNpcPlayer__data_805DB22C) {
        var_r31 = 1;
        M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x800);
        M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) | 4);
    }
    temp_r3 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x94), s32 *, 0x30);
    if ((temp_r3 & 1) || (temp_r3 & 2) || (temp_r3 & 0x10)) {
        var_r31 = 1;
        M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 2);
        M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) | 4);
    }
    temp_f31_2 = (f32) obj_getS16_32E(M2C_FIELD(arg0, u8 **, 0x94));
    temp_f2 = (f32) obj_getS16_2BA(M2C_FIELD(arg0, u8 **, 0x94));
    if (((temp_f31_2 / temp_f2) <= TNpcPlayer__data_805DB218) && (TNpcPlayer__data_805DB1F0 != temp_f2)) {
        M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) | 4);
        M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x10);
    }
    return var_r31;
}

s32 try_update_target_flag__10TNpcPlayerFPvi(void *arg0, s32 arg1) {
    s32 temp_r6;

    temp_r6 = M2C_FIELD(arg0, s32 *, 0x94);
    if (TNpcPlayer__sub_8014F424(arg0, temp_r6 + 0x38, arg1, temp_r6) != 0) {
        M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) | 2);
        return 1;
    }
    return 0;
}

s32 check_and_set_reached__10TNpcPlayerFPv(void *arg0) {
    if (scan_nearby_enemies__10TNpcPlayerFPvPvf(arg0, M2C_FIELD(arg0, s32 *, 0x94) + 0x38) != 0) {
        M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) | 2);
        return 1;
    }
    return 0;
}

s32 try_attack__10TNpcPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        if ((arg2 != 0) && (find_inventory_item_id__10TObjPlayerFPvcc(M2C_FIELD(arg0, s32 *, 0x94), 3, 0) != -1)) {
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x20);
            return 1;
        }
        if (try_camera_action__10TObjPlayerFii(M2C_FIELD(arg0, s32 *, 0x94), 0xF) != 0) {
            return 1;
        }
        break;
    case 1:
        if (find_inventory_item_id__10TObjPlayerFPvcc(M2C_FIELD(arg0, s32 *, 0x94), 3, 1) != -1) {
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x20);
            return 1;
        }
        break;
    case 2:
        if (try_camera_action__10TObjPlayerFii(M2C_FIELD(arg0, s32 *, 0x94), 0x10) != 0) {
            return 1;
        }
        break;
    case 3:
        if (find_inventory_item_id__10TObjPlayerFPvcc(M2C_FIELD(arg0, s32 *, 0x94), 3, 6) != -1) {
            M2C_FIELD(arg0, s32 *, 0x90) = (s32) (M2C_FIELD(arg0, s32 *, 0x90) | 0x20);
            return 1;
        }
        if (try_camera_action__10TObjPlayerFii(M2C_FIELD(arg0, s32 *, 0x94), 0x11) != 0) {
            return 1;
        }
        break;
    }
    return 0;
}

s32 partner_view_check_moved(u8 *arg0) {
    Stack_8014FEAC stack;
    f32 temp_f1;
    u8 *temp_r31;
    u8 *temp_r3;
    temp_r31 = (u8 *)(get_target_ptr__11TCameraCtrlFPv(M2C_FIELD(arg0, s32 *, 0x94)));
    temp_r3 = (u8 *)(get_position_ptr__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x94)));
    if ((temp_r31 == NULL) || (temp_r3 == NULL)) {
        return 0;
    }
    stack.sp8 = M2C_FIELD(temp_r3, f32 *, 0) - M2C_FIELD(temp_r31, f32 *, 0);
    stack.spC = M2C_FIELD(temp_r3, f32 *, 4) - M2C_FIELD(temp_r31, f32 *, 4);
    temp_f1 = M2C_FIELD(temp_r3, f32 *, 8);
    stack.sp10 = temp_f1 - M2C_FIELD(temp_r31, f32 *, 8);
    if (vector_length((void *) (&stack.sp8), (f32) (temp_f1)) > lbl_805DB230) {
        M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (M2C_FIELD(arg0, s32 *, 0x8C) | 1);
        return 1;
    }
    return 0;
}

#pragma push
#pragma fp_contract on
s32 check_movement_progress__10TNpcPlayerFPv(u8 *arg0) {
    s8 temp_r3;
    if (horizontal_distance_squared((void *) (arg0 + 0xAC), (void *) (arg0 + 0xD0)) <= lbl_805DB234) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, s8 *, 0x8C);
    if (temp_r3 > 0x1E) {
        M2C_FIELD(arg0, u8 *, 0x8C) = 0x1EU;
        M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) | 0x4000);
        if (get_partner_counter((void *) (arg0 + 0x5C), (int) (7)) == 0) {
            request_chatter__10TNpcPlayerFPvUi((void *) (arg0), (int) (7));
        }
        increment_partner_counter((void *) (arg0 + 0x5C), (int) (7));
        npc_counter_reset_if_reached((void *) (arg0 + 0x5C), (int) (7), (int) (0x12C));
        return 0;
    }
    if ((temp_r3 == 0) && (M2C_FIELD(arg0, s32 *, 0x80) & 0x4000)) {
        reset_partner_counter((void *) (arg0 + 0x5C), (int) (7));
        request_chatter__10TNpcPlayerFPvUi((void *) (arg0), (int) (0x18));
        M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) & 0xFFFFBFFF);
    }
    return 1;
}
#pragma pop
#undef reset_partner_counter
#undef increment_partner_counter
#undef try_camera_action__10TObjPlayerFii
#undef queue_destruction__7TObjectFv
#undef horizontal_distance_squared
#undef vector_length

#define reset_partner_counter(a, b) ((M2C_UNK (*)(void *, M2C_UNK))reset_partner_counter)(a, b)
#define increment_partner_counter(a, b) ((M2C_UNK (*)(void *, M2C_UNK))increment_partner_counter)(a, b)
#define partner_view_update_conditions(a) ((M2C_UNK (*)(s32))partner_view_update_conditions)(a)
#define partner_view_check_moved(a) ((M2C_UNK (*)(s32))partner_view_check_moved)(a)
#define check_and_set_reached__10TNpcPlayerFPv(a, b) ((s32 (*)(s32, f32))check_and_set_reached__10TNpcPlayerFPv)(a, b)
#define try_update_target_flag__10TNpcPlayerFPvi(a, b, c) ((M2C_UNK (*)(void *, void *, f32))try_update_target_flag__10TNpcPlayerFPvi)(a, b, c)

void render__10TNpcPlayerFv(void) {  }

extern const f32 lbl_805DB240;

void TNpcPlayer__sub_80150050(Npc_80150050 *arg0) {
    Tgt_80150050 *t = arg0->mid->tgt;
    V3_80150050 off = lbl_8043FFAC;
    if (t != NULL) {
        arg0->dst.x = arg0->mid->tgt->pos.x + off.x;
        arg0->dst.y = arg0->mid->tgt->pos.y + off.y;
        arg0->dst.z = arg0->mid->tgt->pos.z + off.z;
        VecCopy__FP3VecPC3Vec(&arg0->pos, &arg0->mid->tgt->pos);
    }
}

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
s32 needs_movement__10TNpcPlayerFPvPvi(u8 *arg0, void * _w1, int _w2) {
    f32 temp_f1;
    f32 var_f31;
    if (M2C_FIELD(arg0, s32 *, 0x80) & 0x10) {
        return 1;
    }
    var_f31 = lbl_805DB1FC + M2C_FIELD(arg0, f32 *, 0x40);
    if (var_f31 >= lbl_805DB238) {
        var_f31 = lbl_805DB238;
    }
    temp_f1 = horizontal_distance_squared((void *)((void *) ((u8 *)(arg0) + 0xDC)), (void *)((void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), s32 *, 0x94) + 0x38)), (int)(_w2));
    M2C_FIELD(arg0, f32 *, 0x88) = temp_f1;
    if (temp_f1 >= (var_f31 * var_f31)) {
        return 1;
    }
    M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) & 0xFFFFFEFF);
    return 0;
}
#pragma pop

#pragma push
#pragma fp_contract on
#define LEN_801501A0(v) ((f32 (*)(void *))vector_length)(v)

void select_path_waypoint__10TNpcPlayerFv(Self_801501A0 *self) {
    Vec_801501A0 midpoint;
    Vec_801501A0 hit;
    Vec_801501A0 route;
    Vec_801501A0 dir;
    Vec_801501A0 normal;
    Actor_801501A0 *actor;
    f32 len;
    f32 half;
    s32 clear;

    actor = self->view->actor;
    dir.x = self->dest.x - actor->anchor.x;
    dir.y = self->dest.y - actor->anchor.y;
    dir.z = self->dest.z - actor->anchor.z;
    len = LEN_801501A0(&dir);
    if (TNpcPlayer__data_805DB1F0 != len) {
        normalize_vector(&dir);
    }
    actor = self->view->actor;
    half = len * lbl_805DB1F8;
    midpoint.x = half * dir.x + actor->anchor.x;
    midpoint.y = half * dir.y + actor->anchor.y;
    midpoint.z = half * dir.z + actor->anchor.z;
    if (partner_find_wall_segment(self, &actor->anchor, &self->dest, &hit, &normal) != 0) {
        Vec_801501A0 shortcut = {0.0f, 0.0f, 0.0f};
        clear = partner_route_around_wall(self, &self->view->actor->anchor, &hit, &normal, &route, &shortcut);
        if (!(self->flags & 1)) {
            if (clear != 0) {
                VecCopy__FP3VecPC3Vec(&self->wp, &shortcut);
            } else {
                VecCopy__FP3VecPC3Vec(&self->wp, &route);
                self->wp.y = self->dest.y;
                Vec_801501A0 clipped;
                if (partner_clip_path_point(self, &self->dest, &self->wp, &clipped) != 0) {
                    VecCopy__FP3VecPC3Vec(&self->wp, &clipped);
                }
            }
            self->dir.x = self->dest.x - self->wp.x;
            self->dir.y = TNpcPlayer__data_805DB1F0;
            self->dir.z = self->dest.z - self->wp.z;
            if (TNpcPlayer__data_805DB1F0 != LEN_801501A0(&self->dir)) {
                normalize_vector(&self->dir);
            }
            self->flags |= 1;
        }
        if (clear != 0) {
            self->s90 = 0;
            if (self->flags & 2) {
                Vec_801501A0 d1;
                actor = self->view->actor;
                d1.x = self->target.x - actor->pos.x;
                d1.y = TNpcPlayer__data_805DB1F0;
                d1.z = self->target.z - actor->pos.z;
                if (LEN_801501A0(&d1) <= lbl_805DB208) {
                    VecCopy__FP3VecPC3Vec(&self->target, &shortcut);
                    self->flags &= ~2;
                }
            } else {
                VecCopy__FP3VecPC3Vec(&self->target, &shortcut);
            }
        } else if (self->flags & 2) {
            Vec_801501A0 d2;
            actor = self->view->actor;
            d2.x = self->target.x - actor->pos.x;
            d2.y = TNpcPlayer__data_805DB1F0;
            d2.z = self->target.z - actor->pos.z;
            if (LEN_801501A0(&d2) <= TNpcPlayer__data_805DB20C) {
                Vec_801501A0 clipped2;
                if (partner_clip_path_point(self, &self->view->actor->anchor, &route, &clipped2) != 0) {
                    VecCopy__FP3VecPC3Vec(&self->target, &clipped2);
                } else {
                    VecCopy__FP3VecPC3Vec(&self->target, &route);
                }
                self->flags &= ~2;
                self->s90 = 0;
            }
            self->s90++;
            if (self->s90 >= 100) {
                self->s90 = 100;
            }
        } else {
            Vec_801501A0 d3;
            self->s90 = 0;
            actor = self->view->actor;
            d3.x = self->target.x - actor->pos.x;
            d3.y = TNpcPlayer__data_805DB1F0;
            d3.z = self->target.z - actor->pos.z;
            self->target.x = self->wp.x;
            self->target.y = self->wp.y;
            self->target.z = self->wp.z;
            if (LEN_801501A0(&d3) < TNpcPlayer__data_805DB23C) {
                self->s90 = 0;
                self->target.x = lbl_805DB238 * self->dir.x + self->wp.x;
                self->target.y = lbl_805DB238 * self->dir.y + self->wp.y;
                self->target.z = lbl_805DB238 * self->dir.z + self->wp.z;
                self->flags |= 2;
                self->flags &= ~1;
            }
        }
        return;
    }
    if (get_action_state__10TNpcPlayerFPv(self->view) & 0x20) {
        if (route_around_object__10TNpcPlayerFv(self, &route) != 0 && self->s8c < 30) {
            VecCopy__FP3VecPC3Vec(&self->target, &route);
        } else {
            if (self->s8d > 15) {
                self->s8c = 0;
            }
            VecCopy__FP3VecPC3Vec(&self->target, &midpoint);
        }
    } else if (get_action_state__10TNpcPlayerFPv(self->view) & 0x80) {
        VecCopy__FP3VecPC3Vec(&self->target, &midpoint);
    } else if (self->s8c >= 15 && self->s8c < 30) {
        Vec_801501A0 d4;
        Vec_801501A0 detour;
        View_801501A0 *view = self->view;
        actor = view->actor;
        d4.x = actor->pos.x - view->v9c.x;
        d4.y = actor->pos.y - view->v9c.y;
        d4.z = actor->pos.z - view->v9c.z;
        partner_compute_stalled_detour(self, &actor->pos, &self->dest, &d4, &detour);
        VecCopy__FP3VecPC3Vec(&self->target, &detour);
    } else {
        if (self->s8d > 15) {
            self->s8c = 0;
        }
        VecCopy__FP3VecPC3Vec(&self->target, &midpoint);
    }
    self->flags &= ~1;
    self->s90 = 0;
}
#undef LEN_801501A0
#pragma pop

#pragma push
#pragma fp_contract on
void partner_observe_surroundings(u8 *arg0) {
    f32 temp_f3;
    s32 temp_r3_2;
    s32 temp_r5;
    u8 *temp_r3;
    u8 *temp_r3_3;
    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x74), s32 *, 0x94);
    M2C_FIELD(arg0, f32 *, 0x58) = horizontal_distance_squared((void *) (temp_r5 + 0x38), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), s32 *, 0x94) + 0x38), (int) (temp_r5));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x84) != 0) {
        try_update_target_flag__10TNpcPlayerFPvi((void *) (M2C_FIELD(arg0, u8 **, 0x78)), (void *) (get_npc_type__10TNpcPlayerFPv((void *) (M2C_FIELD(arg0, u8 **, 0x74)))), (f32) (M2C_FIELD(arg0, f32 *, 0x38)));
    } else {
        check_and_set_reached__10TNpcPlayerFPv((s32)((void *) (M2C_FIELD(arg0, u8 **, 0x78))), (f32) (M2C_FIELD(arg0, f32 *, 0x38)));
    }
    partner_view_update_conditions((s32)((void *) (M2C_FIELD(arg0, u8 **, 0x78))));
    temp_f3 = M2C_FIELD(arg0, f32 *, 0xDC);
    temp_r3 = (u8 *)(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), void **, 0x94));
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), s32 *, 0x98) = (s32) (lbl_8043FFD8 * get_ad_end_text_start__10TObjPlayerFv((int) (temp_r3), (f32) (temp_f3 - M2C_FIELD(temp_r3, f32 *, 0x38)), (f32) (M2C_FIELD(arg0, f32 *, 0xE4) - M2C_FIELD(temp_r3, f32 *, 0x40)), (f32) (temp_f3)));
    partner_probe_obstacles((void *) (M2C_FIELD(arg0, u8 **, 0x78)));
    if (partner_view_update_hp_change((void *) (M2C_FIELD(arg0, u8 **, 0x78))) != 0) {
        if (get_condition__10TNpcPlayerFPv((s32)((void *) (M2C_FIELD(arg0, u8 **, 0x78)))) & 0x40) {
            request_chatter__10TNpcPlayerFPvUi((void *)((void *) (arg0)), (M2C_UNK)((int) (0xE)));
        } else if (get_condition__10TNpcPlayerFPv((s32)((void *) (M2C_FIELD(arg0, u8 **, 0x78)))) & 0x80) {
            request_chatter__10TNpcPlayerFPvUi((void *)((void *) (arg0)), (M2C_UNK)((int) (0xF)));
        } else if (get_condition__10TNpcPlayerFPv((s32)((void *) (M2C_FIELD(arg0, u8 **, 0x78)))) & 0x200) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 8U) {
                temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x80);
                if (temp_r3_2 & 0x10000) {
                    M2C_FIELD(arg0, s32 *, 0x80) = (s32) (temp_r3_2 & 0xFFFEFFFF);
                } else {
                    request_chatter__10TNpcPlayerFPvUi((void *)((void *) (arg0)), (M2C_UNK)((int) (0x11)));
                }
            }
        } else {
            request_chatter__10TNpcPlayerFPvUi((void *)((void *) (arg0)), (M2C_UNK)((int) (0x10)));
        }
    }
    if (((s32)partner_view_check_moved((s32)((void *) (M2C_FIELD(arg0, u8 **, 0x78))))) == 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) == 1U) {
            if (get_action_state__10TNpcPlayerFPv((void *) (M2C_FIELD(arg0, u8 **, 0x78))) & 0x80) {
                M2C_FIELD(arg0, u8 *, 0x8C) = 0U;
                M2C_FIELD(arg0, u8 *, 0x8D) = 0U;
                return;
            }
            M2C_FIELD(arg0, u8 *, 0x8D) = (u8) (M2C_FIELD(arg0, u8 *, 0x8D) + 1);
            if ((s8) M2C_FIELD(arg0, u8 *, 0x8D) > 0x1E) {
                M2C_FIELD(arg0, u8 *, 0x8D) = 0x1EU;
            }
            M2C_FIELD(arg0, u8 *, 0x8C) = (u8) (M2C_FIELD(arg0, u8 *, 0x8C) + 1);
        }
    } else {
        temp_r3_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x78));
        VecCopy__FP3VecPC3Vec((void *) (temp_r3_3 + 0x9C), (void *) (M2C_FIELD(temp_r3_3, u8 **, 0x94) + 0x44));
        M2C_FIELD(arg0, u8 *, 0x8C) = 0U;
        M2C_FIELD(arg0, u8 *, 0x8D) = 0U;
    }
}
#pragma pop

void update_condition_flags__10TNpcPlayerFPv(u8 *arg0) {
    partner_view_check_moved(M2C_FIELD(arg0, s32 *, 0x74));
    partner_view_update_conditions(M2C_FIELD(arg0, s32 *, 0x74));
    if (get_condition__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x74)) & 2) {
        if (get_partner_counter(arg0 + 0x5C, 0xA) == 0) {
            request_chatter__10TNpcPlayerFPvUi(arg0, 9);
        }
        increment_partner_counter(arg0 + 0x5C, 0xA);
    } else {
        reset_partner_counter(arg0 + 0x5C, 0xA);
    }
    if (check_and_set_reached__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x74), lbl_805DB240) != 0) {
        if (get_condition__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x74)) & 8) {
            if (get_partner_counter(arg0 + 0x5C, 9) == 0) {
                request_chatter__10TNpcPlayerFPvUi(arg0, 0xC);
            }
            increment_partner_counter(arg0 + 0x5C, 8);
            npc_counter_reset_if_reached(arg0 + 0x5C, 9, 0x2BC);
            return;
        }
        reset_partner_counter(arg0 + 0x5C, 9);
    }
}

void init_state__10TNpcPlayerFPv(void *arg0) {
    s32 temp_r0;

    reset_fields_8c__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x74));
    reset_fields_8c__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x78));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x28);
    switch (temp_r0) {
    case 0:
        TNpcPlayer__sub_80150050((Npc_80150050 *)(arg0));
        M2C_FIELD(arg0, s32 *, 0x28) = 1;
    case 1:
        return;
    }
}
void request_technique_cast__10TNpcPlayerFPvi(Npc_80150A34 *self, s32 kind) {
    Msg_80150A34 m;
    u8 *actor;

    TNpcPlayer__sub_80152D04(&m);
    actor = self->p78->actor;
    if (kind == 15 || kind == 16) {
        request_chatter__10TNpcPlayerFPvUi(self, 0x16);
    } else if (kind == 0 || kind == 3 || kind == 6) {
        request_chatter__10TNpcPlayerFPvUi(self, 0x17);
    } else {
        request_chatter__10TNpcPlayerFPvUi(self, 2);
    }
    if (try_camera_action__10TObjPlayerFii(actor, kind) != 0) {
        m.type = get_npc_type__10TNpcPlayerFPv(self->p78);
        m.kind = kind;
        m.one = 1;
        if (kind == 15 || kind == 16) {
            if (kind == 15) {
                self->flags |= 0x10000;
            }
            m.e = get_cast_technique_level(actor + 0x428, kind);
            set_type__10TNpcPlayerFPvs(m.sub, ((s32 (*)(void *))get_npc_type__10TNpcPlayerFPv)(self->p74));
            set_state__10TNpcPlayerFPvs(m.sub, 0);
        } else {
            m.e = get_cast_technique_level(actor + 0x428, kind);
            set_type__10TNpcPlayerFPvs(m.sub, ((s32 (*)(void *))get_npc_state__10TNpcPlayerFPv)(self->p78));
            set_state__10TNpcPlayerFPvs(m.sub, TNpcPlayer__sub_801528DC(self->p78));
        }
        TNpcPlayer__sub_80152C48(&m);
    }
}

#define TNpcPlayer__data_805DB218 (*(const f32 *)&TNpcPlayer__data_805DB218)
#define TNpcPlayer__data_805DB22C (*(const f32 *)&TNpcPlayer__data_805DB22C)
void update_combat_action__10TNpcPlayerFv(Npc_80150B90 *self) {
    static const s32 tbl_80150B90[3][2] = {{0, 1}, {3, 4}, {6, 8}};
    s32 tier;
    s32 alt;
    s32 id;
    Tec_80150B90 *tec;
    u32 fl;
    f32 diff;
    f32 mx;

    if (TNpcPlayer__sub_80152978(self->f78) == 0xFFFF) {
        return;
    }
    if (can_perform_physical_action__10TObjPlayerFi(self->f78->obj) == 0) {
        return;
    }
    if (!(self->f34 & 0x40) && !(get_condition__10TNpcPlayerFPv((s32)self->f78) & 0x10)) {
        fl = self->f34;
        if (fl & 4) {
            tier = 0;
        } else if (fl & 8) {
            tier = 1;
        } else if (fl & 0x10) {
            tier = 2;
        } else {
            tier = 0;
        }
        if ((self->f80 & 0x2000) && (get_condition__10TNpcPlayerFPv((s32)self->f78) & 0x1000)) {
            alt = 1;
        } else {
            alt = 0;
        }
        if (alt == 0) {
            if (get_random_float__8TObjFishFv(TNpcPlayer__data_805DB1F4 * (lbl_805DB244 * (f32)rand())) >
                TNpcPlayer__data_805DB22C * (f32)self->f53) {
                partner_request_physical_attack(self);
                return;
            }
        }
        id = tbl_80150B90[tier][alt];
        tec = calc_technique_parameters(id, self->f50, 0xFFFF);
        diff = (f32)(obj_getS16_32E(self->f78->obj) - tec->f10);
        mx = (f32)obj_getS16_2BA(self->f78->obj);
        if (diff / mx <= TNpcPlayer__data_805DB218 && TNpcPlayer__data_805DB1F0 != mx) {
            request_chatter__10TNpcPlayerFPvUi(self, 3);
        }
        self->f80 &= ~0x2000;
        if (try_camera_action__10TObjPlayerFii(self->f78->obj, id) != 0) {
            TNpcPlayer__sub_8014DC3C(self, id);
            return;
        }
    }
    partner_request_physical_attack(self);
}
#undef TNpcPlayer__data_805DB218
#undef TNpcPlayer__data_805DB22C

void send_run_request__10TNpcPlayerFPv(Npc_80150DE8 *self) {
    Msg_80150DE8 m;
    reset_move_state__10TNpcPlayerFPv(&m);
    if (self->owner != 0) {
        m.type = get_npc_type__10TNpcPlayerFPv(self->owner);
        m.x = self->x;
        m.z = self->z;
        reset_model__10TNpcPlayerFPv(&m);
    }
}

void send_walk_request__10TNpcPlayerFPv(Npc_80150E44 *self) {
    Msg_80150E44 m;
    TNpcPlayer__sub_80152E74(&m);
    if (self->owner != 0) {
        m.type = get_npc_type__10TNpcPlayerFPv(self->owner);
        m.x = self->x;
        m.z = self->z;
        m.flags = 0;
        if (self->owner->obj->flags & 0x100000) {
            m.flags |= 8;
        }
        sync_from_lobby__10TNpcPlayerFPv(&m);
    }
}

s32 select_recovery_action__10TNpcPlayerFv(Npc_801510F8 *self, s32 arg1) {
    u8 flags = 0;
    Tgt_801510F8 *tgt;
    u8 *ent;
    if (get_action_state__10TNpcPlayerFPv(self->f78) & 4) {
        flags |= 1;
    }
    if (arg1 != 0 && (get_action_state__10TNpcPlayerFPv(self->f74) & 4) && self->f84 == 0) {
        flags |= 2;
    }
    tgt = ((Tgt_801510F8 *)TNpcPlayer__sub_80152A30(self->f78));
    if (arg1 != 0 && tgt->a != 0 && (flags & 2)) {
        increment_partner_counter(self->counters, 5);
        if (npc_counter_reset_if_reached(self->counters, 5, 0x1E) != 0) {
            ent = find_active_entity_by_id((u16)tgt->b);
            self->f80 &= ~0x8000;
            if (ent != NULL) {
                if (((f32 (*)(void *, void *))horizontal_distance_squared)(ent + 0x38, self->f78->obj + 0x38) < self->f48 * self->f48) {
                    VecCopy__FP3VecPC3Vec(self->dst, ent + 0x38);
                    self->f80 |= 0x8080;
                    return 1;
                }
            }
        }
    }
    if (flags == 3) {
        self->f80 |= 0x200;
        if (get_condition__10TNpcPlayerFPv((s32)self->f78) & 2) {
            if (try_attack__10TNpcPlayerFPvii(self->f78, 2, 1) != 0) {
                if (get_condition__10TNpcPlayerFPv((s32)self->f78) & 0x20) {
                    self->f92 = 2;
                    return 1;
                }
                if (!(self->f34 & 0x40)) {
                    self->f92 = 2;
                    return 1;
                }
            }
        } else if (get_condition__10TNpcPlayerFPv((s32)self->f78) & 8) {
            if (try_attack__10TNpcPlayerFPvii(self->f78, 0, 1) != 0) {
                if (get_condition__10TNpcPlayerFPv((s32)self->f78) & 0x20) {
                    self->f92 = 0;
                    return 1;
                }
                if (!(self->f34 & 0x40)) {
                    self->f92 = 0;
                    return 1;
                }
            } else {
                if (get_partner_counter(self->counters, 8) == 0) {
                    request_chatter__10TNpcPlayerFPvUi(self, 0x14);
                }
                increment_partner_counter(self->counters, 8);
                npc_counter_reset_if_reached(self->counters, 8, 0x5DC);
            }
        } else if (get_condition__10TNpcPlayerFPv((s32)self->f78) & 0x10) {
            if (try_attack__10TNpcPlayerFPvii(self->f78, 1, 1) != 0) {
                self->f92 = 1;
                return 1;
            }
        } else {
            flags = 2;
        }
    }
    if (flags == 2) {
        if (get_action_state__10TNpcPlayerFPv(self->f78) & 2) {
            return 0;
        }
        VecCopy__FP3VecPC3Vec(self->dst, self->f74->obj + 0x2FC);
        self->f80 |= 0x20;
        if (get_condition__10TNpcPlayerFPv((s32)self->f74) & 2) {
            if (try_attack__10TNpcPlayerFPvii(self->f78, 2, 0) != 0) {
                if (get_condition__10TNpcPlayerFPv((s32)self->f78) & 0x20) {
                    self->f92 = 2;
                    return 1;
                }
                if (!(self->f34 & 0x40)) {
                    self->f92 = 2;
                    return 1;
                }
            }
        } else if (get_condition__10TNpcPlayerFPv((s32)self->f74) & 0x800) {
            if (try_attack__10TNpcPlayerFPvii(self->f78, 0, 0) != 0) {
                if (get_condition__10TNpcPlayerFPv((s32)self->f78) & 0x20) {
                    self->f92 = 0;
                    return 1;
                }
                if (!(self->f34 & 0x40)) {
                    self->f92 = 0;
                    return 1;
                }
            }
        }
    }
    if (flags == 1) {
        self->f80 |= 0x200;
        if (get_condition__10TNpcPlayerFPv((s32)self->f78) & 2) {
            if (try_attack__10TNpcPlayerFPvii(self->f78, 2, 1) != 0) {
                if (get_condition__10TNpcPlayerFPv((s32)self->f78) & 0x20) {
                    self->f92 = 2;
                    return 1;
                }
                if (!(self->f34 & 0x40)) {
                    self->f92 = 2;
                    return 1;
                }
            }
        } else if (get_condition__10TNpcPlayerFPv((s32)self->f78) & 8) {
            if (try_attack__10TNpcPlayerFPvii(self->f78, 0, 1) != 0) {
                if (get_condition__10TNpcPlayerFPv((s32)self->f78) & 0x20) {
                    self->f92 = 0;
                    return 1;
                }
                if (!(self->f34 & 0x40)) {
                    self->f92 = 0;
                    return 1;
                }
            } else {
                if (get_partner_counter(self->counters, 8) == 0) {
                    request_chatter__10TNpcPlayerFPvUi(self, 0x14);
                }
                increment_partner_counter(self->counters, 8);
                npc_counter_reset_if_reached(self->counters, 8, 0x5DC);
            }
        } else if (get_condition__10TNpcPlayerFPv((s32)self->f78) & 0x10) {
            if (try_attack__10TNpcPlayerFPvii(self->f78, 1, 1) != 0) {
                self->f92 = 1;
                return 1;
            }
        }
    }
    return 0;
}

#pragma push
#pragma fp_contract on
s32 calc_follow_goal__10TNpcPlayerFPv(u8 *arg0) {
    Stack_801515E0 stack;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    u8 *temp_r4;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x84) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x34) & 0x80) {
            temp_f0 = M2C_FIELD(arg0, f32 *, 0x54);
            if (M2C_FIELD(arg0, f32 *, 0x88) <= (temp_f0 * temp_f0)) {
                temp_r4 = (u8 *)(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), void **, 0x94));
                stack.sp8 = M2C_FIELD(arg0, f32 *, 0xDC) - M2C_FIELD(temp_r4, f32 *, 0x38);
                temp_f2 = M2C_FIELD(arg0, f32 *, 0xE4);
                temp_f1 = temp_f2 - M2C_FIELD(temp_r4, f32 *, 0x40);
                stack.spC = TNpcPlayer__data_805DB1F0;
                stack.sp10 = temp_f1;
                if (TNpcPlayer__data_805DB1F0 != vector_length((void *) (&stack.sp8), (int) (temp_r4), (f32) (temp_f1), (f32) (temp_f2))) {
                    normalize_vector((void *) (&stack.sp8));
                }
                M2C_FIELD(arg0, f32 *, 0xDC) = (f32) -((M2C_FIELD(arg0, f32 *, 0x54) * stack.sp8) - M2C_FIELD(arg0, f32 *, 0xDC));
                M2C_FIELD(arg0, f32 *, 0xE4) = (f32) -((M2C_FIELD(arg0, f32 *, 0x54) * stack.sp10) - M2C_FIELD(arg0, f32 *, 0xE4));
                M2C_FIELD(arg0, f32 *, 0xE0) = (f32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), void **, 0x94), f32 *, 0x300);
            } else {
                VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xDC), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x74), s32 *, 0x94) + 0x2FC));
            }
        } else {
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xDC), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x74), s32 *, 0x94) + 0x2FC));
        }
    } else {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xDC), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x74), s32 *, 0x94) + 0x2FC));
    }
    return 1;
}
#pragma pop

s32 choose_attack_target__10TNpcPlayerFPv(Npc_80151708 *self) {
    s32 i;
    View_80151708 *view;
    Pos_80151708 *tgt;
    view = (View_80151708 *)TNpcPlayer__sub_80152A30(self->f78);
    if (view->count >= 3) {
        self->f80 |= 0x2000;
        increment_partner_counter(self->f5C, 6);
        if (npc_counter_reset_if_reached(self->f5C, 6, 100) != 0) {
            if (get_condition__10TNpcPlayerFPv((s32)self->f78) & 8) {
                request_chatter__10TNpcPlayerFPvUi(self, 1);
            } else {
                request_chatter__10TNpcPlayerFPvUi(self, 0);
            }
        }
    } else {
        self->f80 &= ~0x2000;
    }
    if (view->count != 0) {
        for (i = 0; i < view->count; i++) {
            if (is_target_line_clear__10TNpcPlayerFPvUs(self->f78, view->c[i].id) != 0) {
                tgt = (Pos_80151708 *)find_active_entity_by_id((u16)view->c[0].id);
                TNpcPlayer__sub_80152A34(self->f78, view->c[i].id, view->c[i].idx);
                self->dst[0] = tgt->x;
                self->dst[1] = self->f78->obj->f300;
                self->dst[2] = tgt->z;
                if (((f32 (*)(void *, void *))horizontal_distance_squared)(self->dst, self->f78->obj->pos) < (TNpcPlayer__data_805DB1F4 + self->f4C) * (TNpcPlayer__data_805DB1F4 + self->f4C)) {
                    self->f80 |= 0x1000;
                }
                self->f80 &= ~0x40;
                return 1;
            }
        }
        request_chatter__10TNpcPlayerFPvUi(self, 8);
        self->f80 |= 0x40;
    }
    return 0;
}

s32 check_return_to_leader__10TNpcPlayerFPv(Npc_801518A4 *arg0) {
    Tgt_801518A4 *t;
    u8 *o;
    f32 r2;

    t = TNpcPlayer__sub_80152A30(arg0->p78);
    r2 = arg0->f44 * arg0->f44;
    if (get_action_state__10TNpcPlayerFPv(arg0->p74) & 2) {
        arg0->flags &= ~0x100;
        return 0;
    }
    if (get_condition__10TNpcPlayerFPv((s32)arg0->p78) & 8) {
        arg0->flags |= 0x100;
        return 1;
    }
    if (arg0->f58 >= r2) {
        arg0->flags |= 0x100;
        if (t->a != 0) {
            increment_partner_counter(arg0->a5C, 5);
            if (npc_counter_reset_if_reached(arg0->a5C, 5, 3) != 0) {
                o = find_active_entity_by_id((u16)t->b);
                arg0->flags &= ~0x8000;
                if (o != 0) {
                    if (((f32 (*)(void *, void *))horizontal_distance_squared)(o + 0x38, *(u8 **)(arg0->p78 + 0x94) + 0x38) < arg0->f48 * arg0->f48) {
                        arg0->flags |= 0x8080;
                    }
                }
            }
        }
        return 1;
    }
    if (arg0->flags & 0x100) {
        return 1;
    }
    arg0->flags &= ~0x100;
    return 0;
}
#undef reset_partner_counter
#undef increment_partner_counter
#undef partner_view_update_conditions
#undef partner_view_check_moved
#undef check_and_set_reached__10TNpcPlayerFPv
#undef try_update_target_flag__10TNpcPlayerFPvi

#define needs_movement__10TNpcPlayerFPvPvi() ((s32 (*)())needs_movement__10TNpcPlayerFPvPvi)()
#define select_path_waypoint__10TNpcPlayerFv(a) ((M2C_UNK (*)(void *))select_path_waypoint__10TNpcPlayerFv)(a)
#define check_movement_progress__10TNpcPlayerFPv(a) ((s32 (*)(void *))check_movement_progress__10TNpcPlayerFPv)(a)
#define partner_observe_surroundings(a) ((M2C_UNK (*)(void *))partner_observe_surroundings)(a)
#define update_condition_flags__10TNpcPlayerFPv(a) ((M2C_UNK (*)(void *))update_condition_flags__10TNpcPlayerFPv)(a)
#define init_state__10TNpcPlayerFPv(a) ((M2C_UNK (*)(void *))init_state__10TNpcPlayerFPv)(a)
#define get_player_by_client_id(a) ((u32 (*)(int))get_player_by_client_id)(a)
#define TNpcPlayer__sub_8014F844(a, b) ((void *(*)(void *, u16))TNpcPlayer__sub_8014F844)(a, b)

s32 update_follow_target__10TNpcPlayerFPv(u8 *arg0) {
    if (needs_movement__10TNpcPlayerFPvPvi() != 0) {
        select_path_waypoint__10TNpcPlayerFv((void *) (arg0));
        if (check_movement_progress__10TNpcPlayerFPv((void *) (arg0)) != 0) {
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xAC), (void *) (arg0 + 0xD0));
            if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 2U) {
                change_ai_state__10TNpcPlayerFPvUi((void *) (arg0), (int) (1));
            }
        } else {
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xAC), (void *) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s32 *, 0x94) + 0x38));
        }
        return 1;
    }
    if ((M2C_FIELD(arg0, s32 *, 0x80) & 0x20) && ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 8U)) {
        change_ai_state__10TNpcPlayerFPvUi((void *) (arg0), (int) (0));
    }
    return 0;
}

struct Npc_801510F8; struct Npc_80151708; struct Npc_801518A4;
void decide_action__10TNpcPlayerFv(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f31;
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    if ((get_global_state__14TOKeyMachine01Fv() == 0) || (get_global_state__14TOKeyMachine01Fv() == 0x12)) {
        calc_follow_goal__10TNpcPlayerFPv(arg0);
        change_ai_state__10TNpcPlayerFPvUi((void *) (arg0), (int) (1));
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        if (get_action_state__10TNpcPlayerFPv((void *) (M2C_FIELD(arg0, u8 **, 0x78))) & 2) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 1;
            change_ai_state__10TNpcPlayerFPvUi((void *) (arg0), (int) (0));
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) & 0xFFFFFEFF);
        if (select_recovery_action__10TNpcPlayerFv((Npc_801510F8 *) (arg0), (int) (1)) != 0) {
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x80);
            if (temp_r3 & 0x200) {
                request_chatter__10TNpcPlayerFPvUi((void *) (arg0), (int) (0x13));
                change_ai_state__10TNpcPlayerFPvUi((void *) (arg0), (int) (8));
                return;
            }
            M2C_FIELD(arg0, s32 *, 0x80) = (s32) (temp_r3 & 0xFFFFFDFF);
            if (((f32 (*)(void *, void *))horizontal_distance_squared)((void *) (arg0 + 0xDC), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), s32 *, 0x94) + 0x38)) < lbl_805DB248) {
                change_ai_state__10TNpcPlayerFPvUi((void *) (arg0), (int) (8));
                return;
            }
            calc_follow_goal__10TNpcPlayerFPv(arg0);
            change_ai_state__10TNpcPlayerFPvUi((void *) (arg0), (int) (1));
            return;
        }
        calc_follow_goal__10TNpcPlayerFPv(arg0);
        change_ai_state__10TNpcPlayerFPvUi((void *) (arg0), (int) (1));
        M2C_FIELD(arg0, s16 *, 0x8E) = 0;
        return;
    case 1:
        var_f31 = TNpcPlayer__data_805DB23C;
        if (M2C_FIELD(arg0, s32 *, 0x80) & 0x8000) {
            var_f31 = lbl_805DB24C;
        }
        if ((can_perform_physical_action__10TObjPlayerFi((void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), s32 *, 0x94))) != 0) && (M2C_FIELD(arg0, s16 *, 0x8E) == 0)) {
            temp_f1 = get_random_float__8TObjFishFv(TNpcPlayer__data_805DB1F4 * (lbl_805DB244 * (f32) rand()));
            temp_f0 = TNpcPlayer__data_805DB22C * (f32) M2C_FIELD(arg0, u8 *, 0x52);
            temp_f0 *= var_f31;
            if (temp_f1 < temp_f0) {
                M2C_FIELD(arg0, s16 *, 0x8E) = 0;
            } else {
                M2C_FIELD(arg0, s16 *, 0x8E) = (s16) (TNpcPlayer__data_805DB1F4 * (temp_f1 - temp_f0));
            }
        }
        M2C_FIELD(arg0, s16 *, 0x8E) = (s16) (M2C_FIELD(arg0, s16 *, 0x8E) - 1);
        if (M2C_FIELD(arg0, s16 *, 0x8E) < 0) {
            M2C_FIELD(arg0, s16 *, 0x8E) = 0;
        }
        if ((check_return_to_leader__10TNpcPlayerFPv((Npc_801518A4 *) (arg0)) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x84) == 0)) {
            if (select_recovery_action__10TNpcPlayerFv((Npc_801510F8 *) (arg0), (int) (0)) != 0) {
                request_chatter__10TNpcPlayerFPvUi((void *) (arg0), (int) (0x13));
                change_ai_state__10TNpcPlayerFPvUi((void *) (arg0), (int) (8));
                M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) & 0xFFFFFF7F);
            } else {
                temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x80);
                if (temp_r3_2 & 0x80) {
                    M2C_FIELD(arg0, s32 *, 0x80) = (s32) (temp_r3_2 & 0xFFFFFF7F);
                    if (M2C_FIELD(arg0, s16 *, 0x8E) == 0) {
                        change_ai_state__10TNpcPlayerFPvUi((void *) (arg0), (int) (2));
                    }
                } else {
                    calc_follow_goal__10TNpcPlayerFPv(arg0);
                    change_ai_state__10TNpcPlayerFPvUi((void *) (arg0), (int) (1));
                }
            }
        } else if (select_recovery_action__10TNpcPlayerFv((Npc_801510F8 *) (arg0), (int) (1)) != 0) {
            ((M2C_UNK (*)(void *, int))reset_partner_counter)((void *) (arg0 + 0x5C), (int) (8));
            temp_r3_3 = M2C_FIELD(arg0, s32 *, 0x80);
            if (temp_r3_3 & 0x200) {
                request_chatter__10TNpcPlayerFPvUi((void *) (arg0), (int) (0x13));
                change_ai_state__10TNpcPlayerFPvUi((void *) (arg0), (int) (8));
            } else if (temp_r3_3 & 0x80) {
                M2C_FIELD(arg0, s32 *, 0x80) = (s32) (temp_r3_3 & ~0x280);
                if (M2C_FIELD(arg0, s16 *, 0x8E) == 0) {
                    change_ai_state__10TNpcPlayerFPvUi((void *) (arg0), (int) (2));
                }
            } else {
                M2C_FIELD(arg0, s32 *, 0x80) = (s32) (temp_r3_3 & 0xFFFFFDFF);
                if (((f32 (*)(void *, void *))horizontal_distance_squared)((void *) (arg0 + 0xDC), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), s32 *, 0x94) + 0x38)) < lbl_805DB248) {
                    change_ai_state__10TNpcPlayerFPvUi((void *) (arg0), (int) (8));
                } else if ((s32) M2C_FIELD(arg0, s32 *, 0x84) != 0) {
                    if (M2C_FIELD(arg0, s16 *, 0x8E) == 0) {
                        change_ai_state__10TNpcPlayerFPvUi((void *) (arg0), (int) (2));
                    }
                } else {
                    calc_follow_goal__10TNpcPlayerFPv(arg0);
                    change_ai_state__10TNpcPlayerFPvUi((void *) (arg0), (int) (1));
                }
            }
        } else if ((choose_attack_target__10TNpcPlayerFPv((Npc_80151708 *) (arg0)) != 0) && (M2C_FIELD(arg0, s16 *, 0x8E) == 0)) {
            if (M2C_FIELD(arg0, s32 *, 0x80) & 0x1000) {
                change_ai_state__10TNpcPlayerFPvUi((void *) (arg0), (int) (2));
                M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) & 0xFFFFEFFF);
            } else {
                change_ai_state__10TNpcPlayerFPvUi((void *) (arg0), (int) (1));
            }
            M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) & 0xFFFFEFFF);
        } else {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x84) != 0) {
                calc_follow_goal__10TNpcPlayerFPv(arg0);
            } else {
                VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xDC), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), s32 *, 0x94) + 0x38));
            }
            change_ai_state__10TNpcPlayerFPvUi((void *) (arg0), (int) (1));
        }
        if (!(get_action_state__10TNpcPlayerFPv((void *) (M2C_FIELD(arg0, u8 **, 0x78))) & 2)) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        }
        return;
    }
}

void run_task__10TNpcPlayerFv(u8 *arg0) {
    u8 *owner;
    owner = M2C_FIELD(arg0, u8 **, 0x74);
    if (owner == NULL || (void *) M2C_FIELD(arg0, u8 **, 0x78) == NULL) {
        return;
    }
    {
        {
        if (refresh_npc_view_actor_lost((void *) (owner)) != 0) {
            queue_destruction__7TObjectFv((void *) (arg0));
            return;
        }
        if (refresh_npc_view_actor_lost((void *) (M2C_FIELD(arg0, u8 **, 0x78))) != 0) {
            queue_destruction__7TObjectFv((void *) (arg0));
            return;
        }
        if ((is_inactive__10TObjPlayerFPv((void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), void **, 0x94))) != 0) && (((void *) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), void **, 0x94) == NULL) || (get_action_flags__10TNpcPlayerFPv((void *) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), void **, 0x94)) != 0xFFFF))) {
            init_state__10TNpcPlayerFPv((void *) (arg0));
            if (!(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x74), void **, 0x94), s32 *, 0x30) & 0x800)) {
                if (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), void **, 0x94), s32 *, 0x30) & 0x800) {
                    if (clamp_partner_counter((void *) (arg0 + 0x5C), (int) (3), (int) (0x400)) != 0) {
                        request_chatter__10TNpcPlayerFPvUi((void *) (arg0), (int) (5));
                    } else if (is_partner_counter_reached((void *) (arg0 + 0x5C), (int) (3), (int) (0)) != 0) {
                        request_chatter__10TNpcPlayerFPvUi((void *) (arg0), (int) (4));
                    }
                    increment_partner_counter((s32) (arg0 + 0x5C), 3);
                    change_ai_state__10TNpcPlayerFPvUi((void *) (arg0), (int) (0));
                } else {
                    reset_partner_counter((s32) (arg0 + 0x5C), 3);
                    update_condition_flags__10TNpcPlayerFPv((void *) (arg0));
                    partner_observe_surroundings((void *) (arg0));
                    decide_action__10TNpcPlayerFv((u8 *)((void *) (arg0)));
                    update_follow_target__10TNpcPlayerFPv(arg0);
                }
                deliver_partner_action__10TNpcPlayerFv((void *) (arg0));
            }
        }
        }
    }
}

u8 *__dt__10TNpcPlayerFv(u8 *arg0, s16 arg1) {
    u32 temp_r3_3;
    u8 *temp_r3;
    u8 *temp_r3_2;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__10TNpcPlayer.value;
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x74));
        if (temp_r3 != NULL) {
            dt__10TNpcPlayerFPvs(temp_r3, 1);
            M2C_FIELD(arg0, u8 **, 0x74) = NULL;
        }
        temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x78));
        if (temp_r3_2 != NULL) {
            temp_r3_3 = get_player_by_client_id((int) (get_npc_type__10TNpcPlayerFPv((void*)(temp_r3_2))));
            if (temp_r3_3 != 0U) {
                send_item_pickup_request__10TObjPlayerFi((s32) temp_r3_3);
            }
            dt__10TNpcPlayerFPvs(M2C_FIELD(arg0, u8 **, 0x78), 1);
            M2C_FIELD(arg0, u8 **, 0x78) = NULL;
        }
        __dt__7TObjectFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

Npc_80152168 *TNpcPlayer__ct(Npc_80152168 *self, s32 a, s32 b, s16 kind, s32 arg4, void *parent) {
    void *p;

    __ct__7TObjectFP7TObject(self, parent);
    self->vt = &__vt__10TNpcPlayer.value;
    init__10TNpcPlayerFPv(self->f5C);
    self->f0 = lbl_805D2E74;
    self->f24 = 0x19;
    self->f1C = 0;
    self->f20 = 0;
    self->fAC = TNpcPlayer__data_805DB1F0;
    self->fB0 = TNpcPlayer__data_805DB1F0;
    self->fB4 = TNpcPlayer__data_805DB1F0;
    self->fD0 = TNpcPlayer__data_805DB1F0;
    self->fD4 = TNpcPlayer__data_805DB1F0;
    self->fD8 = TNpcPlayer__data_805DB1F0;
    self->fDC = TNpcPlayer__data_805DB1F0;
    self->fE0 = TNpcPlayer__data_805DB1F0;
    self->fE4 = TNpcPlayer__data_805DB1F0;
    self->fC4 = 0;
    self->fC8 = 0;
    self->fCC = 0;
    self->f2C = kind;
    self->f80 = 0;
    self->f7C = 0;
    self->f88 = TNpcPlayer__data_805DB1F0;
    self->f58 = TNpcPlayer__data_805DB1F0;
    self->f8C = 0;
    self->f8E = 0;
    self->f8D = 0;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x108);
    if (p != 0) {
        p = TNpcPlayer__sub_8014F844(p, a);
    }
    self->f74 = p;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x108);
    if (p != 0) {
        p = TNpcPlayer__sub_8014F844(p, b);
    }
    self->f78 = (Own_80152168 *)p;
    copy__10TNpcPlayerFPvPv(self->f30, TNpcPlayer__data_804ABC90[self->f2C]);
    if (self->f78 != 0 && self->f78->obj != 0) {
        VecCopy__FP3VecPC3Vec(&self->fDC, self->f78->obj + 0x38);
        init_equipment__10TNpcPlayerFPv(self);
    }
    self->f84 = arg4;
    return self;
}

void copy__10TNpcPlayerFPvPv(void* p, void* q) { *(u16*)((char*)p + 0x0) = *(u16*)((char*)q + 0x0); *(u16*)((char*)p + 0x2) = *(u16*)((char*)q + 0x2); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(f32*)((char*)p + 0x14) = *(f32*)((char*)q + 0x14); *(f32*)((char*)p + 0x18) = *(f32*)((char*)q + 0x18); *(f32*)((char*)p + 0x1c) = *(f32*)((char*)q + 0x1c); *(u8*)((char*)p + 0x20) = *(u8*)((char*)q + 0x20); *(u8*)((char*)p + 0x21) = *(u8*)((char*)q + 0x21); *(u8*)((char*)p + 0x22) = *(u8*)((char*)q + 0x22); *(u8*)((char*)p + 0x23) = *(u8*)((char*)q + 0x23); *(f32*)((char*)p + 0x24) = *(f32*)((char*)q + 0x24); }

Npc_80152330 *TNpcPlayer__sub_80152330(Npc_80152330 *self, s32 a, s32 b, s16 kind, void *parent) {
    void *p;

    __ct__7TObjectFP7TObject(self, parent);
    self->vt = &__vt__10TNpcPlayer.value;
    init__10TNpcPlayerFPv(self->f5C);
    self->f0 = lbl_805D2E74;
    self->f24 = 0x19;
    self->f1C = 0;
    self->f20 = 0;
    self->fAC = TNpcPlayer__data_805DB1F0;
    self->fB0 = TNpcPlayer__data_805DB1F0;
    self->fB4 = TNpcPlayer__data_805DB1F0;
    self->fD0 = TNpcPlayer__data_805DB1F0;
    self->fD4 = TNpcPlayer__data_805DB1F0;
    self->fD8 = TNpcPlayer__data_805DB1F0;
    self->fDC = TNpcPlayer__data_805DB1F0;
    self->fE0 = TNpcPlayer__data_805DB1F0;
    self->fE4 = TNpcPlayer__data_805DB1F0;
    self->fC4 = 0;
    self->fC8 = 0;
    self->fCC = 0;
    self->f2C = kind;
    self->f80 = 0;
    self->f7C = 0;
    self->f88 = TNpcPlayer__data_805DB1F0;
    self->f58 = TNpcPlayer__data_805DB1F0;
    self->f8C = 0;
    self->f8E = 0;
    self->f8D = 0;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x108);
    if (p != 0) {
        p = TNpcPlayer__sub_8014F844(p, a);
    }
    self->f74 = p;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x108);
    if (p != 0) {
        p = TNpcPlayer__sub_8014F844(p, b);
    }
    self->f78 = (Own_80152330 *)p;
    copy__10TNpcPlayerFPvPv(self->f30, TNpcPlayer__data_804ABC90[self->f2C]);
    if (self->f78 != 0 && self->f78->obj != 0) {
        VecCopy__FP3VecPC3Vec(&self->fDC, self->f78->obj + 0x38);
        init_equipment__10TNpcPlayerFPv(self);
    }
    self->f84 = 0;
    return self;
}

extern u32 lbl_805D5860;

void ensure_rock_singleton__10TNpcPlayerFv(void) {
    if ((u32) lbl_805D5860 == 0U) {
        lbl_805D5860 = alloc_buffer__11TOBoss4RockFPv(0x1400);
    }
}

void TNpcPlayer__sub_8015286C(void) {
    __register_global_object(__ct__12TPlyCharDataFv(lbl_8050CFC4), (void *)__dt__12TPlyCharDataFv, lbl_8050CFB8);
}

void set_technique_seed_level(Obj_801528A8 *self, s16 i, u8 v) {
    self->arr[i] = v;
}

void reset_partner_counter(s32 arg0, s32 arg1) {
    M2C_FIELD((arg0 + (arg1 * 2)), s16 *, 0) = 0;
}

void increment_partner_counter(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = arg1 * 2;
    M2C_FIELD((arg0 + temp_r5), s16 *, 0) = M2C_FIELD((arg0 + temp_r5), s16 *, 0) + 1;
}

s32 TNpcPlayer__sub_801528DC(void* p) { return *(s32*)((char*)p + 0x84); }
s32 get_npc_state__10TNpcPlayerFPv(void* p) { return *(s32*)((char*)p + 0x7c); }
u16 get_npc_type__10TNpcPlayerFPv(void* p) { return *(u16*)((char*)p + 0x8a); }
#undef needs_movement__10TNpcPlayerFPvPvi
#undef select_path_waypoint__10TNpcPlayerFv
#undef check_movement_progress__10TNpcPlayerFPv
#undef partner_observe_surroundings
#undef update_condition_flags__10TNpcPlayerFPv
#undef init_state__10TNpcPlayerFPv
#undef get_player_by_client_id
#undef TNpcPlayer__sub_8014F844

}
