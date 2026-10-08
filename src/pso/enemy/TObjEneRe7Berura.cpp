#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();

extern "C" {

struct Base_En_80094994 { char pad[0x18]; };

struct V_En_80094994 : Base_En_80094994 {
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV
    PADV
    virtual void m86();
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m93();
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m100();
};

struct Base_Sub_80094994 { char pad[0x14]; };

struct V_Sub_80094994 : Base_Sub_80094994 {
    PADV4
    PADV
    virtual s32 m5();
};

struct Base_80094BA4_80094994 { char pad[0x18]; };

struct VObj_80094BA4_80094994 : Base_80094BA4_80094994 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual s32  m97();
};

struct Obj_80094D3C { u8 pad[0x438]; void *parts[2]; };

struct O_8009518C { u8 pad[0x3f4]; s32 idx; u8 pad2[0x418 - 0x3f8]; u32 flags[1]; };

struct Node_8009503C {
    u32 flags;
    u8 pad4[0x2C - 0x4];
    struct Node_8009503C *child;
    struct Node_8009503C *next;
};

struct Mtx_8009503C { f32 m[3][4]; };

struct Vec_800951AC { f32 x, y, z; };

struct Player_800951AC {
    u8 pad0[0x38];
    Vec_800951AC pos38;
    u8 pad44[0x2FC - 0x44];
    Vec_800951AC pos;
};

struct Berura_800951AC {
    u8 pad0[0x60];
    s32 angle;
    u8 pad64[0x2FC - 0x64];
    Vec_800951AC pos;
};

struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual s32 m81();
    virtual void m82();
    virtual M2C_UNK m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual M2C_UNK m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual M2C_UNK m103();
};

struct PartBase_800954E8 { u8 pad[0x18]; };

struct Part_800954E8 : PartBase_800954E8 {
    virtual ~Part_800954E8();
};

struct Berura_800954E8 {
    u8 pad0[0x18];
    void *vtbl;
    u8 pad1C[0x3D8 - 0x1C];
    u8 motionA[0x3F8 - 0x3D8];
    void *effect;
    u8 motionB[0x440 - 0x3FC];
    Part_800954E8 *parts[2];
    u8 arr[4][0x1C];
};

struct Ent_800959F8 { s32 f0; u8 *f4; };

struct Res_800959F8 { u8 pad[0x42C]; u8 *f42C; Ent_800959F8 *f430; };

struct T16_800959F8 { s32 f0; s32 f4; s32 f8; s32 fC; };

struct Atk_800959F8 { s32 w[4]; };

struct V3_800959F8 { f32 x, y, z; };

struct Elem_800959F8 {
    u8 *buf;
    s32 f4;
    s32 f8;
    s32 fC;
    f32 f10;
    f32 f14;
    s32 *f18;
    s32 f1C;
    s32 f20;
    s32 f24;
    f32 f28, f2C, f30;
    s32 f34, f38, f3C;
    f32 f40, f44, f48;
    s32 f4C;
    s32 f50;
    u8 pad54[0x10];
};

struct VBase_14_d2ec4b { char pad[0x14]; };

struct VObj_14_d2ec4b : VBase_14_d2ec4b {
    virtual void m0();
    virtual M2C_UNK m1(M2C_UNK);
    virtual M2C_UNK m2();
};

struct VBase_18_b345b0 { char pad[0x18]; };

struct VObj_18_b345b0 : VBase_18_b345b0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual M2C_UNK m85(s16, M2C_UNK);
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual M2C_UNK m93();
};

struct Sub_800955E0 { u8 b[0x1C]; };

struct Vec_800955E0 { f32 x, y, z; };

struct Self_800955E0 { u8 pad[0x418]; s32 f418[2]; Vec_800955E0 v420[2]; s32 f438[2]; u8 pad440[8]; Sub_800955E0 subs[4]; };

