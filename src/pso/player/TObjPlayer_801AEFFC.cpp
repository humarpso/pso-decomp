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
s32 update_movement_by_screen__10TObjPlayerFv(s32);
s32 TObjPlayer__sub_801AF868(s32);
s32 is_technique_ready__8TTecCtrlFv();
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

void TObjPlayer__sub_801AEFFC(void* p) { if (TObjPlayer__sub_80019248(p) != 0) { TObjPlayer__sub_801BEF60((char*)p + 0x550, (void*)0); } }
void TObjPlayer__sub_801AF03C(void* p) { if (test_flag_2000000__10TObjPlayerFPv(p) == 0) { TObjPlayer__sub_801BEF68((char*)p + 0x384); } }

}
