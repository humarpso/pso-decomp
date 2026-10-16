#include "types.h"
#include "pso/enemy/TObjEneRe4Sorcerer.h"
#include "pso/enemy/TObjEneDD_ST.h"
#include "pso/player/TUnk_80490470.h"
#include "pso/object/TObjMotion.h"

extern "C" {

void vfunc_106__18TObjEneRe4SorcererFv(u8 *arg0);
s32 post_translate_matrix(void *);
s32 update_player_state__9TObjEneDDFv(void *, int, int);
s32 TObjEneRe4Sorcerer__sub_801E3F1C(f32, f32);
s32 get_target_info__9TObjEneDDFPv();
s32 toggle_particle_effect__10TObjPlayerFv();
s32 scroll_strip_uvs(int, int, int);
s32 end_effect_render__13TParticleCtrlFv();
s32 rotate_matrix_y(int, int);
s32 translate_matrix(int, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
s32 set_global_param__8TObjFishFl(int);
s32 draw_chunk_object(s32);

extern u32 TObjEneRe4Sorcerer__uv_scroll_buffer;
extern s32 model_render_flags;

struct Base { u8 pad[0x18]; };
struct VObj : Base {
    virtual void m0() = 0;
    virtual void m1() = 0;
    virtual void m2() = 0;
    virtual void m3() = 0;
    virtual void m4() = 0;
    virtual void m5() = 0;
    virtual void m6() = 0;
    virtual void m7() = 0;
    virtual s32 m8(f32, f32) = 0;
};

extern "C" {
__declspec(section ".sdata2") extern void *const lbl_805DA788[1] = {
    (void *)0x43c80000,
};
__declspec(section ".sdata2") extern void *const TObjEneRe4Sorcerer__data_805DA78C[1] = {
    (void *)0x41700000,
};
__declspec(section ".sdata2") extern void *const TObjEneRe4Sorcerer__data_805DA790[1] = {
    (void *)0x0,
};
__declspec(section ".sdata2") extern void *const TObjEneRe4Sorcerer__data_805DA794[1] = {
    (void *)0x41b00000,
};
}
#define lbl_805DA788 (*(const f32 *)lbl_805DA788)
#define TObjEneRe4Sorcerer__data_805DA78C (*(const f32 *)TObjEneRe4Sorcerer__data_805DA78C)
#define TObjEneRe4Sorcerer__data_805DA790 (*(const f32 *)TObjEneRe4Sorcerer__data_805DA790)
#define TObjEneRe4Sorcerer__data_805DA794 (*(const f32 *)TObjEneRe4Sorcerer__data_805DA794)

void TObjEneRe4Sorcerer::vfunc_106() {
    u8 *arg0 = (u8 *)this;
    get_target_info__9TObjEneDDFPv();
    if (((VObj *)arg0)->m8(lbl_805DA788, TObjEneRe4Sorcerer__data_805DA78C) != 0) {
        update_player_state__9TObjEneDDFv(arg0, 0, 0);
        ((s32 (*)(s32))set_global_param__8TObjFishFl)(*(s32 *)((s8 *)arg0 + 0x24));
        ((s32 (*)())push_matrix)();
        ((s32 (*)(void *))post_translate_matrix)(arg0 + 0x38);
        ((s32 (*)(s32, f32, f32, f32))translate_matrix)(0, TObjEneRe4Sorcerer__data_805DA790, TObjEneRe4Sorcerer__data_805DA794, TObjEneRe4Sorcerer__data_805DA790);
        ((s32 (*)(s32, s32))rotate_matrix_y)(0, *(s32 *)((s8 *)arg0 + 0x60));
        *(s16 *)((s8 *)arg0 + 0x3C0) = (s16) (*(s16 *)((s8 *)arg0 + 0x3C0) + 5);
        ((s32 (*)(s32, s16, s32))scroll_strip_uvs)(TObjEneRe4Sorcerer__uv_scroll_buffer, *(s16 *)((s8 *)arg0 + 0x3C0), 0);
        *(f32 *)((s8 *)arg0 + 0x3C4) += 0.01f;
        model_render_flags |= 0x20000;
        TObjEneRe4Sorcerer__sub_801E3F1C(TObjEneRe4Sorcerer__data_805DA790, *(f32 *)((s8 *)arg0 + 0x3C4));
        ((s32 (*)())toggle_particle_effect__10TObjPlayerFv)();
        ((s32 (*)(s32))draw_chunk_object)(*(s32 *)((s8 *)arg0 + 0x34));
        ((s32 (*)())end_effect_render__13TParticleCtrlFv)();
        model_render_flags &= 0xFFFDFFFF;
        ((s32 (*)())pop_matrix)();
    }
}

}

extern "C" {
__declspec(section ".sdata2") extern void *const lbl_805DA79C[1] = {
    (void *)0x3f4ccccd,
};
__declspec(section ".sdata2") extern void *const lbl_805DA7A0[1] = {
    (void *)0x42c80000,
};
__declspec(section ".sdata2") extern void *const lbl_805DA7A4[1] = {
    (void *)0x43700000,
};
__declspec(section ".sdata2") extern void *const lbl_805DA7A8[1] = {
    (void *)0x42b40000,
};
__declspec(section ".sdata2") extern void *const lbl_805DA7AC[1] = {
    (void *)0x41300000,
};
__declspec(section ".sdata2") extern void *const lbl_805DA7B0[1] = {
    (void *)0x42700000,
};
__declspec(section ".sdata2") extern void *const lbl_805DA7B4[1] = {
    (void *)0x41a00000,
};
__declspec(section ".sdata2") extern void *const lbl_805DA7B8[1] = {
    (void *)0x43200000,
};
__declspec(section ".sdata2") extern void *const lbl_805DA7BC[1] = {
    (void *)0x461c4000,
};
__declspec(section ".sdata2") extern void *const lbl_805DA7C0[1] = {
    (void *)0x481c4000,
};
__declspec(section ".sdata2") extern void *const lbl_805DA7C4[1] = {
    (void *)0x42a00000,
};
__declspec(section ".sdata2") extern void *const lbl_805DA7C8[1] = {
    (void *)0x41f00000,
};
__declspec(section ".sdata2") extern void *const lbl_805DA7CC[1] = {
    (void *)0x3e4ccccd,
};
}
#define lbl_805DA79C (*(const f32 *)lbl_805DA79C)
#define lbl_805DA7A0 (*(const f32 *)lbl_805DA7A0)
#define lbl_805DA7A4 (*(const f32 *)lbl_805DA7A4)
#define lbl_805DA7A8 (*(const f32 *)lbl_805DA7A8)
#define lbl_805DA7AC (*(const f32 *)lbl_805DA7AC)
#define lbl_805DA7B0 (*(const f32 *)lbl_805DA7B0)
#define lbl_805DA7B4 (*(const f32 *)lbl_805DA7B4)
#define lbl_805DA7B8 (*(const f32 *)lbl_805DA7B8)
#define lbl_805DA7BC (*(const f32 *)lbl_805DA7BC)
#define lbl_805DA7C0 (*(const f32 *)lbl_805DA7C0)
#define lbl_805DA7C4 (*(const f32 *)lbl_805DA7C4)
#define lbl_805DA7C8 (*(const f32 *)lbl_805DA7C8)
#define lbl_805DA7CC (*(const f32 *)lbl_805DA7CC)

#include "types.h"

extern "C" {

void vfunc_83__18TObjEneRe4SorcererFv(void* p);

void TObjEneRe4Sorcerer__sub_800EFE30(void);

s32 TObjEneRe4Sorcerer::vfunc_83() { if (((int (*)(void*))get_target_info__9TObjEneDDFPv)(this) != 0) { ((int (*)(void*))TObjEneRe4Sorcerer__sub_800EFE30)(this); } }

}

#include "types.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/enemy/TObjEneRe4Sorcerer.h"
#include "pso/TParticleCtrl.h"
#include "pso/boss/TBoss8Dragon.h"
#include "pso/boss/TObjBoss2Tunnel.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/enemy/TObjEneMe3ShinowaReal.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/item/TItemProShield.h"
#include "pso/misc/RenderFadeState.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/misc/TTecGiZonde.h"
#include "pso/misc/TTecGrants.h"
#include "pso/misc/TTecMegid.h"
#include "pso/misc/TTecRaFoie.h"
#include "pso/misc/TTecResta.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define PSO_VCALL_VObj_18_aab587_m93(_self) (((VObj_18_aab587 *)(_self))->m93())
#define PSO_VCALL_VObj_18_aab587_m86(_self) (((VObj_18_aab587 *)(_self))->m86())

struct VBase_18_3f7e26 { char pad[0x18]; };

struct VObj_18_3f7e26 : VBase_18_3f7e26 {
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
    virtual s32 m86();
    virtual s32 m87();
};

struct VBase_14 { char pad[0x14]; };

struct VObj_14 : VBase_14 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual s32 m6();
    virtual s32 m7();
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
    virtual s32 m8(f32, f32);
    virtual s32 m9(f32, f32, f32);
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
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual void m103();
    virtual s32 m104();
};

struct Fade_800EDCCC { u8 b[0x1C]; };

struct Sorc_800EDCCC { u8 pad[0x474]; Fade_800EDCCC fades[2]; };

struct VBase_18_d3ac76 { char pad[0x18]; };

struct VObj_18_d3ac76 : VBase_18_d3ac76 {
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
    virtual s32 m97();
};

struct Obj_800EFB60 : VObj_18_d3ac76 { u8 pad2[0x3e4 - 0x1c]; u16 orbs[2]; };

extern "C" {
f64 atan2_float(f32, f32);
s32 enemy_copy_target_destination(void *);
s32 update_velocity__9TObjEneDDFv(void *);
s32 set_field_378__9TObjEneDDFPvi(void *, s32);
s32 transition_enemy_state(void *, s32);
s32 set_attack_flag__18TObjEneRe4SorcererFPv(int);
s32 get_state__18TObjEneRe4SorcererFPv(int);
s32 TObjEneRe4Sorcerer__sub_800ED498(int);
void TObjEneRe4Sorcerer__sub_800EF214(s32 arg0);
s32 advance_animation_playback(void *);
u32 find_entity_by_id(u16);
extern const f64 TObjEneRe4Sorcerer__data_8043D408;
void TObjEneRe4Sorcerer__sub_800EE7DC(u8 *arg0, s32 arg1);
s32 is_split_screen();
s32 get_camera_mode__11TCameraCtrlFv();
s32 is_main_phase_15__9TObjEneDDFv();
s32 update_player_state__9TObjEneDDFv(void *, int, int);
s32 update_obstruction_fade(int);
s32 toggle_particle_effect__10TObjPlayerFv();
s32 scroll_strip_uvs(int, int, int);
s32 end_effect_render__13TParticleCtrlFv();
s32 TObjEneRe4Sorcerer__sub_801E3F1C(f32, f32);
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv(void *);
s32 rotate_matrix_y(int, int);
s32 translate_matrix(int, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFl(int);
extern s32 TObjEneRe4Sorcerer__render_node_index;
extern s32 TObjEneRe4Sorcerer__saved_render_flags;
extern f32 TObjEneRe4Sorcerer__effect_render_scale;
extern s32 re4_sorcerer_render_node_ptr;
extern u32 TObjEneRe4Sorcerer__uv_scroll_buffer;
extern s32 lbl_805D5660;
extern s32 model_render_flags;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
void render__18TObjEneRe4SorcererFv(u8 *arg0);
u8 *get_player_data__10TObjPlayerFi(s32);
s16 obj_getField1c(void *);
u32 csnLookAt(void *, void *);
s32 enemy_bind_or_clear_target(void *, u16);
s32 enemy_clear_target(void *);
void enemy_set_target_id(void *, u16);
s32 TObjEneDD__sub_800BA6C4(void *);
s32 is_alive__9TObjEneDDFv(s32);
s32 transform_relative_position__9TObjEneDDFPv(void *, void *);
f32 horizontal_distance_squared(void *, void *);
u32 find_entity_by_id(u16);
s32 select_attack_target__18TObjEneRe4SorcererFiff(s32 arg0, f32 farg0, f32 farg1);
s32 toggle_particle_effect__10TObjPlayerFv();
void scale_matrix(s32, s32, f32, f32, f32);
extern s32 TObjEneRe4Sorcerer__render_node_index;
extern s32 TObjEneRe4Sorcerer__saved_render_flags;
extern f32 TObjEneRe4Sorcerer__effect_render_scale;
extern s32 model_render_flags;
}

extern "C" {

struct Base_A_800EDCCC { char pad[0x18]; };

struct V_A_800EDCCC : Base_A_800EDCCC {
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void m93();
};

struct VBase_18_aab587
{
  char pad[0x18];
};

struct VObj_18_aab587 : VBase_18_aab587 {
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
    virtual s32 m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual s32 m93();
};

struct VBase_14_c1c33b { char pad[0x14]; };

struct VObj_14_c1c33b : VBase_14_c1c33b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};

typedef struct { f32 x, y, z; } Vec_800EE0F8;

struct VBase_14_763762 { char pad[0x14]; };

struct VObj_14_763762 : VBase_14_763762 {
    virtual void m0();
    virtual void m1();
    virtual s32 m2();
    virtual void m3();
    virtual s32 m4();
    virtual s32 m5();
};

struct VBase_18_9c7b63 { char pad[0x18]; };

struct VObj_18_9c7b63 : VBase_18_9c7b63 {
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
    virtual s32 m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual s32 m100();
};

struct Sorc_800EEDE4 {
    u8 pad0[0x3E4];
    u16 ids[2];
};

struct Sorc_800EEC00 {
    u8 pad0[0x3E4];
    u16 ids[2];
};

typedef struct { f32 x, y, z; } Vec_800EF354;

typedef struct VBase_18_aab587 VBase_18_aab587;

typedef struct VObj_18_aab587 VObj_18_aab587;

struct Base_800EF7C8 { u8 pad[0x18]; };

struct V_800EF7C8 : Base_800EF7C8 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79(); virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89(); virtual void m90(); virtual void m91(); };

