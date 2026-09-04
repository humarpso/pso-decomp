#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjPlayer__sub_802A1018(void);
void free_dialog_global__6TLobbyFv(void);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D6630;

void free_dialog_global__6TLobbyFv(void) {
    if ((u32) lbl_805D6630 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6630);
        lbl_805D6630 = 0U;
    }
}

    extern int lbl_805D663C;
int TObjPlayer__sub_802A1018(void) {  return lbl_805D663C; }

}
