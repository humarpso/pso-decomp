#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8032C6AC(void);
void TLobby__sub_8032C6F0(void);
M2C_UNK TDLGraph__sub_8007F6F0(M2C_UNK, M2C_UNK);
u32 fn_8007F85C();
void queue_destruction__7TObjectFv(void*);

extern M2C_UNK TLobby__data_805434A8[];
extern u32 TLobby__data_805D6CC4;

void TLobby__sub_8032C6AC(void) {
    if ((u32) TLobby__data_805D6CC4 != 0U) {
        queue_destruction__7TObjectFv((void*)TLobby__data_805D6CC4);
        TLobby__data_805D6CC4 = 0U;
    }
    M2C_FIELD(TLobby__data_805434A8, s8 *, 7) = 0;
}

extern u32 TLobby__data_805D6CC4;

void TLobby__sub_8032C6F0(void) {
    u32 temp_r3;

    if ((u32) TLobby__data_805D6CC4 == 0U) {
        temp_r3 = fn_8007F85C();
        TLobby__data_805D6CC4 = temp_r3;
        if (temp_r3 != 0U) {
            TDLGraph__sub_8007F6F0(temp_r3, 2);
        }
    }
}

}
