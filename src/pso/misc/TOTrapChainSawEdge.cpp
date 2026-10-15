#include "types.h"
#pragma readonly_strings on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 fn_802C9924(s32);
s32 get_motion__17TOTrapChainSawKeyFi(s32);
s32 get_model__17TOTrapChainSawKeyFi(int, f32);
void TOTrapChainSawKey__vt14(u8 *arg0);
}

extern "C" {

struct VBase_18_373ea7 { char pad[0x18]; };

struct VObj_18_373ea7 : VBase_18_373ea7 {
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
    virtual M2C_UNK m13();
    virtual M2C_UNK m14();
};

typedef struct S_802C86D4 { u8 pad0[0xE8]; s32 fE8; } S_802C86D4;

typedef struct P_802C86D4 {
    u8 pad0[2];
    u16 sA;
    s16 sC;
    u8 pad6[2];
    s16 s10;
    s8 b12;
    s8 b13;
} P_802C86D4;

struct RecoveredGlobal_802C8910_lbl_804E0CC0 {
    M2C_UNK value;
    u8 remaining[0xDC];
};

typedef char RecoveredGlobal_802C8910_lbl_804E0CC0_size[sizeof(RecoveredGlobal_802C8910_lbl_804E0CC0) == 0xE0 ? 1 : -1];

struct VBase_18_62e3d5 { char pad[0x18]; };

struct VObj_18_62e3d5 : VBase_18_62e3d5 {
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
    virtual M2C_UNK m21(void *, s32 *, M2C_UNK, M2C_UNK, M2C_UNK);
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual f32 m28(f32);
};

struct Pair_802C80F0 { s32 v[2]; };
struct P_802C8BD0 { s32 a; f32 b; };

struct T_802C8F68 { s32 r[3][3]; };

struct VBase_802C8E24 { char pad[0x18]; };

struct VObj_802C8E24 : VBase_802C8E24 {
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
};

struct Copy_802C8E24 { u32 a; struct { u32 w[14]; } b; };

struct Ent_802C8E24 { u8 b[0x58]; };

struct Pair_802C8C60 { s32 v[2]; };

struct Obj_802C8C60 {
    u8 pad0[0x24];
    s32 f24;
    u8 pad28[0x70 - 0x28];
    f32 f70;
    u8 pad74[0xB4 - 0x74];
    f32 fB4;
    f32 fB8;
    s32 fBC;
    u8 padC0[0xC8 - 0xC0];
    s32 fC8;
    u8 padCC[0xF8 - 0xCC];
    s32 fF8;
};

struct Base_802C9564_802C9040 { char pad[0x18]; };

struct VObj_802C9564_802C9040 : Base_802C9564_802C9040 {
virtual void f15();
virtual void f16();
virtual void f17();
virtual void f18();
virtual void f19();
virtual void f20();
virtual void f21();
virtual void f22();
virtual void f23();
virtual void f24();
virtual void f25();
virtual void f26();
virtual void f27();
virtual void f28();
virtual void f29();
virtual void f30();
virtual void f31();
virtual void f32();
virtual void f33();
virtual void f34();
virtual void f35();
virtual void f36();
virtual void f37();
virtual void f38();
    virtual void m24();
    virtual void m25();
};

struct Base_802C9600 { char pad[0x18]; };
struct VObj_802C9600 : Base_802C9600 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21();
};
typedef void (VObj_802C9600::*Act_802C9600)();

struct Base_802C96EC_802C9040 { char pad[0x18]; };

struct VObj_802C96EC_802C9040 : Base_802C96EC_802C9040 {
    virtual void m0();
    virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8();
    virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17();
    virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21();
    virtual void m22(); virtual void m23();
    virtual void m24();
};

struct VBase_18_52534d { char pad[0x18]; };

struct VObj_18_52534d : VBase_18_52534d {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
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
    virtual M2C_UNK m23();
};

struct VBase_18_fd30ee { char pad[0x18]; };

struct VObj_18_fd30ee : VBase_18_fd30ee {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
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
    virtual M2C_UNK m19();
};

struct RecoveredGlobal_802C9890___vt__14TOTrapChainSaw {
    M2C_UNK value;
    u8 remaining[0x78];
};

typedef struct F4_802C8FF8 { f32 v[4]; } F4_802C8FF8;

typedef struct S_802C9124 { u8 pad0[0xD8]; s32 f[4]; } S_802C9124;

typedef struct S_802C9174 { u8 pad0[0xD8]; s32 f[4]; } S_802C9174;

struct Base_802C91DC { char pad[0x18]; };

struct VObj_802C91DC : Base_802C91DC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(s32);
    virtual s32 m17(s32);
    virtual void m18(s32);
};

typedef char RecoveredGlobal_802C9890___vt__14TOTrapChainSaw_size[sizeof(RecoveredGlobal_802C9890___vt__14TOTrapChainSaw) == 0x7C ? 1 : -1];

struct Base_802C936C { char pad[0x18]; };

struct VObj_802C936C : Base_802C936C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
};

