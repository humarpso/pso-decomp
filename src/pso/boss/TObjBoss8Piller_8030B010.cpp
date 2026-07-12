#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_held_object__15TObjBoss8PillerFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjBoss8Piller__data_805D6A78;

void free_held_object__15TObjBoss8PillerFv(void) {
    if ((u32) TObjBoss8Piller__data_805D6A78 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjBoss8Piller__data_805D6A78, 1);
        TObjBoss8Piller__data_805D6A78 = 0U;
    }
}

}
