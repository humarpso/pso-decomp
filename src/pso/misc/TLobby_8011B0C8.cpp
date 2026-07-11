#include "types.h"

extern "C" {

void TLobby__sub_8011B0C8(void* p);
int TLobby__send_and_handle_60(void*);
int TLobby__sub_8011B0FC(void*);

void TLobby__sub_8011B0C8(void* p) { TLobby__sub_8011B0FC(p); TLobby__send_and_handle_60(p); }

}
