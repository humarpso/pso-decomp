#include "types.h"

extern "C" {

void set_timer__6TLobbyFPvf(void* p, f32 v);
s32 TLobby__sub_80269C90(void);
s32 TLobby__sub_80269CA4(s32 a0 = 0);
s32 TLobby__sub_80269DA4(s32 a0 = 0, s32 a1 = 0);
s32 TWindowMessageScroll__ct(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 __nw__7TObjectFUl(s32 a0 = 0);

void set_timer__6TLobbyFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x94) = v; }

}
