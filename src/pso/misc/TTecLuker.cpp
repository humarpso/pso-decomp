#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct BaseM_80234C90_80233B38 { char pad[0x24]; };
struct VM_80234C90_80233B38 : BaseM_80234C90_80233B38 { virtual void m0(int); };

struct Stack_802340E4 {
    M2C_UNK sp8;
    u16 spC;
    s16 spE;
    s32 sp10;
    M2C_UNK sp14;
    u8 pad_18[0x8];
    s32 sp20;
};

struct RecoveredGlobal_80233B9C_lbl_804CC990 { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_80233B9C_lbl_804CC990_size[sizeof(RecoveredGlobal_80233B9C_lbl_804CC990) == 0x18 ? 1 : -1];

struct RecoveredGlobal_80233D18_lbl_804CC9A8 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80233D18_lbl_804CC9D4 {
    M2C_UNK value;
    u8 remaining[0x34];
};

#include "pso/effect/TechniqueChargeEmitter.h"

struct O_802340A0 { u16 h0; u16 h2; s32 w4; f32 f8; f32 fc; f32 f10; s32 w14; };

struct Vec_80233E78 { f32 x, y, z; };

struct Player_80233E78 { u8 pad[0x838]; Vec_80233E78 pipe_pos; s32 pipe_heading; u8 arrival[4]; };

struct Vec_8023402C { f32 x, y, z; };

struct Rec_8023402C { u16 owner; s16 floor; s32 section; Vec_8023402C pos; s32 heading; };

struct Vec_802347B4 { f32 x, y, z; };

struct Pipe_802347B4 {
    u8 pad[0x1c];
    u8 *player;
    u8 pad20[0xd0];
    void *collider;
    s16 floor;
    u16 traveller;
    void *visual;
    Vec_802347B4 pos;
    s32 phase;
};

struct Obj_8023448C {
    u8 pad0[0x18];
    void *vt;
    u32 kids[3];
    u32 f28;
};

struct Pkt_802341B0 { u8 hdr[4]; Rec_8023402C rec; };

struct Vec_80234D50 { f32 x, y, z; };

struct Owner_80234D50 {
    u8 pad0[0x38];
    Vec_80234D50 pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[0x838 - 0x64];
    Vec_80234D50 pipe_pos;
};

struct Luker_80234D50 {
    s32 f0;
    u8 pad4[0x18 - 0x4];
    void *vt;
    Owner_80234D50 *owner;
    u8 pad20[0xB4 - 0x20];
    u16 owner_id;
    u8 padb6[0xEC - 0xB6];
    void *fx;
    s32 fF0;
    s16 fF4;
    u16 fF6;
    s32 fF8;
    Vec_80234D50 pos;
    s32 f108;
    s32 f10C;
};

struct Vec_802342A4
{
  f32 x;
  f32 y;
  f32 z;
};

struct Obj_802342A4
{
  u8 pad0[0x18];
  void *vt;
  u32 kids[3];
  void *f28;
  Vec_802342A4 pos;
};

struct V3_8023453C
{
  f32 x;
  f32 y;
  f32 z;
};

struct Hit_8023453C
{
  u8 pad[4];
  void *pos;
};

struct Fx_8023453C
{
  u8 pad0[0x18];
  void *vt;
  u32 kids[3];
  void *f28;
  V3_8023453C pos;
  V3_8023453C pos2;
};

struct P_802346F8 { s32 t; f32 v; };

struct VBase_802346F8 { char pad[0x18]; };

struct VObj_802346F8 : VBase_802346F8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual s32 m21(s32, P_802346F8, s32, s32, s32);
};

struct G_802346F8 { u8 pad[0x1c]; s32 f1c; };

