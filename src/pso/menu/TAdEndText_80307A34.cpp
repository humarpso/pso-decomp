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

}
