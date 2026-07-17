#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjNpcHRM00__sub_8014B2E0(void);
void TLobby__sub_800F957C(void*);
void TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 TObjNpcHRM00__data_805D57C0;
extern u32 TObjNpcHRM00__data_805D57C4;

void TObjNpcHRM00__sub_8014B2E0(void) {
    if ((u32) TObjNpcHRM00__data_805D57C4 != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcHRM00__data_805D57C4);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TObjNpcHRM00__data_805D57C4);
        TObjNpcHRM00__data_805D57C4 = 0U;
    }
    if ((u32) TObjNpcHRM00__data_805D57C0 != 0U) {
        TLobby__sub_800F957C((void*)TObjNpcHRM00__data_805D57C0);
        TObjNpcHRM00__data_805D57C0 = 0U;
    }
}

}
