#include "types.h"

struct RecoveredGlobal_80290BEC_main_task {
    s32 value;
    u8 remaining[0x30];
};

struct RecoveredGlobal_80290C20_main_task {
    s32 value;
    u8 remaining[0x30];
};

extern "C" {
s32 render_tick__Fv();
s32 stop_audio_streams__6TLobbyFv();
s32 delete_all_task_children__9TMainTaskFv(void *);
s32 free_all_resources__6TLobbyFv();
extern RecoveredGlobal_80290BEC_main_task main_task;
void fn_80290BEC(void);
s32 TKeyBoardControl__sub_8000F92C();
s32 TKeyBoardControl__sub_8000F9CC(int);
s32 is_ready__22TQuestVmDownLoadServerFv();
s32 process_async_file_reads();
s8 func_801A5E54__Fv();
s32 update_input_frame__16TKeyBoardControlFv();
s32 controller_stuff__Fv();
s32 render_tick__Fv();
s32 run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
s32 update_sound_request_slots();
s32 render_screen_overlay__9TMainTaskFv(void *);
s32 some_empty_func__9TMainTaskFv(void *);
s32 render__9TMainTaskFv(void *);
s32 run_task__9TMainTaskFv(void *);
s32 noop__23TAdSinglePlyChrSelectGCFv();
s32 func_803DCDFC__Fv();
extern RecoveredGlobal_80290BEC_main_task main_task;
void run_main_frame(void);
}

extern "C" {

typedef char RecoveredGlobal_80290BEC_main_task_size[sizeof(RecoveredGlobal_80290BEC_main_task) == 0x34 ? 1 : -1];
void fn_80290BEC(void) {
    s32 *var_r3;
    stop_audio_streams__6TLobbyFv();
    var_r3 = (s32 *)(&main_task.value);
    var_r3 = (s32 *)(&main_task.value);
    delete_all_task_children__9TMainTaskFv((void *) (&main_task.value));
    free_all_resources__6TLobbyFv();
    render_tick__Fv();
}
typedef char RecoveredGlobal_80290C20_main_task_size[sizeof(RecoveredGlobal_80290C20_main_task) == 0x34 ? 1 : -1];
void run_main_frame(void) {
    s32 *var_r3;
    func_803DCDFC__Fv();
    controller_stuff__Fv();
    update_input_frame__16TKeyBoardControlFv();
    var_r3 = (s32 *)(&(*(RecoveredGlobal_80290C20_main_task *)&main_task).value);
    var_r3 = (s32 *)(&(*(RecoveredGlobal_80290C20_main_task *)&main_task).value);
    some_empty_func__9TMainTaskFv((void *) (&(*(RecoveredGlobal_80290C20_main_task *)&main_task).value));
    var_r3 = (s32 *)(&(*(RecoveredGlobal_80290C20_main_task *)&main_task).value);
    var_r3 = (s32 *)(&(*(RecoveredGlobal_80290C20_main_task *)&main_task).value);
    run_task__9TMainTaskFv((void *) (&(*(RecoveredGlobal_80290C20_main_task *)&main_task).value));
    var_r3 = (s32 *)(&(*(RecoveredGlobal_80290C20_main_task *)&main_task).value);
    var_r3 = (s32 *)(&(*(RecoveredGlobal_80290C20_main_task *)&main_task).value);
    render__9TMainTaskFv((void *) (&(*(RecoveredGlobal_80290C20_main_task *)&main_task).value));
    var_r3 = (s32 *)(&(*(RecoveredGlobal_80290C20_main_task *)&main_task).value);
    var_r3 = (s32 *)(&(*(RecoveredGlobal_80290C20_main_task *)&main_task).value);
    render_screen_overlay__9TMainTaskFv((void *) (&(*(RecoveredGlobal_80290C20_main_task *)&main_task).value));
    process_async_file_reads();
    update_sound_request_slots();
    run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
    noop__23TAdSinglePlyChrSelectGCFv();
    if (func_801A5E54__Fv() != 0) {
        TKeyBoardControl__sub_8000F92C();
    }
    if (is_ready__22TQuestVmDownLoadServerFv() != 0) {
        var_r3 = (s32 *)((u8 *)(NULL));
        TKeyBoardControl__sub_8000F9CC((int) (0));
    }
    render_tick__Fv();
}

}
