#include "types.h"
#include "pso/misc/TOMineTrap.h"

extern "C" {

s32 TOMineTrap::matches_id(u16 arg1) {
    if ((arg1 == (u16) *(u16 *)((s8 *)this + 0xA8)) && ((s32) *(s32 *)&this->m_a4 != 2)) {
        return 1;
    }
    return 0;
}

}
