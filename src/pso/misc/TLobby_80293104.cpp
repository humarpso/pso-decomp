#include "types.h"

extern "C" {

int TLobby__sub_80293104(void* p);
int TLobby__sub_80293124(void* p);
int TObjTombstone__sub_800765B4(void*);
int destroy__13TObjTombstoneFv(void*);

int TLobby__sub_80293104(void* p) { return destroy__13TObjTombstoneFv(p); }
int TLobby__sub_80293124(void* p) { return TObjTombstone__sub_800765B4(p); }

}
