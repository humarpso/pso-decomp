#include "types.h"

extern "C" {

int TLobby__sub_801EF748(void* p);
int TLobby__sub_801EF768(void* p);
int TLobby__sub_801EF788(void* p);
int fn_8019608C(void*);
int TObjPlayer__sub_8034DF2C(void*);
int TObjPlayer__sub_8034DF74(void*);

int TLobby__sub_801EF748(void* p) { return TObjPlayer__sub_8034DF2C(p); }
int TLobby__sub_801EF768(void* p) { return TObjPlayer__sub_8034DF74(p); }
int TLobby__sub_801EF788(void* p) { return fn_8019608C(p); }

}
