#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

#include "types.h"
extern "C" {
M2C_UNK bswap_pick_up_item_request__6TLobbyFi();
M2C_UNK dispatch_packet__6TLobbyFPv(void *);
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK bswap_pick_up_item_packet__6TLobbyFi();
M2C_UNK TLobby__send_and_handle_60(void *);
s32 read_be16_field2__10TObjPlayerFPv();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 init_floor_item_entry__6TLobbyFPv();
void set_item_count__6TLobbyFPvs(void* p, s16 v);

}

void send_pick_up_item_request__6TLobbyFi(s32 arg0) {
    bswap_pick_up_item_request__6TLobbyFi();
    dispatch_packet__6TLobbyFPv((void *) (arg0));
}

}

}
