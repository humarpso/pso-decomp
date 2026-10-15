#include "types.h"

struct RecoveredGlobal_80350808_lbl_804F0DF0 { s32 value; u8 remaining[0xC]; };
struct TObjBase803508_80350858 { char pad[0x18]; };
struct TObjRainbowLobby803508_80350858 : TObjBase803508_80350858 {
    virtual void v0(s32);
    virtual void v1(s32);
    virtual void v2(s32);
    virtual void v3(s32);
    virtual void v4(s32);
    virtual void ct(s32);
};
struct Obj_803506A4 { u8 pad[0xC8]; s32 state; f32 val; };

extern "C" {
s32 is_connected__6TLobbyFv();
s32 is_lobby_obj_active__6TLobbyFv();
void run_task__16TObjRainbowLobbyFv(Obj_803506A4 *arg0);
}

extern "C" {

void *create__16TObjRainbowLobbyFPv(void *arg0);
void render__16TObjRainbowLobbyFv(u8 *arg0);
s32 post_translate_matrix(void *);
s32 scale_matrix(int, f32, f32, f32);
s32 draw_ginja_object(int);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
void *TObjRainbowLobby__ct(void *arg0, s32 arg1, s32 arg2);
void *__nw__7TObjectFUl(int);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 set_global_param__8TObjFishFi(int);
void free_static_data__16TObjRainbowLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80350808_lbl_804F0DF0 bm_obj_lobby_rainbow_resource_descriptor;
extern u32 TObjRainbowLobby__shared_model_resource;
void load_shared_resource__16TObjRainbowLobbyFv(void);
void *__dt__16TObjRainbowLobbyFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_key_base__5TOKeyFPvs(void *, int);
s32 init_map_object_base();
s32 is_lobby_event_active();
extern s32 __vt__16TObjRainbowLobby[];
extern s32 lbl_805D435C;

void render__16TObjRainbowLobbyFv(u8 *arg0) {
    f32 temp_f1;

    if ((s32) *(s32 *)((s8 *)arg0 + 0xC8) != 0) {
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi((int) (*(s32 *)((s8 *)arg0 + 0x24)));
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

void run_task__16TObjRainbowLobbyFv(Obj_803506A4 *arg0) {
    switch (arg0->state) {
    case 0:
        if (is_connected__6TLobbyFv() != 0) {
            arg0->state = 2;
        }
        break;
    case 2:
        arg0->val += 0.1f;
        if (arg0->val >= 1.0f) {
            arg0->val = 1.0f;
            arg0->state = 3;
        }
        break;
    case 1:
        arg0->val -= 0.1f;
        if (arg0->val <= 0.0f) {
            arg0->val = 0.0f;
            arg0->state = 0;
        }
        break;
    case 3:
    default:
        if (is_lobby_obj_active__6TLobbyFv() != 0) {
            arg0->state = 1;
        }
        break;
    }
}

void *create__16TObjRainbowLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = ((void *(*)(void *, void *, void *))TObjRainbowLobby__ct)(o, tl_05, arg0);
    }
    return o;
}

void free_static_data__16TObjRainbowLobbyFv(void) {
    if ((u32) TObjRainbowLobby__shared_model_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TObjRainbowLobby__shared_model_resource, 1);
        TObjRainbowLobby__shared_model_resource = 0U;
    }
}
void load_shared_resource__16TObjRainbowLobbyFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &bm_obj_lobby_rainbow_resource_descriptor.value, 0, 0, 0));
    }
    (*(s32 *)&TObjRainbowLobby__shared_model_resource) = var_r0;
}
void *__dt__16TObjRainbowLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TObjRainbowLobby;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void *TObjRainbowLobby__ct(void *arg0, s32 arg1, s32 arg2) {
    init_map_object_base();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TObjRainbowLobby;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D435C;
    ((TObjRainbowLobby803508_80350858 *)arg0)->ct(arg2);
    if (is_lobby_event_active() != 0) {
        *(s32 *)((s8 *)arg0 + 0xC8) = 0;
    } else {
        *(s32 *)((s8 *)arg0 + 0xC8) = 3;
    }
    *(f32 *)((s8 *)arg0 + 0xCC) = 1.0f;
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(void **)((s8 *)((void *)TObjRainbowLobby__shared_model_resource) + 0x42C)) + 8);
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)(*(void **)((s8 *)((void *)TObjRainbowLobby__shared_model_resource) + 0x42C)) + 0xC);
    return arg0;
}

}
