#include "types.h"

extern "C" {

int TObjPlayer__sub_801C1300(void*);
int TLobby__sub_801E4570(void*);
void TObjPlayer__sub_801C13A4(void* p);

void TObjPlayer__sub_801C13A4(void* p) { TObjPlayer__sub_801C1300(p); TLobby__sub_801E4570(p); }

}
