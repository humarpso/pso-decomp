#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TOKeyAncient01.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
void init_6x04_packet(u8 *arg0);
}

extern "C" {

int TLobby__send_and_handle_60(void*);
void TOKeyAncient01__vt23(void);
void TOKey__sub_8016AC88(void);
void TOKey__sub_8016AC8C(void);
void TOKey__sub_8016AC90(void);
int bswap_16__FPUs(void*);
void bswap_6x05_switch_flag__5TOKeyFv(void* p);

void TLobby::finalize_and_send_60() { bswap_6x05_switch_flag__5TOKeyFv(this); TLobby__send_and_handle_60(this); }
void*TLobby::init_6x05_switch_changed() { init_6x04_packet((u8 *)((void*)(this))); *(unsigned char*)(this) = 5; *(unsigned char*)((char*)this + 0x1) = 3; return this; }

void init_6x04_packet(u8 *arg0) {
    *(s16 *)((s8 *)arg0 + 6) = 0;
    *(s8 *)((s8 *)arg0 + 0) = 4;
    *(s8 *)((s8 *)arg0 + 1) = 2;
}

}
