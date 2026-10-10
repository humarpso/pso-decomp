#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8013ADE4_TAdEnterPasswordGC__data_804EDA20 {
    M2C_UNK value;
    u8 remaining[0x80];
};

extern "C" {
extern RecoveredGlobal_8013ADE4_TAdEnterPasswordGC__data_804EDA20 TAdEnterPasswordGC__input_buffer;
M2C_UNK *TAdEnterPasswordGC__sub_8013ADE4(void);
}

extern "C" {

typedef char RecoveredGlobal_8013ADE4_TAdEnterPasswordGC__data_804EDA20_size[sizeof(RecoveredGlobal_8013ADE4_TAdEnterPasswordGC__data_804EDA20) == 0x84 ? 1 : -1];
M2C_UNK *TAdEnterPasswordGC__sub_8013ADE4(void) {
    return &TAdEnterPasswordGC__input_buffer.value;
}

}