int memset(void*, int, int);
u16 obj_getField1c(void *);
M2C_UNK obj_setFlags30(void *, int);
s8 get_current_floor(int);
s32 get_field_3e4__10TObjPlayerFPv(s32);
f32 fabs_float(f32);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);
void unregister_object_by_id(void *);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(void *);
s32 TOTrapAncient02R__sub_80154D78(void *);
M2C_UNK refresh_collision_body_centers(void *);
u32 check_actor_body_contact(void *, s32, f32);
void free_collision_body_parts(void *);
M2C_UNK init_collision_body_parts(void *, int, int);
void destroy_key_base__5TOKeyFPvs(void *, int);
s32 init_map_object_base(void *, void *);
void finalize_and_send_60__6TLobbyFPv(void *);
void init_6x05_switch_changed__6TLobbyFPv(void *);
s32 get_player_by_client_id(s32);
void draw_ginja_model__10TObjPlayerFPvi(void *, void *, f32);
void begin_effect_render__13TParticleCtrlFv(void);
void end_effect_render__13TParticleCtrlFv(void);
s32 get_global_state__14TOKeyMachine01Fv();
s32 play_persistent_sound(void *, void *, void *, int, int);
u8 is_current_floor_switch_set(u16);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
void TOTrapChainSawEdge__vt21(void *arg0);
void TOTrapChainSawEdge__vt20(void *arg0);
void * __dt__18TOTrapChainSawEdgeFv(void *arg0, s16 arg1);
u8 * TOTrapChainSawEdge__ct(u8 *arg0);
void TParticleCtrl__sub_802C8464(u32 arg0);
void TOTrapChainSawKey__vt25(void);
void TOTrapChainSawKey__vt15(void* p);
void TOTrapChainSawKey__vt12(void);
void TOTrapChainSawKey__vt22(u8 *arg0);
void TOTrapChainSawKey__vt16(S_802C86D4 *arg0);
int TOTrapChainSawKey__vt13(void* p);
void * create__17TOTrapChainSawKeyFPv(void *arg0);
void * __dt__17TOTrapChainSawKeyFv(void *arg0, s16 arg1);
u8 * TOTrapChainSawKey__ct(u8 *arg0, void * _w1, void * _w2);
void TOTrapChainSawDamage__vt25(u8 *arg0);
void TOTrapChainSawDamage__vt24(void* p);
void TOTrapChainSawDamage__vt12(void);
void TOTrapChainSawDamage__vt23(void *arg0);
void TOTrapChainSawDamage__vt22(void *arg0);
void TOTrapChainSawDamage__vt16(u8 *arg0, u8 *arg1);
void TOTrapChainSawDamage__vt14(Obj_802C8C60 *arg0, f32 _w1);
void TOTrapChainSawDamage__vt13(void *arg0);
void * create__20TOTrapChainSawDamageFPv(void *arg0);
void * __dt__20TOTrapChainSawDamageFv(void *arg0, s16 arg1);
void * TOTrapChainSawDamage__ct(void *arg0, void *arg1, void *arg2);
s32 get_area_table_value__17TOTrapChainSawKeyFii(s32 arg0, s32 arg1);
f32 scale_by_level__14TOTrapChainSawFf(f32 farg0);
void update_demo__14TOTrapChainSawFPv(void *arg0);
void TOTrapChainSaw__sub_802C9090(void);
void update_demo_if_in_range__14TOTrapChainSawFPv(u8 *arg0);
int clear_field_d8__14TOTrapChainSawFPv(void* p);
void set_hit_cooldown_for_player__14TOTrapChainSawFPvPv(S_802C9124 *arg0, void *arg1);
s32 consume_counter__14TOTrapChainSawFPvPv(S_802C9174 *arg0, void *arg1);
int check_player_contact__14TOTrapChainSawFPv(void *arg0);
void update_sweep__14TOTrapChainSawFPv(void *arg0);
void update_state__14TOTrapChainSawFPv(u8 *arg0);
void update_active_flag__14TOTrapChainSawFPv(void *arg0);
void decode_params__14TOTrapChainSawFPv(void *arg0);
void * __dt__14TOTrapChainSawFv(void *arg0, s16 arg1);
u8 * TOTrapChainSaw__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 fn_802C9924(s32);
s32 get_motion__17TOTrapChainSawKeyFi(s32);
void set_damage__20TOTrapChainSawDamageFPvi(void *, void *);
M2C_UNK TOTrapChainSawDamage__sub_802C9C00(void *, int);
s32 is_not_split_screen__13TRaderMapCoreFv();
M2C_UNK set_global_count__12TObjNpcEnemyFi(M2C_UNK);
void debug_printf_at(s32, const char *, ...);
void rotate_matrix_y(int, void *);
void push_matrix(void);
void pop_matrix(void);
void post_translate_matrix(void *);
void set_global_param__8TObjFishFi(void *);
void set_model_node_callback(void *);
void draw_ginja_model_with_motion(void *, void *, f32);

extern M2C_UNK __vt__14TOTrapChainSaw[];
extern M2C_UNK __vt__17TOTrapChainSawKey[];
extern M2C_UNK __vt__18TOTrapChainSawEdge[];
extern M2C_UNK __vt__20TOTrapChainSawDamage[];
extern u32 seabed_suiso_linked_switch_counts[5];
extern u32 seabed_suiso_switch_counts[5];
extern s32 local_client_id;
extern s32 game_difficulty_selection;
extern void *tl_05;
void *chainsaw_ginja_model_filenames[6] = {
    (void *)"fe_obj_nokogiri_2m.gj", (void *)"fe_obj_nokogiri_4m.gj", (void *)"fe_obj_sekigai_light_moto.gj", (void *)"fe_obj_sekigai2m_moto.gj",
    (void *)"fe_obj_sekigai4m_moto.gj", (void *)0x0,
};
void *bm_obj_jungle_nokogiri_motion_names[6] = {
    (void *)"fe_obj_nokogiri_2m.njm", (void *)"fe_obj_nokogiri_4m.njm", (void *)"fe_obj_sekigai_light_moto.njm", (void *)"fe_obj_sekigai2m_moto.njm",
    (void *)"fe_obj_sekigai4m_moto.njm", (void *)0x0,
};
void *bm_obj_jungle_nokogiri_resource_descriptor[4] = {
    (void *)"bm_obj_jungle_nokogiri.bml", (void *)&chainsaw_ginja_model_filenames, (void *)&bm_obj_jungle_nokogiri_motion_names, (void *)0x50005,
};
const char *TOTrapChainSaw__name = "TOTrapChainSaw";
__declspec(section ".rodata") F4_802C8FF8 TOTrapChainSaw__level_scale_table = { 1.0f, 2.0f, 3.0f, 6.0f };
const T_802C8F68 chainsaw_area_table_values = { { { 0x4D01F, 0x4C122, 0x4BC21 }, { 0x4004D01F, 0x4004C122, 0x4004BC21 }, { 0x4004D01F, 0x4004C122, 0x4004BC21 } } };
const char *TOTrapChainSawDamage_class_name = "TOTrapChainSawDamage";
const s32 lbl_80471F28[2] = { 0, 1 };
const s32 lbl_80471F30[2] = { 0, 1 };
const char *lbl_805D3F08 = "TOTrapChainSawKey";
const s32 lbl_80471F4C[2] = { 3, 4 };
const s32 lbl_80471F54[2] = { 3, 4 };
const char *TOTrapChainSawEdge_class_name = "TOTrapChainSawEdge";
const s32 lbl_80471F70[2] = { 0, 1 };
const s32 lbl_80471F78[2] = { 0, 1 };
void *lbl_804E0C10[44] = {
    (void *)0xc0a00000, (void *)0x0, (void *)0x0, (void *)0x40400000,
    (void *)0x0, (void *)0x0, (void *)0x10403, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0xc1400000,
    (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x41000000,
    (void *)0x1, (void *)0x10503, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0xc0a00000, (void *)0x0,
    (void *)0x0, (void *)0x40400000, (void *)0x0, (void *)0x0,
    (void *)0x10403, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0xc1a00000, (void *)0x0, (void *)0x0,
    (void *)0x40000000, (void *)0x41800000, (void *)0x1, (void *)0x10503,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
};
void *chain_saw_collision_body_part_table[44] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x40400000,
    (void *)0x0, (void *)0x0, (void *)0x10403, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0xc1200000,
    (void *)0x0, (void *)0x0, (void *)0x40000000, (void *)0x41000000,
    (void *)0x1, (void *)0x10503, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0x40400000, (void *)0x0, (void *)0x0,
    (void *)0x10403, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0, (void *)0xc1a00000, (void *)0x0, (void *)0x0,
    (void *)0x40000000, (void *)0x41900000, (void *)0x1, (void *)0x10503,
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
};

