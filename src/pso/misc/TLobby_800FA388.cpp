#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 request_file_read__6TLobbyFiiPvPv(s32 arg0, s32 arg1, s32 *arg2, void **arg3);
u8 *alloc_from_heap__6TLobbyFPv(M2C_UNK);
s32 TLobby__sub_803CC500(s32);
s32 TLobby__sub_803CC53C(s32);
M2C_UNK TLobby__sub_803CCE9C(s32);
s32 TLobby__sub_803CD3A8(s32, M2C_UNK);
u8 *link_into_list__6TLobbyFPv();
M2C_UNK strncpy(void *, s32, M2C_UNK);

struct Ent_800fa388;

s32 request_file_read__6TLobbyFiiPvPv(s32 arg0, s32 arg1, s32 *arg2, void **arg3) {
    struct Ent_800fa388 *var_r31;
    s32 temp_r3;

    if (arg3 != NULL) {
        *arg3 = NULL;
    }
    temp_r3 = TLobby__sub_803CD3A8(arg0, 0);
    if (temp_r3 == 0) {
        return -2;
    }
    var_r31 = (struct Ent_800fa388 *)alloc_from_heap__6TLobbyFPv(0x68);
    if (var_r31 != NULL) {
        var_r31 = (struct Ent_800fa388 *)link_into_list__6TLobbyFPv();
    }
    strncpy((u8 *)var_r31 + 8, arg0, 0x20);
    M2C_FIELD(var_r31, s32 *, 0) = 1;
    M2C_FIELD(var_r31, s32 *, 0x28) = arg1;
    M2C_FIELD(var_r31, s32 *, 0x2C) = TLobby__sub_803CC500(temp_r3);
    M2C_FIELD(var_r31, s32 *, 0x30) = TLobby__sub_803CC53C(temp_r3);
    TLobby__sub_803CCE9C(temp_r3);
    M2C_FIELD(var_r31, s32 **, 0x34) = arg2;
    if (arg2 != NULL) {
        *arg2 = 0;
    }
    M2C_FIELD(var_r31, s32 *, 0x40) = 0;
    if (arg3 != NULL) {
        *arg3 = var_r31;
    }
    return M2C_FIELD(var_r31, s32 *, 0x2C);
}

}
