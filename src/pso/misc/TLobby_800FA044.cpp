#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void add_named_entry__6TLobbyFii(s32 arg0, s32 arg1);
u8 *alloc_from_heap__6TLobbyFPv(M2C_UNK);
u8 *link_into_list__6TLobbyFPv();
M2C_UNK strncpy(void *, s32, M2C_UNK);

void add_named_entry__6TLobbyFii(s32 arg0, s32 arg1) {
    u8 *var_r31;

    var_r31 = alloc_from_heap__6TLobbyFPv(0x68);
    if (var_r31 != NULL) {
        var_r31 = link_into_list__6TLobbyFPv();
    }
    strncpy(var_r31 + 8, arg1, 0x20);
    M2C_FIELD(var_r31, s32 *, 0) = 4;
    M2C_FIELD(var_r31, s32 *, 0x64) = arg0;
}

}
