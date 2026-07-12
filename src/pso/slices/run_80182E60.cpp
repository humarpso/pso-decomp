#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern void *lbl_805D4E28;

s32 TLobby__sub_80182E60(void) {
    if ((void *) lbl_805D4E28 == NULL) {
        return -1;
    }
    return M2C_FIELD(lbl_805D4E28, s32 *, 0x1C);
}

    extern const float lbl_805DBC00;
void fn_80182E7C(void* a0) { *(float*)((char*)a0 + 0x9c) = lbl_805DBC00; *(int*)((char*)a0 + 0x90) = 1; }

}
