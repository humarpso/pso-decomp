#include "types.h"

struct RecoveredGlobal_80177330_lbl_804B43F0 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80177330_lbl_804B43F0_size[sizeof(RecoveredGlobal_80177330_lbl_804B43F0) == 0x10 ? 1 : -1];

struct VBase_801773D8 { u8 pad[0x18]; };

struct Obj_801773D8 : VBase_801773D8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(void *);
    s32 unk1c;
    s32 unk20;
    s32 unk24;
    u8 pad28[0x30 - 0x28];
    u32 flags;
    s32 unk34;
    u8 pad38[0x68 - 0x38];
    f32 unk68;
    u8 pad6c[0x90 - 0x6C];
    f32 timer[4];
    u8 on[4];
    f32 speed;
    f32 unka8;
    f32 unkac;
};

struct Model_801773D8 { u8 pad[8]; s32 a; s32 b; };

struct Res_801773D8 { u8 pad[0x42C]; Model_801773D8 *model; };

struct Obj_80177088 { u8 pad[0x90]; f32 timer[4]; u8 on[4]; f32 speed; };

struct VBase_801771F4 { u8 pad[0x18]; };

struct Node_801771F4 { u8 pad[4]; s32 f4; u8 m[0x28]; Node_801771F4 *next; };

struct Res_801771F4 { u8 pad[0x2C]; Node_801771F4 *head; };

struct Obj_801771F4 : VBase_801771F4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
    s32 unk1c;
    s32 unk20;
    s32 unk24;
    u8 pad28[0x34 - 0x28];
    Res_801771F4 *res;
    u8 m38[0x60 - 0x38];
    s32 unk60;
    u8 pad64[0xA0 - 0x64];
    u8 on[4];
    f32 speed;
    f32 unka8;
    f32 unkac;
};

extern "C" {
extern const f32 TOSparkMachine01__data_805DB9EC;
void run_task__16TOSparkMachine01Fv(u8 *arg0);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80177330_lbl_804B43F0 bm_fe_obj_tank_hikari_resource_descriptor;
extern u32 TOSparkMachine01__static_resource;
void load_static_resource__16TOSparkMachine01Fv(void);
void construct_world_actor_base(void *, s32);
extern s32 __vt__16TOSparkMachine01[];
extern s32 lbl_805D3174;
extern u32 TOSparkMachine01__static_resource;
extern s32 tl_05;
extern const f32 TOSparkMachine01__data_805DB9EC;
extern const f32 lbl_805DB9F0;
extern const f32 lbl_805DB9F4;
extern const f32 lbl_805DB9F8;
void *TOSparkMachine01__ct(void *arg0, void *arg1);
s32 rand(void);
extern const f32 lbl_805DB9E8;
extern const f32 TOSparkMachine01__data_805DB9EC;
void update_spark_toggle__16TOSparkMachine01FPvi(void *arg0, s32 i);
void begin_effect_render__13TParticleCtrlFv(void *);
void end_effect_render__13TParticleCtrlFv();
void rotate_matrix_y(int, int);
void push_matrix();
void pop_matrix();
void post_translate_matrix(void *);
void set_global_param__8TObjFishFi(int);
void draw_ginja_model(int);
void render__16TOSparkMachine01Fv(Obj_801771F4 *self);
}

extern "C" {

void *__dt__16TOSparkMachine01Fv(void *arg0, s16 arg1);
void *create__16TOSparkMachine01FPv(void *arg0);
void destroy_static_instance__16TOSparkMachine01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

void update_spark_toggle__16TOSparkMachine01FPvi(void *arg0, s32 i) {
    Obj_80177088 *self = (Obj_80177088 *)arg0;
    switch (self->on[i]) {
    case 1:
        self->timer[i] += self->speed;
        if (lbl_805DB9E8 * (f32)rand() < self->timer[i]) {
            self->on[i] = 0;
            self->timer[i] = TOSparkMachine01__data_805DB9EC;
        }
        break;
    default:
        self->timer[i] += self->speed;
        if (lbl_805DB9E8 * (f32)rand() < self->timer[i]) {
            self->on[i] = 1;
            self->timer[i] = TOSparkMachine01__data_805DB9EC;
        }
        break;
    }
}

void run_task__16TOSparkMachine01Fv(u8 *arg0) {
    s32 var_r31;
    if (TOSparkMachine01__data_805DB9EC < *(f32 *)((s8 *)arg0 + 0x6C)) {
        var_r31 = 0;
        do {
            update_spark_toggle__16TOSparkMachine01FPvi((void *)(arg0), (s32)(var_r31));
            var_r31 += 1;
        } while (var_r31 < 4);
        return;
    }
    *(s8 *)((s8 *)arg0 + 0xA3) = 0;
    *(s8 *)((s8 *)arg0 + 0xA2) = 0;
    *(s8 *)((s8 *)arg0 + 0xA0) = 0;
    update_spark_toggle__16TOSparkMachine01FPvi((void *)(arg0), (s32)(1));
}

void render__16TOSparkMachine01Fv(Obj_801771F4 *self) {
    Node_801771F4 *n;
    s32 i;
    Res_801771F4 *r;
    if (self->m8(self->unka8, self->unkac) != 0) {
        push_matrix();
        post_translate_matrix(self->m38);
        rotate_matrix_y(0, self->unk60);
        set_global_param__8TObjFishFi(self->unk24);
        r = self->res;
        n = r->head;
        begin_effect_render__13TParticleCtrlFv(r);
        for (i = 0; i < 4; i++) {
            switch (self->on[i]) {
            case 1:
                push_matrix();
                post_translate_matrix(n->m);
                draw_ginja_model(n->f4);
                pop_matrix();
                break;
            }
            n = n->next;
        }
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

void *create__16TOSparkMachine01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB0);
    if (o != NULL) {
        o = TOSparkMachine01__ct((void *)(o), (void *)(arg0));
    }
    return o;
}

extern u32 TOSparkMachine01__static_resource;

void destroy_static_instance__16TOSparkMachine01Fv(void) {
    if ((u32) TOSparkMachine01__static_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TOSparkMachine01__static_resource, 1);
        TOSparkMachine01__static_resource = 0U;
    }
}

extern s32 __vt__16TOSparkMachine01[];

void load_static_resource__16TOSparkMachine01Fv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &bm_fe_obj_tank_hikari_resource_descriptor.value, 0, 0, 0));
    }
    (*(s32 *)&TOSparkMachine01__static_resource) = var_r0;
}

void *__dt__16TOSparkMachine01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TOSparkMachine01;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void *TOSparkMachine01__ct(void *arg0, void *arg1) {
    Obj_801773D8 *self = (Obj_801773D8 *)arg0;
    s32 i;
    construct_world_actor_base(self, tl_05);
    *(void **)((u8 *)self + 0x18) = ((s32 *)&__vt__16TOSparkMachine01);
    *(s32 *)self = lbl_805D3174;
    self->m5(arg1);
    self->unk34 = ((Res_801773D8 *)TOSparkMachine01__static_resource)->model->a;
    self->unk24 = ((Res_801773D8 *)TOSparkMachine01__static_resource)->model->b;
    self->unka8 = lbl_805DB9F0;
    self->unkac = lbl_805DB9F4;
    self->flags |= 0x40000000;
    for (i = 0; i < 4; i++) {
        self->timer[i] = TOSparkMachine01__data_805DB9EC;
        self->on[i] = 0;
    }
    self->speed = lbl_805DB9F8 + self->unk68;
    return self;
}

}
