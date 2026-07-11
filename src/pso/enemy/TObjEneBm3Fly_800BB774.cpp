#include "types.h"

extern "C" {

int fn_800F6B14(void*);
int TLobby__sub_8020C5A4(void*);
void fn_800BB650(void* p, void* q);
int TObjEneBm3Fly__sub_800BB774(void* p);
void fn_800BB7D0(void);
void fn_800BB7D4(void);
void fn_800BB7D8(void);
void fn_800BB7DC(void);
int fn_800BB7E0(void* p);
int TObjPlayer__sub_801B4A18(void*, int);

int TObjEneBm3Fly__sub_800BB774(void* p) { return (*(u32*)((char*)p + 0x2dc) >> 1) & 0x1; }

}