void TOTrapChainSawEdge__vt14(void *arg0) {
    Pair_802C80F0 a = *(Pair_802C80F0 *)lbl_80471F70;
    Pair_802C80F0 b = *(Pair_802C80F0 *)lbl_80471F78;
    s32 x;
    M2C_FIELD(arg0, s32 *, 0xFC) = (s32) M2C_FIELD(arg0, f32 *, 0x70);
    x = M2C_FIELD(arg0, s32 *, 0xFC);
    M2C_FIELD(arg0, s32 *, 0xFC) = x < 0 ? 0 : (x > 1 ? 1 : x);
    M2C_FIELD(arg0, s32 *, 0xC8) = ((s32 (*)(s32))get_model__17TOTrapChainSawKeyFi)(a.v[M2C_FIELD(arg0, s32 *, 0xFC)]);
    M2C_FIELD(arg0, s32 *, 0xBC) = get_motion__17TOTrapChainSawKeyFi(b.v[M2C_FIELD(arg0, s32 *, 0xFC)]);
    M2C_FIELD(arg0, s32 *, 0x24) = fn_802C9924(0);
    M2C_FIELD(arg0, f32 *, 0xB4) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0xB8) = (1.0f);
}

void TOTrapChainSawEdge__vt23(void *arg0) {
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, void **, 0x24));
    push_matrix();
    post_translate_matrix((void *)((char *)arg0 + 56));
    push_matrix();
    rotate_matrix_y(0, M2C_FIELD(arg0, void **, 0x60));
    rotate_matrix_y(0, M2C_FIELD(arg0, void **, 0xD4));
    draw_ginja_model_with_motion(M2C_FIELD(arg0, void **, 0xC8), M2C_FIELD(arg0, void **, 0xBC), M2C_FIELD(arg0, f32 *, 0xB4));
    pop_matrix();
    pop_matrix();
}

void TOTrapChainSawEdge__vt21(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x104);
    switch (temp_r0) {
    case 0:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x100);
        if (temp_r4 > 0) {
            M2C_FIELD(arg0, s32 *, 0x100) = (s32) (temp_r4 - 1);
            M2C_FIELD(arg0, s32 *, 0xF8) = (s32) M2C_FIELD(arg0, s32 *, 0xCC);
            M2C_FIELD(arg0, s32 *, 0x104) = 1;
        }
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0xD4) = (s32) (M2C_FIELD(arg0, s32 *, 0xD4) + M2C_FIELD(arg0, s32 *, 0xD0));
        return;
    }
}

extern const f32 lbl_805DE620 = -1.0f;
void TOTrapChainSawEdge__vt20(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x104);
    switch (temp_r0) {
    case 0:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x100);
        if (temp_r4 > 0) {
            M2C_FIELD(arg0, s32 *, 0x100) = (s32) (temp_r4 - 1);
            M2C_FIELD(arg0, s32 *, 0xF8) = (s32) M2C_FIELD(arg0, s32 *, 0xCC);
            M2C_FIELD(arg0, s32 *, 0x104) = 1;
        }
        break;
    case 1:
        M2C_FIELD(arg0, s32 *, 0xD4) = (s32) (M2C_FIELD(arg0, s32 *, 0xD4) + M2C_FIELD(arg0, s32 *, 0xD0));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xD4) < 0) {
            M2C_FIELD(arg0, s32 *, 0xD4) = 0;
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) ((f32) M2C_FIELD(arg0, s32 *, 0xD0) * *(const volatile f32 *)&lbl_805DE620);
            M2C_FIELD(arg0, s32 *, 0x104) = 0;
        }
        if (M2C_FIELD(arg0, s32 *, 0xD4) > (temp_r4_2 = M2C_FIELD(arg0, s32 *, 0xCC))) {
            M2C_FIELD(arg0, s32 *, 0xD4) = temp_r4_2;
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) ((f32) M2C_FIELD(arg0, s32 *, 0xD0) * *(const volatile f32 *)&lbl_805DE620);
        }
        break;
    }
}

void *__dt__18TOTrapChainSawEdgeFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TOTrapChainSawEdge;
        ((void (*)(void *, int))__dt__14TOTrapChainSawFv)(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TOTrapChainSawEdge__ct(u8 *arg0) {
    ((M2C_UNK (*)(void))TOTrapChainSaw__ct)();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TOTrapChainSawEdge;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TOTrapChainSawEdge_class_name;
    ((VObj_18_373ea7 *)(arg0))->m13();
    ((VObj_18_373ea7 *)(arg0))->m14();
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
    M2C_FIELD(arg0, s32 *, 0x104) = 0;
    return arg0;
}

void TParticleCtrl__sub_802C8464(u32 arg0) {
    s32 i;
    for (i = 0; i < 5; i++) {
        if (arg0 == seabed_suiso_linked_switch_counts[i]) {
            begin_effect_render__13TParticleCtrlFv();
            return;
        }
    }
    for (i = 0; i < 5; i++) {
        if (arg0 == seabed_suiso_switch_counts[i]) {
            begin_effect_render__13TParticleCtrlFv();
            return;
        }
    }
    end_effect_render__13TParticleCtrlFv();
}

void TOTrapChainSawKey__vt25(void) {  }

void TOTrapChainSawKey__vt15(void* p) { if (*(int*)((char*)p + 0xf0) != 1) { check_player_contact__14TOTrapChainSawFPv(p); } }

void TOTrapChainSawKey__vt23(void *arg0) {
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, void **, 0x24));
    push_matrix();
    post_translate_matrix((void *)((char *)arg0 + 56));
    push_matrix();
    rotate_matrix_y(0, M2C_FIELD(arg0, void **, 0x60));
    rotate_matrix_y(0, M2C_FIELD(arg0, void **, 0xD4));
    set_model_node_callback(((M2C_UNK *)TParticleCtrl__sub_802C8464));
    draw_ginja_model__10TObjPlayerFPvi(M2C_FIELD(arg0, void **, 0xC8), M2C_FIELD(arg0, void **, 0xBC), M2C_FIELD(arg0, f32 *, 0xB4));
    ((void (*)(int))set_model_node_callback)(0);
    if (M2C_FIELD(arg0, s32 *, 0xF0) == 1) {
        begin_effect_render__13TParticleCtrlFv();
        draw_ginja_model_with_motion(M2C_FIELD(arg0, void **, 0xFC), M2C_FIELD(arg0, void **, 0x100), M2C_FIELD(arg0, f32 *, 0x104));
        end_effect_render__13TParticleCtrlFv();
    }
    pop_matrix();
    pop_matrix();
    end_effect_render__13TParticleCtrlFv();
}

