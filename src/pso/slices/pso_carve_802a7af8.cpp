#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TLobby__sub_802A7AF8(void *arg0, s16 arg1);
M2C_UNK free_if_positive__6TLobbyFis(void *, s16);
M2C_UNK free__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_804DDD28[];

void *TLobby__sub_802A7AF8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 8) = lbl_804DDD28;
        free_if_positive__6TLobbyFis(arg0, 0);
        if (arg1 > 0) {
            free__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
