#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/misc/TWindowSubItem.h"

extern "C" {

int TWindowSubStatusDisp::is_flag_4_set() { return *(u16*)((char*)this + 0x0) & 0x4; }
int TWindowSubStatusDisp::get_flag() { return (*(u16*)((char*)this + 0x70) >> 6) & 0x1; }

}
