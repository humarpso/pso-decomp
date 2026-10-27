#include "types.h"
#include "pso/misc/TOMineTrap.h"

s32 TOMineTrap::matches_id(u16 arg1) {
    if ((arg1 == *(u16 *)&this->body_count) && ((s32) *(s32 *)&this->m_a4 != 2)) {
        return 1;
    }
    return 0;
}
