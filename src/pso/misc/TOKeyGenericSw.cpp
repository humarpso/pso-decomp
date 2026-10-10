#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8016CB88_8016CA60 { char pad[0x18]; };
struct VObj_8016CB88_8016CA60 : Base_8016CB88_8016CA60 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17();
    virtual void m18();
};
struct Base_8016CBE4_8016CA60 { char pad[0x18]; };
struct VObj_8016CBE4_8016CA60 : Base_8016CBE4_8016CA60 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17();
    virtual void m18();
};

struct Base_8016CA64 { char pad[0x18]; };

struct Obj_8016CA64 : Base_8016CA64 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
    u8 pad1c[0x8];
    s32 x24;
    u8 pad28[0xC];
    s32 x34;
    u8 x38[0x28];
    s32 x60;
    u8 pad64[0x4C];
    f32 xb0;
    u8 padb4[0x8];
    s32 xbc;
    f32 xc0;
    f32 xc4;
    u8 padc8[0xC];
    s32 xd4;
};

struct Area_8016CA64 { u8 pad[8]; s32 x8; };

struct Map_8016CA64 { u8 pad[0x42C]; Area_8016CA64 *area; };

extern "C" {
s32 push_matrix();
s32 post_translate_matrix(void *);
s32 rotate_matrix_y(s32, s32);
s32 set_global_param__8TObjFishFi(s32);
s32 draw_ginja_object(s32);
s32 pop_matrix();
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 draw_ginja_model_with_motion(s32, s32, f32);
extern s32 *TOKeyGenericSw__texture_lists;
extern Map_8016CA64 *TOKeyGenericSw__shared_resource_ptrs[];
void render__14TOKeyGenericSwFv(Obj_8016CA64 *self);
void TLobby__sub_8001FE7C(void *, s32);
void free__11TOBoss4RockFUi(void *);
void free_if_valid__10TObjPlayerFi(s32);
extern s32 *TOKeyGenericSw__texture_lists;
extern Map_8016CA64 *TOKeyGenericSw__shared_resource_ptrs[];
void free_shared_resources__14TOKeyGenericSwFv(void);
void *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(u32);
void *alloc_buffer__11TOBoss4RockFPv(u32);
s32 load_gvm_texture_file(void *);
s32 is_global_state_in_table__19TContainerAncient01Fv(void);
s32 get_global_state__14TOKeyMachine01Fv(void);
extern char lbl_80441D04[];
extern char lbl_80441D24[];
extern u8 lbl_804B2CC0[];
extern Map_8016CA64 *TOKeyGenericSw__shared_resource_ptrs[];
extern s32 *TOKeyGenericSw__texture_lists;
void load_resources__14TOKeyGenericSwFv(void);
}