struct Obj_800EF7C8 : V_800EF7C8 { u8 pad2[0x3e4 - 0x1c]; u16 orbs[2]; };

struct Base_800EF844 { u8 pad[0x18]; };

struct V_800EF844 : Base_800EF844 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79(); virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89(); virtual void m90(); virtual void m91(); virtual void m92(); };

struct Obj_800EF844 : V_800EF844 { u8 pad2[0x3e4 - 0x1c]; u16 orbs[2]; };

struct VBase_18_f9c8ca { char pad[0x18]; };

struct VObj_18_f9c8ca : VBase_18_f9c8ca {
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
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual s32 m100();
};

struct Vec_800EF95C { f32 x, y, z; };

struct Base_800EF95C { u8 pad[0x18]; };

struct V_800EF95C : Base_800EF95C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69();
    virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89();
    virtual void m90(); virtual void m91(); virtual void m92(); virtual void m93(); virtual void m94(); virtual void m95(); virtual void m96(); virtual void m97(); virtual void m98(); virtual void m99();
    virtual void m100();
};

struct Obj_800EF95C : V_800EF95C {
    u8 pad1c[0x38 - 0x1C];
    Vec_800EF95C pos;
    Vec_800EF95C prev;
    u8 pad50[0x60 - 0x50];
    s32 rot;
    u8 pad64[0x120 - 0x64];
    u8 col[0x394 - 0x120];
    u8 mtx[0x3E4 - 0x394];
    u16 orbs[2];
    u8 pad3e8[0x3F0 - 0x3E8];
    s32 ang;
};

struct Obj_800F0054 { u8 pad[0x3E4]; u16 handles[2]; };

typedef struct { f32 x, y, z; } Vec_800F0464;

struct Params_800F0464 { s32 a, b, c, d; };

struct Map_800F06B4 { s32 base; s32 start; };

struct VBase_18_6eb1ad { char pad[0x18]; };

struct VObj_18_6eb1ad : VBase_18_6eb1ad {
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
    virtual s32 m83();
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
    virtual s32 m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual s32 m103();
};

struct VBase_14_fa0828 { char pad[0x14]; };

struct VObj_14_fa0828 : VBase_14_fa0828 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual s32 m3();
};

struct VBase_18_be4a70 { char pad[0x18]; };

struct VObj_18_be4a70 : VBase_18_be4a70 {
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
    virtual s32 m85(s16, s32);
};

struct Vec_800F0118 { f32 x, y, z; };

struct E_800F0118 { u8 pad[0x1C]; };

struct Sorc_800F0118 {
    u8 pad0[0x1C];
    u16 f1C;
    u8 pad1E[0x2C - 0x1E];
    s16 f2C;
    u8 pad2E[0x3CC - 0x2E];
    Vec_800F0118 v3CC[2];
    u16 f3E4;
    u16 f3E6;
    u8 pad3E8[0x474 - 0x3E8];
    E_800F0118 e474[4];
};

s32 VecCopy__FP3VecPC3Vec(void *, void *);
s16 obj_getField1c(void *);
f64 atan2_float(f32, f32);
s32 queue_destruction__7TObjectFv(void *);
s32 dispatch_shared_handler_a__6TLobbyFl(int);
s32 register_object__6TLobbyFl(int);
s32 dispatch_shared_handler_b__6TLobbyFl(int);
s32 register_boss__6TLobbyFl(int);
void TLobby__sub_8001FE7C(void*, int);
void fn_80044330(void *);
u32 csnVectorUnder(void *, void *, s32);
s32 TObjPlayer__sub_800A04F0(void *);
s32 TObjPlayer__sub_800A05B8(void *, int);
s32 enemy_has_live_target__12TObjEneDD_STFv(s32);
s32 enemy_init_validate_period(void *, int);
s32 enemy_copy_target_destination(void *);
s32 enemy_init_acquire_period(void *, int);
s32 enemy_clear_target(void *);
s32 update_velocity__9TObjEneDDFv(void *);
s32 __dt__9TObjEneDDFv(void *, int);
s32 reset_hp__9TObjEneDDFv(void *, void *, void *, void *);
s32 initialize_enemy_state__9TObjEneDDFv(void *, int);
s32 is_alive__9TObjEneDDFv(s32);
s32 transform_relative_position__9TObjEneDDFPv(void *, void *);
s32 TObjEneDD__sub_800BA804(int);
s32 init_model__9TObjEneDDFv(void *, void *, int, int);
u32 vfunc_102__9TObjEneDDFv();
u32 vfunc_101__9TObjEneDDFPUc();
void calc_wall_clamped_destination(void *, Vec_800EF95C *, f32, f32, f32);
s32 clear_attack_receipts(void *);
void invoke_initialization_hook__9TObjEneDDFPv(void *, void *);
u32 load_enemy_bml_resource_named(void *, void *);
u32 load_enemy_bml_resource(void *);
s32 set_field_378__9TObjEneDDFPvi(void *, s32);
s32 transition_enemy_state(void *, s32);
s32 init_position_vectors__9TObjEneDDFPv(void *);
s32 tick_period_counter(s32, s32, s32);
s32 reset_transform__13TObjEneRe4BitFPv();
s32 set_flag3cc_bit2000__18TObjEneRe4SorcererFPv(void *);
void call_vt_90_91__13TObjEneRe4BitFv(u8 *arg0);
void invoke_state_callbacks__18TObjEneRe4SorcererFPv(u8 *arg0);
s32 clear_state_flag_0x10__18TObjEneRe4SorcererFPv(u32);
s32 set_flag_and_notify__18TObjEneRe4SorcererFPv();
s32 set_state_flag_and_mode__18TObjEneRe4SorcererFPvi(u32, s32);
u8 * get_spell_data__18TObjEneRe4SorcererFPv();
s32 create_enabled__13TObjEneRe4BitFiiii(void *, void *, int, int);
s32 create_disabled__13TObjEneRe4BitFiiii(void *, void *, int, int);
s32 TObjEneRe4Bit__sub_800EDAB0();
void TObjEneRe4Bit__sub_800EDAB4();
void TObjEneRe4Sorcerer__sub_800EE0F8(u8 *arg0, s32 arg1);
void TObjEneRe4Sorcerer__sub_800EE1CC(u8 *arg0, s32 arg1);
s32 init_float_params__9TObjEneDDFv(void *);
s32 TObjEneRe4Sorcerer__sub_800EEC00(void *arg0p, void *arg1p);
s32 TObjEneRe4Sorcerer__sub_800EEDE4(void *arg0p, void *arg1p);
void TObjEneRe4Sorcerer__sub_800EEFE4(u8 *arg0, s32 arg1);
void TObjEneRe4Sorcerer__vt85(s32 arg0, u32 arg1, s32 arg2);
void TObjEneRe4Sorcerer__sub_800EF214(s32 arg0);
s32 update_farthest_target__18TObjEneRe4SorcererFPviPv(u8 *arg0, s32 arg1, f32 *arg2);
void TObjEneRe4Sorcerer__sub_800EF7C8(Obj_800EF7C8 *self);
void TObjEneRe4Sorcerer__sub_800EF844(Obj_800EF844 *self);
void set_motion_by_state__18TObjEneRe4SorcererFPv(void *arg0);
void TObjEneRe4Sorcerer__sub_800EF95C(Obj_800EF95C *self, f32 speed);
void vfunc_102__18TObjEneRe4SorcererFv(u8 *arg0);
void vfunc_101__18TObjEneRe4SorcererFPUc(u8 *arg0);
void TObjEneRe4Sorcerer__sub_800EFE30(void);
void vfunc_88__18TObjEneRe4SorcererFv(void *arg0);
void vfunc_61__18TObjEneRe4SorcererFv(void);
void vfunc_62__18TObjEneRe4SorcererFv(u8 *arg0);
void vfunc_63__18TObjEneRe4SorcererFv(void* p);
void vfunc_28__18TObjEneRe4SorcererFv(void);
void run_task__18TObjEneRe4SorcererFv(u8 *arg0);
Obj_800F0054 * __dt__18TObjEneRe4SorcererFv(Obj_800F0054 *arg0, s16 arg1);
void * TObjEneRe4Sorcerer__ct(void *arg0, void *arg1, void *arg2);
void TBoss3Volopt__sub_800F059C(void);
s32 remap_area_sound_id(s32 arg0, s32 arg1);
void destroy_buffer_pair(void*, int);
s32 copy_target_state__14TObjEnePanarmsFPv(void *, s32);
f32 horizontal_distance_squared(void *, void *);
s32 approach_angle_limited(s32, s32, s32);
s32 set_animation__10TObjPlayerFPvs(void *, int);
s32 advance_animation_playback(void *);
u32 find_entity_by_id(u16);
s32 free_collision_body_parts(void *);
s32 play_persistent_sound(s32, void *, void *, s32, s32);
s32 play_sound_effect(void *, void *, int, int);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
s32 create_ex__11TTecGiBartaFPvPvPv(void *, void *, s32, s32);
void __destroy_arr(void *, void *, u32, u32);
void __construct_array(void *, void *, void *, int, int);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
void vec3_add_to(void *, void *);
s32 subtract_vector(void *, void *);

extern const f64 TObjEneRe4Sorcerer__data_8043D408;
extern s32 TObjEneRe4Sorcerer__render_node_index;
extern s32 TObjEneRe4Sorcerer__saved_render_flags;
extern f32 TObjEneRe4Sorcerer__effect_render_scale;
extern u32 TObjEneRe4Sorcerer__uv_scroll_buffer;
extern s32 TObjPlayer__sub_800D7C58[];
extern s32 init_and_activate__10TObjPlayerFv[];
extern Params_800F0464 re4_sorcerer_spawn_descriptor;
extern u8 lbl_8043D418[];
extern Map_800F06B4 area_sound_remap_table_a[];
extern Map_800F06B4 area_sound_remap_table_b[];
extern Vec_800F0464 lbl_80501070;
extern void *lbl_805D2AF0;
extern s32 lbl_805D52D0;
extern s32 TObjEneRe4Sorcerer__attack_params;
extern s32 TObjEneRe4Sorcerer__resistance_params;
extern u8 *sorcerer_behavior_params;
extern u32 sorcerer_bml_resource;
extern s32 re4_sorcerer_render_node_ptr;
extern void *tl_04;

