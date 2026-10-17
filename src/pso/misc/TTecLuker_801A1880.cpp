#include "types.h"
#include "pso/misc/TTecLuker.h"

void TTecLuker::set_state(s32 v) { *(s32 *)&this->m_name = v; }
