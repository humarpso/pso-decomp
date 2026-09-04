#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_state_byte__6TLobbyFv(void);

extern s8 lbl_805D5358;
extern u8 lbl_805D5359;

void reset_state_byte__6TLobbyFv(void) {
    if ((u8) lbl_805D5359 == 0) {
        lbl_805D5358 = 0;
    }
}

}
