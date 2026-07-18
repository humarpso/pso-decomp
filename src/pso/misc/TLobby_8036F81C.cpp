#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 destroy_ep3_exist__6TLobbyFis(s32 arg0, s16 arg1);
void *reset_counters__6TLobbyFPv(void *arg0);
M2C_UNK TAdEp3Exist__sub_8036F574();
M2C_UNK __dl__FPv(s32);
M2C_UNK free_if_valid__11TAdEp3ExistFis(s32, s32);

s32 destroy_ep3_exist__6TLobbyFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        free_if_valid__11TAdEp3ExistFis(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

void *reset_counters__6TLobbyFPv(void *arg0) {
    TAdEp3Exist__sub_8036F574();
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    return arg0;
}

}
