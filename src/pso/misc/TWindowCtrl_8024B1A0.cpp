#include "types.h"
struct Ctrl_8024B1A0 { u8 pad[0x1C]; u16 flags; };

struct Win_8024B1A0 { u8 pad[0x40]; f32 x; f32 y; f32 w; f32 h; };

struct Msg_8024B1A0 { f32 x; f32 y; };

extern "C" {
u8 *get_message_by_type__11TWindowCtrlFci(s8, s32);
s32 get_flag_bit1__11TWindowCtrlFPv();
s16 get_field_20__11TWindowCtrlFPv(void *);
extern Ctrl_8024B1A0 *TWindowCtrl__active_window;
extern const f32 lbl_805DCBE0;
extern const f32 lbl_805DCBE4;
s8 alloc_nearest_free_slot__11TWindowCtrlFPv(Win_8024B1A0 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
s8 alloc_nearest_free_slot__11TWindowCtrlFPv(Win_8024B1A0 *arg0) {
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
    if (TWindowCtrl__active_window == NULL) {
        return 0;
    }
    if (get_flag_bit1__11TWindowCtrlFPv() != 0) {
        TWindowCtrl__active_window->flags |= 0x200;
        return 3;
    }
    mask = 0x40;
    best = -1;
    i = 0;
    cx = (lbl_805DCBE4 * arg0->w) + arg0->x;
    bestd = lbl_805DCBE0;
    cy = (lbl_805DCBE4 * arg0->h) + arg0->y;
    do {
        if (!(TWindowCtrl__active_window->flags & mask)) {
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
    TWindowCtrl__active_window->flags |= (0x40 << best);
    return best;
}
#pragma pop

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void set_field28__11TWindowCtrlFs(s16 arg0) {
    if ((void *) (*(void * *)&TWindowCtrl__active_window) != NULL) {
        M2C_FIELD((*(void * *)&TWindowCtrl__active_window), s16 *, 0x28) = arg0;
    }
}
u16 get_window_id__11TWindowCtrlFv(void) {
    if ((void *) (*(void * *)&TWindowCtrl__active_window) == NULL) {
        return 0xFFFFU;
    }
    return M2C_FIELD((*(void * *)&TWindowCtrl__active_window), u16 *, 0x28);
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ctrl_8024B328 { u8 pad[0x84]; void *win[4]; };

struct Ctrl_8024B3B4 { u8 pad[0x84]; void *win[4]; };

struct Ctrl_8024B440 { u8 pad[0x84]; void *win[4]; };

extern "C" {
s32 acquire_balloon_slot__11TWindowCtrlFPviiPv(s32, u16, s32, s32);
void open__15TWindowFukidasiFPvPvi(void *, void *, s32);
s32 open_balloon__11TWindowCtrlFUsPvii(u16 arg0, u8 *arg1, s32 arg2, s32 arg3);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
u16 get_flags__11TWindowCtrlFPv(void *);
void TWindow__close(void *);
void close_windows_by_flags__11TWindowCtrlFUs(u16 arg0);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
u16 get_flags__11TWindowCtrlFPv(void *);
void complete_speech_balloon(void *);
void complete_actor_speech_balloons(u16 arg0);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
u16 get_flags__11TWindowCtrlFPv(void *);
s32 is_speech_balloon_ready(void *);
s32 is_actor_speech_balloon_done(u16 arg0);
}

extern "C" {

void close_windows_by_flags__11TWindowCtrlFUs(u16 arg0) {
    u32 i;
    void *w;
    if ((*(u32 *)&TWindowCtrl__active_window) != 0) {
        for (i = 0; i < 4; i++) {
            w = ((Ctrl_8024B328 *)(*(u32 *)&TWindowCtrl__active_window))->win[i];
            if (w != NULL && all_parents_unqueued_for_destruction__7TObjectFv(w) != 0 && arg0 == get_flags__11TWindowCtrlFPv(w)) {
                TWindow__close(w);
            }
        }
    }
}

void complete_actor_speech_balloons(u16 arg0) {
    u32 i;
    void *w;
    if ((*(u32 *)&TWindowCtrl__active_window) != 0) {
        for (i = 0; i < 4; i++) {
            w = ((Ctrl_8024B3B4 *)(*(u32 *)&TWindowCtrl__active_window))->win[i];
            if (w != NULL && all_parents_unqueued_for_destruction__7TObjectFv(w) != 0 && arg0 == get_flags__11TWindowCtrlFPv(w)) {
                complete_speech_balloon(w);
            }
        }
    }
}

s32 is_actor_speech_balloon_done(u16 arg0) {
    u32 i;
    void *w;
    if ((*(u32 *)&TWindowCtrl__active_window) == 0) {
        return 1;
    }
    for (i = 0; i < 4; i++) {
        w = ((Ctrl_8024B440 *)(*(u32 *)&TWindowCtrl__active_window))->win[i];
        if (w != NULL && all_parents_unqueued_for_destruction__7TObjectFv(w) != 0 && arg0 == get_flags__11TWindowCtrlFPv(w) && is_speech_balloon_ready(w) == 0) {
            return 0;
        }
    }
    return 1;
}

s32 open_balloon__11TWindowCtrlFUsPvii(u16 arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;
    if ((u32) (*(u32 *)&TWindowCtrl__active_window) == 0U) {
        return 0;
    }
    temp_r3 = acquire_balloon_slot__11TWindowCtrlFPviiPv((s32) (*(u32 *)&TWindowCtrl__active_window), arg0, arg2, arg3);
    if (temp_r3 == 0) {
        return 0;
    }
    open__15TWindowFukidasiFPvPvi((void *) temp_r3, arg1, arg2);
    return temp_r3;
}

}
