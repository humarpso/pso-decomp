#include "types.h"

struct RecoveredGlobal_8019A9B8_lbl_80446184 {
    s32 value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8019A9B8_lbl_804B8F60 {
    s32 value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8019A880_lbl_804B8F70 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8019A880___vt__8TObjTank {
    s32 value;
    u8 remaining[0x38];
};

extern "C" {
s32 get_bml_model(s32, s32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFi(u32);
s32 draw_ginja_object();
extern u32 tank_bml_resource;
extern u32 TObjTank__texture_list;
extern const f32 lbl_805DBFA0;
extern const f32 lbl_805DBFA4;
void render__8TObjTankFv(u8 *arg0);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * load_gvm_texture_file(s32);
extern RecoveredGlobal_8019A9B8_lbl_80446184 lbl_80446184;
extern RecoveredGlobal_8019A9B8_lbl_804B8F60 fs_obj_tank_resource_descriptor;
extern u32 tank_bml_resource;
extern u32 TObjTank__texture_list;
void load_globals__8TObjTankFv(void);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 copy_xyz__10TObjPlayerFPvPv(void *, void *);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 construct_collider_proxy__10TObjPlayerFPv(void *);
extern RecoveredGlobal_8019A880_lbl_804B8F70 tobjtank_collision_body_parts;
extern s32 __vt__8TObjTank[];
extern s32 TObjTank__class_name;
u8 *TObjTank__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *TObjTank__create(void *arg0);
void *__dt__8TObjTankFv(void *arg0, s16 arg1);
void free_globals__8TObjTankFv(void);
void run_task__8TObjTankFv(void);
void TLobby__sub_8001FE7C(void*, int);
s32 TLobby__sub_803DA16C(void*);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(s32 *);
s32 __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
s32 destroy_particle_controller__10TObjPlayerFPvs(void *, s32);
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

struct Base { char pad[0x18]; };
struct VObj : Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};
void render__8TObjTankFv(u8 *arg0) {
    void *p;
    if ((((VObj *)arg0)->m8(lbl_805DBFA0, lbl_805DBFA4) != 0) && (p = (*(void * *)&TObjTank__texture_list))) {
        set_global_param__8TObjFishFi((u32)p);
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        get_bml_model((*(s32 *)&tank_bml_resource), 0);
        draw_ginja_object();
        pop_matrix();
    }
}

void run_task__8TObjTankFv(void) {  }

extern s32 __vt__8TObjTank[];

void *__dt__8TObjTankFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__8TObjTank;
        unregister_object_by_id((s32 *)arg0);
        free_collision_body_parts(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

typedef char RecoveredGlobal_8019A880_lbl_804B8F70_size[sizeof(RecoveredGlobal_8019A880_lbl_804B8F70) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8019A880___vt__8TObjTank_size[sizeof(RecoveredGlobal_8019A880___vt__8TObjTank) == 0x3C ? 1 : -1];
u8 *TObjTank__ct(u8 *arg0, s32 arg1, s32 arg2) {
    construct_collider_proxy__10TObjPlayerFPv((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8019A880___vt__8TObjTank *)&__vt__8TObjTank).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjTank__class_name;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg2 + 0xC));
    copy_xyz__10TObjPlayerFPvPv((void *) (arg0 + 0x5C), (void *) (arg2 + 0x18));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x68), (void *) (arg2 + 0x24));
    init_collision_body_parts((void *) (arg0), (void *) (&tobjtank_collision_body_parts.value), (int) (1));
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) | 0x40000000);
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    return arg0;
}

void *TObjTank__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xAC);
    if (o != NULL) {
        o = TObjTank__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 tank_bml_resource;
extern u32 TObjTank__texture_list;

void free_globals__8TObjTankFv(void) {
    if ((u32) TObjTank__texture_list != 0U) {
        TLobby__sub_803DA16C((void*)TObjTank__texture_list);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TObjTank__texture_list);
        TObjTank__texture_list = 0U;
    }
    if ((u32) tank_bml_resource != 0U) {
        TLobby__sub_8001FE7C((void*)tank_bml_resource, 1);
        tank_bml_resource = 0U;
    }
}
typedef char RecoveredGlobal_8019A9B8_lbl_80446184_size[sizeof(RecoveredGlobal_8019A9B8_lbl_80446184) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_8019A9B8_lbl_804B8F60_size[sizeof(RecoveredGlobal_8019A9B8_lbl_804B8F60) == 0x10 ? 1 : -1];
void load_globals__8TObjTankFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &fs_obj_tank_resource_descriptor.value, 0, 0, 0));
    }
    (*(s32 *)&tank_bml_resource) = var_r0;
    (*(u8 * *)&TObjTank__texture_list) = load_gvm_texture_file((s32) &lbl_80446184.value);
}

}
