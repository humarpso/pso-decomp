#include "types.h"
#include "pso/misc/TOLightMachine01.h"

struct Base_8016E9F4_8016E998 { char pad[0x18]; };
struct VObj_8016E9F4_8016E998 : Base_8016E9F4_8016E998 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_8016EB3C_lbl_804B2EC4 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8016EB3C_lbl_804B2EC4_size[sizeof(RecoveredGlobal_8016EB3C_lbl_804B2EC4) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_8016EC04___vt__16TOLightMachine01 { s32 value; u8 remaining[0x30]; };

extern "C" {
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFv(void *);
extern RecoveredGlobal_8016EB3C_lbl_804B2EC4 light_machine01_resource_desc;
extern u32 TOLightMachine01__shared_bml_archive;
extern s32 light_machine_ginja_model_handle;
extern s32 light_machine_ginja_param;
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
s32 construct_world_actor_base(void *, int);
s32 rand();
f32 sin_table_lookup(s32);
extern s32 __vt__16TOLightMachine01[];
extern s32 TOLightMachine01__name;
extern u32 TOLightMachine01__shared_bml_archive;
extern s32 tl_05;
extern const f32 lbl_805DB82C;
extern const f32 lbl_805DB830;
extern const f32 lbl_805DB834;
extern const f32 lbl_805DB838;
extern const f32 lbl_805DB83C;
extern const f32 lbl_805DB840;
extern const f32 lbl_805DB844;
extern const f32 lbl_805DB848;
u8 *TOLightMachine01__ct(u8 *arg0, s32 arg1);
}

extern "C" {

void *__dt__16TOLightMachine01Fv(void *arg0, s16 arg1);
f32 sin_table_lookup(s32);
void TLobby__sub_8001FE7C(void*, int);
s32 post_translate_matrix(void *);
s32 draw_ginja_model(s32);
s32 draw_ginja_object(s32);
s32 rotate_matrix_y(s32, s32);
s32 translate_matrix(s32, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
s32 begin_effect_render__13TParticleCtrlFv();
void destroy_particle__13TParticleCtrlFPvs(void *, int);
s32 end_effect_render__13TParticleCtrlFv();
s32 set_global_param__8TObjFishFl(s32);

void TOLightMachine01::run_task() {
    *(s32 *)((s8 *)this + 0xA8) = (s32) (*(s32 *)((s8 *)this + 0xA8) + *(s32 *)((s8 *)this + 0xA4));
    *(f32 *)((s8 *)this + 0x9C) = (f32) (*(f32 *)((s8 *)this + 0x98) * sin_table_lookup(*(s32 *)((s8 *)this + 0xA8)));
    *(s32 *)((s8 *)this + 0xAC) = (s32) (*(s32 *)((s8 *)this + 0xAC) + *(s32 *)((s8 *)this + 0x8C));
}

extern s32 light_machine_ginja_model_handle;
extern s32 light_machine_ginja_param;
extern const f32 lbl_805DB828;

void TOLightMachine01::render() {
    u8 *arg0 = (u8 *)this;
    if (((VObj_8016E9F4_8016E998 *)arg0)->m8(*(f32 *)((s8 *)arg0 + 0x90), *(f32 *)((s8 *)arg0 + 0x94)) != 0) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        set_global_param__8TObjFishFl(*(s32 *)((s8 *)arg0 + 0x24));
        draw_ginja_model(*(s32 *)((s8 *)(*(void **)((s8 *)arg0 + 0x34)) + 4));
        push_matrix();
        translate_matrix(0, lbl_805DB828, *(f32 *)((s8 *)arg0 + 0x9C), lbl_805DB828);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0xAC));
        draw_ginja_model(*(s32 *)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)arg0 + 0x34)) + 0x2C)) + 4));
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFl(light_machine_ginja_param);
        draw_ginja_object(light_machine_ginja_model_handle);
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
        pop_matrix();
    }
}

void *TOLightMachine01::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB0);
    if (o != NULL) {
        o = TOLightMachine01__ct((u8 *)(o), (s32)(arg0));
    }
    return o;
}

extern u32 TOLightMachine01__shared_bml_archive;

void TOLightMachine01::destroy_instance() {
    if ((u32) TOLightMachine01__shared_bml_archive != 0U) {
        TLobby__sub_8001FE7C((void*)TOLightMachine01__shared_bml_archive, 1);
        TOLightMachine01__shared_bml_archive = 0U;
    }
}

extern s32 __vt__16TOLightMachine01[];

void TOLightMachine01::load_assets() {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &light_machine01_resource_desc.value, 0, 0, 0));
    }
    (*(u8 * *)&TOLightMachine01__shared_bml_archive) = (unsigned char *) ((void *) var_r0);
    light_machine_ginja_model_handle = get_bml_model((void *) var_r0, 0);
    light_machine_ginja_param = TObjFish__sub_8001EDB0((*(u8 * *)&TOLightMachine01__shared_bml_archive), 0);
}

void *__dt__16TOLightMachine01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TOLightMachine01;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma fp_contract on
u8 *TOLightMachine01__ct(u8 *arg0, s32 arg1) {
    construct_world_actor_base((void *) (arg0), (int) (tl_05));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8016EC04___vt__16TOLightMachine01 *)&__vt__16TOLightMachine01).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TOLightMachine01__name;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    *(u8 **)((s8 *)arg0 + 0x34) = ((u8 *)get_bml_model((void *)((*(s32 *)&TOLightMachine01__shared_bml_archive)), (s32)(1)));
    *(s32 *)((s8 *)arg0 + 0x24) = TObjFish__sub_8001EDB0((void *)((int) ((*(s32 *)&TOLightMachine01__shared_bml_archive))), (s32)((int) (1)));
    *(f32 *)((s8 *)arg0 + 0x90) = (f32) lbl_805DB82C;
    *(f32 *)((s8 *)arg0 + 0x94) = (f32) *(f32 *)((s8 *)(*(void **)((s8 *)(*(u8 **)((s8 *)arg0 + 0x34)) + 4)) + 0x14);
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x40000000);
    *(f32 *)((s8 *)arg0 + 0xA0) = (f32) ((lbl_805DB834 * (f32) *(s32 *)((s8 *)arg0 + 0x84)) + lbl_805DB830);
    *(s32 *)((s8 *)arg0 + 0xA4) = (s32) (lbl_805DB838 * (lbl_805DB83C / (lbl_805DB840 / *(f32 *)((s8 *)arg0 + 0xA0))));
    *(s32 *)((s8 *)arg0 + 0xA8) = (s32) (lbl_805DB838 * (lbl_805DB83C * (lbl_805DB844 * (f32) rand())));
    *(f32 *)((s8 *)arg0 + 0x98) = (f32) ((lbl_805DB834 * (f32) *(s32 *)((s8 *)arg0 + 0x88)) + lbl_805DB848);
    *(f32 *)((s8 *)arg0 + 0x9C) = (f32) (*(f32 *)((s8 *)arg0 + 0x98) * sin_table_lookup((s32)((int) (*(s32 *)((s8 *)arg0 + 0xA8)))));
    *(s32 *)((s8 *)arg0 + 0xAC) = 0;
    return arg0;
}
#pragma pop

}
