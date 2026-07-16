#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_800FA2A0(s32 arg0, s32 arg1, u32 arg2, s32 arg3, void **arg4);
s32 TLobby__sub_803CC500(int);
s32 TLobby__sub_803CC53C(int);
M2C_UNK TLobby__sub_803CCE9C(int);
s32 TLobby__sub_803CD3A8(void *, int);
M2C_UNK TLobby__sub_803DE7BC(void *, void *, int);
u8 *alloc_from_heap__6TLobbyFPv(M2C_UNK);
u8 *link_into_list__6TLobbyFPv();
M2C_UNK strncpy(void *, void *, int);

s32 TLobby__sub_800FA2A0(s32 arg0, s32 arg1, u32 arg2, s32 arg3, void **arg4) {
    u8 *var_r31;
    s32 temp_r3;

    if (arg4 != NULL) {
        *arg4 = NULL;
    }
    temp_r3 = TLobby__sub_803CD3A8((void *) (arg0), (int) (0));
    if (temp_r3 == 0) {
        return -2;
    }
    var_r31 = alloc_from_heap__6TLobbyFPv(0x68);
    if (var_r31 != NULL) {
        var_r31 = link_into_list__6TLobbyFPv();
    }
    strncpy((void *) (var_r31 + 8), (void *) (arg0), (int) (0x20));
    M2C_FIELD(var_r31, s32 *, 0) = 1;
    M2C_FIELD(var_r31, s32 *, 0x28) = arg1;
    M2C_FIELD(var_r31, s32 *, 0x2C) = TLobby__sub_803CC500((int) (temp_r3));
    M2C_FIELD(var_r31, s32 *, 0x30) = TLobby__sub_803CC53C((int) (temp_r3));
    TLobby__sub_803CCE9C((int) (temp_r3));
    M2C_FIELD(var_r31, s32 *, 0x34) = 0;
    M2C_FIELD(var_r31, u32 *, 0x40) = arg2;
    if (arg2 != 0U) {
        TLobby__sub_803DE7BC((void *) (var_r31 + 0x44), (void *) (arg3), (int) (8));
    }
    if (arg4 != NULL) {
        *arg4 = var_r31;
    }
    return M2C_FIELD(var_r31, s32 *, 0x2C);
}

}
