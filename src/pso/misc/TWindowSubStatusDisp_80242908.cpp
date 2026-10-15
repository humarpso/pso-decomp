#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"

extern "C" {

s32 get_id__6TLobbyFv(void* p);

void*TWindowSubStatusDisp::get_sub_disp_ptr() { return (char*)this + 0x9c; }

}
