#include "types.h"
#include "pso/system/BmlResourceDescriptor.h"
#include "pso/object/TObjDoaEx01.h"

extern "C" {
extern char lbl_80445450[];
extern char lbl_80445464[];
extern char lbl_80445478[];
extern const char *fs_obj_ex_doa01_model_names[2];
extern const char *fs_obj_ex_doa01_motion_names[2];
extern BmlResourceDescriptor TObjDoaEx01__resource_descriptor;
}

struct RecoveredGlobal_8018E1E0_lbl_804B7588 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8018E1E0_lbl_804B7588_size[sizeof(RecoveredGlobal_8018E1E0_lbl_804B7588) == 0x10 ? 1 : -1];

struct VBase_18_4a4f5b { char pad[0x18]; };

struct VObj_18_4a4f5b : VBase_18_4a4f5b {
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
    virtual s32 m17();
};

struct RecoveredGlobal_8018E064_lbl_804B7598 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8018E064___vt__11TObjDoaEx01 {
    s32 value;
    u8 remaining[0x50];
};

extern "C" {
s32 get_bml_model(void *, s32);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFv(void *);
extern u32 TObjDoaEx01__resource_bundle;
extern u8 *TObjDoaEx01__alpha_model_node;
extern s32 TObjDoaEx01__alpha_model_sibling;
u8 *get_bml_motion(s32, s32);
s32 reset_photon_effect__10TObjPlayerFv(void *);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_door_base(void *);
extern RecoveredGlobal_8018E064_lbl_804B7598 TObjDoaEx01__collision_body_parts;
extern s32 __vt__11TObjDoaEx01[];
extern s32 TObjDoaEx01__name;
extern u32 TObjDoaEx01__resource_bundle;
extern const f32 TObjDoaEx01__data_805DBDA0;
extern const f32 TObjDoaEx01__data_805DBDA8;
extern const f32 lbl_805DBDBC;
u8 *TObjDoaEx01__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void *TObjDoaEx01__create(void *arg0);
void *__dt__11TObjDoaEx01Fv(void *arg0, s16 arg1);
void TLobby__sub_8001FE7C(void*, int);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(void *);
s32 __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
s32 destroy_ancient_door_base__15TODoorAncient01Fs(void *, s32);

extern s32 __vt__11TObjDoaEx01[];

void *__dt__11TObjDoaEx01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TObjDoaEx01;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        destroy_ancient_door_base__15TODoorAncient01Fs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

typedef char RecoveredGlobal_8018E064_lbl_804B7598_size[sizeof(RecoveredGlobal_8018E064_lbl_804B7598) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8018E064___vt__11TObjDoaEx01_size[sizeof(RecoveredGlobal_8018E064___vt__11TObjDoaEx01) == 0x54 ? 1 : -1];
u8 *TObjDoaEx01__ct(u8 *arg0, s32 arg1, s32 arg2) {
    init_door_base((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8018E064___vt__11TObjDoaEx01 *)&__vt__11TObjDoaEx01).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjDoaEx01__name;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    ((VObj_18_4a4f5b *)(arg0))->m17();
    init_collision_body_parts((void *) (arg0), (void *) (&TObjDoaEx01__collision_body_parts.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    reset_photon_effect__10TObjPlayerFv((void *) (arg0));
    *(f32 *)((s8 *)arg0 + 0xB0) = (f32) TObjDoaEx01__data_805DBDA0;
    *(f32 *)((s8 *)arg0 + 0xB8) = (f32) lbl_805DBDBC;
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) *(u32 *)((s8 *)(get_bml_motion((*(s32 *)&TObjDoaEx01__resource_bundle), 0)) + 4);
    *(s32 *)((s8 *)arg0 + 0xD0) = 0x100001;
    *(f32 *)((s8 *)arg0 + 0xD4) = (f32) TObjDoaEx01__data_805DBDA8;
    *(f32 *)((s8 *)arg0 + 0xD8) = (f32) TObjDoaEx01__data_805DBDA8;
    *(f32 *)((s8 *)arg0 + 0xDC) = (f32) TObjDoaEx01__data_805DBDA8;
    *(f32 *)((s8 *)arg0 + 0xE0) = (f32) TObjDoaEx01__data_805DBDA8;
    return arg0;
}

void *TObjDoaEx01__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE4);
    if (o != NULL) {
        o = TObjDoaEx01__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TObjDoaEx01__resource_bundle;

void TObjDoaEx01::free_resource() {
    if ((u32) TObjDoaEx01__resource_bundle != 0U) {
        TLobby__sub_8001FE7C((void*)TObjDoaEx01__resource_bundle, 1);
        TObjDoaEx01__resource_bundle = 0U;
    }
}
void TObjDoaEx01::load_resources() {
    s32 temp_r3;
    s32 var_r0;
    u8 *temp_r3_2;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &TObjDoaEx01__resource_descriptor, 0, 0, 0));
    }
    (*(u8 * *)&TObjDoaEx01__resource_bundle) = (unsigned char *) ((void *) var_r0);
    temp_r3_2 = (u8 *)(*(void **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(get_bml_model((void *) var_r0, 0)) + 0x2C)) + 0x30)) + 0x2C)) + 0x2C));
    TObjDoaEx01__alpha_model_node = temp_r3_2;
    TObjDoaEx01__alpha_model_sibling = *(s32 *)((s8 *)temp_r3_2 + 0x30);
}

}

extern "C" {
__declspec(section ".data") const char *fs_obj_ex_doa01_model_names[2] = { lbl_80445450, NULL };
__declspec(section ".data") const char *fs_obj_ex_doa01_motion_names[2] = { lbl_80445464, NULL };
BmlResourceDescriptor TObjDoaEx01__resource_descriptor = { lbl_80445478, fs_obj_ex_doa01_model_names, fs_obj_ex_doa01_motion_names, 1, 1 };
}
