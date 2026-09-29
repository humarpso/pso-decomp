#include "types.h"

struct Target_801D1DDC { u16 id; s16 part; };

struct Packet_801D1DDC {
    u8 command, size;
    u16 player;
    s8 kind, flags;
    s16 count, gauge, unused;
    struct Target_801D1DDC targets[10];
};

extern "C" {
int read_be16_field2__10TObjPlayerFPv(void*);
void byteswap_pos__10TNpcPlayerFPv(void *);
void swap_endian_shorts__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801D1DDC(struct Packet_801D1DDC *pkt);
}

extern "C" {
void swap_endian16__10TObjPlayerFPv(void* p);

void init_shield_attack_packet__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D1F44(void* p);
void TObjPlayer__sub_801D2618(void* p, f32 v);
void set_action_flag_40__10TObjPlayerFPv(void* p);
void clear_status_bit6__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D2680(void* p);
void set_action_flag__10TObjPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
int update_players__6TLobbyFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
s32 TObjPlayer__sub_8012125C(s32);
int TObjPlayer__sub_8012AF00(void*);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int read_swapped_fields__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801D2B2C(void*);
int TObjPlayer__sub_801D2C18(void*);

void TObjPlayer__sub_801D1DDC(struct Packet_801D1DDC *pkt) {
    s32 i;
    read_be16_field2__10TObjPlayerFPv((void*)(pkt));
    swap_endian_shorts__10TObjPlayerFPv(&pkt->kind);
    for (i = 0; i < pkt->count; i++) {
        byteswap_pos__10TNpcPlayerFPv(&pkt->targets[i]);
    }
}

}
