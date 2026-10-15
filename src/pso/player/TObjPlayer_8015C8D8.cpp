#include "types.h"

extern "C" {

void TObjPlayer__sub_8015C940(void);
void *destroy_container_object__10TObjPlayerFPvs(void *arg0, s16 arg1);
void TOCtrlDubchik__sub_8015C9D0(void);
void __dl__7TObjectFPv(void *);
s32 bswap_32__FPUl(s32);
void destroy__14TOAirconCave01FPvs(void *, int);
void destroy_motion_object__10TObjPlayerFPvs(void *, int);
void init_packet_67_04__6TLobbyFPv(void* p);
s32 read_be16_field2__10TObjPlayerFPv();

extern s32 lbl_804B6C24[];

void *destroy_container_object__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804B6C24;
        destroy__14TOAirconCave01FPvs((s8 *)arg0 + 0x340, -1);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjPlayer__sub_8015C940(void) {  }

}
