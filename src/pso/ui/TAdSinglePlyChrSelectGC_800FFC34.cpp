#include "types.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

s32 transform_vertex_list__23TAdSinglePlyChrSelectGCFPv();

void TAdSinglePlyChrSelectGC::advance_field28() {
    transform_vertex_list__23TAdSinglePlyChrSelectGCFPv();
    *(s32 *)((s8 *)this + 0x28) = (s32) (*(s32 *)((s8 *)this + 0x28) + 0x444);
}

}
