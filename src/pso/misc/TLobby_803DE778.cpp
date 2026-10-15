#include "types.h"

extern "C" {
s32 memmove(void *dst, const void *src, u32 n);
void move_words__6TLobbyFPvPvi(u32 *dst, u32 *src, s32 n);
s32 memmove(void *dst, const void *src, u32 n);
void copy_u16_array__6TLobbyFPvPvi(u16 *dst, u16 *src, s32 n);
}

extern "C" {

void move_data__6TLobbyFv(void * _w0, const void * _w1, u32 _w2);

void move_data__6TLobbyFv(void * _w0, const void * _w1, u32 _w2) {
    memmove((void *)(_w0), (const void *)(_w1), (u32)(_w2));
}

#pragma push
#pragma scheduling off
#pragma peephole off
void copy_u16_array__6TLobbyFPvPvi(u16 *dst, u16 *src, s32 n) {
    memmove(dst, src, n * sizeof(u16));
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
void move_words__6TLobbyFPvPvi(u32 *dst, u32 *src, s32 n) {
    memmove((void *)(dst), (const void *)(src), (u32)(n * sizeof(u32)));
}
#pragma pop

}
