#include "types.h"
#include "pso/misc/TOTrapChainSaw.h"
#include "pso/misc/TOTrapChainSawDamage.h"
#include "pso/misc/TOTrapChainSawKey.h"
#include "pso/TParticleCtrl.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TOKey.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/misc/TRaderMapCore.h"
#include "pso/npc/TObjNpcEnemy.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"
#pragma readonly_strings on

extern "C" {
s32 fn_802C9924(s32);
s32 get_motion__17TOTrapChainSawKeyFl(s32);
s32 get_model__17TOTrapChainSawKeyFl(int, f32);
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
    virtual s32 m13();
    virtual s32 m14();
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
    s32 value;
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
    virtual s32 m21(void *, s32 *, s32, s32, s32);
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
    virtual s32 m23();
};

struct VBase_18_fd30ee { char pad[0x18]; };

struct VObj_18_fd30ee : VBase_18_fd30ee {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
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
    virtual s32 m19();
};

struct RecoveredGlobal_802C9890___vt__14TOTrapChainSaw {
    s32 value;
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
s32 obj_setFlags30(void *, int);
s8 get_current_floor(int);
f32 fabs_float(f32);
s32 set_indexed_flags(void *, s32, s32);
void unregister_object_by_id(void *);
s32 TOTrapAncient02R__sub_80154D78(void *);
s32 refresh_collision_body_centers(void *);
u32 check_actor_body_contact(void *, s32, f32);
void free_collision_body_parts(void *);
s32 init_collision_body_parts(void *, int, int);
s32 init_map_object_base(void *, void *);
s32 get_player_by_client_id(s32);
void draw_ginja_model__10TObjPlayerFl(void *, void *, f32);
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
void * __dt__20TOTrapChainSawDamageFv(void *arg0, s16 arg1);
void * TOTrapChainSawDamage__ct(void *arg0, void *arg1, void *arg2);
s32 get_area_table_value__17TOTrapChainSawKeyFii(s32 arg0, s32 arg1);
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
s32 get_motion__17TOTrapChainSawKeyFl(s32);
s32 TOTrapChainSawDamage__sub_802C9C00(void *, int);
void debug_printf_at(s32, const char *, ...);
void rotate_matrix_y(int, void *);
void push_matrix(void);
void pop_matrix(void);
void post_translate_matrix(void *);
void set_model_node_callback(void *);
void draw_ginja_model_with_motion(void *, void *, f32);

extern s32 __vt__14TOTrapChainSaw[];
extern s32 __vt__17TOTrapChainSawKey[];
extern s32 __vt__18TOTrapChainSawEdge[];
extern s32 __vt__20TOTrapChainSawDamage[];
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
    *(s32 *)((s8 *)arg0 + 0xFC) = (s32) *(f32 *)((s8 *)arg0 + 0x70);
    x = *(s32 *)((s8 *)arg0 + 0xFC);
    *(s32 *)((s8 *)arg0 + 0xFC) = x < 0 ? 0 : (x > 1 ? 1 : x);
    *(s32 *)((s8 *)arg0 + 0xC8) = ((s32 (*)(s32))get_model__17TOTrapChainSawKeyFl)(a.v[*(s32 *)((s8 *)arg0 + 0xFC)]);
    *(s32 *)((s8 *)arg0 + 0xBC) = get_motion__17TOTrapChainSawKeyFl(b.v[*(s32 *)((s8 *)arg0 + 0xFC)]);
    *(s32 *)((s8 *)arg0 + 0x24) = fn_802C9924(0);
    *(f32 *)((s8 *)arg0 + 0xB4) = (0.0f);
    *(f32 *)((s8 *)arg0 + 0xB8) = (1.0f);
}

void TOTrapChainSawEdge__vt23(void *arg0) {
    TObjFish::set_global_param((s32)(*(void **)((s8 *)arg0 + 0x24)));
    push_matrix();
    post_translate_matrix((void *)((char *)arg0 + 56));
    push_matrix();
    rotate_matrix_y(0, *(void **)((s8 *)arg0 + 0x60));
    rotate_matrix_y(0, *(void **)((s8 *)arg0 + 0xD4));
    draw_ginja_model_with_motion(*(void **)((s8 *)arg0 + 0xC8), *(void **)((s8 *)arg0 + 0xBC), *(f32 *)((s8 *)arg0 + 0xB4));
    pop_matrix();
    pop_matrix();
}

