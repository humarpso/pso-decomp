#include "types.h"
struct Fuki_80250F70 {
    u8 pad0[0x38]; f32 anchor[2];
    u8 pad40[0x50];
    f32 head[2];
};

struct Fuki_802504C0 {
    u8 pad0[0x20]; s16 viewport; u8 pad22[0xE];
    f32 rect[2]; f32 anchor[2];
    u8 pad40[0x30];
    u8 phase; u8 options; u8 kind; u8 slot;
};

struct Fuki_8025181C { u8 pad0[0x38]; f32 w; f32 h; };

extern "C" {
void TWindowFukidasi__sub_802511E4(Fuki_80250F70 *, f32 *, f32 *);
void clamp_position__15TWindowFukidasiFPvPvf(Fuki_80250F70 *, f32 *, f32);
s32 draw_resolved_window__15TWindowFukidasiFiiii(Fuki_80250F70 *, f32 *, f32 *, s32);
extern const f32 TWindowFukidasi__data_805DCCE8;
s32 TWindowFukidasi__sub_80250F70(Fuki_80250F70 *b, f32 *rect, f32 *out);
u8 TWindowCtrl__sub_8024B1A0(Fuki_802504C0 *);
void TWindowFukidasi__sub_802511E4(Fuki_80250F70 *, f32 *, f32 *);
s32 TWindowFukidasi__sub_80251380(Fuki_802504C0 *);
void clamp_position__15TWindowFukidasiFPvPvf(Fuki_80250F70 *, f32 *, f32);
void clear_flag2c_bit200__15TWindowFukidasiFPv(Fuki_802504C0 *);
void clear_visible_flag__15TWindowFukidasiFPv(Fuki_802504C0 *);
f32 *get_message_by_type__11TWindowCtrlFci(u8, int);
void release_slot__11TWindowCtrlFPv(u8 *);
void set_flag2c_bit200__15TWindowFukidasiFPv(Fuki_802504C0 *);
void set_flag__15TWindowFukidasiFPv(Fuki_802504C0 *);
extern const f32 TWindowFukidasi__data_805DCCE8;
extern const f32 TWindowFukidasi__data_805DCD0C;
void TWindowFukidasi__sub_802504C0(Fuki_802504C0 *b);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern const f32 TWindowFukidasi__data_805DCCE8;
extern const f32 TWindowFukidasi__data_805DCD0C;
extern const f32 TWindowFukidasi__data_805DCD18;
extern const f32 TWindowFukidasi__data_805DCD1C;
extern const f32 TWindowFukidasi__data_805DCD4C;
void TWindowFukidasi__sub_8025181C(Fuki_8025181C *b, s32 angle, f32 *out);
}

extern "C" {

#pragma push
#pragma fp_contract on
void TWindowFukidasi__sub_802504C0(Fuki_802504C0 *b) {
    if (TWindowFukidasi__sub_80251380(b) != 0) {
        f32 *m;
        if ((s8)b->slot == -1) {
            set_flag__15TWindowFukidasiFPv(b);
            set_flag2c_bit200__15TWindowFukidasiFPv(b);
            b->slot = TWindowCtrl__sub_8024B1A0(b);
        }
        m = get_message_by_type__11TWindowCtrlFci(b->slot, b->viewport);
        b->rect[0] = m[0] - TWindowFukidasi__data_805DCD0C * b->anchor[0];
        b->rect[1] = m[1] - TWindowFukidasi__data_805DCD0C * b->anchor[1];
        clamp_position__15TWindowFukidasiFPvPvf((Fuki_80250F70 *)(b), (f32 *)(b->rect), TWindowFukidasi__data_805DCCE8);
    } else {
        f32 p[2];
        if ((s8)b->slot != -1) {
            clear_visible_flag__15TWindowFukidasiFPv(b);
            clear_flag2c_bit200__15TWindowFukidasiFPv(b);
            release_slot__11TWindowCtrlFPv(&b->slot);
        }
        TWindowFukidasi__sub_802511E4((Fuki_80250F70 *)(b), (f32 *)(0), (f32 *)(p));
        b->rect[0] = p[0] - TWindowFukidasi__data_805DCD0C * b->anchor[0];
        b->rect[1] = p[1] - TWindowFukidasi__data_805DCD0C * b->anchor[1];
    }
}
#pragma pop

s32 TWindowFukidasi__sub_80250F70(Fuki_80250F70 *b, f32 *rect, f32 *out) {
    f32 x = b->head[0];
    f32 y = b->head[1];
    TWindowFukidasi__sub_802511E4(b, 0, b->head);
    out[0] = rect[0] + (b->head[0] - x);
    out[1] = rect[1] + (b->head[1] - y);
    clamp_position__15TWindowFukidasiFPvPvf(b, out, TWindowFukidasi__data_805DCCE8);
    if (draw_resolved_window__15TWindowFukidasiFiiii(b, out, b->anchor, 4) == 0) {
        return 1;
    }
    return 0;
}
#pragma push
#pragma fp_contract on
void TWindowFukidasi__sub_8025181C(Fuki_8025181C *b, s32 angle, f32 *out) {
    f32 ax;
    f32 ay;
    f32 kx;
    f32 ky;
    s32 neg;
    ax = TWindowFukidasi__data_805DCD0C * (TWindowFukidasi__data_805DCD0C * b->w + TWindowFukidasi__data_805DCD18);
    ay = TWindowFukidasi__data_805DCD0C * (TWindowFukidasi__data_805DCD0C * b->h + TWindowFukidasi__data_805DCD1C);
    out[0] = ax * TBoss8Dragon__sub_803D64DC(angle);
    out[1] = ay * TBoss8Dragon__sub_803D64C0(angle);
    if ((angle + 0x2000) & 0x4000) {
        kx = TBoss8Dragon__sub_803D64C0(angle - 0x4000) / TBoss8Dragon__sub_803D64DC(angle - 0x4000);
        if (!(angle & 0x8000)) {
            kx = -kx;
        }
        if (angle & 0x8000) {
            ky = TWindowFukidasi__data_805DCD4C;
        } else {
            ky = TWindowFukidasi__data_805DCCE8;
        }
    } else {
        neg = (angle + 0x2000) & 0x8000;
        if (neg) {
            kx = TWindowFukidasi__data_805DCD4C;
        } else {
            kx = TWindowFukidasi__data_805DCCE8;
        }
        ky = TBoss8Dragon__sub_803D64C0(angle) / TBoss8Dragon__sub_803D64DC(angle);
        if (neg) {
            ky = -ky;
        }
    }
    out[0] += ax * kx;
    out[1] += ay * ky;
}
#pragma pop

}
