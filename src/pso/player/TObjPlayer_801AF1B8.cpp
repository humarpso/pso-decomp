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

void update_movement_effects__10TObjPlayerFi(s32 arg0) {
    if ((fn_801B0EE8() != 0) && (TObjPlayer__sub_801AF868(arg0) == 0) && (TObjPlayer__sub_801AF834(arg0) != 0) && (fn_800822E8(arg0, 0x408000) == 0) && (TObjPlayer__sub_801B12A8((void*)(arg0)) == 0) && (TObjPlayer__sub_801B102C(arg0) == 0)) {
        TObjPlayer__sub_801BF1DC(arg0 + 0x384);
    }
    if ((TObjPlayer__sub_801B12A8((void*)(arg0)) == 0) && (fn_800822E8(arg0, 2) != 0) && (TObjPlayer__sub_801BF3E8(arg0 + 0x360) != 0)) {
        TObjPlayer__sub_801BF19C(arg0 + 0x384);
    }
}
int TObjPlayer__sub_801AF288(void) { return 199; }

}
