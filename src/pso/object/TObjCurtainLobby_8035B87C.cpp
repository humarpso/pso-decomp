#include "types.h"
#include "pso/system/BmlResourceDescriptor.h"
#include "pso/object/TObjCurtainLobby.h"
#include "pso/TParticleCtrl.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TOKey.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {
extern char lbl_804798F0[];
extern char lbl_8047990C[];
extern const char *bm_obj_lobby_curtain_model_names[2];
extern BmlResourceDescriptor lobby_curtain_resource_descriptor;
extern const char *bm_obj_lobby_curtain_motion_names[1];
}

struct RecoveredGlobal_8035BACC_lbl_804F1D98 { s32 value; u8 remaining[0xC]; };
struct TObjBase8035BB_8035BB24 { char pad[0x18]; };
struct TObjCurtainLobby8035BB_8035BB24 : TObjBase8035BB_8035BB24 {
    virtual void v0(s32);
    virtual void v1(s32);
    virtual void v2(s32);
    virtual void v3(s32);
    virtual void v4(s32);
    virtual void ct(s32);
};
struct Curtain_8035B94C {
    u8 pad[0xC8];
    s32 state;
    f32 pos;
};

extern "C" {
s32 get_lobby_theme_clamped__16TObjCurtainLobbyFv(void);
s32 get_lobby_theme_clamped__16TObjCurtainLobbyFv(void);
void TObjCurtainLobby__sub_8035B8B4(void);
}

extern "C" {

void TObjCurtainLobby__sub_8035B8B4(void);
s32 post_translate_matrix(void *);
s32 scale_matrix(int, f32, f32, f32);
s32 draw_ginja_object(int);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
void TLobby__sub_8001FE7C(void*, int);
void *TObjCurtainLobby__ct(void *arg0, s32 arg1, s32 arg2);
void *__nw__7TObjectFUl(int);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
extern u32 TObjCurtainLobby__model_resource;
extern s32 curtain_lobby_type;
void *__dt__16TObjCurtainLobbyFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
s32 init_map_object_base();
extern s32 __vt__16TObjCurtainLobby[];
extern s32 TObjCurtainLobby__class_name;

#pragma push
#pragma opt_propagation off
s32 get_lobby_theme_clamped__16TObjCurtainLobbyFv(void) {
    s32 var_r3;
    var_r3 = TLobby::get_filtered_event_theme();
    if (var_r3 < 0xE) {
        if (var_r3 < 0xC) {
            return var_r3;
        }
        var_r3 = 0xC;
        return var_r3;
    }
    return var_r3;
}
#pragma pop

void TObjCurtainLobby__sub_8035B8B4(void) {  }

void TObjCurtainLobby::render() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;

    if (((s32) *(s32 *)&this->m_c8 != 0) && ((u32) *(u32 *)&this->texture_id != 0U)) {
        TParticleCtrl::begin_effect_render();
        TObjFish::set_global_param((int) (*(u32 *)&this->texture_id));
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (this->rotation_y));
        if ((s32) *(s32 *)&this->m_c8 != 3) {
            temp_f1 = *(f32 *)&this->unk_CC;
            scale_matrix((int) (0), (f32) (temp_f1), (f32) (1.0f), (f32) (temp_f1));
        }
        draw_ginja_object((int) (*(s32 *)&this->model));
        pop_matrix();
        TParticleCtrl::end_effect_render();
    }
}
void TObjCurtainLobby::run_task() {
    Curtain_8035B94C *self = (Curtain_8035B94C *)this;
    if (TObjPlayer::check_demo_mode() == 1) {
        ((void (*)(void *))TObjCurtainLobby__sub_8035B8B4)(self);
    }
    switch (self->state) {
    case 0:
        if (((s32 (*)(void *))get_lobby_theme_clamped__16TObjCurtainLobbyFv)(self) == 0xC) {
            self->state = 2;
        }
        break;
    case 2:
        self->pos += 0.1f;
        if (self->pos >= 1.0f) {
            self->pos = 1.0f;
            self->state = 3;
        }
        break;
    case 1:
        self->pos = self->pos - 0.1f;
        if (self->pos <= 0.0f) {
            self->pos = 0.0f;
            self->state = 0;
        }
        break;
    case 3:
    default:
        if (((s32 (*)(void *))get_lobby_theme_clamped__16TObjCurtainLobbyFv)(self) != 0xC) {
            self->state = 1;
        }
        break;
    }
}

extern void *tl_05;
void *TObjCurtainLobby::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = ((void *(*)(void *, void *, void *))TObjCurtainLobby__ct)(o, tl_05, arg0);
    }
    return o;
}
void TObjCurtainLobby::close_dialog_window() {
    if ((u32) TObjCurtainLobby__model_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TObjCurtainLobby__model_resource, 1);
        TObjCurtainLobby__model_resource = 0U;
    }
}
void TObjCurtainLobby::load_resources() {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = ((TAdSinglePlyChrSelectGC *)((void *)0x440))->alloc();
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &lobby_curtain_resource_descriptor, 0, 0, 0));
    }
    (*(s32 *)&TObjCurtainLobby__model_resource) = var_r0;
    curtain_lobby_type = TLobby::get_lobby_type();
}
void *__dt__16TObjCurtainLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TObjCurtainLobby;
        ((TOKey *)arg0)->destroy_key_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void *TObjCurtainLobby__ct(void *arg0, s32 arg1, s32 arg2) {
    init_map_object_base();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TObjCurtainLobby;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjCurtainLobby__class_name;
    ((TObjCurtainLobby8035BB_8035BB24 *)arg0)->ct(arg2);
    if (((s32 (*)(void *))get_lobby_theme_clamped__16TObjCurtainLobbyFv)(arg0) == 0xC) {
        *(s32 *)((s8 *)arg0 + 0xC8) = 3;
    } else {
        *(s32 *)((s8 *)arg0 + 0xC8) = 0;
    }
    *(f32 *)((s8 *)arg0 + 0xCC) = 1.0f;
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(void **)((s8 *)((void *)TObjCurtainLobby__model_resource) + 0x42C)) + 8);
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) curtain_lobby_type;
    return arg0;
}

}

extern "C" {
__declspec(section ".data") const char *bm_obj_lobby_curtain_model_names[2] = { lbl_804798F0, NULL };
BmlResourceDescriptor lobby_curtain_resource_descriptor = { lbl_8047990C, bm_obj_lobby_curtain_model_names, bm_obj_lobby_curtain_motion_names, 1, 0 };
__declspec(section ".sdata") const char *bm_obj_lobby_curtain_motion_names[1] = { NULL };
}