void TOTrapChainSawEdge__vt21(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x104);
    switch (temp_r0) {
    case 0:
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x100);
        if (temp_r4 > 0) {
            *(s32 *)((s8 *)arg0 + 0x100) = (s32) (temp_r4 - 1);
            *(s32 *)((s8 *)arg0 + 0xF8) = (s32) *(s32 *)((s8 *)arg0 + 0xCC);
            *(s32 *)((s8 *)arg0 + 0x104) = 1;
        }
        return;
    case 1:
        *(s32 *)((s8 *)arg0 + 0xD4) = (s32) (*(s32 *)((s8 *)arg0 + 0xD4) + *(s32 *)((s8 *)arg0 + 0xD0));
        return;
    }
}

extern const f32 lbl_805DE620 = -1.0f;
void TOTrapChainSawEdge__vt20(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x104);
    switch (temp_r0) {
    case 0:
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x100);
        if (temp_r4 > 0) {
            *(s32 *)((s8 *)arg0 + 0x100) = (s32) (temp_r4 - 1);
            *(s32 *)((s8 *)arg0 + 0xF8) = (s32) *(s32 *)((s8 *)arg0 + 0xCC);
            *(s32 *)((s8 *)arg0 + 0x104) = 1;
        }
        break;
    case 1:
        *(s32 *)((s8 *)arg0 + 0xD4) = (s32) (*(s32 *)((s8 *)arg0 + 0xD4) + *(s32 *)((s8 *)arg0 + 0xD0));
        if ((s32) *(s32 *)((s8 *)arg0 + 0xD4) < 0) {
            *(s32 *)((s8 *)arg0 + 0xD4) = 0;
            *(s32 *)((s8 *)arg0 + 0xD0) = (s32) ((f32) *(s32 *)((s8 *)arg0 + 0xD0) * *(const volatile f32 *)&lbl_805DE620);
            *(s32 *)((s8 *)arg0 + 0x104) = 0;
        }
        if (*(s32 *)((s8 *)arg0 + 0xD4) > (temp_r4_2 = *(s32 *)((s8 *)arg0 + 0xCC))) {
            *(s32 *)((s8 *)arg0 + 0xD4) = temp_r4_2;
            *(s32 *)((s8 *)arg0 + 0xD0) = (s32) ((f32) *(s32 *)((s8 *)arg0 + 0xD0) * *(const volatile f32 *)&lbl_805DE620);
        }
        break;
    }
}

void *__dt__18TOTrapChainSawEdgeFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TOTrapChainSawEdge;
        ((void (*)(void *, int))__dt__14TOTrapChainSawFv)(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TOTrapChainSawEdge__ct(u8 *arg0) {
    ((s32 (*)(void))TOTrapChainSaw__ct)();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TOTrapChainSawEdge;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TOTrapChainSawEdge_class_name;
    ((VObj_18_373ea7 *)(arg0))->m13();
    ((VObj_18_373ea7 *)(arg0))->m14();
    *(s32 *)((s8 *)arg0 + 0x100) = 0;
    *(s32 *)((s8 *)arg0 + 0x104) = 0;
    return arg0;
}

void TParticleCtrl__sub_802C8464(u32 arg0) {
    s32 i;
    for (i = 0; i < 5; i++) {
        if (arg0 == seabed_suiso_linked_switch_counts[i]) {
            TParticleCtrl::begin_effect_render();
            return;
        }
    }
    for (i = 0; i < 5; i++) {
        if (arg0 == seabed_suiso_switch_counts[i]) {
            TParticleCtrl::begin_effect_render();
            return;
        }
    }
    TParticleCtrl::end_effect_render();
}

void TOTrapChainSawKey__vt25(void) {  }

void TOTrapChainSawKey__vt15(void* p) { if (*(int*)((char*)p + 0xf0) != 1) { check_player_contact__14TOTrapChainSawFPv(p); } }

void TOTrapChainSawKey__vt23(void *arg0) {
    TObjFish::set_global_param((s32)(*(void **)((s8 *)arg0 + 0x24)));
    push_matrix();
    post_translate_matrix((void *)((char *)arg0 + 56));
    push_matrix();
    rotate_matrix_y(0, *(void **)((s8 *)arg0 + 0x60));
    rotate_matrix_y(0, *(void **)((s8 *)arg0 + 0xD4));
    set_model_node_callback(((s32 *)TParticleCtrl__sub_802C8464));
    draw_ginja_model__10TObjPlayerFl(*(void **)((s8 *)arg0 + 0xC8), *(void **)((s8 *)arg0 + 0xBC), *(f32 *)((s8 *)arg0 + 0xB4));
    ((void (*)(int))set_model_node_callback)(0);
    if (*(s32 *)((s8 *)arg0 + 0xF0) == 1) {
        TParticleCtrl::begin_effect_render();
        draw_ginja_model_with_motion(*(void **)((s8 *)arg0 + 0xFC), *(void **)((s8 *)arg0 + 0x100), *(f32 *)((s8 *)arg0 + 0x104));
        TParticleCtrl::end_effect_render();
    }
    pop_matrix();
    pop_matrix();
    TParticleCtrl::end_effect_render();
}

void TOTrapChainSawKey__vt12(void) {
    ((s32 (*)(void))TOTrapChainSaw__sub_802C9090)();
    TObjNpcEnemy::set_global_count(0xFF00FF);
    debug_printf_at(0x13001E, "<- SELECT A MODEL");
    TObjNpcEnemy::set_global_count(0xF0F0F0FF);
}

void TOTrapChainSawKey__vt22(u8 *arg0) {
    ((s32 (*)())update_state__14TOTrapChainSawFPv)();
    *(f32 *)((s8 *)arg0 + 0x104) = (f32) (*(f32 *)((s8 *)arg0 + 0x104) + *(f32 *)((s8 *)arg0 + 0x108));
    if (*(f32 *)((s8 *)arg0 + 0x104) > (f32) (u32) (*(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x100)) + 4) - 1)) {
        *(f32 *)((s8 *)arg0 + 0x104) = (f32) (0.0f);
    }
    play_persistent_sound((void *) (((s32 (*)(void *, int))get_area_table_value__17TOTrapChainSawKeyFii)((void *) (arg0), (int) (2))), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    if ((s32) *(s32 *)((s8 *)arg0 + 0xF0) == 1) {
        play_persistent_sound((void *) (((s32 (*)(void *, int))get_area_table_value__17TOTrapChainSawKeyFii)((void *) (arg0), (int) (1))), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    }
}

void TOTrapChainSawKey__vt16(S_802C86D4 *arg0) {
    P_802C86D4 p;
    ((TLobby *)(&p))->init_6x05_switch_changed();
    p.sC = 0;
    p.sA = 0xFFFF;
    p.s10 = arg0->fE8;
    p.b12 = get_current_floor(0xFFFF);
    p.b13 = 1;
    ((TLobby *)(&p))->finalize_and_send_60();
}

void TOTrapChainSawKey__vt14(u8 *arg0) {
    Pair_802C80F0 a = *(Pair_802C80F0 *)lbl_80471F4C;
    Pair_802C80F0 b = *(Pair_802C80F0 *)lbl_80471F54;
    s32 x;
    *(s32 *)((s8 *)arg0 + 0xF8) = (s32) *(f32 *)((s8 *)arg0 + 0x70);
    x = *(s32 *)((s8 *)arg0 + 0xF8);
    *(s32 *)((s8 *)arg0 + 0xF8) = (x < 0) ? 0 : ((x > 1) ? 1 : x);
    *(s32 *)((s8 *)arg0 + 0xC8) = ((s32 (*)(int))get_model__17TOTrapChainSawKeyFl)(a.v[*(s32 *)((s8 *)arg0 + 0xF8)]);
    *(s32 *)((s8 *)arg0 + 0xBC) = get_motion__17TOTrapChainSawKeyFl((s32)(b.v[*(s32 *)((s8 *)arg0 + 0xF8)]));
    *(s32 *)((s8 *)arg0 + 0x24) = fn_802C9924((s32)(3));
    *(f32 *)((s8 *)arg0 + 0xB4) = (0.0f);
    *(f32 *)((s8 *)arg0 + 0xB8) = (1.0f);
    *(s32 *)((s8 *)arg0 + 0xFC) = get_model__17TOTrapChainSawKeyFl((int)(2), (0.0f));
    *(s32 *)((s8 *)arg0 + 0x100) = get_motion__17TOTrapChainSawKeyFl((s32)(2));
    *(f32 *)((s8 *)arg0 + 0x104) = (0.0f);
    *(f32 *)((s8 *)arg0 + 0x108) = (1.0f);
}

int TOTrapChainSawKey__vt13(void* p) { return ((int (*)(void*))decode_params__14TOTrapChainSawFPv)(p); }

void *TOTrapChainSawKey::create() {
    void *o = __nw__7TObjectFUl(0x10C);
    if (o != NULL) {
        o = TOTrapChainSawKey__ct((u8 *)(o), (void *)(tl_05), (void *)(this));
    }
    return o;
}

void *__dt__17TOTrapChainSawKeyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TOTrapChainSawKey;
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
    ((s32 (*)(void))TOTrapChainSaw__ct)();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TOTrapChainSawKey;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3F08;
    ((VObj_18_373ea7 *)(arg0))->m13();
    ((VObj_18_373ea7 *)(arg0))->m14();
    init_collision_body_parts((void *) (arg0), (int) ((u8 *)(&((RecoveredGlobal_802C8910_lbl_804E0CC0 *)chain_saw_collision_body_part_table)->value) + (*(s32 *)((s8 *)arg0 + 0xF8) * 0x58)), (int) (2));
    refresh_collision_body_centers((void *) (arg0));
    ((TObjPlayer *)arg0)->reset_photon_effect();
    return arg0;
}