extern "C" {
void clear_pipe_interaction_latch(void* p);
void clear_pipe_interaction_latch(void* p);
s32 get_pipe_interaction_latch(void* p);
s32 get_pipe_interaction_latch(void* p);
int init_packet_9a__10TObjPlayerFPv(void);
void send_swapped_telepipe_packet__9TTecLukerFPv(void* p);
s32 TLobby__send_and_handle_60(s32);
int init_packet_9a__10TObjPlayerFPv(void);
extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;
extern s32 lbl_805D5FC0;
extern s32 lobby_player_count;
void send_swapped_telepipe_packet__9TTecLukerFPv(void* p);
void TTecLuker__sub_80235028(void* p);
void TTecLuker__sub_80235028(void* p);
void TTecLuker__sub_8023503C(void* p);
void TTecLuker__sub_8023503C(void* p);
void TTecLuker__sub_80235048(void* p);
void TTecLuker__sub_80235048(void* p);
int TTecLuker__sub_80235054(void* p);
int TTecLuker__sub_80235054(void* p);
void read_be16_field2__10TObjPlayerFPv(void *);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
void byteswap_telepipe_packet__9TTecLukerFPv(void *arg0);
int fn_80235078(void *arg0);
u32 get_player_by_client_id(s32);
void create__9TTecLukerFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void create_quest_telepipe_for_client(u16 arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
u32 get_player_by_client_id(s32);
void write_telepipe_record(u8 *arg0, u16 arg1, s16 arg2, u8 *arg3, s32 arg4);
void VecCopy__FP3VecPC3Vec(void *, void *);
void send_swapped_telepipe_packet__9TTecLukerFPv(void* p);
void TTecLuker__sub_80235028(void* p);
void send_telepipe_packet__9TTecLukerFPv(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 play_sound_effect(int, void *, int, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_804CC990[];
u8 *construct_resta_charge_sound(u8 *arg0, s32 arg1, s32 arg2);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_setFlags30(void *, int);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 construct_collider_proxy__10TObjPlayerFPv(void *, void *);
void TTecLuker__sub_80234F68(void* p);
extern RecoveredGlobal_80233D18_lbl_804CC9A8 lbl_804CC9A8;
extern M2C_UNK lbl_804CC9D4[];
u8 *construct_field_collider__9TTecLukerFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
bool TTecLuker__sub_8023401C(u8 *arg0);
extern u32 lbl_804CC988[];
void* spawn_particle_effect(float*,u32);
int check_flag_0x80__10TObjPlayerFPv(void*);
M2C_UNK queue_destruction__7TObjectFv(void *);
void TTecLuker__updateRecoveryTechniqueCharge(TechniqueChargeEmitter* state);
extern u8 TTecLuker__data_805D37E0[4];
void reset_telepipe_visit_counts(void);
extern u8 TTecLuker__data_805D37E0[4];
void TTecLuker__sub_80234F08(void);
extern const f32 lbl_805DC85C;
void reset_telepipe_record(O_802340A0 *o);
extern u8 TTecLuker__data_805D37E0[4];
void TTecLuker__sub_80234F48(void);
u32 get_player_by_client_id(s32);
u32 TObjPlayer__sub_801BFFA0(void *p);
void set_state__9TTecLukerFPvi(void *p, s32 v);
s32 get_global_state__14TOKeyMachine01Fv(void);
extern s32 lbl_8044D798[];
extern Vec_80233E78 lbl_8044D738[];
extern Vec_80233E78 lbl_8044D768[];
Vec_80233E78 *consume_telepipe_arrival(u16 slot, s32 *heading);
u32 get_player_by_client_id(s32);
void create__9TTecLukerFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
s16 get_field_2__9TTecLukerFPv(void* p);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 get_current_floor(void);
void restore_floor_telepipes(void);
f32 vector_length(void *);
extern const f32 lbl_805DC85C;
extern const f32 lbl_805DC860;
s32 telepipe_record_differs(Rec_8023402C *r, s16 floor, Vec_8023402C *p, u16 unused);
void *__nw__7TObjectFUl(int);
s32 obj_getField1c(void *);
s32 get_stat_by_key_state__10TObjPlayerFPv(void *);
s32 get_current_floor(void);
u8 *construct_field_collider__9TTecLukerFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void set_position_from__14TBoss4DarkFalzFPvPv(void *c, Vec_802347B4 *pos);
void write_telepipe_record(u8 *arg0, u16 arg1, s16 arg2, u8 *arg3, s32 arg4);
void send_telepipe_packet__9TTecLukerFPv(u8 *arg0);
extern s32 tl_07;
extern s32 tl_05;
void setup_telepipe_field__9TTecLukerFPv(Pipe_802347B4 *s);
void __dt__7TObjectFv(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void *);
void __dl__7TObjectFPv(void *);
s32 is_parents_unqueued__9TTecLukerFUi(u32);
extern u8 lbl_804CCA0C[];
Obj_8023448C *TTecLuker__sub_8023448C(Obj_8023448C *arg0, s16 arg1);
void byteswap_telepipe_packet__9TTecLukerFPv(void *arg0);
u32 get_player_by_client_id(s32);
void create__9TTecLukerFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void write_telepipe_record(u8 *arg0, u16 arg1, s16 arg2, u8 *arg3, s32 arg4);
s32 telepipe_record_differs(Rec_8023402C *r, s16 floor, Vec_8023402C *p, u16 unused);
s32 is_split_screen();
u8 *find_entity_by_id(u16);
s32 get_field_3e4__10TObjPlayerFPv(u32);
extern s32 lbl_805D53A0;
void handle_6x68_set_telepipe_state(Pkt_802341B0 *pkt);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_getField1c(void *);
s32 is_split_screen();
s32 get_current_floor(void);
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
M2C_UNK start_placement_search(void *, void *, void *);
void *init_array__9TItemListFPv(void *);
s32 play_sound_effect(int, void *, int, int);
M2C_UNK construct_area_technique_base(void *, void *, void *);
M2C_UNK matrix_mult_vec(int, void *, void *);
M2C_UNK rotate_matrix_y(int, s32);
M2C_UNK push_matrix_from(void *);
M2C_UNK pop_matrices(int);
extern Vec_80234D50 lbl_8044D72C;
extern void* __vt__9TTecLuker[];
extern u8 lbl_8058D490[];
extern s32 lbl_805D37E4;
extern s32 lbl_805D53A0;
extern const f32 lbl_805DC878;
void *TTecLuker__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
M2C_UNK mark_area_change_pending();
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_isState3_324(void *);
s32 obj_getField1c(void *);
s32 is_split_screen();
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 get_instance__6TLobbyFv();
void* spawn_particle_effect(float*,u32);
u8 *find_entity_by_id(u16);
s32 are_players_gathered_near(void *, M2C_UNK, f32);
void set_state__9TTecLukerFPvi(void *p, s32 v);
M2C_UNK play_effect_default__10TObjPlayerFii(void *, s32);
u32 get_player_by_client_id(s32);
M2C_UNK send_6x21_inter_level_warp(void *, M2C_UNK);
s32 get_floor_map_terrain(M2C_UNK);
M2C_UNK play_persistent_sound(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
s32 play_sound_effect(int, void *, int, int);
M2C_UNK set_area__6TLobbyFPvi(M2C_UNK *, M2C_UNK, s32);
s32 telepipe_record_differs(Rec_8023402C *r, s16 floor, Vec_8023402C *p, u16 unused);
void setup_telepipe_field__9TTecLukerFPv(Pipe_802347B4 *s);
void clear_pipe_interaction_latch(void* p);
s32 get_pipe_interaction_latch(void* p);
int TTecLuker__sub_80235054(void* p);
M2C_UNK offset_point_toward_camera(void *, M2C_UNK *, f32);
M2C_UNK init_all_slots__11TWindowCtrlFv();
M2C_UNK init_all_slots2__11TWindowCtrlFv();
extern M2C_UNK lbl_80515BA0[];
extern u8 TTecLuker__data_805D37E0[4];
extern const f32 lbl_805DC858;
void run_task__9TTecLukerFv(u8 *arg0);
s32 is_split_screen();
M2C_UNK clear_active_flag__13TParticleCtrlFPv(u32);
M2C_UNK enable__13TParticleCtrlFPv(u32);
f32 horizontal_distance_squared(void *, void *);
u32 get_player_by_client_id(s32);
s32 get_global_state__14TOKeyMachine01Fv(void);
void TTecLuker__sub_8023503C(void* p);
void TTecLuker__sub_80235048(void* p);
s32 is_parents_unqueued__9TTecLukerFUi(u32);
extern s32 camera_ctrl_instance;
extern const f32 lbl_805DC864;
extern const f32 lbl_805DC868;
void update_telepipe_visual(Obj_802342A4 *self);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 is_split_screen();
Hit_8023453C *csnVecterUnder(void *, s32);
u32 spawn_continuous_particle_effect_with_flags(void *, s32, s32);
M2C_UNK set_tint_color__13TParticleCtrlFPvi(u32, s32);
void *__nw__7TObjectFUl(int);
s32 __ct__7TObjectFP7TObject(void *, void *);
void *create_telepipe_marker(void *, void *, s32, s32, s32, s32, s32, f32, f32);
extern s32 lbl_8044D660[][3];
extern s32 lbl_8044D6F0[];
extern u8 lbl_804CCA0C[];
extern s32 tl_particlemodel;
extern const f32 lbl_805DC86C;
extern const f32 lbl_805DC870;
extern const f32 lbl_805DC874;
void *create_telepipe_visual(void *self, Vec_802347B4 *pos, u32 id, s32 res);
extern const f32 lbl_805DC858;
void TTecLuker__vt4(G_802346F8 *self, VObj_802346F8 *o);
}

extern "C" {

void set_interaction_latch__9TTecLukerFPv(void* p);
void TTecLuker__sub_80234F68(void* p);
void *__dt__9TTecLukerFPvs(void *arg0, s16 arg1);
void *__dt__9TTecLukerFv(void *arg0, s16 arg1);
void apply_all_players__9TTecLukerFv(void);
void create__9TTecLukerFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void create_for_player__9TTecLukerFii(int arg0, s32 arg1);
void *destroy__9TTecLukerFPvs(void *arg0, s16 arg1);
s16 get_field_2__9TTecLukerFPv(void* p);
void init_fields__9TTecLukerFPvs(void *arg0, s16 arg1);
void update_player_target__9TTecLukerFPv(u8 *arg0);
s32 TLobby__send_and_handle_60(s32);
void stop_sound_request(void *);
M2C_UNK free_collision_body_parts(void *);
s32 are_players_gathered_near(void *, M2C_UNK, f32);
M2C_UNK unregister_object_by_id(void *);
M2C_UNK submit_cursor_candidate(void *, M2C_UNK);
u32 get_player_by_client_id(s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK destroy_technique_base__9TTecLukerFPvs(void *, M2C_UNK);
s32 is_split_screen();
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804CC990[];

void TTecLuker__updateRecoveryTechniqueCharge(TechniqueChargeEmitter* state) {
    ++state->age;
    if(state->age%10==0) {
        for(int i=0;i<2;++i)spawn_particle_effect(state->position,lbl_804CC988[i]);
    }
    if(!check_flag_0x80__10TObjPlayerFPv(state->actor))queue_destruction__7TObjectFv((void *)(state));
    else if(state->age>=180)queue_destruction__7TObjectFv((void *)(state));
}

void *destroy__9TTecLukerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC990;
        stop_sound_request(M2C_FIELD(arg0, void **, 0x30));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

u8 *construct_resta_charge_sound(u8 *arg0, s32 arg1, s32 arg2) {
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80233B9C_lbl_804CC990 *)&lbl_804CC990).value;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
    VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x20)), (void *)((int) (M2C_FIELD(arg0, s32 *, 0x1C) + 0x2FC)));
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = play_sound_effect((int) (0x4002BC20), (void *) (arg0 + 0x20), (int) (0), (int) (0));
    return arg0;
}

void set_interaction_latch__9TTecLukerFPv(void* p) { *(s32*)((char*)p + 0xb0) = 1; }

extern const f32 lbl_805DC858;

void update_player_target__9TTecLukerFPv(u8 *arg0) {
    if (is_split_screen() != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xAC) != 0) {
            submit_cursor_candidate(arg0, -1);
            return;
        }
        if (are_players_gathered_near(arg0 + 0x38, 0, lbl_805DC858) != 0) {
            submit_cursor_candidate(arg0, -1);
        }
    } else {
        submit_cursor_candidate(arg0, -1);
    }
}

