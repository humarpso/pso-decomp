#include "types.h"

extern "C" {

int TLobby__sub_80338534(void);
int TLobby__sub_80338608(void*);
void fn_8034C4C4(void* p);

void fn_8034C4C4(void* p) { if (*(int*)((char*)p + 0x1c) == 6) { TLobby__sub_80338608((void*)1); TLobby__sub_80338534(); } }

}
