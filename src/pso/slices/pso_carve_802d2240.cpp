#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * TLobby__sub_802D2334(void);
void TLobby__sub_802D22F0(void* p, void* q);
void* get_trade_obj_ptr__6TLobbyFPv(void* p);

int TLobby__sub_802D2240(void) { return 0; }

}
