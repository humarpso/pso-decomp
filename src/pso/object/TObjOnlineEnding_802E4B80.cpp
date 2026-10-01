#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_802E4E44 { f32 x, y, z; };

struct Ent_802E4E44 { s32 active; u16 id; u8 pad[0x28 - 6]; };

struct Obj_802E4E44 {
    u8 pad0[0xA4];
    s32 state;
    Ent_802E4E44 ent[4];
    s32 count;
    s32 timer;
    f32 fade;
};

struct Cam_802E4E44 {
    u8 pad0[0x14];
    s32 f14;
    u8 pad18[4];
    Vec_802E4E44 a;
    Vec_802E4E44 b;
    u8 pad34[0x8];
};

extern "C" {
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK TCameraCtrl__sub_80069E7C(s32);
M2C_UNK TCameraCtrl__sub_80069D04(Cam_802E4E44 *);
void VecCopy__FP3VecPC3Vec(Vec_802E4E44 *, const Vec_802E4E44 *);
M2C_UNK queue_destruction__7TObjectFv(void *);
extern Vec_802E4E44 lbl_80472B9C;
extern Vec_802E4E44 lbl_80472BA8;
void TObjOnlineEnding__sub_802E4E44(Obj_802E4E44 *arg0);
}

extern "C" {

void create_result_window__16TObjOnlineEndingFPv(void *arg0);
void *destroy__16TObjOnlineEndingFPvs(void *arg0, s16 arg1);
M2C_UNK TCameraCtrl__sub_80069DA8();
s32 TLobby__sub_8006F00C();
s32 TLobby__sub_80070ACC();
s32 TWindowChallengeResult__ct(s32, s32, s32, s32);
s32 TWindowSubStatusDisp__sub_800718D0();
M2C_UNK __dl__7TObjectFPv(void *);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK close_window__16TObjOnlineEndingFPv(void *);
M2C_UNK destroy_particle__13TParticleCtrlFPvs(void *, M2C_UNK);
s32 get_card_window_value__16TObjOnlineEndingFv();
s32 get_layout_id__20TWindowSubStatusDispFv(M2C_UNK);
s32 is_flag_set__6TLobbyFv();

void create_result_window__16TObjOnlineEndingFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r30_2;
    s32 temp_r30;
    s32 var_r29;

    M2C_FIELD(arg0, s32 *, 0x154) = 0;
    if (is_flag_set__6TLobbyFv() != 0) {
        temp_r30 = get_layout_id__20TWindowSubStatusDispFv(-1) - 1;
        {
        s32 t = TLobby__sub_8006F00C();
        if (t == temp_r30) {
            var_r29 = __nw__7TObjectFUl(0x68);
            if (var_r29 != 0) {
                temp_r30_2 = get_card_window_value__16TObjOnlineEndingFv();
                temp_r31 = TWindowSubStatusDisp__sub_800718D0();
                var_r29 = TWindowChallengeResult__ct(var_r29, TLobby__sub_80070ACC(), temp_r31, temp_r30_2);
            }
            M2C_FIELD(arg0, s32 *, 0x154) = var_r29;
        }
        }
    }
}

extern const M2C_UNK lbl_804E3A64[];

void TObjOnlineEnding__sub_802E4E44(Obj_802E4E44 *arg0) {
    s32 i;
    for (i = 0; i < arg0->count; i++) {
        if (arg0->ent[i].active != 0 && TPlayerBattleCtrl4P__sub_801BA74C(arg0->ent[i].id) == 0) {
            arg0->ent[i].active = 0;
        }
    }
    switch (arg0->state) {
    case 0:
        arg0->state = 1;
        break;
    case 1: {
        TCameraCtrl__sub_80069E7C(9);
        Vec_802E4E44 t1 = lbl_80472B9C;
        Vec_802E4E44 t2 = lbl_80472BA8;
        Cam_802E4E44 cam;
        VecCopy__FP3VecPC3Vec(&cam.a, &t1);
        VecCopy__FP3VecPC3Vec(&cam.b, &t2);
        cam.f14 = 0x1999;
        TCameraCtrl__sub_80069D04(&cam);
        arg0->state = 2;
        break;
    }
    default:
        if ((arg0->fade += 0.3f) >= 17.0f) {
            arg0->fade = 17.0f;
        }
        if (++arg0->timer >= 450) {
            queue_destruction__7TObjectFv(arg0);
        }
        break;
    }
}

void *destroy__16TObjOnlineEndingFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, const M2C_UNK **, 0x18) = lbl_804E3A64;
        close_window__16TObjOnlineEndingFPv(arg0);
        TCameraCtrl__sub_80069DA8();
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
