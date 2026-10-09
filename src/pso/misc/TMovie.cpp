#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 close__6TMovieFis(s32 arg0, s16 arg1);

M2C_UNK __dl__FPv(s32);
M2C_UNK release__6TMovieFPv();
M2C_UNK free_buffer__6TMovieFPv(s32);
M2C_UNK stop_audio_streams__6TLobbyFv();

s32 close__6TMovieFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        release__6TMovieFPv();
        free_buffer__6TMovieFPv(arg0);
        stop_audio_streams__6TLobbyFv();
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
