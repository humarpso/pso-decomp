#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

    extern int switch_doors_force_closed;
void TLobby::reset_door_state() { switch_doors_force_closed = 0; }

}