M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
Player_800951AC * get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
void queue_destruction__7TObjectFv(void *);
s32 dispatch_shared_handler_a__6TLobbyFPv(s32);
s32 register_object__6TLobbyFPv(s32);
s32 dispatch_shared_handler_b__6TLobbyFPv(s32);
s32 register_boss__6TLobbyFPv(s32);
void TLobby__sub_8001FE7C(void*, int);
s32 get_game_mode__6TLobbyFv();
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
void set_field_dc__10TObjPlayerFPvi(void *, s32);
void set_field_d8__10TObjPlayerFPvi(void *, void *);
u32 csnLookAt(void *, void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
void * alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 check_demo_mode__10TObjPlayerFv();
s32 update_death_state__16TObjEneRe7BeruraFPvi(void *, void *);
s32 TObjEneRe7Berura__sub_80093470(void *, void *);
s32 state_patrol__16TObjEneRe7BeruraFPvi(void *, void *);
s32 TObjEneRe7Berura__sub_800936A8(void *, void *);
s32 TObjEneRe7Berura__sub_80093888(void *, void *);
s32 TObjEneRe7Berura__sub_80093C80(void *, void *);
s32 TObjEneRe7Berura__sub_800940E8(void *, void *);
s32 handle_state__16TObjEneRe7BeruraFPvi(void *, void *);
s32 TObjEneRe7Berura__sub_80094624(void *, void *);
s32 TObjEneRe7Berura__sub_8009472C(void *, void *);
void state_attack__16TObjEneRe7BeruraFPvi(u8 *arg0, s32 arg1);
void TObjEneRe7Berura__sub_80094A9C(void *self, s32 msg);
void TObjEneRe7Berura__vt85(s32 arg0, u32 arg1, s32 arg2);
s32 check_death_trigger__16TObjEneRe7BeruraFPv(void *arg0);
void play_band_sound__16TObjEneRe7BeruraFPv(u8 *arg0);
void TObjEneRe7Berura__sub_80094CD0(void *self);
void destroy_parts__16TObjEneRe7BeruraFPv(Obj_80094D3C *self);
void TObjEneRe7Berura__sub_80094D98(u8 *arg0);
s32 TObjEneRe7Berura__sub_80094DB4(void *arg0);
u8 is_over_limit__16TObjEneRe7BeruraFPv(void *arg0);
s32 step_toward_target__16TObjEneRe7BeruraFPvii(void *arg0, s32 arg1, s32 arg2);
void init_fields4B8__16TObjEneRe7BeruraFPv(void *arg0);
s32 get_field_3D4_shifted__16TObjEneRe7BeruraFPv(void *arg0);
void init_part__16TObjEneRe7BeruraFi(s32 arg0);
void set_data_and_draw_node_tree__16TObjEneRe7BeruraFii(int a0, int a1);
void draw_node_tree__16TObjEneRe7BeruraFPv(void *arg0);
void apply_attack_params__16TObjEneRe7BeruraFiPv(s32 arg0, u8 *arg1);
M2C_UNK collect_node_matrices__16TObjEneRe7BeruraFPvi(void *arg0, int idx);
u8 TObjEneRe7Berura__sub_8009518C(O_8009518C *self);
s32 acquire_target_in_view__16TObjEneRe7BeruraFPv(Berura_800951AC *self);
void TObjEneRe7Berura__sub_80095328(void);
void TObjEneRe7Berura__vt86(void *arg0);
void update_collision_center__16TObjEneRe7BeruraFPv(u8 *arg0);
void TObjEneRe7Berura__vt59(void);
void TObjEneRe7Berura__vt60(u8 *arg0);
void TObjEneRe7Berura__vt61(void* p);
void TObjEneRe7Berura__vt26(void);
void run_task__16TObjEneRe7BeruraFv(u8 *arg0);
Berura_800954E8 * __dt__16TObjEneRe7BeruraFv(Berura_800954E8 *self, s16 flag);
void init_enemy__16TObjEneRe7BeruraFPv(u8 *arg0);
void * TObjEneRe7Berura__ct(void *arg0, void *arg1, void *arg2);
void destroy_children__16TObjEneRe7BeruraFv(void);
void * create__16TObjEneRe7BeruraFPv(void *arg0);
void load_static_resources__16TObjEneRe7BeruraFv(void);
void fn_80095DD0(u8 *arg0);
void fn_80095DF4(u8 *arg0);
s32 spawn_punch__16TObjEneRe7BeruraFPv(void *);
M2C_UNK TObjPlayer__sub_800A0554(void *);
void TObjPlayer__sub_800A05B8(void *, int);
void init_vtable_and_field18__10TObjPlayerFPv(void *);
void enemy_init_validate_period(void *, int);
void enemy_init_acquire_period(void *, int);
M2C_UNK enemy_set_target_id(void *, u16);
void __dt__9TObjEneDDFv(void *, int);
void init_object__9TObjEneDDFPv(void *);
s32 check_v2_mode__9TObjEneDDFv(void);
int reload_stats_keep_hp_tp__9TObjEneDDFPv(void *self, void *a, void *b, void *c);
void reset_hp__9TObjEneDDFPv(void *, s32, s32, s32);
void initialize_enemy_state__9TObjEneDDFPv(void *, int);
void set_state_8__9TObjEneDDFPv(void *);
s32 is_alive__9TObjEneDDFPv(void *);
void init_model__9TObjEneDDFPv(void *, void *, int);
M2C_UNK clear_attack_receipts();
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);
Res_800959F8 * load_enemy_bml_resource_named(void *, void *);
Res_800959F8 * load_enemy_bml_resource(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK, s32);
int transition_enemy_state(void*, void*);
void init_position_vectors__9TObjEneDDFPv(void *);
void activate_and_dispatch__10TObjPlayerFPv(void *);
s32 create__12TObjEneSaverFPvPv(s32, s32);
M2C_UNK play_area_se_with_particle__12TBoss3VoloptFi(void *);
void draw_motion_trail__11TBoss4Type3FPviiii(void *, s32, u8 *, s32 *, V3_800959F8 *);
void __dt__11TBoss4Type3FPvs(void*, int);
void * init_trail_buffer__11TBoss4Type3FPvifff(void *arg0, s32 segs, f32 start, f32 end, f32 step);
void destroy_buffer_pair(void*, int);
void * alloc_tables__6TLobbyFPvii(void *, s32, s32);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 * collect_and_count__12TBoss3VoloptFUii(u32 arg0, s32 arg1);
s32 angle_diff_s16(s32);
s32 objInBand__FP7GameObjf(void *, f32);
void set_animation__10TObjPlayerFPvs(void *, s16);
void free__11TOBoss4RockFUi(void*);
u8 * alloc_buffer__11TOBoss4RockFPv(s32);
void free_collision_body_parts(void *);
s32 play_sound_effect(s32, u32, s16, s32);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
void spawn_npc_enemy__6TLobbyFsiiiff(s16, s32, s32, s32, f32, f32);
void __destroy_arr(void *, void *, u32, u32);
void __construct_array(void *, void *, void *, int, int);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
void bind_motion_context(void *, f32);
s32 compose_motion_node_matrix(int);
s32 matrix_mult_vec(int, void *, void *);
void get_current_matrix(void *);
void copy_matrix__10TObjPlayerFUiUi(int, void *);
M2C_UNK subtract_vector(void *, void *);
void translate_matrix(s32, f32, f32, f32);
M2C_UNK concat_matrix__10TObjPlayerFUiUi(M2C_UNK, s32);
M2C_UNK push_matrix_from(void *, int, int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK set_global_param__8TObjFishFi(s32, void *);
M2C_UNK draw_chunk_model(s32);
void set_global_flag__10TObjPlayerFv(void);
void clear_global_state__10TObjPlayerFv(void);

extern s32 TObjEneRe7Berura__data_80439DA8[];
extern s32 TObjEneRe7Berura__data_80439DB0[];
extern s32 TObjEneRe7Berura__data_80439DB8[];
extern s32 TObjEneRe7Berura__data_805007D4[];
extern Elem_800959F8 TObjEneRe7Berura__data_805007DC[];
extern s32 TObjEneRe7Berura__data_805D4F58[1];
extern s32 TObjEneRe7Berura__data_805D4F5C[1];
extern u32 TObjEneRe7Berura__data_805D4F64;
extern s32 TObjEneRe7Berura__data_805D4F98;
extern const f32 TObjEneRe7Berura__data_805D9724;
extern const f32 TObjEneRe7Berura__data_805D972C;
extern const f32 TObjEneRe7Berura__data_805D9730;
extern const f32 TObjEneRe7Berura__data_805D9738;
extern const f32 TObjEneRe7Berura__data_805D9740;
extern const f32 TObjEneRe7Berura__data_805D9764;
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
extern s32 lbl_80439DA0[];
extern Atk_800959F8 lbl_80439EB4;
extern u8 lbl_80439EF8[];
extern M2C_UNK lbl_8058D490[];
extern void *lbl_805D2988;
extern s32 lbl_805D4F60[1];
extern s32 lbl_805D4F68;
extern s32 lbl_805D4F6C;
extern s32 lbl_805D4F70;
extern s32 lbl_805D4F74;
extern s32 lbl_805D4F78;
extern s32 lbl_805D4F7C;
extern u32 lbl_805D4F80;
extern s32 lbl_805D4F84;
extern s32 lbl_805D4F88;
extern u32 lbl_805D4F8C;
extern s32 lbl_805D4F90;
extern s32 lbl_805D4F94;
extern s32 lbl_805D4F9C;
extern u32 lbl_805D4FA0;
extern const s32 lbl_805D9718[1];
extern const s32 lbl_805D971C[1];
extern const s32 lbl_805D9720[1];
extern const f32 lbl_805D974C;
extern const f32 lbl_805D9770;
extern const f32 lbl_805D9774;
extern const f32 lbl_805D9778;
extern const f32 lbl_805D977C;
extern const f32 lbl_805D9780;
extern const f32 lbl_805D9784;
extern const f32 lbl_805D9788;
extern void *tl_04;

#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjEneDD__vt100();
extern "C" void TObjEneDD__vt77();
extern "C" void TObjEneDD__vt82();
extern "C" void TObjEneDD__vt83();
extern "C" void TObjEneDD__vt84();
extern "C" void TObjEneDD__vt86();
extern "C" void TObjEneDD__vt87();
extern "C" void TObjEneDD__vt88();
extern "C" void TObjEneDD__vt89();
extern "C" void TObjEneDD__vt90();
extern "C" void TObjEneDD__vt91();
extern "C" void TObjEneDD__vt92();
extern "C" void TObjEneDD__vt93();
extern "C" void TObjEneDD__vt94();
extern "C" void TObjEneDD__vt95();
extern "C" void TObjEneDD__vt96();
extern "C" void TObjEneDD__vt97();
extern "C" void TObjEneDD__vt98();
extern "C" void TObjEneDD__vt99();
extern "C" void TObjEneEpsilon__vt101();
extern "C" void TObjEneEpsilon__vt81();
extern "C" void TObjEneRe7Berura__vt103();
extern "C" void TObjEneRe7Berura__vt104();
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void TObjPlayer__sub_800111D8();
extern "C" void TObjPlayer__sub_80014830();
extern "C" void TObjPlayer__sub_80014838();
extern "C" void TObjPlayer__sub_80014840();
extern "C" void TObjPlayer__sub_80014890();
extern "C" void TObjPlayer__sub_80014894();
extern "C" void TObjPlayer__sub_80014898();
extern "C" void apply_slow_status__10TObjPlayerFPv();
extern "C" void update_shock_clock__10TObjPlayerFPv();
extern "C" void TObjPlayer__sub_800172CC();
extern "C" void TObjPlayer__sub_80018E6C();
extern "C" void TObjPlayer__sub_80019568();
extern "C" void TObjPlayer__sub_800F65D0();
extern "C" void apply_hit_message_flags__10TObjPlayerFPvPv();
extern "C" void add_actor_exp();
extern "C" void apply_action_hold_status();
extern "C" void apply_anti_technique__10TObjPlayerFv();
extern "C" void apply_attack_stat_status__10TObjPlayerFv();
extern "C" void apply_confusion_status__10TObjPlayerFv();
extern "C" void apply_defense_stat_status__10TObjPlayerFv();
extern "C" void apply_knockback_from_attacker();
extern "C" void apply_movement_ailment__10TObjPlayerFv();
extern "C" void apply_object_set_data();
extern "C" void apply_paralysis__10TObjPlayerFv();
extern "C" void apply_poison_status__10TObjPlayerFv();
extern "C" void apply_set_data__9TObjEnemyFPvPv();
extern "C" void apply_shock_status__10TObjPlayerFv();
extern "C" void apply_switch_attack__10TObjPlayerFi();
extern "C" void calc_distance_accuracy_penalty__10TObjPlayerFv();
extern "C" void classify_actor_view_detail();
extern "C" void clear_all_status_effects();
extern "C" void clear_harmful_statuses__10TObjPlayerFv();
extern "C" void cure_paralysis__10TObjPlayerFv();
extern "C" void cure_poison_ailment();
extern "C" void enemy_spawn_jellen_effect();
extern "C" void enemy_spawn_zalure_effect();
extern "C" void fn_80010EBC();
extern "C" void fn_80010EC0();
extern "C" void fn_80010EC4();
extern "C" void fn_80010EC8();
extern "C" void fn_800F5D80();
extern "C" void get_actor_body_center();
extern "C" void get_actor_level_index();
extern "C" void get_enemy_name__14TObjEnePanarmsFPv();
extern "C" void get_pos__10TObjPlayerFii();
extern "C" void has_flag_0x800__10TObjPlayerFPv();
extern "C" void is_actor_cadence_frame();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" u8 lbl_80439DC0[];
extern "C" u8 lbl_80439DD4[];
extern "C" u8 lbl_80439DEC[];
extern "C" u8 lbl_80439E04[];
extern "C" u8 lbl_80439E18[];
extern "C" u8 lbl_80439E30[];
extern "C" u8 lbl_80439E48[];
extern "C" u8 lbl_80439E60[];
extern "C" u8 lbl_80439E74[];
extern "C" u8 lbl_80439E88[];
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render__16TObjEneRe7BeruraFv();
extern "C" void render_actor_shadows_default();
extern "C" void reset_actor_action_state();
extern "C" void reset_pose__10TObjPlayerFPv();
extern "C" void roll_physical_accuracy__10TObjPlayerFv();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void test_flag30_512__10TObjPlayerFPv();
extern "C" void test_flag_1000__10TObjPlayerFPv();
extern "C" void test_flag_256__10TObjPlayerFPv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_start_action__10TObjPlayerFPvii();
extern "C" void update_action_hold_status__10TObjPlayerFv();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_attack_stat_status();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_movement_status__10TObjPlayerFv();
extern "C" void update_object_view_visibility();
extern "C" void update_poison_status__10TObjPlayerFv();
extern void *lbl_8048F698[2];
extern void *lbl_8048F6A0[9];
void *lbl_8048F650[7] = {
    (void *)0x43610000, (void *)0x0, (void *)0x600, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *lbl_8048F66C[11] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x41000000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
__declspec(section ".data") void *lbl_8048F698[2] = {
    (void *)&lbl_80439DC0, (void *)0x0,
};
void *lbl_8048F6A0[9] = {
    (void *)&lbl_80439DD4, (void *)&lbl_80439DEC, (void *)&lbl_80439E04, (void *)&lbl_80439E18,
    (void *)&lbl_80439E30, (void *)&lbl_80439E48, (void *)&lbl_80439E60, (void *)&lbl_80439E74,
    (void *)0x0,
};
void *lbl_8048F6C4[4] = {
    (void *)&lbl_80439E88, (void *)&lbl_8048F698, (void *)&lbl_8048F6A0, (void *)0x10008,
};
void *lbl_8048F6D4[32] = {
    (void *)0x10000, (void *)0x6, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x10000, (void *)0x7, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x30000, (void *)0x0, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x20000, (void *)0x3, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x20000, (void *)0x5, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x10000, (void *)0x4, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x30000, (void *)0x1, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x30000, (void *)0x2, (void *)0x3f4ccccd, (void *)0x0,
};
void *__vt__16TObjEneRe7Berura[107] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__16TObjEneRe7BeruraFv, (void *)&run_task__16TObjEneRe7BeruraFv,
    (void *)&render__16TObjEneRe7BeruraFv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFPv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&TObjPlayer__sub_800111D8,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjEneRe7Berura__vt26, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjPlayer__sub_80014898, (void *)&TObjPlayer__sub_80014894,
    (void *)&TObjPlayer__sub_80014890, (void *)&TObjEneRe7Berura__vt59, (void *)&TObjEneRe7Berura__vt60, (void *)&TObjEneRe7Berura__vt61,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&TObjPlayer__sub_800F65D0, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&TObjEneDD__vt77,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&fn_800F5D80, (void *)&TObjEneEpsilon__vt81,
    (void *)&TObjEneDD__vt82, (void *)&TObjEneDD__vt83, (void *)&TObjEneDD__vt84, (void *)&TObjEneRe7Berura__vt85,
    (void *)&TObjEneRe7Berura__vt86, (void *)&TObjEneDD__vt86, (void *)&TObjEneDD__vt87, (void *)&TObjEneDD__vt88,
    (void *)&TObjEneDD__vt89, (void *)&TObjEneDD__vt90, (void *)&TObjEneDD__vt91, (void *)&TObjEneDD__vt92,
    (void *)&TObjEneDD__vt93, (void *)&TObjEneDD__vt94, (void *)&TObjEneDD__vt95, (void *)&TObjEneDD__vt96,
    (void *)&TObjEneDD__vt97, (void *)&TObjEneDD__vt98, (void *)&TObjEneDD__vt99, (void *)&TObjEneDD__vt100,
    (void *)&TObjEneEpsilon__vt101, (void *)&TObjEneRe7Berura__vt103, (void *)&TObjEneRe7Berura__vt104,
};
#define lbl_8048F650 ((u8 *)lbl_8048F650)
#define lbl_8048F66C ((u8 *)lbl_8048F66C)
#define lbl_8048F6C4 ((u8 *)lbl_8048F6C4)
#define lbl_8048F6D4 ((T16_800959F8 *)lbl_8048F6D4)
#define __vt__16TObjEneRe7Berura ((M2C_UNK *)__vt__16TObjEneRe7Berura)

void state_attack__16TObjEneRe7BeruraFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r5;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        ((V_En_80094994 *) arg0)->m93();
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x3C0);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (temp_r5 & ~5);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 2);
        set_field_378__9TObjEneDDFPvi(arg0, 3, temp_r5);
        TObjPlayer__sub_800A0554(arg0 + 0x3D8);
        play_area_se_with_particle__12TBoss3VoloptFi(arg0 + 0x38);
        ((M2C_UNK (*)(void *))init_fields4B8__16TObjEneRe7BeruraFPv)(arg0);
        return;
    case 3:
        if (((V_Sub_80094994 *) (arg0 + 0x3D8))->m5() != 0) {
            ((M2C_UNK (*)(void *, M2C_UNK))transition_enemy_state)(arg0, 3);
        }
        return;
    case 0:
        ((V_En_80094994 *) arg0)->m100();
        ((V_En_80094994 *) arg0)->m86();
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFD);
        break;
    }
}

