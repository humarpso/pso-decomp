#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void init_6x04_packet(u8 *arg0);
}

extern "C" {

void finalize_and_send_60__6TLobbyFPv(void* p);
void* init_6x05_switch_changed__6TLobbyFPv(void* p);
int TLobby__send_and_handle_60(void*);
void TOKeyAncient01__vt23(void);
void TOKey__sub_8016AC88(void);
void TOKey__sub_8016AC8C(void);
void TOKey__sub_8016AC90(void);
int bswap_16__FPUs(void*);
void bswap_6x05_switch_flag__5TOKeyFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
void set_type__14TOKeyAncient01FPv(void* p);

void finalize_and_send_60__6TLobbyFPv(void* p) { bswap_6x05_switch_flag__5TOKeyFPv(p); TLobby__send_and_handle_60(p); }
void* init_6x05_switch_changed__6TLobbyFPv(void* p) { init_6x04_packet((u8 *)((void*)(p))); *(unsigned char*)(p) = 5; *(unsigned char*)((char*)p + 0x1) = 3; return p; }

void init_6x04_packet(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 4;
    M2C_FIELD(arg0, s8 *, 1) = 2;
}

}
