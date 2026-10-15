#include "types.h"
#include "pso/system/BmlResourceDescriptor.h"
#include "pso/object/TObjKabochaLobby.h"

extern "C" {
extern char lbl_80479170[];
extern char lbl_80479184[];
extern const char *bm_obj_lobby_kabocha_model_names[2];
extern BmlResourceDescriptor lobby_pumpkin_resource_descriptor;
extern const char *bm_obj_lobby_kabocha_motion_names[1];
}

struct VBase18_8035346c { char pad[0x18]; };
struct VObj18_8035346c : VBase18_8035346c {
    virtual s32 m0();
    virtual s32 m1();
    virtual s32 m2();
    virtual s32 m3();
    virtual s32 m4();
    virtual s32 m5();
    virtual s32 m6();
    virtual s32 m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_80353684_lbl_804F11E8 { s32 value; u8 remaining[0xC]; };
struct TObjBase803537_803536DC { char pad[0x18]; };
struct TObjKabochaLobby803537_803536DC : TObjBase803537_803536DC {
    virtual void v0(s32);
    virtual void v1(s32);
    virtual void v2(s32);
    virtual void v3(s32);
    virtual void v4(s32);
    virtual void ct(s32);
};
struct Kabocha_80353520 {
    u8 pad0[0xC8];
    s32 state;
    f32 scale;
};

extern "C" {
s32 get_filtered_event_theme__6TLobbyFv(void);
}

extern "C" {

s32 post_translate_matrix(void *);
s32 scale_matrix(int, f32, f32, f32);
s32 draw_ginja_object(int);
void *TObjKabochaLobby__ct(void *arg0, s32 arg1, s32 arg2);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
void *__nw__7TObjectFUl(int);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 set_global_param__8TObjFishFl(int);
void TLobby__sub_8001FE7C(void*, int);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFv(void *);
s32 get_lobby_type__6TLobbyFv(void);
extern u32 TObjKabochaLobby__model_resource;
void *__dt__16TObjKabochaLobbyFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_key_base__5TOKeyFs(void *, int);
s32 init_map_object_base();
extern s32 __vt__16TObjKabochaLobby[];
extern s32 lbl_805D4384;

extern s32 TObjKabochaLobby__lobby_type;

void TObjKabochaLobby::render() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;

    if (((s32) *(s32 *)((s8 *)arg0 + 0xC8) != 0) && ((u32) TObjKabochaLobby__lobby_type != 0U) && (((VObj18_8035346c *) arg0)->m8(*(f32 *)((s8 *)arg0 + 0xC0), *(f32 *)((s8 *)arg0 + 0xC4)) != 0)) {
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

void TObjKabochaLobby::run_task() {
    Kabocha_80353520 *o = (Kabocha_80353520 *)this;
    switch (o->state) {
    case 0:
        if (get_filtered_event_theme__6TLobbyFv() == 5) {
            o->state = 2;
        }
        break;
    case 2:
        {
        o->scale += 0.1f;
        if (o->scale >= 1.0f) {
            o->scale = 1.0f;
            o->state = 3;
        }
        }
        break;
    case 1:
        {
        o->scale -= 0.1f;
        if (o->scale <= 0.0f) {
            o->scale = 0.0f;
            o->state = 0;
        }
        }
        break;
    case 3:
    default:
        if (get_filtered_event_theme__6TLobbyFv() != 5) {
            o->state = 1;
        }
        break;
    }
}

void *TObjKabochaLobby::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = ((void *(*)(void *, void *, void *))TObjKabochaLobby__ct)(o, tl_05, arg0);
    }
    return o;
}

void TObjKabochaLobby::unload_static_data() {
    if ((u32) TObjKabochaLobby__model_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TObjKabochaLobby__model_resource, 1);
        TObjKabochaLobby__model_resource = 0U;
    }
}
void TObjKabochaLobby::load_resources() {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &lobby_pumpkin_resource_descriptor, 0, 0, 0));
    }
    (*(s32 *)&TObjKabochaLobby__model_resource) = var_r0;
    TObjKabochaLobby__lobby_type = get_lobby_type__6TLobbyFv();
}
void *__dt__16TObjKabochaLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TObjKabochaLobby;
        destroy_key_base__5TOKeyFs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void *TObjKabochaLobby__ct(void *arg0, s32 arg1, s32 arg2) {
    init_map_object_base();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TObjKabochaLobby;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D4384;
    ((TObjKabochaLobby803537_803536DC *)arg0)->ct(arg2);
    if (get_filtered_event_theme__6TLobbyFv() == 5) {
        *(s32 *)((s8 *)arg0 + 0xC8) = 3;
    } else {
        *(s32 *)((s8 *)arg0 + 0xC8) = 0;
    }
    *(f32 *)((s8 *)arg0 + 0xCC) = 1.0f;
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(void **)((s8 *)((void *)TObjKabochaLobby__model_resource) + 0x42C)) + 8);
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) TObjKabochaLobby__lobby_type;
    return arg0;
}

}

extern "C" {
__declspec(section ".data") const char *bm_obj_lobby_kabocha_model_names[2] = { lbl_80479170, NULL };
BmlResourceDescriptor lobby_pumpkin_resource_descriptor = { lbl_80479184, bm_obj_lobby_kabocha_model_names, bm_obj_lobby_kabocha_motion_names, 1, 0 };
}
