#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void show_message_by_count__9TWindowDDFii(s32 arg0, s32 arg1);
s32 TWindowDD__sub_803487DC();
M2C_UNK append_char__9TWindowDDFciPv(M2C_UNK, s32, s32);

void show_message_by_count__9TWindowDDFii(s32 arg0, s32 arg1) {
    if (TWindowDD__sub_803487DC() > 0xF) {
        append_char__9TWindowDDFciPv(0xA, arg0, arg1);
        return;
    }
    append_char__9TWindowDDFciPv(0x20, arg0, arg1);
}

}
