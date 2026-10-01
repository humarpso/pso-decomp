#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80359944_lbl_804F1A30 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80359944_lbl_804F1A30_size[sizeof(RecoveredGlobal_80359944_lbl_804F1A30) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_803599F4___vt__19TObjStendGlassLobby {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct Obj_80359758 { u8 pad[0xC8]; s32 state; f32 val; s32 flag; };

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 get_lobby_type__6TLobbyFv(void);
extern RecoveredGlobal_80359944_lbl_804F1A30 lbl_804F1A30;
extern u32 TObjStendGlassLobby__data_805D6F28;
extern s32 lbl_805D6F2C;
void TObjStendGlassLobby__sub_80359944(void);
s32 init_map_object_base(void *);
void update_state__19TObjStendGlassLobbyFPv(void *arg0);
extern M2C_UNK __vt__19TObjStendGlassLobby[];
extern s32 lbl_805D4404;
extern u32 TObjStendGlassLobby__data_805D6F28;
extern s32 lbl_805D6F2C;
extern const f32 TObjStendGlassLobby__data_805E00A0;
u8 *TObjStendGlassLobby__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
s32 check_demo_mode__10TObjPlayerFv();
s32 TLobby__sub_80351DFC();
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
s32 TLobby__sub_80351DFC();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
void destroy_key_base__5TOKeyFPvs(void *, int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(int);

void TObjStendGlassLobby__sub_803596C0(void) {  }

extern const f32 TObjStendGlassLobby__data_805E00A0;

void render__19TObjStendGlassLobbyFv(u8 *arg0) {
    f32 temp_f1;

    if (((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U)) {
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, u32 *, 0x24)));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 3) {
            temp_f1 = M2C_FIELD(arg0, f32 *, 0xCC);
            TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (temp_f1), (f32) (TObjStendGlassLobby__data_805E00A0), (f32) (temp_f1));
        }
        TObjBoss2Tunnel__sub_803DB470((int) (M2C_FIELD(arg0, s32 *, 0x34)));
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
    }
}

void run_task__19TObjStendGlassLobbyFv(Obj_80359758 *self) {
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        ((void (*)(void *))TObjStendGlassLobby__sub_803596C0)(self);
    }
    switch (self->state) {
    case 0:
        if (self->flag == TLobby__sub_80351DFC()) {
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
        if (self->flag != TLobby__sub_80351DFC()) {
            self->state = 1;
        }
        break;
    }
}

void update_state__19TObjStendGlassLobbyFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x84) < 1) {
        M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xD0) = 1;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xD0) == TLobby__sub_80351DFC()) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 3;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
}

extern void *tl_05;

void *create__19TObjStendGlassLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        o = TObjStendGlassLobby__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TObjStendGlassLobby__data_805D6F28;

void free_static_model__19TObjStendGlassLobbyFv(void) {
    if ((u32) TObjStendGlassLobby__data_805D6F28 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjStendGlassLobby__data_805D6F28, 1);
        TObjStendGlassLobby__data_805D6F28 = 0U;
    }
}

extern M2C_UNK __vt__19TObjStendGlassLobby[];

void TObjStendGlassLobby__sub_80359944(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804F1A30.value, 0, 0, 0));
    }
    (*(s32 *)&TObjStendGlassLobby__data_805D6F28) = var_r0;
    lbl_805D6F2C = get_lobby_type__6TLobbyFv();
}

void *__dt__19TObjStendGlassLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TObjStendGlassLobby;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_803599F4___vt__19TObjStendGlassLobby_size[sizeof(RecoveredGlobal_803599F4___vt__19TObjStendGlassLobby) == 0x38 ? 1 : -1];
u8 *TObjStendGlassLobby__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    init_map_object_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_803599F4___vt__19TObjStendGlassLobby *)&__vt__19TObjStendGlassLobby).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4404;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    update_state__19TObjStendGlassLobbyFPv((void *) (arg0));
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) TObjStendGlassLobby__data_805E00A0;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TObjStendGlassLobby__data_805D6F28), u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) lbl_805D6F2C;
    return arg0;
}

}
