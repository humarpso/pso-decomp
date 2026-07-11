#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801E7124(void);
void TLobby__sub_801E714C(void);
M2C_UNK fn_801F1C38(M2C_UNK, M2C_UNK);
int fn_801F1C8C(void*, void*);

void TLobby__sub_801E7124(void) {
    fn_801F1C38(1, 7);
}

    extern int lbl_805D5EA4;
void TLobby__sub_801E714C(void) { lbl_805D5EA4 = 0; fn_801F1C8C((void*)1, (void*)7); }

}
