#include "types.h"

extern "C" {

void fn_8015B240(void* p);
int TLobby__send_and_handle_60(void*);
int fn_8015B274(void*);
void fn_8015B2B0(void* p);

void fn_8015B240(void* p) { fn_8015B274(p); TLobby__send_and_handle_60(p); }
int fn_8015B274(void*) { return 0; }
void fn_8015B2B0(void* p) { *(u8*)((char*)p + 0x0) = 147; *(u8*)((char*)p + 0x1) = 3; }

}