extern "C" {
void TLobby__sub_801A1FD8();
}
extern "C" {
void vfunc_103__9TObjEneDDFPUc();
}
extern "C" {
void vfunc_79__9TObjEneDDFv();
}
extern "C" {
void TObjEneDD__vt82();
}
extern "C" {
void vfunc_85__9TObjEneDDFv();
}
extern "C" {
void vfunc_86__9TObjEneDDFv();
}
extern "C" {
void vfunc_89__9TObjEneDDFv();
}
extern "C" {
void vfunc_90__9TObjEneDDFv();
}
extern "C" {
void vfunc_91__9TObjEneDDFv();
}
extern "C" {
void vfunc_92__9TObjEneDDFv();
}
extern "C" {
void vfunc_93__9TObjEneDDFv();
}
extern "C" {
void vfunc_94__9TObjEneDDFv();
}
extern "C" {
void vfunc_95__9TObjEneDDFv();
}
extern "C" {
void vfunc_96__9TObjEneDDFv();
}
extern "C" {
void vfunc_97__9TObjEneDDFv();
}
extern "C" {
void vfunc_98__9TObjEneDDFv();
}
extern "C" {
void vfunc_99__9TObjEneDDFv();
}
extern "C" {
void vfunc_100__9TObjEneDDFv();
}
extern "C" {
void TObjEneEpsilon__vt101();
}
extern "C" {
void vfunc_83__12TObjEneDD_STFv();
}
extern "C" {
}
extern "C" {
}
extern "C" {
void TObjPlayer__sub_8000FF3C();
}
extern "C" {
void TObjPlayer__sub_80010A80();
}
extern "C" {
void consume_timer_field__10TObjPlayerFPvi();
}
extern "C" {
void TObjPlayer__sub_80014830();
}
extern "C" {
void TObjPlayer__sub_80014838();
}
extern "C" {
void TObjPlayer__sub_80014840();
}
extern "C" {
void TObjPlayer__sub_80014890();
}
extern "C" {
void TObjPlayer__sub_80014894();
}
extern "C" {
void TObjPlayer__sub_80014898();
}
extern "C" {
void apply_slow_status__10TObjPlayerFPv();
}
extern "C" {
void update_shock_clock__10TObjPlayerFPv();
}
extern "C" {
void TObjPlayer__sub_800172CC();
}
extern "C" {
void TObjPlayer__sub_80018E6C();
}
extern "C" {
void vfunc_13__13TUnk_804AF8A0Fl();
}
extern "C" {
void update_and_send_enemy_hit_state();
}
extern "C" {
void apply_hit_message_flags__10TObjPlayerFPvPv();
}
extern "C" {
void add_actor_exp();
}
extern "C" {
void apply_action_hold_status();
}
extern "C" {
void apply_anti_technique__10TObjPlayerFv();
}
extern "C" {
void apply_attack_stat_status__10TObjPlayerFv();
}
extern "C" {
void apply_confusion_status__10TObjPlayerFv();
}
extern "C" {
}
extern "C" {
void apply_knockback_from_attacker();
}
extern "C" {
void apply_movement_ailment__10TObjPlayerFv();
}
extern "C" {
void apply_object_set_data();
}
extern "C" {
void apply_paralysis__10TObjPlayerFv();
}
extern "C" {
void apply_poison_status__10TObjPlayerFv();
}
extern "C" {
void apply_set_data__9TObjEnemyFPv();
}
extern "C" {
void apply_shock_status__10TObjPlayerFv();
}
extern "C" {
void apply_switch_attack__10TObjPlayerFi();
}
extern "C" {
void calc_distance_accuracy_penalty__10TObjPlayerFv();
}
extern "C" {
void classify_actor_view_detail();
}
extern "C" {
void clear_all_status_effects();
}
extern "C" {
void clear_harmful_statuses__10TObjPlayerFv();
}
extern "C" {
void cure_paralysis__10TObjPlayerFv();
}
extern "C" {
void cure_poison_ailment();
}
extern "C" {
void enemy_spawn_jellen_effect();
}
extern "C" {
void enemy_spawn_zalure_effect();
}
extern "C" {
void fn_80010EBC();
}
extern "C" {
void fn_80010EC0();
}
extern "C" {
void fn_80010EC4();
}
extern "C" {
void fn_80010EC8();
}
extern "C" {
void clear_lobby_object_state__9TObjEnemyFv();
}
extern "C" {
void vfunc_9__13TUnk_804806E8Fv();
}
extern "C" {
void get_actor_level_index();
}
extern "C" {
void vfunc_12__9TObjEnemyFv();
}
extern "C" {
void get_pos__10TObjPlayerFii();
}
extern "C" {
}
extern "C" {
void is_actor_cadence_frame();
}
extern "C" {
void is_target_in_attack_range__10TObjPlayerFv();
}
extern "C" {
extern u8 lbl_8043D2F0[];
}
extern "C" {
extern u8 lbl_8043D308[];
}
extern "C" {
extern u8 lbl_8043D318[];
}
extern "C" {
extern u8 lbl_8043D330[];
}
extern "C" {
extern u8 lbl_8043D348[];
}
extern "C" {
extern u8 lbl_8043D360[];
}
extern "C" {
extern u8 lbl_8043D374[];
}
extern "C" {
extern u8 lbl_8043D38C[];
}
extern "C" {
extern u8 lbl_8043D3A0[];
}
extern "C" {
extern u8 lbl_8043D3B8[];
}
extern "C" {
extern u8 lbl_8043D3CC[];
}
extern "C" {
void receive_direct_attack__10TObjPlayerFv();
}
extern "C" {
void receive_physical_attack__10TObjPlayerFv();
}
extern "C" {
void receive_weapon_special_attack__10TObjPlayerFv();
}
extern "C" {
}
extern "C" {
void render_actor_shadows_default();
}
extern "C" {
void reset_motion_fields__13TUnk_804806E8Fv();
}
extern "C" {
void reset_pose__10TObjPlayerFPv();
}
extern "C" {
void roll_physical_accuracy__10TObjPlayerFv();
}
extern "C" {
void select_melee_contact_body__10TObjPlayerFv();
}
extern "C" {
}
extern "C" {
}
extern "C" {
}
extern "C" {
void trigger_switch_attack__10TObjPlayerFi();
}
extern "C" {
void try_start_action__10TObjPlayerFPvii();
}
extern "C" {
void update_action_hold_status__10TObjPlayerFv();
}
extern "C" {
void update_action_timer__10TObjPlayerFPv();
}
extern "C" {
void update_actor_ground_y();
}
extern "C" {
void update_attack_stat_status();
}
extern "C" {
void update_defense_stat_status();
}
extern "C" {
void update_flag30_timer__10TObjPlayerFPv();
}
extern "C" {
void update_movement_status__10TObjPlayerFv();
}
extern "C" {
void update_object_view_visibility__13TUnk_804B9870Fff();
}
extern "C" {
void update_poison_status__10TObjPlayerFv();
}
extern void *bm_ene_re4_sorcerer_model_names[3];
extern void *bm_ene_re4_sorcerer_motion_names[9];
void *re4_sorcerer_init_params[7] = {
    (void *)0x43610000, (void *)0x0, (void *)0x600, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *re4_sorcerer_collision_body_part_table[11] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x41000000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *bm_ene_re4_sorcerer_model_names[3] = {
    (void *)&lbl_8043D2F0, (void *)&lbl_8043D308, (void *)0x0,
};
void *bm_ene_re4_sorcerer_motion_names[9] = {
    (void *)&lbl_8043D318, (void *)&lbl_8043D330, (void *)&lbl_8043D348, (void *)&lbl_8043D360,
    (void *)&lbl_8043D374, (void *)&lbl_8043D38C, (void *)&lbl_8043D3A0, (void *)&lbl_8043D3B8,
    (void *)0x0,
};
void *bm_ene_re4_sorcerer_resource_descriptor[4] = {
    (void *)&lbl_8043D3CC, (void *)&bm_ene_re4_sorcerer_model_names, (void *)&bm_ene_re4_sorcerer_motion_names, (void *)0x20008,
};
void *re4_sorcerer_action_params[32] = {
    (void *)0x10000, (void *)0x7, (void *)0x3f19999a, (void *)0x0,
    (void *)0x20002, (void *)0x2, (void *)0x3f19999a, (void *)0x0,
    (void *)0x10000, (void *)0x0, (void *)0x3f19999a, (void *)0x80000000,
    (void *)0x30000, (void *)0x1, (void *)0x3f333333, (void *)0x0,
    (void *)0x30000, (void *)0x3, (void *)0x3f000000, (void *)0x0,
    (void *)0x30000, (void *)0x4, (void *)0x3f19999a, (void *)0x0,
    (void *)0x30000, (void *)0x5, (void *)0x3f000000, (void *)0x0,
    (void *)0x20000, (void *)0x6, (void *)0x3f19999a, (void *)0x80000000,
};
void *__vt__18TObjEneRe4Sorcerer[107] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__18TObjEneRe4SorcererFv, (void *)&run_task__18TObjEneRe4SorcererFv,
    (void *)&render__18TObjEneRe4SorcererFv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_motion_fields__13TUnk_804806E8Fv, (void *)&vfunc_9__13TUnk_804806E8Fv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail,
    (void *)&vfunc_12__9TObjEnemyFv, (void *)&vfunc_13__13TUnk_804AF8A0Fl, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&vfunc_28__18TObjEneRe4SorcererFv, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&TObjPlayer::test_flag_256,
    (void *)&TObjPlayer::test_flag30_512, (void *)&TObjPlayer::has_flag_0x800, (void *)&TObjPlayer::test_flag_1000, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&TObjPlayer::apply_defense_stat_status, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjPlayer__sub_80014898, (void *)&TObjPlayer__sub_80014894,
    (void *)&TObjPlayer__sub_80014890, (void *)&vfunc_61__18TObjEneRe4SorcererFv, (void *)&vfunc_62__18TObjEneRe4SorcererFv, (void *)&vfunc_63__18TObjEneRe4SorcererFv,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&update_and_send_enemy_hit_state, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&vfunc_79__9TObjEneDDFv,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPv, (void *)&clear_lobby_object_state__9TObjEnemyFv, (void *)&vfunc_83__12TObjEneDD_STFv,
    (void *)&TObjEneDD__vt82, (void *)&vfunc_85__9TObjEneDDFv, (void *)&vfunc_86__9TObjEneDDFv, (void *)&TObjEneRe4Sorcerer__vt85,
    (void *)&vfunc_88__18TObjEneRe4SorcererFv, (void *)&vfunc_89__9TObjEneDDFv, (void *)&vfunc_90__9TObjEneDDFv, (void *)&vfunc_91__9TObjEneDDFv,
    (void *)&vfunc_92__9TObjEneDDFv, (void *)&vfunc_93__9TObjEneDDFv, (void *)&vfunc_94__9TObjEneDDFv, (void *)&vfunc_95__9TObjEneDDFv,
    (void *)&vfunc_96__9TObjEneDDFv, (void *)&vfunc_97__9TObjEneDDFv, (void *)&vfunc_98__9TObjEneDDFv, (void *)&vfunc_99__9TObjEneDDFv,
    (void *)&vfunc_100__9TObjEneDDFv, (void *)&vfunc_101__18TObjEneRe4SorcererFPUc, (void *)&vfunc_102__18TObjEneRe4SorcererFv, (void *)&vfunc_103__9TObjEneDDFPUc,
    (void *)&TObjEneEpsilon__vt101, (void *)&vfunc_83__18TObjEneRe4SorcererFv, (void *)&vfunc_106__18TObjEneRe4SorcererFv,
};
#define re4_sorcerer_collision_body_part_table ((f32 *)re4_sorcerer_collision_body_part_table)
#define bm_ene_re4_sorcerer_resource_descriptor ((u8 *)bm_ene_re4_sorcerer_resource_descriptor)
#define __vt__18TObjEneRe4Sorcerer ((s32 *)__vt__18TObjEneRe4Sorcerer)

