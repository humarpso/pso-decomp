#include "types.h"
#include "pso/misc/TODoorAncient06_8015F3B8.h"
#include "pso/object/TObjMotion.h"
#include "pso/unk/TUnk_804B0BB8.h"
#include "pso/misc/TODoorAncient06.h"
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

struct RecoveredGlobal_8015F5C0_lbl_804B0FA8 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8015F5C0___vt__15TODoorAncient06 {
    s32 value;
    u8 remaining[0x50];
};

extern "C" {
s32 init_collision_body_parts(void *, void *, int);
void *init_door_base(void *a0);
extern RecoveredGlobal_8015F5C0_lbl_804B0FA8 TODoorAncient06__collision_body;
extern s32 __vt__15TODoorAncient06[];
extern s32 lbl_805D2F40;
extern void *TODoorAncient06__shared_resource;
extern void *TODoorAncient06__texture_lists;
extern const f32 lbl_805DB438;
extern const f32 lbl_805DB448;
u8 *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void copy_model_node(u8 *arg0, u8 *arg1);
u8 *alloc__23TAdSinglePlyChrSelectGCFv(s32);
s32 *mem_alloc(s32);
s32 load_gvm_texture_file(void *);
extern u8 lbl_80440B48[];
extern u8 lbl_80440B64[];
extern u8 door_ancient_567_resource_descriptor[];
extern void *TODoorAncient06__detached_model_nodes;
void TLobby__sub_8001FE7C(void*, int);
s32 free_collision_body_parts(void *);
s32 __dl__7TObjectFPv(void *);
void mem_free(void *p);

void TODoorAncient06::destroy() {
    if (TODoorAncient06__detached_model_nodes != NULL) {
        mem_free(TODoorAncient06__detached_model_nodes);
        TODoorAncient06__detached_model_nodes = NULL;
    }
    if (TODoorAncient06__texture_lists != NULL) {
        TObjPlayer::free_if_valid(*(s32 *)((s8 *)TODoorAncient06__texture_lists + 4));
        TObjPlayer::free_if_valid(*(s32 *)((s8 *)TODoorAncient06__texture_lists + 0));
        if (TODoorAncient06__texture_lists != NULL) {
            mem_free(TODoorAncient06__texture_lists);
            TODoorAncient06__texture_lists = NULL;
        }
    }
    if (TODoorAncient06__shared_resource != NULL) {
        TLobby__sub_8001FE7C(TODoorAncient06__shared_resource, 1);
        TODoorAncient06__shared_resource = NULL;
    }
}

#define G5918 (*(u8 **)&TODoorAncient06__shared_resource)
#define G591C (*(s32 **)&TODoorAncient06__texture_lists)
#define G5920 (*(u8 **)&TODoorAncient06__detached_model_nodes)
#define NODE(p, o) (*(u8 **)((u8 *)(p) + (o)))
void TODoorAncient06::load_resources() {
    u8 *p;
    p = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
    if (p != NULL) {
        p = load_resource_from_descriptor(p, 1, door_ancient_567_resource_descriptor, 0, 0, 0);
    }
    G5918 = p;
    G591C = mem_alloc(8);
    G591C[0] = load_gvm_texture_file(lbl_80440B48);
    G591C[1] = load_gvm_texture_file(lbl_80440B64);
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

void *__dt__15TODoorAncient06Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TODoorAncient06;
        ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
        free_collision_body_parts(arg0);
        ((TUnk_804B0BB8 *)arg0)->destroy_ancient_door_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8015F5C0_lbl_804B0FA8_size[sizeof(RecoveredGlobal_8015F5C0_lbl_804B0FA8) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8015F5C0___vt__15TODoorAncient06_size[sizeof(RecoveredGlobal_8015F5C0___vt__15TODoorAncient06) == 0x54 ? 1 : -1];
u8 *TODoorAncient06__ct(u8 *arg0, s32 arg1, s32 arg2) {
    init_door_base((arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8015F5C0___vt__15TODoorAncient06 *)&__vt__15TODoorAncient06).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2F40;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TODoorAncient06__shared_resource) + 0x42C)) + 8);
    ((TODoorAncient06 *)arg0)->texture_id = (s32) *(*(s32 * *)&TODoorAncient06__texture_lists);
    *(u8 **)((s8 *)arg0 + 0xBC) = (unsigned char *) ((void *) *(void **)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TODoorAncient06__shared_resource) + 0x430)) + 4));
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) ((f32) *(u32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xBC)) + 4) - lbl_805DB448);
    ((TODoorAncient06 *)arg0)->m_b8 = (f32) (*(f32 *)((s8 *)arg0 + 0xB4) / lbl_805DB438);
    init_collision_body_parts((void *) (arg0), (void *) (&TODoorAncient06__collision_body.value), (int) (1));
    ((TUnk_804AF8A0 *)arg0)->refresh_collision_body_centers();
    ((TObjPlayer *)arg0)->reset_photon_effect();
    ((TODoorAncient06 *)(arg0))->init_door_switch_binding();
    return arg0;
}

}