void TOTrapChainSawKey__vt12(void) {
    ((M2C_UNK (*)(void))TOTrapChainSaw__sub_802C9090)();
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    debug_printf_at(0x13001E, "<- SELECT A MODEL");
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

void TOTrapChainSawKey__vt22(u8 *arg0) {
    ((M2C_UNK (*)())update_state__14TOTrapChainSawFPv)();
    M2C_FIELD(arg0, f32 *, 0x104) = (f32) (M2C_FIELD(arg0, f32 *, 0x104) + M2C_FIELD(arg0, f32 *, 0x108));
    if (M2C_FIELD(arg0, f32 *, 0x104) > (f32) (u32) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x100), s32 *, 4) - 1)) {
        M2C_FIELD(arg0, f32 *, 0x104) = (f32) (0.0f);
    }
    play_persistent_sound((void *) (((s32 (*)(void *, int))get_area_table_value__17TOTrapChainSawKeyFii)((void *) (arg0), (int) (2))), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF0) == 1) {
        play_persistent_sound((void *) (((s32 (*)(void *, int))get_area_table_value__17TOTrapChainSawKeyFii)((void *) (arg0), (int) (1))), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    }
}

void TOTrapChainSawKey__vt16(S_802C86D4 *arg0) {
    P_802C86D4 p;
    init_6x05_switch_changed__6TLobbyFPv(&p);
    p.sC = 0;
    p.sA = 0xFFFF;
    p.s10 = arg0->fE8;
    p.b12 = get_current_floor(0xFFFF);
    p.b13 = 1;
    finalize_and_send_60__6TLobbyFPv(&p);
}

void TOTrapChainSawKey__vt14(u8 *arg0) {
    Pair_802C80F0 a = *(Pair_802C80F0 *)lbl_80471F4C;
    Pair_802C80F0 b = *(Pair_802C80F0 *)lbl_80471F54;
    s32 x;
    M2C_FIELD(arg0, s32 *, 0xF8) = (s32) M2C_FIELD(arg0, f32 *, 0x70);
    x = M2C_FIELD(arg0, s32 *, 0xF8);
    M2C_FIELD(arg0, s32 *, 0xF8) = (x < 0) ? 0 : ((x > 1) ? 1 : x);
    M2C_FIELD(arg0, s32 *, 0xC8) = ((s32 (*)(int))get_model__17TOTrapChainSawKeyFi)(a.v[M2C_FIELD(arg0, s32 *, 0xF8)]);
    M2C_FIELD(arg0, s32 *, 0xBC) = get_motion__17TOTrapChainSawKeyFi((s32)(b.v[M2C_FIELD(arg0, s32 *, 0xF8)]));
    M2C_FIELD(arg0, s32 *, 0x24) = fn_802C9924((s32)(3));
    M2C_FIELD(arg0, f32 *, 0xB4) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0xB8) = (1.0f);
    M2C_FIELD(arg0, s32 *, 0xFC) = get_model__17TOTrapChainSawKeyFi((int)(2), (0.0f));
    M2C_FIELD(arg0, s32 *, 0x100) = get_motion__17TOTrapChainSawKeyFi((s32)(2));
    M2C_FIELD(arg0, f32 *, 0x104) = (0.0f);
    M2C_FIELD(arg0, f32 *, 0x108) = (1.0f);
}

int TOTrapChainSawKey__vt13(void* p) { return ((int (*)(void*))decode_params__14TOTrapChainSawFPv)(p); }

void *create__17TOTrapChainSawKeyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x10C);
    if (o != NULL) {
        o = TOTrapChainSawKey__ct((u8 *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

void *__dt__17TOTrapChainSawKeyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOTrapChainSawKey;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        ((void (*)(void *, int))__dt__14TOTrapChainSawFv)(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TOTrapChainSawKey__ct(u8 *arg0, void * _w1, void * _w2) {
    ((M2C_UNK (*)(void))TOTrapChainSaw__ct)();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOTrapChainSawKey;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3F08;
    ((VObj_18_373ea7 *)(arg0))->m13();
    ((VObj_18_373ea7 *)(arg0))->m14();
    init_collision_body_parts((void *) (arg0), (int) ((u8 *)(&((RecoveredGlobal_802C8910_lbl_804E0CC0 *)chain_saw_collision_body_part_table)->value) + (M2C_FIELD(arg0, s32 *, 0xF8) * 0x58)), (int) (2));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    return arg0;
}

void TOTrapChainSawDamage__vt26(void *arg0) {
    if (M2C_FIELD(arg0, void **, 0x104) != NULL) {
        set_damage__20TOTrapChainSawDamageFPvi(M2C_FIELD(arg0, void **, 0x104), M2C_FIELD(arg0, void **, 0xD4));
    }
    if (M2C_FIELD(arg0, void **, 0x108) != NULL) {
        set_damage__20TOTrapChainSawDamageFPvi(M2C_FIELD(arg0, void **, 0x108), M2C_FIELD(arg0, void **, 0xD4));
    }
}

#pragma push
#pragma fp_contract on
void TOTrapChainSawDamage__vt25(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x100) = (s32) (M2C_FIELD(arg0, s32 *, 0x100) + 1);
    void *p;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x100) == 5) && ((p = M2C_FIELD(arg0, void **, 0x104)) != NULL)) {
        TOTrapChainSawDamage__sub_802C9C00(p, (int) (1));
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x100) == 0xA) && ((p = M2C_FIELD(arg0, void **, 0x108)) != NULL)) {
        TOTrapChainSawDamage__sub_802C9C00(p, (int) (1));
    }
    ((M2C_UNK (*)(M2C_UNK, void *, void *, int, int))play_persistent_sound)(((M2C_UNK (*)(void *, int))get_area_table_value__17TOTrapChainSawKeyFii)((void *) (arg0), (int) (0)), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}
extern int fold_flush_0;
#pragma pop

void TOTrapChainSawDamage__vt24(void* p) { *(s32*)((char*)p + 0x100) = 0; }

