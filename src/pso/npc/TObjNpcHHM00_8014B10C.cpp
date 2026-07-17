#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjNpcHHM00__sub_8014B10C(void);
void TLobby__sub_800F957C(void*);
void TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 TObjNpcHHM00__data_805D57B8;
extern u32 TObjNpcHHM00__data_805D57BC;

void TObjNpcHHM00__sub_8014B10C(void) {
    if ((u32) TObjNpcHHM00__data_805D57BC != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcHHM00__data_805D57BC);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TObjNpcHHM00__data_805D57BC);
        TObjNpcHHM00__data_805D57BC = 0U;
    }
    if ((u32) TObjNpcHHM00__data_805D57B8 != 0U) {
        TLobby__sub_800F957C((void*)TObjNpcHHM00__data_805D57B8);
        TObjNpcHHM00__data_805D57B8 = 0U;
    }
}

}
