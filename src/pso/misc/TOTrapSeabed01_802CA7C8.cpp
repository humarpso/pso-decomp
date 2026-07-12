#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_static_resources__14TOTrapSeabed01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);
M2C_UNK TLobby__sub_803DA16C(void*);

extern u32 TOTrapSeabed01__data_805D6810;
extern u32 TOTrapSeabed01__data_805D6814;

void free_static_resources__14TOTrapSeabed01Fv(void) {
    if ((u32) TOTrapSeabed01__data_805D6814 != 0U) {
        TLobby__sub_803DA16C((void*)TOTrapSeabed01__data_805D6814);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TOTrapSeabed01__data_805D6814);
        TOTrapSeabed01__data_805D6814 = 0U;
    }
    if ((u32) TOTrapSeabed01__data_805D6810 != 0U) {
        TLobby__sub_8001FE7C((void*)TOTrapSeabed01__data_805D6810, 1);
        TOTrapSeabed01__data_805D6810 = 0U;
    }
}

}
