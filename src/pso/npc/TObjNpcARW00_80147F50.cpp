#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjNpcARW00__sub_80147F50(void);
void TLobby__sub_800F957C(void*);
void TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 TObjNpcARW00__data_805D5730;
extern u32 TObjNpcARW00__data_805D5734;

void TObjNpcARW00__sub_80147F50(void) {
    if ((u32) TObjNpcARW00__data_805D5734 != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcARW00__data_805D5734);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TObjNpcARW00__data_805D5734);
        TObjNpcARW00__data_805D5734 = 0U;
    }
    if ((u32) TObjNpcARW00__data_805D5730 != 0U) {
        TLobby__sub_800F957C((void*)TObjNpcARW00__data_805D5730);
        TObjNpcARW00__data_805D5730 = 0U;
    }
}

}
