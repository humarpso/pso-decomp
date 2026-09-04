#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__20TWindowSubQuestBoardFv(void);
void set_board_flags__20TWindowSubQuestBoardFii(s32 arg0, s32 arg1);
void set_card_window_flags__20TWindowSubQuestBoardFii(s32 arg0, s32 arg1);
void clear_card_window_flags__20TWindowSubQuestBoardFii(s32 arg0, s32 arg1);
void TWindowSubQuestBoard__sub_8027CF50(s32 arg0, s32 arg1);
void set_card_flags_scaled__20TWindowSubQuestBoardFii(s32 arg0, s32 arg1);
int set_card_flags_direct__20TWindowSubQuestBoardFPvi(void* p, int a1);
int set_card_window_flags__19TWindowKeyBoardHardFPvii(void*, int, int);

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

}
#else
#if PSO_CLASS_PACKAGE == 0x8027CCC8
#include "types.h"

extern "C" {

void TWindowSubQuestBoard__sub_8027CCC8(void);

void TWindowSubQuestBoard__sub_8027CCC8(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027CDE8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *dt__20TWindowSubQuestBoardFPvs(void *arg0, s16 arg1);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027D148
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowSubQuestBoard__ct(void *arg0, void *arg1, void *arg2);
void *TWindowSubQuestBoardSelect__ct(void *);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void TWindowCtrl__sub_8027D214(void);

extern M2C_UNK __vt__20TWindowSubQuestBoard[];
extern void *lbl_805D3A78;

void *TWindowSubQuestBoard__ct(void *arg0, void *arg1, void *arg2) {
    void *o;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TWindowSubQuestBoard;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3A78;
    M2C_FIELD(arg0, void **, 0x24) = arg1;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    o = __nw__7TObjectFUl(0x68);
    if (o != NULL) {
        o = TWindowSubQuestBoardSelect__ct(o);
    }
    M2C_FIELD(arg0, void **, 0x28) = o;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    TWindowCtrl__sub_8027D214();
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027D1C8
#include "types.h"

extern "C" {

u8 get_page_index__20TWindowSubQuestBoardFPv(void* p);
int is_open__20TWindowSubQuestBoardFPv(void* p);
int TWindowSubQuestBoard__sub_8027D1DC(void* p);

u8 get_page_index__20TWindowSubQuestBoardFPv(void* p) { return *(u8*)((char*)p + 0x61); }
int is_open__20TWindowSubQuestBoardFPv(void* p) { return *(u8*)((char*)p + 0x60) & 0x1; }
int TWindowSubQuestBoard__sub_8027D1DC(void* p) { return *(u8*)((char*)p + 0x60) & 0x2; }

}
#endif
#endif
