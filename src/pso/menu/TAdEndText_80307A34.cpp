#include "types.h"
#include "pso/misc/TKeyBoardControl.h"

struct RecoveredGlobal_80307A74_main_task {
    s32 value;
    u8 remaining[0x30];
};

extern "C" {
s32 TKeyBoardControl__sub_8000F92C();
s32 TKeyBoardControl__sub_8000F9CC(int);
s32 is_ready__22TQuestVmDownLoadServerFv();
s32 process_async_file_reads();
s8 func_801A5E54__Fv();
s32 update_input_frame__16TKeyBoardControlFv();
s32 controller_stuff__Fv();
int render_tick__Fv(void);
s32 render_screen_overlay__9TMainTaskFv(void *);
s32 some_empty_func__9TMainTaskFv(void *);
s32 render__9TMainTaskFv(void *);
s32 run_task__9TMainTaskFv(void *);
s32 func_803DCDFC__Fv();
extern unsigned char main_task[];
s32 TKeyBoardControl__sub_8000F90C(s32);
s32 TKeyBoardControl__sub_8000F91C(s32);
s32 load_ending_font__10TAdEndTextFv();
s32 set_ending_callback__6TLobbyFv();
s32 update_keyboard_menu__6TLobbyFv();
s32 reset_controller_input_state();
s32 set_copy_clear_color_argb(s32, s32, s32);
int render_tick__Fv(void);
u32 __nw__7TObjectFUl(s32);
s32 init_ending_movie();
s32 set_screen_size(f32, f32);
extern int ending_sequence_active;
extern const f32 lbl_805DF0B0;
extern const f32 lbl_805DF0B4;
void start_ending_sequence(void);
}

extern "C" {

void cleanup__10TAdEndTextFv(void);
int TLobby__sub_800FC3CC(void);
int delete_all_task_children__9TMainTaskFv(void*);
int free_keyboard_soft_resources__6TLobbyFv(void);
int free_resources__10TAdEndTextFv(void);
int render_tick__Fv(void);

    extern unsigned char main_task[];
    extern int ending_sequence_active;
void cleanup__10TAdEndTextFv(void) { ending_sequence_active = 0; delete_all_task_children__9TMainTaskFv(main_task); TLobby__sub_800FC3CC(); free_keyboard_soft_resources__6TLobbyFv(); free_resources__10TAdEndTextFv(); render_tick__Fv(); }
typedef char RecoveredGlobal_80307A74_main_task_size[sizeof(RecoveredGlobal_80307A74_main_task) == 0x34 ? 1 : -1];
void TKeyBoardControl::run_main_frame() {
    s32 *var_r3;
    func_803DCDFC__Fv();
    controller_stuff__Fv();
    update_input_frame__16TKeyBoardControlFv();
    var_r3 = (s32 *)(&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value);
    var_r3 = (s32 *)(&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value);
    some_empty_func__9TMainTaskFv((void *) (&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value));
    var_r3 = (s32 *)(&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value);
    var_r3 = (s32 *)(&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value);
    run_task__9TMainTaskFv((void *) (&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value));
    var_r3 = (s32 *)(&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value);
    var_r3 = (s32 *)(&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value);
    render__9TMainTaskFv((void *) (&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value));
    var_r3 = (s32 *)(&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value);
    var_r3 = (s32 *)(&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value);
    render_screen_overlay__9TMainTaskFv((void *) (&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value));
    process_async_file_reads();
    if (func_801A5E54__Fv() != 0) {
        TKeyBoardControl__sub_8000F92C();
    }
    if (is_ready__22TQuestVmDownLoadServerFv() != 0) {
        var_r3 = (s32 *)((u8 *)(NULL));
        TKeyBoardControl__sub_8000F9CC((int) (0));
    }
    render_tick__Fv();
}
void start_ending_sequence(void) {
    (*(s32 *)&ending_sequence_active) = 1;
    set_screen_size(lbl_805DF0B0, lbl_805DF0B4);
    set_copy_clear_color_argb(0, 0, 0);
    reset_controller_input_state();
    TKeyBoardControl__sub_8000F91C(2);
    TKeyBoardControl__sub_8000F90C(2);
    load_ending_font__10TAdEndTextFv();
    update_keyboard_menu__6TLobbyFv();
    set_ending_callback__6TLobbyFv();
    if (__nw__7TObjectFUl(0x1C) != 0U) {
        init_ending_movie();
    }
    render_tick__Fv();
}

}
