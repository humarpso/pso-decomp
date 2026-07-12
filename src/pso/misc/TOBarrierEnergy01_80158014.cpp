#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_resources__17TOBarrierEnergy01Fv(void);
M2C_UNK free__11TOBoss4RockFUi(void*);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK fn_801E483C(s32);

extern u32 lbl_805D5890;
extern s32 *TOBarrierEnergy01__data_805D5894;

void free_resources__17TOBarrierEnergy01Fv(void) {
    if ((s32 *) TOBarrierEnergy01__data_805D5894 != NULL) {
        fn_801E483C(*TOBarrierEnergy01__data_805D5894);
        if ((s32 *) TOBarrierEnergy01__data_805D5894 != NULL) {
            free__11TOBoss4RockFUi((void*)TOBarrierEnergy01__data_805D5894);
            TOBarrierEnergy01__data_805D5894 = NULL;
        }
    }
    if ((u32) lbl_805D5890 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5890, 1);
        lbl_805D5890 = 0U;
    }
}

}
