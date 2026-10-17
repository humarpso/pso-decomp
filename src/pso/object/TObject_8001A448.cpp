#include "types.h"
#include "pso/object/TObject_8001A448.h"
#include "pso/TObject.h"

extern "C" {

void allow_rendering__7TObjectFv(TObject *arg0) {
    arg0->m_flags = (u16) (arg0->m_flags & 0xFFFFFFEF);
}

void disallow_rendering__7TObjectFv(TObject *arg0) {
    arg0->m_flags = (u16) (arg0->m_flags | 0x10);
}

}
