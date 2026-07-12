#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801C38A4(void);
void TLobby__sub_801C38BC(void);
int TObjPlayer__sub_80102AB0(void);
int TLobby__sub_801B09A4(void);

extern void *TLobby__data_805D5D98;

void TLobby__sub_801C38A4(void) {
    if ((void *) TLobby__data_805D5D98 != NULL) {
        M2C_FIELD(TLobby__data_805D5D98, s32 *, 0x24) = 0;
    }
}

    extern int lbl_805D5DB4;
void TLobby__sub_801C38BC(void) { TLobby__sub_801B09A4(); TObjPlayer__sub_80102AB0(); lbl_805D5DB4 = 1; }

}
