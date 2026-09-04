#include "types.h"

extern "C" {

int TLobby__sub_8021B274(int a0);
void set_position__6TLobbyFPvff(void* p, f32 a, f32 b);

void set_position__6TLobbyFPvff(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0xa8) = a; *(f32*)((char*)p + 0xac) = b; }

    extern int lbl_80513D68[];
int TLobby__sub_8021B274(int a0) {  return lbl_80513D68[a0]; }

}
