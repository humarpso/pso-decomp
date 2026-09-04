#include "types.h"

extern "C" {

int TLobby__sub_800822E8(void);
void TObjPlayer__sub_800822D0(void);
s32 TObjPlayer__sub_80082300(void* p);
f32 get_speed__10TObjPlayerFPv(void* p);
void set_position_xy__10TObjPlayerFPvff(void* p, f32 a, f32 b);

void TObjPlayer__sub_800822D0(void) {  }
void set_position_xy__10TObjPlayerFPvff(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0x40) = a; *(f32*)((char*)p + 0x44) = b; }

f32 get_speed__10TObjPlayerFPv(void* p) { return *(f32*)((char*)p + 0xc0); }

int TLobby__sub_800822E8(void) { return 0; }

s32 TObjPlayer__sub_80082300(void* p) { return *(s32*)((char*)p + 0xc); }

}
