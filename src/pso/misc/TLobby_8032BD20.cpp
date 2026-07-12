#include "types.h"

extern "C" {

void TLobby__sub_8032BD20(void* p);
int fn_8032BBF0(void*);
int fn_8032BC1C(void*);

void TLobby__sub_8032BD20(void* p) { *(int*)((char*)p + 0x1c) = 1; fn_8032BC1C(p); *(int*)((char*)p + 0x1c) = 0; fn_8032BBF0(p); }

}
