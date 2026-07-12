#include "types.h"

extern "C" {

s32 TObjPlayer__sub_8002AEB8(s32, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
s32 TObjPlayer__sub_801BA54C(u32, s16);
int bswap_16__FPUs(void*);
int TObjPlayer__sub_8001960C(void*);
int TLobby__send_and_handle_60(void*);
s32 TNpcPlayer__sub_8034EF30(void* p);
void TNpcPlayer__sub_8034EF38(void* p, s32 v);
void TNpcPlayer__sub_8034EF40(void* p, s16 v);
void build_6x69_npc_control(void* p);

void TNpcPlayer__sub_8034EE70(u16 arg0, s32 arg1) {
    u32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp_r3 != 0U) {
        TObjPlayer__sub_8002AEB8(temp_r3 + 0x644, arg1);
    }
}

}
