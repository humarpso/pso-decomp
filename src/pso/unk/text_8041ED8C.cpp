#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80420C5C_lbl_805C1DF0 {
    s16 value;
    u8 remaining[0xE];
};

struct P_8041FDA0 { s32 a; s32 b; };

struct O_8041FDA0 { u8 pad0[0xF4]; s32 total; s16 n; u8 padFA[2]; P_8041FDA0 items[32]; };

struct P_8041FE44 { u32 a; u32 b; };

struct O_8041FE44 { u8 pad0[0x228]; u32 now; u8 pad22C[0x2F8 - 0x22C]; P_8041FE44 items[5]; };

struct S_80420BD0 {
    u8 pad0[0x20]; s32 f20; u8 pad24[8]; u8 data2C[8]; u32 f34;
    u8 pad38[0x1FC - 0x38]; s32 f1FC; u8 pad200[4];
    u8 flag : 1; u8 rest : 7;
};

struct E_80420D38 { u8 pad0[4]; u16 f4; u8 pad6[8]; u16 fE; u8 pad10[0x30]; s32 f40; };

struct G_80420D38 { s16 count; u8 pad2[6]; E_80420D38 *ents; };

struct Addr_80420FC8 { u32 family; u8 a[0x10]; };

struct E_80420FC8 { u8 pad0[4]; u16 f4; u8 f6[2]; u16 f8; s16 fA; s16 fC; u8 padE[2]; u16 f10; u8 pad12[2]; Addr_80420FC8 f14; Addr_80420FC8 f28; u8 pad3C[4]; s32 f40; };

struct G_80420FC8 { s16 count; u8 pad2[6]; E_80420FC8 *ents; };

struct Item_80420FC8 { s16 len; u8 pad2[2]; u8 data[8]; };

struct Pkt_80420FC8 { u8 pad0[4]; s32 count; s32 len; Item_80420FC8 items[1]; };

extern "C" {
M2C_UNK TLobby__sub_803F87C4(void *);
extern RecoveredGlobal_80420C5C_lbl_805C1DF0 lbl_805C1DF0;
s32 TLobby__sub_80420C5C(void);
void TLobby__sub_8041FDA0(O_8041FDA0 *o, s16 idx, s32 a, s32 b);
void TLobby__sub_8041FE44(O_8041FE44 *o);
s32 TLobby__sub_803F9F04(void *, void *, int);
s32 TLobby__sub_80420BD0(void *arg0, S_80420BD0 *s, s32 arg2);
void TLobby__sub_80422E30(s16, s32, s32, s16);
extern RecoveredGlobal_80420C5C_lbl_805C1DF0 lbl_805C1DF0;
s32 TLobby__sub_80420D38(u16 arg0, u8 arg1);
void set_value_and_enable__6TLobbyFPvi(u8 *, s32);
s16 TLobby__sub_8040D86C(void *, void *, void *, s32, s32, int);
s16 TLobby__sub_8040D8F0(void *, void *, int, void *, int);
s16 TLobby__sub_8040D95C(void *, void *);
s16 TLobby__sub_8040DA54(void *, void *);
s16 TLobby__sub_8040DB94(void *);
void TLobby__sub_80422E30(s16, s32, s32, s16);
extern RecoveredGlobal_80420C5C_lbl_805C1DF0 lbl_805C1DF0;
s16 TLobby__sub_80420FC8(s16 id, Pkt_80420FC8 *pkt, Addr_80420FC8 *src, Addr_80420FC8 *dst, u16 port, s32 arg5);
}

