#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8026AB3C___vt__17TWindowMessageLog { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8026AB3C___vt__17TWindowMessageLog_size[sizeof(RecoveredGlobal_8026AB3C___vt__17TWindowMessageLog) == 0x18 ? 1 : -1];

#include <stddef.h>
struct Stack_8026ABA8 {
    f32 sp8;
    f32 spC;
};

struct RecoveredGlobal_8026ABA8___vt__17TWindowMessageLog {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK draw_window_frame(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
M2C_UNK TWindowSubStatusDisp__sub_8026D790(int, int, void *);
void render__17TWindowMessageLogFv(u8 *arg0);
int initialize_subwindow__9TWindowDDFPv(void *);
void update_window_entry_list(void *, void *);
void update_scroll__14TWindowMessageFPv(void *);
void update_fade_offset__17TWindowMessageLogFPv(void *);
void update_scroll_animation__17TWindowMessageLogFPv(void *);
void increment_counter__20TWindowSubStatusDispFPv(void *);
extern const f32 lbl_805DD254;
void run_task__17TWindowMessageLogFv(u8 *arg0);
u8 * __dt__14TWindowMessageFv(void *, s16);
s32 destroy_allocation__20TWindowSubStatusDispFis(s32, s16);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TWindowCtrl__sub_8026AD60();
extern RecoveredGlobal_8026AB3C___vt__17TWindowMessageLog __vt__17TWindowMessageLog;
u8 *__dt__17TWindowMessageLogFv(u8 *arg0, s16 arg1);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int, f32, f32);
s32 TWindowMessage__ct(void *, void *, int, void *);
s32 load_chat_history__17TWindowMessageLogFPv(void *);
s32 TWindowCtrl__sub_8026AD78(void *);
s32 reset_selection__20TWindowSubStatusDispFPv(int, void *);
extern RecoveredGlobal_8026AB3C___vt__17TWindowMessageLog __vt__17TWindowMessageLog;
extern s32 lbl_805D3990;
extern const f32 lbl_805DD240;
extern const f32 lbl_805DD258;
u8 *TWindowMessageLog__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void render__17TWindowMessageLogFv(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = TWindowSubStatusDisp__sub_80244364();
    draw_window_frame((void *) (arg0), (int) (temp_r3));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
    TWindowSubStatusDisp__sub_8026D790((int) (M2C_FIELD(arg0, s32 *, 0x90)), (int) (temp_r3), (void *) (arg0 + 0x68));
}
void run_task__17TWindowMessageLogFv(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 2)) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x01000000;
    }
    if ((f32) M2C_FIELD(arg0, s32 *, 0x5C) >= lbl_805DD254) {
        increment_counter__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, u8 **, 0x90));
    }
    update_scroll_animation__17TWindowMessageLogFPv(arg0);
    update_scroll__14TWindowMessageFPv(arg0);
    initialize_subwindow__9TWindowDDFPv(arg0);
    update_fade_offset__17TWindowMessageLogFPv(arg0);
    update_window_entry_list(arg0, arg0 + 0x24);
}
u8 *__dt__17TWindowMessageLogFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__17TWindowMessageLog.value;
        destroy_allocation__20TWindowSubStatusDispFis(M2C_FIELD(arg0, s32 *, 0x90), 1);
        TWindowCtrl__sub_8026AD60();
        __dt__14TWindowMessageFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8026ABA8___vt__17TWindowMessageLog_size[sizeof(RecoveredGlobal_8026ABA8___vt__17TWindowMessageLog) == 0x18 ? 1 : -1];
u8 *TWindowMessageLog__ct(u8 *arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_8026ABA8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8026ABA8, spC) == 0x4) ? 1 : -1];
    Stack_8026ABA8 stack;
    f32 temp_f1;
    f32 temp_f2;
    s32 temp_r3;
    s32 var_r0;
    TWindowMessage__ct((void *) (arg0), (void *) (arg1), (int) (0x1E), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8026ABA8___vt__17TWindowMessageLog *)&__vt__17TWindowMessageLog).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3990;
    TWindowCtrl__sub_8026AD78((void *) (arg0));
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x38);
    temp_f1 = temp_f2 - lbl_805DD258;
    stack.spC = lbl_805DD240;
    stack.sp8 = temp_f1;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0xC), (f32) (temp_f1), (f32) (temp_f2));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = reset_selection__20TWindowSubStatusDispFPv((int) (temp_r3), (void *) (&stack.sp8));
    }
    M2C_FIELD(arg0, s32 *, 0x90) = var_r0;
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 0x80);
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) lbl_805DD240;
    load_chat_history__17TWindowMessageLogFPv((void *) (arg0));
    return arg0;
}

}
