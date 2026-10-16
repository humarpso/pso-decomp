#include "types.h"
#include "pso/system/BmlResourceDescriptor.h"
#include "pso/misc/TODoorMachine02.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TODoorAncient01.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
extern char lbl_80440F70[];
extern char lbl_80440F84[];
extern char lbl_80440F98[];
extern const char *bm_fs_obj_ki_doa2_model_names[2];
extern const char *bm_fs_obj_ki_doa2_motion_names[2];
extern BmlResourceDescriptor TODoorMachine02_resource_descriptor;
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

struct RecoveredGlobal_80163760_lbl_804B16C8 {
    s32 value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80163760___vt__15TODoorMachine02 {
    s32 value;
    u8 remaining[0x50];
};

struct VBase_80163408 { char pad[0x18]; };

struct VObj_80163408 : VBase_80163408 {
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

struct Node_80163408 {
    u8 pad0[4];
    s32 f4;
    u8 f8[0x2C - 8];
    Node_80163408 *next2C;
    Node_80163408 *next30;
};

struct Model_80163408 {
    u8 pad[0x2C];
    Node_80163408 *root;
};

struct Door_80163408 {
    u8 pad0[0x34];
    Model_80163408 *model;
    u8 f38[0x60 - 0x38];
    s32 f60;
    u8 pad64[0xAC - 0x64];
    s32 fAC;
    f32 fB0;
    u8 padB4[0xBC - 0xB4];
    s32 fBC;
    f32 fC0;
    f32 fC4;
    u8 padC8[0xD0 - 0xC8];
    s32 fD0;
    u8 fD4[4];
};

extern "C" {
s32 set_indexed_flags(void *, int, int);
s32 is_any_player_within_radius_xz(f32);
s32 play_sound_effect(s32, void *, s32, s32);
extern const f32 lbl_805DB514;
extern const f32 lbl_805DB518;
extern const f32 lbl_805DB51C;
extern const f32 lbl_805DB520;
void play_proximity_sound__15TODoorMachine02Fv(u8 *arg0);
s32 refresh_collision_body_centers(void *);
s32 init_collision_body_parts(void *, void *, int);
s32 init_door_base(void *);
extern RecoveredGlobal_80163760_lbl_804B16C8 lbl_804B16C8;
extern s32 __vt__15TODoorMachine02[];
extern s32 TODoorMachine02__class_name;
extern u32 door_machine02_model_resource;
extern const f32 lbl_805DB51C;
extern const f32 lbl_805DB528;
u8 *TODoorMachine02__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 is_in_view_depth__13TUnk_804AFBF8Ff(void *, f32);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 draw_ginja_model(int);
s32 draw_ginja_model_with_motion(void *, int, f32);
s32 set_chunk_material_color(void *);
extern char chunk_material_color_half_alpha_f32[];
extern s32 lbl_805D5660;
extern s32 *door_machine02_texture_param_table;
extern s32 model_render_flags;
extern const f32 lbl_805DB524;
void *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFv(s32);
void *mem_alloc(s32);
s32 load_gvm_texture_file(void *);
extern u8 lbl_80440FD8[];
extern u8 lbl_80440FF0[];
extern u8 bm_fs_obj_ki_doa2_a_resource_descriptor[];
extern s32 enable_v2_features;
extern u32 door_machine02_model_resource;
extern s32 *door_machine02_texture_param_table;
}

extern "C" {

void vfunc_17__15TODoorMachine02Fv(u8 *arg0);
void vfunc_20__15TODoorMachine02Fv(void);
void *__dt__15TODoorMachine02Fv(void *arg0, s16 arg1);
s32 play_sound_effect(s32, void *, s32, s32);
void TLobby__sub_8001FE7C(void*, int);
s32 is_any_player_within_radius_xz(f32);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(s32 *);
s32 __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
s32 mem_free(void*);

void TODoorMachine02::vfunc_20() {  }

extern const f32 lbl_805DB510;

void TODoorMachine02::vfunc_17() {
    u8 *arg0 = (u8 *)this;
    if (!(this->m_d0 & 1) || (is_any_player_within_radius_xz(lbl_805DB510) != 1)) {
        *(s32 *)&this->m_ac = 3;
        ((TObjPlayer *)arg0)->clear_player_status_flag(0, 8);
        play_sound_effect(0x4004BC01, arg0 + 0x38, 0, 0);
    }
}

extern void *tl_05;

void TODoorMachine02::play_proximity_sound() {
    u8 *arg0 = (u8 *)this;
    if ((this->m_d0 & 1) && (is_any_player_within_radius_xz((f32) (lbl_805DB514)) == 1)) {
        *(s32 *)&this->m_ac = 1;
        set_indexed_flags((void *) (arg0), (int) (0), (int) (8));
        play_sound_effect((s32)((int) (0x4004BC01)), (void *)((void *) (arg0 + 0x38)), (s32)((int) (0)), (s32)((int) (0)));
    }
    if (this->m_d0 & 0x10000) {
        *(f32 *)((s8 *)arg0 + 0xD8) = (f32) (*(f32 *)((s8 *)arg0 + 0xD8) + lbl_805DB518);
        if (lbl_805DB51C <= *(f32 *)((s8 *)arg0 + 0xD8)) {
            this->m_d0 = (s32) (this->m_d0 & 0xFFFEFFFF);
        }
    } else {
        *(f32 *)((s8 *)arg0 + 0xD8) = (f32) (*(f32 *)((s8 *)arg0 + 0xD8) - lbl_805DB518);
        if (*(f32 *)((s8 *)arg0 + 0xD8) <= lbl_805DB520) {
            this->m_d0 = (s32) (this->m_d0 | 0x10000);
        }
    }
}

void TODoorMachine02::render() {
    Door_80163408 *arg0 = (Door_80163408 *)this;
    s32 flag;
    Node_80163408 *n;
    if (((VObj_80163408 *)arg0)->m8(arg0->fC0, arg0->fC4) != 0 && is_in_view_depth__13TUnk_804AFBF8Ff(arg0, lbl_805DB524) != 0) {
        push_matrix();
        post_translate_matrix(arg0->f38);
        rotate_matrix_y(0, arg0->f60);
        flag = arg0->fD0 & 1;
        TObjFish::set_global_param(door_machine02_texture_param_table[arg0->fD0 & 1]);
        if (arg0->fAC == 0) {
            n = arg0->model->root;
            post_translate_matrix(n->f8);
            draw_ginja_model(n->f4);
            if (flag != 1) {
                s32 id = model_render_flags;
                lbl_805D5660 = id;
                model_render_flags = id | 0x10;
                set_chunk_material_color(arg0->fD4);
            }
            push_matrix();
            n = n->next2C;
            post_translate_matrix(n->f8);
            draw_ginja_model(n->f4);
            pop_matrix();
            push_matrix();
            n = n->next30;
            post_translate_matrix(n->f8);
            draw_ginja_model(n->f4);
            pop_matrix();
            if (flag != 1) {
                set_chunk_material_color(chunk_material_color_half_alpha_f32);
                model_render_flags = lbl_805D5660;
            }
            n = arg0->model->root->next30;
            post_translate_matrix(n->f8);
            draw_ginja_model(n->f4);
        } else {
            draw_ginja_model_with_motion(arg0->model, arg0->fBC, arg0->fB0);
        }
        pop_matrix();
    }
}

void *TODoorMachine02::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE4);
    if (o != NULL) {
        o = TODoorMachine02__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 door_machine02_model_resource;
extern s32 *door_machine02_texture_param_table;

void TODoorMachine02::free_statics() {
    if ((s32 *) door_machine02_texture_param_table != NULL) {
        TObjPlayer::free_if_valid(*door_machine02_texture_param_table);
        if ((s32 *) door_machine02_texture_param_table != NULL) {
            mem_free((void*)door_machine02_texture_param_table);
            door_machine02_texture_param_table = NULL;
        }
    }
    if ((u32) door_machine02_model_resource != 0U) {
        TLobby__sub_8001FE7C((void*)door_machine02_model_resource, 1);
        door_machine02_model_resource = 0U;
    }
}

extern s32 __vt__15TODoorMachine02[];

void TODoorMachine02::load_resources() {
    void *o;
    door_machine02_texture_param_table = (s32 *)mem_alloc(8);
    if (enable_v2_features == 1 && TLobby::is_online_ready() != 0) {
        o = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
        if (o != NULL) {
            o = load_resource_from_descriptor(o, 1, bm_fs_obj_ki_doa2_a_resource_descriptor, 0, 0, 0);
        }
        door_machine02_model_resource = (u32)o;
        door_machine02_texture_param_table[0] = load_gvm_texture_file(lbl_80440FD8);
    } else {
        o = alloc__23TAdSinglePlyChrSelectGCFv(0x440);
        if (o != NULL) {
            o = load_resource_from_descriptor(o, 1, &TODoorMachine02_resource_descriptor, 0, 0, 0);
        }
        door_machine02_model_resource = (u32)o;
        door_machine02_texture_param_table[0] = load_gvm_texture_file(lbl_80440FF0);
    }
    door_machine02_texture_param_table[1] = *(s32 *)(*(u8 **)((u8 *)door_machine02_model_resource + 0x42C) + 0xC);
}

void *__dt__15TODoorMachine02Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TODoorMachine02;
        unregister_object_by_id((s32 *)arg0);
        free_collision_body_parts(arg0);
        ((TODoorAncient01 *)arg0)->destroy_ancient_door_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80163760_lbl_804B16C8_size[sizeof(RecoveredGlobal_80163760_lbl_804B16C8) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80163760___vt__15TODoorMachine02_size[sizeof(RecoveredGlobal_80163760___vt__15TODoorMachine02) == 0x54 ? 1 : -1];
u8 *TODoorMachine02__ct(u8 *arg0, s32 arg1, s32 arg2) {
    init_door_base((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80163760___vt__15TODoorMachine02 *)&__vt__15TODoorMachine02).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TODoorMachine02__class_name;
    ((VObj_18_4a4f5b *)(arg0))->m5(arg2);
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&door_machine02_model_resource) + 0x42C)) + 8);
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&door_machine02_model_resource) + 0x42C)) + 0xC);
    *(u8 **)((s8 *)arg0 + 0xBC) = (unsigned char *) ((void *) *(void **)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&door_machine02_model_resource) + 0x430)) + 4));
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) ((f32) *(u32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0xBC)) + 4) - lbl_805DB51C);
    *(f32 *)((s8 *)arg0 + 0xB8) = (f32) lbl_805DB528;
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804B16C8.value), (int) (1));
    refresh_collision_body_centers((void *) (arg0));
    ((TObjPlayer *)arg0)->reset_photon_effect();
    ((VObj_18_4a4f5b *)(arg0))->m17();
    *(f32 *)((s8 *)arg0 + 0xD4) = (f32) lbl_805DB51C;
    *(f32 *)((s8 *)arg0 + 0xD8) = (f32) lbl_805DB51C;
    *(f32 *)((s8 *)arg0 + 0xDC) = (f32) lbl_805DB51C;
    *(f32 *)((s8 *)arg0 + 0xE0) = (f32) lbl_805DB51C;
    return arg0;
}

}

extern "C" {
__declspec(section ".data") const char *bm_fs_obj_ki_doa2_model_names[2] = { lbl_80440F70, NULL };
__declspec(section ".data") const char *bm_fs_obj_ki_doa2_motion_names[2] = { lbl_80440F84, NULL };
BmlResourceDescriptor TODoorMachine02_resource_descriptor = { lbl_80440F98, bm_fs_obj_ki_doa2_model_names, bm_fs_obj_ki_doa2_motion_names, 1, 1 };
}
