#include "types.h"
#include "pso/system/BmlResourceDescriptor.h"

extern "C" {
extern char lbl_80479658[];
extern char lbl_80479670[];
extern const char *bm_obj_lobby_stendglass_motion_names[];
extern const char *bm_obj_lobby_stendglass_model_names[2];
extern BmlResourceDescriptor TObjStendGlassLobby__resource_descriptor;
}

struct RecoveredGlobal_80359944_lbl_804F1A30 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80359944_lbl_804F1A30_size[sizeof(RecoveredGlobal_80359944_lbl_804F1A30) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_803599F4___vt__19TObjStendGlassLobby {
    s32 value;
    u8 remaining[0x34];
};

struct Obj_80359758 { u8 pad[0xC8]; s32 state; f32 val; s32 flag; };

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 get_lobby_type__6TLobbyFv(void);
extern u32 TObjStendGlassLobby__static_model_resource;
extern s32 lbl_805D6F2C;
void load_resources__19TObjStendGlassLobbyFv(void);
s32 init_map_object_base(void *);
void update_state__19TObjStendGlassLobbyFPv(void *arg0);
extern s32 __vt__19TObjStendGlassLobby[];
extern s32 TObjStendGlassLobby__name;
extern u32 TObjStendGlassLobby__static_model_resource;
extern s32 lbl_805D6F2C;
u8 *TObjStendGlassLobby__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 check_demo_mode__10TObjPlayerFv();
s32 get_filtered_event_theme__6TLobbyFv();
void TObjStendGlassLobby__sub_803596C0(void);
void run_task__19TObjStendGlassLobbyFv(Obj_80359758 *self);
}

extern "C" {

void TObjStendGlassLobby__sub_803596C0(void);
void *__dt__19TObjStendGlassLobbyFv(void *arg0, s16 arg1);
void *create__19TObjStendGlassLobbyFPv(void *arg0);
void free_static_model__19TObjStendGlassLobbyFv(void);
void render__19TObjStendGlassLobbyFv(u8 *arg0);
void update_state__19TObjStendGlassLobbyFPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
s32 get_filtered_event_theme__6TLobbyFv();
s32 post_translate_matrix(void *);
s32 scale_matrix(int, f32, f32, f32);
s32 draw_ginja_object(int);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
s32 begin_effect_render__13TParticleCtrlFv();
void destroy_key_base__5TOKeyFPvs(void *, int);
s32 end_effect_render__13TParticleCtrlFv();
s32 set_global_param__8TObjFishFi(int);

void TObjStendGlassLobby__sub_803596C0(void) {  }

void render__19TObjStendGlassLobbyFv(u8 *arg0) {
    f32 temp_f1;

    if (((s32) *(s32 *)((s8 *)arg0 + 0xC8) != 0) && ((u32) *(u32 *)((s8 *)arg0 + 0x24) != 0U)) {
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi((int) (*(u32 *)((s8 *)arg0 + 0x24)));
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

void run_task__19TObjStendGlassLobbyFv(Obj_80359758 *self) {
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        ((void (*)(void *))TObjStendGlassLobby__sub_803596C0)(self);
    }
    switch (self->state) {
    case 0:
        if (self->flag == get_filtered_event_theme__6TLobbyFv()) {
            self->state = 2;
        }
        break;
    case 2:
        {
        f32 lim = 1.0f;
        self->val += 0.1f;
        if (self->val >= lim) {
            self->val = lim;
            self->state = 3;
        }
        }
        break;
    case 1:
        {
        f32 lim = 0.0f;
        self->val -= 0.1f;
        if (self->val <= lim) {
            self->val = lim;
            self->state = 0;
        }
        }
        break;
    case 3:
    default:
        if (self->flag != get_filtered_event_theme__6TLobbyFv()) {
            self->state = 1;
        }
        break;
    }
}

void update_state__19TObjStendGlassLobbyFPv(void *arg0) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0x84) < 1) {
        *(s32 *)((s8 *)arg0 + 0xD0) = 0;
    } else {
        *(s32 *)((s8 *)arg0 + 0xD0) = 1;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0xD0) == get_filtered_event_theme__6TLobbyFv()) {
        *(s32 *)((s8 *)arg0 + 0xC8) = 3;
        return;
    }
    *(s32 *)((s8 *)arg0 + 0xC8) = 0;
}

extern void *tl_05;

void *create__19TObjStendGlassLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        o = TObjStendGlassLobby__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TObjStendGlassLobby__static_model_resource;

void free_static_model__19TObjStendGlassLobbyFv(void) {
    if ((u32) TObjStendGlassLobby__static_model_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TObjStendGlassLobby__static_model_resource, 1);
        TObjStendGlassLobby__static_model_resource = 0U;
    }
}

extern s32 __vt__19TObjStendGlassLobby[];

void load_resources__19TObjStendGlassLobbyFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &TObjStendGlassLobby__resource_descriptor, 0, 0, 0));
    }
    (*(s32 *)&TObjStendGlassLobby__static_model_resource) = var_r0;
    lbl_805D6F2C = get_lobby_type__6TLobbyFv();
}

void *__dt__19TObjStendGlassLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TObjStendGlassLobby;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_803599F4___vt__19TObjStendGlassLobby_size[sizeof(RecoveredGlobal_803599F4___vt__19TObjStendGlassLobby) == 0x38 ? 1 : -1];
u8 *TObjStendGlassLobby__ct(u8 *arg0, s32 arg1, s32 arg2) {
    init_map_object_base((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_803599F4___vt__19TObjStendGlassLobby *)&__vt__19TObjStendGlassLobby).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjStendGlassLobby__name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    update_state__19TObjStendGlassLobbyFPv((void *) (arg0));
    *(f32 *)((s8 *)arg0 + 0xCC) = 1.0f;
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TObjStendGlassLobby__static_model_resource) + 0x42C)) + 8);
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) lbl_805D6F2C;
    return arg0;
}

}

extern "C" {
__declspec(section ".data") const char *bm_obj_lobby_stendglass_model_names[2] = { lbl_80479658, NULL };
BmlResourceDescriptor TObjStendGlassLobby__resource_descriptor = { lbl_80479670, bm_obj_lobby_stendglass_model_names, bm_obj_lobby_stendglass_motion_names, 1, 0 };
}
