#include "types.h"

extern "C" {

s32 check_camera_mode__10TObjPlayerFv();
s32 fn_8030A7B0();
s32 get_main_phase();
s32 TRaderMapCore__sub_8030A808();
s32 TObjPlayer__sub_801B19EC(s32);
s32 TObjPlayer__sub_801B5680(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 fn_80354C7C(s32);
s32 fn_80354E3C();
s32 fn_800822E8(s32, s32);
s32 TObjPlayer__sub_801AF834(s32);
s32 TObjPlayer__sub_801AF868(s32);
s32 fn_801B0EE8();
s32 TObjPlayer__sub_801B102C(s32);
s32 TObjPlayer__sub_801BF19C(s32);
s32 TObjPlayer__sub_801BF1DC(s32);
s32 TObjPlayer__sub_801BF3E8(s32);
int fn_80019248(void*);
int TObjPlayer__sub_801B12A8(void*);
int TObjPlayer__sub_801BEF60(void*, void*);
int TObjPlayer__sub_801BEF68(void*);
void fn_801AEFFC(void* p);
void fn_801AF03C(void* p);
void fn_801AEB80(void);
int TObjPlayer__sub_801AF288(void);

void fn_801AEB80(void) {  }
int fn_801AEB84(void) { return 0; }
int fn_801AEBE8(void) { return 0; }
int fn_801AEC4C(void) { return 0; }
int fn_801AECB0(void) { return 0; }
int fn_801AED14(void) { return 0; }
int fn_801AED78(void) { return 0; }
int fn_801AEDC4(void) { return 0; }
u8 fn_801AEE10(void) {
    return (u8) (get_main_phase() == 0xF);
}
u8 fn_801AEE3C(void) {
    int var_r31;

    var_r31 = 0;
    if ((check_camera_mode__10TObjPlayerFv() != 0) && (fn_8030A7B0() == 2)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}
u8 fn_801AEE84(void) {
    int var_r31;

    var_r31 = 0;
    if ((check_camera_mode__10TObjPlayerFv() != 0) && (fn_8030A7B0() == 1)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}
u8 fn_801AEECC(void) {
    return (u8) (TRaderMapCore__sub_8030A808() == 1);
}
s32 fn_801AEEF8(s32 arg0) {
    s32 temp_r31;

    if (fn_80354E3C() == 0) {
        return 0;
    }
    temp_r31 = TPlayerBattleCtrl4P__sub_801BA74C((u16) arg0);
    if ((fn_80354C7C(arg0) == 0) || (TObjPlayer__sub_801B5680(temp_r31) != 0) || (TObjPlayer__sub_801B19EC(temp_r31) == 0)) {
        return 0;
    }
    return 1;
}
int fn_801AEF80(void) { return 0; }
int fn_801AEFAC(void) { return 0; }
void fn_801AEFFC(void* p) { if (fn_80019248(p) != 0) { TObjPlayer__sub_801BEF60((char*)p + 0x550, (void*)0); } }
void fn_801AF03C(void* p) { if (TObjPlayer__sub_801B12A8(p) == 0) { TObjPlayer__sub_801BEF68((char*)p + 0x384); } }
int TObjPlayer__vt70(void) { return 0; }
int TObjPlayer__vt69(void) { return 0; }
int TObjPlayer__vt68(void) { return 0; }
int TObjPlayer__vt67(void) { return 0; }

}