void render__18TObjEneRe4SorcererFv(u8 *arg0) {
    s32 var_r30;
    s32 temp_r31;
    s32 var_r28;
    s32 var_r27;
    if (TObjPlayer::check_demo_mode() == 1) {
        ((VObj_18 *)(arg0))->m104();
        return;
    }
    var_r30 = 0;
    if (is_split_screen() != 0) {
        var_r30 = get_camera_mode__11TCameraCtrlFv();
    }
    var_r30 = (s32)&((Sorc_800EDCCC *)arg0)->fades[var_r30];
    update_obstruction_fade((int) (((u8 *)var_r30)));
    temp_r31 = ((RenderFadeState *)var_r30)->updateFromCamera((const f32*)(arg0 + 0x2FC));
    if (!(*(s32 *)((s8 *)arg0 + 0x3C8) & 2)) {
        var_r28 = 0;
    } else if (is_main_phase_15__9TObjEneDDFv() != 0) {
        var_r28 = ((VObj_18 *)(arg0))->m9(lbl_805D9E88, lbl_805D9E84, (*(f32 *)&TObjEneRe4Sorcerer__data_805DA78C));
    } else if (((VObj_18 *)(arg0))->m8(lbl_805DA788, (*(f32 *)&TObjEneRe4Sorcerer__data_805DA78C)) != 0) {
        var_r28 = 1;
    } else {
        var_r28 = 0;
    }
    if (var_r28 != 0) {
        if (*(s32 *)((s8 *)arg0 + 0x3C8) & 0x10) {
            update_player_state__9TObjEneDDFv((void *) (arg0), (int) (0), (int) (0));
        }
        ((TObjEneDD *)arg0)->update_secondary_light();
        set_global_param__8TObjFishFl((int) (*(s32 *)((s8 *)arg0 + 0x24)));
        lbl_805D5660 = model_render_flags;
        TObjEneDD::clear_global_flag_400();
        scroll_strip_uvs((int) ((*(s32 *)&TObjEneRe4Sorcerer__uv_scroll_buffer)), (int) (*(s16 *)((s8 *)arg0 + 0x3C0)), (int) (0));
        model_render_flags |= 0x20000;
        TObjEneRe4Sorcerer__sub_801E3F1C((f32) ((*(f32 *)&TObjEneRe4Sorcerer__data_805DA790)), (f32) (*(f32 *)((s8 *)arg0 + 0x3C4)));
        toggle_particle_effect__10TObjPlayerFv();
        var_r27 = 1;
        if (*(s32 *)((s8 *)arg0 + 0x3C8) & 4) {
            ((VObj_14 *)(arg0 + 0x3FC))->m6();
            if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv((void *) (arg0)) != 0) {
                var_r27 = 0;
            }
        } else if (temp_r31 != 0) {
            ((VObj_14 *)(((u8 *)var_r30)))->m6();
            if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv((void *) (arg0)) != 0) {
                var_r27 = 0;
            }
        }
        if (var_r27 != 0) {
            push_matrix();
            post_translate_matrix((void *) (arg0 + 0x38));
            translate_matrix((int) (0), (f32) ((*(f32 *)&TObjEneRe4Sorcerer__data_805DA790)), (f32) ((*(f32 *)&TObjEneRe4Sorcerer__data_805DA794)), (f32) ((*(f32 *)&TObjEneRe4Sorcerer__data_805DA790)));
            rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
            TObjEneRe4Sorcerer__render_node_index = 0;
            TObjEneRe4Sorcerer__saved_render_flags = 0;
            TObjEneRe4Sorcerer__effect_render_scale = *(f32 *)((s8 *)arg0 + 0x3F8);
            (*(u8 * *)&re4_sorcerer_render_node_ptr) = arg0 + 0x3CC;
            TObjEneRe7Berura::set_global_state((s32)((void *)TObjEneRe4Sorcerer::step_effect_sequence));
            model_render_flags |= 0x01000000;
            if (var_r28 == 1) {
                ((TObjEneRe7Berura *)arg0)->draw();
            } else {
                ((TObjPlayer *)arg0)->render_world_model();
            }
            model_render_flags &= 0xFEFFFFFF;
            TObjEneRe7Berura::set_global_state((s32)NULL);
            pop_matrix();
        }
        if (*(s32 *)((s8 *)arg0 + 0x3C8) & 4) {
            ((VObj_14 *)(arg0 + 0x3FC))->m7();
        } else if (temp_r31 != 0) {
            ((VObj_14 *)(((u8 *)var_r30)))->m7();
        }
        model_render_flags = lbl_805D5660;
        ((TObjEneDD *)arg0)->update_primary_light();
        end_effect_render__13TParticleCtrlFv();
    }
}

#pragma push
#pragma opt_propagation off
void TObjEneRe4Sorcerer::step_effect_sequence() {
    s32 t;
    switch (TObjEneRe4Sorcerer__render_node_index) {
    case 0:
    case 1:
    case 2:
    case 3:
        break;
    case 0x34:
        f32 k = TObjEneRe4Sorcerer__effect_render_scale;
        t = model_render_flags;
        TObjEneRe4Sorcerer__saved_render_flags = t;
        model_render_flags = t & 0xFFFF7FFF;
        scale_matrix(0, t, k, k, k);
        TParticleCtrl::begin_effect_render();
        break;
    case 0x37:
        model_render_flags = TObjEneRe4Sorcerer__saved_render_flags;
        toggle_particle_effect__10TObjPlayerFv();
        break;
    }
    TObjEneRe4Sorcerer__render_node_index += 1;
}
#pragma pop

void TObjEneRe4Sorcerer::handle_death_state(s32 arg1) {
    u8 *arg0 = (u8 *)this;
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 6;
        *(s32 *)((s8 *)arg0 + 0x3C8) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C8) | 6);
        ((TBoss8Dragon *)arg0)->refresh_and_send_entity_flags();
        *(s32 *)((s8 *)arg0 + 0x4E4) = 0;
        ((TObjPlayer *)(arg0 + 0x2FC))->request_two_effects();
        TObjPlayer__sub_800A04F0((void *) (arg0 + 0x3FC));
        *(f32 *)((s8 *)arg0 + 0x3F8) = (f32) TObjEneRe4Sorcerer__data_805DA790;
        play_sound_effect((void *) (((s32)copy_target_state__14TObjEnePanarmsFPv((void *)((void *) (arg0)), (s32)((int) (0x4003AD19))))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        return;
    case 0:
        advance_animation_playback((void *) (arg0));
        if (((VObj_14_c1c33b *)((u8 *)(arg0) + (1020)))->m4() != 0) {
            TObjPlayer::apply_effect_variant_b((s32)((void *) (arg0 + 0x38)), (s32)((int) (0)));
            queue_destruction__7TObjectFv((void *) (arg0));
        }
    case 3:
    case 5:
        return;
    }
}

void TObjEneRe4Sorcerer__sub_800EE0F8(u8 *arg0, s32 arg1) {
    Vec_800EE0F8 v;
    f32 c;
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 5;
        advance_animation_playback(arg0);
        break;
    case 3:
        if (((TObjEneDD *)arg0)->get_flag_b4() != 0) {
            transition_enemy_state(arg0, *(s32 *)((s8 *)arg0 + 0x378));
        }
        break;
    case 0:
        advance_animation_playback(arg0);
        VecCopy__FP3VecPC3Vec(&v, arg0 + 0x308);
        c = ((TObjBoss2Tunnel *)(&v))->clamp_velocity();
        ((TObjEneDD *)arg0)->move_to_wall_clamped_destination(v.x, v.z, c);
        *(f32 *)((s8 *)arg0 + 0x308) *= lbl_805DA79C;
        *(f32 *)((s8 *)arg0 + 0x310) *= lbl_805DA79C;
        TObjEneRe4Sorcerer__sub_800EF214((s32) arg0);
        break;
    case 5:
        clear_attack_receipts(arg0);
        break;
    }
}

void TObjEneRe4Sorcerer__sub_800EE1CC(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r3;
    u8 *temp_r30;

    temp_r30 = (u8 *)(find_entity_by_id(*(u16 *)((s8 *)arg0 + 0x3E6)));
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi((void *) (arg0), (int) (3));
        *(s32 *)((s8 *)arg0 + 0x3C8) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C8) | 0xA);
        *(s32 *)((s8 *)arg0 + 0x4E4) = 0;
        *(s32 *)((s8 *)arg0 + 0x4E8) = 0;
        return;
    case 3:
        if ((s32) *(s32 *)((s8 *)arg0 + 0x4E8) == 5) {
            ((TObjEneRe4Sorcerer *)arg0)->advance_anim_frame();
            transition_enemy_state((void *) (arg0), (int) (3));
        }
        return;
    case 0:
        advance_animation_playback((void *) (arg0));
        *(s32 *)((s8 *)arg0 + 0x4E4) = (s32) (*(s32 *)((s8 *)arg0 + 0x4E4) + 1);
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x4E8);
        switch (temp_r0) {
        case 0:
            if ((temp_r30 != NULL) && (TObjEneRe4Sorcerer__sub_800ED498((int) (temp_r30)) != 0)) {
                *(s32 *)((s8 *)arg0 + 0x4E4) = 0;
                if (is_alive__9TObjEneDDFv(*(s32 *)((s8 *)arg0 + 0x390)) != 0) {
                    if ((void *) *(u8 **)((s8 *)arg0 + 0x390) != arg0) {
                        enemy_copy_target_destination((void *) (arg0));
                        update_velocity__9TObjEneDDFv((void *) (arg0));
                        if (*(f32 *)((s8 *)arg0 + 0x3AC) >= lbl_805DA7A0) {
                            *(s32 *)((s8 *)arg0 + 0x4E8) = 4;
                        } else {
                            *(s32 *)((s8 *)arg0 + 0x4E8) = 1;
                            *(s16 *)((s8 *)arg0 + 0xB8) = 1;
                            *(s32 *)((s8 *)arg0 + 0x3C8) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C8) | 8);
                            ((TObjEneRe4Sorcerer *)arg0)->apply_mylla_effect();
                        }
                        *(s32 *)((s8 *)arg0 + 0x60) = (s32) (TObjEneRe4Sorcerer__data_8043D408 * atan2_float(*(f32 *)((s8 *)arg0 + 0x3A0), *(f32 *)((s8 *)arg0 + 0x3A8)));
                    } else {
                        *(s32 *)((s8 *)arg0 + 0x4E8) = 1;
                        *(s16 *)((s8 *)arg0 + 0xB8) = 1;
                        *(s32 *)((s8 *)arg0 + 0x3C8) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C8) | 8);
                        ((TObjEneRe4Sorcerer *)arg0)->apply_mylla_effect();
                    }
                } else {
                    *(s32 *)((s8 *)arg0 + 0x4E8) = 4;
                }
            } else if ((f32) *(s32 *)((s8 *)arg0 + 0x4E4) >= lbl_805DA7A4) {
                *(s32 *)((s8 *)arg0 + 0x4E8) = 5;
            }
            break;
        case 1:
            if ((temp_r30 != NULL) && (TObjEneRe4Sorcerer__sub_800ED498((int) (temp_r30)) == 0)) {
                *(s32 *)((s8 *)arg0 + 0x4E8) = 5;
            } else if ((f32) *(s32 *)((s8 *)arg0 + 0x4E4) >= lbl_805DA7A8) {
                *(s16 *)((s8 *)arg0 + 0xB8) = 4;
                *(s32 *)((s8 *)arg0 + 0x4E8) = 3;
            }
            play_persistent_sound(copy_target_state__14TObjEnePanarmsFPv((void *) (arg0), (int) (0x4003A814)), (void *) arg0, (void *) (arg0 + 0x38), 0, 0);
            break;
        case 2:
        case 3:
            if ((*(f32 *)((s8 *)arg0 + 0xC0) >= lbl_805DA7AC) && (temp_r0 == 3)) {
                if (temp_r30 != NULL) {
                    var_r3 = get_state__18TObjEneRe4SorcererFPv((int) (temp_r30));
                } else {
                    var_r3 = 3;
                }
                switch (var_r3) {
                case 2:
                    *(s32 *)((s8 *)arg0 + 0x4E8) = 2;
                    ((TObjEneRe4Sorcerer *)arg0)->cast_resta();
                    break;
                case 3:
                    *(s32 *)((s8 *)arg0 + 0x4E8) = 2;
                    break;
                }
            }
            if (((TObjEneDD *)arg0)->get_flag_b4() != 0) {
                *(s32 *)((s8 *)arg0 + 0x4E8) = 5;
                if (temp_r30 != NULL) {
                    set_attack_flag__18TObjEneRe4SorcererFPv((int) (temp_r30));
                }
            }
            break;
        case 4:
            if ((f32) *(s32 *)((s8 *)arg0 + 0x4E4) >= lbl_805DA7B0) {
                *(s32 *)((s8 *)arg0 + 0x4E8) = 5;
            }
            break;
        case 5:
            break;
        }
        ((VObj_18_3f7e26 *)(arg0))->m87();
        ((VObj_18_3f7e26 *)(arg0))->m86();
        TObjEneRe4Sorcerer__sub_800EF214((s32) (arg0));
        return;
    case 5:
        if (temp_r30 != NULL) {
            set_attack_flag__18TObjEneRe4SorcererFPv((int) (temp_r30));
        }
        *(s32 *)((s8 *)arg0 + 0x3C8) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C8) & 0xFFFFFFF7);
        enemy_clear_target((void *) (arg0));
        break;
    }
}

