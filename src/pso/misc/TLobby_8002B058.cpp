#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

void TLobby::copy_header(void *arg1) {
    *(s32 *)&this->m_name = (s32) *(s32 *)((s8 *)arg1 + 0);
    this->m_flags = (u16) *(u16 *)((s8 *)arg1 + 4);
    *(s16 *)&this->m_id = (s16) *(s16 *)((s8 *)arg1 + 6);
    *(u8 *)&this->m_prev = (u8) *(u8 *)((s8 *)arg1 + 8);
    *(u8 *)((s8 *)this + 9) = (u8) *(u8 *)((s8 *)arg1 + 9);
    *(u8 *)((s8 *)this + 0xA) = (u8) *(u8 *)((s8 *)arg1 + 0xA);
    *(u8 *)((s8 *)this + 0xB) = (u8) *(u8 *)((s8 *)arg1 + 0xB);
}

}
