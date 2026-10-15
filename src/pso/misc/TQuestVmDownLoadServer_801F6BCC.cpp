#include "types.h"

struct RecoveredGlobal_801F6C74_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_801F6C0C_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

struct QVm_801F6D24 {
    u8 pad0[0x294];
    u32 f294;
    u8 pad1[4];
    s32 f29C_pad;
    s32 f2A0;
};

extern "C" {
s32 TQuestVmDownLoadServer__sub_8006EF6C(int);
s32 get_localized_text_entry(int, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 show_status_message__22TQuestVmDownLoadServerFPvii(void *, int, int);
s32 update_state__13TAdMcSelectGCFv();
s32 select_if_mc_present__13TAdMcSelectGCFv();
extern RecoveredGlobal_801F6C74_lbl_8050E208 controller_input_state;
extern s32 quest_download_in_progress;
void TQuestVmDownLoadServer__sub_801F6C74(u8 *arg0);
s32 return_to_main_menu__6TLobbyFv();
s32 TWindowShortListCtrl__check_controller_button(int, int);
extern RecoveredGlobal_801F6C74_lbl_8050E208 controller_input_state;
void check_cancel_input__22TQuestVmDownLoadServerFPv(u8 *arg0);
s32 get_localized_text_entry(int, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 show_status_message__22TQuestVmDownLoadServerFPvii(void *, int, int);
s32 is_ready__24TMessageWindowControllerFv(void *);
s32 update_state__13TAdMcSelectGCFv();
extern RecoveredGlobal_801F6C74_lbl_8050E208 controller_input_state;
void TQuestVmDownLoadServer__sub_801F6D24(QVm_801F6D24 *self);
}

extern "C" {

void create__22TQuestVmDownLoadServerFv(void);
s32 __ct__22TQuestVmDownLoadServerFP7TObject(void *, s32);
void *__nw__7TObjectFUl(s32);

extern u32 TQuestVmDownLoadServer__instance;
extern s32 tl_00;

void create__22TQuestVmDownLoadServerFv(void) {
    void *temp_r3;

    if ((u32) TQuestVmDownLoadServer__instance == 0U) {
        temp_r3 = __nw__7TObjectFUl(0x2A8);
        if (temp_r3 != 0) {
            __ct__22TQuestVmDownLoadServerFP7TObject(temp_r3, tl_00);
        }
    }
}
typedef char RecoveredGlobal_801F6C74_lbl_8050E208_size[sizeof(RecoveredGlobal_801F6C74_lbl_8050E208) == 0x1B0 ? 1 : -1];

typedef char RecoveredGlobal_801F6C0C_lbl_8050E208_size[sizeof(RecoveredGlobal_801F6C0C_lbl_8050E208) == 0x1B0 ? 1 : -1];
void check_cancel_input__22TQuestVmDownLoadServerFPv(u8 *arg0) {
    u8 *temp_r31;
    temp_r31 = (u8 *)&(*(RecoveredGlobal_801F6C0C_lbl_8050E208 *)&controller_input_state).value + 0x20;
    if ((TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (4)) != 0) || (TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (2)) != 0)) {
        return_to_main_menu__6TLobbyFv();
        *(s32 *)((s8 *)arg0 + 0x2A0) = 0x15;
    }
}

void TQuestVmDownLoadServer__sub_801F6C74(u8 *arg0) {
    u8 *temp_r31;
    temp_r31 = (u8 *)&controller_input_state.value + 0x20;
    quest_download_in_progress = 0;
    if (TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (4)) != 0) {
        update_state__13TAdMcSelectGCFv();
        show_status_message__22TQuestVmDownLoadServerFPvii((void *) (arg0), (int) (get_localized_text_entry((int) (0x29), (int) (1))), (int) (1));
        *(s32 *)((s8 *)arg0 + 0x2A0) = 4;
    }
    if (TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (2)) != 0) {
        select_if_mc_present__13TAdMcSelectGCFv();
        show_status_message__22TQuestVmDownLoadServerFPvii((void *) (arg0), (int) (TQuestVmDownLoadServer__sub_8006EF6C((int) (0x42))), (int) (1));
        *(s32 *)((s8 *)arg0 + 0x2A0) = 0x14;
    }
}
void TQuestVmDownLoadServer__sub_801F6D24(QVm_801F6D24 *self) {
    u8 *p;
    if (self->f294 == 0 || is_ready__24TMessageWindowControllerFv((u8 *)self + 0x1C) != 0) {
        p = ((u8 *)&controller_input_state) + 0x20;
        if (TWindowShortListCtrl__check_controller_button((int)(p), (int)(4)) != 0 || TWindowShortListCtrl__check_controller_button((int)(p), (int)(2)) != 0) {
            update_state__13TAdMcSelectGCFv();
            show_status_message__22TQuestVmDownLoadServerFPvii((void *)(self), (int)(get_localized_text_entry((int)(0x29), (int)(1))), (int)(1));
            self->f2A0 = 4;
        }
    }
}

}