void TOTrapChainSawDamage__vt12(void) {
    TOTrapChainSaw__sub_802C9090();
    ((void (*)(s32))set_global_count__12TObjNpcEnemyFi)(0xFF00FF);
    ((void (*)(int, void *, ...))debug_printf_at)(0x13001D, (void *)"<- DAMAGE POWER");
    ((void (*)(int, void *, ...))debug_printf_at)(0x13001E, (void *)"<- SELECT A MODEL");
    ((void (*)(s32))set_global_count__12TObjNpcEnemyFi)(0xF0F0F0FF);
}

void TOTrapChainSawDamage__vt23(void *arg0) {
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, void **, 0x24));
    push_matrix();
    post_translate_matrix((void *)((char *)arg0 + 56));
    push_matrix();
    rotate_matrix_y(0, M2C_FIELD(arg0, void **, 0x60));
    rotate_matrix_y(0, M2C_FIELD(arg0, void **, 0xD4));
    draw_ginja_model_with_motion(M2C_FIELD(arg0, void **, 0xC8), M2C_FIELD(arg0, void **, 0xBC), M2C_FIELD(arg0, f32 *, 0xB4));
    pop_matrix();
    pop_matrix();
}

#pragma push
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
void TOTrapChainSawDamage__vt22(void *arg0) {
    ((M2C_UNK (*)())update_state__14TOTrapChainSawFPv)();
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF0) == 1) {
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 1, 0x100);
        return;
    }
    set_indexed_flags(arg0, 1, 0x100);
}
extern int fold_flush_1;
#pragma pop

#pragma push
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
void TOTrapChainSawDamage__vt16(u8 *arg0, u8 *arg1) {
    P_802C8BD0 p;
    p.a = 0;
    p.b = ((VObj_18_62e3d5 *)(arg0))->m28(M2C_FIELD(arg0, f32 *, 0xFC));
    P_802C8BD0 q = p;
    ((VObj_18_62e3d5 *)(arg1))->m21(arg0, (s32 *)&q, 0, -1, -1);
    obj_setFlags30((void *) (arg1), (int) (0x400));
}
extern int fold_flush_2;
#pragma pop

#pragma push
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
void TOTrapChainSawDamage__vt14(Obj_802C8C60 *arg0, f32 _w1) {
    Pair_802C8C60 a = *(Pair_802C8C60 *)lbl_80471F28;
    Pair_802C8C60 b = *(Pair_802C8C60 *)lbl_80471F30;
    s32 v;
    arg0->fF8 = (s32)arg0->f70;
    v = arg0->fF8;
    arg0->fF8 = v < 0 ? 0 : (v > 1 ? 1 : v);
    arg0->fC8 = get_model__17TOTrapChainSawKeyFi((int)(a.v[arg0->fF8]), _w1);
    arg0->fBC = get_motion__17TOTrapChainSawKeyFi(b.v[arg0->fF8]);
    arg0->f24 = fn_802C9924(0);
    arg0->fB4 = (0.0f);
    arg0->fB8 = (1.0f);
}
extern int fold_flush_3;
#pragma pop

#pragma push
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
void TOTrapChainSawDamage__vt13(void *arg0) {
    ((M2C_UNK (*)(void))decode_params__14TOTrapChainSawFPv)();
    M2C_FIELD(arg0, f32 *, 0xFC) = (f32) M2C_FIELD(arg0, f32 *, 0x6C);
}
extern int fold_flush_4;
#pragma pop

#pragma push
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
void *create__20TOTrapChainSawDamageFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x10C);
    if (o != NULL) {
        o = TOTrapChainSawDamage__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}
extern int fold_flush_5;
#pragma pop

#pragma push
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
void *__dt__20TOTrapChainSawDamageFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TOTrapChainSawDamage;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        ((void (*)(void *, int))__dt__14TOTrapChainSawFv)(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
extern int fold_flush_6;
#pragma pop

#pragma push
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
void *TOTrapChainSawDamage__ct(void *arg0, void *arg1, void *arg2) {
    void *o;
    ((void * (*)(void *, void *, void *))TOTrapChainSaw__ct)(arg0, arg1, arg2);
    *(M2C_UNK **)(((u8 *)arg0) + 0x18) = __vt__20TOTrapChainSawDamage;
    *(s32 *)(((u8 *)arg0) + 0) = (s32) TOTrapChainSawDamage_class_name;
    ((VObj_802C8E24 *)arg0)->m13();
    ((VObj_802C8E24 *)arg0)->m14();
    ((s32 (*)(void *, void *, int))init_collision_body_parts)(arg0, &((Ent_802C8E24 *)lbl_804E0C10)[*(s32 *)(((u8 *)arg0) + 0xF8)], 2);
    refresh_collision_body_centers(arg0);
    reset_photon_effect__10TObjPlayerFPv(arg0);
    *(f32 *)(((u8 *)arg0) + 0x3C) += (5.0f);
    {
        Copy_802C8E24 c = *(Copy_802C8E24 *)arg2;
        *(f32 *)((u8 *)&c + 0x10) += (1e+01f);
        o = __nw__7TObjectFUl(0x108);
        if (o != NULL) {
            o = ((void * (*)(void *, void *, void *))TOTrapChainSawEdge__ct)(o, arg0, &c);
        }
        *(void **)(((u8 *)arg0) + 0x104) = o;
        *(f32 *)((u8 *)&c + 0x10) += (5.0f);
        o = __nw__7TObjectFUl(0x108);
        if (o != NULL) {
            o = ((void * (*)(void *, void *, void *))TOTrapChainSawEdge__ct)(o, arg0, &c);
        }
        *(void **)(((u8 *)arg0) + 0x108) = o;
    }
    return arg0;
}
extern int fold_flush_7;
#pragma pop

#pragma push
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
s32 get_area_table_value__17TOTrapChainSawKeyFii(s32 arg0, s32 arg1) {
    T_802C8F68 t = chainsaw_area_table_values;
    s32 *p = t.r[0];
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 34:
        p = t.r[1];
        break;
    case 35:
        p = t.r[2];
        break;
    }
    return p[arg1];
}
extern int fold_flush_8;
#pragma pop

f32 scale_by_level__14TOTrapChainSawFf(f32 farg0) {
    F4_802C8FF8 t = TOTrapChainSaw__level_scale_table;
    return farg0 * t.v[game_difficulty_selection];
}

void update_demo__14TOTrapChainSawFPv(void *arg0) {
    s32 temp_r31;

    if (check_demo_mode__10TObjPlayerFv() == 1) {
        temp_r31 = M2C_FIELD(arg0, s32 *, 0x60);
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (temp_r31 + M2C_FIELD(arg0, s32 *, 0xD4));
        TOTrapAncient02R__sub_80154D78(arg0);
        M2C_FIELD(arg0, s32 *, 0x60) = temp_r31;
    }
}

