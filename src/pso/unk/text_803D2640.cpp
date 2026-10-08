#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Ring_803D2A14 {
    u8 pad0[0xC];
    s32 avail1;
    s32 avail0;
    s32 pos0;
    s32 pos1;
    s32 base;
    s32 size;
    s32 extra;
    void (*cb)(s32, s32);
    s32 cbArg;
};

struct Span_803D2A14 { s32 ptr; s32 len; };

struct Obj_803D2640 {
    u8 pad[0xC];
    s32 xc;
    s32 x10;
    s32 x14;
    s32 x18;
    u8 pad1c[4];
    s32 x20;
    s32 x24;
    void (*cb)(s32, s32);
    s32 cbArg;
};

struct Obj_803D28D8 {
    u8 pad[0xC];
    s32 xc;
    s32 x10;
    s32 x14;
    s32 x18;
    u8 *base;
    s32 size;
    s32 extra;
    void (*cb)(s32, s32);
    s32 cbArg;
};

struct Buf_803D28D8 { u8 *ptr; s32 len; };

extern "C" {
void restore_interrupts_nested__6TLobbyFv(void);
void lock_enter__6TLobbyFv(void);
void TLobby__sub_803D2A14(Ring_803D2A14 *r, s32 which, s32 max, Span_803D2A14 *out);
void restore_interrupts_nested__6TLobbyFv(void);
void lock_enter__6TLobbyFv(void);
bool TLobby__sub_803D2640(Obj_803D2640 *o, s32 mode, s32 n, s32 *out);
void restore_interrupts_nested__6TLobbyFv(void);
void lock_enter__6TLobbyFv(void);
void TLobby__sub_803D274C(u8 *arg0, s32 arg1, u8 *arg2);
void restore_interrupts_nested__6TLobbyFv(void);
void lock_enter__6TLobbyFv(void);
void *memcpy(void *, const void *, unsigned long);
void TLobby__sub_803D28D8(Obj_803D28D8 *o, s32 mode, Buf_803D28D8 *b);
}

extern "C" {

#define MIN_803D2A14(a, b) ((a) < (b) ? (a) : (b))

#define MIN_803D2640(a, b) ((a) < (b) ? (a) : (b))
bool TLobby__sub_803D2640(Obj_803D2640 *o, s32 mode, s32 n, s32 *out) {
    s32 t;
    lock_enter__6TLobbyFv();
    if (mode == 0) {
        t = MIN_803D2640(o->x10, o->x24 + (o->x20 - o->x14));
        mode = MIN_803D2640(t, n);
    } else if (mode == 1) {
        t = MIN_803D2640(o->xc, o->x24 + (o->x20 - o->x18));
        mode = MIN_803D2640(t, n);
    } else {
        mode = 0;
        if (o->cb != 0) {
            o->cb(o->cbArg, -3);
        }
    }
    *out = mode;
    restore_interrupts_nested__6TLobbyFv();
    return !(n - mode);
}

void TLobby__sub_803D274C(u8 *arg0, s32 arg1, u8 *arg2) {
    M2C_UNK (*temp_r12)(s32, M2C_UNK);
    M2C_UNK (*temp_r12_2)(s32, M2C_UNK);
    M2C_UNK (*temp_r12_3)(s32, M2C_UNK);
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r6;
    s32 temp_r6_2;
    if ((s32) M2C_FIELD(arg2, s32 *, 4) <= 0 || M2C_FIELD(arg2, u8 **, 0) == NULL) {
        return;
    }
        lock_enter__6TLobbyFv();
        if (arg1 == 0) {
            temp_r6 = M2C_FIELD(arg0, s32 *, 0x20);
            temp_r4 = ((M2C_FIELD(arg0, s32 *, 0x14) + temp_r6) - M2C_FIELD(arg2, s32 *, 4)) % temp_r6;
            if (temp_r4 == ((M2C_FIELD(arg2, u8 **, 0) - M2C_FIELD(arg0, u8 **, 0x1C)) % temp_r6)) {
                M2C_FIELD(arg0, s32 *, 0x14) = temp_r4;
                M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + M2C_FIELD(arg2, s32 *, 4));
            } else {
                temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK), 0x28);
                if (temp_r12 != NULL) {
                    temp_r12(M2C_FIELD(arg0, s32 *, 0x2C), -3);
                }
            }
        } else if (arg1 == 1) {
            temp_r6_2 = M2C_FIELD(arg0, s32 *, 0x20);
            temp_r4_2 = ((M2C_FIELD(arg0, s32 *, 0x18) + temp_r6_2) - M2C_FIELD(arg2, s32 *, 4)) % temp_r6_2;
            if (temp_r4_2 == ((M2C_FIELD(arg2, u8 **, 0) - M2C_FIELD(arg0, u8 **, 0x1C)) % temp_r6_2)) {
                M2C_FIELD(arg0, s32 *, 0x18) = temp_r4_2;
                M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + M2C_FIELD(arg2, s32 *, 4));
            } else {
                temp_r12_2 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK), 0x28);
                if (temp_r12_2 != NULL) {
                    temp_r12_2(M2C_FIELD(arg0, s32 *, 0x2C), -3);
                }
            }
        } else {
            M2C_FIELD(arg2, s32 *, 4) = 0;
            M2C_FIELD(arg2, u32 *, 0) = 0U;
            temp_r12_3 = M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK), 0x28);
            if (temp_r12_3 != NULL) {
                temp_r12_3(M2C_FIELD(arg0, s32 *, 0x2C), -3);
            }
        }
        restore_interrupts_nested__6TLobbyFv();
    }

