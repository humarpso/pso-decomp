#include "types.h"
#include "pso/object/TObject_8001A448.h"
#include "pso/TObject.h"

void allow_rendering__7TObjectFv(TObject *object) {
    object->m_flags = (u16) (object->m_flags & 0xFFFFFFEF);
}

void disallow_rendering__7TObjectFv(TObject *object) {
    object->m_flags = (u16) (object->m_flags | 0x10);
}
