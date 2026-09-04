#include "types.h"

extern "C" {

int TItemMag__sub_80105348(void);
int TLobby__sub_8010540C(void* p);
int TObjPlayer__sub_8011C974(void*);

int TItemMag__sub_80105348(void) { return 0; }

int TLobby__sub_8010540C(void* p) { return TObjPlayer__sub_8011C974(p); }

}