void TObjEneRe4Sorcerer::update_state_machine(void *arg1p) {
  f32 *t = (f32 *) (((u8 *) this) + 0x4EC);
  s32 mask;
  s32 n;
  s32 i;
  u8 *p;
  s32 j;
  switch ((s32) arg1p)
  {
    case 4:
      set_field_378__9TObjEneDDFPvi((u8 *) this, 6);
      ((VObj_18_9c7b63 *)this)->m93();
      *((s32 *) (((s8 *) ((u8 *) this)) + 0x3C8)) &= ~2;
      enemy_clear_target((u8 *) this);
      init_float_params__9TObjEneDDFv((u8 *) this);
      if (((VObj_18_d3ac76 *)this)->m97() != 0)
    {
      *((s32 *) (((s8 *) ((u8 *) this)) + 0x4E4)) = 3;
    }
    else
    {
      *((s32 *) (((s8 *) ((u8 *) this)) + 0x4E4)) = 0;
    }
      *((s32 *) (((s8 *) ((u8 *) this)) + 0x4E8)) = 0;
      *t = TObjEneRe4Sorcerer__data_805DA790;
      break;

    case 3:
      if ((*((s32 *) (((s8 *) ((u8 *) this)) + 0x4E4))) == 4)
    {
      transition_enemy_state((u8 *) this, 2);
    }
      break;

    case 5:
      break;

    case 0:
      switch (*((s32 *) (((s8 *) ((u8 *) this)) + 0x4E4)))
    {
      case 3:
        mask = 0;
        n = TLobby::get_game_mode();
        *t = TObjEneRe4Sorcerer__data_805DA790;
        for (i = 0; i < n; i++)
      {
        p = get_player_data__10TObjPlayerFi(i);
        mask |= update_farthest_target__18TObjEneRe4SorcererFPviPv((u8 *) this, (s32) p, t);
      }

        if (mask != 0)
      {
        *((s32 *) (((s8 *) ((u8 *) this)) + 0x4E4)) = 2;
      }
      else
      {
        *((s32 *) (((s8 *) ((u8 *) this)) + 0x4E4)) = 0;
      }
        break;

      case 0:
        if (TObjEneRe4Sorcerer::check_shield((s32) this, (u8 *) this) != 0)
      {
        *((u8 **) (((s8 *) ((u8 *) this)) + 0x390)) = (u8 *) this;
        *((s32 *) (((s8 *) ((u8 *) this)) + 0x4E4)) = 2;
      }
      else
      {
        *((s32 *) (((s8 *) ((u8 *) this)) + 0x4E4)) = 1;
      }
        break;

      case 1:
        j = TLobby::get_game_mode();
        n = j + TObjEneDD::get_enemy_count();
        *t = TObjEneRe4Sorcerer__data_805DA790;
        for (; j < n; j++)
      {
        p = get_player_data__10TObjPlayerFi(j);
        if (p == ((u8 *) this))
        {
          continue;
        }
        if (p != 0)
        {
          s16 a = *((s16 *) (((s8 *) p) + 0x28));
          if (a != (*((s16 *) (((s8 *) ((u8 *) this)) + 0x28))))
          {
            continue;
          }
        }
        update_farthest_target__18TObjEneRe4SorcererFPviPv((u8 *) this, (s32) p, t);
      }

        *((s32 *) (((s8 *) ((u8 *) this)) + 0x4E4)) = 2;
        break;

      case 2:
        if ((*((void **) (((s8 *) ((u8 *) this)) + 0x390))) != 0)
      {
        ((s32 (*)(void *, f32))TObjEneRe4Sorcerer__sub_800EF95C)(this, lbl_805DA7B4);
      }
      else
      {
        VecCopy__FP3VecPC3Vec(((u8 *) this) + 0x394, ((u8 *) this) + 0x38);
        ((s32 (*)(void *, f32))TObjEneRe4Sorcerer__sub_800EF95C)(this, lbl_805DA7B8);
      }
        *((s32 *) (((s8 *) ((u8 *) this)) + 0x4E4)) = 4;
        break;

    }

      break;

  }

}

void TObjEneRe4Sorcerer__sub_800EE7DC(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r5;
    s32 var_r3;
    u32 temp_r30;
    temp_r30 = find_entity_by_id(*(u16 *)((s8 *)arg0 + 0x3E4));
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi((void *)((void *) (arg0)), (s32)((int) (3)));
        *(s32 *)((s8 *)arg0 + 0x3C8) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C8) | 0xA);
        *(s32 *)((s8 *)arg0 + 0x4E4) = 0;
        *(s32 *)((s8 *)arg0 + 0x4E8) = 0;
        return;
    case 3:
        if ((s32) *(s32 *)((s8 *)arg0 + 0x4E8) == 5) {
            ((TObjEneRe4Sorcerer *)arg0)->advance_anim_frame();
            temp_r5 = *(s32 *)((s8 *)arg0 + 0x3EC);
            *(s32 *)((s8 *)arg0 + 0x3EC) = (s32) (temp_r5 + 1);
            transition_enemy_state((void *) (arg0), (int) (3));
        }
        return;
    case 0:
        advance_animation_playback((void *) (arg0));
        *(s32 *)((s8 *)arg0 + 0x4E4) = (s32) (*(s32 *)((s8 *)arg0 + 0x4E4) + 1);
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x4E8);
        switch (temp_r0) {
        case 0:
            if ((temp_r30 != 0U) && (TObjEneRe4Sorcerer__sub_800ED498((int) (temp_r30)) != 0)) {
                *(s32 *)((s8 *)arg0 + 0x4E4) = 0;
                if (((TObjEneRe4Sorcerer *)arg0)->try_attack((f32) (lbl_805DA7BC), (f32) (lbl_805DA7BC)) == 0) {
                    *(s32 *)((s8 *)arg0 + 0x4E8) = 4;
                } else {
                    enemy_copy_target_destination((void *) (arg0));
                    update_velocity__9TObjEneDDFv((void *) (arg0));
                    if (*(f32 *)((s8 *)arg0 + 0x3AC) >= lbl_805DA7A0) {
                        *(s32 *)((s8 *)arg0 + 0x4E8) = 4;
                    } else {
                        *(s32 *)((s8 *)arg0 + 0x4E8) = 1;
                        *(s16 *)((s8 *)arg0 + 0xB8) = 1;
                        *(s32 *)((s8 *)arg0 + 0x3C8) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C8) | 8);
                        ((TObjEneRe4Sorcerer *)arg0)->set_photon_state();
                    }
                    *(s32 *)((s8 *)arg0 + 0x60) = (s32) (TObjEneRe4Sorcerer__data_8043D408 * atan2_float((f32) (*(f32 *)((s8 *)arg0 + 0x3A0)), (f32) (*(f32 *)((s8 *)arg0 + 0x3A8))));
                }
            } else if ((s32) *(s32 *)((s8 *)arg0 + 0x4E4) >= 0xF0) {
                *(s32 *)((s8 *)arg0 + 0x4E8) = 5;
            }
            ((TObjEneRe4Sorcerer *)arg0)->turn_to_target();
            ((TObjEneRe4Sorcerer *)arg0)->create_effect();
            break;
        case 1:
            if ((temp_r30 != 0U) && (TObjEneRe4Sorcerer__sub_800ED498((int) (temp_r30)) == 0)) {
                *(s32 *)((s8 *)arg0 + 0x4E8) = 5;
            } else if ((s32) *(s32 *)((s8 *)arg0 + 0x4E4) >= 0x5A) {
                *(s16 *)((s8 *)arg0 + 0xB8) = 3;
                *(s32 *)((s8 *)arg0 + 0x4E8) = 3;
            }
            ((TObjEneRe4Sorcerer *)arg0)->turn_to_target();
            ((TObjEneRe4Sorcerer *)arg0)->create_effect();
            break;
        case 2:
        case 3:
            if ((*(f32 *)((s8 *)arg0 + 0xC0) >= lbl_805DA7AC) && (temp_r0 == 3)) {
                if (temp_r30 != 0U) {
                    var_r3 = get_state__18TObjEneRe4SorcererFPv((int) (temp_r30));
                } else {
                    var_r3 = 3;
                }
                switch (var_r3) {
                case 2:
                    *(s32 *)((s8 *)arg0 + 0x4E8) = 2;
                    ((TObjEneRe4Sorcerer *)arg0)->cast_technique();
                    break;
                case 3:
                    *(s32 *)((s8 *)arg0 + 0x4E8) = 2;
                    break;
                }
            }
            if (((TObjEneDD *)arg0)->get_flag_b4() != 0) {
                *(s32 *)((s8 *)arg0 + 0x4E8) = 5;
                if (temp_r30 != 0U) {
                    set_attack_flag__18TObjEneRe4SorcererFPv((int) (temp_r30));
                }
            }
            break;
        case 4:
            if ((s32) *(s32 *)((s8 *)arg0 + 0x4E4) >= 0x3C) {
                *(s32 *)((s8 *)arg0 + 0x4E8) = 5;
            }
            break;
        case 5:
            break;
        }
        ((VObj_18_3f7e26 *)(arg0))->m87();
        ((VObj_18_3f7e26 *)(arg0))->m86();
        TObjEneRe4Sorcerer__sub_800EF214((s32) (arg0));
        return;
    case 5:
        if (temp_r30 != 0U) {
            set_attack_flag__18TObjEneRe4SorcererFPv((int) (temp_r30));
        }
        *(s32 *)((s8 *)arg0 + 0x3C8) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C8) & 0xFFFFFFF7);
        break;
    }
}

void TObjEneRe4Sorcerer::state_wait(s32 arg1) {
    switch (arg1) {
    case 4:
        *(s32 *)((s8 *)this + 0x4E4) = 0;
        set_field_378__9TObjEneDDFPvi(this, 4);
        *(s32 *)((s8 *)this + 0x3C8) = (s32) (*(s32 *)((s8 *)this + 0x3C8) & 0xFFFFFFFD);
        ((V_A_800EDCCC *) this)->m93();
        enemy_clear_target(this);
        return;
    case 3:
        if (try_attack(lbl_805DA7C0, lbl_805DA7C0) != 0) {
            if (*(s32 *)((s8 *)this + 0x3EC) & 1) {
                ((s32 (*)(void *, f32))TObjEneRe4Sorcerer__sub_800EF95C)(this, lbl_805DA7C4);
            } else {
                ((s32 (*)(void *, f32))TObjEneRe4Sorcerer__sub_800EF95C)(this, lbl_805DA7C8);
            }
            transition_enemy_state(this, 2);
            return;
        }
        if ((s32) *(s32 *)((s8 *)this + 0x4E4) > 0x5A) {
            transition_enemy_state(this, 1);
        }
    case 5:
        return;
    case 0:
        *(s32 *)((s8 *)this + 0x4E4) = (s32) (*(s32 *)((s8 *)this + 0x4E4) + 1);
        break;
    }
}

s32 TObjEneRe4Sorcerer__sub_800EEC00(void *arg0p, void *arg1p) {
    u8 *arg0 = (u8 *)arg0p;
    f32 temp_f2;
    s32 temp_r0;
    s32 i;
    switch ((s32)arg1p) {
    case 4:
        set_field_378__9TObjEneDDFPvi(arg0, 3);
        ((VObj_18_9c7b63 *)(arg0))->m94();
        ((s32 (*)(void *))TObjEneRe4Sorcerer__sub_800EF844)((void *) (arg0));
        *(s32 *)((s8 *)arg0 + 0x3C8) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C8) | 2);
        *(s32 *)((s8 *)arg0 + 0x3C8) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C8) & 0xFFFFFFF7);
        for (i = 0; i < 2; i++) {
            if (find_entity_by_id(((Sorc_800EEC00 *)arg0)->ids[i]) != 0U) {
                set_flag_and_notify__18TObjEneRe4SorcererFPv();
            }
        }
        *(s32 *)((s8 *)arg0 + 0x4E4) = 0;
        *(s32 *)((s8 *)arg0 + 0x4E8) = 0;
        ((VObj_14_763762 *)((u8 *)(arg0) + (1020)))->m2();
        ((TBoss3Volopt *)((u8 *)(arg0) + 0x38))->play_area_variant_sound();
        break;
    case 3:
        if ((s32) *(s32 *)((s8 *)arg0 + 0x4E4) >= 0x1E) {
            ((TObjEneRe4Sorcerer *)arg0)->request_death_effect();
        }
        break;
    case 0:
        advance_animation_playback(arg0);
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x4E8);
        switch (temp_r0) {
        case 0:
            temp_f2 = *(f32 *)((s8 *)arg0 + 0x3F8);
            if (temp_f2 > TObjEneRe4Sorcerer__data_805DA790) {
                *(f32 *)((s8 *)arg0 + 0x3F8) = (f32) (temp_f2 - lbl_805DA7CC);
                if (*(f32 *)((s8 *)arg0 + 0x3F8) < TObjEneRe4Sorcerer__data_805DA790) {
                    *(f32 *)((s8 *)arg0 + 0x3F8) = (f32) TObjEneRe4Sorcerer__data_805DA790;
                    *(s32 *)((s8 *)arg0 + 0x3C8) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C8) | 4);
                    ((VObj_14_763762 *)((u8 *)(arg0) + (1020)))->m2();
                }
            } else if (((VObj_14_763762 *)((u8 *)(arg0) + (1020)))->m4() != 0) {
                *(s32 *)((s8 *)arg0 + 0x4E4) = 0;
                *(s32 *)((s8 *)arg0 + 0x4E8) = 1;
                *(s32 *)((s8 *)arg0 + 0x3C8) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C8) & 0xFFFFFFF9);
            }
            TObjEneRe4Sorcerer__sub_800EF214((s32) (arg0));
            break;
        case 1:
            *(s32 *)((s8 *)arg0 + 0x4E4) = (s32) (*(s32 *)((s8 *)arg0 + 0x4E4) + 1);
            break;
        }
        ((VObj_18_9c7b63 *)(arg0))->m100();
        break;
    case 5:
        *(s32 *)((s8 *)arg0 + 0x3C8) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C8) & 0xFFFFFFFB);
        *(f32 *)((s8 *)arg0 + 0x3F8) = (f32) 1.0f;
        break;
    }
}

