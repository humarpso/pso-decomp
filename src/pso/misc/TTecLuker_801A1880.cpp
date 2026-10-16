#include "types.h"
#include "pso/misc/TTecLuker.h"

extern "C" {

void TTecLuker::set_state(s32 v) { *(s32 *)&this->m_name = v; }

}
