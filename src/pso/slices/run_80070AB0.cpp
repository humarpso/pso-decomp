#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern s32 lbl_805D4E28;

u8 is_flag_set__6TLobbyFv(void) {
    return (u8) (lbl_805D4E28 != 0);
}

    extern int lbl_805D6464;
int get_unit_list__6TLobbyFv(void) {  return lbl_805D6464; }

}
