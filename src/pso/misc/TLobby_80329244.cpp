#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_singleton_805D6C80__6TLobbyFv(void);
void free__11TOBoss4RockFUi(void*);

extern u32 lbl_805D6C80;

void free_singleton_805D6C80__6TLobbyFv(void) {
    if ((u32) lbl_805D6C80 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6C80);
        lbl_805D6C80 = 0U;
    }
}

}
