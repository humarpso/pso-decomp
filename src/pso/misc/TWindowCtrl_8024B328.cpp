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
extern u32 TWindowCtrl__data_805D63F8;
s32 open_balloon__11TWindowCtrlFUsPvii(u16 arg0, u8 *arg1, s32 arg2, s32 arg3);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
u16 get_flags__11TWindowCtrlFPv(void *);
void TWindow__close(void *);
extern u32 TWindowCtrl__data_805D63F8;
void close_windows_by_flags__11TWindowCtrlFUs(u16 arg0);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
u16 get_flags__11TWindowCtrlFPv(void *);
void complete_speech_balloon(void *);
extern u32 TWindowCtrl__data_805D63F8;
void complete_actor_speech_balloons(u16 arg0);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
u16 get_flags__11TWindowCtrlFPv(void *);
s32 is_speech_balloon_ready(void *);
extern u32 TWindowCtrl__data_805D63F8;
s32 is_actor_speech_balloon_done(u16 arg0);
}

extern "C" {

void close_windows_by_flags__11TWindowCtrlFUs(u16 arg0) {
    u32 i;
    void *w;
    if (TWindowCtrl__data_805D63F8 != 0) {
        for (i = 0; i < 4; i++) {
            w = ((Ctrl_8024B328 *)TWindowCtrl__data_805D63F8)->win[i];
            if (w != NULL && all_parents_unqueued_for_destruction__7TObjectFv(w) != 0 && arg0 == get_flags__11TWindowCtrlFPv(w)) {
                TWindow__close(w);
            }
        }
    }
}

void complete_actor_speech_balloons(u16 arg0) {
    u32 i;
    void *w;
    if (TWindowCtrl__data_805D63F8 != 0) {
        for (i = 0; i < 4; i++) {
            w = ((Ctrl_8024B3B4 *)TWindowCtrl__data_805D63F8)->win[i];
            if (w != NULL && all_parents_unqueued_for_destruction__7TObjectFv(w) != 0 && arg0 == get_flags__11TWindowCtrlFPv(w)) {
                complete_speech_balloon(w);
            }
        }
    }
}

s32 is_actor_speech_balloon_done(u16 arg0) {
    u32 i;
    void *w;
    if (TWindowCtrl__data_805D63F8 == 0) {
        return 1;
    }
    for (i = 0; i < 4; i++) {
        w = ((Ctrl_8024B440 *)TWindowCtrl__data_805D63F8)->win[i];
        if (w != NULL && all_parents_unqueued_for_destruction__7TObjectFv(w) != 0 && arg0 == get_flags__11TWindowCtrlFPv(w) && is_speech_balloon_ready(w) == 0) {
            return 0;
        }
    }
    return 1;
}

s32 open_balloon__11TWindowCtrlFUsPvii(u16 arg0, u8 *arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;
    if ((u32) TWindowCtrl__data_805D63F8 == 0U) {
        return 0;
    }
    temp_r3 = acquire_balloon_slot__11TWindowCtrlFPviiPv((s32) TWindowCtrl__data_805D63F8, arg0, arg2, arg3);
    if (temp_r3 == 0) {
        return 0;
    }
    open__15TWindowFukidasiFPvPvi((void *) temp_r3, arg1, arg2);
    return temp_r3;
}

}
