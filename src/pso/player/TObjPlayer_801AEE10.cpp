#include "types.h"

extern "C" {

s32 check_camera_mode__10TObjPlayerFv();
s32 TLobby__sub_8030A7B0();
s32 get_main_phase();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 TObjPlayer__sub_801B19EC(s32);
s32 check_flag_100__10TObjPlayerFPv(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 TObjPlayer__sub_80354C7C(s32);
s32 TObjPlayer__sub_80354E3C();
s32 TLobby__sub_800822E8(s32, s32);
s32 TObjPlayer__sub_801AF834(s32);
s32 TObjPlayer__sub_801AF868(s32);
s32 TTecCtrl__sub_801B0EE8();
s32 check_flag_800000__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_801BF19C(s32);
s32 TObjPlayer__sub_801BF1DC(s32);
s32 TObjPlayer__sub_801BF3E8(s32);
int TObjPlayer__sub_80019248(void*);
int test_flag_2000000__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801BEF60(void*, void*);
int TObjPlayer__sub_801BEF68(void*);
void TObjPlayer__sub_801AEFFC(void* p);
void TObjPlayer__sub_801AF03C(void* p);
void TObjPlayer__sub_801AEB80(void);
int TObjPlayer__sub_801AF288(void);

u8 TObjPlayer__sub_801AEE10(void) {
    return (u8) (get_main_phase() == 0xF);
}
u8 TObjPlayer__sub_801AEE3C(void) {
    int var_r31;

    var_r31 = 0;
    if ((check_camera_mode__10TObjPlayerFv() != 0) && (TLobby__sub_8030A7B0() == 2)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}
u8 TObjPlayer__sub_801AEE84(void) {
    int var_r31;

    var_r31 = 0;
    if ((check_camera_mode__10TObjPlayerFv() != 0) && (TLobby__sub_8030A7B0() == 1)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}
u8 TObjPlayer__sub_801AEECC(void) {
    return (u8) (is_not_split_screen__13TRaderMapCoreFv() == 1);
}
s32 TObjPlayer__sub_801AEEF8(s32 arg0) {
    s32 temp_r31;

    if (TObjPlayer__sub_80354E3C() == 0) {
        return 0;
    }
    temp_r31 = TPlayerBattleCtrl4P__sub_801BA74C((u16) arg0);
    if ((TObjPlayer__sub_80354C7C(arg0) == 0) || (check_flag_100__10TObjPlayerFPv(temp_r31) != 0) || (TObjPlayer__sub_801B19EC(temp_r31) == 0)) {
        return 0;
    }
    return 1;
}

}
