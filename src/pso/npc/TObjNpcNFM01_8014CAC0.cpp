#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjNpcNFM01__sub_8014CAC0(void);
void TLobby__sub_800F957C(void*);
void TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 TObjNpcNFM01__data_805D5818;
extern u32 TObjNpcNFM01__data_805D581C;

void TObjNpcNFM01__sub_8014CAC0(void) {
    if ((u32) TObjNpcNFM01__data_805D581C != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcNFM01__data_805D581C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TObjNpcNFM01__data_805D581C);
        TObjNpcNFM01__data_805D581C = 0U;
    }
    if ((u32) TObjNpcNFM01__data_805D5818 != 0U) {
        TLobby__sub_800F957C((void*)TObjNpcNFM01__data_805D5818);
        TObjNpcNFM01__data_805D5818 = 0U;
    }
}

}
