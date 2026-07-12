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
int fn_801F345C(void* p);
int fn_801F3480(void* p);
int fn_801F34A0(void* p);
s32 fn_801F34C0(void* p);
s32 fn_801F34C8(void* p);
void fn_801F34E0(void* p, s16 v);
int TLobby__sub_800822E8(void*, int);
int TObjPlayer__sub_801B3540(void*);
int TObjPlayer__sub_801B3564(void*);

void set_flag_80000__6TLobbyFi(s32 arg0) {
    TLobby__sub_800822E8((void*)(arg0), 0x80000);
}
void set_flag_40000__6TLobbyFPv(void *arg0) {
    TLobby__sub_800822E8(arg0, 0x40000);
}
void TLobby__sub_801F3314(s32 arg0) {
    TLobby__sub_800822E8((void*)(arg0), 0x10000);
}
void set_flag_8000__6TLobbyFi(s32 arg0) {
    TLobby__sub_800822E8((void*)(arg0), 0x8000);
}
int check_flag_24576__6TLobbyFPv(void* p) { return TLobby__sub_800822E8(p, 24576); }
int TLobby__sub_801F3384(void* p) { return TLobby__sub_800822E8(p, 1024); }
int TLobby__sub_801F33A8(void* p) { return TLobby__sub_800822E8(p, 512); }
int TLobby__sub_801F33CC(void* p) { return TLobby__sub_800822E8(p, 256); }
int TLobby__sub_801F33F0(void* p) { return TLobby__sub_800822E8(p, 224); }
int test_flag_16__6TLobbyFPv(void* p) { return TLobby__sub_800822E8(p, 16); }
int set_flag_4__6TLobbyFPv(void* p) { return TLobby__sub_800822E8(p, 4); }

}
