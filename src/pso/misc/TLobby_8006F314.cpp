#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_challenge_time_range__6TLobbyFi(s32 arg0);
s32 is_id_out_of_range__6TLobbyFi(s32 arg0);
s32 calc_challenge_time_limit__6TLobbyFv();

s32 check_challenge_time_range__6TLobbyFi(s32 arg0) {
    if ((arg0 < calc_challenge_time_limit__6TLobbyFv()) || (arg0 > 0x8C9F)) {
        return 1;
    }
    return 0;
}

s32 is_id_out_of_range__6TLobbyFi(s32 arg0) {
    if ((arg0 < 0x3C) || (arg0 > 0x8C9F)) {
        return 1;
    }
    return 0;
}

}
