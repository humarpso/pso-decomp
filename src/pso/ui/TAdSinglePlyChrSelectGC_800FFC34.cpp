#include "types.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

s32 transform_vertex_list__23TAdSinglePlyChrSelectGCFPv();

void TAdSinglePlyChrSelectGC::advance_field28() {
    transform_vertex_list__23TAdSinglePlyChrSelectGCFPv();
    *(s32 *)&this->m_28 = (s32) (*(s32 *)&this->m_28 + 0x444);
}

}
