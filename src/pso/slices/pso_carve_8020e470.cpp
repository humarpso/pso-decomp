#include "types.h"

struct Item_8020E484 { u8 pad[0x80]; s32 v; };

struct Obj_8020E484 { u8 pad[0x1c]; s32 max; s32 count; Item_8020E484 **ptrs; s32 *vals; };

extern "C" {
void TLobby__sub_8020E484(Obj_8020E484 *o, Item_8020E484 *item);
}

extern "C" {

s32 get_lobby_group__6TLobbyFi(s32 arg0);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
int TLobby__send_and_handle_60(void*);
void build_6x76_set_entity_set_flags(void* p);

void build_6x76_set_entity_set_flags(void* p) { *(u8*)((char*)p + 0x0) = 118; *(u8*)((char*)p + 0x1) = 2; }
void TLobby__sub_8020E484(Obj_8020E484 *o, Item_8020E484 *item) {
    if (o->count < o->max) {
        o->ptrs[o->count] = item;
        o->vals[o->count++] = item->v;
    }
}

}
