#include "types.h"

struct Rec_800B8B08 { u8 vec[0x18]; s32 f18; u32 flags; };

struct Obj_800B8B08 { u8 pad0[0x24]; s32 f24; u8 pad28[0x34 - 0x28]; s32 f34; u8 pad38[0xC0 - 0x38]; f32 fc0; u8 padc4[0xF8 - 0xC4]; s32 ff8; Rec_800B8B08 *recs; u8 pad100[4]; s32 count; };

struct Vec_800B8BB4 { f32 x, y, z; };

struct Rec_800B8BB4 { Vec_800B8BB4 pos; Vec_800B8BB4 v2; s32 f18; u32 flags; };

struct Hit_800B8BB4 { u8 pad0[4]; Vec_800B8BB4 *pos; };

struct Grass_800B8BB4 {
    u8 pad0[0x3C];
    f32 f3C;
    u8 pad40[4];
    Vec_800B8BB4 f44;
    u8 pad50[0xC0 - 0x50];
    f32 fC0;
    u8 padC4[4];
    f32 fC8;
    u8 padCC[0xFC - 0xCC];
    Rec_800B8BB4 *recs;
    f32 f100;
    s32 count;
    s32 f108;
    u8 f10C[4];
};

struct Vec_800B8EFC { f32 x, y, z; };

struct Rec_800B8EFC { Vec_800B8EFC pos; Vec_800B8EFC v2; s32 f18; u32 flags; };

struct Src_800B8EFC { u8 pad0[8]; s32 f8; s32 fC; };

struct Mgr_800B8EFC { u8 pad0[0x42C]; Src_800B8EFC *src; s32 f430; };

struct Grass_800B8EFC {
    s32 f0;
    u8 pad4[0x18 - 0x4];
    void *vt;
    u8 pad1C[0x24 - 0x1C];
    s32 f24;
    u8 pad28[0x34 - 0x28];
    s32 f34;
    Vec_800B8EFC f38;
    u8 pad44[0xC4 - 0x44];
    f32 fC4;
    u8 padC8[0xD8 - 0xC8];
    void *fD8;
    s32 fDC;
    u8 padE0[0xFC - 0xE0];
    Rec_800B8EFC *recs;
    f32 f100;
    s32 count;
    s32 f108;
    u8 f10C[4];
};

