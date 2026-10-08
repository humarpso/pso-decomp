#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8035BACC_lbl_804F1D98 { M2C_UNK value; u8 remaining[0xC]; };
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
s32 get_filtered_event_theme__6TLobbyFv(void);
s32 get_lobby_theme_clamped__16TObjCurtainLobbyFv(void);
s32 check_demo_mode__10TObjPlayerFv();
s32 get_lobby_theme_clamped__16TObjCurtainLobbyFv(void);
void TObjCurtainLobby__sub_8035B8B4(void);
void run_task__16TObjCurtainLobbyFv(Curtain_8035B94C *self);
}

extern "C" {

void TObjCurtainLobby__sub_8035B8B4(void);
void render__16TObjCurtainLobbyFv(u8 *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK draw_ginja_object(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(int);
void close_dialog_window__16TObjCurtainLobbyFv(void);
void *create__16TObjCurtainLobbyFPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
void *TObjCurtainLobby__ct(void *arg0, s32 arg1, s32 arg2);
void *__nw__7TObjectFUl(int);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 get_lobby_type__6TLobbyFv(void);
extern RecoveredGlobal_8035BACC_lbl_804F1D98 lbl_804F1D98;
extern u32 TObjCurtainLobby__data_805D6F58;
extern s32 lbl_805D6F5C;
void load_resources__16TObjCurtainLobbyFv(void);
void *__dt__16TObjCurtainLobbyFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_key_base__5TOKeyFPvs(void *, int);
M2C_UNK init_map_object_base();
extern M2C_UNK __vt__16TObjCurtainLobby[];
extern s32 lbl_805D4424;

#pragma push
#pragma opt_propagation off
s32 get_lobby_theme_clamped__16TObjCurtainLobbyFv(void) {
    s32 var_r3;
    var_r3 = get_filtered_event_theme__6TLobbyFv();
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

void render__16TObjCurtainLobbyFv(u8 *arg0) {
    f32 temp_f1;

    if (((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U)) {
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, u32 *, 0x24)));
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 3) {
            temp_f1 = M2C_FIELD(arg0, f32 *, 0xCC);
            scale_matrix((int) (0), (f32) (temp_f1), (f32) (1.0f), (f32) (temp_f1));
        }
        draw_ginja_object((int) (M2C_FIELD(arg0, s32 *, 0x34)));
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
    }
}
void run_task__16TObjCurtainLobbyFv(Curtain_8035B94C *self) {
    if (check_demo_mode__10TObjPlayerFv() == 1) {
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
void *create__16TObjCurtainLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = ((void *(*)(void *, void *, void *))TObjCurtainLobby__ct)(o, tl_05, arg0);
    }
    return o;
}
void close_dialog_window__16TObjCurtainLobbyFv(void) {
    if ((u32) TObjCurtainLobby__data_805D6F58 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjCurtainLobby__data_805D6F58, 1);
        TObjCurtainLobby__data_805D6F58 = 0U;
    }
}
void load_resources__16TObjCurtainLobbyFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &lbl_804F1D98.value, 0, 0, 0));
    }
    (*(s32 *)&TObjCurtainLobby__data_805D6F58) = var_r0;
    lbl_805D6F5C = get_lobby_type__6TLobbyFv();
}
void *__dt__16TObjCurtainLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjCurtainLobby;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void *TObjCurtainLobby__ct(void *arg0, s32 arg1, s32 arg2) {
    init_map_object_base();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjCurtainLobby;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4424;
    ((TObjCurtainLobby8035BB_8035BB24 *)arg0)->ct(arg2);
    if (((s32 (*)(void *))get_lobby_theme_clamped__16TObjCurtainLobbyFv)(arg0) == 0xC) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 3;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0xCC) = 1.0f;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((void *)TObjCurtainLobby__data_805D6F58, void **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) lbl_805D6F5C;
    return arg0;
}

}
