#include "types.h"

extern "C" {

void advance_field28__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 transform_vertex_list__23TAdSinglePlyChrSelectGCFPv();

void advance_field28__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    transform_vertex_list__23TAdSinglePlyChrSelectGCFPv();
    *(s32 *)((s8 *)arg0 + 0x28) = (s32) (*(s32 *)((s8 *)arg0 + 0x28) + 0x444);
}

}
