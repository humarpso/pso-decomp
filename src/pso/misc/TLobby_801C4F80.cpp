#include "types.h"

extern "C" {

void update_child_player__6TLobbyFi(s32 arg0);
void set_float_4__6TLobbyFPvf(void* p, f32 v);
s32 TLobby__sub_801C4FC4(void* p);
void set_pos_z__6TLobbyFPvf(void* p, f32 v);
void set_scale__6TLobbyFPvf(void* p, f32 v);
void send_set_battle_mode_data__6TLobbyFPv(void* p);
void bswap_set_battle_mode_data__6TLobbyFPv(void* p);
void send_6x7D_set_battle_mode_data__6TLobbyFPv(void* p);
void build_6x7D_set_battle_mode_data(void* p);
int TLobby__send_and_handle_60(void*);
int read_be16_field2__10TObjPlayerFPv(void* a0 = 0);
int bswap_32__FPUl(void* a0 = 0);
int dispatch_packet__6TLobbyFPv(void*);
s32 TObjPlayer__sub_801C19C8(f32);

extern const f32 lbl_805DC300;

void update_child_player__6TLobbyFi(s32 arg0) {
    TObjPlayer__sub_801C19C8(lbl_805DC300);
    set_float_4__6TLobbyFPvf((void*)(arg0), lbl_805DC300);
}

void set_float_4__6TLobbyFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x4) = v; }
s32 TLobby__sub_801C4FC4(void* p) { return *(s32*)((char*)p + 0x14); }
void set_pos_z__6TLobbyFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }
void set_scale__6TLobbyFPvf(void* p, f32 v) { *(f32*)((char*)p + 0xc) = v; }
void send_set_battle_mode_data__6TLobbyFPv(void* p) { bswap_set_battle_mode_data__6TLobbyFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void bswap_set_battle_mode_data__6TLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); { int i; for (i = 0; i < 4; i++) { bswap_32__FPUl((char*)p + 0x8 + i * 4); } } }
void build_6x7D_set_battle_mode_data(void* p) { *(u8*)((char*)p + 0x0) = 125; *(u8*)((char*)p + 0x1) = 6; }
void send_6x7D_set_battle_mode_data__6TLobbyFPv(void* p) { bswap_set_battle_mode_data__6TLobbyFPv((void*)(p)); dispatch_packet__6TLobbyFPv(p); }

}
