#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
void TLobby__sub_800F957C(void*);
void TLobby__sub_803DA16C(void*);
extern u32 TObjNpcNFW00__data_805D5820;
extern u32 TObjNpcNFW00__data_805D5824;

void TObjNpcNFW00__sub_8014CC94(void) {
    if ((u32) TObjNpcNFW00__data_805D5824 != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcNFW00__data_805D5824);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TObjNpcNFW00__data_805D5824);
        TObjNpcNFW00__data_805D5824 = 0U;
    }
    if ((u32) TObjNpcNFW00__data_805D5820 != 0U) {
        TLobby__sub_800F957C((void*)TObjNpcNFW00__data_805D5820);
        TObjNpcNFW00__data_805D5820 = 0U;
    }
}

}