void TObjEneRe7Berura__sub_80094A9C(void *self, s32 msg) {
    switch (msg) {
    case 0:
        return;
    case 3:
        ((M2C_UNK (*)(void *, M2C_UNK))transition_enemy_state)((void *)(self), (M2C_UNK)(1));
        break;
    }
}

void TObjEneRe7Berura__vt85(s32 arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        TObjEneRe7Berura__sub_80094A9C((void *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 1:
        state_attack__16TObjEneRe7BeruraFPvi((u8 *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 3:
        TObjEneRe7Berura__sub_8009472C((void *) (arg0), (void *) (arg2));
        return;
    case 2:
        TObjEneRe7Berura__sub_80094624((void *) (arg0), (void *) (arg2));
        return;
    case 8:
        handle_state__16TObjEneRe7BeruraFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 4:
        TObjEneRe7Berura__sub_800940E8((void *) (arg0), (void *) (arg2));
        return;
    case 5:
        TObjEneRe7Berura__sub_80093C80((void *) (arg0), (void *) (arg2));
        return;
    case 6:
        TObjEneRe7Berura__sub_80093888((void *) (arg0), (void *) (arg2));
        return;
    case 7:
        TObjEneRe7Berura__sub_800936A8((void *) (arg0), (void *) (arg2));
        return;
    case 9:
        state_patrol__16TObjEneRe7BeruraFPvi((void *) (arg0), (void *) (arg2));
        return;
    case 10:
        TObjEneRe7Berura__sub_80093470((void *) (arg0), (void *) (arg2));
        return;
    case 11:
        update_death_state__16TObjEneRe7BeruraFPvi((void *) (arg0), (void *) (arg2));
    default:
        return;
    }
}

s32 check_death_trigger__16TObjEneRe7BeruraFPv(void *arg0) {
    struct VObj_80094BA4_80094994 *o = (struct VObj_80094BA4_80094994 *)arg0;
    if (o->m97() != 0) {
        ((M2C_UNK (*)(void *, M2C_UNK))transition_enemy_state)(arg0, 9);
        return 1;
    }
    return 0;
}

#pragma push
#pragma fp_contract on
void play_band_sound__16TObjEneRe7BeruraFPv(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, lbl_805D9770) != 0) || (objInBand__FP7GameObjf(arg0, TObjEneRe7Berura__data_805D9764) != 0)) {
        play_sound_effect(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003BC1F)), (u32) (arg0 + 0x38), 0, 0);
    }
}
extern int fold_flush_0;
#pragma pop

