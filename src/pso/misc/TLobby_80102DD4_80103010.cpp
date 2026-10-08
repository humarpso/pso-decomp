#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_80103044 { u8 f0; u8 f1; u8 pad[2]; u16 f4; u16 f6; s32 f8; };

extern "C" {
void init_6x59_packet__6TLobbyFPv(O_80103044 *self);
}

extern "C" {

void send_pick_up_item__6TLobbyFi(s32 arg0);
M2C_UNK TLobby__send_and_handle_60(void *);
s32 init_floor_item_entry__6TLobbyFPv();
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
M2C_UNK bswap_pick_up_item_packet__6TLobbyFi();
M2C_UNK bswap_pick_up_item_request__6TLobbyFi();
M2C_UNK dispatch_packet__6TLobbyFPv(void *);
s32 read_be16_field2__10TObjPlayerFPv();
void set_item_count__6TLobbyFPvs(void* p, s16 v);

#include "types.h"
extern "C" {
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void send_pick_up_item__6TLobbyFi(s32 arg0) {
    bswap_pick_up_item_packet__6TLobbyFi();
    TLobby__send_and_handle_60((void *) (arg0));
}
void init_6x59_packet__6TLobbyFPv(O_80103044 *self) {
    self->f4 = 0xFFFF;
    self->f6 = 0;
    self->f8 = -1;
    self->f0 = 0x59;
    self->f1 = 3;
}

}

}

#include "types.h"
extern "C" {
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

}

}

}
