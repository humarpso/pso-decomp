#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_flag_if_not_split_screen__6TLobbyFv(void);
s32 is_not_split_screen__13TRaderMapCoreFv();

extern s32 lbl_805D61D8;

void clear_flag_if_not_split_screen__6TLobbyFv(void) {
    if (is_not_split_screen__13TRaderMapCoreFv() != 1) {
        lbl_805D61D8 = 0;
    }
}

}
