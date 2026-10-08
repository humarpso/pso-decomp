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

struct P_8041F66C { s32 a; s32 b; };

struct O_8041F66C {
    u8 pad0[0xD8]; s32 fD8; u8 padDC[4]; u32 fE0; u8 padE4[0xF4 - 0xE4];
    s32 total; s16 n; s16 fFA; P_8041F66C items[32]; u8 pad1FC[0x228 - 0x1FC]; s32 now;
    u8 pad22C[0x534 - 0x22C]; u32 f534;
};

struct Obj_8041ED8C {
    u8 pad0[6];
    s16 f6;
    u8 pad8[3];
    u8 fB;
    u8 padC[0xC8 - 0xC];
    u8 fC8[8];
    u8 padD0[0xD8 - 0xD0];
    u32 fD8;
    u32 fDC;
    u8 padE0[4];
    u8 fE4[4];
    u8 fE8;
    u8 padE9[3];
    u32 fEC;
    s32 fF0;
    u8 padF4[0x200 - 0xF4];
    s32 f200;
    u8 f204;
    u8 pad205[0x2D0 - 0x205];
    s32 f2D0;
    u8 pad2D4[0x534 - 0x2D4];
    u32 f534;
    u8 pad538[4];
    u32 f53C;
    u8 pad540[4];
};

struct G_8041ED8C { Obj_8041ED8C *p; s16 n; u8 pad[0xA2]; };

struct Buf_8041ED8C { u8 b[8]; };

struct Obj_8041F11C {
    u8 pad0[6];
    s16 f6;
    u8 pad8[3];
    u8 fB;
    u8 padC[0xD8 - 0xC];
    u32 fD8;
    u8 padDC[0xE8 - 0xDC];
    u8 fE8;
    u8 padE9[0x200 - 0xE9];
    s32 f200;
    u8 pad204[0x2D0 - 0x204];
    s32 f2D0;
    u8 pad2D4[0x544 - 0x2D4];
};

struct G_8041F11C { Obj_8041F11C *p; s16 n; u8 pad[0xA2]; };

struct Addr_80420DE4 { u32 family; u8 a[0x10]; };

struct E_80420DE4 { u8 pad0[4]; u16 f4; u8 f6[8]; u16 fE; u16 f10; u8 pad12[2]; Addr_80420DE4 f14; Addr_80420DE4 f28; s32 f3C; u8 pad40[4]; };

struct G_80420DE4 { s16 count; u8 pad2[6]; E_80420DE4 *ents; };

struct Hdr_80420DE4 { u16 src; u16 dst; u16 len; u16 sum; };

struct O_80420DE4 { u8 pad0[8]; s32 f8; u8 padC[0xC]; s16 f18; u8 pad1A[2]; u8 f1C[4]; };

