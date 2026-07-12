#include "types.h"

extern "C" {

int TLobby__sub_801EE008(void* p);
int TLobby__sub_801EE028(void* p);
int TLobby__sub_801A3C00(void*);
int fn_801F36E4(void*);

int TLobby__sub_801EE008(void* p) { return fn_801F36E4(p); }
int TLobby__sub_801EE028(void* p) { return TLobby__sub_801A3C00(p); }

}
