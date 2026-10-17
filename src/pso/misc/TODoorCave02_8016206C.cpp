#include "types.h"
#include "pso/misc/TODoorCave02_8016206C.h"
#include "pso/object/TObjMotion.h"
#include "pso/unk/TUnk_804B0BB8.h"
#include "pso/system/BmlResourceDescriptor.h"
#include "pso/misc/TODoorCave02.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TODoorAncient01.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
extern char lbl_80440DB8[];
extern char lbl_80440DCC[];
extern char lbl_80440DE0[];
extern char lbl_80440DF8[];
__declspec(section ".data") const char *bm_fs_obj_do_doa02_model_names[2] = { lbl_80440DB8, NULL };
__declspec(section ".data") const char *bm_fs_obj_do_doa02_motion_names[2] = { lbl_80440DCC, NULL };
BmlResourceDescriptor TODoorCave02__resource_descriptor = { lbl_80440DE0, bm_fs_obj_do_doa02_model_names, bm_fs_obj_do_doa02_motion_names, 1, 1 };
__declspec(section ".data") const char *bm_fs_obj_do_doa02_a_model_names[2] = { lbl_80440DB8, NULL };
__declspec(section ".data") const char *bm_fs_obj_do_doa02_a_motion_names[2] = { lbl_80440DCC, NULL };
BmlResourceDescriptor TODoorCave02_resource_descriptor = { lbl_80440DF8, bm_fs_obj_do_doa02_a_model_names, bm_fs_obj_do_doa02_a_motion_names, 1, 1 };
}

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

struct RecoveredGlobal_8016226C_lbl_804B1488 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8016226C___vt__12TODoorCave02 {
    s32 value;
    u8 remaining[0x50];
};

extern "C" {
s32 init_collision_body_parts(void *, void *, int);
void *init_door_base(void *a0);
extern RecoveredGlobal_8016226C_lbl_804B1488 TODoorCave02__collision_body_parts;
extern s32 __vt__12TODoorCave02[];
extern s32 lbl_805D2F68;
extern u32 cave_door02_model_resource;
extern const f32 lbl_805DB4B8;
extern const f32 lbl_805DB4C8;
void *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFv(s32);
void *mem_alloc(u32 size);
s32 load_gvm_texture_file(void *);
extern u8 lbl_80440E24[];
extern u8 lbl_80440E3C[];

extern s32 enable_v2_features;
extern s32 *cave_door02_resources;
void TLobby__sub_8001FE7C(void*, int);
s32 free_collision_body_parts(void *);
s32 __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void mem_free(void *p);

extern void *tl_05;

void *TODoorCave02::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE4);
    if (o != NULL) {
        o = TODoorCave02__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

void TODoorCave02::free_globals() {
    if ((s32 *) cave_door02_resources != NULL) {
        TObjPlayer::free_if_valid(*cave_door02_resources);
        if ((s32 *) cave_door02_resources != NULL) {
            mem_free(cave_door02_resources);
            cave_door02_resources = NULL;
        }
    }
    if ((u32) cave_door02_model_resource != 0U) {
        TLobby__sub_8001FE7C((void*)cave_door02_model_resource, 1);
        cave_door02_model_resource = 0U;
    }
}

void TODoorCave02::load_resources() {
    void *o;
    cave_door02_resources = (s32 *)mem_alloc(8);
    if (enable_v2_features == 1 && TLobby::is_online_ready() != 0) {
        o = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
        if (o != NULL) {
            o = load_resource_from_descriptor(o, 1, &TODoorCave02_resource_descriptor, 0, 0, 0);
        }
        cave_door02_model_resource = (u32)o;
        cave_door02_resources[0] = load_gvm_texture_file(lbl_80440E24);
    } else {
        o = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
        if (o != NULL) {
            o = load_resource_from_descriptor(o, 1, &TODoorCave02__resource_descriptor, 0, 0, 0);
        }
        cave_door02_model_resource = (u32)o;
        cave_door02_resources[0] = load_gvm_texture_file(lbl_80440E3C);
    }
    cave_door02_resources[1] = *(s32 *)(*(u8 **)(cave_door02_model_resource + 0x42C) + 0xC);
}

void *__dt__12TODoorCave02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TODoorCave02;
        ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
        free_collision_body_parts(arg0);
        ((TUnk_804B0BB8 *)arg0)->destroy_ancient_door_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8016226C_lbl_804B1488_size[sizeof(RecoveredGlobal_8016226C_lbl_804B1488) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8016226C___vt__12TODoorCave02_size[sizeof(RecoveredGlobal_8016226C___vt__12TODoorCave02) == 0x54 ? 1 : -1];
u8 *TODoorCave02__ct(u8 *arg0, s32 arg1, s32 arg2) {
    init_door_base((arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8016226C___vt__12TODoorCave02 *)&__vt__12TODoorCave02).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2F68;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&cave_door02_model_resource) + 0x42C)) + 8);
    ((TODoorCave02 *)arg0)->texture_id = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&cave_door02_model_resource) + 0x42C)) + 0xC);
    *(u8 **)((s8 *)arg0 + 0xBC) = (unsigned char *) ((void *) *(void **)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&cave_door02_model_resource) + 0x430)) + 4));
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) ((f32) *(u32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xBC)) + 4) - lbl_805DB4B8);
    ((TODoorCave02 *)arg0)->m_b8 = (f32) lbl_805DB4C8;
    init_collision_body_parts((void *) (arg0), (void *) (&TODoorCave02__collision_body_parts.value), (int) (1));
    ((TUnk_804AF8A0 *)arg0)->refresh_collision_body_centers();
    ((TObjPlayer *)arg0)->reset_photon_effect();
    ((TODoorCave02 *)(arg0))->init_door_switch_binding();
    *(f32 *)((s8 *)arg0 + 0xD4) = (f32) lbl_805DB4B8;
    ((TODoorCave02 *)arg0)->m_d8 = (f32) lbl_805DB4B8;
    *(f32 *)((s8 *)arg0 + 0xDC) = (f32) lbl_805DB4B8;
    ((TODoorCave02 *)arg0)->m_e0 = (f32) lbl_805DB4B8;
    return arg0;
}

}
