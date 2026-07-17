#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
void TLobby__sub_800F957C(void*);
void TLobby__sub_803DA16C(void*);
extern u32 TObjNpcNHW01__data_805D5838;
extern u32 TObjNpcNHW01__data_805D583C;

void TObjNpcNHW01__sub_8014D210(void) {
    if ((u32) TObjNpcNHW01__data_805D583C != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcNHW01__data_805D583C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TObjNpcNHW01__data_805D583C);
        TObjNpcNHW01__data_805D583C = 0U;
    }
    if ((u32) TObjNpcNHW01__data_805D5838 != 0U) {
        TLobby__sub_800F957C((void*)TObjNpcNHW01__data_805D5838);
        TObjNpcNHW01__data_805D5838 = 0U;
    }
}

}
