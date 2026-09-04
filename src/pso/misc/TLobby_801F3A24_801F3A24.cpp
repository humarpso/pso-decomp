#include "types.h"

extern "C" {

int TLobby__sub_801F3A80(void);
int TLobby__sub_801F3AD8(void);
void refresh_quest_list__6TLobbyFi(s32 arg0);
s32 TLobby__send_and_handle_60(s32);
s32 TLobby__sub_800F9DF4(s32, s32);
s32 alloc__22TQuestVmDownLoadServerFPv();
s32 bswap_16__FPUs(s32);
void build_6x75_update_quest_flag_dc(void* p);
s32 read_be16_field2__10TObjPlayerFPv();
s32 rebuild_all__6TLobbyFi(s32);
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
s32 update_lobby_scene__6TSceneFPv();

void refresh_quest_list__6TLobbyFi(s32 arg0) {
    s32 temp_r3;

    if (update_lobby_scene__6TSceneFPv() >= 0) {
        temp_r3 = alloc__22TQuestVmDownLoadServerFPv();
        if (temp_r3 != 0) {
            TLobby__sub_800F9DF4(arg0, temp_r3);
            rebuild_all__6TLobbyFi(temp_r3);
            safe_free__23TAdSinglePlyChrSelectGCFUi(temp_r3);
        }
    }
}

int TLobby__sub_801F3A80(void) { return 0; }
int TLobby__sub_801F3AD8(void) { return 0; }

}
