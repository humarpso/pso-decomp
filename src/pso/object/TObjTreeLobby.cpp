#include "types.h"
#include "pso/system/BmlResourceDescriptor.h"
#include "pso/object/TObjTreeLobby.h"

extern "C" {
extern char lbl_8047A068[];
extern char lbl_8047A080[];
extern const char *bm_obj_lobby_tree_model_names[2];
extern BmlResourceDescriptor TObjTreeLobby_resource_descriptor;
extern const char *bm_obj_lobby_tree_motion_names[1];
}

struct RecoveredGlobal_80364A1C_lbl_804F2B18 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80364A1C_lbl_804F2B18_size[sizeof(RecoveredGlobal_80364A1C_lbl_804F2B18) == 0x10 ? 1 : -1];

struct TObjBase80364A_80364A74 { char pad[0x18]; };
struct TObjTreeLobby80364A_80364A74 : TObjBase80364A_80364A74 {
    virtual void v0(s32);
    virtual void v1(s32);
    virtual void v2(s32);
    virtual void v3(s32);
    virtual void v4(s32);
    virtual void ct(s32);
};

struct Base_80364B6C { char pad[0x18]; };

struct Ctrl_80364B6C : Base_80364B6C {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21(void *, void *, s32, s32, s32);
};

struct P_80364B6C { s32 a; f32 b; };

struct Q_80364B6C { s32 a; s32 b; };

struct Obj_80364B6C { u8 pad0[0x1C]; f32 f1C; u16 h20; };

struct Obj_803648B8 {
    u8 pad0[0xC8];
    s32 state;
    f32 cc;
};

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFv(void *);
s32 get_lobby_type__6TLobbyFv(void);
extern u32 TObjTreeLobby__instance;
extern s32 tree_lobby_type;
s32 is_connected__6TLobbyFv();
s32 is_lobby_obj_active__6TLobbyFv();
}

extern "C" {

void TLobby__sub_8001FE7C(void*, int);
s32 post_translate_matrix(void *);
s32 scale_matrix(int, f32, f32, f32);
s32 draw_ginja_object(int);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
void *TObjTreeLobby__ct(void *arg0, s32 arg1, s32 arg2);
void *__nw__7TObjectFUl(int);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 set_global_param__8TObjFishFl(int);
void queue_destruction__7TObjectFv(void *);
Ctrl_80364B6C *get_player_by_client_id(u16);
void *TObjTreeLobby__sub_80364BE8(void *arg0, s16 arg1);
void *__dt__13TObjTreeLobbyFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void destroy_key_base__5TOKeyFs(void *, int);
s32 init_map_object_base();
s32 is_lobby_event_active();
extern s32 __vt__13TObjTreeLobby[];
extern s32 TObjTreeLobby__class_name;
extern s32 lbl_804F2B60[];

void TObjTreeLobby::render() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;

    if ((s32) *(s32 *)((s8 *)arg0 + 0xC8) != 0) {
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFl((int) (*(s32 *)((s8 *)arg0 + 0x24)));
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
        if ((s32) *(s32 *)((s8 *)arg0 + 0xC8) != 3) {
            temp_f1 = *(f32 *)((s8 *)arg0 + 0xCC);
            scale_matrix((int) (0), (f32) (temp_f1), (f32) (1.0f), (f32) (temp_f1));
        }
        draw_ginja_object((int) (*(s32 *)((s8 *)arg0 + 0x34)));
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
    }
}

extern void *tl_05;

void TObjTreeLobby::run_task() {
    Obj_803648B8 *self = (Obj_803648B8 *)this;
    switch (self->state) {
    case 0:
        if (is_connected__6TLobbyFv() != 0) {
            self->state = 2;
        }
        break;
    case 2:
        self->cc += 0.1f;
        if (self->cc >= 1.0f) {
            self->cc = 1.0f;
            self->state = 3;
        }
        break;
    case 1:
        self->cc -= 0.1f;
        if (self->cc <= 0.0f) {
            self->cc = 0.0f;
            self->state = 0;
        }
        break;
    case 3:
    default:
        if (is_lobby_obj_active__6TLobbyFv() != 0) {
            self->state = 1;
        }
        break;
    }
}

void *TObjTreeLobby::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = ((void *(*)(void *, void *, void *))TObjTreeLobby__ct)(o, tl_05, arg0);
    }
    return o;
}

extern u32 TObjTreeLobby__instance;

void TObjTreeLobby::destroy_static_instance() {
    if ((u32) TObjTreeLobby__instance != 0U) {
        TLobby__sub_8001FE7C((void*)TObjTreeLobby__instance, 1);
        TObjTreeLobby__instance = 0U;
    }
}
void TObjTreeLobby::load_resources() {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &TObjTreeLobby_resource_descriptor, 0, 0, 0));
    }
    (*(s32 *)&TObjTreeLobby__instance) = var_r0;
    tree_lobby_type = get_lobby_type__6TLobbyFv();
}

void *__dt__13TObjTreeLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TObjTreeLobby;
        destroy_key_base__5TOKeyFs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void *TObjTreeLobby__ct(void *arg0, s32 arg1, s32 arg2) {
    init_map_object_base();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TObjTreeLobby;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjTreeLobby__class_name;
    ((TObjTreeLobby80364A_80364A74 *)arg0)->ct(arg2);
    if (is_lobby_event_active() != 0) {
        *(s32 *)((s8 *)arg0 + 0xC8) = 0;
    } else {
        *(s32 *)((s8 *)arg0 + 0xC8) = 3;
    }
    *(f32 *)((s8 *)arg0 + 0xCC) = 1.0f;
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(void **)((s8 *)((void *)TObjTreeLobby__instance) + 0x42C)) + 8);
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) tree_lobby_type;
    return arg0;
}
void TObjTreeLobby::send_destroy_to_player() {
    Obj_80364B6C *arg0 = (Obj_80364B6C *)this;
    Ctrl_80364B6C *c = get_player_by_client_id(arg0->h20);
    if (c != 0) {
        P_80364B6C sp10;
        sp10.a = 0x15;
        sp10.b = arg0->f1C;
        P_80364B6C sp8 = sp10;
        c->v21(c, &sp8, 0, -1, -1);
        queue_destruction__7TObjectFv(arg0);
    }
}

void *TObjTreeLobby__sub_80364BE8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804F2B60;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

extern "C" {
__declspec(section ".data") const char *bm_obj_lobby_tree_model_names[2] = { lbl_8047A068, NULL };
BmlResourceDescriptor TObjTreeLobby_resource_descriptor = { lbl_8047A080, bm_obj_lobby_tree_model_names, bm_obj_lobby_tree_motion_names, 1, 0 };
__declspec(section ".sdata") const char *bm_obj_lobby_tree_motion_names[1] = { NULL };
}
