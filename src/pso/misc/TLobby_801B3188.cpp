#include "types.h"

extern "C" {

int TLobby__sub_801B3188(void* p);
int TLobby__sub_801B31AC(void* p);
void handle_6x34(void);
int TObjPlayer__sub_8001BEF8(void*, int);
int TObjPlayer__sub_801BE74C(void*, int);

int TLobby__sub_801B3188(void* p) { return TObjPlayer__sub_801BE74C(p, 1); }
int TLobby__sub_801B31AC(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x858, 2); }
void handle_6x34(void) {  }

}
