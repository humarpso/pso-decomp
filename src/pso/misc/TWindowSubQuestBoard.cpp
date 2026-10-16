#include "types.h"
#include "pso/misc/TUnk_804D1818.h"
#include "pso/misc/TWindowSubQuestBoard.h"
#include "pso/TObject.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubMagPhoton.h"

struct RecoveredGlobal_8027CE74_lbl_804D1818 {
    s32 value;
    u8 remaining[0x14];
};

struct VB_8027CCCC { u8 pad[0x18]; };

struct VO_8027CCCC : VB_8027CCCC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8();
};

struct VB_8027CFC8 { u8 pad[0x18]; };

struct VO_8027CFC8 : VB_8027CFC8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8();
};

struct Ent_8027CFC8 { u8 pad[0x20]; s32 f20; };

extern "C" {
void TWindowCtrl__sub_8027D1F8(void);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
extern s32 __vt__20TWindowSubQuestBoard[];
extern void *TWindowSubTradeMessage__name;
void *__dt__20TWindowSubQuestBoardFv(void *arg0, s16 arg1);
void __ct__7TObjectFP7TObject(void *, void *);
s32 create_option_menu_window(void *);
extern s32 __vt__19TWindowSubQuestBoard[];
u8 *TWindowSubQuestBoard__sub_8027CE74(u8 *arg0, u8 *arg1, s32 arg2);
void TWindow__close(void *);
s32 get_selected_menu_value(s32);
s32 update_quest_board_card_flags(void *);
u32 TWindowSubStatusDisp__sub_8027C884(void *, s32);
void run_task__13TUnk_804D1818Fv(void *arg0);
s32 create_instance__17TQuestThreadBoardFi(s32);
s8 get_page_index__20TWindowSubQuestBoardFv(s32);
s32 TWindowSubQuestBoard__sub_8027D1DC(s32);
s32 fn_8027D1E8(s32);
extern Ent_8027CFC8 quest_board_handlers[];
}

