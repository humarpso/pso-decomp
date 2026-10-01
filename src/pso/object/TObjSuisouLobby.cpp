#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80369DF0_lbl_804F33E0 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80369DF0_lbl_804F33E0_size[sizeof(RecoveredGlobal_80369DF0_lbl_804F33E0) == 0x10 ? 1 : -1];

struct Suisou_80369BF4 {
    u8 pad[0xC8];
    s32 state;
    f32 cc;
};

struct VBase_80369ED4 { char pad[0x18]; };

struct VObj_80369ED4 : VBase_80369ED4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(void *);
};

struct Vec_80369ED4 { s32 x, y, z; };

struct Self_80369ED4 {
    u8 pad0[0x24]; s32 x24; u8 pad28[0xC]; s32 x34; u8 x38[0x28]; s32 x60;
    u8 pad64[0x64]; s32 state; f32 cc; s32 padd0; void *p1; void *p2;
};

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 get_lobby_type__6TLobbyFv(void);
extern RecoveredGlobal_80369DF0_lbl_804F33E0 lbl_804F33E0;
extern u32 TObjSuisouLobby__data_805D6FF0;
extern s32 lbl_805D6FF4;
void TObjSuisouLobby__sub_80369DF0(void);
s32 check_demo_mode__10TObjPlayerFv();
s32 is_connected__6TLobbyFv();
s32 is_lobby_obj_active__6TLobbyFv();
void TObjSuisouLobby__sub_80369B5C(void);
void update_particle__15TObjSuisouLobbyFPv(void *arg0);
void run_task__15TObjSuisouLobbyFv(Suisou_80369BF4 *self);
u32 TBoss4Type2__sub_800874F4(void *, int);
s32 enable__13TParticleCtrlFPv(void *);
s32 init_map_object_base(void *, void *);
s32 is_lobby_event_active(void);
void TObjSuisouLobby__sub_80369D68(void);
s32 TCameraCtrl__sub_803D8934(int, void *, void *);
s32 TObjPlayer__sub_803D8CD4(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
extern Vec_80369ED4 lbl_8047A3D0[];
extern Vec_80369ED4 lbl_8047A3DC[];
extern M2C_UNK __vt__15TObjSuisouLobby[];
extern s32 lbl_805D44C4;
extern u32 TObjSuisouLobby__data_805D6FF0;
extern s32 lbl_805D6FF4;
extern const f32 TObjSuisouLobby__data_805E0350;
void *TObjSuisouLobby__ct(void *arg0, void *arg1, void *arg2);
}

extern "C" {

void TObjSuisouLobby__sub_80369B5C(void);
void TObjSuisouLobby__sub_80369D68(void);
void *__dt__15TObjSuisouLobbyFv(void *arg0, s16 arg1);
void *create__15TObjSuisouLobbyFPv(void *arg0);
void destroy_instance__15TObjSuisouLobbyFv(void);
void render__15TObjSuisouLobbyFv(u8 *arg0);
void update_particle__15TObjSuisouLobbyFPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
s32 clear_active_flag__13TParticleCtrlFPv(void *);
void destroy_key_base__5TOKeyFPvs(void *, int);
s32 enable__13TParticleCtrlFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
void queue_destruction__7TObjectFv(void *);
M2C_UNK set_global_param__8TObjFishFi(int);

void TObjSuisouLobby__sub_80369B5C(void) {  }

extern const f32 TObjSuisouLobby__data_805E0350;

void render__15TObjSuisouLobbyFv(u8 *arg0) {
    f32 temp_f1;

    if (((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U)) {
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, u32 *, 0x24)));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 3) {
            temp_f1 = M2C_FIELD(arg0, f32 *, 0xCC);
            TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (temp_f1), (f32) (TObjSuisouLobby__data_805E0350), (f32) (temp_f1));
        }
        TObjBoss2Tunnel__sub_803DB470((int) (M2C_FIELD(arg0, s32 *, 0x34)));
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
    }
}

