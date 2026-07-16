#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void release_static_instance__13TOGrassJungleFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 TOGrassJungle__data_805D65D8;
extern u32 TOGrassJungle__data_805D65DC;

void release_static_instance__13TOGrassJungleFv(void) {
    if ((u32) TOGrassJungle__data_805D65DC != 0U) {
        TLobby__sub_803DA16C((void*)TOGrassJungle__data_805D65DC);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TOGrassJungle__data_805D65DC);
        TOGrassJungle__data_805D65DC = 0U;
    }
    if ((u32) TOGrassJungle__data_805D65D8 != 0U) {
        TLobby__sub_8001FE7C((void*)TOGrassJungle__data_805D65D8, 1);
        TOGrassJungle__data_805D65D8 = 0U;
    }
}

}
