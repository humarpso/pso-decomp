#include "types.h"
#include "pso/misc/TMovie.h"

extern "C" {

s32 TObjPlayer__sub_80084614();
s32 xfree__FPv(void *);

void TMovie::copy(void* q) { *(u32*)((char*)this + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)this + 0x4) = *(u32*)((char*)q + 0x4); *(u32*)((char*)this + 0x8) = *(u32*)((char*)q + 0x8); *(u32*)((char*)this + 0xc) = *(u32*)((char*)q + 0xc); *(u32*)((char*)this + 0x10) = *(u32*)((char*)q + 0x10); *(u32*)((char*)this + 0x14) = *(u32*)((char*)q + 0x14); *(u32*)((char*)this + 0x18) = *(u32*)((char*)q + 0x18); *(u32*)((char*)this + 0x1c) = *(u32*)((char*)q + 0x1c); *(u32*)((char*)this + 0x20) = *(u32*)((char*)q + 0x20); *(u32*)((char*)this + 0x24) = *(u32*)((char*)q + 0x24); *(u32*)((char*)this + 0x28) = *(u32*)((char*)q + 0x28); *(u32*)((char*)this + 0x2c) = *(u32*)((char*)q + 0x2c); *(u32*)((char*)this + 0x30) = *(u32*)((char*)q + 0x30); *(u32*)((char*)this + 0x34) = *(u32*)((char*)q + 0x34); *(u32*)((char*)this + 0x38) = *(u32*)((char*)q + 0x38); *(u32*)((char*)this + 0x3c) = *(u32*)((char*)q + 0x3c); }

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
