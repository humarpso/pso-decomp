#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80176308_lbl_80442A80 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80176308_lbl_804B4278 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct VBase_18_4a4f5b { char pad[0x18]; };

struct VObj_18_4a4f5b : VBase_18_4a4f5b {
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
    virtual M2C_UNK m17();
};

struct RecoveredGlobal_80164340_lbl_804B17F0 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80164340___vt__15TODoorVS2Door01 {
    M2C_UNK value;
    u8 remaining[0x50];
};

typedef s32 M2C_UNK;
struct Node_80163FB4 {
    u8 pad0[4];
    s32 f4;
    u8 mtx[0x2C - 8];
    Node_80163FB4 *child;
    Node_80163FB4 *next;
};

struct VBase_80163FB4 { char pad[0x18]; };

struct VObj_80163FB4 : VBase_80163FB4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Door_80163FB4 : VObj_80163FB4 {
    u8 pad1c[0x34 - 0x1C];
    Node_80163FB4 *model;
    u8 mtx[0x60 - 0x38];
    s32 f60;
    u8 pad64[0xC0 - 0x64];
    f32 fC0;
    f32 fC4;
    u8 padC8[0xD0 - 0xC8];
    s32 fD0;
    f32 fD4;
};

extern "C" {
void TODoorVS2Door01__vt14(u8 *arg0);
u8 *load_resource_from_descriptor(void *, s32, M2C_UNK *, s32, s32, s32);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 *alloc_buffer__11TOBoss4RockFPv(s32);
s32 load_gvm_texture_file(void *);
extern RecoveredGlobal_80176308_lbl_80442A80 lbl_804410E0;
extern RecoveredGlobal_80176308_lbl_804B4278 lbl_804B17E0;
extern u32 lbl_805D5988;
extern s32 *TODoorVS2Door01__data_805D598C;
void load_resources__15TODoorVS2Door01Fv(void);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_door_base(void *);
extern RecoveredGlobal_80164340_lbl_804B17F0 lbl_804B17F0;
extern M2C_UNK __vt__15TODoorVS2Door01[];
extern s32 lbl_805D2F94;
extern u32 lbl_805D5988;
extern s32 *TODoorVS2Door01__data_805D598C;
u8 *TODoorVS2Door01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
void TODoorVS2Door01__vt16(u8 *arg0);
u8 is_open__15TODoorVS2Door01FPv(void *arg0);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_ginja_model(int);
extern s32 *TODoorVS2Door01__data_805D598C;
void render__15TODoorVS2Door01Fv(Door_80163FB4 *self);
}

extern "C" {

void TODoorVS2Door01__vt13(u8 *arg0);
void TODoorVS2Door01__vt15(u8 *arg0);
void TODoorVS2Door01__vt18(void);
void *__dt__15TODoorVS2Door01Fv(void *arg0, s16 arg1);
void *create__15TODoorVS2Door01FPv(void *arg0);
void free_resources__15TODoorVS2Door01Fv(void);
u8 is_open__15TODoorVS2Door01FPv(void *arg0);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void TLobby__sub_8001FE7C(void*, int);
s32 is_any_player_within_radius_xz(f32);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
M2C_UNK destroy_ancient_door_base__15TODoorAncient01FPvs(void *, M2C_UNK);
s32 is_in_view_depth();
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);

void TODoorVS2Door01__vt18(void) {  }

#pragma push
#pragma opt_common_subs off
void TODoorVS2Door01__vt16(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) (M2C_FIELD(arg0, f32 *, 0xD4) - M2C_FIELD(arg0, f32 *, 0xB8));
    if (M2C_FIELD(arg0, f32 *, 0xD4) <= (0.0f)) {
        M2C_FIELD(arg0, f32 *, 0xD4) = (f32) (0.0f);
        M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    }
}
#pragma pop

void TODoorVS2Door01__vt15(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0xD0) & 1) || (is_any_player_within_radius_xz((1e+04f)) == 0)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 3;
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 8);
        play_sound_effect(0x4004AA0B, arg0 + 0x38, 0, 0);
    }
}

void TODoorVS2Door01__vt14(u8 *arg0) {
    f32 lim = 19.0f;
    M2C_FIELD(arg0, f32 *, 0xD4) = M2C_FIELD(arg0, f32 *, 0xD4) + M2C_FIELD(arg0, f32 *, 0xB8);
    if (lim <= M2C_FIELD(arg0, f32 *, 0xD4)) {
        M2C_FIELD(arg0, f32 *, 0xD4) = lim;
        M2C_FIELD(arg0, s32 *, 0xAC) = 2;
    }
}

void TODoorVS2Door01__vt13(u8 *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0xD0) & 1) && (is_any_player_within_radius_xz((4.9e+03f)) != 0)) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        set_indexed_flags(arg0, 0, 8);
        play_sound_effect(0x4004AA0B, arg0 + 0x38, 0, 0);
    }
}

