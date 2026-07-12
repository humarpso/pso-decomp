#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_flag2_request__6TLobbyFv(void);
M2C_UNK TLobby__sub_803DA16C(M2C_UNK *);

extern M2C_UNK lbl_804EF1DC[];
extern s32 lbl_805D6D58;

void handle_flag2_request__6TLobbyFv(void) {
    if (lbl_805D6D58 & 2) {
        TLobby__sub_803DA16C(lbl_804EF1DC);
        lbl_805D6D58 &= 0xFFFFFFFD;
    }
}

}
