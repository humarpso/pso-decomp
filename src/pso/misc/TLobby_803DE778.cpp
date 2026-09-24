#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK memmove(void *dst, const void *src, u32 n);
void TLobby__sub_803DE7BC(u32 *dst, u32 *src, s32 n);
M2C_UNK memmove(void *dst, const void *src, u32 n);
void TLobby__sub_803DE798(u16 *dst, u16 *src, s32 n);
}

extern "C" {

void move_data__6TLobbyFv(void * _w0, const void * _w1, u32 _w2);

void move_data__6TLobbyFv(void * _w0, const void * _w1, u32 _w2) {
    memmove((void *)(_w0), (const void *)(_w1), (u32)(_w2));
}

#pragma push
#pragma scheduling off
#pragma peephole off
void TLobby__sub_803DE798(u16 *dst, u16 *src, s32 n) {
    memmove(dst, src, n * sizeof(u16));
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
void TLobby__sub_803DE7BC(u32 *dst, u32 *src, s32 n) {
    memmove((void *)(dst), (const void *)(src), (u32)(n * sizeof(u32)));
}
#pragma pop

}
