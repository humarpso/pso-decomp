#include "types.h"
#include "pso/misc/TQuestVmDownLoadServer.h"
#include "pso/misc/TKeyBoardControl.h"
#include "pso/misc/TLobby.h"

struct RecoveredGlobal_8008C534_main_task {
    s32 value;
    u8 remaining[0x30];
};

struct RecoveredGlobal_8008C4F4_lbl_8048E7C0 {
    s32 value;
    u8 remaining[0x64];
};

struct RecoveredGlobal_8008C4F4_main_task {
    s32 value;
    u8 remaining[0x30];
};

extern "C" {
s32 TKeyBoardControl__sub_8000F92C();
s32 TKeyBoardControl__sub_8000F9CC(int);
s32 process_async_file_reads();
s8 func_801A5E54__Fv();
s32 controller_stuff__Fv();
s32 render_tick__Fv();
s32 update_sound_request_slots();
s32 render_screen_overlay__9TMainTaskFv(void *);
s32 some_empty_func__9TMainTaskFv(void *);
s32 render__9TMainTaskFv(void *);
s32 run_task__9TMainTaskFv(void *);
s32 noop__23TAdSinglePlyChrSelectGCFv();
s32 func_803DCDFC__Fv();
void run_game_frame(void);
s32 call_funcs_reverse__6TLobbyFPvUi(void *, int);
s32 render_tick__Fv();
s32 delete_all_task_children__9TMainTaskFv(void *);
extern RecoveredGlobal_8008C4F4_lbl_8048E7C0 ending_scene_callbacks;
void fn_8008C4F4(void);
}

extern "C" {

typedef char RecoveredGlobal_8008C534_main_task_size[sizeof(RecoveredGlobal_8008C534_main_task) == 0x34 ? 1 : -1];

typedef char RecoveredGlobal_8008C4F4_lbl_8048E7C0_size[sizeof(RecoveredGlobal_8008C4F4_lbl_8048E7C0) == 0x68 ? 1 : -1];
typedef char RecoveredGlobal_8008C4F4_main_task_size[sizeof(RecoveredGlobal_8008C4F4_main_task) == 0x34 ? 1 : -1];
void fn_8008C4F4(void) {
    s32 *var_r3;
    s32 var_r4;
    TLobby::stop_audio_streams();
    var_r3 = (s32 *)(&(*(RecoveredGlobal_8008C4F4_main_task *)&(*(RecoveredGlobal_8008C534_main_task *)&main_task)).value);
    var_r3 = (s32 *)(&(*(RecoveredGlobal_8008C4F4_main_task *)&(*(RecoveredGlobal_8008C534_main_task *)&main_task)).value);
    delete_all_task_children__9TMainTaskFv((void *) (&(*(RecoveredGlobal_8008C4F4_main_task *)&(*(RecoveredGlobal_8008C534_main_task *)&main_task)).value));
    var_r3 = (s32 *)(&ending_scene_callbacks.value);
    var_r4 = 0x68;
    var_r3 = (s32 *)(&ending_scene_callbacks.value);
    call_funcs_reverse__6TLobbyFPvUi((void *) (&ending_scene_callbacks.value), (int) (0x68));
    render_tick__Fv();
}

void run_game_frame(void) {
    s32 *var_r3;
    func_803DCDFC__Fv();
    controller_stuff__Fv();
    TKeyBoardControl::update_input_frame();
    var_r3 = (s32 *)(&(*(RecoveredGlobal_8008C534_main_task *)&main_task).value);
    var_r3 = (s32 *)(&(*(RecoveredGlobal_8008C534_main_task *)&main_task).value);
    some_empty_func__9TMainTaskFv((void *) (&(*(RecoveredGlobal_8008C534_main_task *)&main_task).value));
    var_r3 = (s32 *)(&(*(RecoveredGlobal_8008C534_main_task *)&main_task).value);
    var_r3 = (s32 *)(&(*(RecoveredGlobal_8008C534_main_task *)&main_task).value);
    run_task__9TMainTaskFv((void *) (&(*(RecoveredGlobal_8008C534_main_task *)&main_task).value));
    var_r3 = (s32 *)(&(*(RecoveredGlobal_8008C534_main_task *)&main_task).value);
    var_r3 = (s32 *)(&(*(RecoveredGlobal_8008C534_main_task *)&main_task).value);
    render__9TMainTaskFv((void *) (&(*(RecoveredGlobal_8008C534_main_task *)&main_task).value));
    var_r3 = (s32 *)(&(*(RecoveredGlobal_8008C534_main_task *)&main_task).value);
    var_r3 = (s32 *)(&(*(RecoveredGlobal_8008C534_main_task *)&main_task).value);
    render_screen_overlay__9TMainTaskFv((void *) (&(*(RecoveredGlobal_8008C534_main_task *)&main_task).value));
    process_async_file_reads();
    update_sound_request_slots();
    noop__23TAdSinglePlyChrSelectGCFv();
    if (func_801A5E54__Fv() != 0) {
        TKeyBoardControl__sub_8000F92C();
    }
    if (TQuestVmDownLoadServer::is_ready() != 0) {
        var_r3 = (s32 *)((u8 *)(NULL));
        TKeyBoardControl__sub_8000F9CC((int) (0));
    }
    render_tick__Fv();
}

}
