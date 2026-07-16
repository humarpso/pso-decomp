#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void byteswap_and_send__6TLobbyFi(s32 arg0);
M2C_UNK TLobby__send_and_handle_60(void *);
void TLobby__sub_8015C9BC(void* p);
void TOCtrlDubchik__sub_8015C9D0(void);
void TObjPlayer__sub_8015C940(void);
s32 bswap_32__FPUl(s32);
M2C_UNK byteswap_event_packet__6TLobbyFi();
s32 read_be16_field2__10TObjPlayerFPv();

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void byteswap_and_send__6TLobbyFi(s32 arg0) {
    byteswap_event_packet__6TLobbyFi();
    TLobby__send_and_handle_60((void *) (arg0));
}

}

}
