#include "types.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/misc/TWindowShortCut.h"
#include "pso/misc/TWindowDD.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct RecoveredGlobal_8026E728_lbl_804D0AE0 {
    s32 value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_8026E728___vt__15TWindowShortCut {
    s32 value;
    u8 remaining[0x18];
};

extern "C" {
s32 draw_default_entry__9TWindowDDFl();
s32 draw_window_frame(void *, int);
s32 draw_visible_window_entries(void *, void *, int);
s32 forward_render__20TWindowSubStatusDispFv(int, int);
s32 construct_type1_heading__20TWindowSubStatusDispFll(s32, s32, s32);
s32 get_message_10__20TWindowSubStatusDispFl(int);
s32 TWindowSubStatusDisp__sub_8026E1D4(void *, void *, void *);
extern RecoveredGlobal_8026E728_lbl_804D0AE0 lbl_804D0AE0;
extern s32 __vt__15TWindowShortCut[];
extern s32 TWindowShortCut__name;
u8 *TWindowShortCut__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void *__dt__15TWindowShortCutFv(void *arg0, s16 arg1);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
int initialize_subwindow__9TWindowDDFv(void*);

void render__15TWindowShortCutFv(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = draw_default_entry__9TWindowDDFl();
    draw_window_frame((void *) (arg0), (int) (temp_r3));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
    forward_render__20TWindowSubStatusDispFv((int) (*(s32 *)((s8 *)arg0 + 0x60)), (int) (temp_r3));
}

void TWindowShortCut::run_task() { ((TWindowSubStatusDisp *)(*(void* *)&this->m_60))->update_subwindow(); initialize_subwindow__9TWindowDDFv(this); update_fade(); update_window_entry_list((char*)this + 0x24); }

void *__dt__15TWindowShortCutFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TWindowShortCut;
        if (*(void **)((s8 *)arg0 + 0x68) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x68)); *(s32 *)((s8 *)arg0 + 0x68) = 0; }
        if (*(void **)((s8 *)arg0 + 0x64) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x64)); *(s32 *)((s8 *)arg0 + 0x64) = 0; }
        TWindowSubStatusDisp::destroy_status_display((s32)(*(void **)((s8 *)arg0 + 0x60)), (s16)1);
        ((TWindowDD *)arg0)->destroy_window_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8026E728_lbl_804D0AE0_size[sizeof(RecoveredGlobal_8026E728_lbl_804D0AE0) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_8026E728___vt__15TWindowShortCut_size[sizeof(RecoveredGlobal_8026E728___vt__15TWindowShortCut) == 0x1C ? 1 : -1];
u8 *TWindowShortCut__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r31;
    ((TWindowDD *)arg0)->construct_base((u8 *)((s32) &lbl_804D0AE0.value), (s16)4, (u8 *)arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8026E728___vt__15TWindowShortCut *)&__vt__15TWindowShortCut).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TWindowShortCut__name;
    var_r31 = ((TAdSinglePlyChrSelectGC *)((void *)0x24))->alloc();
    if (var_r31 != 0) {
        var_r31 = construct_type1_heading__20TWindowSubStatusDispFll(var_r31, get_message_10__20TWindowSubStatusDispFl((int) (0x35)), (s32) *(s16 *)((s8 *)arg0 + 0x20));
    }
    *(s32 *)((s8 *)arg0 + 0x60) = var_r31;
    *(s32 *)((s8 *)arg0 + 0x64) = 0;
    *(s32 *)((s8 *)arg0 + 0x68) = 0;
    *(s32 *)((s8 *)arg0 + 0x6C) = arg2;
    *(s32 *)((s8 *)arg0 + 0x70) = arg3;
    TWindowSubStatusDisp__sub_8026E1D4((void *) (arg0), (void *) (arg2), (void *) (arg3));
    return arg0;
}

}
