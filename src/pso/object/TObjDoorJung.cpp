#include "types.h"
#include "pso/object/TObjDoorJung.h"
#include "pso/unk/TUnk_804B0BB8.h"
#include "pso/TParticleCtrl.h"
#include "pso/misc/TODoorAncient01.h"
#include "pso/misc/TScene.h"
#include "pso/object/TObjFish.h"
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

struct RecoveredGlobal_8018F9CC_lbl_804B788C {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8018F9CC___vt__12TObjDoorJung {
    s32 value;
    u8 remaining[0x54];
};

struct VBase_8018F644 { char pad[0x18]; };
struct VObj_8018F644 : VBase_8018F644 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Jung_8018F808 { u8 pad0[0xC8]; s32 fC8; u8 padCC[4]; u32 fD0; s32 fD4; };

extern "C" {
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_door_base(void *);
void clamp_state__12TObjDoorJungFPv(void *arg0);
extern RecoveredGlobal_8018F9CC_lbl_804B788C TObjDoorJung__collision_desc;
extern s32 __vt__12TObjDoorJung[];
extern s32 TObjDoorJung__class_name;
u8 *TObjDoorJung__ct(u8 *arg0, s32 arg1, s32 arg2);
void set_indexed_flags(void *, int, int);
u8 is_current_floor_switch_set(int);
void TObjDoorJung__vt12(Jung_8018F808 *arg0);
struct Node_8018F4AC;
Node_8018F4AC *get_bml_model(void *, int);
void free_children__12TObjDoorJungFPvPv(s32, u16);
void PPCSync();
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 draw_ginja_object(void *);
extern s32 TObjDoorJung__child_table[];
extern s32 actor_frame_tick;
extern void *TObjDoorJung__resource_handle;
extern s32 lbl_805D5BD4;
extern s32 door_jung_child_list;
extern s32 lbl_805D5BDC;
extern void *TObjDoorJung__door_scene_buffer;
extern s32 lbl_805D5BE4;
extern s32 lbl_805D5BE8;
extern s32 lbl_805D5BEC;
extern s32 lbl_805D5BF0;
extern const f32 lbl_805DBDF8;
extern const f32 lbl_805DBDFC;

}

extern "C" {

struct Base_8018F458 { char pad[0x18]; };
struct VObj_8018F458 : Base_8018F458 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
};

void *__dt__12TObjDoorJungFv(void *arg0, s16 arg1);
void clamp_state__12TObjDoorJungFPv(void *arg0);
void free_buffers__12TObjDoorJungFv(void);
void run_task__12TObjDoorJungFv(u8 *arg0);
s32 TLobby__sub_8001FE7C(void *, s16);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(void *);
s32 minimap_render_gate(void *, s32, u16, s32, s32);
s32 __dl__7TObjectFPv(void *);

extern void *TObjDoorJung__resource_handle;
extern void *TObjDoorJung__door_scene_buffer;

void free_buffers__12TObjDoorJungFv(void) {
    if (TObjDoorJung__door_scene_buffer != NULL) {
        ((TScene *)TObjDoorJung__door_scene_buffer)->destroy_buffers(1);
        TObjDoorJung__door_scene_buffer = NULL;
    }
    if (TObjDoorJung__resource_handle != NULL) {
        TLobby__sub_8001FE7C(TObjDoorJung__resource_handle, 1);
        TObjDoorJung__resource_handle = NULL;
    }
}

void clamp_state__12TObjDoorJungFPv(void *arg0) {
    *(s32 *)((s8 *)arg0 + 0xD4) = (s32) *(s32 *)((s8 *)arg0 + 0x88);
    if ((s32) *(s32 *)((s8 *)arg0 + 0xD4) < 0) {
        *(s32 *)((s8 *)arg0 + 0xD4) = 0;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0xD4) > 4) {
        *(s32 *)((s8 *)arg0 + 0xD4) = 4;
    }
}

