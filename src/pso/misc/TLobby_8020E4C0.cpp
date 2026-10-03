#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_shop_unit_count(s32 arg0);
s32 TLobby__sub_8020E5E0(s32 arg0);
s32 TLobby__sub_8020E670(s32 arg0);
s32 get_lobby_group__6TLobbyFi(s32 arg0);
int TLobby__send_and_handle_60(void*);
int bswap_16__FPUs(void*);
void build_6x76_set_entity_set_flags(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);

s32 get_lobby_group__6TLobbyFi(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 0xA)) {
        return 0;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
        return 1;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x2A)) {
        return 2;
    }
    if ((arg0 >= 0x2B) && (arg0 <= 0x3C)) {
        return 3;
    }
    if ((arg0 >= 0x3D) && (arg0 <= 0x64)) {
        return 4;
    }
    if (arg0 >= 0x65) {
        return 4;
    }
    return -1;
}

s32 get_shop_unit_count(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 0xA)) {
        return 0;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
        return 3;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x2A)) {
        return 5;
    }
    if ((arg0 >= 0x2B) && (arg0 <= 0x3C)) {
        return 6;
    }
    if ((arg0 >= 0x3D) && (arg0 <= 0x64)) {
        return 6;
    }
    if (arg0 >= 0x65) {
        return 6;
    }
    return -1;
}

s32 TLobby__sub_8020E5E0(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 0xA)) {
        return 4;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
        return 5;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x2A)) {
        return 6;
    }
    if ((arg0 >= 0x2B) && (arg0 <= 0x3C)) {
        return 7;
    }
    if ((arg0 >= 0x3D) && (arg0 <= 0x64)) {
        return 7;
    }
    if (arg0 >= 0x65) {
        return 7;
    }
    return -1;
}

s32 TLobby__sub_8020E670(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 0xA)) {
        return 4;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
        return 6;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x2A)) {
        return 7;
    }
    if ((arg0 >= 0x2B) && (arg0 <= 0x3C)) {
        return 8;
    }
    if ((arg0 >= 0x3D) && (arg0 <= 0x64)) {
        return 8;
    }
    if (arg0 >= 0x65) {
        return 8;
    }
    return -1;
}

}