void TOTrapChainSawDamage__vt26(void *arg0) {
    if (*(void **)((s8 *)arg0 + 0x104) != NULL) {
        ((TOTrapChainSawDamage *)(*(void **)((s8 *)arg0 + 0x104)))->set_damage((s32)(*(void **)((s8 *)arg0 + 0xD4)));
    }
    if (*(void **)((s8 *)arg0 + 0x108) != NULL) {
        ((TOTrapChainSawDamage *)(*(void **)((s8 *)arg0 + 0x108)))->set_damage((s32)(*(void **)((s8 *)arg0 + 0xD4)));
    }
}

#pragma push
#pragma fp_contract on
void TOTrapChainSawDamage__vt25(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x100) = (s32) (*(s32 *)((s8 *)arg0 + 0x100) + 1);
    void *p;
    if (((s32) *(s32 *)((s8 *)arg0 + 0x100) == 5) && ((p = *(void **)((s8 *)arg0 + 0x104)) != NULL)) {
        TOTrapChainSawDamage__sub_802C9C00(p, (int) (1));
    }
    if (((s32) *(s32 *)((s8 *)arg0 + 0x100) == 0xA) && ((p = *(void **)((s8 *)arg0 + 0x108)) != NULL)) {
        TOTrapChainSawDamage__sub_802C9C00(p, (int) (1));
    }
    ((s32 (*)(s32, void *, void *, int, int))play_persistent_sound)(((s32 (*)(void *, int))get_area_table_value__17TOTrapChainSawKeyFii)((void *) (arg0), (int) (0)), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}
extern int fold_flush_0;
#pragma pop

void TOTrapChainSawDamage__vt24(void* p) { *(s32*)((char*)p + 0x100) = 0; }

void TOTrapChainSawDamage__vt12(void) {
    TOTrapChainSaw__sub_802C9090();
    TObjNpcEnemy::set_global_count(0xFF00FF);
    ((void (*)(int, void *, ...))debug_printf_at)(0x13001D, (void *)"<- DAMAGE POWER");
    ((void (*)(int, void *, ...))debug_printf_at)(0x13001E, (void *)"<- SELECT A MODEL");
    TObjNpcEnemy::set_global_count(0xF0F0F0FF);
}

