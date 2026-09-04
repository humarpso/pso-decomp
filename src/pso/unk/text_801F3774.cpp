#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {
void read_be16_field2__10TObjPlayerFPv(void *);
s32 bswap_16__FPUs(s32);
void TLobby__sub_801F39C4(void *arg0);
void TLobby__sub_801F39C4(void *arg0);
s32 TLobby__send_and_handle_60(s32);
void TLobby__sub_801F3990(void *arg0);
}

extern "C" {

void TLobby__sub_801F3774(void);
int TLobby__sub_801F3778(void);
void build_6x75_update_quest_flag_dc(void* p);
s32 TLobby__send_and_handle_60(s32);
s32 TLobby__sub_800F9DF4(s32, s32);
s32 alloc__22TQuestVmDownLoadServerFPv();
s32 bswap_16__FPUs(s32);
s32 rebuild_all__6TLobbyFi(s32);
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
s32 update_lobby_scene__6TSceneFPv();

void TLobby__sub_801F3774(void) {  }

int TLobby__sub_801F3778(void) { return 0; }

void TLobby__sub_801F3990(void *arg0) {
    TLobby__sub_801F39C4(arg0);
    TLobby__send_and_handle_60((s32)(arg0));
}

void TLobby__sub_801F39C4(void *arg0) {
    read_be16_field2__10TObjPlayerFPv(arg0);
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 4)));
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 6)));
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 8)));
    bswap_16__FPUs((s32)((void *)((char *)arg0 + 10)));
}

void build_6x75_update_quest_flag_dc(void* p) { *(u8*)((char*)p + 0x0) = 117; *(u8*)((char*)p + 0x1) = 3; }

}
