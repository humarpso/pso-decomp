#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Pad_8024DCE8 { u8 pad[0x20]; u8 btn[0x30]; };

struct WBase_8024DCE8 { u8 pad[0x18]; };

struct W_8024DCE8 : WBase_8024DCE8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

extern "C" {
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
M2C_UNK TWindowSubTradeMain__sub_80244A4C(u32);
M2C_UNK window_request_show(u32);
s32 is_flag_2_set__11TWindowCtrlFPv(void *);
s32 is_enabled__11TWindowCtrlFPv(void *);
s32 is_visible__11TWindowCtrlFPv(void *);
s32 get_active_menu__11TWindowCtrlFPv(void *arg0);
void TWindowCtrl__sub_8024DF5C(u8 *arg0);
s32 is_split_screen();
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
M2C_UNK TWindowSubTradeMain__sub_80244A4C(u32);
M2C_UNK window_request_show(u32);
s32 is_flag_2_set__11TWindowCtrlFPv(void *);
s32 TWindowCtrl__sub_8024C7F8(void *);
s32 is_visible__11TWindowCtrlFPv(void *);
s32 get_active_menu__11TWindowCtrlFPv(void *arg0);
void TWindowCtrl__sub_8024DFF4(u8 *arg0);
s32 get_battle_ctrl_id__10TObjPlayerFUs(int);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
s32 fn_80244994(int);
M2C_UNK TWindow__close(void *);
s32 TWindowCtrl__sub_8024A314();
s32 TWindowCtrl__sub_8024C7C4(void *);
s32 TWindowCtrl__sub_8024C7E0(void *);
s32 is_visible__11TWindowCtrlFPv(void *);
s32 get_active_menu__11TWindowCtrlFPv(void *arg0);
M2C_UNK TWindowLockOn__sub_8026366C(void *, s32);
u32 TWindowLockOn__sub_80263748(int, s32);
void TWindowCtrl__sub_8024DE60(u8 *arg0);
s32 clear_flag4_bit4__22TQuestVmDownLoadServerFPv(int);
s32 reset_key_machine_state__10TObjPlayerFv();
void fn_8024E0F0(u8 *arg0);
s32 is_split_screen();
s32 TKeyBoardControl__sub_801A58B0();
s32 TKeyBoardControl__sub_801A58D8();
s32 TKeyBoardControl__sub_801A5998(int);
s32 TKeyBoardControl__sub_8024D994(void *arg0);
void queue_destruction__7TObjectFv(void *);
s32 fn_8002AE08(int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 is_on_current_screen__11TCameraCtrlFPv(void *, int);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
u16 get_current_target_id__10TObjPlayerFv();
void *__nw__7TObjectFUl(int);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
s32 is_player_input_active(s32);
s32 is_flag_2_set__11TWindowCtrlFPv(void *);
s32 get_display_flag__11TWindowCtrlFv();
s32 TWindowCtrl__sub_8024C7D4(void *);
s32 is_enabled__11TWindowCtrlFPv(void *);
s32 is_visible__11TWindowCtrlFPv(void *);
s32 get_active_menu__11TWindowCtrlFPv(void *arg0);
void *TWindowShortListCtrl__ct(void *, void *, int);
extern Pad_8024DCE8 lbl_8050E208[];
void TWindowCtrl__sub_8024DAC4(void *arg0);
void queue_destruction__7TObjectFv(void *);
s32 is_inactive__10TObjPlayerFPv(void *);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
u32 is_action_active__10TObjPlayerFPv(void *);
s32 is_player_input_active(s32);
M2C_UNK update_focused__11TWindowCtrlFv();
s32 get_active_sub__11TWindowCtrlFv();
s32 TWindowCtrl__sub_8024C7D4(void *);
s32 is_visible__11TWindowCtrlFPv(void *);
s32 get_active_menu__11TWindowCtrlFPv(void *arg0);
s32 TKeyBoardControl__sub_8024D994(void *arg0);
s32 TWindowMainMenu__sub_8024E3F4(void *);
M2C_UNK try_open_battle_menu__15TWindowMainMenuFPvs(void *, s16);
extern Pad_8024DCE8 lbl_8050E208[];
void TWindowCtrl__sub_8024DCE8(void *arg0);
}

extern "C" {

void TWindowCtrl__sub_8024DAAC(void *arg0);
s32 get_active_menu__11TWindowCtrlFPv(void *arg0);
void run_all_updates__11TWindowCtrlFPv(void* p);
void show_active_window__11TWindowCtrlFPv(void *arg0);
int TWindowCtrlMain__sub_8024D7C0(void*);
int TWindowCtrlMain__sub_8024D838(void);
void TWindowCtrlMain__sub_8024D85C(void* p);
void TWindowCtrlMain__sub_8024D8A8(void* p);
s32 TWindowMainMenu__sub_8024E3D4(void *);
s32 TWindowMainMenu__sub_8024E3E0(void *);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK TWindowSubTradeMain__sub_80244A4C(u32);
int fn_802437C4(void*);
void free_member__15TWindowCtrlMainFPv(void* p);
int open_submenu__15TWindowSubEquipFii(void*);
void render__17TWindowCtrlPlayerFv(void);
void run_task__17TWindowCtrlPlayerFv(void* p);
int send_and_handle__6TLobbyFPvii(void*);
M2C_UNK set_position__11TWindowCtrlFPvPv(u32, s32);
void update_child_2c__15TWindowCtrlMainFPv(void* p);
void update_field28__15TWindowCtrlMainFPv(void* p);
M2C_UNK window_request_show(u32);

s32 get_active_menu__11TWindowCtrlFPv(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0x28);
    if (p == 0) {
        return 0;
    }
    return TWindowMainMenu__sub_8024E3E0(p);
}

s32 TKeyBoardControl__sub_8024D994(void *arg0) {
    if (is_split_screen() != 0) {
        return 0x1F;
    }
    if (TKeyBoardControl__sub_801A58B0() != 0) {
        return 0x1F;
    }
    if (TKeyBoardControl__sub_801A58D8() == 0) {
        return 0x1F;
    }
    if (TKeyBoardControl__sub_801A5998((int) (0x44)) != 0) {
        return 0x13;
    }
    if (TKeyBoardControl__sub_801A5998((int) (0x45)) != 0) {
        return 0x15;
    }
    if (TKeyBoardControl__sub_801A5998((int) (0x46)) != 0) {
        return 0xE;
    }
    if (TKeyBoardControl__sub_801A5998((int) (0x47)) != 0) {
        return 0x1A;
    }
    if (TKeyBoardControl__sub_801A5998((int) (0x48)) != 0) {
        return 0x17;
    }
    if (TKeyBoardControl__sub_801A5998((int) (0x49)) != 0) {
        return 0xC;
    }
    if (TKeyBoardControl__sub_801A5998((int) (0x4A)) != 0) {
        return 0xB;
    }
    return (TKeyBoardControl__sub_801A5998((int) (0x4B)) != 0) ? 0 : 0x1F;
}

void TWindowCtrl__sub_8024DAAC(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x20);
    if (temp_r4 > 0) {
        M2C_FIELD(arg0, s16 *, 0x20) = (s16) (temp_r4 - 1);
    }
}

