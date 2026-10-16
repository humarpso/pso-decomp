#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"

extern "C" {

u8 TWindowSubStatusDisp::get_type() { return *(u8 *)&this->m_name; }

}
