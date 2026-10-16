#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/misc/TLobby.h"

extern "C" {

void*TWindowSubStatusDisp::get_sub_disp_ptr() { return (char*)this + 0x9c; }

}
