#include "types.h"

extern "C" {

void set_flag_40000__6TLobbyFPv(void *arg0);
int check_flag_24576__6TLobbyFPv(void* p);
int TLobby__sub_801F3384(void* p);
int TLobby__sub_801F33A8(void* p);
int TLobby__sub_801F33CC(void* p);
int TLobby__sub_801F33F0(void* p);
int test_flag_16__6TLobbyFPv(void* p);
int set_flag_4__6TLobbyFPv(void* p);
int TLobby__sub_801F345C(void* p);
int fn_801F3480(void* p);
int fn_801F34A0(void* p);
s32 fn_801F34C0(void* p);
s32 fn_801F34C8(void* p);
void TLobby__sub_801F34E0(void* p, s16 v);
int TLobby__sub_800822E8(void*, int);
int TObjPlayer__sub_801B3540(void*);
int TObjPlayer__sub_801B3564(void*);

int TLobby__sub_801F345C(void* p) { return TLobby__sub_800822E8(p, 2); }
int fn_801F3480(void* p) { return TObjPlayer__sub_801B3540(p); }
int fn_801F34A0(void* p) { return TObjPlayer__sub_801B3564(p); }
s32 fn_801F34C0(void* p) { return *(s32*)((char*)p + 0xd4); }
s32 fn_801F34C8(void* p) { return *(s32*)((char*)p + 0x3ac); }
int TMainTask__sub_801F34D0(void) { return 0; }
void TLobby__sub_801F34E0(void* p, s16 v) { *(s16*)((char*)p + 0x11a) = v; }

}
