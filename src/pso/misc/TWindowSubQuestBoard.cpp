#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8027CE74_lbl_804D1818 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void TWindowCtrl__sub_8027D1F8(void);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
extern M2C_UNK __vt__20TWindowSubQuestBoard[];
extern void *lbl_805D4278;
void *__dt__20TWindowSubQuestBoardFv(void *arg0, s16 arg1);
void __ct__7TObjectFP7TObject(void *, void *);
s32 create_option_menu_window(void *);
extern M2C_UNK lbl_804D1818[];
u8 *TWindowSubQuestBoard__sub_8027CE74(u8 *arg0, u8 *arg1, s32 arg2);
}

extern "C" {

void TWindowSubQuestBoard__sub_8027CCC8(void);
void TWindowSubQuestBoard__sub_8027CF50(s32 arg0, s32 arg1);
void clear_card_window_flags__20TWindowSubQuestBoardFii(s32 arg0, s32 arg1);
void *dt__20TWindowSubQuestBoardFPvs(void *arg0, s16 arg1);
void render__20TWindowSubQuestBoardFv(void);
void set_board_flags__20TWindowSubQuestBoardFii(s32 arg0, s32 arg1);
int set_card_flags_direct__20TWindowSubQuestBoardFPvi(void* p, int a1);
void set_card_flags_scaled__20TWindowSubQuestBoardFii(s32 arg0, s32 arg1);
void set_card_window_flags__20TWindowSubQuestBoardFii(s32 arg0, s32 arg1);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int set_card_window_flags__19TWindowKeyBoardHardFPvii(void*, int, int);

void TWindowSubQuestBoard__sub_8027CCC8(void) {  }

extern M2C_UNK lbl_804D1818[];

void *dt__20TWindowSubQuestBoardFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804D1818;
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8027CE74_lbl_804D1818_size[sizeof(RecoveredGlobal_8027CE74_lbl_804D1818) == 0x18 ? 1 : -1];
u8 *TWindowSubQuestBoard__sub_8027CE74(u8 *arg0, u8 *arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8027CE74_lbl_804D1818 *)&lbl_804D1818).value;
    M2C_FIELD(arg0, u8 **, 0x24) = arg1;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    M2C_FIELD(arg0, s32 *, 0x28) = create_option_menu_window(arg0);
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0;
    return arg0;
}

void set_board_flags__20TWindowSubQuestBoardFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii((void*)(arg0), arg1 << 0xA, -0x1C01);
}
void set_card_window_flags__20TWindowSubQuestBoardFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii((void*)(arg0), arg1 << 8, -0x301);
}
void clear_card_window_flags__20TWindowSubQuestBoardFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii((void*)(arg0), arg1 * 8, -9);
}
void TWindowSubQuestBoard__sub_8027CF50(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii((void*)(arg0), arg1 * 4, -5);
}
void set_card_flags_scaled__20TWindowSubQuestBoardFii(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvii((void*)(arg0), arg1 * 2, -3);
}
int set_card_flags_direct__20TWindowSubQuestBoardFPvi(void* p, int a1) { return set_card_window_flags__19TWindowKeyBoardHardFPvii(p, a1, -2); }
void render__20TWindowSubQuestBoardFv(void) {  }
void *__dt__20TWindowSubQuestBoardFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TWindowSubQuestBoard;
        TWindowCtrl__sub_8027D1F8();
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
