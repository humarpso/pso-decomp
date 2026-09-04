#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_cancel__26TWindowSubQuestBoardSelectFPv(void *arg0);
void handle_decide__26TWindowSubQuestBoardSelectFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 is_open__20TWindowSubQuestBoardFPv();
s32 is_shortcut_active__18TWindowSubShortCutFPv();

void handle_cancel__26TWindowSubQuestBoardSelectFPv(void *arg0) {
    if (is_open__20TWindowSubQuestBoardFPv() == 0) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 2);
    }
}

void handle_decide__26TWindowSubQuestBoardSelectFPv(void *arg0) {
    if (is_shortcut_active__18TWindowSubShortCutFPv() == 0) {
        TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
        M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 1);
    }
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8027D3BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void select_next__26TWindowSubQuestBoardSelectFPv(void *arg0);
M2C_UNK fn_8027D230(void *);
s32 get_slot_flag__26TWindowSubQuestBoardSelectFic(void *, u8);
s32 is_shortcut_active__18TWindowSubShortCutFPv();

void select_next__26TWindowSubQuestBoardSelectFPv(void *arg0) {
    u8 temp_r3;

    if ((is_shortcut_active__18TWindowSubShortCutFPv() == 0) && (get_slot_flag__26TWindowSubQuestBoardSelectFic(arg0, M2C_FIELD(arg0, u8 *, 0x61)) == 0)) {
        do {
            M2C_FIELD(arg0, u8 *, 0x61) = (u8) (M2C_FIELD(arg0, u8 *, 0x61) + 1);
            temp_r3 = M2C_FIELD(arg0, u8 *, 0x61);
            if ((s8) temp_r3 > 6) {
                M2C_FIELD(arg0, u8 *, 0x61) = (u8) (temp_r3 - 6);
            }
        } while (get_slot_flag__26TWindowSubQuestBoardSelectFic(arg0, M2C_FIELD(arg0, u8 *, 0x61)) == 0);
        fn_8027D230(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027D9AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__26TWindowSubQuestBoardSelectFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);

extern M2C_UNK __vt__26TWindowSubQuestBoardSelect[];

void *__dt__26TWindowSubQuestBoardSelectFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__26TWindowSubQuestBoardSelect;
        destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x64), 1);
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
