#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8011A350_main_task {
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
M2C_UNK render_tick__Fv();
M2C_UNK TLobby__sub_802269B4();
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK render__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
M2C_UNK noop__23TAdSinglePlyChrSelectGCFv();
extern RecoveredGlobal_8011A350_main_task main_task;
void TItemReverseTech__sub_8011A350(void);
}

extern "C" {

void TItemReverseTech__sub_8011A54C(void* a0);
int TItemReverseTech__sub_8011A55C(void);
int TItemReverseTech__sub_8011A580(void);
void TItemReverseTech__sub_8011A5A4(void);
void create__16TItemReverseTechFv(void);
void free__16TItemReverseTechFv(void);
M2C_UNK TItemReverseTech__ct(void *, s32);
int __dl__FPv(void*);
void * __nw__7TObjectFUl(M2C_UNK);
int free__11TOBoss4RockFUi(void*);
int free_texture_if_valid(void*);
int set_global_flags__6TLobbyFi(void*);

extern s32 tl_01;

void create__16TItemReverseTechFv(void) {
    void *obj = __nw__7TObjectFUl(0x28);
    if (obj != 0) {
        TItemReverseTech__ct(obj, tl_01);
    }
}

    extern int TItemReverseTech__data_805D54D0;
    extern int lbl_805D54D4;
    extern int lbl_805D54D8;
void free__16TItemReverseTechFv(void) { free_texture_if_valid((void*)(TItemReverseTech__data_805D54D0)); free__11TOBoss4RockFUi((void*)(lbl_805D54D8)); lbl_805D54D8 = 0; free__11TOBoss4RockFUi((void*)(lbl_805D54D4)); lbl_805D54D4 = 0; __dl__FPv((void*)(TItemReverseTech__data_805D54D0)); TItemReverseTech__data_805D54D0 = 0; }

    extern const float lbl_805DAC4C;

typedef char RecoveredGlobal_8011A350_main_task_size[sizeof(RecoveredGlobal_8011A350_main_task) == 0x34 ? 1 : -1];
void TItemReverseTech__sub_8011A350(void) {
    M2C_UNK *var_r3;
    controller_stuff__Fv();
    TKeyBoardControl__sub_801A5EC4();
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
    TLobby__sub_802269B4();
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

void TItemReverseTech__sub_8011A54C(void* a0) { *(float*)((char*)a0 + 0x20) = lbl_805DAC4C; *(float*)((char*)a0 + 0x24) = lbl_805DAC4C; }

int TItemReverseTech__sub_8011A55C(void) { return set_global_flags__6TLobbyFi((void*)(2)); }
int TItemReverseTech__sub_8011A580(void) { return set_global_flags__6TLobbyFi((void*)(1)); }
void TItemReverseTech__sub_8011A5A4(void) {  }

}