extern "C" {
__declspec(section ".sdata2") extern void *const lbl_805DA7D4[1] = {
    (void *)0xbf400000,
};
__declspec(section ".sdata2") extern void *const lbl_805DA7D8[1] = {
    (void *)0x47742400,
};
__declspec(section ".sdata2") extern void *const lbl_805DA7DC[1] = {
    (void *)0x42480000,
};
__declspec(section ".sdata2") extern void *const lbl_805DA7E0[1] = {
    (void *)0x41900000,
};
__declspec(section ".sdata2") extern void *const lbl_805DA7E4[1] = {
    (void *)0x471c4000,
};
__declspec(section ".sdata2") extern void *const lbl_805DA7E8[2] = {
    (void *)0x41200000, (void *)0x0,
};
}
#define lbl_805DA7D4 (*(const f32 *)lbl_805DA7D4)
#define lbl_805DA7D8 (*(const f32 *)lbl_805DA7D8)
#define lbl_805DA7DC (*(const f32 *)lbl_805DA7DC)
#define lbl_805DA7E0 (*(const f32 *)lbl_805DA7E0)
#define lbl_805DA7E4 (*(const f32 *)lbl_805DA7E4)
#define lbl_805DA7E8 (*(const f32 *)lbl_805DA7E8)

#define arg0 ((u8 *)arg0p)
#pragma push
#pragma opt_common_subs off
s32 TObjEneRe4Sorcerer__sub_800EEDE4(void *arg0p, void *arg1p) {
    s32 i;
    u32 r;

    switch ((s32)arg1p) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 7;
        set_field_378__9TObjEneDDFPvi(arg0, 3);
        *(s32 *)((s8 *)arg0 + 0x3C8) |= 0xE;
        ((VObj_18_9c7b63 *)(arg0))->m94();
        ((s32 (*)(void *))TObjEneRe4Sorcerer__sub_800EF844)(arg0);
        ((VObj_14_763762 *)(arg0 + 0x3FC))->m3();
        for (i = 0; i < 2; i++) {
            if ((r = find_entity_by_id(((Sorc_800EEDE4 *)arg0)->ids[i])) != 0) {
                reset_transform__13TObjEneRe4BitFPv();
                clear_state_flag_0x10__18TObjEneRe4SorcererFPv(r);
            }
        }
        *(f32 *)((s8 *)arg0 + 0x3F8) = TObjEneRe4Sorcerer__data_805DA790;
        *(s32 *)((s8 *)arg0 + 0x4E4) = 0;
        *(s32 *)((s8 *)arg0 + 0x4E8) = 0;
        ((TBoss3Volopt *)(arg0 + 0x38))->play_area_variant_sound();
        break;
    case 3:
        if (*(s32 *)((s8 *)arg0 + 0x4E4) >= 0x3C) {
            ((s32 (*)(void))set_motion_by_state__18TObjEneRe4SorcererFPv)();
        }
        break;
    case 0:
        if (*((f32 * (*)(void *))TBoss3Volopt__sub_800F059C)(arg0 + 0x3FC) >= lbl_805DA7D4) {
            advance_animation_playback(arg0);
            ((TObjEneRe4Sorcerer *)arg0)->turn_to_target();
        }
        switch (*(s32 *)((s8 *)arg0 + 0x4E8)) {
        case 0:
            if (((VObj_14_763762 *)(arg0 + 0x3FC))->m5() != 0) {
                *(s32 *)((s8 *)arg0 + 0x4E4) = 0;
                *(s32 *)((s8 *)arg0 + 0x4E8) = 1;
                *(s32 *)((s8 *)arg0 + 0x3C8) &= ~4;
                ((s32 (*)(void *))TObjEneRe4Sorcerer__sub_800EF7C8)(arg0);
            }
            break;
        case 1:
            *(s32 *)((s8 *)arg0 + 0x4E4) += 1;
            if (*(f32 *)((s8 *)arg0 + 0x3F8) < 1.0f) {
                *(f32 *)((s8 *)arg0 + 0x3F8) += lbl_805DA7CC;
            }
            ((VObj_18_9c7b63 *)(arg0))->m87();
            break;
        }
        ((VObj_18_9c7b63 *)(arg0))->m100();
        TObjEneRe4Sorcerer__sub_800EF214((s32)arg0);
        break;
    case 5:
        *(f32 *)((s8 *)arg0 + 0x3F8) = 1.0f;
        *(s32 *)((s8 *)arg0 + 0x3C8) &= ~4;
        break;
    }
}
extern int fold_flush_0;
#pragma pop

#undef arg0
void TObjEneRe4Sorcerer__sub_800EEFE4(u8 *arg0, s32 arg1) {
  switch (arg1)
  {
    case 4:
      ((s32)set_field_378__9TObjEneDDFPvi((void *)((void *) arg0), (s32)((int) 1)));
      VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg0 + 0x50));
      VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x44), (void *) (arg0 + 0x50));
      VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x50));
      PSO_VCALL_VObj_18_aab587_m93(arg0);
      return;
      return;
    case 3:
      if (((TObjEneRe4Sorcerer *)arg0)->try_attack((f32) lbl_805DA7C0, (f32) lbl_805DA7D8) != 0)
    {
      enemy_copy_target_destination((void *)((void *) arg0));
      update_velocity__9TObjEneDDFv((void *) arg0);
      *((s32 *) (((s8 *) arg0) + 0x3F0)) = (s32) (TObjEneRe4Sorcerer__data_8043D408 * (atan2_float(-(*((f32 *) (((s8 *) arg0) + 0x3A0))), -(*((f32 *) (((s8 *) arg0) + 0x3A8))))));
      ((s32 (*)(void *, f32))TObjEneRe4Sorcerer__sub_800EF95C)((void *) arg0, (f32) lbl_805DA7DC);
      transition_enemy_state((void *)((void *) arg0), (s32)((int) 2));
    }
    case 5:
      return;
    case 0:
      PSO_VCALL_VObj_18_aab587_m86(arg0);
      break;
  }
}

s32 TObjEneRe4Sorcerer::handle_state(s32 arg1) {
    switch (arg1) {
    case 4:
        *(s32 *)((s8 *)this + 0x4E4) = 0;
        break;
    case 3:
        if ((s32) *(s32 *)((s8 *)this + 0x4E4) >= 2) {
            transition_enemy_state(this, 1);
        }
        break;
    case 5:
        break;
    case 0:
        *(s32 *)((s8 *)this + 0x4E4) = (s32) (*(s32 *)((s8 *)this + 0x4E4) + 1);
        break;
    }
}

