#include "types.h"
#include "pso/unk/text_80072004.h"

s32 init_gc_tag(s32 arg0) {
    init__6gc_tagFv((void *)arg0);
    return arg0;
}
void init__6gc_tagFv(void *arg0) {
    *(s8 *)((s8 *)arg0 + 0) = 0;
    *(s8 *)((s8 *)arg0 + 1) = 0;
    *(s16 *)((s8 *)arg0 + 2) = 0;
}
