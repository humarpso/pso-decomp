#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80307A74_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

extern "C" {
M2C_UNK TKeyBoardControl__sub_8000F92C();
M2C_UNK TKeyBoardControl__sub_8000F9CC(int);
s32 is_ready__22TQuestVmDownLoadServerFv();
M2C_UNK TLobby__sub_800FA464();
s8 func_801A5E54__Fv();
M2C_UNK TKeyBoardControl__sub_801A5EC4();
M2C_UNK controller_stuff__Fv();
int render_tick__Fv(void);
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK render__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
M2C_UNK func_803DCDFC__Fv();
extern unsigned char main_task[];
void TKeyBoardControl__sub_80307A74(void);
M2C_UNK TKeyBoardControl__sub_8000F90C(M2C_UNK);
M2C_UNK TKeyBoardControl__sub_8000F91C(M2C_UNK);
M2C_UNK TAdEndText__sub_8001B370();
M2C_UNK set_ending_callback__6TLobbyFv();
M2C_UNK update_keyboard_menu__6TLobbyFv();
M2C_UNK reset_controller_input_state();
M2C_UNK set_copy_clear_color_argb(M2C_UNK, M2C_UNK, M2C_UNK);
int render_tick__Fv(void);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_80307964();
M2C_UNK set_screen_size(f32, f32);
extern int lbl_805D6A58;
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
    extern int lbl_805D6A58;
void cleanup__10TAdEndTextFv(void) { lbl_805D6A58 = 0; delete_all_task_children__9TMainTaskFv(main_task); TLobby__sub_800FC3CC(); free_keyboard_soft_resources__6TLobbyFv(); free_resources__10TAdEndTextFv(); render_tick__Fv(); }
typedef char RecoveredGlobal_80307A74_main_task_size[sizeof(RecoveredGlobal_80307A74_main_task) == 0x34 ? 1 : -1];
void TKeyBoardControl__sub_80307A74(void) {
    M2C_UNK *var_r3;
    func_803DCDFC__Fv();
    controller_stuff__Fv();
    TKeyBoardControl__sub_801A5EC4();
    var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value);
    var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value);
    some_empty_func__9TMainTaskFv((void *) (&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value));
    var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value);
    var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value);
    run_task__9TMainTaskFv((void *) (&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value));
    var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value);
    var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value);
    render__9TMainTaskFv((void *) (&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value));
    var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value);
    var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value);
    render_screen_overlay__9TMainTaskFv((void *) (&(*(RecoveredGlobal_80307A74_main_task *)&main_task).value));
    TLobby__sub_800FA464();
    if (func_801A5E54__Fv() != 0) {
        TKeyBoardControl__sub_8000F92C();
    }
    if (is_ready__22TQuestVmDownLoadServerFv() != 0) {
        var_r3 = (M2C_UNK *)((u8 *)(NULL));
        TKeyBoardControl__sub_8000F9CC((int) (0));
    }
    render_tick__Fv();
}
void start_ending_sequence(void) {
    (*(s32 *)&lbl_805D6A58) = 1;
    set_screen_size(lbl_805DF0B0, lbl_805DF0B4);
    set_copy_clear_color_argb(0, 0, 0);
    reset_controller_input_state();
    TKeyBoardControl__sub_8000F91C(2);
    TKeyBoardControl__sub_8000F90C(2);
    TAdEndText__sub_8001B370();
    update_keyboard_menu__6TLobbyFv();
    set_ending_callback__6TLobbyFv();
    if (__nw__7TObjectFUl(0x1C) != 0U) {
        fn_80307964();
    }
    render_tick__Fv();
}

}