void TObjEneRe4Sorcerer__vt85(s32 arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        ((TObjEneRe4Sorcerer *)arg0)->handle_state((s32)((void *) (arg2)));
        return;
    case 1:
        TObjEneRe4Sorcerer__sub_800EEFE4((u8 *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 2:
        TObjEneRe4Sorcerer__sub_800EEDE4((void *) (arg0), (void *) (arg2));
        return;
    case 3:
        TObjEneRe4Sorcerer__sub_800EEC00((void *)((void *) (arg0)), (void *)((void *) (arg2)));
        return;
    case 4:
        ((TObjEneRe4Sorcerer *)arg0)->state_wait((s32)((void *) (arg2)));
        return;
    case 5:
        TObjEneRe4Sorcerer__sub_800EE7DC((u8 *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 6:
        ((TObjEneRe4Sorcerer *)arg0)->update_state_machine((void *) (arg2));
        return;
    case 7:
        TObjEneRe4Sorcerer__sub_800EE1CC((u8 *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 8:
        TObjEneRe4Sorcerer__sub_800EE0F8((u8 *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 9:
        ((TObjEneRe4Sorcerer *)arg0)->handle_death_state((s32)((void *) (arg2)));
    default:
        return;
    }
}

void TObjEneRe4Sorcerer__sub_800EF214(s32 arg0) {
    play_persistent_sound((s32)((void *) (((s32)copy_target_state__14TObjEnePanarmsFPv((void *)((void *) (arg0)), (s32)((int) (0x4003A81D)))))), (void *)((void *) (arg0)), (void *)((void *) (arg0 + 0x38)), (s32)((int) (0)), (s32)((int) (0)));
}

void TObjEneRe4Sorcerer::create_effect() {
    u8 *arg0 = (u8 *)this;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x3E8) == 0) {
        play_persistent_sound(copy_target_state__14TObjEnePanarmsFPv(arg0, 0x4003A812), arg0, arg0 + 0x38, 0, 0);
        return;
    }
    play_persistent_sound(copy_target_state__14TObjEnePanarmsFPv(arg0, 0x4003AB13), arg0, arg0 + 0x38, 0, 0);
}

s32 TObjEneRe4Sorcerer::cast_resta() {
    u8 *arg0 = (u8 *)this;
    u8 *var_r31;

    if (is_alive__9TObjEneDDFv(*(s32 *)((s8 *)arg0 + 0x390)) != 0) {
        if (find_entity_by_id(*(u16 *)((s8 *)arg0 + 0x3E4)) != 0U) {
            var_r31 = get_spell_data__18TObjEneRe4SorcererFPv();
        } else {
            var_r31 = arg0 + 0x38;
        }
        TTecResta::create((void *)arg0, (void *)var_r31, (void *)(TObjEneDD::clamp_frame_index(*(s32 *)((s8 *)sorcerer_behavior_params + 0x20))));
        return 1;
    }
    return 0;
}

s32 TObjEneRe4Sorcerer::cast_technique() {
    u8 *arg0 = (u8 *)this;
    Vec_800EF354 v;
    s32 frame;
    u8 *src;
    if (transform_relative_position__9TObjEneDDFPv(arg0, *(void **)((s8 *)arg0 + 0x390)) != 0) {
        if (find_entity_by_id(*(u16 *)((s8 *)arg0 + 0x3E4)) != 0U) {
            src = get_spell_data__18TObjEneRe4SorcererFPv();
        } else {
            src = arg0 + 0x38;
        }
        if (*(s32 *)((s8 *)arg0 + 0x3E8) == 0) {
            fn_80044330(arg0 + 0x418);
            *(s32 *)((s8 *)arg0 + 0x418) = 1;
            *(s16 *)((s8 *)arg0 + 0x41C) = obj_getField1c(*(void **)((s8 *)arg0 + 0x390));
            *(s16 *)((s8 *)arg0 + 0x41E) = 0;
            if (TObjEneDD::check_v2_mode() != 0) {
                TTecGrants::create((void *)arg0, (void *)src, (void *)(arg0 + 0x418), (void *)(TObjEneDD::clamp_frame_index(*(s32 *)((s8 *)sorcerer_behavior_params + 0x18))));
            } else if (TLobby::get_instance() == 1) {
                ((TTecGiZonde *)arg0)->create((void *)src, (void *)(arg0 + 0x418), (void *)(TObjEneDD::clamp_frame_index(*(s32 *)((s8 *)sorcerer_behavior_params + 0x18))));
            } else {
                ((TTecRaFoie *)arg0)->create_ex((void *)src, (void *)(arg0 + 0x418), (void *)(TObjEneDD::clamp_frame_index(*(s32 *)((s8 *)sorcerer_behavior_params + 0x18))));
            }
        } else if (TObjEneDD::check_v2_mode() != 0) {
            TTecMegid::create((s32)arg0, (s32)src, (s32)(*(u8 **)((s8 *)arg0 + 0x390) + 0x38), (s32)(TObjEneDD::clamp_frame_index(*(s32 *)((s8 *)sorcerer_behavior_params + 0x1C))));
        } else {
            VecCopy__FP3VecPC3Vec(&v, *(u8 **)((s8 *)arg0 + 0x390) + 0x38);
            subtract_vector(&v, src);
            frame = TObjEneDD::clamp_frame_index(*(s32 *)((s8 *)sorcerer_behavior_params + 0x1C));
            create_ex__11TTecGiBartaFPvPvPv(arg0, src, (s32)(TObjEneRe4Sorcerer__data_8043D408 * atan2_float(v.x, v.z)), frame);
        }
        return 1;
    }
    return 0;
}

void TObjEneRe4Sorcerer::turn_to_target() {
    enemy_copy_target_destination((void *)(this));
    update_velocity__9TObjEneDDFv(this);
    *(s32 *)((s8 *)this + 0x60) = approach_angle_limited(*(s32 *)((s8 *)this + 0x60), (s32) (TObjEneRe4Sorcerer__data_8043D408 * atan2_float(*(f32 *)((s8 *)this + 0x3A0), *(f32 *)((s8 *)this + 0x3A8))), 0xA00);
}

void TObjEneRe4Sorcerer::calc_orb_positions() {
    f32 temp_f2;
    f32 temp_f31;

    temp_f31 = TObjEneRe4Sorcerer__data_805DA78C * cos_table_lookup(*(s32 *)((s8 *)this + 0x60));
    temp_f2 = TObjEneRe4Sorcerer__data_805DA78C * -sin_table_lookup(*(s32 *)((s8 *)this + 0x60));
    *(f32 *)((s8 *)this + 0x3D8) = (f32) (*(f32 *)((s8 *)this + 0x38) + temp_f31);
    *(f32 *)((s8 *)this + 0x3DC) = (f32) (lbl_805DA7E0 + *(f32 *)((s8 *)this + 0x3C));
    *(f32 *)((s8 *)this + 0x3E0) = (f32) (*(f32 *)((s8 *)this + 0x40) + temp_f2);
    *(f32 *)((s8 *)this + 0x3CC) = (f32) (*(f32 *)((s8 *)this + 0x38) - temp_f31);
    *(f32 *)((s8 *)this + 0x3D0) = (f32) (lbl_805DA7E0 + *(f32 *)((s8 *)this + 0x3C));
    *(f32 *)((s8 *)this + 0x3D4) = (f32) (*(f32 *)((s8 *)this + 0x40) - temp_f2);
}

void TObjEneRe4Sorcerer::apply_mylla_effect() {
    u32 temp_r3;
    temp_r3 = find_entity_by_id(*(u16 *)((s8 *)this + 0x3E6));
    if (temp_r3 != 0U) {
        set_state_flag_and_mode__18TObjEneRe4SorcererFPvi((u32)(temp_r3), (s32)(2));
    }
}

void TObjEneRe4Sorcerer::set_photon_state() {
    u32 temp_r3;
    if ((s32) *(s32 *)((s8 *)this + 0x3E8) == 0) {
        temp_r3 = find_entity_by_id(*(u16 *)((s8 *)this + 0x3E4));
        if (temp_r3 != 0U) {
            set_state_flag_and_mode__18TObjEneRe4SorcererFPvi((u32)(temp_r3), (s32)(0));
        }
    } else {
        temp_r3 = find_entity_by_id(*(u16 *)((s8 *)this + 0x3E4));
        if (temp_r3 != 0U) {
            set_state_flag_and_mode__18TObjEneRe4SorcererFPvi((u32)(temp_r3), (s32)(1));
        }
    }
}

s32 update_farthest_target__18TObjEneRe4SorcererFPviPv(u8 *arg0, s32 arg1, f32 *arg2) {
    f32 temp_f1;
    if ((((s32 (*)(void *))is_alive__9TObjEneDDFv)((void *) (arg1)) != 0) && (TObjEneRe4Sorcerer::check_shield((s32)((void *) (arg0)), (void *)((void *) (arg1))) != 0)) {
        temp_f1 = horizontal_distance_squared((void *) (arg0 + 0x38), (void *) (arg1 + 0x38));
        if ((temp_f1 <= lbl_805DA7E4) && (temp_f1 > *arg2)) {
            *arg2 = temp_f1;
            *(s16 *)((s8 *)arg0 + 0x38C) = obj_getField1c((void *) (arg1));
            *(s32 *)((s8 *)arg0 + 0x390) = arg1;
            return 1;
        }
    }
    return 0;
}

s32 TObjEneRe4Sorcerer::check_shield(s32 arg0, void *arg1) {
    if (TObjEneDD::check_v2_mode() != 0) {
        return *(s16 *)((s8 *)arg1 + 0x32C) < ((TItemProShield *)arg1)->get_field_2b8();
    }
    return *(s16 *)((s8 *)arg1 + 0x32C) < (((TItemProShield *)arg1)->get_field_2b8() / 4);
}

void TObjEneRe4Sorcerer__sub_800EF7C8(Obj_800EF7C8 *self) {
    s32 i;
    self->m90();
    self->m91();
    for (i = 0; i < 2; i++) {
        u32 p = find_entity_by_id(self->orbs[i]);
        if (p != 0) {
            call_vt_90_91__13TObjEneRe4BitFv((u8 *)p);
        }
    }
}

void TObjEneRe4Sorcerer__sub_800EF844(Obj_800EF844 *self) {
    s32 i;
    self->m89();
    self->m92();
    for (i = 0; i < 2; i++) {
        u32 p = find_entity_by_id(self->orbs[i]);
        if (p != 0) {
            invoke_state_callbacks__18TObjEneRe4SorcererFPv((u8 *)p);
        }
    }
}

void TObjEneRe4Sorcerer::advance_anim_frame() {
    *(s32 *)((s8 *)this + 0x3E8) = (s32) (*(s32 *)((s8 *)this + 0x3E8) + 1);
    if ((s32) *(s32 *)((s8 *)this + 0x3E8) >= 3) {
        *(s32 *)((s8 *)this + 0x3E8) = 0;
    }
}

void TObjEneRe4Sorcerer::request_death_effect() {
    if ((s32) *(s32 *)((s8 *)this + 0x3E8) != 2) {
        transition_enemy_state(this, 4);
        return;
    }
    transition_enemy_state(this, 6);
}

void set_motion_by_state__18TObjEneRe4SorcererFPv(void *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x3E8) != 2) {
        transition_enemy_state(arg0, 5);
        return;
    }
    transition_enemy_state(arg0, 7);
}

void TObjEneRe4Sorcerer__sub_800EF95C(Obj_800EF95C *self, f32 speed) {
    s32 i;
    Vec_800EF95C out;
    Vec_800EF95C v;
    Vec_800EF95C t;
    u32 p;
    ((void (*)(void *))enemy_copy_target_destination)(self);
    ((void (*)(void *))update_velocity__9TObjEneDDFv)(self);
    v.x = speed * sin_table_lookup(self->ang);
    v.y = TObjEneRe4Sorcerer__data_805DA790;
    v.z = speed * cos_table_lookup(self->ang);
    vec3_add_to(&v, self->mtx);
    ((void (*)(void *, void *))subtract_vector)(&v, &self->pos);
    speed = ((TObjBoss2Tunnel *)(&v))->clamp_velocity();
    calc_wall_clamped_destination(self, &out, v.x, v.z, speed);
    t.x = out.x;
    t.y = lbl_805DA7E8 + out.y;
    t.z = out.z;
    if (csnVectorUnder(&t, self->col, 0xE0) == 0) {
        ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&self->pos, &out);
    }
    self->m100();
    ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(&self->prev, &self->pos);
    ((TObjEneRe4Sorcerer *)self)->update_collision_center();
    self->rot = self->ang + 0x8000;
    ((TObjEneRe4Sorcerer *)self)->calc_orb_positions();
    self->ang += 0x2AAA;
    ((TObjEneDD *)self)->transform_part_positions();
    for (i = 0; i < 2; i++) {
        p = find_entity_by_id(self->orbs[i]);
        if (p != 0) {
            ((void (*)(u32))reset_transform__13TObjEneRe4BitFPv)(p);
        }
    }
}

s32 TObjEneRe4Sorcerer::try_attack(f32 farg0, f32 farg1) {
    s32 arg0 = (s32)this;
    if (tick_period_counter(arg0, arg0 + 0x3B0, 0x1E) != 0) {
        return select_attack_target__18TObjEneRe4SorcererFiff((s32)(arg0), farg0, farg1);
    }
    if (enemy_has_live_target__12TObjEneDD_STFv(arg0) != 0) {
        return 1;
    }
    ((s32 (*)(s32))enemy_clear_target)(arg0);
    return 0;
}

s32 select_attack_target__18TObjEneRe4SorcererFiff(s32 arg0, f32 farg0, f32 farg1) {
#define self ((Obj_800EFB60 *)arg0)
    f32 d;
    f32 best;
    s32 id;
    u8 *p;
    s32 n;
    int i;
    u32 o1;
    u32 o2;
    if (self->m97() != 0) {
        best = farg1;
        id = 0xFFFF;
        o1 = find_entity_by_id(self->orbs[0]);
        o2 = find_entity_by_id(self->orbs[1]);
        p = (u8 *)TLobby::get_game_mode();
        n = (s32)p + TObjEneDD::get_enemy_count();
        for (i = (s32)p; i < n; i++) {
            p = get_player_data__10TObjPlayerFi(i);
            if (p != (u8 *)self && (u32)p != o1 && (u32)p != o2 && is_alive__9TObjEneDDFv((s32)p) != 0) {
                d = horizontal_distance_squared((void *)(arg0 + 0x2FC), p + 0x38);
                if (d < best && csnLookAt((void *)(arg0 + 0x2FC), p + 0x2FC) == 0) {
                    id = ((s32 (*)(void *))obj_getField1c)(p);
                    best = d;
                }
            }
        }
        if (((s32 (*)(void *, s32))enemy_bind_or_clear_target)(self, id) != 0) {
            return 1;
        }
    }
    {
    u8 *q; s32 tA; s32 tB; s32 j; s32 m; f32 e;
    tA = 0xFFFF;
    tB = tA;
    m = TLobby::get_game_mode();
    for (j = 0; j < m; j++) {
        q = get_player_data__10TObjPlayerFi(j);
        if (is_alive__9TObjEneDDFv((s32)q) != 0) {
            e = horizontal_distance_squared((void *)(arg0 + 0x2FC), q + 0x2FC);
            if (TObjEneDD__sub_800BA6C4(q) != 0) {
                if (e < farg0 && transform_relative_position__9TObjEneDDFPv(self, q) != 0) {
                    farg0 = e;
                    tA = ((s32 (*)(void *))obj_getField1c)(q);
                }
            } else if (e < farg1 && transform_relative_position__9TObjEneDDFPv(self, q) != 0) {
                farg1 = e;
                tB = ((s32 (*)(void *))obj_getField1c)(q);
            }
        }
    }
    if ((u16)tA != 0xFFFF) {
        ((void (*)(void *, s32))enemy_set_target_id)(self, tA);
        return 1;
    }
    if ((u16)tB != 0xFFFF) {
        ((void (*)(void *, s32))enemy_set_target_id)(self, tB);
        return 1;
    }
    }
    enemy_clear_target(self);
    return 0;
#undef self
}

u8 *TObjEneRe4Sorcerer::vfunc_102() {
    u8 *arg0 = (u8 *)this;
    if (vfunc_102__9TObjEneDDFv() == 0U) {
        *(s32 *)((s8 *)arg0 + 0x3C8) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C8) & 0xFFFFFFEF);
        return;
    }
    *(s32 *)((s8 *)arg0 + 0x3C8) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C8) | 0x10);
}

u8 *TObjEneRe4Sorcerer::vfunc_101(u8 *) {
    u8 *arg0 = (u8 *)this;
    if (vfunc_101__9TObjEneDDFPUc() == 0U) {
        *(s32 *)((s8 *)arg0 + 0x3C8) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C8) & 0xFFFFFFEF);
        return;
    }
    *(s32 *)((s8 *)arg0 + 0x3C8) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C8) | 0x10);
}

void TObjEneRe4Sorcerer__sub_800EFE30(void) {  }

void TObjEneRe4Sorcerer::vfunc_88() {
    *(f32 *)((s8 *)(*(void **)((s8 *)this + 0xA4)) + 4) = (f32) (*(f32 *)&TObjEneRe4Sorcerer__data_805DA794);
}

void TObjEneRe4Sorcerer::update_collision_center() {
    u8 *arg0 = (u8 *)this;
    *(f32 *)((s8 *)arg0 + 0x2FC) = (f32) *(f32 *)((s8 *)arg0 + 0x38);
    *(f32 *)((s8 *)arg0 + 0x300) = (f32) (TObjEneRe4Sorcerer__data_805DA794 + *(f32 *)((s8 *)arg0 + 0x3C));
    *(f32 *)((s8 *)arg0 + 0x304) = (f32) *(f32 *)((s8 *)arg0 + 0x40);
    ((s32 (*)(void *, void *, void *, f32))VecCopy__FP3VecPC3Vec)((void *) (arg0 + 0x74), (void *) (arg0 + 0x2FC), (void *) (arg0), (f32) (TObjEneRe4Sorcerer__data_805DA794));
}

void TObjEneRe4Sorcerer::vfunc_61() {  }

void TObjEneRe4Sorcerer::vfunc_62() {
    u8 *arg0 = (u8 *)this;
    if ((s16) *(s16 *)((s8 *)arg0 + 0x326) != 8) {
        if (!(*(s32 *)((s8 *)arg0 + 0x3C8) & 8)) {
            ((int (*)(void*, void*))transition_enemy_state)((void*)((void *)(arg0)), (void*)((int) (8)));
            return;
        }
        ((s32 (*)(void))clear_attack_receipts)();
    }
}

void TObjEneRe4Sorcerer::vfunc_63() { if (*(short*)((char*)this + 0x326) != 9) { ((int (*)(void*, void*))transition_enemy_state)(this, (void*)9); } }

void TObjEneRe4Sorcerer::vfunc_28() {  }

