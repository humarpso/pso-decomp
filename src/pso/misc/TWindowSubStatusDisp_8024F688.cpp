#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"

u8 TWindowSubStatusDisp::get_type() { return *(u8 *)&this->m_name; }
