#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

s32 __dl__FPv(void *);
s32 mem_free(s32);

void *TLobby::free_boss4rock(s16 arg1) {
    if (this != NULL) {
        mem_free(*(s32 *)&this->m_flags);
        __dl__FPv(*(void * *)&this->m_name);
        *(s32 *)&this->m_prev = 0;
        *(s32 *)&this->m_next = 0;
        if (arg1 > 0) {
            __dl__FPv(this);
        }
    }
    return this;
}

}
