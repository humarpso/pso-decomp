#include "types.h"

extern "C" {

void TLobby__sub_8011B0FC(void* p);
int TLobby__sub_80104200(void*);
int TObjPlayer__sub_8001960C(void*);

void TLobby__sub_8011B0FC(void* p) { TObjPlayer__sub_8001960C(p); TLobby__sub_80104200((char*)p + 0x4); }

}
