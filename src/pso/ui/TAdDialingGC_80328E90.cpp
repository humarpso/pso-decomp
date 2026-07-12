#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close__12TAdDialingGCFv(void);
M2C_UNK free_dialog_global__6TLobbyFv();
M2C_UNK free_dialing_gc__6TLobbyFv();

extern s32 TAdDialingGC__data_805D6C78;

void close__12TAdDialingGCFv(void) {
    free_dialing_gc__6TLobbyFv();
    free_dialog_global__6TLobbyFv();
    TAdDialingGC__data_805D6C78 = 0;
}

}