void run_task__15TObjSuisouLobbyFv(Suisou_80369BF4 *self) {
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        ((void (*)(void *))TObjSuisouLobby__sub_80369B5C)(self);
    }
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
    update_particle__15TObjSuisouLobbyFPv(self);
}

void update_particle__15TObjSuisouLobbyFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) == 3) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xD4) != 0U) {
            clear_active_flag__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xD4));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xD8) != 0U) {
            clear_active_flag__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xD8));
        }
    } else {
        if ((u32) M2C_FIELD(arg0, u32 *, 0xD4) != 0U) {
            enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xD4));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xD8) != 0U) {
            enable__13TParticleCtrlFPv(M2C_FIELD(arg0, void **, 0xD8));
        }
    }
}
void TObjSuisouLobby__sub_80369D68(void) {  }

extern void *tl_05;

void *create__15TObjSuisouLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = TObjSuisouLobby__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

extern u32 TObjSuisouLobby__data_805D6FF0;

void destroy_instance__15TObjSuisouLobbyFv(void) {
    if ((u32) TObjSuisouLobby__data_805D6FF0 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjSuisouLobby__data_805D6FF0, 1);
        TObjSuisouLobby__data_805D6FF0 = 0U;
    }
}

extern M2C_UNK __vt__15TObjSuisouLobby[];

void TObjSuisouLobby__sub_80369DF0(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804F33E0.value, 0, 0, 0));
    }
    (*(s32 *)&TObjSuisouLobby__data_805D6FF0) = var_r0;
    lbl_805D6FF4 = get_lobby_type__6TLobbyFv();
}

void *__dt__15TObjSuisouLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjSuisouLobby;
        if (M2C_FIELD(arg0, void **, 0xD4) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD4)); M2C_FIELD(arg0, M2C_UNK *, 0xD4) = 0; }
        if (M2C_FIELD(arg0, void **, 0xD8) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD8)); M2C_FIELD(arg0, M2C_UNK *, 0xD8) = 0; }
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma opt_common_subs off
#define self ((Self_80369ED4 *)arg0)
void *TObjSuisouLobby__ct(void *arg0, void *arg1, void *arg2) {
    init_map_object_base(arg0, arg1);
    *(void ***)((u8 *)arg0 + 0x18) = ((void * *)&__vt__15TObjSuisouLobby);
    *(s32 *)arg0 = lbl_805D44C4;
    ((VObj_80369ED4 *)arg0)->m5(arg2);
    {
        Vec_80369ED4 v = lbl_8047A3D0[0];
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D8CD4(0);
        TOHangerMachine01__sub_803D9C00(self->x38);
        rotate_matrix_y(0, self->x60);
        TCameraCtrl__sub_803D8934(0, &v, &v);
        self->p1 = (void *)TBoss4Type2__sub_800874F4(&v, 0x222);
        TObjPlayer__sub_803D9B78();
        if (self->p1 != NULL) {
            enable__13TParticleCtrlFPv(self->p1);
        }
    }
    {
        Vec_80369ED4 v = lbl_8047A3DC[0];
        TObjPlayer__sub_803D9B2C();
        TObjPlayer__sub_803D8CD4(0);
        TOHangerMachine01__sub_803D9C00(self->x38);
        rotate_matrix_y(0, self->x60);
        TCameraCtrl__sub_803D8934(0, &v, &v);
        self->p2 = (void *)TBoss4Type2__sub_800874F4(&v, 0x222);
        TObjPlayer__sub_803D9B78();
        if (self->p2 != NULL) {
            enable__13TParticleCtrlFPv(self->p2);
        }
    }
    if (is_lobby_event_active() != 0) {
        self->state = 0;
    } else {
        self->state = 3;
    }
    ((void (*)(void *))TObjSuisouLobby__sub_80369D68)(arg0);
    self->cc = TObjSuisouLobby__data_805E0350;
    self->x34 = *(s32 *)(*(u8 **)((u8 *)TObjSuisouLobby__data_805D6FF0 + 0x42C) + 8);
    self->x24 = lbl_805D6FF4;
    return arg0;
}
#pragma pop

}
