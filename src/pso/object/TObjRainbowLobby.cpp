#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_803506A4 { u8 pad[0xC8]; s32 state; f32 val; };

extern "C" {
s32 is_connected__6TLobbyFv();
s32 is_lobby_obj_active__6TLobbyFv();
void run_task__16TObjRainbowLobbyFv(Obj_803506A4 *arg0);
}

extern "C" {

void *create__16TObjRainbowLobbyFPv(void *arg0);
void render__16TObjRainbowLobbyFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void *TObjRainbowLobby__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(int);

extern const f32 TObjRainbowLobby__data_805DFE30;

void render__16TObjRainbowLobbyFv(u8 *arg0) {
    f32 temp_f1;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 0) {
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC8) != 3) {
            temp_f1 = M2C_FIELD(arg0, f32 *, 0xCC);
            TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (temp_f1), (f32) (TObjRainbowLobby__data_805DFE30), (f32) (temp_f1));
        }
        TObjBoss2Tunnel__sub_803DB470((int) (M2C_FIELD(arg0, s32 *, 0x34)));
        TObjPlayer__sub_803D9B78();
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
        o = TObjRainbowLobby__ct(o, tl_05, arg0);
    }
    return o;
}

}
