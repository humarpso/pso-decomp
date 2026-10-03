#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8027CE74_lbl_804D1818 {
    M2C_UNK value;
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
extern M2C_UNK __vt__20TWindowSubQuestBoard[];
extern void *lbl_805D4278;
void *__dt__20TWindowSubQuestBoardFv(void *arg0, s16 arg1);
void __ct__7TObjectFP7TObject(void *, void *);
s32 create_option_menu_window(void *);
extern M2C_UNK lbl_804D1818[];
u8 *TWindowSubQuestBoard__sub_8027CE74(u8 *arg0, u8 *arg1, s32 arg2);
s32 is_visible__17TWindowSubComCardFPv(s32);
s32 get_status_flag__17TWindowSubComCardFPv(s32);
s32 get_flag_bit2__6TLobbyFPv(u32);
M2C_UNK clear_flag_and_release__17TWindowSubComCardFPv(s32);
void TWindow__close(void *);
s32 get_selected_menu_value(s32);
M2C_UNK update_photon_selection__19TWindowSubMagPhotonFPv(void *);
M2C_UNK update_quest_board_card_flags(void *);
u32 TWindowSubStatusDisp__sub_8027C884(void *, s32);
void TWindowSubQuestBoard__sub_8027CCCC(void *arg0);
s32 create_instance__17TQuestThreadBoardFi(s32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(s32);
s8 get_page_index__20TWindowSubQuestBoardFPv(s32);
s32 is_open__20TWindowSubQuestBoardFPv(s32);
s32 TWindowSubQuestBoard__sub_8027D1DC(s32);
M2C_UNK fn_8027D1E8(s32);
extern Ent_8027CFC8 lbl_805129F8[];
void run_task__20TWindowSubQuestBoardFv(void *arg0);
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

void TWindowSubQuestBoard__sub_8027CCCC(void *arg0) {
    s32 t;
    switch ((s8) M2C_FIELD(arg0, u8 *, 0x1C)) {
    case 0:
    case 1:
        if (M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2C));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        clear_flag_and_release__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x28));
        M2C_FIELD(arg0, u8 *, 0x1C) = 2;
    case 2:
        if (get_status_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x28)) != 0) {
            M2C_FIELD(arg0, VO_8027CCCC **, 0x24)->m7();
            M2C_FIELD(arg0, u8 *, 0x1C) = 5;
            break;
        }
        if (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x28)) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 3;
        }
        break;
    case 3:
        t = get_selected_menu_value(M2C_FIELD(arg0, s32 *, 0x28));
        M2C_FIELD(arg0, u32 *, 0x2C) = TWindowSubStatusDisp__sub_8027C884(arg0, t);
        M2C_FIELD(arg0, u8 *, 0x1C) = 4;
    case 4:
        update_photon_selection__19TWindowSubMagPhotonFPv(arg0);
        update_quest_board_card_flags(arg0);
        if (get_flag_bit2__6TLobbyFPv(M2C_FIELD(arg0, u32 *, 0x2C)) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 1;
        }
        break;
    }
}

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

void run_task__20TWindowSubQuestBoardFv(void *arg0) {
    switch (M2C_FIELD(arg0, u8 *, 0x1C)) {
    case 0:
    case 1:
        fn_8027D1E8(M2C_FIELD(arg0, s32 *, 0x28));
        M2C_FIELD(arg0, u8 *, 0x1C) = 2;
    case 2:
        if (TWindowSubQuestBoard__sub_8027D1DC(M2C_FIELD(arg0, s32 *, 0x28)) != 0) {
            M2C_FIELD(arg0, VO_8027CFC8 **, 0x24)->m7();
            M2C_FIELD(arg0, u8 *, 0x1C) = 5;
            break;
        }
        if (is_open__20TWindowSubQuestBoardFPv(M2C_FIELD(arg0, s32 *, 0x28)) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 3;
        }
        break;
    case 3:
        M2C_FIELD(arg0, s32 *, 0x2C) = create_instance__17TQuestThreadBoardFi(
            lbl_805129F8[get_page_index__20TWindowSubQuestBoardFPv(M2C_FIELD(arg0, s32 *, 0x28))].f20);
        M2C_FIELD(arg0, u8 *, 0x1C) = 4;
    case 4:
        if (all_parents_unqueued_for_destruction__7TObjectFv(M2C_FIELD(arg0, s32 *, 0x2C)) == 0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            M2C_FIELD(arg0, u8 *, 0x1C) = 1;
        }
        break;
    case 5:
        break;
    }
}

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
