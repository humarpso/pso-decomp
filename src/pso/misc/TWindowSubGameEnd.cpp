#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_204a81 { char pad[0x18]; };

struct VObj_18_204a81 : VBase_18_204a81 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual M2C_UNK m7();
};

extern "C" {
M2C_UNK init__22THunterGuildSeqOfflineFPvPvPv(void *, s32, void *);
M2C_UNK send_logout__6TLobbyFv();
u32 __nw__7TObjectFUl(int);
M2C_UNK fn_8024AB54(int);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(int);
s32 get_card_data__17TWindowSubComCardFPv(int);
s32 is_child_visible__17TWindowSubComCardFPv(int);
void init_char_select__16TKeyBoardControlFv(void);
extern s32 tl_00;
extern int lbl_805D6480;
void run_task__17TWindowSubGameEndFv(u8 *arg0);
s32 get_main_phase();
s32 is_split_screen();
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK __ct__7TObjectFP7TObject();
s32 get_window_layout_position(M2C_UNK);
M2C_UNK notify_warp_flag70__19TWindowSubShortMailFPv(s32);
M2C_UNK free_member__17TWindowSubComCardFPv(s32, M2C_UNK);
M2C_UNK forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(s32, s32, s32, f32);
s32 create__19TWindowMessageYesNoFPvPvPvPv(void *, s32, M2C_UNK, M2C_UNK);
extern M2C_UNK __vt__17TWindowSubGameEnd[];
extern s32 lbl_805D3A48;
extern const f32 lbl_805DD628;
extern const f32 lbl_805DD62C;
void *TWindowSubGameEnd__ct(void *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TLobby__sub_802796FC(void);
void TLobby__sub_80279708(void);
void *__dt__17TWindowSubGameEndFv(void *arg0, s16 arg1);
void init_char_select__16TKeyBoardControlFv(void);
void render__17TWindowSubGameEndFv(void);
s32 setup_player_battle_ctrls__23TAdSinglePlyChrSelectGCFv();
s32 TKeyBoardControl__sub_8000F91C(s32);
s32 TKeyBoardControl__sub_8000F9CC(s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void close__17TWindowSubComCardFPv(void *);
s32 init__23TAdSinglePlyChrSelectGCFv();
s32 is_split_screen();

void init_char_select__16TKeyBoardControlFv(void) {
    if (is_split_screen() != 0) {
        setup_player_battle_ctrls__23TAdSinglePlyChrSelectGCFv();
        TKeyBoardControl__sub_8000F9CC(7);
        return;
    }
    init__23TAdSinglePlyChrSelectGCFv();
    TKeyBoardControl__sub_8000F91C(9);
    TKeyBoardControl__sub_8000F9CC(0x12);
}
void render__17TWindowSubGameEndFv(void) {  }

extern M2C_UNK __vt__17TWindowSubGameEnd[];

void run_task__17TWindowSubGameEndFv(u8 *arg0) {
    s32 slot;
    void *obj;
    switch (M2C_FIELD(arg0, s32 *, 0x1C)) {
    case 0:
    case 1:
        if (get_card_data__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x28)) != 0) {
            M2C_FIELD(arg0, VObj_18_204a81 **, 0x24)->m7();
            return;
        }
        if (is_child_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x28)) != 0) {
            slot = get_slot_or_neg1__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x28));
            if (slot == 0) {
                if (lbl_805D6480 != 1) {
                    obj = (void *)__nw__7TObjectFUl(0x28);
                    if (obj != NULL) {
                        init__22THunterGuildSeqOfflineFPvPvPv(obj, tl_00, (void *)init_char_select__16TKeyBoardControlFv);
                    }
                    fn_8024AB54(M2C_FIELD(arg0, s32 *, 0x20));
                    send_logout__6TLobbyFv();
                    lbl_805D6480 = 1;
                }
                M2C_FIELD(arg0, s32 *, 0x1C) = 2;
            }
            if (slot == 1) {
                M2C_FIELD(arg0, VObj_18_204a81 **, 0x24)->m7();
            }
        }
        break;
    case 2:
        break;
    }
}

void *__dt__17TWindowSubGameEndFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TWindowSubGameEnd;
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

    extern int lbl_805D6480;

void *TWindowSubGameEnd__ct(void *arg0, s32 arg1, s32 arg2) {
    f32 var_f31;
    s32 var_r31;
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TWindowSubGameEnd;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3A48;
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    if (get_main_phase() == 0xF) {
        var_r31 = get_message_10__20TWindowSubStatusDispFPv(0x3B);
        var_f31 = lbl_805DD628;
    } else if (is_split_screen() != 0) {
        var_r31 = get_message_10__20TWindowSubStatusDispFPv(0x3C);
        var_f31 = lbl_805DD62C;
    } else {
        var_r31 = get_message_10__20TWindowSubStatusDispFPv(0x3A);
        var_f31 = lbl_805DD628;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = create__19TWindowMessageYesNoFPvPvPvPv(arg0, M2C_FIELD(arg0, s32 *, 0x20), 0, 0);
    forward_slot_selection__16TAdChrSelASlotGCFPvPvPv(M2C_FIELD(arg0, s32 *, 0x28), var_r31, get_window_layout_position(0x17), var_f31);
    free_member__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x28), 1);
    notify_warp_flag70__19TWindowSubShortMailFPv(M2C_FIELD(arg0, s32 *, 0x28));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    return arg0;
}

void TLobby__sub_802796FC(void) { lbl_805D6480 = 0; }

    extern int lbl_805D6480;
void TLobby__sub_80279708(void) { lbl_805D6480 = 0; }

}