void TObjEneRe7Berura__sub_80094CD0(void *self) {
    reload_stats_keep_hp_tp__9TObjEneDDFPv(self, ((void * *)TObjEneRe7Berura__data_805D4F58)[TObjEneRe7Berura__data_80439DA8[1]],
                            ((void * *)TObjEneRe7Berura__data_805007D4)[TObjEneRe7Berura__data_80439DB0[1]],
                            ((void * *)TObjEneRe7Berura__data_805D4F5C)[TObjEneRe7Berura__data_80439DB8[1]]);
}

void destroy_parts__16TObjEneRe7BeruraFPv(Obj_80094D3C *self) {
    s32 i;
    for (i = 0; i < 2; i++) {
        if (self->parts[i] != 0) {
            queue_destruction__7TObjectFv(self->parts[i]);
            self->parts[i] = 0;
        }
    }
}

#pragma push
#pragma opt_common_subs off
void TObjEneRe7Berura__sub_80094D98(u8 *arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(arg0 + (M2C_FIELD(arg0, s32 *, 0x3F4) * 4));
    M2C_FIELD(temp_r3, s32 *, 0x418) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x418) & 0xFFFFFFFD);
}
extern int fold_flush_1;
#pragma pop

#undef PADV
#undef PADV4
s32 TObjEneRe7Berura__sub_80094DB4(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3D4) * 0x96;
}

