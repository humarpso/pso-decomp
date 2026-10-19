#include "types.h"
#include "pso/object/TUnk_804E4788.h"
#include "pso/object/TObject_80019A50.h"

#include "pso/TObject.h"

TUnk_804E4788::~TUnk_804E4788() {
    if (this->m_11c != NULL) { queue_destruction__7TObjectFv(this->m_11c); this->m_11c = 0; }
}
