#include "types.h"

extern "C" {

int handle_6x91_update_state__15TOAttackableColFPv(void* p);
int clear_player_status_flag__10TObjPlayerFPviUi(void*, int, int);

int handle_6x91_update_state__15TOAttackableColFPv(void* p) { return clear_player_status_flag__10TObjPlayerFPviUi(p, 0, 1); }

}