u8 is_open__15TODoorVS2Door01FPv(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if ((is_in_view_depth() != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0xAC) != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

extern void *tl_05;

void render__15TODoorVS2Door01Fv(Door_80163FB4 *self) {
    Node_80163FB4 *n;
    f32 v;
    if (self->m8(self->fC0, self->fC4) != 0 && ((s32 (*)(void *, f32))is_open__15TODoorVS2Door01FPv)(self, 30.0f) != 0) {
        push_matrix();
        post_translate_matrix(self->mtx);
        rotate_matrix_y(0, self->f60);
        set_global_param__8TObjFishFi(TODoorVS2Door01__data_805D598C[self->fD0 & 1]);
        n = self->model;
        post_translate_matrix(n->mtx);
        push_matrix();
        v = -self->fD4;
        translate_matrix(0, v, (0.0f), (0.0f));
        draw_ginja_model(n->f4);
        pop_matrix();
        n = n->child;
        push_matrix();
        post_translate_matrix(n->mtx);
        push_matrix();
        v = self->fD4;
        translate_matrix(0, v, (0.0f), (0.0f));
        draw_ginja_model(n->f4);
        pop_matrix();
        pop_matrix();
        begin_effect_render__13TParticleCtrlFv();
        n = n->child;
        push_matrix();
        post_translate_matrix(n->mtx);
        push_matrix();
        v = self->fD4;
        translate_matrix(0, v, (0.0f), (0.0f));
        draw_ginja_model(n->f4);
        pop_matrix();
        pop_matrix();
        n = n->next;
        push_matrix();
        post_translate_matrix(n->mtx);
        push_matrix();
        v = self->fD4;
        translate_matrix(0, v, (0.0f), (0.0f));
        draw_ginja_model(n->f4);
        pop_matrix();
        pop_matrix();
        n = self->model->child->next;
        push_matrix();
        post_translate_matrix(n->mtx);
        push_matrix();
        v = -self->fD4;
        translate_matrix(0, v, 0.0f, 0.0f);
        draw_ginja_model(n->f4);
        pop_matrix();
        pop_matrix();
        n = n->next;
        push_matrix();
        post_translate_matrix(n->mtx);
        push_matrix();
        v = -self->fD4;
        translate_matrix(0, v, 0.0f, 0.0f);
        draw_ginja_model(n->f4);
        pop_matrix();
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

void *create__15TODoorVS2Door01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TODoorVS2Door01__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 lbl_805D5988;
extern s32 *TODoorVS2Door01__data_805D598C;

void free_resources__15TODoorVS2Door01Fv(void) {
    if ((s32 *) TODoorVS2Door01__data_805D598C != NULL) {
        free_if_valid__10TObjPlayerFi(*TODoorVS2Door01__data_805D598C);
        if ((s32 *) TODoorVS2Door01__data_805D598C != NULL) {
            free__11TOBoss4RockFUi((void*)TODoorVS2Door01__data_805D598C);
            TODoorVS2Door01__data_805D598C = NULL;
        }
    }
    if ((u32) lbl_805D5988 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5988, 1);
        lbl_805D5988 = 0U;
    }
}

extern M2C_UNK __vt__15TODoorVS2Door01[];

typedef char RecoveredGlobal_80176308_lbl_80442A80_size[sizeof(RecoveredGlobal_80176308_lbl_80442A80) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80176308_lbl_804B4278_size[sizeof(RecoveredGlobal_80176308_lbl_804B4278) == 0x10 ? 1 : -1];
void load_resources__15TODoorVS2Door01Fv(void) {
    s32 *temp_r3_2;
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(alloc__23TAdSinglePlyChrSelectGCFPv(0x440));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(load_resource_from_descriptor(temp_r3, 1, &lbl_804B17E0.value, 0, 0, 0));
    }
    (*(u8 * *)&lbl_805D5988) = var_r0;
    temp_r3_2 = (s32 *)(alloc_buffer__11TOBoss4RockFPv(8));
    TODoorVS2Door01__data_805D598C = temp_r3_2;
    M2C_FIELD(temp_r3_2, s32 *, 4) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5988), u8 **, 0x42C), s32 *, 0xC);
    *TODoorVS2Door01__data_805D598C = load_gvm_texture_file((void *) (&lbl_804410E0.value));
}

void *__dt__15TODoorVS2Door01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TODoorVS2Door01;
        unregister_object_by_id((M2C_UNK *)arg0);
        free_collision_body_parts(arg0);
        destroy_ancient_door_base__15TODoorAncient01FPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80164340_lbl_804B17F0_size[sizeof(RecoveredGlobal_80164340_lbl_804B17F0) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80164340___vt__15TODoorVS2Door01_size[sizeof(RecoveredGlobal_80164340___vt__15TODoorVS2Door01) == 0x54 ? 1 : -1];
u8 *TODoorVS2Door01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    init_door_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80164340___vt__15TODoorVS2Door01 *)&__vt__15TODoorVS2Door01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2F94;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5988), u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD((*(u8 * *)&TODoorVS2Door01__data_805D598C), s32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) 30.0f;
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) ((19.0f) / M2C_FIELD(arg0, f32 *, 0xB4));
    M2C_FIELD(arg0, f32 *, 0xD4) = (f32) (0.0f);
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804B17F0.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    ((VObj_18_4a4f5b *)(arg0))->m17();
    return arg0;
}

}
