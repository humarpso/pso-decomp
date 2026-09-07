#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8026AB3C___vt__17TWindowMessageLog { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_8026AB3C___vt__17TWindowMessageLog_size[sizeof(RecoveredGlobal_8026AB3C___vt__17TWindowMessageLog) == 0x18 ? 1 : -1];

extern "C" {
s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK TWindowSubComCard__sub_80245F98(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
M2C_UNK TWindowSubStatusDisp__sub_8026D790(int, int, void *);
void render__17TWindowMessageLogFv(u8 *arg0);
int initialize_subwindow__9TWindowDDFPv(void *);
void TWindowSubStatusDisp__sub_80257C28(void *, void *);
void fn_802698C4(void *);
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
}

extern "C" {

void render__17TWindowMessageLogFv(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = TWindowSubStatusDisp__sub_80244364();
    TWindowSubComCard__sub_80245F98((void *) (arg0), (int) (temp_r3));
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
    fn_802698C4(arg0);
    initialize_subwindow__9TWindowDDFPv(arg0);
    update_fade_offset__17TWindowMessageLogFPv(arg0);
    TWindowSubStatusDisp__sub_80257C28(arg0, arg0 + 0x24);
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

}
