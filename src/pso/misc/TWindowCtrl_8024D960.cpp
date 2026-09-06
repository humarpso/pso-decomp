#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
}

extern "C" {

void TWindowCtrl__sub_8024DAAC(void *arg0);
int fn_8024E0F0(void*);
s32 get_active_menu__11TWindowCtrlFPv(void *arg0);
void run_all_updates__11TWindowCtrlFPv(void* p);
void show_active_window__11TWindowCtrlFPv(void *arg0);
int TWindowCtrlMain__sub_8024D7C0(void*);
int TWindowCtrlMain__sub_8024D838(void);
void TWindowCtrlMain__sub_8024D85C(void* p);
void TWindowCtrlMain__sub_8024D8A8(void* p);
int TWindowCtrl__sub_8024DAC4(void*);
int TWindowCtrl__sub_8024DCE8(void*);
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
int try_open_battle_menu__15TWindowMainMenuFPvs(void*);
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

void TWindowCtrl__sub_8024DAAC(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x20);
    if (temp_r4 > 0) {
        M2C_FIELD(arg0, s16 *, 0x20) = (s16) (temp_r4 - 1);
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

void run_all_updates__11TWindowCtrlFPv(void* p) { TWindowCtrl__sub_8024DFF4((u8 *)((void*)(p))); TWindowCtrl__sub_8024DF5C((u8 *)((void*)(p))); TWindowCtrl__sub_8024DE60((u8 *)((void*)(p))); TWindowCtrl__sub_8024DCE8(p); show_active_window__11TWindowCtrlFPv((void *)(p)); TWindowCtrl__sub_8024DAC4(p); TWindowCtrl__sub_8024DAAC((void *)(p)); }

int fn_8024E0F0(void*) { return 0; }

}
