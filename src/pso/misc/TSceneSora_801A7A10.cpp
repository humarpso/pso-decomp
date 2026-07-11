#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TSceneSora__sub_801A7A10(void);
void TSceneSora__sub_801A7A44(void);
M2C_UNK TScene__sub_801A7E40();
M2C_UNK TScene__sub_801A7E4C();

extern s32 TSceneSora__data_805D3620;
extern u32 TSceneSora__data_805D6050;

void TSceneSora__sub_801A7A10(void) {
    TScene__sub_801A7E40();
    if ((u32) TSceneSora__data_805D6050 != 0U) {
        TSceneSora__data_805D3620 = 1;
    }
}

extern s32 TSceneSora__data_805D3620;
extern u32 TSceneSora__data_805D6050;

void TSceneSora__sub_801A7A44(void) {
    TScene__sub_801A7E4C();
    if ((u32) TSceneSora__data_805D6050 != 0U) {
        TSceneSora__data_805D3620 = 0;
    }
}

}
