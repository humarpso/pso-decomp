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

extern "C" {
void TLobby__sub_803D1FD4(void);
void lock_enter__6TLobbyFv(void);
void TLobby__sub_803D2A14(Ring_803D2A14 *r, s32 which, s32 max, Span_803D2A14 *out);
void TLobby__sub_803D1FD4(void);
void lock_enter__6TLobbyFv(void);
bool TLobby__sub_803D2640(Obj_803D2640 *o, s32 mode, s32 n, s32 *out);
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
    TLobby__sub_803D1FD4();
    return !(n - mode);
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
    TLobby__sub_803D1FD4();
}

}