void TWindowCtrl__sub_8024DAC4(void *arg0) {
    s32 idx;
    u16 id;
    u8 *btn;
    void *o;
    if (M2C_FIELD(arg0, void **, 0x3C) != NULL && all_parents_unqueued_for_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3C)) == 0) {
        M2C_FIELD(arg0, void **, 0x3C) = NULL;
    }
    if (M2C_FIELD(arg0, void **, 0x34) != NULL && is_flag_2_set__11TWindowCtrlFPv(M2C_FIELD(arg0, void **, 0x34)) == 0) {
        if (TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x24)) == 0) {
            if (M2C_FIELD(arg0, void **, 0x3C) != NULL) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3C));
                M2C_FIELD(arg0, void **, 0x3C) = NULL;
            }
        } else {
            idx = is_player_input_active(M2C_FIELD(arg0, s32 *, 0x24));
            id = get_current_target_id__10TObjPlayerFv();
            if (get_active_menu__11TWindowCtrlFPv(arg0) != 0 || is_visible__11TWindowCtrlFPv(arg0) != 0 ||
                (id != 0xFFFF && id != M2C_FIELD(arg0, s32 *, 0x24)) || TWindowCtrl__sub_8024C7D4(arg0) != 0 ||
                get_display_flag__11TWindowCtrlFv() != 0) {
                if (M2C_FIELD(arg0, void **, 0x3C) != NULL) {
                    queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3C));
                    M2C_FIELD(arg0, void **, 0x3C) = NULL;
                }
            } else if (M2C_FIELD(arg0, void **, 0x3C) == NULL && is_enabled__11TWindowCtrlFPv(arg0) == 0) {
                if (is_on_current_screen__11TCameraCtrlFPv(btn = lbl_8050E208[idx].btn, fn_8002AE08(M2C_FIELD(arg0, s32 *, 0x24))) != 0 &&
                    TWindowShortListCtrl__check_controller_button(btn, 0x200) != 0) {
                    o = __nw__7TObjectFUl(0x3C);
                    if (o != NULL) {
                        o = TWindowShortListCtrl__ct(o, arg0, M2C_FIELD(arg0, s32 *, 0x24));
                    }
                    M2C_FIELD(arg0, void **, 0x3C) = o;
                }
            }
        }
    }
}

