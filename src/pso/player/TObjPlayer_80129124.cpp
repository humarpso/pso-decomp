#include "types.h"

extern "C" {

s32 TAdRicoRing__sub_8001BEE8(s32, s32);
int TObjPlayer__sub_80121200(void*);
int TObjBoss2Tunnel__sub_803D929C(void*, void*);
void handle_tunnel_state_0__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80129124(void* p);

void TObjPlayer__sub_80129124(void* p) { *(s32*)((char*)p + 0x1fc) = 0; }
void handle_tunnel_state_0__10TObjPlayerFPv(void* p) { if (TObjPlayer__sub_80121200(p) == 0) { TObjBoss2Tunnel__sub_803D929C((void*)0, *(void**)((char*)p + 0x1fc)); } }

}
