#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_entry_id__6TLobbyFPv(u8 *arg0);
s32 get_field_34__6TLobbyFPv(u8 *arg0);
s32 get_field30__6TLobbyFPv(u8 *arg0);
s32 get_field_2c__6TLobbyFPv(u8 *arg0);
s32 get_field_28__6TLobbyFPv(u8 *arg0);
s16 get_slot__6TLobbyFPv(u8 *arg0);
s32 TLobby__sub_803C3ABC(u8 *arg0);
s32 TLobby__sub_803C3AC4(u8 *arg0);

s32 get_entry_id__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 4);
}

s32 get_field_34__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x34);
}

s32 get_field30__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x30);
}

s32 get_field_2c__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x2C);
}

s32 get_field_28__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x28);
}

s16 get_slot__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s16 *, 0x24);
}

s32 TLobby__sub_803C3ABC(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x18);
}

s32 TLobby__sub_803C3AC4(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x10);
}

}
