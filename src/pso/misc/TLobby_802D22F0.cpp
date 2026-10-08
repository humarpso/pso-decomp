#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_802D2334 { u32 a; u32 b; };

struct E_802D230C { u32 a; u32 b; };

struct E_802D2358 { u32 a; u32 b; };

extern "C" {
E_802D2334 *TLobby__sub_802D2334(E_802D2334 *p, u32 key);
E_802D230C *find_free_trade_slot__6TLobbyFPv(E_802D230C *p);
void TLobby__sub_802D2358(E_802D2358 *p);
}

extern "C" {

void TLobby__sub_802D22F0(void* p, void* q);
void* get_trade_obj_ptr__6TLobbyFPv(void* p);
void prepare_trade_packet__6TLobbyFPv(void* a0);
int byteswap_trade_packet__6TLobbyFPv(void);

void TLobby__sub_802D22F0(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
void* get_trade_obj_ptr__6TLobbyFPv(void* p) { return (char*)p + 0xf0; }

E_802D230C *find_free_trade_slot__6TLobbyFPv(E_802D230C *p) {
    s32 i;
    for (i = 0; i < 30; i++, p++) {
        if (p->a == 0xFFFFFFFF) return p;
    }
    return 0;
}

E_802D2334 *TLobby__sub_802D2334(E_802D2334 *p, u32 key) {
    s32 i;
    for (i = 0; i < 31; i++, p++) {
        if (key == p->a) return p;
    }
    return 0;
}

    extern int lbl_805D53A0;

void TLobby__sub_802D2358(E_802D2358 *p) {
    s32 i;
    for (i = 0; i < 31; i++, p++) {
        p->a = 0xFFFFFFFF;
        p->b = 0;
    }
}

void prepare_trade_packet__6TLobbyFPv(void* a0) { *(short*)((char*)a0 + 0x2) = lbl_805D53A0; byteswap_trade_packet__6TLobbyFPv(); }

}
