#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801A3540_lbl_804C1F68 {
    M2C_UNK value;
    u8 remaining[0x17C];
};

struct RecoveredGlobal_801A3540_lbl_80515BA0 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_801A3540_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct RecoveredGlobal_801A3770_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

extern "C" {
s32 is_split_screen(void);
M2C_UNK update__16TKeyBoardControlFv();
M2C_UNK TCameraCtrl__sub_80068A68();
M2C_UNK TLobby__sub_800F9B84();
M2C_UNK TLobby__sub_800FD6A0(void *, int);
M2C_UNK reset_quest_state__6TLobbyFv();
M2C_UNK enable_camera__19TAdSelectGameModeGCFv();
M2C_UNK TLobby__sub_801A3B98();
M2C_UNK render_tick__Fv();
M2C_UNK update_lobby_subsystems__6TLobbyFv();
M2C_UNK TLobby__sub_8022743C();
M2C_UNK TLobby__sub_80228634(void *);
M2C_UNK clear_flag3_all_tasks__9TMainTaskFv(void *);
M2C_UNK delete_all_task_children__9TMainTaskFv(void *);
M2C_UNK delete_children__7TObjectFv(int);
extern RecoveredGlobal_801A3540_lbl_804C1F68 lbl_804C1F68;
extern RecoveredGlobal_801A3540_lbl_80515BA0 lbl_80515BA0;
extern RecoveredGlobal_801A3540_main_task main_task;
extern s32 tl_su;
void TLobby__sub_801A3540(void);
M2C_UNK set_mode__11TCameraCtrlFi(int);
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK render__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
M2C_UNK render_shadows__9TMainTaskFv(void *);
extern RecoveredGlobal_801A3540_main_task main_task;
void TLobby__sub_801A3770(void);
}

extern "C" {

void TLobby__sub_801A3988(void);
s32 TCameraCtrl__sub_8006B368();
M2C_UNK TLobby__sub_801A35C8();
M2C_UNK TLobby__sub_801A3698();

typedef char RecoveredGlobal_801A3540_lbl_804C1F68_size[sizeof(RecoveredGlobal_801A3540_lbl_804C1F68) == 0x180 ? 1 : -1];
typedef char RecoveredGlobal_801A3540_lbl_80515BA0_size[sizeof(RecoveredGlobal_801A3540_lbl_80515BA0) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_801A3540_main_task_size[sizeof(RecoveredGlobal_801A3540_main_task) == 0x34 ? 1 : -1];
void TLobby__sub_801A3540(void) {
    if (is_split_screen() != 0) {
        TCameraCtrl__sub_80068A68();
    }
    TLobby__sub_801A3B98();
    enable_camera__19TAdSelectGameModeGCFv();
    TLobby__sub_8022743C();
    update_lobby_subsystems__6TLobbyFv();
    reset_quest_state__6TLobbyFv();
    delete_all_task_children__9TMainTaskFv((void *) (&main_task.value));
    clear_flag3_all_tasks__9TMainTaskFv((void *) (&main_task.value));
    delete_children__7TObjectFv((int) (tl_su));
    TLobby__sub_80228634((void *) (&lbl_80515BA0.value));
    TLobby__sub_800FD6A0((void *) (&lbl_804C1F68.value), (int) (0x180));
    TLobby__sub_800F9B84();
    update__16TKeyBoardControlFv();
    render_tick__Fv();
}

typedef char RecoveredGlobal_801A3770_main_task_size[sizeof(RecoveredGlobal_801A3770_main_task) == 0x34 ? 1 : -1];
void TLobby__sub_801A3770(void) {
    some_empty_func__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A3770_main_task *)&main_task).value));
    set_mode__11TCameraCtrlFi((int) (0));
    run_task__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A3770_main_task *)&main_task).value));
    render_shadows__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A3770_main_task *)&main_task).value));
    render__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A3770_main_task *)&main_task).value));
    render_screen_overlay__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A3770_main_task *)&main_task).value));
}

void TLobby__sub_801A3988(void) {
    if (TCameraCtrl__sub_8006B368() != 0) {
        TLobby__sub_801A35C8();
        return;
    }
    TLobby__sub_801A3698();
}

}
