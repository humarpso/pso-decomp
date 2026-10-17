#include "types.h"
#include "pso/misc/TODoorCave01_80161A30.h"
#include "pso/object/TObjMotion.h"
#include "pso/unk/TUnk_804B0BB8.h"
#include "pso/system/BmlResourceDescriptor.h"
#include "pso/misc/TODoorCave01.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TODoorAncient01.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
extern char lbl_80440D10[];
extern char lbl_80440D24[];
extern char lbl_80440D38[];
extern char lbl_80440D50[];
__declspec(section ".data") const char *bm_fs_obj_do_doa01_model_names[2] = { lbl_80440D10, NULL };
__declspec(section ".data") const char *bm_fs_obj_do_doa01_motion_names[2] = { lbl_80440D24, NULL };
BmlResourceDescriptor TODoorCave01__resource_descriptor = { lbl_80440D38, bm_fs_obj_do_doa01_model_names, bm_fs_obj_do_doa01_motion_names, 1, 1 };
__declspec(section ".data") const char *bm_fs_obj_do_doa01_a_model_names[2] = { lbl_80440D10, NULL };
__declspec(section ".data") const char *bm_fs_obj_do_doa01_a_motion_names[2] = { lbl_80440D24, NULL };
BmlResourceDescriptor cave_door01_resource_descriptor = { lbl_80440D50, bm_fs_obj_do_doa01_a_model_names, bm_fs_obj_do_doa01_a_motion_names, 1, 1 };
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

struct RecoveredGlobal_80161BE4_lbl_804B13C8 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80161BE4___vt__12TODoorCave01 {
    s32 value;
    u8 remaining[0x50];
};

extern "C" {
s32 init_collision_body_parts(void *, void *, int);
void *init_door_base(void *a0);
extern RecoveredGlobal_80161BE4_lbl_804B13C8 TODoorCave01__collision_body_template;
extern s32 __vt__12TODoorCave01[];
extern s32 lbl_805D2F60;
extern u32 door_cave_shared_bml_archive;
extern const f32 lbl_805DB49C;
extern const f32 lbl_805DB4A8;
void *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFv(s32);
s32 *mem_alloc(s32);
s32 load_gvm_texture_file(void *);
extern u8 lbl_80440D7C[];
extern u8 lbl_80440D94[];

extern s32 enable_v2_features;
extern s32 *TODoorCave01__texture_lists;
void TLobby__sub_8001FE7C(void*, int);
s32 free_collision_body_parts(void *);
s32 __dl__7TObjectFPv(void *);
void mem_free(void *p);

void TODoorCave01::free_resources() {
    if ((s32 *) TODoorCave01__texture_lists != NULL) {
        TObjPlayer::free_if_valid(*TODoorCave01__texture_lists);
        if ((s32 *) TODoorCave01__texture_lists != NULL) {
            mem_free(TODoorCave01__texture_lists);
            TODoorCave01__texture_lists = NULL;
        }
    }
    if ((u32) door_cave_shared_bml_archive != 0U) {
        TLobby__sub_8001FE7C((void*)door_cave_shared_bml_archive, 1);
        door_cave_shared_bml_archive = 0U;
    }
}

void TODoorCave01::load_resources() {
    void *o;
    TODoorCave01__texture_lists = mem_alloc(8);
    if (enable_v2_features != 0 && TLobby::is_online_ready() != 0) {
        o = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
        if (o != NULL) {
            o = load_resource_from_descriptor(o, 1, &cave_door01_resource_descriptor, 0, 0, 0);
        }
        door_cave_shared_bml_archive = (u32)o;
        TODoorCave01__texture_lists[0] = load_gvm_texture_file(lbl_80440D7C);
    } else {
        o = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
        if (o != NULL) {
            o = load_resource_from_descriptor(o, 1, &TODoorCave01__resource_descriptor, 0, 0, 0);
        }
        door_cave_shared_bml_archive = (u32)o;
        TODoorCave01__texture_lists[0] = load_gvm_texture_file(lbl_80440D94);
    }
    TODoorCave01__texture_lists[1] = *(s32 *)((s8 *)(*(void **)((s8 *)door_cave_shared_bml_archive + 0x42C)) + 0xC);
}

void *__dt__12TODoorCave01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TODoorCave01;
        ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
        free_collision_body_parts(arg0);
        ((TUnk_804B0BB8 *)arg0)->destroy_ancient_door_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80161BE4_lbl_804B13C8_size[sizeof(RecoveredGlobal_80161BE4_lbl_804B13C8) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80161BE4___vt__12TODoorCave01_size[sizeof(RecoveredGlobal_80161BE4___vt__12TODoorCave01) == 0x54 ? 1 : -1];
u8 *TODoorCave01__ct(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    init_door_base((arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80161BE4___vt__12TODoorCave01 *)&__vt__12TODoorCave01).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2F60;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&door_cave_shared_bml_archive) + 0x42C)) + 8);
    ((TODoorCave01 *)arg0)->texture_id = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&door_cave_shared_bml_archive) + 0x42C)) + 0xC);
    *(u8 **)((s8 *)arg0 + 0xBC) = (unsigned char *) ((void *) *(void **)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&door_cave_shared_bml_archive) + 0x430)) + 4));
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) ((f32) *(u32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xBC)) + 4) - lbl_805DB49C);
    ((TODoorCave01 *)arg0)->m_b8 = (f32) lbl_805DB4A8;
    init_collision_body_parts((void *) (arg0), (void *) (&TODoorCave01__collision_body_template.value), (int) (1));
    ((TUnk_804AF8A0 *)arg0)->refresh_collision_body_centers();
    ((TObjPlayer *)arg0)->reset_photon_effect();
    ((TODoorCave01 *)(arg0))->init_door_switch_binding();
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x88);
    if (temp_r0 < 0) {
        *(s32 *)((s8 *)arg0 + 0x88) = 0;
    } else if (temp_r0 > 4) {
        *(s32 *)((s8 *)arg0 + 0x88) = 4;
    }
    *(s32 *)&((TODoorCave01 *)arg0)->m_d4 = (s32) *(s32 *)((s8 *)arg0 + 0x88);
    *(s32 *)&((TODoorCave01 *)arg0)->m_d8 = (s32) (4 - *(s32 *)&((TODoorCave01 *)arg0)->m_d4);
    *(f32 *)((s8 *)arg0 + 0xDC) = (f32) lbl_805DB49C;
    ((TODoorCave01 *)arg0)->m_e0 = (f32) lbl_805DB49C;
    *(f32 *)((s8 *)arg0 + 0xE4) = (f32) lbl_805DB49C;
    ((TODoorCave01 *)arg0)->m_e8 = (f32) lbl_805DB49C;
    return arg0;
}

}
