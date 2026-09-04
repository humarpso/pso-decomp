#include "types.h"

extern "C" {

int TObjPlayer__sub_801D4308(void);
int TObjPlayer__sub_801D45B0(void);
int TObjPlayer__sub_801D4678(void);
int TObjPlayer__sub_801D46D4(void);
void TObjPlayer__sub_801D4730(void* p);
int TObjPlayer__sub_801D4744(void);
void TObjPlayer__sub_801D47D8(void* p, void* q);
int TObjPlayer__sub_801D47EC(void);
s32 check_player_action_allowed(void);
int fn_801D40D4(void);
int fn_801D41B4(void);
int fn_801D4270(void);
int reset(void* p);
s32 TCameraCtrl__sub_8006B368();
s32 TLobby__sub_8030A7B0();
s32 get_game_mode__23TAdSinglePlyChrSelectGCFv();
s32 get_main_phase();
s32 is_technique_ready__8TTecCtrlFv();
int memset(void*, int, int);

int fn_801D40D4(void) { return 0; }
s32 check_player_action_allowed(void) {
    if ((get_main_phase() == 0xE) || (is_technique_ready__8TTecCtrlFv() != 0) || ((TCameraCtrl__sub_8006B368() == 1) && (TLobby__sub_8030A7B0() == 1))) {
        return 0;
    }
    return get_game_mode__23TAdSinglePlyChrSelectGCFv();
}
int fn_801D41B4(void) { return 0; }
int fn_801D4270(void) { return 0; }
int reset(void* p) { return memset(p, 0, 28); }
int TObjPlayer__sub_801D4308(void) { return 0; }

int TObjPlayer__sub_801D45B0(void) { return 0; }
int TObjPlayer__sub_801D4678(void) { return 0; }
int TObjPlayer__sub_801D46D4(void) { return 0; }

void TObjPlayer__sub_801D4730(void* p) { *(s32*)((char*)p + 0x0) = -1; *(s32*)((char*)p + 0x4) = 0; }

int TObjPlayer__sub_801D4744(void) { return 0; }

void TObjPlayer__sub_801D47D8(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }

int TObjPlayer__sub_801D47EC(void) { return 0; }

}
