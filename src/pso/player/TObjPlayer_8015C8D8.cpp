#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TObjPlayer__sub_8015C940(void);
void TOCtrlDubchik__sub_8015C9D0(void);
void __dl__7TObjectFPv(void *);
s32 bswap_32__FPUl(s32);
void destroy__14TOAirconCave01Fs(void *, int);
void destroy_motion_object__10TObjPlayerFPvs(void *, int);
void init_packet_67_04__6TLobbyFv(void* p);
s32 read_be16_field2__10TObjPlayerFv();

extern s32 lbl_804B6C24[];

void *TObjPlayer::destroy_container_object(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804B6C24;
        destroy__14TOAirconCave01Fs((s8 *)this + 0x340, -1);
        destroy_motion_object__10TObjPlayerFPvs(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

void TObjPlayer__sub_8015C940(void) {  }

}
