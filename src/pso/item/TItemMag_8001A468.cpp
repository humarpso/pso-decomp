#include "types.h"

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Sub_8001A470 { s32 w[4]; };

struct Rec_8001A470 { s32 f0; Sub_8001A470 a; Sub_8001A470 b; f32 f24; f32 f28; };

typedef struct Rec_8001A4CC { s32 a; s32 n; s32 c; } Rec_8001A4CC;

typedef struct Plr_8001A4CC { u8 pad[0x60]; s32 f60; } Plr_8001A4CC;

extern "C" {
void fn_8001A470(Rec_8001A470 *d, Rec_8001A470 *s);
void set_animation_from_data__10TObjPlayerFii(void *, s32);
void query_darkfalz_state__10TObjPlayerFPv(void *, void *);
extern Rec_8001A4CC lbl_80434118[];
extern Rec_8001A4CC lbl_804341A8[];
extern Rec_8001A4CC lbl_80434238[];
extern Rec_8001A4CC lbl_804342C8[];
extern Rec_8001A4CC lbl_80434358[];
extern Rec_8001A4CC lbl_804343E8[];
extern Plr_8001A4CC *lbl_805D49E0;
extern const f32 lbl_805D7DE8;
void TObjPlayer__sub_8001A4CC(s32 arg0, s8 arg1);
}

extern "C" {

s32 get_type__8TItemMagFPv(void* p);

s32 get_type__8TItemMagFPv(void* p) { return *(s32*)((char*)p + 0x4); }
void fn_8001A470(Rec_8001A470 *d, Rec_8001A470 *s) {
    d->f0 = s->f0;
    d->a = s->a;
    d->b = s->b;
    d->f24 = s->f24;
    d->f28 = s->f28;
}
void TObjPlayer__sub_8001A4CC(s32 arg0, s8 arg1) {
    switch (arg0) {
    case 0: {
        query_darkfalz_state__10TObjPlayerFPv(lbl_805D49E0, &lbl_80434118[arg1]);
        lbl_805D49E0->f60 = lbl_805D7DE8 * (f32)lbl_804341A8[arg1].n;
        set_animation_from_data__10TObjPlayerFii(lbl_805D49E0, arg1);
        break;
    }
    case 1: {
        query_darkfalz_state__10TObjPlayerFPv(lbl_805D49E0, &lbl_80434238[arg1]);
        lbl_805D49E0->f60 = lbl_805D7DE8 * (f32)lbl_804342C8[arg1].n;
        set_animation_from_data__10TObjPlayerFii(lbl_805D49E0, arg1);
        break;
    }
    case 2: {
        query_darkfalz_state__10TObjPlayerFPv(lbl_805D49E0, &lbl_80434358[arg1]);
        lbl_805D49E0->f60 = lbl_805D7DE8 * (f32)lbl_804343E8[arg1].n;
        set_animation_from_data__10TObjPlayerFii(lbl_805D49E0, arg1);
        break;
    }
    }
}

}
