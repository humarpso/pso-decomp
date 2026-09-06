#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 fn_803DAFA8(void *, void *);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(int);
u8 *set_stream_and_load_file__6TLobbyFi();
M2C_UNK DCStoreRange(void *, int);
void fn_801A5778(M2C_UNK arg0, s32 *arg1);
}

extern "C" {

void fn_801A5778(M2C_UNK arg0, s32 *arg1) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(set_stream_and_load_file__6TLobbyFi());
    fn_803DAFA8(temp_r3, arg1);
    DCStoreRange((void *) (*arg1), (int) (0x40000));
    safe_free__23TAdSinglePlyChrSelectGCFUi((int) (temp_r3));
}

}
