#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__13TWindowMesetaFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);

extern M2C_UNK __vt__13TWindowMeseta[];

void *__dt__13TWindowMesetaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TWindowMeseta;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x802690B4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__sub_80244C0C(s32, s32);
s32 TWindowSubStatusDisp__sub_80257BC0(s32, s32, s32);
void *get_quest_id__12TQuestListVMFPv();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void draw_value__13TWindowMesetaFPvi(void *arg0, s32 arg1);
M2C_UNK TWindowSubStatusDisp__sub_80287580(s32, s32, M2C_UNK, f32);
s32 get_entry_id__17TWindowSubComCardFPv(void* p);
int TWindowSubComCard__sub_8026906C(void* p);

s32 get_meseta_value__13TWindowMesetaFPv(void *arg0) {
    void *temp_r3;

    if (TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x64)) == 0U) {
        return 0;
    }
    temp_r3 = get_quest_id__12TQuestListVMFPv();
    if (temp_r3 == NULL) {
        return 0;
    }
    return M2C_FIELD(temp_r3, s32 *, 0x20);
}
void draw_value__13TWindowMesetaFPvi(void *arg0, s32 arg1) {
    TWindowSubStatusDisp__sub_80287580(arg1, arg1 + 0x10, 3, M2C_FIELD(arg0, f32 *, 0x60));
}
void update_display__13TWindowMesetaFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = TWindowSubComCard__sub_80244C0C(arg0, arg0 + 0x6C);
    draw_value__13TWindowMesetaFPvi((void *)(arg0), temp_r3);
    TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80269184
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__13TWindowMesetaFv(u8 *arg0);
s32 get_meseta_value__13TWindowMesetaFPv();
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);
M2C_UNK TWindowSubStatusDisp__sub_80257C28(void *, void *);
M2C_UNK set_animated_target__20TWindowSubStatusDispFPvif(M2C_UNK, s32, f32);

extern const f32 lbl_805DD200;

void run_task__13TWindowMesetaFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = get_meseta_value__13TWindowMesetaFPv();
    if (temp_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x68)) {
        M2C_FIELD(arg0, s32 *, 0x68) = temp_r3;
        set_animated_target__20TWindowSubStatusDispFPvif(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1), M2C_FIELD(arg0, s32 *, 0x68), lbl_805DD200);
    }
    initialize_subwindow__9TWindowDDFPv(arg0);
    TWindowSubStatusDisp__sub_80257C28(arg0, arg0 + 0x24);
}

}
#endif
#endif