void show_active_window__11TWindowCtrlFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        if (is_visible__11TWindowCtrlFPv((void *)(arg0)) != 0) {
            TWindowSubTradeMain__sub_80244A4C(M2C_FIELD(arg0, u32 *, 0x2C));
            return;
        }
        window_request_show(M2C_FIELD(arg0, u32 *, 0x2C));
        if (get_active_menu__11TWindowCtrlFPv((void *)(arg0)) != 0) {
            set_position__11TWindowCtrlFPvPv(M2C_FIELD(arg0, u32 *, 0x2C), TWindowSubComCard__sub_8026CBB8(0x21));
            return;
        }
        set_position__11TWindowCtrlFPvPv(M2C_FIELD(arg0, u32 *, 0x2C), TWindowSubComCard__sub_8026CBB8(0x20));
    }
}

void TWindowCtrl__sub_8024DCE8(void *arg0) {
    u32 p;
    s16 key;
    if (M2C_FIELD(arg0, void **, 0x28) == NULL) {
        return;
    }
    p = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x24));
    if (p == 0) {
        return;
    }
    if (is_inactive__10TObjPlayerFPv((void *) p) == 0) {
        return;
    }
    if (is_visible__11TWindowCtrlFPv(arg0) != 0 || TWindowCtrl__sub_8024C7D4(arg0) != 0) {
        M2C_FIELD(arg0, W_8024DCE8 **, 0x28)->m6();
        return;
    }
    {
        s32 idx = is_player_input_active(M2C_FIELD(arg0, s32 *, 0x24));
        key = ((s16 (*)(void *))TKeyBoardControl__sub_8024D994)(arg0);
        if (TWindowShortListCtrl__check_controller_button(lbl_8050E208[idx].btn, 0x108) == 0 && key == 0x1F) {
            return;
        }
    }
    if (get_active_menu__11TWindowCtrlFPv(arg0) != 0) {
        if (TWindowMainMenu__sub_8024E3F4(arg0) == 0) {
            M2C_FIELD(arg0, W_8024DCE8 **, 0x28)->m6();
        }
        return;
    }
    if (M2C_FIELD(arg0, void **, 0x3C) != NULL) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3C));
        M2C_FIELD(arg0, void **, 0x3C) = NULL;
        return;
    }
    if (get_active_sub__11TWindowCtrlFv() != 0) {
        update_focused__11TWindowCtrlFv();
        return;
    }
    if (is_action_active__10TObjPlayerFPv((void *) p) != 0) {
        return;
    }
    if (key == 0x1F) {
        M2C_FIELD(arg0, W_8024DCE8 **, 0x28)->m4();
        return;
    }
    try_open_battle_menu__15TWindowMainMenuFPvs(M2C_FIELD(arg0, void **, 0x28), key);
}

