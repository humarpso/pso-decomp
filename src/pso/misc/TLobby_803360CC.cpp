#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void queue_destruction_and_cleanup__6TLobbyFv(void);
void destroy_download_server__6TLobbyFv(void);
M2C_UNK TLobby__sub_8033612C(void*);
M2C_UNK set_flag_and_clear_download__6TLobbyFPv(void*);
M2C_UNK queue_destruction__7TObjectFv();

extern u32 lbl_805D6D40;

void queue_destruction_and_cleanup__6TLobbyFv(void) {
    queue_destruction__7TObjectFv();
    if ((u32) lbl_805D6D40 != 0U) {
        TLobby__sub_8033612C((void*)lbl_805D6D40);
    }
}

extern u32 lbl_805D6D40;

void destroy_download_server__6TLobbyFv(void) {
    queue_destruction__7TObjectFv();
    if ((u32) lbl_805D6D40 != 0U) {
        set_flag_and_clear_download__6TLobbyFPv((void*)lbl_805D6D40);
    }
}

}
