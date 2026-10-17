#include "types.h"
#include "pso/misc/TODoorAncient05_8015EE50.h"
#include "pso/object/TObjMotion.h"
#include "pso/unk/TUnk_804B0BB8.h"
#include "pso/misc/TODoorAncient05.h"
#include "pso/misc/TODoorAncient01.h"
#include "pso/player/TObjPlayer.h"

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

struct RecoveredGlobal_8015F048_lbl_804B0F28 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8015F048___vt__15TODoorAncient05 {
    s32 value;
    u8 remaining[0x50];
};

extern "C" {
s32 init_collision_body_parts(void *, void *, int);
void *init_door_base(void *a0);
extern RecoveredGlobal_8015F048_lbl_804B0F28 TODoorAncient05__collision_body;
extern s32 __vt__15TODoorAncient05[];
extern s32 lbl_805D2F38;
extern void *door_ancient05_bml_resource;
extern void *TODoorAncient05__switch_texture_lists;
extern const f32 lbl_805DB418;
extern const f32 lbl_805DB428;
u8 *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void copy_model_node(u8 *arg0, u8 *arg1);
u8 *alloc__23TAdSinglePlyChrSelectGCFv(s32);
void *mem_alloc(u32 size);
u8 *load_gvm_texture_file(s32 arg0);
extern u8 lbl_80440B10[];
extern u8 door_ancient_567_resource_descriptor[];
extern void *door_ancient05_static_model_nodes;
void TLobby__sub_8001FE7C(void*, int);
s32 free_collision_body_parts(void *);
s32 __dl__7TObjectFPv(void *);
void mem_free(void *p);

void TODoorAncient05::reset() {
    if (door_ancient05_static_model_nodes != NULL) {
        mem_free(door_ancient05_static_model_nodes);
        door_ancient05_static_model_nodes = NULL;
    }
    if (TODoorAncient05__switch_texture_lists != NULL) {
        TObjPlayer::free_if_valid(*(s32 *)((s8 *)TODoorAncient05__switch_texture_lists + 4));
        if (TODoorAncient05__switch_texture_lists != NULL) {
            mem_free(TODoorAncient05__switch_texture_lists);
            TODoorAncient05__switch_texture_lists = NULL;
        }
    }
    if (door_ancient05_bml_resource != NULL) {
        TLobby__sub_8001FE7C(door_ancient05_bml_resource, 1);
        door_ancient05_bml_resource = NULL;
    }
}

#define G5918 (*(u8 **)&door_ancient05_bml_resource)
#define G591C (*(s32 **)&TODoorAncient05__switch_texture_lists)
#define G5920 (*(u8 **)&door_ancient05_static_model_nodes)
#define NODE(p, o) (*(u8 **)((u8 *)(p) + (o)))
void TODoorAncient05::load_resources() {
    u8 *p;
    s32 *buf;
    p = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
    if (p != NULL) {
        p = load_resource_from_descriptor(p, 1, door_ancient_567_resource_descriptor, 0, 0, 0);
    }
    G5918 = p;
    buf = (s32 *)mem_alloc(8);
    G591C = buf;
    buf[0] = *(s32 *)(NODE(G5918, 0x42C) + 0xC);
    G591C[1] = (s32)load_gvm_texture_file((s32)lbl_80440B10);
    G5920 = (u8 *)mem_alloc(0xA8);
    if (G5918 != NULL && G5920 != NULL) {
        copy_model_node(G5920, NODE(NODE(G5918, 0x42C), 8));
        *(s32 *)(G5920 + 0x2C) = 0;
        *(s32 *)(G5920 + 0) |= 0x10;
        copy_model_node(G5920 + 0x38, NODE(NODE(NODE(G5918, 0x42C), 8), 0x2C));
        *(s32 *)(G5920 + 0x68) = 0;
        copy_model_node(G5920 + 0x70, NODE(NODE(NODE(NODE(G5918, 0x42C), 8), 0x2C), 0x30));
    }
}

void *__dt__15TODoorAncient05Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TODoorAncient05;
        ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
        free_collision_body_parts(arg0);
        ((TUnk_804B0BB8 *)arg0)->destroy_ancient_door_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8015F048_lbl_804B0F28_size[sizeof(RecoveredGlobal_8015F048_lbl_804B0F28) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8015F048___vt__15TODoorAncient05_size[sizeof(RecoveredGlobal_8015F048___vt__15TODoorAncient05) == 0x54 ? 1 : -1];
u8 *TODoorAncient05__ct(u8 *arg0, s32 arg1, s32 arg2) {
    init_door_base((arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8015F048___vt__15TODoorAncient05 *)&__vt__15TODoorAncient05).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2F38;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&door_ancient05_bml_resource) + 0x42C)) + 8);
    ((TODoorAncient05 *)arg0)->texture_id = (s32) *(*(s32 * *)&TODoorAncient05__switch_texture_lists);
    *(u8 **)((s8 *)arg0 + 0xBC) = (unsigned char *) ((void *) *(void **)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&door_ancient05_bml_resource) + 0x430)) + 4));
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) ((f32) *(u32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xBC)) + 4) - lbl_805DB428);
    ((TODoorAncient05 *)arg0)->m_b8 = (f32) (*(f32 *)((s8 *)arg0 + 0xB4) / lbl_805DB418);
    init_collision_body_parts((void *) (arg0), (void *) (&TODoorAncient05__collision_body.value), (int) (1));
    ((TUnk_804AF8A0 *)arg0)->refresh_collision_body_centers();
    ((TObjPlayer *)arg0)->reset_photon_effect();
    ((TODoorAncient05 *)(arg0))->init_door_switch_binding();
    return arg0;
}

}
