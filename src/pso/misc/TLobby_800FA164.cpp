#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_file_load_entry__6TLobbyFiiUiiPv(s32 arg0, s32 arg1, u32 arg2, s32 arg3, void **arg4);
u8 *alloc_from_heap__6TLobbyFPv(M2C_UNK);
s32 adxf_get_fsize_byte__6TLobbyFPv();
s32 TLobby__sub_803CC53C(s32);
M2C_UNK close_adxf_handle__6TLobbyFPv(s32);
s32 adxf_open__6TLobbyFUii(s32, M2C_UNK);
M2C_UNK move_words__6TLobbyFPvPvi(void *, s32, M2C_UNK);
u8 *link_into_list__6TLobbyFPv();
M2C_UNK strncpy(void *, s32, M2C_UNK);

struct Ent_800fa164;

s32 create_file_load_entry__6TLobbyFiiUiiPv(s32 arg0, s32 arg1, u32 arg2, s32 arg3, void **arg4) {
    struct Ent_800fa164 *var_r31;
    s32 temp_r3;

    if (arg4 != NULL) {
        *arg4 = NULL;
    }
    temp_r3 = adxf_open__6TLobbyFUii(arg0, 0);
    if (temp_r3 == 0) {
        return -2;
    }
    if (adxf_get_fsize_byte__6TLobbyFPv() > 0x40000) {
        close_adxf_handle__6TLobbyFPv(temp_r3);
        return -3;
    }
    var_r31 = (struct Ent_800fa164 *)alloc_from_heap__6TLobbyFPv(0x68);
    if (var_r31 != NULL) {
        var_r31 = (struct Ent_800fa164 *)link_into_list__6TLobbyFPv();
    }
    strncpy((u8 *)var_r31 + 8, arg0, 0x20);
    M2C_FIELD(var_r31, s32 *, 0) = 2;
    M2C_FIELD(var_r31, s32 *, 0x3C) = arg1;
    M2C_FIELD(var_r31, s32 *, 0x30) = TLobby__sub_803CC53C(temp_r3);
    close_adxf_handle__6TLobbyFPv(temp_r3);
    M2C_FIELD(var_r31, s32 *, 0x34) = 0;
    M2C_FIELD(var_r31, u32 *, 0x40) = arg2;
    if (arg2 != 0U) {
        move_words__6TLobbyFPvPvi((u8 *)var_r31 + 0x44, arg3, 8);
    }
    if (arg4 != NULL) {
        *arg4 = var_r31;
    }
    return 0;
}

}