struct E_80420C9C { u8 c0; u8 c1; u8 c2; u8 c3; s16 f4; u8 pad6[0x3E]; };
struct G_80420C9C { s16 count; s16 f2; s16 f4; s16 f6; E_80420C9C *ents; };
extern "C" {
void TLobby__sub_803F87C8(void *);
M2C_UNK TLobby__sub_803F87C4(void *);
extern RecoveredGlobal_80420C5C_lbl_805C1DF0 lbl_805C1DF0;
s32 reset_stack_module__6TLobbyFv(void);
void TLobby__sub_8041FDA0(O_8041FDA0 *o, s16 idx, s32 a, s32 b);
void expire_timeout_entries__6TLobbyFPv(O_8041FE44 *o);
s32 TLobby__sub_803F9F04(void *, void *, int);
s32 TLobby__sub_80420BD0(void *arg0, S_80420BD0 *s, s32 arg2);
void TLobby__sub_80422E30(s16, s32, s32, s16);
extern RecoveredGlobal_80420C5C_lbl_805C1DF0 lbl_805C1DF0;
s32 TLobby__sub_80420D38(u16 arg0, u8 arg1);
void set_value_and_enable__6TLobbyFPvi(u8 *, s32);
s16 dispatch_by_addr_family__6TLobbyFiPvPvPvPvPv(void *, void *, void *, s32, s32, int);
s16 TLobby__sub_8040D8F0(void *, void *, int, void *, int);
s16 select_source_address__6TLobbyFPvPv(void *, void *);
s16 TLobby__sub_8040DA54(void *, void *);
s16 is_addr_unspecified__6TLobbyFPv(void *);
void TLobby__sub_80422E30(s16, s32, s32, s16);
extern RecoveredGlobal_80420C5C_lbl_805C1DF0 lbl_805C1DF0;
s16 udp_sendto__6TLobbyFsPvPvPvUsi(s16 id, Pkt_80420FC8 *pkt, Addr_80420FC8 *src, Addr_80420FC8 *dst, u16 port, s32 arg5);
void expire_timeout_entries__6TLobbyFPv(O_8041FE44 *o);
void TLobby__sub_8041F66C(O_8041F66C *o);
s32 TLobby__sub_803F9F04(void *, void *, int);
void TLobby__sub_80422E30(s16, s32, s32, s16);
void TLobby__sub_80422368(s16, s32, s16);
void TLobby__sub_80406EB8(void *, u32);
void TLobby__sub_80406FD8(void *, void *, u32);
void TLobby__sub_8041A9AC(Obj_8041ED8C *);
extern G_8041ED8C lbl_805C1D48;
s32 TLobby__sub_8041ED8C(Obj_8041ED8C *self, void *data, u32 len, s32 arg3);
void TLobby__sub_80422E30(s16, s32, s32, s16);
void TLobby__sub_80422368(s16, s32, s16);
extern G_8041ED8C lbl_805C1D48;
s32 TLobby__sub_8041F11C(Obj_8041F11C *self);
extern RecoveredGlobal_80420C5C_lbl_805C1DF0 lbl_805C1DF0;
void set_value_and_enable__6TLobbyFPvi(u8 *, s32);
s16 TLobby__sub_8040D8F0(void *, void *, int, void *, int);
s16 is_addr_unspecified__6TLobbyFPv(void *);
s16 compare_sockaddr__6TLobbyFPvPv(void *, void *);
s16 is_multicast_address__6TLobbyFPvs(void *, s32);
s16 TLobby__sub_80421F10(void *, void *, void *, u16, s32, s16);
void TLobby__sub_80406EB8(void *, u32);
void TLobby__sub_80406FD8(void *, void *, u32);
s32 udp_input__6TLobbyFPvPvPvi(O_80420DE4 *arg0, Addr_80420DE4 *src, Addr_80420DE4 *dst, s32 arg3);
}