extern "C" {

void render__13TUnk_804D1818Fv(void);
void TWindowSubQuestBoard__sub_8027CF50(s32 arg0, s32 arg1);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int set_card_window_flags__19TWindowKeyBoardHardFPvll(void*, int, int);

void TUnk_804D1818::render() {  }

extern s32 __vt__19TWindowSubQuestBoard[];

void TUnk_804D1818::run_task() {
    s32 t;
    switch ((s8) *(u8 *)((s8 *)this + 0x1C)) {
    case 0:
    case 1:
        if (*(u32 *)((s8 *)this + 0x2C) != 0U) {
            TWindow__close(*(void **)((s8 *)this + 0x2C));
            *(u32 *)((s8 *)this + 0x2C) = 0U;
        }
        ((TWindowSubComCard *)(*(s32 *)((s8 *)this + 0x28)))->clear_flag_and_release();
        *(u8 *)((s8 *)this + 0x1C) = 2;
    case 2:
        if (((TWindowSubComCard *)(*(s32 *)((s8 *)this + 0x28)))->get_status_flag() != 0) {
            (*(VO_8027CCCC **)((s8 *)this + 0x24))->m7();
            *(u8 *)((s8 *)this + 0x1C) = 5;
            break;
        }
        if (((TWindowSubComCard *)(*(s32 *)((s8 *)this + 0x28)))->is_visible() != 0) {
            *(u8 *)((s8 *)this + 0x1C) = 3;
        }
        break;
    case 3:
        t = get_selected_menu_value(*(s32 *)((s8 *)this + 0x28));
        *(u32 *)((s8 *)this + 0x2C) = TWindowSubStatusDisp__sub_8027C884(this, t);
        *(u8 *)((s8 *)this + 0x1C) = 4;
    case 4:
        ((TWindowSubMagPhoton *)this)->update_photon_selection();
        update_quest_board_card_flags(this);
        if (((TLobby *)(*(u32 *)((s8 *)this + 0x2C)))->get_flag_bit2() != 0) {
            *(u8 *)((s8 *)this + 0x1C) = 1;
        }
        break;
    }
}

void *TWindowSubQuestBoard::dt(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = __vt__19TWindowSubQuestBoard;
        if (*(void **)((s8 *)this + 0x2C) != NULL) { TWindow__close(*(void **)((s8 *)this + 0x2C)); *(s32 *)((s8 *)this + 0x2C) = 0; }
        if (*(void **)((s8 *)this + 0x28) != NULL) { TWindow__close(*(void **)((s8 *)this + 0x28)); *(s32 *)((s8 *)this + 0x28) = 0; }
        __dt__7TObjectFv(this, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

typedef char RecoveredGlobal_8027CE74_lbl_804D1818_size[sizeof(RecoveredGlobal_8027CE74_lbl_804D1818) == 0x18 ? 1 : -1];
u8 *TWindowSubQuestBoard__sub_8027CE74(u8 *arg0, u8 *arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8027CE74_lbl_804D1818 *)&__vt__19TWindowSubQuestBoard).value;
    *(u8 **)((s8 *)arg0 + 0x24) = arg1;
    *(s32 *)((s8 *)arg0 + 0x20) = arg2;
    *(s32 *)((s8 *)arg0 + 0x28) = create_option_menu_window(arg0);
    *(s32 *)((s8 *)arg0 + 0x2C) = 0;
    *(s8 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

void TWindowSubQuestBoard::set_board_flags(s32 arg1) {
    s32 arg0 = (s32)this;
    set_card_window_flags__19TWindowKeyBoardHardFPvll((void*)(arg0), arg1 << 0xA, -0x1C01);
}
void TWindowSubQuestBoard::set_card_window_flags(s32 arg1) {
    s32 arg0 = (s32)this;
    set_card_window_flags__19TWindowKeyBoardHardFPvll((void*)(arg0), arg1 << 8, -0x301);
}
void TWindowSubQuestBoard::clear_card_window_flags(s32 arg1) {
    s32 arg0 = (s32)this;
    set_card_window_flags__19TWindowKeyBoardHardFPvll((void*)(arg0), arg1 * 8, -9);
}
void TWindowSubQuestBoard__sub_8027CF50(s32 arg0, s32 arg1) {
    set_card_window_flags__19TWindowKeyBoardHardFPvll((void*)(arg0), arg1 * 4, -5);
}
void TWindowSubQuestBoard::set_card_flags_scaled(s32 arg1) {
    s32 arg0 = (s32)this;
    set_card_window_flags__19TWindowKeyBoardHardFPvll((void*)(arg0), arg1 * 2, -3);
}
int TWindowSubQuestBoard::set_card_flags_direct(int a1) { return set_card_window_flags__19TWindowKeyBoardHardFPvll(this, a1, -2); }
void TWindowSubQuestBoard::render() {  }

void TWindowSubQuestBoard::run_task() {
    switch (*(u8 *)((s8 *)this + 0x1C)) {
    case 0:
    case 1:
        fn_8027D1E8(*(s32 *)((s8 *)this + 0x28));
        *(u8 *)((s8 *)this + 0x1C) = 2;
    case 2:
        if (TWindowSubQuestBoard__sub_8027D1DC(*(s32 *)((s8 *)this + 0x28)) != 0) {
            (*(VO_8027CFC8 **)((s8 *)this + 0x24))->m7();
            *(u8 *)((s8 *)this + 0x1C) = 5;
            break;
        }
        if (((TWindowSubQuestBoard *)(*(s32 *)((s8 *)this + 0x28)))->is_open() != 0) {
            *(u8 *)((s8 *)this + 0x1C) = 3;
        }
        break;
    case 3:
        *(s32 *)((s8 *)this + 0x2C) = create_instance__17TQuestThreadBoardFi(
            quest_board_handlers[get_page_index__20TWindowSubQuestBoardFv(*(s32 *)((s8 *)this + 0x28))].f20);
        *(u8 *)((s8 *)this + 0x1C) = 4;
    case 4:
        if (((TObject *)(*(s32 *)((s8 *)this + 0x2C)))->all_parents_unqueued_for_destruction() == 0) {
            *(s32 *)((s8 *)this + 0x2C) = 0;
            *(u8 *)((s8 *)this + 0x1C) = 1;
        }
        break;
    case 5:
        break;
    }
}

void *__dt__20TWindowSubQuestBoardFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TWindowSubQuestBoard;
        TWindowCtrl__sub_8027D1F8();
        if (*(void **)((s8 *)arg0 + 0x28) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x28)); *(s32 *)((s8 *)arg0 + 0x28) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