void TOTrapChainSaw__sub_802C9090(void) {  }

void update_demo_if_in_range__14TOTrapChainSawFPv(u8 *arg0) {
    if (((VObj_18_52534d *)(arg0))->m8((4e+02f), (5e+01f)) == 1) {
        ((VObj_18_52534d *)(arg0))->m23();
        update_demo__14TOTrapChainSawFPv(arg0);
    }
}

int clear_field_d8__14TOTrapChainSawFPv(void* p) { return memset((char*)p + 0xd8, 0, 16); }

void set_hit_cooldown_for_player__14TOTrapChainSawFPvPv(S_802C9124 *arg0, void *arg1) {
    s32 i = obj_getField1c(arg1);
    if (i >= 0 && i < 4) {
        arg0->f[i] = 0x96;
    }
}

s32 consume_counter__14TOTrapChainSawFPvPv(S_802C9174 *arg0, void *arg1) {
    s32 i = obj_getField1c(arg1);
    if (i >= 0 && i < 4) {
        if (arg0->f[i] > 0) {
            arg0->f[i] = arg0->f[i] - 1;
            return 1;
        }
    }
    return 0;
}

int check_player_contact__14TOTrapChainSawFPv(void *arg0) {
    s32 i;
    s32 p;
    s32 t;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        for (i = 0; i < 4; i++) {
            p = get_player_by_client_id(i);
            if (p != 0 && ((VObj_802C91DC *)arg0)->m17(p) == 0) {
                if (get_field_3e4__10TObjPlayerFPv(p) == ((s32 (*)(void))get_current_floor)()) {
                    t = M2C_FIELD(((VObj_802C91DC *)arg0), s32 *, 0x60);
                    M2C_FIELD(((VObj_802C91DC *)arg0), s32 *, 0x60) = t + M2C_FIELD(((VObj_802C91DC *)arg0), s32 *, 0xD4);
                    if (check_actor_body_contact(((VObj_802C91DC *)arg0), p, (1e+02f)) != 0) {
                        ((VObj_802C91DC *)arg0)->m16(p);
                        ((VObj_802C91DC *)arg0)->m18(p);
                    }
                    M2C_FIELD(((VObj_802C91DC *)arg0), s32 *, 0x60) = t;
                }
            }
        }
    } else {
        s32 q;
        s32 t2;
        q = get_player_by_client_id(local_client_id);
        if (q != 0 && ((VObj_802C91DC *)arg0)->m17(q) == 0) {
            if (get_field_3e4__10TObjPlayerFPv(q) == ((s32 (*)(void))get_current_floor)()) {
                t2 = M2C_FIELD(((VObj_802C91DC *)arg0), s32 *, 0x60);
                M2C_FIELD(((VObj_802C91DC *)arg0), s32 *, 0x60) = t2 + M2C_FIELD(((VObj_802C91DC *)arg0), s32 *, 0xD4);
                if (check_actor_body_contact(((VObj_802C91DC *)arg0), q, (1e+02f)) != 0) {
                    ((VObj_802C91DC *)arg0)->m16(q);
                    ((VObj_802C91DC *)arg0)->m18(q);
                }
                M2C_FIELD(((VObj_802C91DC *)arg0), s32 *, 0x60) = t2;
            }
        }
    }
}

void update_extension__14TOTrapChainSawFPv(u8 *arg0) {
    VObj_802C936C *self = (VObj_802C936C *)arg0;

    if (M2C_FIELD(arg0, s32 *, 0xF0) == 0) {
        if (M2C_FIELD(arg0, s32 *, 0xEC) > 0) {
            M2C_FIELD(arg0, s32 *, 0xEC) = M2C_FIELD(arg0, s32 *, 0xEC) - 1;
            return;
        }
        if (M2C_FIELD(arg0, s32 *, 0xD4) == 0) {
            self->m24();
        }
        self->m25();
        M2C_FIELD(arg0, s32 *, 0xD4) = M2C_FIELD(arg0, s32 *, 0xD4) + M2C_FIELD(arg0, s32 *, 0xD0);
        if (M2C_FIELD(arg0, s32 *, 0xD4) < 0) {
            M2C_FIELD(arg0, s32 *, 0xD4) = 0;
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32)((f32)M2C_FIELD(arg0, s32 *, 0xD0) * *(const volatile f32 *)&lbl_805DE620);
            M2C_FIELD(arg0, s32 *, 0xEC) = (s32)(30.0f * (f32)(u16)M2C_FIELD(arg0, s32 *, 0x8C));
            self->m27();
        }
        if (M2C_FIELD(arg0, s32 *, 0xD4) > M2C_FIELD(arg0, s32 *, 0xCC)) {
            M2C_FIELD(arg0, s32 *, 0xD4) = M2C_FIELD(arg0, s32 *, 0xCC);
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32)((f32)M2C_FIELD(arg0, s32 *, 0xD0) * *(const volatile f32 *)&lbl_805DE620);
            self->m26();
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32)fabs_float((f32)M2C_FIELD(arg0, s32 *, 0xD0));
        M2C_FIELD(arg0, s32 *, 0xD4) = M2C_FIELD(arg0, s32 *, 0xD4) - M2C_FIELD(arg0, s32 *, 0xD0);
        if (M2C_FIELD(arg0, s32 *, 0xD4) < 0) {
            M2C_FIELD(arg0, s32 *, 0xD4) = 0;
        }
    }
}

void update_sweep__14TOTrapChainSawFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF0) == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xD4) == 0) {
            ((VObj_802C9564_802C9040 *)arg0)->m24();
        }
        ((VObj_802C9564_802C9040 *)arg0)->m25();
        M2C_FIELD(arg0, s32 *, 0xD4) = (s32) (M2C_FIELD(arg0, s32 *, 0xD4) + M2C_FIELD(arg0, s32 *, 0xD0));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xD4) = (s32) (M2C_FIELD(arg0, s32 *, 0xD4) - M2C_FIELD(arg0, s32 *, 0xD0));
    if ((s32) M2C_FIELD(arg0, s32 *, 0xD4) < 0) {
        M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    }
}
extern "C" { u8 *lbl_805D6808; }

