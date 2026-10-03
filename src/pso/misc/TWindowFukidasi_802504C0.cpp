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

struct Fuki_80250F70;
struct Fuki_802504C0;
struct Fuki_80251028 {
    u8 pad0[0x20]; s16 viewport; u8 pad22[0xE];
    f32 rect[2]; f32 anchor[2];
    u8 pad40[0x30];
    u8 phase; u8 options; u8 kind; u8 slot;
};

struct Fuki_80251380 {
    u8 pad0[0x20];
    s16 viewport;
};

struct Vec_80251380 {
    f32 x, y, z;
};

struct Cam_80251380 {
    u8 pad0[0x178];
    f32 pos[3];
    u8 pad184[0x190 - 0x184];
    s32 rx;
    s32 ry;
    s32 rz;
};

extern "C" {
void clamp_position__15TWindowFukidasiFPvPvf(Fuki_80250F70 *, f32 *, f32);
s32 draw_resolved_window__15TWindowFukidasiFiiii(Fuki_80250F70 *, f32 *, f32 *, s32);
extern const f32 TWindowFukidasi__data_805DCCE8;
s32 shift_rect_with_head__15TWindowFukidasiFPvPvPv(Fuki_80250F70 *b, f32 *rect, f32 *out);
u8 TWindowCtrl__sub_8024B1A0(Fuki_802504C0 *);
void clamp_position__15TWindowFukidasiFPvPvf(Fuki_80250F70 *, f32 *, f32);
void clear_flag2c_bit200__15TWindowFukidasiFPv(Fuki_802504C0 *);
void clear_visible_flag__15TWindowFukidasiFPv(Fuki_802504C0 *);
f32 *get_message_by_type__11TWindowCtrlFci(u8, int);
void release_slot__11TWindowCtrlFPv(u8 *);
void set_flag2c_bit200__15TWindowFukidasiFPv(Fuki_802504C0 *);
void set_flag__15TWindowFukidasiFPv(Fuki_802504C0 *);
extern const f32 TWindowFukidasi__data_805DCCE8;
extern const f32 TWindowFukidasi__data_805DCD0C;
void place_rect_at_head_or_slot__15TWindowFukidasiFPv(Fuki_802504C0 *b);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern const f32 TWindowFukidasi__data_805DCCE8;
extern const f32 TWindowFukidasi__data_805DCD0C;
extern const f32 TWindowFukidasi__data_805DCD18;
extern const f32 TWindowFukidasi__data_805DCD1C;
extern const f32 TWindowFukidasi__data_805DCD4C;
void get_boundary_offset__15TWindowFukidasiFPviPv(Fuki_8025181C *b, s32 angle, f32 *out);
s32 is_bit10_set__15TWindowFukidasiFPv(void *);
void hide__15TWindowFukidasiFPv(void *);
f32 *get_message_by_type__11TWindowCtrlFci(u8, int);
void release_slot__11TWindowCtrlFPv(u8 *);
u8 TWindowCtrl__sub_8024B1A0(Fuki_802504C0 *);
s32 TWindowFukidasi__sub_802505C0(void *, f32 *, f32 *);
s32 TWindowFukidasi__sub_802506E8(void *, f32 *, f32 *);
s32 TWindowFukidasi__sub_80250A24(void *, f32 *, f32 *);
s32 shift_rect_with_head__15TWindowFukidasiFPvPvPv(Fuki_80250F70 *b, f32 *rect, f32 *out);
void clamp_position__15TWindowFukidasiFPvPvf(Fuki_80250F70 *, f32 *, f32);
void clear_flag2c_bit200__15TWindowFukidasiFPv(Fuki_802504C0 *);
void clear_visible_flag__15TWindowFukidasiFPv(Fuki_802504C0 *);
void set_flag2c_bit200__15TWindowFukidasiFPv(Fuki_802504C0 *);
void set_flag__15TWindowFukidasiFPv(Fuki_802504C0 *);
extern const f32 TWindowFukidasi__data_805DCCE8;
extern const f32 TWindowFukidasi__data_805DCD0C;
void refresh_rect_placement__15TWindowFukidasiFPv(Fuki_80251028 *b);
s32 get_flag_bit1__11TWindowCtrlFPv(Fuki_802504C0 *);
f32 get_field_18__15TWindowCtrlMainFv(s16);
f32 get_ctrl_field14__15TWindowCtrlMainFv(s16);
f32 get_field10__15TWindowCtrlMainFv(s16);
f32 get_position_z__15TWindowCtrlMainFv(s16);
s32 TWindowFukidasi__sub_802511E4(Fuki_80250F70 *, f32 *, f32 *);
void TWindowFukidasi__sub_80252C68(Fuki_802504C0 *);
s32 is_flag_set__15TWindowFukidasiFPv(Fuki_802504C0 *);
void TWindowFukidasi__sub_80252C84();
f32 TObjPlayer__sub_803D89C0(void *, void *);
void rotate_vector_by_matrix(s32, void *, void *);
void rotate_matrix_y(s32, s32);
void rotate_matrix_x(s32, s32);
void rotate_matrix_z(s32, s32);
void push_matrix_from(void *);
void pop_matrix();
extern Vec_80251380 lbl_8044ED58;
extern u8 lbl_8058D490[];
extern Cam_80251380 *lbl_805D4DF0;
extern const f32 TWindowFukidasi__data_805DCD30;
extern const f32 lbl_805DCD3C;
extern const f32 lbl_805DCD40;
extern const f32 lbl_805DCD44;
s32 is_speaker_far_or_offscreen__15TWindowFukidasiFPv(Fuki_802504C0 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
void place_rect_at_head_or_slot__15TWindowFukidasiFPv(Fuki_802504C0 *b) {
    if (is_speaker_far_or_offscreen__15TWindowFukidasiFPv((Fuki_802504C0 *)(b)) != 0) {
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

s32 shift_rect_with_head__15TWindowFukidasiFPvPvPv(Fuki_80250F70 *b, f32 *rect, f32 *out) {
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
void refresh_rect_placement__15TWindowFukidasiFPv(Fuki_80251028 *b) {
    if (is_speaker_far_or_offscreen__15TWindowFukidasiFPv((Fuki_802504C0 *)((Fuki_802504C0 *)b)) != 0) {
        f32 *m;
        if ((s8)b->slot == -1) {
            set_flag__15TWindowFukidasiFPv((Fuki_802504C0 *)b);
            set_flag2c_bit200__15TWindowFukidasiFPv((Fuki_802504C0 *)b);
            b->slot = TWindowCtrl__sub_8024B1A0((Fuki_802504C0 *)b);
        }
        m = get_message_by_type__11TWindowCtrlFci(b->slot, b->viewport);
        b->rect[0] = m[0] - TWindowFukidasi__data_805DCD0C * b->anchor[0];
        b->rect[1] = m[1] - TWindowFukidasi__data_805DCD0C * b->anchor[1];
        clamp_position__15TWindowFukidasiFPvPvf((Fuki_80250F70 *)(b), (f32 *)(b->rect), TWindowFukidasi__data_805DCCE8);
    } else {
        f32 a[2];
        f32 c[2];
        f32 d[2];
        f32 e[2];
        f32 *res;
        if ((s8)b->slot != -1) {
            clear_visible_flag__15TWindowFukidasiFPv((Fuki_802504C0 *)b);
            clear_flag2c_bit200__15TWindowFukidasiFPv((Fuki_802504C0 *)b);
            release_slot__11TWindowCtrlFPv(&b->slot);
        }
        res = NULL;
        if (is_bit10_set__15TWindowFukidasiFPv(b) == 0) {
            if (shift_rect_with_head__15TWindowFukidasiFPvPvPv((Fuki_80250F70 *)b, b->rect, a) != 0) {
                res = a;
            }
            if (TWindowFukidasi__sub_80250A24(b, a, c) != 0) {
                res = c;
            }
        } else {
            hide__15TWindowFukidasiFPv(b);
            if (shift_rect_with_head__15TWindowFukidasiFPvPvPv((Fuki_80250F70 *)b, b->rect, a) != 0) {
                res = a;
            }
            if (TWindowFukidasi__sub_802506E8(b, a, d) != 0) {
                res = d;
            }
            if (res != d && TWindowFukidasi__sub_80250A24(b, d, c) != 0) {
                res = c;
            }
            if (res == NULL && TWindowFukidasi__sub_802505C0(b, b->rect, e) != 0) {
                res = e;
            }
        }
        if (res != NULL) {
            b->rect[0] = res[0];
            b->rect[1] = res[1];
        }
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
#define b ((Fuki_80251380 *)arg0)
s32 is_speaker_far_or_offscreen__15TWindowFukidasiFPv(Fuki_802504C0 *arg0) {
    f32 pos[3];
    f32 scr[2];
    f32 m;
    f32 xx;
    f32 yy;
    f32 zz;
    TWindowFukidasi__sub_80252C84();
    if (TWindowFukidasi__sub_802511E4((Fuki_80250F70 *)arg0, pos, scr) == 0) {
        return 1;
    }
    if (is_flag_set__15TWindowFukidasiFPv(arg0) != 0) {
        m = lbl_805DCD3C;
    } else {
        m = TWindowFukidasi__data_805DCD30;
    }
    if (scr[0] < get_position_z__15TWindowCtrlMainFv(b->viewport) - m) {
        return 1;
    }
    if (scr[1] < get_field10__15TWindowCtrlMainFv(b->viewport) - m) {
        return 1;
    }
    if (scr[0] > m + get_ctrl_field14__15TWindowCtrlMainFv(b->viewport)) {
        return 1;
    }
    if (scr[1] > m + get_field_18__15TWindowCtrlMainFv(b->viewport)) {
        return 1;
    }
    Vec_80251380 v = lbl_8044ED58;
    f32 d[3];
    push_matrix_from(lbl_8058D490);
    rotate_matrix_y(0, lbl_805D4DF0->ry);
    rotate_matrix_x(0, lbl_805D4DF0->rx);
    rotate_matrix_z(0, lbl_805D4DF0->rz);
    rotate_vector_by_matrix(0, &v, &v);
    pop_matrix();
    d[0] = pos[0] - lbl_805D4DF0->pos[0];
    d[1] = pos[1] - lbl_805D4DF0->pos[1];
    d[2] = pos[2] - lbl_805D4DF0->pos[2];
    if (TObjPlayer__sub_803D89C0(&v, d) <= TWindowFukidasi__data_805DCD30) {
        return 1;
    }
    xx = d[0] * d[0];
    yy = d[1] * d[1];
    zz = d[2] * d[2];
    if (zz + (xx + yy) > lbl_805DCD44 * m + lbl_805DCD40) {
        return 1;
    }
    TWindowFukidasi__sub_80252C68(arg0);
    return get_flag_bit1__11TWindowCtrlFPv(arg0) != 0 ? 1 : 0;
}
#undef b
#pragma pop

#pragma push
#pragma fp_contract on
void get_boundary_offset__15TWindowFukidasiFPviPv(Fuki_8025181C *b, s32 angle, f32 *out) {
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
