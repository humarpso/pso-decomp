#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern s32 TObjCityMainWarp__data_805D5B50;

void TObjCityMainWarp__sub_80186634(void) { TObjCityMainWarp__data_805D5B50 = 0; }

s32 TObjCityMainWarp__sub_80186A3C();

void clear_active_bit__16TObjCityMainWarpFv(void) {
    s32 temp_r3;

    temp_r3 = TObjCityMainWarp__sub_80186A3C();
    if (temp_r3 >= 0) {
        TObjCityMainWarp__data_805D5B50 &= ~(1 << temp_r3);
    }
}

}
