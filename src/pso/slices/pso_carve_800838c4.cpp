#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80019690();
s32 fn_80083FBC();
M2C_UNK fn_803DC83C(M2C_UNK);
M2C_UNK fn_803DC850(M2C_UNK);
extern s32 some_id_805c6f74;

void fn_800838C4(void) {
    if ((fn_80019690() == 0) && (fn_80083FBC() != 0)) {
        some_id_805c6f74 &= 0xFFF7FFFF;
        fn_803DC850(0);
        fn_803DC83C(0);
    }
}

}
