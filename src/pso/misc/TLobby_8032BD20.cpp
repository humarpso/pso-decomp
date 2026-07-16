#include "types.h"

extern "C" {

void run_locked_update__6TLobbyFPv(void* p);
int TAdEnterPasswordGC__sub_8032BBF0(void*);
int TAdEnterPasswordGC__sub_8032BC1C(void*);

void run_locked_update__6TLobbyFPv(void* p) { *(int*)((char*)p + 0x1c) = 1; TAdEnterPasswordGC__sub_8032BC1C(p); *(int*)((char*)p + 0x1c) = 0; TAdEnterPasswordGC__sub_8032BBF0(p); }

}
