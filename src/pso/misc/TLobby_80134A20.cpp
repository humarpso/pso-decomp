#include "types.h"

extern "C" {

int TLobby__sub_80134A20(void* p);
int TQuestThread__sub_801F5C50(void*);

int TLobby__sub_80134A20(void* p) { return TQuestThread__sub_801F5C50(p); }

}
