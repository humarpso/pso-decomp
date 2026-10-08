#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8008C534_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct RecoveredGlobal_8008C4F4_lbl_8048E7C0 {
    M2C_UNK value;
    u8 remaining[0x64];
};

struct RecoveredGlobal_8008C4F4_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

extern "C" {
M2C_UNK TKeyBoardControl__sub_8000F92C();
M2C_UNK TKeyBoardControl__sub_8000F9CC(int);
s32 is_ready__22TQuestVmDownLoadServerFv();
M2C_UNK TLobby__sub_800FA464();
s8 func_801A5E54__Fv();
M2C_UNK update_input_frame__16TKeyBoardControlFv();
M2C_UNK controller_stuff__Fv();
M2C_UNK render_tick__Fv();
M2C_UNK update_sound_request_slots();
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK render__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
M2C_UNK noop__23TAdSinglePlyChrSelectGCFv();
M2C_UNK func_803DCDFC__Fv();
extern RecoveredGlobal_8008C534_main_task main_task;
void run_game_frame(void);
M2C_UNK call_funcs_reverse__6TLobbyFPvUi(void *, int);
M2C_UNK render_tick__Fv();
M2C_UNK stop_audio_streams__6TLobbyFv();
M2C_UNK delete_all_task_children__9TMainTaskFv(void *);
extern RecoveredGlobal_8008C4F4_lbl_8048E7C0 ending_scene_callbacks;
extern RecoveredGlobal_8008C534_main_task main_task;
void fn_8008C4F4(void);
}

extern "C" {

typedef char RecoveredGlobal_8008C534_main_task_size[sizeof(RecoveredGlobal_8008C534_main_task) == 0x34 ? 1 : -1];

typedef char RecoveredGlobal_8008C4F4_lbl_8048E7C0_size[sizeof(RecoveredGlobal_8008C4F4_lbl_8048E7C0) == 0x68 ? 1 : -1];
typedef char RecoveredGlobal_8008C4F4_main_task_size[sizeof(RecoveredGlobal_8008C4F4_main_task) == 0x34 ? 1 : -1];
void fn_8008C4F4(void) {
    M2C_UNK *var_r3;
    s32 var_r4;
    stop_audio_streams__6TLobbyFv();
    var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_8008C4F4_main_task *)&main_task).value);
    var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_8008C4F4_main_task *)&main_task).value);
    delete_all_task_children__9TMainTaskFv((void *) (&(*(RecoveredGlobal_8008C4F4_main_task *)&main_task).value));
    var_r3 = (M2C_UNK *)(&ending_scene_callbacks.value);
    var_r4 = 0x68;
    var_r3 = (M2C_UNK *)(&ending_scene_callbacks.value);
    call_funcs_reverse__6TLobbyFPvUi((void *) (&ending_scene_callbacks.value), (int) (0x68));
    render_tick__Fv();
}

void run_game_frame(void) {
    M2C_UNK *var_r3;
    func_803DCDFC__Fv();
    controller_stuff__Fv();
    update_input_frame__16TKeyBoardControlFv();
    var_r3 = (M2C_UNK *)(&main_task.value);
    var_r3 = (M2C_UNK *)(&main_task.value);
    some_empty_func__9TMainTaskFv((void *) (&main_task.value));
    var_r3 = (M2C_UNK *)(&main_task.value);
    var_r3 = (M2C_UNK *)(&main_task.value);
    run_task__9TMainTaskFv((void *) (&main_task.value));
    var_r3 = (M2C_UNK *)(&main_task.value);
    var_r3 = (M2C_UNK *)(&main_task.value);
    render__9TMainTaskFv((void *) (&main_task.value));
    var_r3 = (M2C_UNK *)(&main_task.value);
    var_r3 = (M2C_UNK *)(&main_task.value);
    render_screen_overlay__9TMainTaskFv((void *) (&main_task.value));
    TLobby__sub_800FA464();
    update_sound_request_slots();
    noop__23TAdSinglePlyChrSelectGCFv();
    if (func_801A5E54__Fv() != 0) {
        TKeyBoardControl__sub_8000F92C();
    }
    if (is_ready__22TQuestVmDownLoadServerFv() != 0) {
        var_r3 = (M2C_UNK *)((u8 *)(NULL));
        TKeyBoardControl__sub_8000F9CC((int) (0));
    }
    render_tick__Fv();
}

}
