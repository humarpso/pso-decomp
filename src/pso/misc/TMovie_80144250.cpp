#include "types.h"

extern "C" {

void copy__6TMovieFPvPv(void* p, void* q);
void free_buffer__6TMovieFPv(void *arg0);
s32 TObjPlayer__sub_80084614();
s32 xfree__FPv(void *);

void copy__6TMovieFPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); *(u32*)((char*)p + 0x8) = *(u32*)((char*)q + 0x8); *(u32*)((char*)p + 0xc) = *(u32*)((char*)q + 0xc); *(u32*)((char*)p + 0x10) = *(u32*)((char*)q + 0x10); *(u32*)((char*)p + 0x14) = *(u32*)((char*)q + 0x14); *(u32*)((char*)p + 0x18) = *(u32*)((char*)q + 0x18); *(u32*)((char*)p + 0x1c) = *(u32*)((char*)q + 0x1c); *(u32*)((char*)p + 0x20) = *(u32*)((char*)q + 0x20); *(u32*)((char*)p + 0x24) = *(u32*)((char*)q + 0x24); *(u32*)((char*)p + 0x28) = *(u32*)((char*)q + 0x28); *(u32*)((char*)p + 0x2c) = *(u32*)((char*)q + 0x2c); *(u32*)((char*)p + 0x30) = *(u32*)((char*)q + 0x30); *(u32*)((char*)p + 0x34) = *(u32*)((char*)q + 0x34); *(u32*)((char*)p + 0x38) = *(u32*)((char*)q + 0x38); *(u32*)((char*)p + 0x3c) = *(u32*)((char*)q + 0x3c); }

extern s32 (*movie_free_buffer_callback)();

void free_buffer__6TMovieFPv(void *arg0) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0x9C) != 0U) {
        xfree__FPv(*(void **)((s8 *)arg0 + 0x9C));
        *(u32 *)((s8 *)arg0 + 0x9C) = 0U;
    }
    movie_free_buffer_callback();
    TObjPlayer__sub_80084614();
}

}