u8 is_over_limit__16TObjEneRe7BeruraFPv(void *arg0) {
    int var_r4;
    s32 temp_r5;
    s32 temp_r0;

    temp_r5 = M2C_FIELD(arg0, s32 *, 0x4BC);
    var_r4 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4B8);
    if ((temp_r5 >= temp_r0) || (temp_r5 <= (s32) -temp_r0)) {
        var_r4 = 1;
    }
    return (u8) var_r4;
}

s32 step_toward_target__16TObjEneRe7BeruraFPvii(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 var_r31;

    var_r31 = 0;
    temp_r3 = angle_diff_s16(M2C_FIELD(arg0, s32 *, 0x60));
    if (temp_r3 > arg2) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + arg2);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4BC);
        if (temp_r0 < 0) {
            M2C_FIELD(arg0, s32 *, 0x4BC) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x4BC) = (s32) (temp_r0 + arg2);
        }
    } else if (temp_r3 < (s32) -arg2) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) - arg2);
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x4BC);
        if (temp_r0_2 > 0) {
            M2C_FIELD(arg0, s32 *, 0x4BC) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x4BC) = (s32) (temp_r0_2 - arg2);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x60) = arg1;
        var_r31 = 1;
    }
    return var_r31;
}

void init_fields4B8__16TObjEneRe7BeruraFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4B8) = ((s32 (*)(void))get_field_3D4_shifted__16TObjEneRe7BeruraFPv)();
    M2C_FIELD(arg0, s32 *, 0x4BC) = 0;
}

s32 get_field_3D4_shifted__16TObjEneRe7BeruraFPv(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x3D4) << 0xF;
}

void init_part__16TObjEneRe7BeruraFi(s32 arg0) {
    s32 *temp_r3;

    set_global_param__8TObjFishFi(M2C_FIELD(M2C_FIELD((*(void * *)&TObjEneRe7Berura__data_805D4F64), void **, 0x42C), s32 *, 0xC), (*(void * *)&TObjEneRe7Berura__data_805D4F64));
    temp_r3 = (s32 *)((s8 *)((M2C_UNK *)TObjEneRe7Berura__data_805007DC) + (arg0 * 0x64));
    ((M2C_UNK (*)(void *, s32))set_data_and_draw_node_tree__16TObjEneRe7BeruraFii)((s32 *)((s8 *)temp_r3 + 0x20), *temp_r3);
}

void set_data_and_draw_node_tree__16TObjEneRe7BeruraFii(int a0, int a1) { (*(int *)&TObjEneRe7Berura__data_805D4F98) = a1; ((int (*)(void))draw_node_tree__16TObjEneRe7BeruraFPv)(); }

void draw_node_tree__16TObjEneRe7BeruraFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r4;
    void *var_r30;

    var_r30 = arg0;
    do {
        push_matrix();
        temp_r4 = TObjEneRe7Berura__data_805D4F98;
        TObjEneRe7Berura__data_805D4F98 = temp_r4 + 0x30;
        concat_matrix__10TObjPlayerFUiUi(0, temp_r4);
        temp_r31 = M2C_FIELD(var_r30, s32 *, 0);
        if (!(temp_r31 & 8)) {
            draw_chunk_model(M2C_FIELD(var_r30, s32 *, 4));
        }
        pop_matrix();
        if (!(temp_r31 & 0x10)) {
            draw_node_tree__16TObjEneRe7BeruraFPv((void *)(M2C_FIELD(var_r30, void **, 0x2C)));
        }
        var_r30 = M2C_FIELD(var_r30, void **, 0x30);
    } while (var_r30 != NULL);
}

void apply_attack_params__16TObjEneRe7BeruraFiPv(s32 arg0, u8 *arg1) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r6 = M2C_FIELD(arg1, s32 *, 0);
    TObjEneRe7Berura__data_805D4F98 = temp_r6;
    temp_r5 = M2C_FIELD(arg1, s32 *, 4);
    lbl_805D4F90 = temp_r5;
    temp_r4 = M2C_FIELD(arg1, s32 *, 8);
    lbl_805D4F94 = temp_r4;
    lbl_805D4F9C = (long) (arg1 + 0x58);
    push_matrix_from((void *) (lbl_8058D490), (int) (temp_r4), (int) (temp_r5), (int) (temp_r6));
    collect_node_matrices__16TObjEneRe7BeruraFPvi((void *)((void *) (arg0)), (int)((int) (0)));
    pop_matrix();
}