#pragma push
#pragma fp_contract on
void TWindowCtrl__sub_8024DE60(u8 *arg0) {
    if ((M2C_FIELD(arg0, void **, 0x38) != NULL) && ((all_parents_unqueued_for_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x38)) == 0) || (fn_80244994((int) (M2C_FIELD(arg0, u32 *, 0x38))) == 0))) {
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
    }
    if ((TWindowCtrl__sub_8024C7E0((void *) (arg0)) != 0) || (get_active_menu__11TWindowCtrlFPv((void *) (arg0)) != 0) || (is_visible__11TWindowCtrlFPv((void *) (arg0)) != 0) || (TWindowCtrl__sub_8024C7C4((void *) (arg0)) != 0) || (TWindowCtrl__sub_8024A314() != 0)) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x38));
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        }
    } else {
        s32 id = get_battle_ctrl_id__10TObjPlayerFUs((int) ((u16) M2C_FIELD(arg0, s32 *, 0x24)));
        if ((u16) id != 0xFFFF) {
            void *w = M2C_FIELD(arg0, void **, 0x38);
            if (w == NULL) {
                M2C_FIELD(arg0, u32 *, 0x38) = TWindowLockOn__sub_80263748((int) (M2C_FIELD(arg0, s32 *, 0x24)), id);
            } else {
                TWindowLockOn__sub_8026366C(w, id);
            }
        }
    }
}
#pragma pop

void TWindowCtrl__sub_8024DF5C(u8 *arg0) {
    u32 temp_r31;
    if (((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) && (is_flag_2_set__11TWindowCtrlFPv((void *) M2C_FIELD(arg0, u32 *, 0x34)) == 0)) {
        temp_r31 = TPlayerBattleCtrl4P__sub_801BA74C((int) (M2C_FIELD(arg0, s32 *, 0x24)));
        if ((get_active_menu__11TWindowCtrlFPv((void *) (arg0)) != 0) || (is_visible__11TWindowCtrlFPv((void *)((void *) (arg0))) != 0) || (is_enabled__11TWindowCtrlFPv((void *) (arg0)) != 0) || (temp_r31 == 0U)) {
            TWindowSubTradeMain__sub_80244A4C((u32)((int) (M2C_FIELD(arg0, u32 *, 0x34))));
            return;
        }
        window_request_show((u32)((int) (M2C_FIELD(arg0, u32 *, 0x34))));
    }
}

void TWindowCtrl__sub_8024DFF4(u8 *arg0) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) && (is_flag_2_set__11TWindowCtrlFPv((void *) M2C_FIELD(arg0, u32 *, 0x30)) == 0)) {
        if ((TPlayerBattleCtrl4P__sub_801BA74C((int) (M2C_FIELD(arg0, s32 *, 0x24))) == 0U) || (is_visible__11TWindowCtrlFPv((void *) (arg0)) != 0) || (TWindowCtrl__sub_8024C7F8((void *) (arg0)) != 0) || ((is_split_screen() != 0) && (get_active_menu__11TWindowCtrlFPv((void *) (arg0)) != 0))) {
            TWindowSubTradeMain__sub_80244A4C((u32)((int) (M2C_FIELD(arg0, u32 *, 0x30))));
            return;
        }
        window_request_show((u32)((int) (M2C_FIELD(arg0, u32 *, 0x30))));
    }
}

void run_all_updates__11TWindowCtrlFPv(void* p) { TWindowCtrl__sub_8024DFF4((u8 *)((void*)(p))); TWindowCtrl__sub_8024DF5C((u8 *)((void*)(p))); TWindowCtrl__sub_8024DE60((u8 *)((void*)(p))); TWindowCtrl__sub_8024DCE8((void *)(p)); show_active_window__11TWindowCtrlFPv((void *)(p)); TWindowCtrl__sub_8024DAC4((void *)(p)); TWindowCtrl__sub_8024DAAC((void *)(p)); }
#pragma push
#pragma scheduling off
void fn_8024E0F0(u8 *arg0) {
    s16 temp_r0;
    s16 temp_r3_3;
    u32 temp_r3;
    u32 temp_r3_2;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x1E);
    switch (temp_r0) {
    case 18:
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x30);
        if (temp_r3 != 0U) {
            clear_flag4_bit4__22TQuestVmDownLoadServerFPv((int) (temp_r3));
        }
        break;
    case 38:
        if (reset_key_machine_state__10TObjPlayerFv() != 0) {
            temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x34);
            if (temp_r3_2 != 0U) {
                clear_flag4_bit4__22TQuestVmDownLoadServerFPv((int) (temp_r3_2));
            }
        }
        break;
    }
    temp_r3_3 = M2C_FIELD(arg0, s16 *, 0x1E);
    if (temp_r3_3 > 0x7530) {
        M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (temp_r3_3 - 0x2710);
    }
    M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (M2C_FIELD(arg0, s16 *, 0x1E) + 1);
}
#pragma pop

}
