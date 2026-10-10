#include "types.h"

extern "C" {

void reset_door_state__6TLobbyFv(void);

    extern int switch_doors_force_closed;
void reset_door_state__6TLobbyFv(void) { switch_doors_force_closed = 0; }

}