#define V ((f32 *)lbl_805D4F9C)
#define node ((Node_8009503C *)arg0)
M2C_UNK collect_node_matrices__16TObjEneRe7BeruraFPvi(void *arg0, int idx) {
    Mtx_8009503C m;
    u32 flags;
    do {
        push_matrix();
        compose_motion_node_matrix((int)node);
        flags = node->flags;
        if (idx == lbl_805D4F90) {
            V[0] = TObjEneRe7Berura__data_805D972C;
            V[1] = TObjEneRe7Berura__data_805D972C;
            V[2] = TObjEneRe7Berura__data_805D972C;
            matrix_mult_vec(0, V, V);
            V[1] = V[1] + lbl_805D9774;
            V[2] = V[2] + TObjEneRe7Berura__data_805D9764;
            get_current_matrix(&m);
            ((M2C_UNK (*)(void *))push_matrix_from)(lbl_8058D490);
            translate_matrix(0, -V[0], -V[1], -V[2]);
            ((M2C_UNK (*)(M2C_UNK, void *))concat_matrix__10TObjPlayerFUiUi)(0, &m);
            get_current_matrix(&m);
            pop_matrix();
            copy_matrix__10TObjPlayerFUiUi(0, &m);
        }
        if (idx >= lbl_805D4F90 && idx <= lbl_805D4F94) {
            s32 p = TObjEneRe7Berura__data_805D4F98;
            TObjEneRe7Berura__data_805D4F98 = p + 0x30;
            get_current_matrix((void *)p);
        }
        idx++;
        if (!(flags & 0x10)) {
            idx = collect_node_matrices__16TObjEneRe7BeruraFPvi(node->child, idx);
        }
        pop_matrix();
        arg0 = node->next;
    } while (arg0 != NULL);
    return idx;
}

u8 TObjEneRe7Berura__sub_8009518C(O_8009518C *self) {
    return !(self->flags[self->idx] & 2);
}

#pragma push
#pragma fp_contract on
s32 acquire_target_in_view__16TObjEneRe7BeruraFPv(Berura_800951AC *self) {
    Vec_800951AC v;
    s32 n;
    Player_800951AC *p;
    u16 id;
    s32 i;
    f32 c;
    f32 s;
    f32 limit;
    f32 d;
    f32 best;
    best = TObjEneRe7Berura__data_805D972C;
    id = 0xFFFF;
    limit = cos_table_lookup(0xAAA);
    s = sin_table_lookup(self->angle);
    c = cos_table_lookup(self->angle);
    n = get_game_mode__6TLobbyFv();
    for (i = 0; i < n; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (is_alive__9TObjEneDDFPv(p) != 0) {
            VecCopy__FP3VecPC3Vec(&v, &p->pos38);
            subtract_vector(&v, &self->pos);
            v.y = TObjEneRe7Berura__data_805D972C;
            d = clamp_velocity__15TObjBoss2TunnelFPv(&v);
            if (d < TObjEneRe7Berura__data_805D9724 && d > best &&
                s * v.x + c * v.z > limit &&
                csnLookAt(&self->pos, &p->pos) == 0) {
                id = obj_getField1c(p);
                best = d;
            }
        }
    }
    if (id != 0xFFFF) {
        enemy_set_target_id(self, id);
        return 1;
    }
    return 0;
}
extern int fold_flush_2;
#pragma pop

#undef V
#undef node
void TObjEneRe7Berura__sub_80095328(void) {  }

void TObjEneRe7Berura__vt86(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C));
}

void update_collision_center__16TObjEneRe7BeruraFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (TObjEneRe7Berura__data_805D9764 + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    ((M2C_UNK (*)(void *, void *, void *, f32))VecCopy__FP3VecPC3Vec)((void *) (arg0 + 0x74), (void *) (arg0 + 0x2FC), (void *) (arg0), (f32) (TObjEneRe7Berura__data_805D9764));
}

void TObjEneRe7Berura__vt59(void) {  }

void TObjEneRe7Berura__vt60(u8 *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x3C0) & 4) || ((s32) (M2C_FIELD(arg0, s16 *, 0x33E) - M2C_FIELD(arg0, s16 *, 0x32C)) < (s32) ((s16) M2C_FIELD(arg0, s16 *, 0x2B8) / 5))) {
        clear_attack_receipts();
        return;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xA) {
        transition_enemy_state((void*)((void *)(arg0)), (void*)((int) (0xA)));
    }
}

void TObjEneRe7Berura__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 11) { transition_enemy_state(p, (void*)11); } }

void TObjEneRe7Berura__vt26(void) {  }

void run_task__16TObjEneRe7BeruraFv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18 *)(arg0))->m103();
        return;
    }
    if (((VObj_18 *)(arg0))->m81() != 4) {
        ((VObj_18 *)(arg0))->m83();
        M2C_FIELD(arg0, s32 *, 0x3D0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3D0) + M2C_FIELD(arg0, s32 *, 0x3CC));
        M2C_FIELD(arg0, s32 *, 0x3D0) = (s32) (u8) M2C_FIELD(arg0, s32 *, 0x3D0);
    }
    ((M2C_UNK (*)(void *))update_collision_center__16TObjEneRe7BeruraFPv)((void *) (arg0));
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
    ((VObj_18 *)(arg0))->m98();
}