#define MIN_803D28D8(a, b) ((a) < (b) ? (a) : (b))
void TLobby__sub_803D28D8(Obj_803D28D8 *o, s32 mode, Buf_803D28D8 *b) {
    s32 d;
    s32 n;
    s32 e;
    if (b->len <= 0 || b->ptr == 0) {
        return;
    }
    lock_enter__6TLobbyFv();
    if (mode == 1) {
        o->xc += b->len;
        d = b->ptr - o->base;
        if (d < o->extra) {
            n = MIN_803D28D8(b->len, o->extra - d);
            memcpy(o->base + (o->size + d), b->ptr, n);
        }
        e = (b->ptr - o->base) + b->len;
        if (e > o->size) {
            n = MIN_803D28D8(b->len, e - o->size);
            memcpy(o->base, o->base + (e - n), n);
        }
    } else if (mode == 0) {
        o->x10 += b->len;
    } else {
        b->len = 0;
        b->ptr = 0;
        if (o->cb != 0) {
            o->cb(o->cbArg, -3);
        }
    }
    restore_interrupts_nested__6TLobbyFv();
}

void TLobby__sub_803D2A14(Ring_803D2A14 *r, s32 which, s32 max, Span_803D2A14 *out) {
    lock_enter__6TLobbyFv();
    if (which == 0) {
        out->len = MIN_803D2A14(r->avail0, r->extra + (r->size - r->pos0));
        out->len = MIN_803D2A14(out->len, max);
        out->ptr = r->base + r->pos0;
        r->pos0 = (r->pos0 + out->len) % r->size;
        r->avail0 -= out->len;
    } else if (which == 1) {
        out->len = MIN_803D2A14(r->avail1, r->extra + (r->size - r->pos1));
        out->len = MIN_803D2A14(out->len, max);
        out->ptr = r->base + r->pos1;
        r->pos1 = (r->pos1 + out->len) % r->size;
        r->avail1 -= out->len;
    } else {
        out->len = 0;
        out->ptr = 0;
        if (r->cb != NULL) {
            r->cb(r->cbArg, -3);
        }
    }
    restore_interrupts_nested__6TLobbyFv();
}

}