void run_task__18TObjEneRe4SorcererFv(u8 *arg0) {
    s32 i;
    void *p;
    if (TObjPlayer::check_demo_mode() != 0) {
        ((VObj_18_6eb1ad *)(arg0))->m103();
        return;
    }
    if (((VObj_18_6eb1ad *)(arg0))->m81() != 4) {
        if (TObjEneDD__sub_800BA804(*(u16 *)((s8 *)arg0 + 0x38C)) != 0 && ((void * (*)(u16))find_entity_by_id)(*(u16 *)((s8 *)arg0 + 0x38C)) == NULL) {
            enemy_clear_target(arg0);
        }
        ((VObj_18_6eb1ad *)(arg0))->m83();
        ((TObjEneRe4Sorcerer *)arg0)->calc_orb_positions();
        *(s16 *)((s8 *)arg0 + 0x3C0) += 5;
        *(s16 *)((s8 *)arg0 + 0x3C0) = (u8) *(s16 *)((s8 *)arg0 + 0x3C0);
        *(f32 *)((s8 *)arg0 + 0x3C4) += 0.01f;
        if (*(f32 *)((s8 *)arg0 + 0x3C4) >= 1.0f) {
            *(f32 *)((s8 *)arg0 + 0x3C4) -= 1.0f;
        }
    } else {
        for (i = 0; i < 2; i++) {
            if ((p = ((void * (*)(u16))find_entity_by_id)(((Obj_800F0054 *)arg0)->handles[i])) != NULL) {
                set_flag3cc_bit2000__18TObjEneRe4SorcererFPv(p);
            }
        }
    }
    ((TObjEneRe4Sorcerer *)arg0)->update_collision_center();
    ((TBoss8Dragon *)arg0)->set_player_state_default();
    ((VObj_18_6eb1ad *)(arg0))->m98();
}

Obj_800F0054 *__dt__18TObjEneRe4SorcererFv(Obj_800F0054 *arg0, s16 arg1) {
    s32 i;
    void *p;
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TObjEneRe4Sorcerer;
        for (i = 0; i < 2; i++) {
            if ((p = ((void * (*)(u16))find_entity_by_id)(arg0->handles[i])) != NULL) {
                ((void (*)(void *))queue_destruction__7TObjectFv)(p);
            }
            arg0->handles[i] = 0xFFFF;
        }
        free_collision_body_parts(arg0);
        __destroy_arr((u8 *) arg0 + 0x474, TObjPlayer__sub_800D7C58, 0x1C, 4);
        TObjPlayer__sub_800A05B8((u8 *) arg0 + 0x3FC, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma opt_loop_invariants off
void TObjEneRe4Sorcerer::init_enemy() {
    u8 *arg0 = (u8 *)this;
    Sorc_800F0118 *self = (Sorc_800F0118 *) arg0;
    s32 i;
    u16 id;
    s32 t;
    s32 n;
    u8 *temp_r6;

    init_position_vectors__9TObjEneDDFPv((void *) (arg0));
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&sorcerer_bml_resource) + 0x42C)) + 8);
    temp_r6 = (u8 *)(*(u8 **)((s8 *)(*(u8 * *)&sorcerer_bml_resource) + 0x42C));
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)temp_r6 + 0xC);
    init_model__9TObjEneDDFv((void *) (arg0), (void *) ((void * *)re4_sorcerer_collision_body_part_table), (int) (1), (int) (temp_r6));
    ((TObjPlayer *)arg0)->set_field_d8((s32)((void *) re4_sorcerer_action_params));
    ((TObjPlayer *)arg0)->set_field_dc((int) (*(s32 *)((s8 *)(*(u8 * *)&sorcerer_bml_resource) + 0x430)));
    *(s16 *)((s8 *)arg0 + 0xB8) = 0;
    set_animation__10TObjPlayerFPvs((void *) (arg0), (int) (*(s16 *)((s8 *)arg0 + 0xB8)));
    ((TObjMotion *)arg0)->set_field_b8((int) (*(s16 *)((s8 *)arg0 + 0xB8)));
    reset_hp__9TObjEneDDFv((void *) (arg0), (void *) (lbl_805D52D0), (void *) (TObjEneRe4Sorcerer__attack_params), (void *) (TObjEneRe4Sorcerer__resistance_params));
    ((TObjEneDD *)arg0)->set_state_8();
    *(void **)((s8 *)arg0 + 0x350) = (void *) re4_sorcerer_init_params;
    initialize_enemy_state__9TObjEneDDFv((void *) (arg0), (int) (0x1F));
    *(f32 *)((s8 *)arg0 + 0x37C) = (f32) TObjEneRe4Sorcerer__data_805DA78C;
    enemy_init_acquire_period((void *) (arg0), (int) (0x1E));
    enemy_init_validate_period((void *) (arg0), (int) (0x1E));
    ((TObjEneDD *)arg0)->set_active();
    *(s16 *)((s8 *)arg0 + 0x326) = 0;
    ((VObj_18_be4a70 *)(arg0))->m85(*(s16 *)((s8 *)arg0 + 0x326), 4);
    *(s16 *)((s8 *)arg0 + 0x3C0) = 0;
    *(f32 *)((s8 *)arg0 + 0x3C4) = TObjEneRe4Sorcerer__data_805DA790;
    *(s32 *)((s8 *)arg0 + 0x3C8) = 0;
    *(s32 *)((s8 *)arg0 + 0x3C8) &= ~2;
    for (i = 0; i < 2; i++) {
        VecCopy__FP3VecPC3Vec(&self->v3CC[i], (u8 *)(arg0) + 0x38);
    }
    id = self->f1C + 1;
    n = self->f2C + 1;
    self->f3E4 = id;
    ((void (*)(void *, void *, u16, s32)) create_disabled__13TObjEneRe4BitFiiii)((void *) (arg0), &self->v3CC[0], id++, n++);
    self->f3E6 = id;
    ((void (*)(void *, void *, u16, s32)) create_enabled__13TObjEneRe4BitFiiii)((void *) (arg0), &self->v3CC[1], id, n);
    *(s32 *)((s8 *)arg0 + 0x3E8) = 0;
    *(s32 *)((s8 *)arg0 + 0x3EC) = 0;
    *(s32 *)((s8 *)arg0 + 0x3F0) = 0;
    *(s32 *)((s8 *)arg0 + 0x3F4) = *(s16 *)((s8 *)arg0 + 0x2CC);
    *(f32 *)((s8 *)arg0 + 0x3F8) = 1.0f;
    ((VObj_14_fa0828 *)((u8 *)(arg0) + (1020)))->m3();
    ((s32 (*)(void *))fn_80044330)((void *) ((u8 *)(arg0) + 0x418));
    for (i = 0; i < 4; i++) {
        ((TObjPlayer *)(&self->e474[i]))->activate_and_dispatch();
    }
    ((s32 (*)(void *))TObjEneRe4Sorcerer__sub_800EF844)((void *) (arg0));
}
extern int fold_flush_1;
#pragma pop

void *TObjEneRe4Sorcerer__ct(void *arg0, void *arg1, void *arg2) {
    ((TObjEneDD_ST *)arg0)->init_object();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TObjEneRe4Sorcerer;
    ((TUnk_80490470 *)((char *)arg0 + 1020))->init_vtable_and_field18();
    ((TObjPlayer *)((char *)arg0 + 1048))->construct_target_cursor_records();
    __construct_array((void *)((char *)arg0 + 1140), init_and_activate__10TObjPlayerFv, TObjPlayer__sub_800D7C58, 28, 4);
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D2AF0;
    invoke_initialization_hook__9TObjEneDDFPv(arg0, arg2);
    ((void (*)(void *))TObjEneRe4Sorcerer__sub_800EFE30)(arg0);
    ((TObjEneRe4Sorcerer *)arg0)->init_enemy();
    return arg0;
}

void TObjEneRe4Sorcerer::free_bits() {
    if ((u32) TObjEneRe4Sorcerer__uv_scroll_buffer != 0U) {
        destroy_buffer_pair((void*)TObjEneRe4Sorcerer__uv_scroll_buffer, 1);
        TObjEneRe4Sorcerer__uv_scroll_buffer = 0U;
    }
    TObjEneRe4Bit__sub_800EDAB0();
    if ((u32) sorcerer_bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)sorcerer_bml_resource, 1);
        sorcerer_bml_resource = 0U;
    }
}

void *TObjEneRe4Sorcerer::create() {
    void *o = __nw__7TObjectFUl(0x4F0);
    if (o != NULL) {
        o = TObjEneRe4Sorcerer__ct((void *)(o), (void *)(tl_04), (void *)(this));
    }
    return o;
}

void TObjEneRe4Sorcerer::load_resources() {
    u32 r;
    lbl_80501070.x = TObjEneRe4Sorcerer__data_805DA790;
    lbl_80501070.y = TObjEneRe4Sorcerer__data_805DA790;
    lbl_80501070.z = TObjEneRe4Sorcerer__data_805DA790;
    if (TObjEneDD::check_v2_mode() != 0) {
        sorcerer_bml_resource = load_enemy_bml_resource_named(bm_ene_re4_sorcerer_resource_descriptor, lbl_8043D418);
    } else {
        sorcerer_bml_resource = load_enemy_bml_resource(bm_ene_re4_sorcerer_resource_descriptor);
    }
    lbl_805D52D0 = register_boss__6TLobbyFl(0xA);
    TObjEneRe4Sorcerer__attack_params = dispatch_shared_handler_b__6TLobbyFl(0xA);
    TObjEneRe4Sorcerer__resistance_params = register_object__6TLobbyFl(0xA);
    (*(s32 *)&sorcerer_behavior_params) = dispatch_shared_handler_a__6TLobbyFl(0xA);
    TObjEneRe4Sorcerer__render_node_index = 0;
    TObjEneRe4Sorcerer__saved_render_flags = 0;
    TObjEneRe4Sorcerer__effect_render_scale = TObjEneRe4Sorcerer__data_805DA790;
    re4_sorcerer_render_node_ptr = 0;
    TObjEneRe4Bit__sub_800EDAB4();
    r = (u32) ((TAdSinglePlyChrSelectGC *)0x14)->alloc();
    if (r != 0) {
        r = (u32) ((TLobby *)r)->alloc_tables(*(s32 *)((s8 *)(*(u8 **)((s8 *)sorcerer_bml_resource + 0x42C)) + 8), 2);
    }
    TObjEneRe4Sorcerer__uv_scroll_buffer = r;
    Params_800F0464 p = re4_sorcerer_spawn_descriptor;
    p.a = *(s32 *)((s8 *)sorcerer_bml_resource + 0x430);
    TLobby::spawn_npc_enemy((s16)0x2A, (s32)(*(s32 *)((s8 *)(*(u8 **)((s8 *)sorcerer_bml_resource + 0x42C)) + 8)), (s32)(*(s32 *)((s8 *)(*(u8 **)((s8 *)sorcerer_bml_resource + 0x42C)) + 0xC)), (s32)(&p), (f32)(re4_sorcerer_collision_body_part_table[3]), (f32)TObjEneRe4Sorcerer__data_805DA78C);
}

void TBoss3Volopt__sub_800F059C(void) {  }

s32 TBoss3Volopt::remap_area_sound_id(s32 arg0) {
    s32 masked;
    s32 result;
    s32 state;
    state = TOKeyMachine01::get_global_state();
    if (TLobby::get_instance() != 0) {
        if (state != 0x13 && state != 0x14 && state != 0x15 && state != 0x16 && state != 0x22 && state != 0x23) {
            return arg0;
        }
    } else if (state != 0x10 && state != 0x11) {
        return arg0;
    }
    masked = arg0 & 0x8FFFFF00;
    if (TLobby::get_instance() != 0) {
        if (state == 0x13 || state == 0x14) {
            result = 0x3AB42;
        } else if (state == 0x15 || state == 0x16) {
            result = 0x4003AB3D;
        } else if (state == 0x22) {
            result = 0x4003B22A;
        } else if (state == 0x23) {
            result = 0x4003A359;
        }
    } else {
        result = 0x30043;
        result |= masked;
    }
    return result;
}

s32 remap_area_sound_id(s32 arg0, s32 arg1) {
    s32 st;
    s32 base;
    s32 start;
    st = TOKeyMachine01::get_global_state();
    if (TLobby::get_instance() != 0) {
        if (st != 0x13 && st != 0x14 && st != 0x15 && st != 0x16 && st != 0x22 && st != 0x23) {
            return arg0;
        }
    } else {
        if (st != 0x10 && st != 0x11) {
            return arg0;
        }
    }
    if ((u32) arg0 == 0x4003B241U) {
        return 0x4003B23E;
    }
    if (((u32) (arg0 & 0xBFFF00FF) >> 16 << 16) != 0x30000) {
        return arg0;
    }
    if (TLobby::get_instance() != 0) {
        base = area_sound_remap_table_b[arg1].base;
    } else {
        base = area_sound_remap_table_a[arg1].base;
    }
    if (base < 0) {
        return arg0;
    }
    if (TLobby::get_instance() != 0) {
        start = area_sound_remap_table_b[arg1].start;
    } else {
        start = area_sound_remap_table_a[arg1].start;
    }
    {
        s32 r = base + (arg0 - start);
        return r | (arg0 & 0x8FFFFF00);
    }
}

}
