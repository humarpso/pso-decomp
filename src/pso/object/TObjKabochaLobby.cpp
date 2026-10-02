#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18_8035346c { char pad[0x18]; };
struct VObj18_8035346c : VBase18_8035346c {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual M2C_UNK m8(f32, f32);
};

struct RecoveredGlobal_80353684_lbl_804F11E8 { M2C_UNK value; u8 remaining[0xC]; };
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
s32 TLobby__sub_80351DFC(void);
void run_task__16TObjKabochaLobbyFv(Kabocha_80353520 *o);
}

extern "C" {

void *create__16TObjKabochaLobbyFPv(void *arg0);
void render__16TObjKabochaLobbyFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
void *TObjKabochaLobby__ct(void *arg0, s32 arg1, s32 arg2);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(int);
void unload_static_data__16TObjKabochaLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 get_lobby_type__6TLobbyFv(void);
extern RecoveredGlobal_80353684_lbl_804F11E8 lbl_804F11E8;
extern u32 TObjKabochaLobby__data_805D6EE8;
void TObjKabochaLobby__sub_80353684(void);
void *__dt__16TObjKabochaLobbyFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_key_base__5TOKeyFPvs(void *, int);
M2C_UNK init_map_object_base();
extern M2C_UNK __vt__16TObjKabochaLobby[];
extern s32 lbl_805D4384;

extern s32 TObjKabochaLobby__data_805D6EEC;

void render__16TObjKabochaLobbyFv(u8 *arg0) {
    f32 temp_f1;

    if (((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 0) && ((u32) TObjKabochaLobby__data_805D6EEC != 0U) && (((VObj18_8035346c *) arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0)) {
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 3) {
            temp_f1 = M2C_FIELD(arg0, f32 *, 0xCC);
            scale_matrix((int) (0), (f32) (temp_f1), (f32) (1.0f), (f32) (temp_f1));
        }
        TObjBoss2Tunnel__sub_803DB470((int) (M2C_FIELD(arg0, s32 *, 0x34)));
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
    }
}

extern void *tl_05;

void run_task__16TObjKabochaLobbyFv(Kabocha_80353520 *o) {
    switch (o->state) {
    case 0:
        if (TLobby__sub_80351DFC() == 5) {
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
        if (TLobby__sub_80351DFC() != 5) {
            o->state = 1;
        }
        break;
    }
}

void *create__16TObjKabochaLobbyFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = ((void *(*)(void *, void *, void *))TObjKabochaLobby__ct)(o, tl_05, arg0);
    }
    return o;
}

void unload_static_data__16TObjKabochaLobbyFv(void) {
    if ((u32) TObjKabochaLobby__data_805D6EE8 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjKabochaLobby__data_805D6EE8, 1);
        TObjKabochaLobby__data_805D6EE8 = 0U;
    }
}
void TObjKabochaLobby__sub_80353684(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804F11E8.value, 0, 0, 0));
    }
    (*(s32 *)&TObjKabochaLobby__data_805D6EE8) = var_r0;
    TObjKabochaLobby__data_805D6EEC = get_lobby_type__6TLobbyFv();
}
void *__dt__16TObjKabochaLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjKabochaLobby;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void *TObjKabochaLobby__ct(void *arg0, s32 arg1, s32 arg2) {
    init_map_object_base();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjKabochaLobby;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4384;
    ((TObjKabochaLobby803537_803536DC *)arg0)->ct(arg2);
    if (TLobby__sub_80351DFC() == 5) {
        M2C_FIELD(arg0, s32 *, 0xC8) = 3;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    }
    M2C_FIELD(arg0, f32 *, 0xCC) = 1.0f;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((void *)TObjKabochaLobby__data_805D6EE8, void **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) TObjKabochaLobby__data_805D6EEC;
    return arg0;
}

}
