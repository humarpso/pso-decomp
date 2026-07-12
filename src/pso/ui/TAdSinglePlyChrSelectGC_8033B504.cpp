#include "types.h"

extern "C" {

void init_warp__23TAdSinglePlyChrSelectGCFPv(void* a0);
int close_window__23TAdSinglePlyChrSelectGCFPv(void);
int forward_trade_action_default__16TObjCityMainWarpFPviii(void*, void*, void*, void*);
int TQuestVmDownLoadServer__sub_8006EF6C(void*);
int TWindowSubComCard__sub_80265E60(void*, float);
int check_room_seq_4__16TAdChrSelASlotGCFii(void*, void*);

    extern unsigned char lbl_80477D58[];
    extern const float lbl_805DFA30;
void init_warp__23TAdSinglePlyChrSelectGCFPv(void* a0) { close_window__23TAdSinglePlyChrSelectGCFPv(); *(int*)((char*)a0 + 0x3c) = check_room_seq_4__16TAdChrSelASlotGCFii(lbl_80477D58, (void*)2); forward_trade_action_default__16TObjCityMainWarpFPviii((void*)(*(int*)((char*)a0 + 0x3c)), (void*)TQuestVmDownLoadServer__sub_8006EF6C((void*)14), (void*)6, (void*)1); TWindowSubComCard__sub_80265E60((void*)(*(int*)((char*)a0 + 0x3c)), lbl_805DFA30); }

}
