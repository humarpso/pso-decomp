#include "types.h"

extern "C" {

int TLobby__sub_801F3620(void* p);
int TLobby__sub_801F3694(void* p);
int VecCopy__FP3VecPC3Vec(void*);
int TObjPlayer__sub_8001BED8(void*, int);

int TLobby__sub_801F3694(void* p) { return TObjPlayer__sub_8001BED8((char*)p + 0x10, 2); }

}
