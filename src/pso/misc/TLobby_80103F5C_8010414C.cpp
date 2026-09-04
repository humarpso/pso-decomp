#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801041BC(void *arg0);
void TLobby__sub_801041D8(void);
void bswap_item__6TLobbyFPv(void* p);
void bswap_player_packet__6TLobbyFPv(void* p);
void update_and_send__6TLobbyFPv(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int bswap__9TItemDataFv(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
M2C_UNK set_flags__10TObjPlayerFPvUi(M2C_UNK *, M2C_UNK);

void bswap_player_packet__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

void update_and_send__6TLobbyFPv(void* p) { bswap_player_packet__6TLobbyFPv((void*)(p)); TLobby__send_and_handle_60(p); }

void TLobby__sub_801041BC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s8 *, 0) = 0x63;
    M2C_FIELD(arg0, s8 *, 1) = 3;
}

extern M2C_UNK lbl_805D5430;

void TLobby__sub_801041D8(void) {
    set_flags__10TObjPlayerFPvUi(&lbl_805D5430, 1);
}

void bswap_item__6TLobbyFPv(void* p) { bswap_16__FPUs((char*)p + 0x2); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xc); bswap_16__FPUs((char*)p + 0xe); bswap__9TItemDataFv((char*)p + 0x10); }

}
