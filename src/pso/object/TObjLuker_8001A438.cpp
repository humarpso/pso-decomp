#include "types.h"
#include "pso/object/TObjLuker.h"

extern "C" {

void TObjLuker::set_flag_4() { *(u16*)((char*)this + 0x4) |= 0x4; }

}
