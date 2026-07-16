#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_gogo_ball__12TWindowTimerFi(s32 arg0);
M2C_UNK TLobby__send_and_handle_60(void *);
void TWindowTimer__sub_8019A6F8(void* p);
s32 bswap_32__FPUl(s32);
M2C_UNK bswap_6x79_gogo_ball__12TWindowTimerFi();
s32 read_be16_field2__10TObjPlayerFPv();

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void send_gogo_ball__12TWindowTimerFi(s32 arg0) {
    bswap_6x79_gogo_ball__12TWindowTimerFi();
    TLobby__send_and_handle_60((void *) (arg0));
}

}

}