extern M2C_UNK lbl_804CC9D4[];

void *__dt__9TTecLukerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CC9D4;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        M2C_FIELD(arg0, s32 *, 0xB0) = 0;
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80233D18_lbl_804CC9A8_size[sizeof(RecoveredGlobal_80233D18_lbl_804CC9A8) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80233D18_lbl_804CC9D4_size[sizeof(RecoveredGlobal_80233D18_lbl_804CC9D4) == 0x38 ? 1 : -1];
u8 *construct_field_collider__9TTecLukerFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    construct_collider_proxy__10TObjPlayerFPv((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80233D18_lbl_804CC9D4 *)&lbl_804CC9D4).value;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg1));
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804CC9A8.value), (int) (1));
    obj_setFlags30((void *) (arg0), (int) (0x40000000));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    TTecLuker__sub_80234F68((void*)((void *) (arg0 + 0x98)));
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xAC) = arg3;
    return arg0;
}

void apply_all_players__9TTecLukerFv(void) {
    s32 var_r31;
    u32 temp_r3;

    var_r31 = 0;
    do {
        temp_r3 = get_player_by_client_id((s32)(var_r31));
        if (temp_r3 != 0U) {
            reset_telepipe_record((O_802340A0 *)(temp_r3 + 0x830));
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

void create_for_player__9TTecLukerFii(int arg0, s32 arg1) {
    u32 r = get_player_by_client_id((s32)((u16)arg0));
    if (r != 0U) {
        create__9TTecLukerFPvPvPvPv((void *)(r), (void *)(arg1), (void *)(arg1), (void *)(0xA));
    }
}

void create_quest_telepipe_for_client(u16 arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(((s32)get_player_by_client_id((s32)((u32) arg0))));
    if (temp_r3 != NULL) {
        create__9TTecLukerFPvPvPvPv(temp_r3, temp_r3 + 0x38, temp_r3 + 0x2FC, NULL);
    }
}

Vec_80233E78 *consume_telepipe_arrival(u16 slot, s32 *heading) {
    Player_80233E78 *p;
    u16 owner;
    if (slot >= 4) {
        return 0;
    }
    p = (Player_80233E78 *)get_player_by_client_id(slot);
    if (p != 0) {
        owner = TObjPlayer__sub_801BFFA0(p->arrival);
        if (owner == 0xffff) {
            return 0;
        }
        set_state__9TTecLukerFPvi(p->arrival, 0xffff);
        if (get_global_state__14TOKeyMachine01Fv() == 0) {
            *heading = lbl_8044D798[slot];
            return &lbl_8044D738[slot];
        }
        if (get_global_state__14TOKeyMachine01Fv() == 0x12) {
            *heading = lbl_8044D798[slot];
            return &lbl_8044D768[slot];
        }
        p = (Player_80233E78 *)get_player_by_client_id(owner);
        if (p == 0) {
            return 0;
        }
        *heading = p->pipe_heading;
        return &p->pipe_pos;
    }
    return 0;
}

typedef s32 (*GetField2_80233F8C)(void *);
void restore_floor_telepipes(void) {
    s32 area = get_global_state__14TOKeyMachine01Fv();
    s32 i;
    if (area == 15 || area == 0 || area == 18) {
        return;
    }
    for (i = 0; i < 4; i++) {
        u8 *p = (u8 *)get_player_by_client_id(i);
        if (p != 0) {
            if (((GetField2_80233F8C)get_field_2__9TTecLukerFPv)(p + 0x830) == get_current_floor()) {
                create__9TTecLukerFPvPvPvPv(p, p + 0x38, p + 0x838, (void *)10);
            }
        }
    }
}

bool TTecLuker__sub_8023401C(u8 *arg0) {
    return M2C_FIELD(arg0, s16 *, 2) != 0;
}

s32 telepipe_record_differs(Rec_8023402C *r, s16 floor, Vec_8023402C *p, u16 unused) {
    Vec_8023402C d;
    if (r->floor == floor) {
        d.x = r->pos.x - p->x;
        d.y = lbl_805DC85C;
        d.z = r->pos.z - p->z;
        if (vector_length(&d) < lbl_805DC860) {
            return 0;
        }
    }
    return 1;
}

void reset_telepipe_record(O_802340A0 *o) {
    o->h0 = 0xffff;
    o->w4 = 0;
    o->h2 = 0;
    o->f8 = lbl_805DC85C;
    o->fc = lbl_805DC85C;
    o->f10 = lbl_805DC85C;
    o->w14 = 0;
}

void init_fields__9TTecLukerFPvs(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s16 *, 0) = arg1;
    M2C_FIELD(arg0, s16 *, 2) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void send_telepipe_packet__9TTecLukerFPv(u8 *arg0) {
    Stack_802340E4 stack;
    TTecLuker__sub_80235028((void*)((void *) (&stack.sp8)));
    stack.spC = M2C_FIELD(arg0, u16 *, 0);
    stack.sp10 = M2C_FIELD(arg0, s32 *, 4);
    stack.spE = M2C_FIELD(arg0, s16 *, 2);
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp14), (void *) (arg0 + 8));
    stack.sp20 = M2C_FIELD(arg0, s32 *, 0x14);
    send_swapped_telepipe_packet__9TTecLukerFPv((void*)((void *) (&stack.sp8)));
}

void write_telepipe_record(u8 *arg0, u16 arg1, s16 arg2, u8 *arg3, s32 arg4) {
    u8 *temp_r3;
    M2C_FIELD(arg0, u16 *, 0) = arg1;
    M2C_FIELD(arg0, s16 *, 2) = arg2;
    VecCopy__FP3VecPC3Vec(arg0 + 8, arg3);
    M2C_FIELD(arg0, s32 *, 4) = arg4;
    if (arg1 <= 4U) {
        temp_r3 = (u8 *)(((s32)get_player_by_client_id((s32)((u32) arg1))));
        if (temp_r3 != NULL) {
            M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(temp_r3, s32 *, 0x60);
        }
    }
}

void handle_6x68_set_telepipe_state(Pkt_802341B0 *pkt) {
    u8 *player;
    Rec_8023402C *rec;
    u32 other;
    u32 local;
    byteswap_telepipe_packet__9TTecLukerFPv(pkt);
    if (pkt->rec.owner == 0xffff) {
        return;
    }
    player = find_entity_by_id(pkt->rec.owner);
    if (player == 0) {
        return;
    }
    if (pkt->rec.owner >= 4) {
        return;
    }
    rec = (Rec_8023402C *)(player + 0x830);
    if (telepipe_record_differs(rec, pkt->rec.floor, &pkt->rec.pos, pkt->rec.owner) == 0) {
        return;
    }
    write_telepipe_record((u8 *)rec, pkt->rec.owner, pkt->rec.floor, (u8 *)&pkt->rec.pos, pkt->rec.section);
    if (is_split_screen() == 0 && pkt->rec.owner == lbl_805D53A0) {
        return;
    }
    other = get_player_by_client_id(pkt->rec.owner);
    local = get_player_by_client_id(lbl_805D53A0);
    if (other != 0 && local != 0) {
        if (get_field_3e4__10TObjPlayerFPv(other) == get_field_3e4__10TObjPlayerFPv(local)) {
            create__9TTecLukerFPvPvPvPv(player, player + 0x38, player + 0x38, 0);
        }
    }
}

typedef struct Obj_802342A4 Obj_802342A4;
typedef struct Vec_802342A4 Vec_802342A4;
void update_telepipe_visual(Obj_802342A4 *self) {
  f32 d;
  f32 best;
  s32 j;
  s32 i;
  s32 st;
  u32 pl;
  best = lbl_805DC864;
  j = get_global_state__14TOKeyMachine01Fv();
  st = j;
  if ((st == 0) || (st == 0x12))
  {
    return;
  }
  if (is_split_screen() != 0)
  {
    for (j = 0; j < 4; j++)
    {
      pl = get_player_by_client_id(j);
      if (pl != 0)
      {
        d = horizontal_distance_squared(&self->pos, (void *) (pl + 0x38));
        if (d <= best)
        {
          best = d;
        }
      }
    }
    if (best >= lbl_805DC868)
    {
      for (i = 0; i < 3; i++)
      {
        if (is_parents_unqueued__9TTecLukerFUi(self->kids[i]) != 0)
        {
          enable__13TParticleCtrlFPv(self->kids[i]);
          if (self->f28 != 0)
          {
            TTecLuker__sub_80235048((void*)(self->f28));
          }
        }
      }
      return;
    }
    for (i = 0; i < 3; i++)
    {
      if (is_parents_unqueued__9TTecLukerFUi(self->kids[i]) != 0)
      {
        clear_active_flag__13TParticleCtrlFPv(self->kids[i]);
        if (self->f28 != 0)
        {
          TTecLuker__sub_8023503C((void*)(self->f28));
        }
      }
    }
    return;
  }
  if (horizontal_distance_squared(&self->pos, (void *) (camera_ctrl_instance + 0x178)) >= lbl_805DC868)
  {
    for (i = 0; i < 3; i++)
    {
      if (is_parents_unqueued__9TTecLukerFUi(self->kids[i]) != 0)
      {
        enable__13TParticleCtrlFPv(self->kids[i]);
        if (self->f28 != 0)
        {
          TTecLuker__sub_80235048((void*)(self->f28));
        }
      }
    }
    return;
  }
  for (i = 0; i < 3; i++)
  {
    if (is_parents_unqueued__9TTecLukerFUi(self->kids[i]) != 0)
    {
      clear_active_flag__13TParticleCtrlFPv(self->kids[i]);
      if (self->f28 != 0)
      {
        TTecLuker__sub_8023503C((void*)(self->f28));
      }
    }
  }
}

Obj_8023448C *TTecLuker__sub_8023448C(Obj_8023448C *arg0, s16 arg1) {
    s32 i;
    u32 z;
    if (arg0 != NULL) {
        i = 0;
        z = 0;
        arg0->vt = lbl_804CCA0C;
        do {
            if (is_parents_unqueued__9TTecLukerFUi(arg0->kids[i]) != 0) {
                queue_destruction__7TObjectFv((void *)(arg0->kids[i]));
                arg0->kids[i] = z;
            }
            i++;
        } while (i < 3);
        if (arg0->f28 != 0) {
            queue_destruction__7TObjectFv((void *)(arg0->f28));
            arg0->f28 = 0;
        }
        __dt__7TObjectFv((void *)(arg0), (int)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma opt_common_subs off
#pragma opt_loop_invariants off
typedef struct Fx_8023453C Fx_8023453C;
typedef struct Hit_8023453C Hit_8023453C;
typedef struct V3_8023453C V3_8023453C;
typedef struct Vec_802347B4 Vec_802347B4;
struct Vec_802347B4;
void *create_telepipe_visual(void *self, Vec_802347B4 *pos, u32 id, s32 res) {
  V3_8023453C v;
  V3_8023453C v2;
  long long off;
  Hit_8023453C *hit;
  void *p;
  s32 *row;
  s32 i;
  u8 *pt;
  __ct__7TObjectFP7TObject(self, (void *) res);
  ((Fx_8023453C *) self)->vt = lbl_804CCA0C;
  VecCopy__FP3VecPC3Vec(&((Fx_8023453C *) self)->pos, pos);
  hit = csnVecterUnder(&((Fx_8023453C *) self)->pos, 0x100);
  VecCopy__FP3VecPC3Vec(&((Fx_8023453C *) self)->pos2, &((Fx_8023453C *) self)->pos);
  if (hit != 0)
  {
    VecCopy__FP3VecPC3Vec(&((Fx_8023453C *) self)->pos2, hit->pos);
  }
  row = lbl_8044D660[id];
  off = id * 4;
  pt = (u8 *) lbl_8044D6F0;
  for (i = 0; i < 3; i++)
  {
    switch (i)
    {
      case 2:
        VecCopy__FP3VecPC3Vec(&v, &((Fx_8023453C *) self)->pos2);
        v.y += lbl_805DC86C;
        ((Fx_8023453C *) self)->kids[i] = spawn_continuous_particle_effect_with_flags(&v, row[i], 0x40);
        if ((((Fx_8023453C *) self)->kids[i] != 0) && (id != 3))
      {
        set_tint_color__13TParticleCtrlFPvi(((Fx_8023453C *) self)->kids[i], *((s32 *) (pt + off)));
      }
        break;
      default:
        ((Fx_8023453C *) self)->kids[i] = spawn_continuous_particle_effect_with_flags(&((Fx_8023453C *) self)->pos2, row[i], 0x40);
        if ((((Fx_8023453C *) self)->kids[i] != 0) && (id != 3))
      {
        set_tint_color__13TParticleCtrlFPvi(((Fx_8023453C *) self)->kids[i], *((s32 *) (pt + off)));
      }
        break;
    }
  }
  VecCopy__FP3VecPC3Vec(&v2, &((Fx_8023453C *) self)->pos);
  v2.y += lbl_805DC870;
  if (is_split_screen() == 0)
  {
    p = __nw__7TObjectFUl(0x44);
    if (p != 0)
    {
      p = create_telepipe_marker(p, &v2, 0x1F, 4, tl_particlemodel, 0, 0, lbl_805DC874, lbl_805DC874);
    }
    ((Fx_8023453C *) self)->f28 = p;
  }
  else
  {
    ((Fx_8023453C *) self)->f28 = 0;
  }
  return self;
}
#pragma pop

void TTecLuker__vt4(G_802346F8 *self, VObj_802346F8 *o) {
    P_802346F8 d;
    d.t = 0xE;
    d.v = lbl_805DC858;
    o->m21(self->f1c, d, 0, -1, -1);
}

void create__9TTecLukerFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x110);
    if (o != NULL) {
        TTecLuker__ct((void *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2), (void *)(arg3));
    }
}

extern void* __vt__9TTecLuker[];

typedef void (*Write_802347B4)(u8 *, s32, s16, u8 *, s32);
void setup_telepipe_field__9TTecLukerFPv(Pipe_802347B4 *s) {
    u16 id = obj_getField1c(s->player);
    void *v = __nw__7TObjectFUl(0x44);
    if (v != 0) {
        v = create_telepipe_visual((void *)(v), (Vec_802347B4 *)(&s->pos), (u32)(id), (s32)(tl_07));
    }
    s->visual = v;
    s->phase = 1;
    if (s->collider != 0) {
        set_position_from__14TBoss4DarkFalzFPvPv(s->collider, &s->pos);
    } else {
        u8 *c = (u8 *)__nw__7TObjectFUl(0xb4);
        if (c != 0) {
            c = construct_field_collider__9TTecLukerFPviii(c, (s32)&s->pos, tl_05, 0);
        }
        s->collider = c;
    }
    if (s->traveller == (u16)obj_getField1c(s->player)) {
        s16 h;
        s->floor = get_current_floor();
        h = get_stat_by_key_state__10TObjPlayerFPv(s->player);
        ((Write_802347B4)write_telepipe_record)(s->player + 0x830, obj_getField1c(s->player), s->floor, (u8 *)&s->pos, h);
        send_telepipe_packet__9TTecLukerFPv(s->player + 0x830);
    }
}

struct Rec_8023402C;
struct Vec_8023402C;
struct Pipe_802347B4;
void run_task__9TTecLukerFv(u8 *arg0) {
    struct { f32 x, y, z; } sp8;
    s32 temp_r0;
    M2C_UNK temp_r30;
    u16 temp_r3;
    u16 temp_r5;
    s32 var_r29;
    u8 *temp_r29;
    u8 *temp_r3_2;
    u8 *owner;
    u8 *tgt;
    u16 st;
    M2C_FIELD(arg0, u8 **, 0x1C) = find_entity_by_id(M2C_FIELD(arg0, u16 *, 0xB4));
    owner = M2C_FIELD(arg0, u8 **, 0x1C);
    if (owner == NULL) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x108);
    switch (temp_r0) {
    case 0:
        temp_r3 = obj_getField1c(owner);
        if (temp_r3 != 0xFFFFU) {
            if (temp_r3 > 0xCU) {
                M2C_FIELD(arg0, s32 *, 0x108) = 4;
                return;
            }
            tgt = M2C_FIELD(arg0, u8 **, 0xEC);
            if (tgt == NULL) {
                setup_telepipe_field__9TTecLukerFPv((Pipe_802347B4 *)arg0);
                return;
            }
            if (TTecLuker__sub_80235054((void*)(tgt)) != 0) {
                VecCopy__FP3VecPC3Vec(arg0 + 0xFC, M2C_FIELD(arg0, u8 **, 0x1C) + 0x38);
                if ((telepipe_record_differs((Rec_8023402C *)(M2C_FIELD(arg0, u8 **, 0x1C) + 0x830), M2C_FIELD(arg0, s16 *, 0xF4), (Vec_8023402C *)(arg0 + 0xFC), M2C_FIELD(arg0, u16 *, 0xF6)) == 0) && ((s8) *(TTecLuker__data_805D37E0 + M2C_FIELD(arg0, u16 *, 0xB4)) >= 1)) {
                    queue_destruction__7TObjectFv(arg0);
                    return;
                }
                setup_telepipe_field__9TTecLukerFPv((Pipe_802347B4 *)arg0);
            }
        }
        break;
    case 1:
        temp_r5 = M2C_FIELD(arg0, u16 *, 0xB4);
        if (temp_r5 < 4U) {
            *(TTecLuker__data_805D37E0 + temp_r5) = *(TTecLuker__data_805D37E0 + temp_r5) + 1;
        }
        if (telepipe_record_differs((Rec_8023402C *)(M2C_FIELD(arg0, u8 **, 0x1C) + 0x830), M2C_FIELD(arg0, s16 *, 0xF4), (Vec_8023402C *)(arg0 + 0xFC), M2C_FIELD(arg0, u16 *, 0xF6)) != 0) {
            queue_destruction__7TObjectFv(arg0);
            return;
        }
        play_persistent_sound(0x4002B219, arg0, arg0 + 0xFC, 0, 0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0xF0) == 0U) {
            queue_destruction__7TObjectFv(arg0);
            return;
        }
        if ((get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0xF6)) != 0) && (get_pipe_interaction_latch(M2C_FIELD(arg0, void **, 0xF0)) != 0) && (are_players_gathered_near(arg0 + 0xFC, 0, lbl_805DC858) != 0)) {
            offset_point_toward_camera(arg0 + 0xFC, (M2C_UNK *) &sp8, lbl_805DC858);
            spawn_particle_effect((float *) &sp8, 0xB3);
            temp_r3_2 = (u8 *)get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0xF6));
            if (temp_r3_2 != NULL) {
                play_effect_default__10TObjPlayerFii(temp_r3_2, 0xA);
                play_sound_effect(0x40022D1A, temp_r3_2 + 0x38, 0, 0);
            }
            init_all_slots__11TWindowCtrlFv();
            M2C_FIELD(arg0, s32 *, 0x108) = 2;
            return;
        }
        break;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x10C) = (s32) (M2C_FIELD(arg0, s32 *, 0x10C) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x10C) > 0xA) {
            M2C_FIELD(arg0, s32 *, 0x108) = 3;
            return;
        }
        break;
    case 3:
        temp_r30 = obj_getField1c(owner);
        temp_r29 = (u8 *)get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0xF6));
        if ((is_split_screen() == 0) && (temp_r29 != NULL)) {
            if (M2C_FIELD(temp_r29, s32 *, 0x30) & 0x800) {
                M2C_FIELD(arg0, s32 *, 0x108) = 1;
                init_all_slots2__11TWindowCtrlFv();
                if ((u32) M2C_FIELD(arg0, u32 *, 0xF0) == 0U) {
                    queue_destruction__7TObjectFv(arg0);
                    return;
                }
                clear_pipe_interaction_latch((void*)(M2C_FIELD(arg0, void **, 0xF0)));
                M2C_FIELD(arg0, s32 *, 0x10C) = 0;
                return;
            }
            ((void (*)(void *, u16))set_state__9TTecLukerFPvi)(temp_r29 + 0x848, temp_r30);
            if (get_instance__6TLobbyFv() == 1) {
                send_6x21_inter_level_warp(temp_r29, 0);
            } else {
                send_6x21_inter_level_warp(temp_r29, 0);
            }
            goto block_43;
        }
