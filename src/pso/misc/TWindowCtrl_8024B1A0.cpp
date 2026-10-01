#include "types.h"
struct Ctrl_8024B1A0 { u8 pad[0x1C]; u16 flags; };

struct Win_8024B1A0 { u8 pad[0x40]; f32 x; f32 y; f32 w; f32 h; };

struct Msg_8024B1A0 { f32 x; f32 y; };

extern "C" {
u8 *get_message_by_type__11TWindowCtrlFci(s8, s32);
s32 get_flag_bit1__11TWindowCtrlFPv();
s16 get_field_20__11TWindowCtrlFPv(void *);
extern Ctrl_8024B1A0 *TWindowCtrl__data_805D63F8;
extern const f32 lbl_805DCBE0;
extern const f32 lbl_805DCBE4;
s8 TWindowCtrl__sub_8024B1A0(Win_8024B1A0 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
s8 TWindowCtrl__sub_8024B1A0(Win_8024B1A0 *arg0) {
    s32 i;
    s32 mask;
    s8 best;
    f32 cx;
    f32 cy;
    f32 bestd;
    Msg_8024B1A0 *m;
    f32 dx;
    f32 dy;
    f32 d;
    if (TWindowCtrl__data_805D63F8 == NULL) {
        return 0;
    }
    if (get_flag_bit1__11TWindowCtrlFPv() != 0) {
        TWindowCtrl__data_805D63F8->flags |= 0x200;
        return 3;
    }
    mask = 0x40;
    best = -1;
    i = 0;
    cx = (lbl_805DCBE4 * arg0->w) + arg0->x;
    bestd = lbl_805DCBE0;
    cy = (lbl_805DCBE4 * arg0->h) + arg0->y;
    do {
        if (!(TWindowCtrl__data_805D63F8->flags & mask)) {
            m = (Msg_8024B1A0 *)get_message_by_type__11TWindowCtrlFci((s8)i, get_field_20__11TWindowCtrlFPv(arg0));
            if (m != NULL) {
                dx = cx - m->x;
                dy = cy - m->y;
                d = (dx * dx) + (dy * dy);
                if (!(bestd <= d)) {
                    best = (s8)i;
                    bestd = d;
                }
            }
        }
        i++;
        mask <<= 1;
    } while (i < 3);
    if (best == -1) {
        best = 3;
    }
    TWindowCtrl__data_805D63F8->flags |= (0x40 << best);
    return best;
}
#pragma pop

}
