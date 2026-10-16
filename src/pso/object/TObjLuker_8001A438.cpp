#include "types.h"
#include "pso/TObject.h"
#include "pso/object/TObjLuker.h"

extern "C" {

void TObject::set_flag_4() { this->m_flags |= 0x4; }

}