extern "C" {

typedef char RecoveredGlobal_80420C5C_lbl_805C1DF0_size[sizeof(RecoveredGlobal_80420C5C_lbl_805C1DF0) == 0x10 ? 1 : -1];

void TLobby__sub_8041FDA0(O_8041FDA0 *o, s16 idx, s32 a, s32 b) {
    s16 i;
    if (idx < 0) {
        return;
    }
    if (idx > o->n + 1) {
        return;
    }
    if (idx > 0x1F) {
        return;
    }
    if (o->n >= 0x1F) {
        o->n = 0x1E;
    }
    for (i = o->n; i >= idx; i--) {
        o->items[i + 1] = o->items[i];
    }
    o->items[idx].a = a;
    o->items[idx].b = b;
    o->n++;
    o->total += b - a;
}

void TLobby__sub_8041FE44(O_8041FE44 *o) {
    s16 i;
    s16 j;
    i = 0;
    while (i < 5) {
        if (o->items[i].a == o->items[i].b) {
            return;
        }
        if ((s32)(o->items[i].b - o->now) <= 0) {
            for (j = i; j < 4; j++) {
                o->items[j] = o->items[j + 1];
            }
            o->items[4].a = 0;
            o->items[4].b = 0;
        } else {
            i++;
        }
    }
}

s32 TLobby__sub_80420BD0(void *arg0, S_80420BD0 *s, s32 arg2) {
    u32 v;
    if (s->flag == 1) {
        if (s->flag) {
            v = s->f34;
        } else {
            v = s->f20 + s->f34;
        }
        if (v != 0) {
            return -1;
        }
    }
    s->f1FC = arg2;
    TLobby__sub_803F9F04(s->data2C, arg0, 0x9C);
    s->flag = 0;
    return 0;
}

s32 TLobby__sub_80420C5C(void) {
    TLobby__sub_803F87C4((void *) (&lbl_805C1DF0.value));
    lbl_805C1DF0.value = 0;
    return 0;
}
s32 TLobby__sub_80420D38(u16 arg0, u8 arg1) {
    s16 i;
    E_80420D38 *e;
    G_80420D38 *g = (G_80420D38 *)&lbl_805C1DF0;
    for (i = 0, e = g->ents; i < g->count; i++, e++) {
        if (e->f4 != 0 && e->fE == arg0) {
            s16 f = 0;
            if ((u8)(arg1 - 2) <= 1) {
                f = 0x81;
            } else if (arg1 <= 1) {
                f = 0x80;
            }
            if (f != 0) {
                TLobby__sub_80422E30(i, e->f40, 2, f);
            }
            break;
        }
    }
    return 0;
}
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline void add_item_80420FC8(Pkt_80420FC8 *pkt, void *data, s32 len) {
    s32 n = pkt->count;
    s32 off = pkt->len;
    pkt->items[n].len = len;
    pkt->len = off + len;
    set_value_and_enable__6TLobbyFPvi(pkt->items[n].data, (s32)data);
    pkt->count++;
}
s16 TLobby__sub_80420FC8(s16 id, Pkt_80420FC8 *pkt, Addr_80420FC8 *src, Addr_80420FC8 *dst, u16 port, s32 arg5) {
    s16 r;
    E_80420FC8 *e;
    if (id < 0 || id >= ((G_80420FC8 *)&lbl_805C1DF0)->count) {
        return -4;
    }
    e = ((G_80420FC8 *)&lbl_805C1DF0)->ents;
    e += id;
    if (e->f4 == 0) {
        return -4;
    }
    if (TLobby__sub_8040DB94(&e->f28) == 0) {
        dst = &e->f28;
    }
    if (e->f14.family != 0) {
        src = &e->f14;
    }
    if (src->family != 0 && src->family != dst->family) {
        return -2;
    }
    if (e->f10 != 0) {
        e->f8 = e->f10;
    } else {
        e->f8 = port;
    }
    if (TLobby__sub_8040DA54(dst, src) == 0) {
        TLobby__sub_80422E30(id, e->f40, 2, 0x80);
        return -6;
    }
    r = TLobby__sub_8040D95C(src, dst);
    if (r < 0) {
        return r;
    }
    e->fA = pkt->len + 8;
    add_item_80420FC8(pkt, e->f6, 8);
    e->fC = 0;
    e->fC = TLobby__sub_8040D8F0(src, dst, 0x11, pkt, 1);
    return TLobby__sub_8040D86C(pkt, dst, src, arg5 + 4, arg5 + 4, 0x11);
}
#pragma pop

}
