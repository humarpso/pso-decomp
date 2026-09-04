#include "types.h"

extern "C" {

void TLobby__sub_8032BE30(void);
void TLobby__sub_8032BE3C(void);
void run_locked_update__6TLobbyFPv(void* p);
int TAdEnterPasswordGC__sub_8032BBF0(void*);
int TAdEnterPasswordGC__sub_8032BC1C(void*);

void run_locked_update__6TLobbyFPv(void* p) { *(int*)((char*)p + 0x1c) = 1; TAdEnterPasswordGC__sub_8032BC1C(p); *(int*)((char*)p + 0x1c) = 0; TAdEnterPasswordGC__sub_8032BBF0(p); }

    extern int lbl_805D6CB8;
void TLobby__sub_8032BE30(void) { lbl_805D6CB8 = 0; }

    extern int lbl_805D6CB8;
void TLobby__sub_8032BE3C(void) { lbl_805D6CB8 = 0; }

}
