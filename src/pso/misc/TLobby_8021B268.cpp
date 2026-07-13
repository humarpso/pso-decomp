#include "types.h"

extern "C" {

void TLobby__sub_8021B268(void* p, f32 a, f32 b);

void TLobby__sub_8021B268(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0xa8) = a; *(f32*)((char*)p + 0xac) = b; }

}