block_43:
        {
        s32 i;
        u16 st2;
        u8 *p;
        i = 0;
        st2 = (u16) temp_r30;
        do {
            p = (u8 *)get_player_by_client_id(i);
            if (p != NULL) {
                if (is_split_screen() != 0) {
                    ((void (*)(void *, u16))set_state__9TTecLukerFPvi)(p + 0x848, st2);
                    if (get_instance__6TLobbyFv() == 1) {
                        send_6x21_inter_level_warp(p, 0);
                    } else {
                        send_6x21_inter_level_warp(p, 0);
                    }
                } else if (obj_isState3_324(p) != 0) {
                    ((void (*)(void *, u16))set_state__9TTecLukerFPvi)(p + 0x848, st2);
                    if (get_instance__6TLobbyFv() == 1) {
                        send_6x21_inter_level_warp(p, 0);
                    } else {
                        send_6x21_inter_level_warp(p, 0);
                    }
                }
            }
            i += 1;
        } while (i < 4);
        }
        if (is_split_screen() != 0) {
            init_all_slots2__11TWindowCtrlFv();
        }
        set_area__6TLobbyFPvi(lbl_80515BA0, 0, get_floor_map_terrain(0));
        mark_area_change_pending();
        return;
    case 4:
        queue_destruction__7TObjectFv(arg0);
        break;
    }
}

