#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
f32 calc_boss4_scale__10TObjPlayerFi(s32);
void set_param__12TObjEneLappyFPvi(void *, s32);
M2C_UNK bindModel__11TObjEneMojaFi(void *, int);
extern const f32 lbl_805D9BE0;
void TObjPlayer__sub_800ACAA8(u8 *arg0);
s32 TObjEneDellBiter__sub_80087350(s32, s32);
void refresh_lobby_state__10TObjPlayerFPv(void *);
s32 send_entity_set_flags__6TLobbyFPv(void *);
void TObjPlayer__sub_800ACD00(u8 *arg0);
}

extern "C" {

void clamp_stat_354__10TObjPlayerFPv(void *arg0);

extern f32 lbl_805D9BD8;
extern f32 lbl_805D9BDC;

void clamp_stat_354__10TObjPlayerFPv(void *arg0) {
    f32 lo = lbl_805D9BD8;
    if (M2C_FIELD(arg0, f32 *, 0x354) < lo) {
        M2C_FIELD(arg0, f32 *, 0x354) = lo;
    } else if (lbl_805D9BDC < M2C_FIELD(arg0, f32 *, 0x354)) {
        M2C_FIELD(arg0, f32 *, 0x354) = (f32) lbl_805D9BDC;
    }
    M2C_FIELD(arg0, s32 *, 0x374) = (s32) M2C_FIELD(arg0, f32 *, 0x354);
}
void TObjPlayer__sub_800ACAA8(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x368);
    if (temp_r0 >= 1) {
        M2C_FIELD(arg0, s32 *, 0x368) = 1;
        set_param__12TObjEneLappyFPvi(arg0, 2);
        bindModel__11TObjEneMojaFi((void *) (arg0), (int) (2));
        return;
    }
    if (temp_r0 <= 0) {
        if (calc_boss4_scale__10TObjPlayerFi((s32) arg0) < lbl_805D9BE0) {
            M2C_FIELD(arg0, s32 *, 0x368) = 1;
            set_param__12TObjEneLappyFPvi(arg0, 2);
            bindModel__11TObjEneMojaFi((void *) (arg0), (int) (2));
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x368) = 0;
        set_param__12TObjEneLappyFPvi(arg0, 1);
        bindModel__11TObjEneMojaFi((void *) (arg0), (int) (1));
    }
}
void TObjPlayer__sub_800ACD00(u8 *arg0) {
    u8 *temp_r6;
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 9) {
        M2C_FIELD(arg0, s16 *, 0x326) = 9;
        M2C_FIELD(arg0, s16 *, 0xB8) = 7;
        temp_r6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xA4));
        M2C_FIELD(temp_r6, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r6, s32 *, 0x18) & 0xFFFF7FFE);
        TObjEneDellBiter__sub_80087350((s32) (arg0 + 0x2FC), 0xF1);
        refresh_lobby_state__10TObjPlayerFPv(arg0);
        send_entity_set_flags__6TLobbyFPv(arg0);
        M2C_FIELD(arg0, s32 *, 0x374) = 0;
    }
}

}
