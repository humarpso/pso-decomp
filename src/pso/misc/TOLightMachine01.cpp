#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8016E9F4_8016E998 { char pad[0x18]; };
struct VObj_8016E9F4_8016E998 : Base_8016E9F4_8016E998 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_8016EB3C_lbl_804B2EC4 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8016EB3C_lbl_804B2EC4_size[sizeof(RecoveredGlobal_8016EB3C_lbl_804B2EC4) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_8016EC04___vt__16TOLightMachine01 { M2C_UNK value; u8 remaining[0x30]; };

extern "C" {
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8016EB3C_lbl_804B2EC4 light_machine01_resource_desc;
extern u32 TOLightMachine01__data_805D5A40;
extern s32 lbl_805D5A44;
extern s32 lbl_805D5A48;
void load_assets__16TOLightMachine01Fv(void);
s32 TObjFish__sub_8001EDB0(void *, s32);
s32 get_bml_model(void *, s32);
s32 construct_world_actor_base(void *, int);
s32 rand();
f32 sin_table_lookup(s32);
extern M2C_UNK __vt__16TOLightMachine01[];
extern s32 lbl_805D306C;
extern u32 TOLightMachine01__data_805D5A40;
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
void *create__16TOLightMachine01FPv(void *arg0);
void destroy_instance__16TOLightMachine01Fv(void);
void render__16TOLightMachine01Fv(u8 *arg0);
void run_task__16TOLightMachine01Fv(void *arg0);
f32 sin_table_lookup(s32);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_model(s32);
M2C_UNK draw_ginja_object(s32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK translate_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
void destroy_particle__13TParticleCtrlFPvs(void *, int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

void run_task__16TOLightMachine01Fv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xA8) = (s32) (M2C_FIELD(arg0, s32 *, 0xA8) + M2C_FIELD(arg0, s32 *, 0xA4));
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) (M2C_FIELD(arg0, f32 *, 0x98) * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0xA8)));
    M2C_FIELD(arg0, s32 *, 0xAC) = (s32) (M2C_FIELD(arg0, s32 *, 0xAC) + M2C_FIELD(arg0, s32 *, 0x8C));
}

extern s32 lbl_805D5A44;
extern s32 lbl_805D5A48;
extern const f32 lbl_805DB828;

void render__16TOLightMachine01Fv(u8 *arg0) {
    if (((VObj_8016E9F4_8016E998 *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0x90), M2C_FIELD(arg0, f32 *, 0x94)) != 0) {
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        draw_ginja_model(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), s32 *, 4));
        push_matrix();
        translate_matrix(0, lbl_805DB828, M2C_FIELD(arg0, f32 *, 0x9C), lbl_805DB828);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0xAC));
        draw_ginja_model(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 0x2C), s32 *, 4));
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(lbl_805D5A48);
        draw_ginja_object(lbl_805D5A44);
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
        pop_matrix();
    }
}

void *create__16TOLightMachine01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB0);
    if (o != NULL) {
        o = TOLightMachine01__ct((u8 *)(o), (s32)(arg0));
    }
    return o;
}

extern u32 TOLightMachine01__data_805D5A40;

void destroy_instance__16TOLightMachine01Fv(void) {
    if ((u32) TOLightMachine01__data_805D5A40 != 0U) {
        TLobby__sub_8001FE7C((void*)TOLightMachine01__data_805D5A40, 1);
        TOLightMachine01__data_805D5A40 = 0U;
    }
}

extern M2C_UNK __vt__16TOLightMachine01[];

void load_assets__16TOLightMachine01Fv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &light_machine01_resource_desc.value, 0, 0, 0));
    }
    (*(u8 * *)&TOLightMachine01__data_805D5A40) = (unsigned char *) ((void *) var_r0);
    lbl_805D5A44 = get_bml_model((void *) var_r0, 0);
    lbl_805D5A48 = TObjFish__sub_8001EDB0((*(u8 * *)&TOLightMachine01__data_805D5A40), 0);
}

void *__dt__16TOLightMachine01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TOLightMachine01;
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
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8016EC04___vt__16TOLightMachine01 *)&__vt__16TOLightMachine01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D306C;
    ((VObj_18_1a504b *)(arg0))->m5(arg1);
    M2C_FIELD(arg0, u8 **, 0x34) = ((u8 *)get_bml_model((void *)((*(s32 *)&TOLightMachine01__data_805D5A40)), (s32)(1)));
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0((void *)((int) ((*(s32 *)&TOLightMachine01__data_805D5A40))), (s32)((int) (1)));
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) lbl_805DB82C;
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), void **, 4), f32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000000);
    M2C_FIELD(arg0, f32 *, 0xA0) = (f32) ((lbl_805DB834 * (f32) M2C_FIELD(arg0, s32 *, 0x84)) + lbl_805DB830);
    M2C_FIELD(arg0, s32 *, 0xA4) = (s32) (lbl_805DB838 * (lbl_805DB83C / (lbl_805DB840 / M2C_FIELD(arg0, f32 *, 0xA0))));
    M2C_FIELD(arg0, s32 *, 0xA8) = (s32) (lbl_805DB838 * (lbl_805DB83C * (lbl_805DB844 * (f32) rand())));
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) ((lbl_805DB834 * (f32) M2C_FIELD(arg0, s32 *, 0x88)) + lbl_805DB848);
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) (M2C_FIELD(arg0, f32 *, 0x98) * sin_table_lookup((s32)((int) (M2C_FIELD(arg0, s32 *, 0xA8)))));
    M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    return arg0;
}
#pragma pop

}
