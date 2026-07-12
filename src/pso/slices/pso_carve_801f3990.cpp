#include "types.h"

extern "C" {

void build_6x75_update_quest_flag_dc(void* p);
s32 TLobby__send_and_handle_60(s32);
s32 bswap_16__FPUs(s32);
s32 TObjPlayer__sub_8001960C();
s32 TAdSinglePlyChrSelectGC__sub_8007EBB4(s32);
s32 TQuestVmDownLoadServer__sub_8007EBFC();
s32 TScene__sub_800F9D80();
s32 TLobby__sub_800F9DF4(s32, s32);
s32 rebuild_all__6TLobbyFi(s32);

int TLobby__sub_801F3990(void) { return 0; }
int TLobby__sub_801F39C4(void) { return 0; }
void build_6x75_update_quest_flag_dc(void* p) { *(u8*)((char*)p + 0x0) = 117; *(u8*)((char*)p + 0x1) = 3; }

}