extern "C" {
RecoveredGlobal_80420C5C_lbl_805C1DF0 lbl_805C1DF0;

typedef char RecoveredGlobal_80420C5C_lbl_805C1DF0_size[sizeof(RecoveredGlobal_80420C5C_lbl_805C1DF0) == 0x10 ? 1 : -1];

struct O_8041FE44;

s32 TLobby__sub_8041ED8C(Obj_8041ED8C *self, void *data, u32 len, s32 arg3) {
    s16 idx = self - lbl_805C1D48.p;
    s32 m;
    u32 k;
    Buf_8041ED8C src;
    Buf_8041ED8C dst;
    if (self->fE8 != 0) {
        return -4;
    }
    if ((self->f204 >> 6) & 1) {
        return -4;
    }
    self->f200 = arg3;
    TLobby__sub_803F9F04(self->fE4, data, 8);
    self->fEC = len;
    m = 0;
    self->fF0 = m;
    if (self->fD8 == 0) {
        switch (self->f6) {
        case 0:
        case 5:
        case 7:
        case 8:
        case 10:
            self->fE8 = m;
            TLobby__sub_80422368(idx, self->f200, -7);
            while (self->fE8 != 0) {
                self->fE8 = m;
                TLobby__sub_80422368(idx, self->f200, -7);
            }
            return 0;
        case -1:
            self->fE8 = m;
            TLobby__sub_80422368(idx, self->f200, -11);
            while (self->fE8 != 0) {
                self->fE8 = m;
                TLobby__sub_80422368(idx, self->f200, -11);
            }
            return 0;
        default:
            return 0;
        }
    }
    do {
        m = (s32)(self->fD8 > self->fEC ? self->fEC : self->fD8);
        self->fF0 = m;
        TLobby__sub_803F9F04(&src, self->fC8, 8);
        TLobby__sub_80406EB8(&src, self->fDC);
        TLobby__sub_803F9F04(&dst, self->fE4, 8);
        if (self->fDC + m > self->f534) {
            k = self->f534 - self->fDC;
            TLobby__sub_80406FD8(&dst, &src, k);
            TLobby__sub_80406EB8(&dst, k);
            m -= k;
            self->fD8 -= k;
            self->fDC = 0;
            TLobby__sub_803F9F04(&src, self->fC8, 8);
        }
        TLobby__sub_80406FD8(&dst, &src, m);
        self->fD8 -= m;
        self->fDC += m;
        if (self->fDC >= self->f534) {
            self->fDC -= self->f534;
        }
        self->fE8 = 0;
        TLobby__sub_80422368(idx, self->f200, self->fF0);
    } while (self->fE8 != 0 && self->fD8 != 0);
    if (self->f53C == 0) {
        self->fB &= ~1;
    }
    if (self->f6 != -1 && self->f6 != 0) {
        TLobby__sub_8041A9AC(self);
    }
    if (self->fE8 != 0) {
        switch (self->f6) {
        case 0:
        case 5:
        case 7:
        case 8:
        case 10:
            TLobby__sub_80422368(idx, self->f200, -7);
            break;
        case -1:
            TLobby__sub_80422368(idx, self->f200, -11);
            break;
        default:
            return 0;
        }
    }
    if (self->fD8 == 0 && (self->fB & 8) && !(self->fB & 0x20)) {
        TLobby__sub_80422E30((s16)(self - lbl_805C1D48.p), self->f2D0, 3, 3);
        self->fB |= 0x20;
    }
    return 0;
}

s32 TLobby__sub_8041F11C(Obj_8041F11C *self) {
    s16 idx = self - (*(G_8041F11C *)&lbl_805C1D48).p;
    while (self->fE8 != 0) {
        self->fE8 = 0;
        TLobby__sub_80422368(idx, self->f200, -7);
    }
    if (self->fD8 == 0 && !(self->fB & 0x20)) {
        TLobby__sub_80422E30((s16)(self - (*(G_8041F11C *)&lbl_805C1D48).p), self->f2D0, 3, 3);
        self->fB |= 0x20;
    }
    return 0;
}

void TLobby__sub_8041F66C(O_8041F66C *o) {
    s16 i;
    s16 cnt;
    s16 j;
    s32 d;
    u8 unused[8];
    if (o->n == -1) {
        return;
    }
    for (i = 0; i <= o->n; i++) {
        if (o->now - o->items[i].b < 0) {
            break;
        }
    }
    if (i <= o->n && o->now - o->items[i].a >= 0) {
        d = o->items[i].b - o->now;
        o->fE0 += d;
        if (o->fE0 >= o->f534) {
            o->fE0 -= o->f534;
        }
        cnt = i + 1;
        o->fD8 += d;
        o->now = o->items[i].b;
    } else {
        cnt = i;
    }
    expire_timeout_entries__6TLobbyFPv((O_8041FE44 *)o);
    if (cnt <= 0) {
        return;
    }
    o->n -= cnt;
    for (j = 0; j < cnt; j++) {
        o->total -= o->items[j].b - o->items[j].a;
    }
    for (j = 0; j <= o->n; j++) {
        o->items[j] = o->items[j + cnt];
    }
    if (o->n == -1) {
        o->fFA = -1;
    } else {
        o->fFA = 0;
    }
}

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

void expire_timeout_entries__6TLobbyFPv(O_8041FE44 *o) {
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

s32 reset_stack_module__6TLobbyFv(void) {
    TLobby__sub_803F87C4((void *) (&lbl_805C1DF0.value));
    lbl_805C1DF0.value = 0;
    return 0;
}
#define G_ (*(G_80420C9C *)&lbl_805C1DF0)
s32 init_ucb_entries__6TLobbyFv(void) {
    s16 i;
    E_80420C9C *e;

    TLobby__sub_803F87C8(&G_);
    e = G_.ents;
    i = 0;
    while (i < G_.count) {
        e->c0 = 0x55;
        e->c1 = 0x43;
        e->c2 = 0x42;
        e->c3 = i;
        e->f4 = 0;
        i++;
        e++;
    }
    G_.f2 = 0;
    G_.f4 = 0x7FF;
    G_.f6 = 0x400;
    return 0;
}
#undef G_
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

s32 udp_input__6TLobbyFPvPvPvi(O_80420DE4 *arg0, Addr_80420DE4 *src, Addr_80420DE4 *dst, s32 arg3) {
    u8 sp20[8];
    Hdr_80420DE4 hdr;
    G_80420DE4 *g;
    s16 i;
    s16 *plen;
    E_80420DE4 *e;
    plen = &arg0->f18;
    set_value_and_enable__6TLobbyFPvi(sp20, (s32)&hdr);
    TLobby__sub_80406FD8(sp20, plen + 2, 8);
    if (hdr.sum != 0 && (u16)TLobby__sub_8040D8F0(src, dst, 0x11, arg0, 0) != 0) {
        return -1;
    }
    g = (G_80420DE4 *)&lbl_805C1DF0;
    e = g->ents;
    i = 0;
    while (i < g->count) {
        if (e->f4 == 0) {
            goto next;
        }
        if (is_addr_unspecified__6TLobbyFPv(&e->f28) != 0) {
            if (e->f28.family != 0 && e->f28.family != src->family) {
                goto next;
            }
        } else if (compare_sockaddr__6TLobbyFPvPv(&e->f28, src) != 0) {
            goto next;
        }
        if (is_addr_unspecified__6TLobbyFPv(&e->f14) != 0) {
            if (e->f14.family != 0 && e->f14.family != dst->family) {
                goto next;
            }
        } else if (compare_sockaddr__6TLobbyFPvPv(&e->f14, dst) != 0) {
            goto next;
        }
        if (e->f10 != 0 && e->f10 != hdr.src) {
            goto next;
        }
        if (e->fE != hdr.dst) {
            goto next;
        }
        arg0->f8 -= 8;
        *plen -= 8;
        TLobby__sub_80406EB8(plen + 2, 8);
        if (TLobby__sub_80421F10(arg0, src, dst, hdr.src, e->f3C, i) != 0) {
            return -1;
        }
        return 0;
    next:
        i++;
        e++;
    }
    if (is_multicast_address__6TLobbyFPvs(dst, arg3) == 1) {
        return 0;
    }
    return -2;
}

s16 udp_sendto__6TLobbyFsPvPvPvUsi(s16 id, Pkt_80420FC8 *pkt, Addr_80420FC8 *src, Addr_80420FC8 *dst, u16 port, s32 arg5) {
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
    if (is_addr_unspecified__6TLobbyFPv(&e->f28) == 0) {
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
    r = select_source_address__6TLobbyFPvPv(src, dst);
    if (r < 0) {
        return r;
    }
    e->fA = pkt->len + 8;
    add_item_80420FC8(pkt, e->f6, 8);
    e->fC = 0;
    e->fC = TLobby__sub_8040D8F0(src, dst, 0x11, pkt, 1);
    return dispatch_by_addr_family__6TLobbyFiPvPvPvPvPv(pkt, dst, src, arg5 + 4, arg5 + 4, 0x11);
}
#pragma pop

}
