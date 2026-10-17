#include "types.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

s32 transform_vertex_list__23TAdSinglePlyChrSelectGCFv();

void TAdSinglePlyChrSelectGC::advance_field28() {
    transform_vertex_list__23TAdSinglePlyChrSelectGCFv();
    this->m_28 = (this->m_28 + 0x444);
}

}