void TObjDoorJung::render() {
    u8 *arg0 = (u8 *)this;
    s32 i;
    s32 j;

    if (((VObj_8018F644 *)arg0)->m8(lbl_805DBDF8, lbl_805DBDFC) != 0) {
        if (*(s32 *)((s8 *)arg0 + 0xD0) & 1) {
            if (lbl_805D5BF0 >= 0) {
                free_children__12TObjDoorJungFPvPv(door_jung_child_list, lbl_805D5BF0);
            }
        } else if (lbl_805D5BEC >= 0) {
            free_children__12TObjDoorJungFPvPv(door_jung_child_list, lbl_805D5BEC);
        }
        if (actor_frame_tick != lbl_805D5BDC) {
            if (TObjDoorJung__door_scene_buffer != NULL) {
                ((TScene *)TObjDoorJung__door_scene_buffer)->offset_position(0, -0xA);
            }
            lbl_805D5BDC = actor_frame_tick;
            PPCSync();
        }
        for (i = 0; i < *(s32 *)((s8 *)arg0 + 0xD4); i++) {
            if (is_current_floor_switch_set((u16)(*(s32 *)((s8 *)arg0 + 0xC8) + i)) == 1) {
                if (lbl_805D5BE8 >= 0) {
                    free_children__12TObjDoorJungFPvPv(TObjDoorJung__child_table[i], lbl_805D5BE8);
                }
            } else if (lbl_805D5BE4 >= 0) {
                free_children__12TObjDoorJungFPvPv(TObjDoorJung__child_table[i], lbl_805D5BE4);
            }
        }
        for (j = *(s32 *)((s8 *)arg0 + 0xD4); j < 4; j++) {
            if (lbl_805D5BE8 >= 0) {
                free_children__12TObjDoorJungFPvPv(TObjDoorJung__child_table[j], lbl_805D5BE8);
            }
        }
        TObjFish::set_global_param((s32)((void *)lbl_805D5BD4));
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        draw_ginja_object(get_bml_model(TObjDoorJung__resource_handle, 0));
        TParticleCtrl::begin_effect_render();
        draw_ginja_object(get_bml_model(TObjDoorJung__resource_handle, 1));
        TParticleCtrl::end_effect_render();
        pop_matrix();
    }
}

extern s32 switch_doors_force_closed;

void TObjDoorJung__vt12(Jung_8018F808 *arg0) {
    s32 ok = 1;
    s32 i = 0;
    while (i < arg0->fD4) {
        s32 t = is_current_floor_switch_set((u16)(arg0->fC8 + i)) - 1;
        i++;
        ok = (t == 0) ? (ok & 1) : 0;
    }
    if (ok != 0) {
        arg0->fD0 |= 1;
        set_indexed_flags(arg0, 0, 8);
        return;
    }
    arg0->fD0 &= ~1;
    ((TObjPlayer *)arg0)->clear_player_status_flag((s32)(0), (s32)(8));
}

void TObjDoorJung::run_task() {
    u8 *arg0 = (u8 *)this;
    if ((s32) switch_doors_force_closed != 0) {
        *(s32 *)((s8 *)arg0 + 0xD0) = (s32) (*(s32 *)((s8 *)arg0 + 0xD0) & 0xFFFFFFFE);
        ((TObjPlayer *)arg0)->clear_player_status_flag(0, 8);
    } else {
        ((VObj_8018F458 *)arg0)->m12();
    }
    if (*(s32 *)((s8 *)arg0 + 0xD0) & 1) {
        minimap_render_gate(arg0 + 0x38, 0xFF00FF00, (u16) *(s32 *)((s8 *)arg0 + 0x60), 0, 0);
        return;
    }
    minimap_render_gate(arg0 + 0x38, 0xFFFF0000, (u16) *(s32 *)((s8 *)arg0 + 0x60), 0, 0);
}

extern s32 __vt__12TObjDoorJung[];

void *__dt__12TObjDoorJungFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TObjDoorJung;
        unregister_object_by_id(arg0);
        free_collision_body_parts(arg0);
        ((TUnk_804B0BB8 *)arg0)->destroy_ancient_door_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8018F9CC_lbl_804B788C_size[sizeof(RecoveredGlobal_8018F9CC_lbl_804B788C) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8018F9CC___vt__12TObjDoorJung_size[sizeof(RecoveredGlobal_8018F9CC___vt__12TObjDoorJung) == 0x58 ? 1 : -1];
u8 *TObjDoorJung__ct(u8 *arg0, s32 arg1, s32 arg2) {
    init_door_base((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8018F9CC___vt__12TObjDoorJung *)&__vt__12TObjDoorJung).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjDoorJung__class_name;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    init_collision_body_parts((void *) (arg0), (void *) (&TObjDoorJung__collision_desc.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    ((TObjPlayer *)arg0)->reset_photon_effect();
    ((VObj_18_4a4f5b *)(arg0))->m17();
    clamp_state__12TObjDoorJungFPv((void *) (arg0));
    return arg0;
}

}