Berura_800954E8 *__dt__16TObjEneRe7BeruraFv(Berura_800954E8 *self, s16 flag) {
    s32 i;
    if (self != 0) {
        self->vtbl = ((s32 *)&*__vt__16TObjEneRe7Berura);
        ((void (*)(void *))destroy_parts__16TObjEneRe7BeruraFPv)(self);
        for (i = 0; i < 2; i++) {
            if (self->parts[i] != 0) {
                delete self->parts[i];
                self->parts[i] = 0;
            }
        }
        if (self->effect != 0) {
            queue_destruction__7TObjectFv(self->effect);
            self->effect = 0;
        }
        free_collision_body_parts(self);
        __destroy_arr(self->arr, (void *)((s32 *)&TObjPlayer__sub_800D7C58), 0x1C, 4);
        TObjPlayer__sub_800A05B8(self->motionB, -1);
        TObjPlayer__sub_800A05B8(self->motionA, -1);
        __dt__9TObjEneDDFv(self, 0);
        if (flag > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}

void init_enemy__16TObjEneRe7BeruraFPv(u8 *arg0) {
    Self_800955E0 *S = (Self_800955E0 *)arg0;
    s32 i;
    s32 j;
    init_position_vectors__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x34) = M2C_FIELD(M2C_FIELD((*(u8 * *)&TObjEneRe7Berura__data_805D4F64), u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = M2C_FIELD(M2C_FIELD((*(u8 * *)&TObjEneRe7Berura__data_805D4F64), u8 **, 0x42C), s32 *, 0xC);
    init_model__9TObjEneDDFPv(arg0, lbl_8048F66C, 1);
    set_field_d8__10TObjPlayerFPvi(arg0, ((u8 *)lbl_8048F6D4));
    set_field_dc__10TObjPlayerFPvi(arg0, M2C_FIELD((*(u8 * *)&TObjEneRe7Berura__data_805D4F64), s32 *, 0x430));
    M2C_FIELD(arg0, s16 *, 0xB8) = 0;
    set_animation__10TObjPlayerFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    set_field_b8__14TObjEnePanarmsFPvs(arg0, M2C_FIELD(arg0, s16 *, 0xB8));
    reset_hp__9TObjEneDDFPv(arg0, TObjEneRe7Berura__data_805D4F58[TObjEneRe7Berura__data_80439DA8[0]],
        TObjEneRe7Berura__data_805007D4[TObjEneRe7Berura__data_80439DB0[0]],
        TObjEneRe7Berura__data_805D4F5C[TObjEneRe7Berura__data_80439DB8[0]]);
    set_state_8__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, u8 **, 0x350) = lbl_8048F650;
    initialize_enemy_state__9TObjEneDDFPv(arg0, 0x25);
    M2C_FIELD(arg0, f32 *, 0x37C) = TObjEneRe7Berura__data_805D9730;
    enemy_init_acquire_period(arg0, 0x3C);
    enemy_init_validate_period(arg0, 0x3C);
    M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C4) = -1;
    M2C_FIELD(arg0, s32 *, 0x3C8) = 0xFF000000;
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    M2C_FIELD(arg0, s32 *, 0x3D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x3D4) = 1;
    ((VObj_14_d2ec4b *)(arg0 + 0x3D8))->m2();
    M2C_FIELD(arg0, s32 *, 0x3F4) = 1;
    M2C_FIELD(arg0, s32 *, 0x3F8) = spawn_punch__16TObjEneRe7BeruraFPv(arg0);
    ((VObj_14_d2ec4b *)(arg0 + 0x3FC))->m2();
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        ((VObj_14_d2ec4b *)(arg0 + 0x3FC))->m1(0xA);
    }
    for (i = 0; i < 2; i++) {
        S->f418[i] = 0;
        ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&S->v420[i], arg0 + 0x38);
        S->f438[i] = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x440) = create__12TObjEneSaverFPvPv(0xFF00FF00, 0xA0703030);
    M2C_FIELD(arg0, s32 *, 0x444) = create__12TObjEneSaverFPvPv(0xFF00FF00, 0xA0703030);
    for (j = 0; j < 4; j++) {
        activate_and_dispatch__10TObjPlayerFPv(&S->subs[j]);
    }
    M2C_FIELD(arg0, s32 *, 0x4B8) = 0;
    M2C_FIELD(arg0, s32 *, 0x4BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C0) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
    M2C_FIELD(arg0, f32 *, 0x4D0) = TObjEneRe7Berura__data_805D972C;
    M2C_FIELD(arg0, f32 *, 0x4D4) = TObjEneRe7Berura__data_805D972C;
    M2C_FIELD(arg0, f32 *, 0x4D8) = TObjEneRe7Berura__data_805D972C;
    M2C_FIELD(arg0, f32 *, 0x4DC) = TObjEneRe7Berura__data_805D972C;
    M2C_FIELD(arg0, f32 *, 0x4E0) = TObjEneRe7Berura__data_805D972C;
    ((VObj_18_b345b0 *)arg0)->m93();
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    ((VObj_18_b345b0 *)arg0)->m85(M2C_FIELD(arg0, s16 *, 0x326), 4);
}

void *TObjEneRe7Berura__ct(void *arg0, void *arg1, void *arg2) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjEneRe7Berura;
    init_vtable_and_field18__10TObjPlayerFPv((void *)((char *)arg0 + 984));
    init_vtable_and_field18__10TObjPlayerFPv((void *)((char *)arg0 + 1020));
    __construct_array((void *)((char *)arg0 + 1096), init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2988;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    ((void (*)(void *))TObjEneRe7Berura__sub_80095328)(arg0);
    ((void (*)(void *))init_enemy__16TObjEneRe7BeruraFPv)(arg0);
    return arg0;
}

void destroy_children__16TObjEneRe7BeruraFv(void) {
    if ((u32) lbl_805D4FA0 != 0U) {
        __dt__11TBoss4Type3FPvs((void*)lbl_805D4FA0, 1);
        lbl_805D4FA0 = 0U;
    }
    if ((u32) lbl_805D4F8C != 0U) {
        destroy_buffer_pair((void*)lbl_805D4F8C, 1);
        lbl_805D4F8C = 0U;
    }
    if ((u32) lbl_805D4F80 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D4F80);
        lbl_805D4F80 = 0U;
    }
    if ((u32) TObjEneRe7Berura__data_805D4F64 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneRe7Berura__data_805D4F64, 1);
        TObjEneRe7Berura__data_805D4F64 = 0U;
    }
}

void *create__16TObjEneRe7BeruraFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4E4);
    if (o != NULL) {
        o = TObjEneRe7Berura__ct((void *)(o), (void *)(tl_04), (void *)(arg0));
    }
    return o;
}

f32 lbl_805007C8[3];

__declspec(section ".data") s32 TObjEneRe7Berura__data_805007D4[2];

Elem_800959F8 TObjEneRe7Berura__data_805007DC[2];

