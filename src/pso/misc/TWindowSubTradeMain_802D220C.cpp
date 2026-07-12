#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void * TLobby__sub_802D2334(void);
void TLobby__sub_802D22F0(void* p, void* q);
void* TLobby__sub_802D2304(void* p);

s32 get_state__19TWindowSubTradeMainFv(void) {
    void *temp_r3;

    temp_r3 = TLobby__sub_802D2334();
    if (temp_r3 != NULL) {
        return M2C_FIELD(temp_r3, s32 *, 4);
    }
    return 0;
}

}
