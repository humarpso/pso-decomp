#include "types.h"
#include "pso/object/TObject_8001A448.h"
#include "pso/TObject.h"

extern "C" {

void allow_rendering__7TObjectFv(void *arg0) {
    ((TObject *)arg0)->m_flags = (u16) (((TObject *)arg0)->m_flags & 0xFFFFFFEF);
}

void disallow_rendering__7TObjectFv(void *arg0) {
    ((TObject *)arg0)->m_flags = (u16) (((TObject *)arg0)->m_flags | 0x10);
}

}
