#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct S_803DDD78 { s8 a, b; };

struct S_803DDD94 { s8 a, b, c, d; };

struct S_803DA7E0 { s32 a, b, c, d, e; };

struct Ent_803DD6DC { s32 f0; s32 f4; s32 f8; };

struct Obj_803DD6DC { struct Ent_803DD6DC *ents; u32 count; };

extern "C" {
extern s32 lbl_805D77A0;
s32 TLobby__sub_803DDD2C(s32 arg0);
void TLobby__sub_803DDD78(S_803DDD78 *d, S_803DDD78 *s);
void TLobby__sub_803DDCE8(u32 *p);
void TLobby__sub_803DE2C0(u32 *p);
u32 TLobby__sub_803DE2F8(u32 v);
void TLobby__sub_803DDD94(S_803DDD94 *d, S_803DDD94 *s);
void TLobby__sub_803DDCE8(u32 *p);
s32 TLobby__sub_803DDD2C(s32 arg0);
void TLobby__sub_803DDD40(s32 arg0, s32 arg1);
void TLobby__sub_803DDF4C(void);
s32 TLobby__sub_803DDEFC(u16 arg0);
void TObjPlayer__sub_803DD6DC(struct Obj_803DD6DC *arg0, s32 arg1);
extern S_803DA7E0 lbl_8058D470;
s32 TObjPlayer__sub_803DDC50(struct Obj_803DD6DC *arg0);
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

s32 TObjPlayer__sub_803DDC50(struct Obj_803DD6DC *arg0) {
    u32 i;
    if (arg0->count == 0) {
        lbl_8058D470.c = 1;
        return -1;
    }
    for (i = 0; i < arg0->count; i++) {
        if (((s32 (*)(struct Obj_803DD6DC *, s32))TObjPlayer__sub_803DD6DC)(arg0, i) < 0) {
            lbl_8058D470.a = i;
            return -1;
        }
    }
    return 1;
}

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

s32 TLobby__sub_803DDEFC(u16 arg0) {
    s32 r = 2;
    if (arg0 & 1) r = 0x1E;
    if (arg0 & 2) r += 2;
    if (arg0 & 4) r += 2;
    if (arg0 & 8) r += 4;
    return r;
}

void TLobby__sub_803DDF4C(void) {
    s32 spC;
    s32 sp8;
    do {
        spC = M2C_FIELD(((s32 *)TLobby__sub_803DDD2C((s32)(4))), s32 *, 0);
        TLobby__sub_803DDCE8((u32 *)((void *) (&spC)));
        switch (spC) {
        case 0x4D4D4F43:
        case 0x564E4F43:
        case 0x4E4C444D:
        case 0x494D5650:
        case 0x4C505647:
        case 0x43474D49:
            sp8 = M2C_FIELD(((s32 *)TLobby__sub_803DDD2C((s32)(4))), s32 *, 0);
            TLobby__sub_803DDCE8((u32 *)((void *) (&sp8)));
            TLobby__sub_803DDD40((s32)((int) (sp8)), (s32)((int) (1)));
            break;
        case 0x54525647:
            TLobby__sub_803DDD40((s32)((int) (-4)), (s32)((int) (1)));
            break;
        default:
            sp8 = M2C_FIELD(((s32 *)TLobby__sub_803DDD2C((s32)(4))), s32 *, 0);
            TLobby__sub_803DDCE8((u32 *)((void *) (&sp8)));
            TLobby__sub_803DDD40((s32)((int) (sp8)), (s32)((int) (1)));
            break;
        }
    } while ((u32) (spC + 0xABAE0000) != 0x5647U);
}

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
