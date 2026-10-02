#include "types.h"
struct Entry_80269A0C {
    u16 flags;
    u8 pad2[6];
    f32 f8;
    f32 fC;
    f32 f10;
    f32 f14;
    u8 pad18[0x24 - 0x18];
    s32 f24;
};

struct Rec_80269A0C {
    s32 flags;
    s32 f4;
};

struct Msg_80269A0C {
    u8 pad0[0x2C];
    s32 f2C;
    u8 pad30[0x48 - 0x30];
    f32 f48;
    f32 f4C;
    u8 pad50[0x6C - 0x50];
    f32 f6C;
    u8 pad70[4];
    s32 f74;
    s32 f78;
    Rec_80269A0C *recs;
    f32 f80;
    f32 f84;
    s32 idx;
    s32 count;
};

extern "C" {
Entry_80269A0C *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
u32 get_field_20__17TWindowSubComCardFPv(void *);
void TWindowSubStatusDisp__sub_8025A9C0(void *, f32);
void TWindowSubStatusDisp__sub_8025AC50(void *, s32, s32);
void fn_802694F4(void *, void *);
extern const f32 lbl_805DD218;
extern const f32 lbl_805DD21C;
extern const f32 lbl_805DD234;
extern const f32 lbl_805DD238;
extern const f32 lbl_805DD23C;
s32 fn_80269A0C(Msg_80269A0C *self, s32 text, s32 flags, s32 arg3);
}

extern "C" {

s32 fn_80269A0C(Msg_80269A0C *self, s32 text, s32 flags, s32 arg3) {
    Entry_80269A0C *e;
    Rec_80269A0C *rec;
    f32 y;
    f32 lim;
    if (text == 0) {
        return 0;
    }
    e = get_array_entry__20TWindowSubStatusDispFPvi(self, self->idx);
    rec = &self->recs[self->idx];
    if (get_field_20__17TWindowSubComCardFPv(e) != 0U) {
        fn_802694F4(self, e);
    }
    if (flags & 0x80) {
        self->f80 = self->f6C;
    }
    if (flags & 0x10) {
        lim = (self->f6C + self->f4C) - lbl_805DD238;
        if (self->f80 < lim) {
            self->f80 = lim;
        }
    }
    if (flags & 8) {
        if (self->f74 == self->idx) {
            flags &= ~8;
        } else {
            e->flags |= 8;
        }
    }
    e->fC = self->f80;
    e->f24 = arg3;
    if (flags & 2) {
        TWindowSubStatusDisp__sub_8025AC50(e, text, 0x20);
    } else {
        TWindowSubStatusDisp__sub_8025AC50(e, text, 0);
    }
    if (flags & 0x20) {
        e->flags |= 1;
    }
    if (flags & 0x40) {
        e->flags |= 0x40;
    }
    if (flags & 0x100) {
        e->flags |= 0x80;
    }
    if (flags & 0x400) {
        e->flags |= 0x200;
    }
    y = self->f48 - lbl_805DD234;
    if (self->f2C & 0x80) {
        y -= lbl_805DD23C;
    }
    TWindowSubStatusDisp__sub_8025A9C0(e, y);
    if (flags & 0x200) {
        e->f8 = y - e->f10;
    } else {
        e->f8 = lbl_805DD21C;
    }
    rec->flags = flags;
    rec->f4 = self->f78;
    if (++self->idx >= self->count) {
        self->idx = 0;
    }
    self->f80 += lbl_805DD218 + e->f14;
    if (flags & 1) {
        self->f84 = (self->f80 - e->f14) - lbl_805DD218;
    } else if (self->f80 > (self->f6C + self->f4C) - lbl_805DD238) {
        lim = self->f80 - (self->f4C - lbl_805DD238);
        if (self->f84 < lim) {
            self->f84 = lim;
        }
    }
    return 1;
}

}