extern "C" {

void TOKeyGenericSw__vt14(void *arg0);
void TOKeyGenericSw__vt15(void *arg0);
void TOKeyGenericSw__vt23(void);
void *__dt__14TOKeyGenericSwFv(void *arg0, s16 arg1);
void *create__14TOKeyGenericSwFPv(void *arg0);
void *TOKeyGenericSw__ct(void *, void *, void *);
void free_collision_body_parts(void *);
void unregister_object_by_id(void *);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK update_anim_phase__17TOBarrierEnergy01FPv();

void TOKeyGenericSw__vt23(void) {  }

void render__14TOKeyGenericSwFv(Obj_8016CA64 *self) {
    if (self->m8(self->xc0, self->xc4) == 0) return;
    push_matrix();
    self->x24 = TOKeyGenericSw__texture_lists[0];
    self->x34 = TOKeyGenericSw__shared_resource_ptrs[0]->area->x8;
    post_translate_matrix(self->x38);
    rotate_matrix_y(0, self->x60);
    set_global_param__8TObjFishFi(self->x24);
    draw_ginja_object(self->x34);
    pop_matrix();
    begin_effect_render__13TParticleCtrlFv();
    push_matrix();
    switch (self->xd4) {
    case 0:
        self->x24 = TOKeyGenericSw__texture_lists[1];
        break;
    case 1:
        self->x24 = TOKeyGenericSw__texture_lists[2];
        break;
    }
    self->x34 = TOKeyGenericSw__shared_resource_ptrs[1]->area->x8;
    post_translate_matrix(self->x38);
    rotate_matrix_y(0, self->x60);
    set_global_param__8TObjFishFi(self->x24);
    draw_ginja_model_with_motion(self->x34, self->xbc, self->xb0);
    pop_matrix();
    end_effect_render__13TParticleCtrlFv();
}

void TOKeyGenericSw__vt15(void *arg0) {
    update_anim_phase__17TOBarrierEnergy01FPv();
    ((VObj_8016CB88_8016CA60*)arg0)->m18();
    M2C_FIELD(arg0, s32 *, 0xF4) = 1;
    M2C_FIELD(arg0, s32 *, 0xEC) = 0;
    M2C_FIELD(arg0, s32 *, 0xF0) = 0;
    M2C_FIELD(arg0, s32 *, 0xF8) = (s32) M2C_FIELD(arg0, s32 *, 0xF4);
}

void TOKeyGenericSw__vt14(void *arg0) {
    update_anim_phase__17TOBarrierEnergy01FPv();
    ((VObj_8016CBE4_8016CA60*)arg0)->m18();
    M2C_FIELD(arg0, s32 *, 0xEC) = 1;
    M2C_FIELD(arg0, s32 *, 0xF4) = 0;
    M2C_FIELD(arg0, s32 *, 0xF8) = 0;
    M2C_FIELD(arg0, s32 *, 0xF0) = (s32) M2C_FIELD(arg0, s32 *, 0xEC);
}

extern void *tl_05;

void *create__14TOKeyGenericSwFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xFC);
    if (o != NULL) {
        o = TOKeyGenericSw__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK __vt__14TOKeyGenericSw[];

void free_shared_resources__14TOKeyGenericSwFv(void) {
    if (TOKeyGenericSw__texture_lists != NULL) {
        free_if_valid__10TObjPlayerFi(TOKeyGenericSw__texture_lists[2]);
        if (TOKeyGenericSw__texture_lists != NULL) {
            free__11TOBoss4RockFUi(TOKeyGenericSw__texture_lists);
            TOKeyGenericSw__texture_lists = NULL;
        }
    }
    if (TOKeyGenericSw__shared_resource_ptrs[1] != NULL) {
        TLobby__sub_8001FE7C(TOKeyGenericSw__shared_resource_ptrs[1], 1);
        TOKeyGenericSw__shared_resource_ptrs[1] = NULL;
    }
    if (TOKeyGenericSw__shared_resource_ptrs[0] != NULL) {
        TLobby__sub_8001FE7C(TOKeyGenericSw__shared_resource_ptrs[0], 1);
        TOKeyGenericSw__shared_resource_ptrs[0] = NULL;
    }
}

void load_resources__14TOKeyGenericSwFv(void) {
    u8 *base = lbl_804B2CC0;
    s32 st = get_global_state__14TOKeyMachine01Fv();
    void *p;
    if (is_global_state_in_table__19TContainerAncient01Fv() == 1 || st == 0x1C || st == 0x1D) {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, base + 0x40, 0, 0, 0);
        }
        TOKeyGenericSw__shared_resource_ptrs[0] = (Map_8016CA64 *)p;
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, base + 0x60, 0, 0, 0);
        }
        TOKeyGenericSw__shared_resource_ptrs[1] = (Map_8016CA64 *)p;
        TOKeyGenericSw__texture_lists = (s32 *)alloc_buffer__11TOBoss4RockFPv(0xC);
        TOKeyGenericSw__texture_lists[0] = M2C_FIELD(TOKeyGenericSw__shared_resource_ptrs[0]->area, s32 *, 0xC);
        TOKeyGenericSw__texture_lists[1] = M2C_FIELD(TOKeyGenericSw__shared_resource_ptrs[1]->area, s32 *, 0xC);
        TOKeyGenericSw__texture_lists[2] = load_gvm_texture_file(lbl_80441D04);
    } else {
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, base + 0x8, 0, 0, 0);
        }
        TOKeyGenericSw__shared_resource_ptrs[0] = (Map_8016CA64 *)p;
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = load_resource_from_descriptor(p, 1, base + 0x28, 0, 0, 0);
        }
        TOKeyGenericSw__shared_resource_ptrs[1] = (Map_8016CA64 *)p;
        TOKeyGenericSw__texture_lists = (s32 *)alloc_buffer__11TOBoss4RockFPv(0xC);
        TOKeyGenericSw__texture_lists[0] = M2C_FIELD(TOKeyGenericSw__shared_resource_ptrs[0]->area, s32 *, 0xC);
        TOKeyGenericSw__texture_lists[1] = M2C_FIELD(TOKeyGenericSw__shared_resource_ptrs[1]->area, s32 *, 0xC);
        TOKeyGenericSw__texture_lists[2] = load_gvm_texture_file(lbl_80441D24);
    }
}

void *__dt__14TOKeyGenericSwFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOKeyGenericSw;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
