#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_flag_and_notify__10TObjPlayerFv(void);
M2C_UNK set_global_pair__10TObjPlayerFii(M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_803E38FC(M2C_UNK);

extern s32 some_id_805c6f74;

void clear_flag_and_notify__10TObjPlayerFv(void) {
    some_id_805c6f74 &= 0xFFFF77DF;
    set_global_pair__10TObjPlayerFii(0xFF00, 0);
    TObjPlayer__sub_803E38FC(0x2500);
}

}
