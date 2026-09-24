#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct S_803DDD78 { s8 a, b; };

struct S_803DDD94 { s8 a, b, c, d; };

extern "C" {
extern s32 lbl_805D77A0;
s32 TLobby__sub_803DDD2C(s32 arg0);
void TLobby__sub_803DDD78(S_803DDD78 *d, S_803DDD78 *s);
void TLobby__sub_803DDCE8(u32 *p);
void TLobby__sub_803DE2C0(u32 *p);
u32 TLobby__sub_803DE2F8(u32 v);
void TLobby__sub_803DDD94(S_803DDD94 *d, S_803DDD94 *s);
}

extern "C" {

void TLobby__sub_803DDD20(s32 arg0);
void TLobby__sub_803DDD40(s32 arg0, s32 arg1);
void TObjPlayer__sub_803DD5E0(s32 arg0);

extern s32 lbl_805D7788;

void TObjPlayer__sub_803DD5E0(s32 arg0) {
    lbl_805D7788 = arg0;
}

extern s32 lbl_805D77A0;
extern s32 lbl_805D77A4;

#pragma push
#pragma scheduling off
#pragma peephole off
void TLobby__sub_803DDCE8(u32 *p) {
    u32 v = *p;
    *p = ((v & 0xFF000000) >> 24) | ((v & 0xFF0000) >> 8) | ((v & 0xFF00) << 8) | ((v & 0xFF) << 24);
}
#pragma pop

void TLobby__sub_803DDD20(s32 arg0) {
    lbl_805D77A4 = arg0;
    lbl_805D77A0 = arg0;
}

extern s32 lbl_805D77A0;
extern s32 lbl_805D77A4;

s32 TLobby__sub_803DDD2C(s32 arg0) {
    s32 temp_r4;
    temp_r4 = lbl_805D77A0;
    lbl_805D77A0 = temp_r4 + arg0;
    return temp_r4;
}

void TLobby__sub_803DDD40(s32 arg0, s32 arg1) {
    switch (arg1) {
    case 1:
        lbl_805D77A0 += arg0;
        return;
    case 0:
        lbl_805D77A0 = lbl_805D77A4 + arg0;
        return;
    }
}
#pragma push
#pragma scheduling off
#pragma peephole off
void TLobby__sub_803DDD78(S_803DDD78 *d, S_803DDD78 *s) {
    s32 a = s->a;
    d->a = a;
    s32 b = s->b;
    d->b = b;
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
void TLobby__sub_803DDD94(S_803DDD94 *d, S_803DDD94 *s) {
    s32 t;
    t = s->a;
    d->a = t;
    t = s->b;
    d->b = t;
    t = s->c;
    d->c = t;
    t = s->d;
    d->d = t;
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
void TLobby__sub_803DE2C0(u32 *p) {
    u32 v = *p;
    *p = ((v & 0xFF000000) >> 24) | ((v & 0xFF0000) >> 8) | ((v & 0xFF00) << 8) | ((v & 0xFF) << 24);
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
u32 TLobby__sub_803DE2F8(u32 v) {
    return ((v & 0xFF) << 24) | ((v & 0xFF00) << 8) | ((v & 0xFF0000) >> 8) | ((v & 0xFF000000) >> 24);
}
#pragma pop

}
