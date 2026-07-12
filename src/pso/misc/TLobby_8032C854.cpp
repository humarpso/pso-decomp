#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_data__6TLobbyFi(s32 arg0);
void update_alloc_size__6TLobbyFv(void);
u32 TScene__sub_800F9D80();
M2C_UNK TLobby__sub_800F9DF4(s32, u32);
M2C_UNK fn_8032CF70(void*);
u32 fn_8032D018();
u32 fn_8032D020();

extern u32 TLobby__data_805D6CC0;
extern u32 TLobby__data_805D6CC8;

void send_data__6TLobbyFi(s32 arg0) {
    u32 temp_r3;

    temp_r3 = TScene__sub_800F9D80();
    TLobby__data_805D6CC8 = temp_r3;
    if (temp_r3 > 0x40000U) {
        TLobby__data_805D6CC8 = 0U;
        return;
    }
    if ((u32) TLobby__data_805D6CC0 != 0U) {
        TLobby__sub_800F9DF4(arg0, TLobby__data_805D6CC0);
        return;
    }
    TLobby__data_805D6CC8 = 0U;
}

extern u32 TLobby__data_805D6CC0;
extern u32 TLobby__data_805D6CC8;

void update_alloc_size__6TLobbyFv(void) {
    u32 temp_r3;

    temp_r3 = fn_8032D020();
    TLobby__data_805D6CC8 = temp_r3;
    if (temp_r3 > 0x40000U) {
        TLobby__data_805D6CC8 = 0U;
        return;
    }
    if ((u32) TLobby__data_805D6CC0 != 0U) {
        fn_8032CF70((void*)TLobby__data_805D6CC0);
        TLobby__data_805D6CC8 = fn_8032D018();
        return;
    }
    TLobby__data_805D6CC8 = 0U;
}

}
