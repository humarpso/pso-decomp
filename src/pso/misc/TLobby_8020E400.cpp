#include "types.h"

extern "C" {

s32 get_lobby_group__6TLobbyFi(s32 arg0);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
void build_6x76_set_entity_set_flags(void* p);

void bswap_player_fields__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void send_player_update__6TLobbyFPv(void* p) { bswap_player_fields__6TLobbyFPv(p); TLobby__send_and_handle_60(p); }

}

#include "types.h"

struct Item_8020E484 { u8 pad[0x80]; s32 v; };

struct Obj_8020E484 { u8 pad[0x1c]; s32 max; s32 count; Item_8020E484 **ptrs; s32 *vals; };

extern "C" {
void append_wave_member(Obj_8020E484 *o, Item_8020E484 *item);
}

extern "C" {

s32 get_lobby_group__6TLobbyFi(s32 arg0);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
void build_6x76_set_entity_set_flags(void* p);

void build_6x76_set_entity_set_flags(void* p) { *(u8*)((char*)p + 0x0) = 118; *(u8*)((char*)p + 0x1) = 2; }
void append_wave_member(Obj_8020E484 *o, Item_8020E484 *item) {
    if (o->count < o->max) {
        o->ptrs[o->count] = item;
        o->vals[o->count++] = item->v;
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_shop_unit_count(s32 arg0);
s32 get_shield_shop_tier_for_level__6TLobbyFi(s32 arg0);
s32 get_armor_shop_tier_for_level__6TLobbyFi(s32 arg0);
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

s32 get_shield_shop_tier_for_level__6TLobbyFi(s32 arg0) {
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

s32 get_armor_shop_tier_for_level__6TLobbyFi(s32 arg0) {
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
