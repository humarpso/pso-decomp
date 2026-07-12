#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_data__10TBoss6RockFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK TLobby__sub_803DA16C(void*);

extern u32 TBoss6Rock__data_805D6EF0;
extern u32 TBoss6Rock__data_805D6EF4;

void free_data__10TBoss6RockFv(void) {
    if ((u32) TBoss6Rock__data_805D6EF0 != 0U) {
        TLobby__sub_8001FE7C((void*)TBoss6Rock__data_805D6EF0, 1);
        TBoss6Rock__data_805D6EF0 = 0U;
    }
    if ((u32) TBoss6Rock__data_805D6EF4 != 0U) {
        TLobby__sub_803DA16C((void*)TBoss6Rock__data_805D6EF4);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TBoss6Rock__data_805D6EF4);
        TBoss6Rock__data_805D6EF4 = 0U;
    }
}

}
