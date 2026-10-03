#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802A1180_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

extern "C" {
M2C_UNK TKeyBoardControl__sub_8000F92C();
M2C_UNK TKeyBoardControl__sub_8000F9B0();
M2C_UNK TKeyBoardControl__sub_8000F9CC(int);
s32 is_ready__22TQuestVmDownLoadServerFv();
M2C_UNK TLobby__sub_800FA464();
s8 func_801A5E54__Fv();
M2C_UNK TKeyBoardControl__sub_801A5EC4();
M2C_UNK controller_stuff__Fv();
M2C_UNK render_tick__Fv();
M2C_UNK update_sound_request_slots();
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK render__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
M2C_UNK noop__23TAdSinglePlyChrSelectGCFv();
extern RecoveredGlobal_802A1180_main_task main_task;
extern s8 lbl_805D6638;
void TKeyBoardControl__sub_802A1180(void);
extern s8 lbl_805D6638;
void TKeyBoardControl__sub_802A12C0(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
extern M2C_UNK lbl_804DCB64[];
void *TKeyBoardControl__sub_802A12CC(void *arg0, s16 arg1);
}

extern "C" {

void TKeyBoardControl__sub_802A12B8(void);
void TKeyBoardControl__sub_802A12BC(void);
void update_menu_scene__16TKeyBoardControlFv(void);
M2C_UNK init_fresh_character_card();
M2C_UNK TKeyBoardControl__sub_8000F90C(M2C_UNK);
M2C_UNK TKeyBoardControl__sub_8000F91C(M2C_UNK);
M2C_UNK TKeyBoardControl__sub_801A66B8();
M2C_UNK TLobby__sub_801E2F44(M2C_UNK, M2C_UNK, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK create_opening_movie_sequence();
M2C_UNK free_keyboard_soft_resources__6TLobbyFv();
M2C_UNK render_tick__Fv();
M2C_UNK update_keyboard_menu__6TLobbyFv();

extern s8 lbl_805D6638;
extern u8 lbl_805D6639;

typedef char RecoveredGlobal_802A1180_main_task_size[sizeof(RecoveredGlobal_802A1180_main_task) == 0x34 ? 1 : -1];
void TKeyBoardControl__sub_802A1180(void) {
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
    update_sound_request_slots();
    noop__23TAdSinglePlyChrSelectGCFv();
    if ((s32) (*(u8 *)&lbl_805D6638) == 1) {
        TKeyBoardControl__sub_8000F9B0();
    }
    if (func_801A5E54__Fv() != 0) {
        TKeyBoardControl__sub_8000F92C();
    }
    if (is_ready__22TQuestVmDownLoadServerFv() != 0) {
        var_r3 = (M2C_UNK *)((u8 *)(NULL));
        TKeyBoardControl__sub_8000F9CC((int) (0));
    }
    render_tick__Fv();
}

void update_menu_scene__16TKeyBoardControlFv(void) {
    TLobby__sub_801E2F44(0, 0, 0);
    TKeyBoardControl__sub_801A66B8();
    TKeyBoardControl__sub_8000F90C(2);
    switch ((s8) lbl_805D6639) {
    case 0:
        TKeyBoardControl__sub_8000F91C(1);
        TKeyBoardControl__sub_8000F90C(9);
        break;
    case 1:
        update_keyboard_menu__6TLobbyFv();
        init_fresh_character_card();
        free_keyboard_soft_resources__6TLobbyFv();
        TKeyBoardControl__sub_8000F91C(5);
        break;
    }
    lbl_805D6638 = 0;
    if (__nw__7TObjectFUl(0x24) != 0U) {
        create_opening_movie_sequence();
    }
    render_tick__Fv();
}

void TKeyBoardControl__sub_802A12B8(void) {  }
void TKeyBoardControl__sub_802A12BC(void) {  }
void TKeyBoardControl__sub_802A12C0(void) { (*(unsigned char *)&lbl_805D6638) = 1; }
void *TKeyBoardControl__sub_802A12CC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804DCB64;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
