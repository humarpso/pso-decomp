#include "types.h"

struct Rec_80116620 { u8 pad[0xC]; };

struct Obj_80116620 { u8 pad[0x4]; Rec_80116620 recs[1]; };

extern "C" {
Rec_80116620 *TObjPlayer__sub_80116620(Obj_80116620 *self, s32 i);
}

extern "C" {

void bswap_and_send_item__10TObjPlayerFPv(void* p);
void bswap_fields_x4__10TObjPlayerFPv(void* p);
s32 get_item_flags__10TObjPlayerFPv(void* p);
u16 get_type_id__10TObjPlayerFPv(void* p);
void set_type_bytes__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
int bswap_16__FPUs(void* a0 = 0);
int read_be16_field2__10TObjPlayerFPv(void* a0 = 0);

s32 get_item_flags__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0xdc); }
void bswap_fields_x4__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); { int i; for (i = 0; i < 4; i++) { bswap_16__FPUs((char*)p + 0x4 + i * 2); } } }
void bswap_and_send_item__10TObjPlayerFPv(void* p) { bswap_fields_x4__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void set_type_bytes__10TObjPlayerFPv(void* p) { *(u8*)((char*)p + 0x0) = 102; *(u8*)((char*)p + 0x1) = 3; }

u16 get_type_id__10TObjPlayerFPv(void* p) { return *(u16*)((char*)p + 0x0); }
Rec_80116620 *TObjPlayer__sub_80116620(Obj_80116620 *self, s32 i) {
    return &self->recs[i];
}

}
