#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8035BEB8_lbl_804F1DF4 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8035BEB8_lbl_804F1DF4_size[sizeof(RecoveredGlobal_8035BEB8_lbl_804F1DF4) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_8035BF68___vt__16TObjWeddingLobby {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct Obj_8035BCE8 {
    u8 pad0[0xB0];
    f32 b0;
    u8 padB4[0xC8 - 0xB4];
    s32 state;
    f32 cc;
};

struct Fish_8035BCE8 { u32 a; u32 n; };

extern "C" {
s32 get_bml_motion(void *, int);
s32 get_bml_model(void *, int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK draw_ginja_object();
M2C_UNK draw_ginja_model_with_motion(int, int, f32);
extern u32 TObjWeddingLobby__data_805D6F60;
extern u32 lbl_805D6F64;
void render__16TObjWeddingLobbyFv(u8 *arg0);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 get_lobby_type__6TLobbyFv(void);
extern RecoveredGlobal_8035BEB8_lbl_804F1DF4 lbl_804F1DF4;
extern u32 TObjWeddingLobby__data_805D6F60;
extern u32 lbl_805D6F64;
void load_resources__16TObjWeddingLobbyFv(void);
s32 init_map_object_base(void *, void *);
s32 get_filtered_event_theme__6TLobbyFv();
extern M2C_UNK __vt__16TObjWeddingLobby[];
extern s32 lbl_805D4428;
u8 *TObjWeddingLobby__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 get_bml_motion(void *, int);
s32 check_demo_mode__10TObjPlayerFv();
s32 get_filtered_event_theme__6TLobbyFv();
void TObjWeddingLobby__sub_8035BC20(void);
extern u32 TObjWeddingLobby__data_805D6F60;
void run_task__16TObjWeddingLobbyFv(Obj_8035BCE8 *self);
}

extern "C" {

void TObjWeddingLobby__sub_8035BC20(void);
void *__dt__16TObjWeddingLobbyFv(void *arg0, s16 arg1);
void *create__16TObjWeddingLobbyFPv(void *arg0);
void release__16TObjWeddingLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_key_base__5TOKeyFPvs(void *, int);

void TObjWeddingLobby__sub_8035BC20(void) {  }

extern void *tl_05;

void render__16TObjWeddingLobbyFv(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r31;
    s32 temp_r3;
    if (((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 0) && ((u32) lbl_805D6F64 != 0U)) {
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi((void *) (lbl_805D6F64));
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 3) {
            temp_f1 = M2C_FIELD(arg0, f32 *, 0xCC);
            scale_matrix((int) (0), (f32) (temp_f1), (f32) (1.0f), (f32) (temp_f1));
        }
        get_bml_model((void *) ((*(s32 *)&TObjWeddingLobby__data_805D6F60)), (int) (0));
        draw_ginja_object();
        draw_ginja_model_with_motion((int) get_bml_model((void *) ((*(s32 *)&TObjWeddingLobby__data_805D6F60)), (int) (1)), (int) get_bml_motion((void *) ((*(s32 *)&TObjWeddingLobby__data_805D6F60)), (int) (0)), (f32) (M2C_FIELD(arg0, f32 *, 0xB0)));
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
    }
}

void run_task__16TObjWeddingLobbyFv(Obj_8035BCE8 *self) {
    f32 last;
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        ((void (*)(Obj_8035BCE8 *))TObjWeddingLobby__sub_8035BC20)(self);
    }
    switch (self->state) {
    case 0:
        if (get_filtered_event_theme__6TLobbyFv() == 0xA) {
            self->state = 2;
        }
        break;
    case 2: {
        self->cc += 0.1f;
        if (self->cc >= 1.0f) {
            self->cc = 1.0f;
            self->state = 3;
        }
        break;
    }
    case 1: {
        self->cc -= 0.1f;
        if (self->cc <= 0.0f) {
            self->cc = 0.0f;
            self->state = 0;
        }
        break;
    }
    case 3:
    default:
        if (get_filtered_event_theme__6TLobbyFv() != 0xA) {
            self->state = 1;
        }
        break;
    }
    last = (f32)((Fish_8035BCE8 *)get_bml_motion((void *)TObjWeddingLobby__data_805D6F60, 0))->n - 1.0f;
    self->b0 += 2.0f;
    if (last < self->b0) {
        self->b0 -= last;
    }
}

void *create__16TObjWeddingLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        o = TObjWeddingLobby__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TObjWeddingLobby__data_805D6F60;

void release__16TObjWeddingLobbyFv(void) {
    if ((u32) TObjWeddingLobby__data_805D6F60 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjWeddingLobby__data_805D6F60, 1);
        TObjWeddingLobby__data_805D6F60 = 0U;
    }
}

extern M2C_UNK __vt__16TObjWeddingLobby[];

void load_resources__16TObjWeddingLobbyFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &lbl_804F1DF4.value, 0, 0, 0));
    }
    (*(s32 *)&TObjWeddingLobby__data_805D6F60) = var_r0;
    (*(s32 *)&lbl_805D6F64) = get_lobby_type__6TLobbyFv();
}

void *__dt__16TObjWeddingLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjWeddingLobby;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8035BF68___vt__16TObjWeddingLobby_size[sizeof(RecoveredGlobal_8035BF68___vt__16TObjWeddingLobby) == 0x3C ? 1 : -1];
u8 *TObjWeddingLobby__ct(u8 *arg0, s32 arg1, s32 arg2) {
    init_map_object_base((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8035BF68___vt__16TObjWeddingLobby *)&__vt__16TObjWeddingLobby).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4428;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    if (get_filtered_event_theme__6TLobbyFv() == 0xA) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 3;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0xCC) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0xB0) = 0.0f;
    return arg0;
}

}
