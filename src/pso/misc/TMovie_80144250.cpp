#include "types.h"
#include "pso/misc/TMovie.h"

extern "C" {

s32 TObjPlayer__sub_80084614();
s32 xfree__FPv(void *);

void TMovie::copy(void* q) { *(u32 *)&this->m_name = *(u32*)((char*)q + 0x0); *(u32 *)&this->m_flags = *(u32*)((char*)q + 0x4); *(u32 *)&this->m_prev = *(u32*)((char*)q + 0x8); *(u32 *)&this->m_next = *(u32*)((char*)q + 0xc); *(u32 *)&this->m_up = *(u32*)((char*)q + 0x10); *(u32 *)&this->m_down = *(u32*)((char*)q + 0x14); *(u32*)((char*)this + 0x18) = *(u32*)((char*)q + 0x18); this->m_1c = *(u32*)((char*)q + 0x1c); this->m_20 = *(u32*)((char*)q + 0x20); *(u32 *)&this->m_24 = *(u32*)((char*)q + 0x24); *(u32*)((char*)this + 0x28) = *(u32*)((char*)q + 0x28); this->m_2c = *(u32*)((char*)q + 0x2c); *(u32*)((char*)this + 0x30) = *(u32*)((char*)q + 0x30); this->m_34 = *(u32*)((char*)q + 0x34); *(u32*)((char*)this + 0x38) = *(u32*)((char*)q + 0x38); this->m_3c = *(u32*)((char*)q + 0x3c); }

extern s32 (*movie_free_buffer_callback)();

void TMovie::free_buffer() {
    if ((u32) *(u32 *)((s8 *)this + 0x9C) != 0U) {
        xfree__FPv(*(void **)((s8 *)this + 0x9C));
        *(u32 *)((s8 *)this + 0x9C) = 0U;
    }
    movie_free_buffer_callback();
    TObjPlayer__sub_80084614();
}

}
