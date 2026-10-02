#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80364A1C_lbl_804F2B18 { M2C_UNK value; u8 remaining[0xC]; };
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
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 get_lobby_type__6TLobbyFv(void);
extern RecoveredGlobal_80364A1C_lbl_804F2B18 lbl_804F2B18;
extern u32 TObjTreeLobby__data_805D6FC0;
extern s32 lbl_805D6FC4;
void TObjTreeLobby__sub_80364A1C(void);
s32 is_connected__6TLobbyFv();
s32 is_lobby_obj_active__6TLobbyFv();
void run_task__13TObjTreeLobbyFv(Obj_803648B8 *self);
}

extern "C" {

void *create__13TObjTreeLobbyFPv(void *arg0);
void destroy_static_instance__13TObjTreeLobbyFv(void);
void render__13TObjTreeLobbyFv(u8 *arg0);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK draw_ginja_object(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
void *TObjTreeLobby__ct(void *arg0, s32 arg1, s32 arg2);
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(int);
void queue_destruction__7TObjectFv(void *);
Ctrl_80364B6C *get_player_by_client_id(u16);
void TObjTreeLobby__sub_80364B6C(Obj_80364B6C *arg0);
void *TObjTreeLobby__sub_80364BE8(void *arg0, s16 arg1);
void *__dt__13TObjTreeLobbyFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void destroy_key_base__5TOKeyFPvs(void *, int);
M2C_UNK init_map_object_base();
s32 is_lobby_event_active();
extern M2C_UNK __vt__13TObjTreeLobby[];
extern s32 lbl_805D4484;
extern M2C_UNK lbl_804F2B60[];

void render__13TObjTreeLobbyFv(u8 *arg0) {
    f32 temp_f1;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 0) {
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
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

extern void *tl_05;

void run_task__13TObjTreeLobbyFv(Obj_803648B8 *self) {
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

void *create__13TObjTreeLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = ((void *(*)(void *, void *, void *))TObjTreeLobby__ct)(o, tl_05, arg0);
    }
    return o;
}

extern u32 TObjTreeLobby__data_805D6FC0;

void destroy_static_instance__13TObjTreeLobbyFv(void) {
    if ((u32) TObjTreeLobby__data_805D6FC0 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjTreeLobby__data_805D6FC0, 1);
        TObjTreeLobby__data_805D6FC0 = 0U;
    }
}
void TObjTreeLobby__sub_80364A1C(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804F2B18.value, 0, 0, 0));
    }
    (*(s32 *)&TObjTreeLobby__data_805D6FC0) = var_r0;
    lbl_805D6FC4 = get_lobby_type__6TLobbyFv();
}

void *__dt__13TObjTreeLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjTreeLobby;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void *TObjTreeLobby__ct(void *arg0, s32 arg1, s32 arg2) {
    init_map_object_base();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjTreeLobby;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4484;
    ((TObjTreeLobby80364A_80364A74 *)arg0)->ct(arg2);
    if (is_lobby_event_active() != 0) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC8) = 3;
    }
    M2C_FIELD(arg0, f32 *, 0xCC) = 1.0f;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((void *)TObjTreeLobby__data_805D6FC0, void **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) lbl_805D6FC4;
    return arg0;
}
void TObjTreeLobby__sub_80364B6C(Obj_80364B6C *arg0) {
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
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F2B60;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
