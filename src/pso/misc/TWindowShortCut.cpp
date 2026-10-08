#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8026E728_lbl_804D0AE0 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_8026E728___vt__15TWindowShortCut {
    M2C_UNK value;
    u8 remaining[0x18];
};

extern "C" {
s32 draw_default_entry__9TWindowDDFi();
M2C_UNK draw_window_frame(void *, int);
M2C_UNK draw_visible_window_entries(void *, void *, int);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(int, int);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * construct_base__9TWindowDDFPvPvsPv(void *, s32, s16, s32);
s32 construct_type1_heading__20TWindowSubStatusDispFPvii(s32, s32, s32);
s32 get_message_10__20TWindowSubStatusDispFPv(int);
M2C_UNK TWindowSubStatusDisp__sub_8026E1D4(void *, void *, void *);
extern RecoveredGlobal_8026E728_lbl_804D0AE0 lbl_804D0AE0;
extern M2C_UNK __vt__15TWindowShortCut[];
extern s32 lbl_805D39D8;
u8 *TWindowShortCut__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
}

extern "C" {

void *__dt__15TWindowShortCutFv(void *arg0, s16 arg1);
void run_task__15TWindowShortCutFv(void* p);
int update_window_entry_list(void*, void*);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);
void destroy_window_base__9TWindowDDFPvs(void *, int);
int initialize_subwindow__9TWindowDDFPv(void*);
int update_fade__17TWindowSubComCardFPv(void*);
int update_subwindow__20TWindowSubStatusDispFPv(void*);

void render__15TWindowShortCutFv(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = draw_default_entry__9TWindowDDFi();
    draw_window_frame((void *) (arg0), (int) (temp_r3));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
    forward_render__20TWindowSubStatusDispFPv((int) (M2C_FIELD(arg0, s32 *, 0x60)), (int) (temp_r3));
}

void run_task__15TWindowShortCutFv(void* p) { update_subwindow__20TWindowSubStatusDispFPv(*(void**)((char*)p + 0x60)); initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); update_window_entry_list(p, (char*)p + 0x24); }

extern M2C_UNK __vt__15TWindowShortCut[];

void *__dt__15TWindowShortCutFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TWindowShortCut;
        if (M2C_FIELD(arg0, void **, 0x68) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x68)); M2C_FIELD(arg0, M2C_UNK *, 0x68) = 0; }
        if (M2C_FIELD(arg0, void **, 0x64) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x64)); M2C_FIELD(arg0, M2C_UNK *, 0x64) = 0; }
        destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x60), 1);
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
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
    construct_base__9TWindowDDFPvPvsPv(arg0, (s32) &lbl_804D0AE0.value, 4, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8026E728___vt__15TWindowShortCut *)&__vt__15TWindowShortCut).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D39D8;
    var_r31 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x24);
    if (var_r31 != 0) {
        var_r31 = construct_type1_heading__20TWindowSubStatusDispFPvii(var_r31, get_message_10__20TWindowSubStatusDispFPv((int) (0x35)), (s32) M2C_FIELD(arg0, s16 *, 0x20));
    }
    M2C_FIELD(arg0, s32 *, 0x60) = var_r31;
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x70) = arg3;
    TWindowSubStatusDisp__sub_8026E1D4((void *) (arg0), (void *) (arg2), (void *) (arg3));
    return arg0;
}

}