void TOTrapChainSawDamage__vt23(void *arg0) {
    TObjFish::set_global_param((s32)(*(void **)((s8 *)arg0 + 0x24)));
    push_matrix();
    post_translate_matrix((void *)((char *)arg0 + 56));
    push_matrix();
    rotate_matrix_y(0, *(void **)((s8 *)arg0 + 0x60));
    rotate_matrix_y(0, *(void **)((s8 *)arg0 + 0xD4));
    draw_ginja_model_with_motion(*(void **)((s8 *)arg0 + 0xC8), *(void **)((s8 *)arg0 + 0xBC), *(f32 *)((s8 *)arg0 + 0xB4));
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
    ((s32 (*)())update_state__14TOTrapChainSawFPv)();
    if ((s32) *(s32 *)((s8 *)arg0 + 0xF0) == 1) {
        ((TObjPlayer *)arg0)->clear_player_status_flag(1, 0x100);
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
    p.b = ((VObj_18_62e3d5 *)(arg0))->m28(*(f32 *)((s8 *)arg0 + 0xFC));
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
    arg0->fC8 = get_model__17TOTrapChainSawKeyFl((int)(a.v[arg0->fF8]), _w1);
    arg0->fBC = get_motion__17TOTrapChainSawKeyFl(b.v[arg0->fF8]);
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
    ((s32 (*)(void))decode_params__14TOTrapChainSawFPv)();
    *(f32 *)((s8 *)arg0 + 0xFC) = (f32) *(f32 *)((s8 *)arg0 + 0x6C);
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
void *TOTrapChainSawDamage::create() {
    void *o = __nw__7TObjectFUl(0x10C);
    if (o != NULL) {
        o = TOTrapChainSawDamage__ct((void *)(o), (void *)(tl_05), (void *)(this));
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
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TOTrapChainSawDamage;
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
    *(s32 **)(((u8 *)arg0) + 0x18) = __vt__20TOTrapChainSawDamage;
    *(s32 *)(((u8 *)arg0) + 0) = (s32) TOTrapChainSawDamage_class_name;
    ((VObj_802C8E24 *)arg0)->m13();
    ((VObj_802C8E24 *)arg0)->m14();
    ((s32 (*)(void *, void *, int))init_collision_body_parts)(arg0, &((Ent_802C8E24 *)lbl_804E0C10)[*(s32 *)(((u8 *)arg0) + 0xF8)], 2);
    refresh_collision_body_centers(arg0);
    ((TObjPlayer *)arg0)->reset_photon_effect();
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
    switch (TOKeyMachine01::get_global_state()) {
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

f32 TOTrapChainSaw::scale_by_level(f32 farg0) {
    F4_802C8FF8 t = TOTrapChainSaw__level_scale_table;
    return farg0 * t.v[game_difficulty_selection];
}

void TOTrapChainSaw::update_demo() {
    s32 temp_r31;

    if (TObjPlayer::check_demo_mode() == 1) {
        temp_r31 = *(s32 *)((s8 *)this + 0x60);
        *(s32 *)((s8 *)this + 0x60) = (s32) (temp_r31 + *(s32 *)((s8 *)this + 0xD4));
        TOTrapAncient02R__sub_80154D78(this);
        *(s32 *)((s8 *)this + 0x60) = temp_r31;
    }
}

void TOTrapChainSaw__sub_802C9090(void) {  }

void update_demo_if_in_range__14TOTrapChainSawFPv(u8 *arg0) {
    if (((VObj_18_52534d *)(arg0))->m8((4e+02f), (5e+01f)) == 1) {
        ((VObj_18_52534d *)(arg0))->m23();
        ((TOTrapChainSaw *)arg0)->update_demo();
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
    if (TRaderMapCore::is_not_split_screen() == 1) {
        for (i = 0; i < 4; i++) {
            p = get_player_by_client_id(i);
            if (p != 0 && ((VObj_802C91DC *)arg0)->m17(p) == 0) {
                if (((TObjPlayer *)p)->get_field_3e4() == ((s32 (*)(void))get_current_floor)()) {
                    t = *(s32 *)((s8 *)((VObj_802C91DC *)arg0) + 0x60);
                    *(s32 *)((s8 *)((VObj_802C91DC *)arg0) + 0x60) = t + *(s32 *)((s8 *)((VObj_802C91DC *)arg0) + 0xD4);
                    if (check_actor_body_contact(((VObj_802C91DC *)arg0), p, (1e+02f)) != 0) {
                        ((VObj_802C91DC *)arg0)->m16(p);
                        ((VObj_802C91DC *)arg0)->m18(p);
                    }
                    *(s32 *)((s8 *)((VObj_802C91DC *)arg0) + 0x60) = t;
                }
            }
        }
    } else {
        s32 q;
        s32 t2;
        q = get_player_by_client_id(local_client_id);
        if (q != 0 && ((VObj_802C91DC *)arg0)->m17(q) == 0) {
            if (((TObjPlayer *)q)->get_field_3e4() == ((s32 (*)(void))get_current_floor)()) {
                t2 = *(s32 *)((s8 *)((VObj_802C91DC *)arg0) + 0x60);
                *(s32 *)((s8 *)((VObj_802C91DC *)arg0) + 0x60) = t2 + *(s32 *)((s8 *)((VObj_802C91DC *)arg0) + 0xD4);
                if (check_actor_body_contact(((VObj_802C91DC *)arg0), q, (1e+02f)) != 0) {
                    ((VObj_802C91DC *)arg0)->m16(q);
                    ((VObj_802C91DC *)arg0)->m18(q);
                }
                *(s32 *)((s8 *)((VObj_802C91DC *)arg0) + 0x60) = t2;
            }
        }
    }
}

void update_extension__14TOTrapChainSawFPv(u8 *arg0) {
    VObj_802C936C *self = (VObj_802C936C *)arg0;

    if (*(s32 *)((s8 *)arg0 + 0xF0) == 0) {
        if (*(s32 *)((s8 *)arg0 + 0xEC) > 0) {
            *(s32 *)((s8 *)arg0 + 0xEC) = *(s32 *)((s8 *)arg0 + 0xEC) - 1;
            return;
        }
        if (*(s32 *)((s8 *)arg0 + 0xD4) == 0) {
            self->m24();
        }
        self->m25();
        *(s32 *)((s8 *)arg0 + 0xD4) = *(s32 *)((s8 *)arg0 + 0xD4) + *(s32 *)((s8 *)arg0 + 0xD0);
        if (*(s32 *)((s8 *)arg0 + 0xD4) < 0) {
            *(s32 *)((s8 *)arg0 + 0xD4) = 0;
            *(s32 *)((s8 *)arg0 + 0xD0) = (s32)((f32)*(s32 *)((s8 *)arg0 + 0xD0) * *(const volatile f32 *)&lbl_805DE620);
            *(s32 *)((s8 *)arg0 + 0xEC) = (s32)(30.0f * (f32)(u16)*(s32 *)((s8 *)arg0 + 0x8C));
            self->m27();
        }
        if (*(s32 *)((s8 *)arg0 + 0xD4) > *(s32 *)((s8 *)arg0 + 0xCC)) {
            *(s32 *)((s8 *)arg0 + 0xD4) = *(s32 *)((s8 *)arg0 + 0xCC);
            *(s32 *)((s8 *)arg0 + 0xD0) = (s32)((f32)*(s32 *)((s8 *)arg0 + 0xD0) * *(const volatile f32 *)&lbl_805DE620);
            self->m26();
        }
    } else {
        *(s32 *)((s8 *)arg0 + 0xD0) = (s32)fabs_float((f32)*(s32 *)((s8 *)arg0 + 0xD0));
        *(s32 *)((s8 *)arg0 + 0xD4) = *(s32 *)((s8 *)arg0 + 0xD4) - *(s32 *)((s8 *)arg0 + 0xD0);
        if (*(s32 *)((s8 *)arg0 + 0xD4) < 0) {
            *(s32 *)((s8 *)arg0 + 0xD4) = 0;
        }
    }
}

void update_sweep__14TOTrapChainSawFPv(void *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0xF0) == 0) {
        if ((s32) *(s32 *)((s8 *)arg0 + 0xD4) == 0) {
            ((VObj_802C9564_802C9040 *)arg0)->m24();
        }
        ((VObj_802C9564_802C9040 *)arg0)->m25();
        *(s32 *)((s8 *)arg0 + 0xD4) = (s32) (*(s32 *)((s8 *)arg0 + 0xD4) + *(s32 *)((s8 *)arg0 + 0xD0));
        return;
    }
    *(s32 *)((s8 *)arg0 + 0xD4) = (s32) (*(s32 *)((s8 *)arg0 + 0xD4) - *(s32 *)((s8 *)arg0 + 0xD0));
    if ((s32) *(s32 *)((s8 *)arg0 + 0xD4) < 0) {
        *(s32 *)((s8 *)arg0 + 0xD4) = 0;
    }
}
extern "C" { u8 *lbl_805D6808; }

#pragma push
#pragma opt_propagation off
void update_state__14TOTrapChainSawFPv(u8 *arg0) {
    static Act_802C9600 tbl[2] = { &VObj_802C9600::m20, &VObj_802C9600::m21 };
    (((VObj_802C9600 *)arg0)->*tbl[*(s32 *)((s8 *)arg0 + 0xF4)])();
    if (*(u8 **)((s8 *)arg0 + 0xBC) != NULL) {
        *(f32 *)((s8 *)arg0 + 0xB4) = *(f32 *)((s8 *)arg0 + 0xB4) + *(f32 *)((s8 *)arg0 + 0xB8);
        if (*(f32 *)((s8 *)arg0 + 0xB4) > (f32) (u32) (*(s32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xBC)) + 4) - 1)) {
            *(f32 *)((s8 *)arg0 + 0xB4) = (0.0f);
        }
    }
}
#pragma pop

void update_active_flag__14TOTrapChainSawFPv(void *arg0) {
    ((VObj_802C96EC_802C9040 *) arg0)->m22();
    ((VObj_802C96EC_802C9040 *) arg0)->m15();
    if (is_current_floor_switch_set((u16) *(s32 *)((s8 *)arg0 + 0xE8)) == 1) {
        *(s32 *)((s8 *)arg0 + 0xF0) = 1;
        return;
    }
    *(s32 *)((s8 *)arg0 + 0xF0) = 0;
}

void decode_params__14TOTrapChainSawFPv(void *arg0) {
    s32 var_r0;
    s32 temp_r3;
    u32 var_r0_2;
    u32 temp_r3_2;

    *(s32 *)((s8 *)arg0 + 0xE8) = (s32) (u16) *(s32 *)((s8 *)arg0 + 0x84);
    temp_r3 = *(s32 *)((s8 *)arg0 + 0xE8);
    if (temp_r3 < 0) {
        var_r0 = 0;
    } else {
        var_r0 = 0xFF;
        if (temp_r3 <= 0xFF) {
            var_r0 = temp_r3;
        }
    }
    *(s32 *)((s8 *)arg0 + 0xE8) = var_r0;
    if (is_current_floor_switch_set((u16) *(s32 *)((s8 *)arg0 + 0xE8)) == 1) {
        *(s32 *)((s8 *)arg0 + 0xF0) = 1;
    } else {
        *(s32 *)((s8 *)arg0 + 0xF0) = 0;
    }
    *(u32 *)((s8 *)arg0 + 0xCC) = (u32) ((u32) *(u32 *)((s8 *)arg0 + 0x88) >> 0x10U);
    *(s32 *)((s8 *)arg0 + 0xD0) = (s32) (u16) *(u32 *)((s8 *)arg0 + 0x88);
    *(u32 *)((s8 *)arg0 + 0xF4) = (u32) ((u32) *(u32 *)((s8 *)arg0 + 0x8C) >> 0x10U);
    temp_r3_2 = *(u32 *)((s8 *)arg0 + 0xF4);
    if ((s32) temp_r3_2 < 0) {
        var_r0_2 = 0;
    } else {
        var_r0_2 = 1;
        if ((s32) temp_r3_2 <= 1) {
            var_r0_2 = temp_r3_2;
        }
    }
    *(u32 *)((s8 *)arg0 + 0xF4) = var_r0_2;
}

void *__dt__14TOTrapChainSawFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TOTrapChainSaw;
        ((TOKey *)arg0)->destroy_key_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TOTrapChainSaw__ct(u8 *arg0, s32 arg1, s32 arg2) {
    init_map_object_base((void *) (arg0), (void *) (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_802C9890___vt__14TOTrapChainSaw *)&__vt__14TOTrapChainSaw).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TOTrapChainSaw__name;
    ((VObj_18_fd30ee *)(arg0))->m5(arg2);
    ((VObj_18_fd30ee *)(arg0))->m19();
    *(s32 *)((s8 *)arg0 + 0xD4) = 0;
    *(s32 *)((s8 *)arg0 + 0xCC) = 0;
    *(s32 *)((s8 *)arg0 + 0xD0) = 0;
    *(s32 *)((s8 *)arg0 + 0xC8) = 0;
    *(s32 *)((s8 *)arg0 + 0xF4) = 0;
    *(s32 *)((s8 *)arg0 + 0xE8) = 0;
    *(s32 *)((s8 *)arg0 + 0xEC) = 0;
    return arg0;
}

void render_shadows__7TObjectFv();
void TLobby__sub_801A1FD8();
void apply_object_set_data();
void release_member_90__10TObjPlayerFv();
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
s32 __vt__18TOTrapChainSawEdge[31] = {
    0,
    0,
    (s32)&__dt__18TOTrapChainSawEdgeFv,
    (s32)&update_active_flag__14TOTrapChainSawFPv,
    (s32)&update_demo_if_in_range__14TOTrapChainSawFPv,
    (s32)&render_shadows__7TObjectFv,
    (s32)&TLobby__sub_801A1FD8,
    (s32)&apply_object_set_data,
    (s32)&release_member_90__10TObjPlayerFv,
    (s32)&TParticleCtrl__sub_801A2124,
    (s32)&update_object_view_visibility,
    (s32)&classify_actor_view_detail,
    (s32)&TObjRoomId__sub_801A1E2C,
    (s32)&TObjPlayer__sub_80019568,
    (s32)&TOTrapChainSaw__sub_802C9090,
    (s32)&decode_params__14TOTrapChainSawFPv,
    (s32)&TOTrapChainSawEdge__vt14,
    (s32)&TOTrapChainSawEdge__vt15,
    (s32)&TOTrapChainSaw__sub_802C9BE4,
    (s32)&consume_counter__14TOTrapChainSawFPvPv,
    (s32)&set_hit_cooldown_for_player__14TOTrapChainSawFPvPv,
    (s32)&clear_field_d8__14TOTrapChainSawFPv,
    (s32)&TOTrapChainSawEdge__vt20,
    (s32)&TOTrapChainSawEdge__vt21,
    (s32)&update_state__14TOTrapChainSawFPv,
    (s32)&TOTrapChainSawEdge__vt23,
    (s32)&TOTrapChainSaw__sub_802C9BE8,
    (s32)&TOTrapChainSaw__sub_802C9BEC,
    (s32)&TOTrapChainSaw__sub_802C9BF0,
    (s32)&TOTrapChainSaw__sub_802C9BF4,
    (s32)&TOTrapChainSaw::scale_by_level
};
s32 __vt__17TOTrapChainSawKey[31] = {
    0,
    0,
    (s32)&__dt__17TOTrapChainSawKeyFv,
    (s32)&update_active_flag__14TOTrapChainSawFPv,
    (s32)&update_demo_if_in_range__14TOTrapChainSawFPv,
    (s32)&render_shadows__7TObjectFv,
    (s32)&TLobby__sub_801A1FD8,
    (s32)&apply_object_set_data,
    (s32)&release_member_90__10TObjPlayerFv,
    (s32)&TParticleCtrl__sub_801A2124,
    (s32)&update_object_view_visibility,
    (s32)&classify_actor_view_detail,
    (s32)&TObjRoomId__sub_801A1E2C,
    (s32)&TObjPlayer__sub_80019568,
    (s32)&TOTrapChainSawKey__vt12,
    (s32)&TOTrapChainSawKey__vt13,
    (s32)&TOTrapChainSawKey__vt14,
    (s32)&TOTrapChainSawKey__vt15,
    (s32)&TOTrapChainSawKey__vt16,
    (s32)&consume_counter__14TOTrapChainSawFPvPv,
    (s32)&set_hit_cooldown_for_player__14TOTrapChainSawFPvPv,
    (s32)&clear_field_d8__14TOTrapChainSawFPv,
    (s32)&update_extension__14TOTrapChainSawFPv,
    (s32)&update_sweep__14TOTrapChainSawFPv,
    (s32)&TOTrapChainSawKey__vt22,
    (s32)&TOTrapChainSawKey__vt23,
    (s32)&TOTrapChainSaw__sub_802C9BE8,
    (s32)&TOTrapChainSawKey__vt25,
    (s32)&TOTrapChainSaw__sub_802C9BF0,
    (s32)&TOTrapChainSaw__sub_802C9BF4,
    (s32)&TOTrapChainSaw::scale_by_level
};
s32 __vt__20TOTrapChainSawDamage[31] = {
    0,
    0,
    (s32)&__dt__20TOTrapChainSawDamageFv,
    (s32)&update_active_flag__14TOTrapChainSawFPv,
    (s32)&update_demo_if_in_range__14TOTrapChainSawFPv,
    (s32)&render_shadows__7TObjectFv,
    (s32)&TLobby__sub_801A1FD8,
    (s32)&apply_object_set_data,
    (s32)&release_member_90__10TObjPlayerFv,
    (s32)&TParticleCtrl__sub_801A2124,
    (s32)&update_object_view_visibility,
    (s32)&classify_actor_view_detail,
    (s32)&TObjRoomId__sub_801A1E2C,
    (s32)&TObjPlayer__sub_80019568,
    (s32)&TOTrapChainSawDamage__vt12,
    (s32)&TOTrapChainSawDamage__vt13,
    (s32)&TOTrapChainSawDamage__vt14,
    (s32)&check_player_contact__14TOTrapChainSawFPv,
    (s32)&TOTrapChainSawDamage__vt16,
    (s32)&consume_counter__14TOTrapChainSawFPvPv,
    (s32)&set_hit_cooldown_for_player__14TOTrapChainSawFPvPv,
    (s32)&clear_field_d8__14TOTrapChainSawFPv,
    (s32)&update_extension__14TOTrapChainSawFPv,
    (s32)&update_sweep__14TOTrapChainSawFPv,
    (s32)&TOTrapChainSawDamage__vt22,
    (s32)&TOTrapChainSawDamage__vt23,
    (s32)&TOTrapChainSawDamage__vt24,
    (s32)&TOTrapChainSawDamage__vt25,
    (s32)&TOTrapChainSawDamage__vt26,
    (s32)&TOTrapChainSaw__sub_802C9BF4,
    (s32)&TOTrapChainSaw::scale_by_level
};
s32 __vt__14TOTrapChainSaw[31] = {
    0,
    0,
    (s32)&__dt__14TOTrapChainSawFv,
    (s32)&update_active_flag__14TOTrapChainSawFPv,
    (s32)&update_demo_if_in_range__14TOTrapChainSawFPv,
    (s32)&render_shadows__7TObjectFv,
    (s32)&TLobby__sub_801A1FD8,
    (s32)&apply_object_set_data,
    (s32)&release_member_90__10TObjPlayerFv,
    (s32)&TParticleCtrl__sub_801A2124,
    (s32)&update_object_view_visibility,
    (s32)&classify_actor_view_detail,
    (s32)&TObjRoomId__sub_801A1E2C,
    (s32)&TObjPlayer__sub_80019568,
    (s32)&TOTrapChainSaw__sub_802C9090,
    (s32)&decode_params__14TOTrapChainSawFPv,
    (s32)&TOTrapChainSaw__vt14,
    (s32)&check_player_contact__14TOTrapChainSawFPv,
    (s32)&TOTrapChainSaw__sub_802C9BE4,
    (s32)&consume_counter__14TOTrapChainSawFPvPv,
    (s32)&set_hit_cooldown_for_player__14TOTrapChainSawFPvPv,
    (s32)&clear_field_d8__14TOTrapChainSawFPv,
    (s32)&update_extension__14TOTrapChainSawFPv,
    (s32)&update_sweep__14TOTrapChainSawFPv,
    (s32)&update_state__14TOTrapChainSawFPv,
    (s32)&TOTrapChainSaw__vt23,
    (s32)&TOTrapChainSaw__sub_802C9BE8,
    (s32)&TOTrapChainSaw__sub_802C9BEC,
    (s32)&TOTrapChainSaw__sub_802C9BF0,
    (s32)&TOTrapChainSaw__sub_802C9BF4,
    (s32)&TOTrapChainSaw::scale_by_level
};

}
