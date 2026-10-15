#include "types.h"

extern "C" {

s32 check_flag__10TObjPlayerFPvi(s32, s32);
s32 is_matching_id__6TLobbyFiUs(void *, u16);
int get_slot_value__10TObjPlayerFPvi(void*);
void set_facing__10TObjPlayerFPvs(void* p, s16 v);
s16 get_stat_bonus__10TObjPlayerFPv(void* p);
s16 get_stat__10TObjPlayerFPv(void* p);
int get_equip_field_d04__10TObjPlayerFPv(void* p);
f32 get_mag_scale_f__10TObjPlayerFPv(void* p);
void bswap_pkt_u32x2__10TObjPlayerFPv(void* p);
void bswap_and_send_6x61__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void* a0 = 0);
void read_be16_field2__10TObjPlayerFPv(void* p);
void bswap_32__FPUl(u32* p);
void swap_6x61_fields__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80102D84(u8 *arg0);
u8 is_not_matching_lobby_id__10TObjPlayerFPv(void *arg0);

void set_facing__10TObjPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x32e) = v; }
s16 get_stat_bonus__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2be); }
s16 get_stat__10TObjPlayerFPv(void* p) { return *(s16*)((char*)p + 0x2bc); }
int get_equip_field_d04__10TObjPlayerFPv(void* p) { return get_slot_value__10TObjPlayerFPvi((char*)p + 0xd04); }
void is_flag_20000_set__10TObjPlayerFv(void) {
    s32 uninit;
    check_flag__10TObjPlayerFPvi(uninit, 0x20000);
}
f32 get_mag_scale_f__10TObjPlayerFPv(void* p) { return *(f32*)((char*)p + 0x1c); }

void bswap_pkt_u32x2__10TObjPlayerFPv(void* p) { bswap_32__FPUl((u32*)p); bswap_32__FPUl((u32*)((char*)p + 0x4)); }
void bswap_and_send_6x61__10TObjPlayerFPv(void* p) { swap_6x61_fields__10TObjPlayerFPv(p); TLobby__send_and_handle_60(p); }

void swap_6x61_fields__10TObjPlayerFPv(void* p) {
    read_be16_field2__10TObjPlayerFPv(p);
    bswap_32__FPUl((u32*)((char*)p + 4));
    bswap_32__FPUl((u32*)((char*)p + 8));
}

void TObjPlayer__sub_80102D84(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 4) = -1;
    *(s8 *)((s8 *)arg0 + 0) = 0x61;
    *(s32 *)((s8 *)arg0 + 8) = 0;
    *(s8 *)((s8 *)arg0 + 1) = 3;
}

u8 is_not_matching_lobby_id__10TObjPlayerFPv(void *arg0) {
    return (u8) (is_matching_id__6TLobbyFiUs(arg0, *(u16 *)((s8 *)arg0 + 2)) == 0);
}

}
