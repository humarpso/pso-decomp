#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 is_matching_id__6TLobbyFiUs(void *, u16);
int get_slot_value__10TObjPlayerFPvi(void*);
int TLobby__send_and_handle_60(void* a0 = 0);
void bswap_32__FPUl(u32* p);
void TObjPlayer__sub_80102D84(u8 *arg0);

void TObjPlayer::set_facing(s16 v) { *(s16*)((char*)this + 0x32e) = v; }
s16 TObjPlayer::get_stat_bonus() { return *(s16*)((char*)this + 0x2be); }
s16 TObjPlayer::get_stat() { return *(s16*)((char*)this + 0x2bc); }
int TObjPlayer::get_equip_field_d04() { return get_slot_value__10TObjPlayerFPvi((char*)this + 0xd04); }
void TObjPlayer::is_flag_20000_set() {
    s32 uninit;
    ((TObjPlayer *)uninit)->check_flag(0x20000);
}
f32 TObjPlayer::get_mag_scale_f() { return *(f32*)((char*)this + 0x1c); }

void TObjPlayer::bswap_pkt_u32x2() { bswap_32__FPUl((u32*)this); bswap_32__FPUl((u32*)((char*)this + 0x4)); }
void TObjPlayer::bswap_and_send_6x61() { swap_6x61_fields(); TLobby__send_and_handle_60(this); }

void TObjPlayer::swap_6x61_fields() {
    read_be16_field2();
    bswap_32__FPUl((u32*)((char*)this + 4));
    bswap_32__FPUl((u32*)((char*)this + 8));
}

void TObjPlayer__sub_80102D84(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 4) = -1;
    *(s8 *)((s8 *)arg0 + 0) = 0x61;
    *(s32 *)((s8 *)arg0 + 8) = 0;
    *(s8 *)((s8 *)arg0 + 1) = 3;
}

u8 TObjPlayer::is_not_matching_lobby_id() {
    return (u8) (is_matching_id__6TLobbyFiUs(this, *(u16 *)((s8 *)this + 2)) == 0);
}

}