void *__dt__9TTecLukerFv(void *arg0, s16 arg1) {
    s32 temp_cr0_eq;
    void *temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = (void *) __vt__9TTecLuker;
        if ((u32) M2C_FIELD(arg0, u32 *, 0xF8) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xF8));
            M2C_FIELD(arg0, u32 *, 0xF8) = 0U;
        }
        temp_r3 = M2C_FIELD(arg0, void **, 0xEC);
        if (temp_r3 != NULL) {
            if (temp_r3 != NULL) {
                ((struct VM_80234C90_80233B38 *) temp_r3)->m0(1);
            }
            M2C_FIELD(arg0, void **, 0xEC) = NULL;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xF0));
            M2C_FIELD(arg0, u32 *, 0xF0) = 0U;
        }
        M2C_FIELD(arg0, u32 *, 0xF0) = 0U;
        destroy_technique_base__9TTecLukerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

#define L ((Luker_80234D50 *)arg0)
void *TTecLuker__ct(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    Owner_80234D50 *o;
    void *p;
    construct_area_technique_base(arg0, arg1, arg2);
    L->vt = __vt__9TTecLuker;
    L->f0 = lbl_805D37E4;
    L->f108 = 0;
    L->f10C = 0;
    L->fF0 = 0;
    L->fF8 = 0;
    L->fF4 = get_current_floor();
    L->fx = NULL;
    if (L->owner != NULL) {
        L->owner_id = obj_getField1c(L->owner);
    }
    L->fF6 = lbl_805D53A0;
    if (is_split_screen() == 0 && L->owner_id != lbl_805D53A0) {
        VecCopy__FP3VecPC3Vec(&L->pos, &L->owner->pipe_pos);
    } else {
        L->fF6 = L->owner_id;
        if ((s32)arg4 == 0xA) {
            VecCopy__FP3VecPC3Vec(&L->pos, arg3);
        } else {
            p = alloc__23TAdSinglePlyChrSelectGCFPv(0xA8);
            if (p != NULL) {
                p = init_array__9TItemListFPv(p);
            }
            L->fx = p;
            if (L->fx != NULL) {
                Vec_80234D50 v = lbl_8044D72C;
                push_matrix_from(lbl_8058D490);
                rotate_matrix_y(0, L->owner->f60);
                matrix_mult_vec(0, &v, &v);
                pop_matrices(1);
                o = L->owner;
                v.x += o->pos.x;
                v.y += lbl_805DC878 + o->pos.y;
                v.z += o->pos.z;
                start_placement_search(L->fx, &v, o);
            }
        }
    }
    play_sound_effect(0x4002A818, (u8 *)arg0 + 0x20, 0, 0);
    return arg0;
}
#undef L

