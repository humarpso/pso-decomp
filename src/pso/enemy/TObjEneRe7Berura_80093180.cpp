#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_state__16TObjEneRe7BeruraFv(void);

extern s32 lbl_805D4F68;
extern s32 lbl_805D4F6C;
extern s32 some_id_805c6f74;

void advance_state__16TObjEneRe7BeruraFv(void) {
    switch ((s32) lbl_805D4F68) {
    case 25:
        lbl_805D4F6C = some_id_805c6f74;
        some_id_805c6f74 &= 0xFFFF7FFF;
        break;
    case 26:
        some_id_805c6f74 = lbl_805D4F6C;
        break;
    }
    lbl_805D4F68 += 1;
}

}
