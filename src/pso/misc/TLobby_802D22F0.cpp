#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_802D22F0(void* p, void* q);
int TLobby__sub_802D230C(void);
void * TLobby__sub_802D2334(void);
int TLobby__sub_802D2358(void);
void* get_trade_obj_ptr__6TLobbyFPv(void* p);
void prepare_trade_packet__6TLobbyFPv(void* a0);
int byteswap_trade_packet__6TLobbyFPv(void);

void TLobby__sub_802D22F0(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
void* get_trade_obj_ptr__6TLobbyFPv(void* p) { return (char*)p + 0xf0; }

int TLobby__sub_802D230C(void) { return 0; }
void * TLobby__sub_802D2334(void) { return 0; }
int TLobby__sub_802D2358(void) { return 0; }

    extern int lbl_805D53A0;
void prepare_trade_packet__6TLobbyFPv(void* a0) { *(short*)((char*)a0 + 0x2) = lbl_805D53A0; byteswap_trade_packet__6TLobbyFPv(); }

}