#pragma push
#pragma opt_propagation off
void update_state__14TOTrapChainSawFPv(u8 *arg0) {
    static Act_802C9600 tbl[2] = { &VObj_802C9600::m20, &VObj_802C9600::m21 };
    (((VObj_802C9600 *)arg0)->*tbl[M2C_FIELD(arg0, s32 *, 0xF4)])();
    if (M2C_FIELD(arg0, u8 **, 0xBC) != NULL) {
        M2C_FIELD(arg0, f32 *, 0xB4) = M2C_FIELD(arg0, f32 *, 0xB4) + M2C_FIELD(arg0, f32 *, 0xB8);
        if (M2C_FIELD(arg0, f32 *, 0xB4) > (f32) (u32) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xBC), s32 *, 4) - 1)) {
            M2C_FIELD(arg0, f32 *, 0xB4) = (0.0f);
        }
    }
}
#pragma pop

void update_active_flag__14TOTrapChainSawFPv(void *arg0) {
    ((VObj_802C96EC_802C9040 *) arg0)->m22();
    ((VObj_802C96EC_802C9040 *) arg0)->m15();
    if (is_current_floor_switch_set((u16) M2C_FIELD(arg0, s32 *, 0xE8)) == 1) {
        M2C_FIELD(arg0, s32 *, 0xF0) = 1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xF0) = 0;
}

void decode_params__14TOTrapChainSawFPv(void *arg0) {
    s32 var_r0;
    s32 temp_r3;
    u32 var_r0_2;
    u32 temp_r3_2;

    M2C_FIELD(arg0, s32 *, 0xE8) = (s32) (u16) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0xE8);
    if (temp_r3 < 0) {
        var_r0 = 0;
    } else {
        var_r0 = 0xFF;
        if (temp_r3 <= 0xFF) {
            var_r0 = temp_r3;
        }
    }
    M2C_FIELD(arg0, s32 *, 0xE8) = var_r0;
    if (is_current_floor_switch_set((u16) M2C_FIELD(arg0, s32 *, 0xE8)) == 1) {
        M2C_FIELD(arg0, s32 *, 0xF0) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0xF0) = 0;
    }
    M2C_FIELD(arg0, u32 *, 0xCC) = (u32) ((u32) M2C_FIELD(arg0, u32 *, 0x88) >> 0x10U);
    M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (u16) M2C_FIELD(arg0, u32 *, 0x88);
    M2C_FIELD(arg0, u32 *, 0xF4) = (u32) ((u32) M2C_FIELD(arg0, u32 *, 0x8C) >> 0x10U);
    temp_r3_2 = M2C_FIELD(arg0, u32 *, 0xF4);
    if ((s32) temp_r3_2 < 0) {
        var_r0_2 = 0;
    } else {
        var_r0_2 = 1;
        if ((s32) temp_r3_2 <= 1) {
            var_r0_2 = temp_r3_2;
        }
    }
    M2C_FIELD(arg0, u32 *, 0xF4) = var_r0_2;
}

void *__dt__14TOTrapChainSawFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOTrapChainSaw;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TOTrapChainSaw__ct(u8 *arg0, s32 arg1, s32 arg2) {
    init_map_object_base((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802C9890___vt__14TOTrapChainSaw *)&__vt__14TOTrapChainSaw).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TOTrapChainSaw__name;
    ((VObj_18_fd30ee *)(arg0))->m5(arg2);
    ((VObj_18_fd30ee *)(arg0))->m19();
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    M2C_FIELD(arg0, s32 *, 0xF4) = 0;
    M2C_FIELD(arg0, s32 *, 0xE8) = 0;
    M2C_FIELD(arg0, s32 *, 0xEC) = 0;
    return arg0;
}

