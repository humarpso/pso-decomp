#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_802D2240 { u32 id; s32 cnt; };

struct T_802D2240 { s32 a; s32 b; };

extern "C" {
void* get_trade_obj_ptr__6TLobbyFPv(void* p);
void TLobby__sub_802D22F0(void* p, void* q);
void TLobby__sub_802D2240(E_802D2240 *arg0, u32 arg1);
}

extern "C" {

s32 get_state__19TWindowSubTradeMainFv(void);
void TLobby__sub_802D22F0(void* p, void* q);
void * TLobby__sub_802D2334(void);
void* get_trade_obj_ptr__6TLobbyFPv(void* p);

s32 get_state__19TWindowSubTradeMainFv(void) {
    void *temp_r3;

    temp_r3 = TLobby__sub_802D2334();
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, s32 *, 4);
    }
    return 0;
}
void TLobby__sub_802D2240(E_802D2240 *arg0, u32 arg1) {
    E_802D2240 *p;
    s32 i;
    if ((u32)(arg1 + 0x10000) == 0xFF01) {
        T_802D2240 *t = (T_802D2240 *)((void *)get_trade_obj_ptr__6TLobbyFPv((void*)(arg0)));
        t->b = 0;
        return;
    }
    {
    p = arg0;
    for (i = 0; i < 0x1F; i++, p++) {
        if (arg1 == p->id) {
            break;
        }
    }
    i++;
    p++;
    while (i < 0x1F) {
        if ((u32)(p->id + 0x10000) == 0xFF01) {
            break;
        }
        TLobby__sub_802D22F0((void*)(p - 1), (void*)(p));
        p->id = -1;
        i++;
        p->cnt = 0;
        p++;
    }
    }
}

}
