#include "types.h"
#include "pso/unk/text_803DAF30.h"

#pragma push
#pragma scheduling off
#pragma peephole off
void fn_803DAF30(u32 *p) {
    u32 v = *p;
    *p = ((v & 0xFF000000) >> 24) | ((v & 0xFF0000) >> 8) | ((v & 0xFF00) << 8) | ((v & 0xFF) << 24);
}
#pragma pop
