#include "types.h"

extern "C" {

int copy_position__6TLobbyFPv(void* p);
int TLobby__sub_801F3694(void* p);
int VecCopy__FP3VecPC3Vec(void*);
int set_flags__10TObjPlayerFPvUi(void*, int);

int TLobby__sub_801F3694(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x10, 2); }

}
