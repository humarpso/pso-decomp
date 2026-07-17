#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 has_serial_input__22TAdEnterSerialAccessGCFv(void);
void clear_serial_buffer__22TAdEnterSerialAccessGCFv(void);
u8 *TAdEnterSerialAccessGC__sub_8032AEB4();
u32 get_instance__23TAdSinglePlyChrSelectGCFv();
M2C_UNK memset(s32, M2C_UNK, M2C_UNK);

s32 has_serial_input__22TAdEnterSerialAccessGCFv(void) {
    return (s8) *TAdEnterSerialAccessGC__sub_8032AEB4() ? 1 : 0;
}

void clear_serial_buffer__22TAdEnterSerialAccessGCFv(void) {
    u32 temp_r3;

    temp_r3 = get_instance__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != 0U) {
        memset(temp_r3 + 0x1154C, 0, 0x10);
    }
}

}
