#include "types.h"

extern "C" {

int TObjPlayer__sub_800F6B68(void* a0 = 0);
void TObjPlayer__sub_800F6B14(void* p);
int TObjPlayer__sub_800F6B48(void* p);
int TLobby__sub_80105538(void*);

void TObjPlayer__sub_800F6B14(void* p) { TObjPlayer__sub_800F6B68(p); TObjPlayer__sub_800F6B48(p); }
int TObjPlayer__sub_800F6B48(void* p) { return TLobby__sub_80105538(p); }

}