extern "C" {
s32 reset_transform_state__10TObjPlayerFv();
s32 translate_matrix_vec3(int, void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix_from(int);
s32 pop_matrices(int);
s32 set_global_param__8TObjFishFi(int);
s32 draw_model_motion(int, int, f32);
void render__10TObjCGrassFv(Obj_800B8B08 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 queue_destruction__7TObjectFv(void *);
u8 *csnVectorUnder(void *, void *, int);
s32 vec3_add_to(void *, void *);
extern s32 actor_frame_tick;
extern const f32 lbl_805D9E60;
extern const f32 TObjCGrass__data_805D9E64;
void run_task__10TObjCGrassFv(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 register_object__10TObjPlayerFi(void *);
s32 set_field_d8__10TObjPlayerFPvi(void *, void *);
u8 *csnVectorUnder(void *, void *, int);
s32 set_animation__10TObjPlayerFPvs(void *, int);
s32 TObjMotion__ct(void *, s32);
s32 alloc_buffer__11TOBoss4RockFPv(int);
s32 rand(void);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix_from(int);
s32 pop_matrices(int);
extern s32 cgrass_action_desc[];
extern s32 __vt__10TObjCGrass[];
extern u8 identity_matrix[];
extern s32 lbl_805D2A28;
extern u32 TObjCGrass_bml_resource;
extern s32 tl_06;
extern const f32 TObjCGrass__data_805D9E64;
extern const f32 lbl_805D9E6C;
extern const f32 lbl_805D9E70;
extern const f32 lbl_805D9E74;
extern const f32 lbl_805D9E78;
u8 *TObjCGrass__ct(Grass_800B8EFC *self, u8 *arg1, s32 arg2, s32 arg3);
}

extern "C" {

void *__dt__10TObjCGrassFv(void *arg0, s16 arg1);
void* fn_800B8B00(void* p);
void release_global_805D5130__10TObjCGrassFv(void);
void TLobby__sub_8001FE7C(void*, int);
s32 get_group_id__14TObjEneBm5WolfFPv(void* p);
void __dl__7TObjectFPv(void *);
void __dt__10TObjMotionFv(void *, int);
void free__11TOBoss4RockFUi(void *);

struct Stack_800B8DC4 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};
u8 *load_resource_from_descriptor(void *, s32, s32 *, s32, s32, s32);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 check_v2_mode__9TObjEneDDFv();
u8 *load_enemy_bml_resource_named(s32 *, s32 *);
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
struct RecoveredGlobal_800B8DC4_lbl_8043B628 {
    s32 value;
    u8 remaining[0xC];
};
typedef char RecoveredGlobal_800B8DC4_lbl_8043B628_size[sizeof(RecoveredGlobal_800B8DC4_lbl_8043B628) == 0x10 ? 1 : -1];
extern RecoveredGlobal_800B8DC4_lbl_8043B628 cgrass_anim_binding;
struct RecoveredGlobal_800B8DC4_lbl_8043B638 {
    s32 value;
    u8 remaining[0x10];
};
typedef char RecoveredGlobal_800B8DC4_lbl_8043B638_size[sizeof(RecoveredGlobal_800B8DC4_lbl_8043B638) == 0x14 ? 1 : -1];
extern RecoveredGlobal_800B8DC4_lbl_8043B638 lbl_8043B638;
struct RecoveredGlobal_800B8DC4_lbl_80492500 {
    s32 value;
    u8 remaining[0xC];
};
typedef char RecoveredGlobal_800B8DC4_lbl_80492500_size[sizeof(RecoveredGlobal_800B8DC4_lbl_80492500) == 0x10 ? 1 : -1];
extern RecoveredGlobal_800B8DC4_lbl_80492500 bm_ene_cgrass_resource_descriptor;
extern const f32 TObjCGrass__data_805D9E64;
extern const f32 lbl_805D9E68;
void load_resources__10TObjCGrassFv(void);

void* fn_800B8B00(void* p) { return (char*)p + 0x3e8; }

extern u32 TObjCGrass_bml_resource;

void render__10TObjCGrassFv(Obj_800B8B08 *arg0) {
    s32 i;
    set_global_param__8TObjFishFi(arg0->f24);
    for (i = 0; i < arg0->count; i++) {
        if (!(arg0->recs[i].flags & 1)) {
            push_matrix_from(0);
            translate_matrix_vec3(0, &arg0->recs[i]);
            rotate_matrix_y(0, arg0->recs[i].f18);
            draw_model_motion(arg0->f34, arg0->ff8, arg0->fc0);
            reset_transform_state__10TObjPlayerFv();
            pop_matrices(1);
        }
    }
}

void run_task__10TObjCGrassFv(u8 *arg0) {
    s32 i;
    Grass_800B8BB4 *self = (Grass_800B8BB4 *)arg0;
    Vec_800B8BB4 a;
    Vec_800B8BB4 b;
    Hit_800B8BB4 *hit;
    self->fC0 += self->fC8;
    if (self->f100 < self->fC0) {
        self->fC0 -= self->f100;
    }
    for (i = 0; i < self->count; i++) {
        VecCopy__FP3VecPC3Vec(&a, &self->recs[i].pos);
        VecCopy__FP3VecPC3Vec(&b, &self->recs[i].v2);
        VecCopy__FP3VecPC3Vec(&self->f44, &a);
        vec3_add_to(&a, &b);
        if (i == actor_frame_tick % self->count) {
            hit = (Hit_800B8BB4 *)csnVectorUnder(&a, self->f10C, 1);
            if (hit != NULL) {
                VecCopy__FP3VecPC3Vec(&a, hit->pos);
                b.y += lbl_805D9E60;
                self->f44.y += b.y;
                if (a.y < self->f44.y) {
                    a.y = self->f44.y;
                } else {
                    b.y = TObjCGrass__data_805D9E64;
                }
                VecCopy__FP3VecPC3Vec(&self->recs[i].pos, &a);
                VecCopy__FP3VecPC3Vec(&self->recs[i].v2, &b);
            } else {
                self->recs[i].flags |= 1;
            }
        } else if (self->f3C <= a.y) {
            b.y = TObjCGrass__data_805D9E64;
        } else {
            b.y += lbl_805D9E60;
        }
        VecCopy__FP3VecPC3Vec(&self->recs[i].pos, &a);
        VecCopy__FP3VecPC3Vec(&self->recs[i].v2, &b);
    }
    if (self->f108-- < 0) {
        queue_destruction__7TObjectFv(self);
    }
}

void release_global_805D5130__10TObjCGrassFv(void) {
    if ((u32) TObjCGrass_bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TObjCGrass_bml_resource, 1);
        TObjCGrass_bml_resource = 0U;
    }
}

void load_resources__10TObjCGrassFv(void) {
    Stack_800B8DC4 stack;

    u8 *temp_r3;
    u8 *temp_r5;
    u8 *var_r0;

    if (check_v2_mode__9TObjEneDDFv() != 0) {
        TObjCGrass_bml_resource = (u32) load_enemy_bml_resource_named(&bm_ene_cgrass_resource_descriptor.value, &lbl_8043B638.value);
    } else {
        temp_r3 = (u8 *)(alloc__23TAdSinglePlyChrSelectGCFPv(0x440));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(load_resource_from_descriptor(temp_r3, 1, &bm_ene_cgrass_resource_descriptor.value, 0, 0, 0));
        }
        TObjCGrass_bml_resource = (u32) var_r0;
    }
    stack.sp8 = *(s32 *)((s8 *)(&cgrass_anim_binding.value) + 0);
    stack.spC = *(s32 *)((s8 *)(&cgrass_anim_binding.value) + 4);
    stack.sp10 = *(s32 *)((s8 *)(&cgrass_anim_binding.value) + 8);
    stack.sp14 = *(s32 *)((s8 *)(&cgrass_anim_binding.value) + 0xC);
    stack.sp8 = *(s32 *)((s8 *)TObjCGrass_bml_resource + 0x430);
    temp_r5 = (u8 *)(*(u8 **)((s8 *)TObjCGrass_bml_resource + 0x42C));
    spawn_npc_enemy__6TLobbyFsiiiff((int) (0x36), (int) (*(s32 *)((s8 *)temp_r5 + 8)), (int) (*(s32 *)((s8 *)temp_r5 + 0xC)), (void *) (&stack.sp8), (f32) (lbl_805D9E68), (f32) (TObjCGrass__data_805D9E64));
}

extern s32 __vt__10TObjCGrass[];

void *__dt__10TObjCGrassFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__10TObjCGrass;
        if (*(void **)((s8 *)arg0 + 0xFC) != NULL) { free__11TOBoss4RockFUi(*(void **)((s8 *)arg0 + 0xFC)); }
        __dt__10TObjMotionFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma fp_contract on
u8 *TObjCGrass__ct(Grass_800B8EFC *self, u8 *arg1, s32 arg2, s32 arg3) {
    u8 *hit;
    TObjMotion__ct(self, tl_06);
    self->vt = __vt__10TObjCGrass;
    register_object__10TObjPlayerFi(self->f10C);
    self->f0 = lbl_805D2A28;
    hit = csnVectorUnder(arg1, self->f10C, 1);
    if (hit != NULL) {
        VecCopy__FP3VecPC3Vec(&self->f38, *(void **)(hit + 4));
    } else {
        VecCopy__FP3VecPC3Vec(&self->f38, arg1);
    }
    self->f34 = (*(Mgr_800B8EFC * *)&TObjCGrass_bml_resource)->src->f8;
    self->f24 = (*(Mgr_800B8EFC * *)&TObjCGrass_bml_resource)->src->fC;
    self->fDC = (*(Mgr_800B8EFC * *)&TObjCGrass_bml_resource)->f430;
    self->fD8 = cgrass_action_desc;
    set_field_d8__10TObjPlayerFPvi(self, self->fD8);
    set_animation__10TObjPlayerFPvs(self, 0);
    self->f100 = self->fC4 - lbl_805D9E6C;
    self->count = arg2;
    if (arg2 != 0) {
        self->recs = (Rec_800B8EFC *)alloc_buffer__11TOBoss4RockFPv(self->count << 5);
    } else {
        self->recs = NULL;
    }
    {
    s32 i;
    for (i = 0; i < self->count; i++) {
        s32 a;
        Vec_800B8EFC v;
        VecCopy__FP3VecPC3Vec(&self->recs[i].pos, &self->f38);
        v.x = TObjCGrass__data_805D9E64;
        v.y = lbl_805D9E70 * (f32)rand();
        v.z = lbl_805D9E70 * (f32)rand() + lbl_805D9E6C;
        a = (s32)(lbl_805D9E74 * (lbl_805D9E78 * (lbl_805D9E70 * (f32)rand())));
        self->recs[i].f18 = a;
        ((s32 (*)(void *))push_matrix_from)(identity_matrix);
        rotate_matrix_y(0, a);
        rotate_vector_by_matrix(0, &v, &self->recs[i].v2);
        pop_matrices(1);
        self->recs[i].flags = 0;
    }
    }
    self->f108 = arg3;
    return (u8 *)self;
}
#pragma pop

}
