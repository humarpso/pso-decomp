#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_display__20TWindowSubSymbolChatFi(s32 arg0);
s32 get_zero_vec2();
M2C_UNK create_callback__22TAdEnterSerialAccessGCFPvPvPv(s32, s32, s32);

void update_display__20TWindowSubSymbolChatFi(s32 arg0) {
    s32 temp_r31;

    temp_r31 = get_zero_vec2();
    create_callback__22TAdEnterSerialAccessGCFPvPvPv(get_zero_vec2(), temp_r31, arg0);
}

}