#define RES ((Res_800959F8 *)TObjEneRe7Berura__data_805D4F64)
void load_static_resources__16TObjEneRe7BeruraFv(void) {
    s32 pair[4];
    V3_800959F8 vecs[4];
    Res_800959F8 *r;
    u32 m;
    u8 *buf;
    s32 i;
    void *p;
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        r = load_enemy_bml_resource_named(lbl_8048F6C4, lbl_80439EF8);
    } else {
        r = load_enemy_bml_resource(lbl_8048F6C4);
    }
    TObjEneRe7Berura__data_805D4F64 = (u32)r;
    lbl_805007C8[0] = TObjEneRe7Berura__data_805D972C;
    lbl_805007C8[1] = TObjEneRe7Berura__data_805D972C;
    lbl_805007C8[2] = TObjEneRe7Berura__data_805D972C;
    lbl_805D4F68 = 0;
    lbl_805D4F6C = 0;
    lbl_805D4F70 = 0;
    lbl_805D4F74 = 0;
    lbl_805D4F78 = 0;
    lbl_805D4F7C = 0;
    m = *(u32 *)(r->f42C + 8);
    buf = alloc_buffer__11TOBoss4RockFPv(0x660);
    lbl_805D4F80 = (u32)buf;
    TObjEneRe7Berura__data_805007DC[0].buf = buf;
    TObjEneRe7Berura__data_805007DC[1].buf = buf + 0x330;
    TObjEneRe7Berura__data_805007DC[0].f4 = 0x21;
    TObjEneRe7Berura__data_805007DC[0].f8 = 0x31;
    TObjEneRe7Berura__data_805007DC[1].f4 = 0x38;
    TObjEneRe7Berura__data_805007DC[1].f8 = 0x48;
    TObjEneRe7Berura__data_805007DC[0].fC = 3;
    TObjEneRe7Berura__data_805007DC[0].f10 = TObjEneRe7Berura__data_805D9764;
    TObjEneRe7Berura__data_805007DC[0].f14 = TObjEneRe7Berura__data_805D9740;
    TObjEneRe7Berura__data_805007DC[1].fC = 4;
    TObjEneRe7Berura__data_805007DC[1].f10 = lbl_805D9778;
    TObjEneRe7Berura__data_805007DC[1].f14 = lbl_805D977C;
    for (i = 0; i < 2; i++) {
        Elem_800959F8 *e = &TObjEneRe7Berura__data_805007DC[i];
        u8 *ent = RES->f430[lbl_8048F6D4[e->fC].f4].f4;
        set_global_flag__10TObjPlayerFv();
        bind_motion_context(ent, e->f14);
        ((void (*)(u32, void *))apply_attack_params__16TObjEneRe7BeruraFiPv)(m, e);
        clear_global_state__10TObjPlayerFv();
        e->f18 = collect_and_count__12TBoss3VoloptFUii(m, e->f4);
        e->f1C = (s32)collect_and_count__12TBoss3VoloptFUii(m, e->f8);
        e->f20 = 7;
        e->f24 = e->f18[1];
        e->f28 = TObjEneRe7Berura__data_805D972C;
        e->f2C = TObjEneRe7Berura__data_805D972C;
        e->f30 = TObjEneRe7Berura__data_805D972C;
        e->f34 = 0;
        e->f38 = 0;
        e->f3C = 0;
        e->f40 = lbl_805D974C;
        e->f44 = lbl_805D974C;
        e->f48 = lbl_805D974C;
        e->f4C = e->f18[0x2C / 4];
        e->f50 = 0;
    }
    lbl_805D4F84 = ((s32 *)collect_and_count__12TBoss3VoloptFUii(m, 2)[1])[1] + 8;
    lbl_805D4F88 = ((s32 *)collect_and_count__12TBoss3VoloptFUii(m, 1)[1])[1] + 8;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x14);
    if (p != NULL) {
        p = alloc_tables__6TLobbyFPvii(p, *(s32 *)(RES->f42C + 8), 2);
    }
    lbl_805D4F8C = (u32)p;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x18);
    if (p != NULL) {
        p = init_trail_buffer__11TBoss4Type3FPvifff(p, 4, lbl_805D9780, lbl_805D9784, TObjEneRe7Berura__data_805D9738);
    }
    lbl_805D4FA0 = (u32)p;
    pair[0] = 0x2E;
    pair[1] = 0x2E;
    pair[2] = 0x45;
    pair[3] = 0x45;
    for (i = 0; i < 4; i++) {
        vecs[i].x = TObjEneRe7Berura__data_805D972C;
        vecs[i].y = TObjEneRe7Berura__data_805D972C;
        vecs[i].z = TObjEneRe7Berura__data_805D972C;
    }
    vecs[0].x = TObjEneRe7Berura__data_805D9730;
    vecs[2].x = TObjEneRe7Berura__data_805D9730;
    draw_motion_trail__11TBoss4Type3FPviiii(p, *(s32 *)(RES->f42C + 8), (RES->f430 + lbl_8048F6D4[2].f4)->f4, pair, vecs);
    for (i = 0; i < 1; i++) {
        TObjEneRe7Berura__data_805D4F58[i] = register_boss__6TLobbyFPv(lbl_805D9718[i]);
    }
    for (s32 j = 0; j < 2; j++) {
        TObjEneRe7Berura__data_805007D4[j] = dispatch_shared_handler_b__6TLobbyFPv(lbl_80439DA0[j]);
    }
    for (i = 0; i < 1; i++) {
        TObjEneRe7Berura__data_805D4F5C[i] = register_object__6TLobbyFPv(lbl_805D971C[i]);
    }
    for (i = 0; i < 1; i++) {
        lbl_805D4F60[i] = dispatch_shared_handler_a__6TLobbyFPv(lbl_805D9720[i]);
    }
    {
        Atk_800959F8 atk = lbl_80439EB4;
        atk.w[0] = (s32)RES->f430;
        spawn_npc_enemy__6TLobbyFsiiiff(0x15, *(s32 *)(RES->f42C + 8), *(s32 *)(RES->f42C + 0xC), (s32)&atk, lbl_805D9788, TObjEneRe7Berura__data_805D972C);
    }
}

void fn_80095DD0(u8 *arg0) {
    s32 *temp_r3;
    s32 *temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 **, 0x18);
    *temp_r4 &= 0xFFFFFFF7;
    temp_r3 = M2C_FIELD(arg0, s32 **, 0x1C);
    *temp_r3 &= 0xFFFFFFF7;
}

void fn_80095DF4(u8 *arg0) {
    s32 *temp_r3;
    s32 *temp_r4;
    temp_r4 = M2C_FIELD(arg0, s32 **, 0x18);
    *temp_r4 |= 8;
    temp_r3 = M2C_FIELD(arg0, s32 **, 0x1C);
    *temp_r3 |= 8;
}

#undef RES
}