void TTecLuker__sub_80234F08(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        TTecLuker__data_805D37E0[i] = 0;
    }
}

void reset_telepipe_visit_counts(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        TTecLuker__data_805D37E0[i] = 0;
    }
}

void TTecLuker__sub_80234F48(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        TTecLuker__data_805D37E0[i] = 0;
    }
}

void TTecLuker__sub_80234F68(void* p) { *(s32*)((char*)p + 0x0) = 6; }
s16 get_field_2__9TTecLukerFPv(void* p) { return *(s16*)((char*)p + 0x2); }

void clear_pipe_interaction_latch(void* p) { *(s32*)((char*)p + 0xb0) = 0; }

s32 get_pipe_interaction_latch(void* p) { return *(s32*)((char*)p + 0xb0); }

void send_swapped_telepipe_packet__9TTecLukerFPv(void* p) { byteswap_telepipe_packet__9TTecLukerFPv((void *)((void*)(p))); TLobby__send_and_handle_60((s32)(p)); }

void byteswap_telepipe_packet__9TTecLukerFPv(void *arg0) {
    read_be16_field2__10TObjPlayerFPv(arg0);
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 4)));
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 6)));
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 8)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 12)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 16)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 20)));
    bswap_32__FPUl((s32)((void *)((char *)arg0 + 24)));
}

void TTecLuker__sub_80235028(void* p) { *(u8*)((char*)p + 0x0) = 104; *(u8*)((char*)p + 0x1) = 7; }

void TTecLuker__sub_8023503C(void* p) { *(s32*)((char*)p + 0x38) = 1; }

void TTecLuker__sub_80235048(void* p) { *(s32*)((char*)p + 0x38) = 0; }

int TTecLuker__sub_80235054(void* p) { return fn_80235078((void *)((char*)p + 0x4)); }
int fn_80235078(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x0) == 2);
}

}
