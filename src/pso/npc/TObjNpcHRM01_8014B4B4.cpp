#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjNpcHRM01__sub_8014B4B4(void);
void TLobby__sub_800F957C(void*);
void TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 TObjNpcHRM01__data_805D57C8;
extern u32 TObjNpcHRM01__data_805D57CC;

void TObjNpcHRM01__sub_8014B4B4(void) {
    if ((u32) TObjNpcHRM01__data_805D57CC != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcHRM01__data_805D57CC);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TObjNpcHRM01__data_805D57CC);
        TObjNpcHRM01__data_805D57CC = 0U;
    }
    if ((u32) TObjNpcHRM01__data_805D57C8 != 0U) {
        TLobby__sub_800F957C((void*)TObjNpcHRM01__data_805D57C8);
        TObjNpcHRM01__data_805D57C8 = 0U;
    }
}

}
