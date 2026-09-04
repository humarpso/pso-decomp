#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_8033612C(void*);
void TLobby__sub_803361FC(void);
void destroy_download_server__6TLobbyFv(void);
void queue_destruction_and_cleanup__6TLobbyFv(void);
void set_flag_and_clear_download__6TLobbyFPv(void *arg0);
s32 clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
M2C_UNK queue_destruction__7TObjectFv();

extern u32 lbl_805D6D40;

void queue_destruction_and_cleanup__6TLobbyFv(void) {
    queue_destruction__7TObjectFv();
    if ((u32) lbl_805D6D40 != 0U) {
        TLobby__sub_8033612C((void*)((void*)lbl_805D6D40));
    }
}

extern u32 lbl_805D6D40;

void destroy_download_server__6TLobbyFv(void) {
    queue_destruction__7TObjectFv();
    if ((u32) lbl_805D6D40 != 0U) {
        set_flag_and_clear_download__6TLobbyFPv((void *)((void*)lbl_805D6D40));
    }
}

int TLobby__sub_8033612C(void*) { return 0; }

void set_flag_and_clear_download__6TLobbyFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) | 1);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        clear_flag4_bit4__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, void **, 0x24));
    }
}

void TLobby__sub_803361FC(void) {  }

}
