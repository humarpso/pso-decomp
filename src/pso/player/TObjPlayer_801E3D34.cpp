#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801E3E24_TKeyBoardControl__data_80506270 { M2C_UNK value; u8 remaining[0xAC]; };
typedef char RecoveredGlobal_801E3E24_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_801E3E24_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];

extern "C" {
M2C_UNK TLobby__sub_800F8FB8();
s32 run_frame__6TLobbyFv();
s32 TLobby__sub_803382E4();
s32 TLobby__sub_803CD5C4(void *);
s32 TLobby__sub_803CD840(void *, void *, int, void *);
s32 TLobby__sub_801E3E9C(s32 arg0, s32 arg1, s32 arg2);
M2C_UNK TLobby__sub_800F8FB8();
s32 reset_state_byte__6TLobbyFv();
s32 disable_disconnected_ports__16TKeyBoardControlFv(void *);
s32 TLobby__sub_80228074();
s32 flush_input__16TKeyBoardControlFv();
s32 TLobby__sub_803CD5C4(void *);
s32 TLobby__sub_803CD840(void *, void *, int, void *);
s32 TKeyBoardControl__sub_803DEA18();
extern RecoveredGlobal_801E3E24_TKeyBoardControl__data_80506270 TKeyBoardControl__data_80506270;
s32 TKeyBoardControl__sub_801E3E24(s32 arg0, s32 arg1, s32 arg2);
void bswap_16__FPUs(u16 *p);
void bswap_32__FPUl(u32 *p);
}

extern "C" {

void render_tick__Fv(void);
void render_tree__10TObjPlayerFPv(void *arg0);
M2C_UNK GXSetViewport(f32, f32, f32, f32, f32, f32);
M2C_UNK GXSetZMode(M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK (*lbl_805D7810)(void *);
M2C_UNK TCameraCtrl__sub_80069024();
M2C_UNK TKeyBoardControl__sub_8000F7FC();
M2C_UNK TObjPlayer__sub_803D7CA4(void *);
M2C_UNK TObjPlayer__sub_803D85D8(s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK fn_803DCEC8();
M2C_UNK fn_803DCF0C();
M2C_UNK run_tasks__16TKeyBoardControlFv();
M2C_UNK set_cull_none__8TObjFishFv();

void render_tree__10TObjPlayerFPv(void *arg0) {
    void *var_r31;

    var_r31 = arg0;
    do {
        push_matrix();
        TObjPlayer__sub_803D7CA4(var_r31);
        if (((M2C_UNK (*)(void *)) lbl_805D7810) != NULL) {
            lbl_805D7810(var_r31);
        }
        if ((u32) M2C_FIELD(var_r31, u32 *, 0x2C) != 0U) {
            render_tree__10TObjPlayerFPv((void *)(M2C_FIELD(var_r31, void **, 0x2C)));
        }
        pop_matrix();
        var_r31 = M2C_FIELD(var_r31, void **, 0x30);
    } while (var_r31 != NULL);
}

extern s32 lbl_805D3584;
extern f32 lbl_805DC428;
extern f32 lbl_805DC42C;
extern f32 lbl_805DC430;
extern f32 lbl_805DC43C;

void render_tick__Fv(void) {
    run_tasks__16TKeyBoardControlFv();
    begin_effect_render__13TParticleCtrlFv();
    GXSetZMode(1, 7, 0);
    TCameraCtrl__sub_80069024();
    set_cull_none__8TObjFishFv();
    TObjPlayer__sub_803D85D8(lbl_805D3584);
    GXSetZMode(1, 3, 1);
    GXSetViewport(lbl_805DC43C, lbl_805DC43C, lbl_805DC430, lbl_805DC42C, lbl_805DC43C, lbl_805DC428);
    set_cull_none__8TObjFishFv();
    end_effect_render__13TParticleCtrlFv();
    fn_803DCEC8();
    fn_803DCF0C();
    TKeyBoardControl__sub_8000F7FC();
}

s32 TKeyBoardControl__sub_801E3E24(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    temp_r3 = TLobby__sub_803CD840((void *) (arg0), (void *) (arg1), (int) (0), (void *) (arg2));
    if (temp_r3 >= 0) {
loop_2:
        if (TLobby__sub_803CD5C4((void *) (arg0)) != 3) {
            TLobby__sub_800F8FB8();
            flush_input__16TKeyBoardControlFv();
            TLobby__sub_80228074();
            TKeyBoardControl__sub_803DEA18();
            disable_disconnected_ports__16TKeyBoardControlFv((void *) (&TKeyBoardControl__data_80506270.value));
            reset_state_byte__6TLobbyFv();
            goto loop_2;
        }
    }
    return temp_r3;
}

s32 TLobby__sub_801E3E9C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    temp_r3 = TLobby__sub_803CD840((void *) (arg0), (void *) (arg1), (int) (0), (void *) (arg2));
    if (temp_r3 >= 0) {
loop_1:
        if (TLobby__sub_803CD5C4((void *) (arg0)) != 3) {
            TLobby__sub_800F8FB8();
            TLobby__sub_803382E4();
            run_frame__6TLobbyFv();
            goto loop_1;
        }
    }
    return temp_r3;
}
void bswap_16__FPUs(u16 *p) {
    u32 v = *p;
    *p = (u16) (((v >> 8) & 0xFF) | ((v << 8) & 0xFF00));
}
void bswap_32__FPUl(u32 *p) {
    u32 v = *p;
    *p = (v >> 24) | ((v >> 8) & 0xFF00) | ((v << 8) & 0xFF0000) | (v << 24);
}

}
