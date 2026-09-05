#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
f32 get_mag_scale_f__10TObjPlayerFPv(void *);
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK set_global_pair__10TObjPlayerFii(int, int);
M2C_UNK TObjPlayer__sub_803DED84(void *);
extern s32 some_id_805c6f74;
extern f32 TObjPlayer__data_805DC294;
void TObjPlayer__sub_801B4C34(s32 arg0);
}

extern "C" {

struct S801B5200_801B3FD8 { s8 b[2]; s16 h; };

void clear_action_flag__10TObjPlayerFPv(void *arg0);
s32 draw_small_font__10TObjPlayerFi(s32 arg0);
s32 get_battle_ctrl_flag__10TObjPlayerFUs(u16 arg0);
void send_code_45_1__10TObjPlayerFi(s32 arg0);
M2C_UNK TFontSmallLobby__sub_801C0228();
s32 TObjPlayer__sub_801AFF0C();
s32 TObjPlayer__sub_801C2044(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK clear_flag_0x2__10TObjPlayerFPv(void *);
u32 is_action_active__10TObjPlayerFPv(void *);
s16 obj_getField1c(s32);
s32 obj_isState2_324();
M2C_UNK send_lobby_update_font__10TObjPlayerFPv(void *);
M2C_UNK set_code_45_1__10TObjPlayerFPv(void *);

void clear_action_flag__10TObjPlayerFPv(void *arg0) {
    if ((TObjPlayer__sub_801C2044(M2C_FIELD(arg0, s32 *, 0xD00) + 0x20) == 0) && (is_action_active__10TObjPlayerFPv(arg0) != 0U)) {
        clear_flag_0x2__10TObjPlayerFPv(arg0);
        send_code_45_1__10TObjPlayerFi((s32)(arg0));
    }
}

void TObjPlayer__sub_801B4C34(s32 arg0) {
    if (!(get_mag_scale_f__10TObjPlayerFPv((void *) (arg0 + 0x608)) >= TObjPlayer__data_805DC294)) {
        reset_transform_state__10TObjPlayerFv();
        some_id_805c6f74 |= 0x810;
        set_global_pair__10TObjPlayerFii((int) (-1), (int) (0x800));
        TObjPlayer__sub_803DED84((void *) (arg0 + 0x624));
    }
}

s32 get_battle_ctrl_flag__10TObjPlayerFUs(u16 arg0) {
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16)arg0);
    if ((temp_r3 != 0) && (TObjPlayer__sub_801AFF0C() != 0)) {
        return temp_r3;
    }
    return 0;
}

s32 draw_small_font__10TObjPlayerFi(s32 arg0) {
    TFontSmallLobby__sub_801C0228();
    return arg0;
}

void send_code_45_1__10TObjPlayerFi(s32 arg0) {
    struct S801B5200_801B3FD8 sp8;

    if ((arg0 == 0) || (obj_isState2_324() == 0)) {
        set_code_45_1__10TObjPlayerFPv(&sp8);
        sp8.h = obj_getField1c(arg0);
        send_lobby_update_font__10TObjPlayerFPv(&sp8);
    }
}

}