void render_shadows__7TObjectFv();
void TLobby__sub_801A1FD8();
void apply_object_set_data();
void release_member_90__10TObjPlayerFPv();
void TParticleCtrl__sub_801A2124();
void update_object_view_visibility();
void classify_actor_view_detail();
void TObjRoomId__sub_801A1E2C();
void TObjPlayer__sub_80019568();
void TOTrapChainSawEdge__vt15();
void TOTrapChainSaw__sub_802C9BE4();
void TOTrapChainSaw__sub_802C9BE8();
void TOTrapChainSaw__sub_802C9BEC();
void TOTrapChainSaw__sub_802C9BF0();
void TOTrapChainSaw__sub_802C9BF4();
void TOTrapChainSaw__vt14();
void TOTrapChainSaw__vt23();
M2C_UNK __vt__18TOTrapChainSawEdge[31] = {
    0,
    0,
    (M2C_UNK)&__dt__18TOTrapChainSawEdgeFv,
    (M2C_UNK)&update_active_flag__14TOTrapChainSawFPv,
    (M2C_UNK)&update_demo_if_in_range__14TOTrapChainSawFPv,
    (M2C_UNK)&render_shadows__7TObjectFv,
    (M2C_UNK)&TLobby__sub_801A1FD8,
    (M2C_UNK)&apply_object_set_data,
    (M2C_UNK)&release_member_90__10TObjPlayerFPv,
    (M2C_UNK)&TParticleCtrl__sub_801A2124,
    (M2C_UNK)&update_object_view_visibility,
    (M2C_UNK)&classify_actor_view_detail,
    (M2C_UNK)&TObjRoomId__sub_801A1E2C,
    (M2C_UNK)&TObjPlayer__sub_80019568,
    (M2C_UNK)&TOTrapChainSaw__sub_802C9090,
    (M2C_UNK)&decode_params__14TOTrapChainSawFPv,
    (M2C_UNK)&TOTrapChainSawEdge__vt14,
    (M2C_UNK)&TOTrapChainSawEdge__vt15,
    (M2C_UNK)&TOTrapChainSaw__sub_802C9BE4,
    (M2C_UNK)&consume_counter__14TOTrapChainSawFPvPv,
    (M2C_UNK)&set_hit_cooldown_for_player__14TOTrapChainSawFPvPv,
    (M2C_UNK)&clear_field_d8__14TOTrapChainSawFPv,
    (M2C_UNK)&TOTrapChainSawEdge__vt20,
    (M2C_UNK)&TOTrapChainSawEdge__vt21,
    (M2C_UNK)&update_state__14TOTrapChainSawFPv,
    (M2C_UNK)&TOTrapChainSawEdge__vt23,
    (M2C_UNK)&TOTrapChainSaw__sub_802C9BE8,
    (M2C_UNK)&TOTrapChainSaw__sub_802C9BEC,
    (M2C_UNK)&TOTrapChainSaw__sub_802C9BF0,
    (M2C_UNK)&TOTrapChainSaw__sub_802C9BF4,
    (M2C_UNK)&scale_by_level__14TOTrapChainSawFf
};
M2C_UNK __vt__17TOTrapChainSawKey[31] = {
    0,
    0,
    (M2C_UNK)&__dt__17TOTrapChainSawKeyFv,
    (M2C_UNK)&update_active_flag__14TOTrapChainSawFPv,
    (M2C_UNK)&update_demo_if_in_range__14TOTrapChainSawFPv,
    (M2C_UNK)&render_shadows__7TObjectFv,
    (M2C_UNK)&TLobby__sub_801A1FD8,
    (M2C_UNK)&apply_object_set_data,
    (M2C_UNK)&release_member_90__10TObjPlayerFPv,
    (M2C_UNK)&TParticleCtrl__sub_801A2124,
    (M2C_UNK)&update_object_view_visibility,
    (M2C_UNK)&classify_actor_view_detail,
    (M2C_UNK)&TObjRoomId__sub_801A1E2C,
    (M2C_UNK)&TObjPlayer__sub_80019568,
    (M2C_UNK)&TOTrapChainSawKey__vt12,
    (M2C_UNK)&TOTrapChainSawKey__vt13,
    (M2C_UNK)&TOTrapChainSawKey__vt14,
    (M2C_UNK)&TOTrapChainSawKey__vt15,
    (M2C_UNK)&TOTrapChainSawKey__vt16,
    (M2C_UNK)&consume_counter__14TOTrapChainSawFPvPv,
    (M2C_UNK)&set_hit_cooldown_for_player__14TOTrapChainSawFPvPv,
    (M2C_UNK)&clear_field_d8__14TOTrapChainSawFPv,
    (M2C_UNK)&update_extension__14TOTrapChainSawFPv,
    (M2C_UNK)&update_sweep__14TOTrapChainSawFPv,
    (M2C_UNK)&TOTrapChainSawKey__vt22,
    (M2C_UNK)&TOTrapChainSawKey__vt23,
    (M2C_UNK)&TOTrapChainSaw__sub_802C9BE8,
    (M2C_UNK)&TOTrapChainSawKey__vt25,
    (M2C_UNK)&TOTrapChainSaw__sub_802C9BF0,
    (M2C_UNK)&TOTrapChainSaw__sub_802C9BF4,
    (M2C_UNK)&scale_by_level__14TOTrapChainSawFf
};
M2C_UNK __vt__20TOTrapChainSawDamage[31] = {
    0,
    0,
    (M2C_UNK)&__dt__20TOTrapChainSawDamageFv,
    (M2C_UNK)&update_active_flag__14TOTrapChainSawFPv,
    (M2C_UNK)&update_demo_if_in_range__14TOTrapChainSawFPv,
    (M2C_UNK)&render_shadows__7TObjectFv,
    (M2C_UNK)&TLobby__sub_801A1FD8,
    (M2C_UNK)&apply_object_set_data,
    (M2C_UNK)&release_member_90__10TObjPlayerFPv,
    (M2C_UNK)&TParticleCtrl__sub_801A2124,
    (M2C_UNK)&update_object_view_visibility,
    (M2C_UNK)&classify_actor_view_detail,
    (M2C_UNK)&TObjRoomId__sub_801A1E2C,
    (M2C_UNK)&TObjPlayer__sub_80019568,
    (M2C_UNK)&TOTrapChainSawDamage__vt12,
    (M2C_UNK)&TOTrapChainSawDamage__vt13,
    (M2C_UNK)&TOTrapChainSawDamage__vt14,
    (M2C_UNK)&check_player_contact__14TOTrapChainSawFPv,
    (M2C_UNK)&TOTrapChainSawDamage__vt16,
    (M2C_UNK)&consume_counter__14TOTrapChainSawFPvPv,
    (M2C_UNK)&set_hit_cooldown_for_player__14TOTrapChainSawFPvPv,
    (M2C_UNK)&clear_field_d8__14TOTrapChainSawFPv,
    (M2C_UNK)&update_extension__14TOTrapChainSawFPv,
    (M2C_UNK)&update_sweep__14TOTrapChainSawFPv,
    (M2C_UNK)&TOTrapChainSawDamage__vt22,
    (M2C_UNK)&TOTrapChainSawDamage__vt23,
    (M2C_UNK)&TOTrapChainSawDamage__vt24,
    (M2C_UNK)&TOTrapChainSawDamage__vt25,
    (M2C_UNK)&TOTrapChainSawDamage__vt26,
    (M2C_UNK)&TOTrapChainSaw__sub_802C9BF4,
    (M2C_UNK)&scale_by_level__14TOTrapChainSawFf
};
M2C_UNK __vt__14TOTrapChainSaw[31] = {
    0,
    0,
    (M2C_UNK)&__dt__14TOTrapChainSawFv,
    (M2C_UNK)&update_active_flag__14TOTrapChainSawFPv,
    (M2C_UNK)&update_demo_if_in_range__14TOTrapChainSawFPv,
    (M2C_UNK)&render_shadows__7TObjectFv,
    (M2C_UNK)&TLobby__sub_801A1FD8,
    (M2C_UNK)&apply_object_set_data,
    (M2C_UNK)&release_member_90__10TObjPlayerFPv,
    (M2C_UNK)&TParticleCtrl__sub_801A2124,
    (M2C_UNK)&update_object_view_visibility,
    (M2C_UNK)&classify_actor_view_detail,
    (M2C_UNK)&TObjRoomId__sub_801A1E2C,
    (M2C_UNK)&TObjPlayer__sub_80019568,
    (M2C_UNK)&TOTrapChainSaw__sub_802C9090,
    (M2C_UNK)&decode_params__14TOTrapChainSawFPv,
    (M2C_UNK)&TOTrapChainSaw__vt14,
    (M2C_UNK)&check_player_contact__14TOTrapChainSawFPv,
    (M2C_UNK)&TOTrapChainSaw__sub_802C9BE4,
    (M2C_UNK)&consume_counter__14TOTrapChainSawFPvPv,
    (M2C_UNK)&set_hit_cooldown_for_player__14TOTrapChainSawFPvPv,
    (M2C_UNK)&clear_field_d8__14TOTrapChainSawFPv,
    (M2C_UNK)&update_extension__14TOTrapChainSawFPv,
    (M2C_UNK)&update_sweep__14TOTrapChainSawFPv,
    (M2C_UNK)&update_state__14TOTrapChainSawFPv,
    (M2C_UNK)&TOTrapChainSaw__vt23,
    (M2C_UNK)&TOTrapChainSaw__sub_802C9BE8,
    (M2C_UNK)&TOTrapChainSaw__sub_802C9BEC,
    (M2C_UNK)&TOTrapChainSaw__sub_802C9BF0,
    (M2C_UNK)&TOTrapChainSaw__sub_802C9BF4,
    (M2C_UNK)&scale_by_level__14TOTrapChainSawFf
};

}
