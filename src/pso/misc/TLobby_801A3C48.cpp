#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801A4820_main_task { M2C_UNK value; u8 remaining[0x30]; };
typedef char RecoveredGlobal_801A4820_main_task_size[sizeof(RecoveredGlobal_801A4820_main_task) == 0x34 ? 1 : -1];

struct RecoveredGlobal_801A46D8_main_task { M2C_UNK value; u8 remaining[0x30]; };
typedef char RecoveredGlobal_801A46D8_main_task_size[sizeof(RecoveredGlobal_801A46D8_main_task) == 0x34 ? 1 : -1];

struct RecoveredGlobal_801A4610_lbl_804C20E8 {
    M2C_UNK value;
    u8 remaining[0x154];
};

struct RecoveredGlobal_801A4610_lbl_804C2240 {
    M2C_UNK value;
    u8 remaining[0x44];
};

struct RecoveredGlobal_801A4610_lbl_80515BA0 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_801A4610_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

extern "C" {
M2C_UNK THunterGuildSeqOffline__sub_80213430();
M2C_UNK TLobby__sub_80103F68();
M2C_UNK TObjCityMainWarp__sub_80186634();
M2C_UNK TRaderMapCore__sub_801F9540();
M2C_UNK TSwitch__sub_8022942C();
M2C_UNK apply_all_players__9TTecLukerFv();
int clear_counter__6TLobbyFv(void);
M2C_UNK clear_quest_state__6TLobbyFv();
void enable_all_battle_ctrl__10TNpcPlayerFv();
M2C_UNK queue_destruction__7TObjectFv(u32);
M2C_UNK reset_door_state__6TLobbyFv();
M2C_UNK reset_instance__8TObjDoorFv();
M2C_UNK reset_quest_counter__6TLobbyFv();
M2C_UNK set_cleanup_flag__6TLobbyFv();
extern u32 lbl_805D5EE8;
void free_objects__6TLobbyFv(void);
s32 TCameraCtrl__sub_8006B368();
void update_camera_state__6TLobbyFv(void);
M2C_UNK fn_801D9E50(void*);
extern s32 lbl_805D53A4;
extern u32 TLobby__data_805D5580;
extern s32 TLobby__data_805D5E24;
void update_periodic_tick__6TLobbyFv(void);
void TLobby__sub_801A4C6C(void* p);
void set_value__6TLobbyFPvi(void* p, s32 v);
    extern int lbl_805D4E2C;
void reset_counter__6TLobbyFv(void);
s32 get_input__16TKeyBoardControlFv();
int TKeyBoardControl__sub_8000F95C(void);
s32 TKeyBoardControl__sub_8000F968();
M2C_UNK TKeyBoardControl__sub_8000F984();
s32 get_key_state__16TKeyBoardControlFv();
M2C_UNK TKeyBoardControl__sub_8000F9A4();
int TKeyBoardControl__sub_8000F9CC(int);
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
M2C_UNK TLobby__sub_8006EF90();
M2C_UNK TObjBoss2Tunnel__sub_8007D1D0();
s32 is_ready__22TQuestVmDownLoadServerFv();
M2C_UNK TLobby__sub_800FA464();
M2C_UNK disconnect_protocol__6TLobbyFv();
int TLobby__sub_8013998C(void);
void init_chr_select__6TLobbyFv(void);
M2C_UNK TLobby__sub_801A3E98();
M2C_UNK TLobby__sub_801A40D8();
M2C_UNK TLobby__sub_801A4268();
M2C_UNK TLobby__sub_801A441C();
void update_periodic_tick__6TLobbyFv(void);
s8 func_801A5E54__Fv();
M2C_UNK TKeyBoardControl__sub_801A5EC4();
M2C_UNK controller_stuff__Fv();
s32 TAdPlayerLoadGC__sub_801E1B50(int);
s32 TAdPlayerLoadGC__sub_801E1E38(int);
M2C_UNK render_tick__Fv();
M2C_UNK TAdSinglePlyChrSelectGC__sub_80201650();
M2C_UNK TLobby__sub_802269B4();
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK render__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
M2C_UNK render_shadows__9TMainTaskFv(void *);
M2C_UNK noop__23TAdSinglePlyChrSelectGCFv();
M2C_UNK func_803DCDFC__Fv();
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 TLobby__data_805D55A8;
extern s32 lbl_805D55C0;
extern s16 TLobby__data_805D5CE8;
extern s32 TLobby__data_805D5CF4;
void TLobby__sub_801A4820(void);
s32 get_input__16TKeyBoardControlFv();
int TKeyBoardControl__sub_8000F95C(void);
s32 TKeyBoardControl__sub_8000F968();
M2C_UNK TKeyBoardControl__sub_8000F984();
s32 get_key_state__16TKeyBoardControlFv();
M2C_UNK TKeyBoardControl__sub_8000F9A4();
int TKeyBoardControl__sub_8000F9CC(int);
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
M2C_UNK TObjBoss2Tunnel__sub_8007D1D0();
s32 is_ready__22TQuestVmDownLoadServerFv();
M2C_UNK TLobby__sub_800FA464();
M2C_UNK disconnect_protocol__6TLobbyFv();
int TLobby__sub_8013998C(void);
void reset_to_chr_select__6TLobbyFv(void);
M2C_UNK TLobby__sub_801A3E98();
M2C_UNK TLobby__sub_801A40D8();
M2C_UNK TLobby__sub_801A441C();
void update_periodic_tick__6TLobbyFv(void);
s8 func_801A5E54__Fv();
M2C_UNK TKeyBoardControl__sub_801A5EC4();
M2C_UNK controller_stuff__Fv();
s32 TAdPlayerLoadGC__sub_801E1B50(int);
s32 TAdPlayerLoadGC__sub_801E1E38(int);
M2C_UNK render_tick__Fv();
M2C_UNK TAdSinglePlyChrSelectGC__sub_80201650();
M2C_UNK TLobby__sub_802269B4();
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK render__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
M2C_UNK render_shadows__9TMainTaskFv(void *);
M2C_UNK noop__23TAdSinglePlyChrSelectGCFv();
M2C_UNK func_803DCDFC__Fv();
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 TLobby__data_805D55A8;
extern s32 lbl_805D55C0;
extern s32 TLobby__data_805D5CF4;
void TLobby__sub_801A46D8(void);
M2C_UNK update__16TKeyBoardControlFv();
M2C_UNK TLobby__sub_800F9B84();
M2C_UNK TLobby__sub_800FD6A0(void *, int);
int TLobby__sub_8013998C(void);
M2C_UNK cleanup__6TLobbyFv();
void free_objects__6TLobbyFv(void);
M2C_UNK render_tick__Fv();
M2C_UNK update_lobby_subsystems__6TLobbyFv();
M2C_UNK TLobby__sub_8022743C();
M2C_UNK TLobby__sub_80228634(void *);
M2C_UNK clear_flag3_all_tasks__9TMainTaskFv(void *);
M2C_UNK delete_all_task_children__9TMainTaskFv(void *);
M2C_UNK delete_children__7TObjectFv(int);
M2C_UNK free_single_player_chr_select__6TLobbyFv();
M2C_UNK update_photon_chairs__6TLobbyFv();
M2C_UNK PPCSync();
extern RecoveredGlobal_801A4610_lbl_804C20E8 lbl_804C20E8;
extern RecoveredGlobal_801A4610_lbl_804C2240 lbl_804C2240;
extern unsigned char lbl_80515BA0[];
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 lbl_805D53A0;
extern s32 lbl_805D5CF0;
extern s32 TLobby__data_805D5E24;
extern M2C_UNK *tl_su;
void TLobby__sub_801A4610(void);
}

extern "C" {

void TLobby__sub_801A3CF8(void);
int TLobby__sub_801A3DF0(void);
int TLobby__sub_801A3E38(void);
int TLobby__sub_801A3E8C(void);
void TLobby__sub_801A3E94(void);
void init_chr_select__6TLobbyFv(void);
void reset_to_chr_select__6TLobbyFv(void);
int send_and_handle__6TLobbyFPv(void* p);
void set_flag_and_update__6TLobbyFv(void);
int TKeyBoardControl__sub_8000F91C(int);
int TKeyBoardControl__sub_8000F95C(void);
int TKeyBoardControl__sub_8000F9CC(int);
int TKeyBoardControl__sub_801A66B8(void);
int TLobby__sub_8013998C(void);
int TLobby__sub_801A400C(void*);
int clear_counter__6TLobbyFv(void);
int init__23TAdSinglePlyChrSelectGCFv(void);
int reset__16TKeyBoardControlFv(void);

    extern unsigned char lbl_80515BA0[];
    extern int TLobby__data_805D5CEC;
void set_flag_and_update__6TLobbyFv(void) { TLobby__data_805D5CEC = (TLobby__data_805D5CEC | 0x1); TLobby__sub_801A4C6C((void*)(lbl_80515BA0)); }

void init_chr_select__6TLobbyFv(void) { reset__16TKeyBoardControlFv(); TLobby__sub_8013998C(); init__23TAdSinglePlyChrSelectGCFv(); TKeyBoardControl__sub_8000F91C(9); TKeyBoardControl__sub_8000F9CC(18); }
void reset_to_chr_select__6TLobbyFv(void) { TKeyBoardControl__sub_801A66B8(); TLobby__sub_8013998C(); free_objects__6TLobbyFv(); TKeyBoardControl__sub_8000F95C(); clear_counter__6TLobbyFv(); init__23TAdSinglePlyChrSelectGCFv(); TKeyBoardControl__sub_8000F91C(9); TKeyBoardControl__sub_8000F9CC(18); }
void TLobby__sub_801A3CF8(void) {  }

int TLobby__sub_801A3DF0(void) { return 0; }
int TLobby__sub_801A3E38(void) { return 0; }

int TLobby__sub_801A3E8C(void) { return 0; }
void TLobby__sub_801A3E94(void) {  }

int send_and_handle__6TLobbyFPv(void* p) { return TLobby__sub_801A400C(p); }
void free_objects__6TLobbyFv(void) {
    TRaderMapCore__sub_801F9540();
    TSwitch__sub_8022942C();
    apply_all_players__9TTecLukerFv();
    TLobby__sub_80103F68();
    enable_all_battle_ctrl__10TNpcPlayerFv();
    if ((u32) lbl_805D5EE8 != 0U) {
        queue_destruction__7TObjectFv(lbl_805D5EE8);
    }
    TObjCityMainWarp__sub_80186634();
    THunterGuildSeqOffline__sub_80213430();
    clear_counter__6TLobbyFv();
    reset_door_state__6TLobbyFv();
    reset_instance__8TObjDoorFv();
    set_cleanup_flag__6TLobbyFv();
    reset_quest_counter__6TLobbyFv();
    clear_quest_state__6TLobbyFv();
}

typedef char RecoveredGlobal_801A4610_lbl_804C20E8_size[sizeof(RecoveredGlobal_801A4610_lbl_804C20E8) == 0x158 ? 1 : -1];
typedef char RecoveredGlobal_801A4610_lbl_804C2240_size[sizeof(RecoveredGlobal_801A4610_lbl_804C2240) == 0x48 ? 1 : -1];
typedef char RecoveredGlobal_801A4610_lbl_80515BA0_size[sizeof(RecoveredGlobal_801A4610_lbl_80515BA0) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_801A4610_main_task_size[sizeof(RecoveredGlobal_801A4610_main_task) == 0x34 ? 1 : -1];
void TLobby__sub_801A4610(void) {
    M2C_UNK *var_r3;
    s32 var_r31;
    s32 var_r4;
    TLobby__sub_8022743C();
    update_lobby_subsystems__6TLobbyFv();
    TLobby__sub_8013998C();
    free_objects__6TLobbyFv();
    var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_801A4610_main_task *)&main_task).value);
    var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_801A4610_main_task *)&main_task).value);
    delete_all_task_children__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A4610_main_task *)&main_task).value));
    var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_801A4610_main_task *)&main_task).value);
    var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_801A4610_main_task *)&main_task).value);
    clear_flag3_all_tasks__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A4610_main_task *)&main_task).value));
    var_r3 = (M2C_UNK *)((u8 *)(tl_su));
    delete_children__7TObjectFv((int) (var_r3));
    PPCSync();
    var_r31 = 0;
    do {
        render_tick__Fv();
        var_r31 += 1;
    } while (var_r31 < 0x1E);
    cleanup__6TLobbyFv();
    if ((s32) lbl_805D5CF0 == 0) {
        var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_801A4610_lbl_80515BA0 *)&lbl_80515BA0).value);
        var_r3 = (M2C_UNK *)(&(*(RecoveredGlobal_801A4610_lbl_80515BA0 *)&lbl_80515BA0).value);
        TLobby__sub_80228634((void *) (&(*(RecoveredGlobal_801A4610_lbl_80515BA0 *)&lbl_80515BA0).value));
    }
    free_single_player_chr_select__6TLobbyFv();
    update_photon_chairs__6TLobbyFv();
    var_r3 = (M2C_UNK *)(&lbl_804C2240.value);
    var_r4 = 0x48;
    var_r3 = (M2C_UNK *)(&lbl_804C2240.value);
    TLobby__sub_800FD6A0((void *) (&lbl_804C2240.value), (int) (0x48));
    var_r3 = (M2C_UNK *)(&lbl_804C20E8.value);
    var_r4 = 0x158;
    var_r3 = (M2C_UNK *)(&lbl_804C20E8.value);
    TLobby__sub_800FD6A0((void *) (&lbl_804C20E8.value), (int) (0x158));
    lbl_805D53A0 = 0;
    TLobby__data_805D5E24 = 0;
    TLobby__sub_800F9B84();
    update__16TKeyBoardControlFv();
    render_tick__Fv();
}

void TLobby__sub_801A46D8(void) {
    s32 temp_r0;
    func_803DCDFC__Fv();
    controller_stuff__Fv();
    TKeyBoardControl__sub_801A5EC4();
    some_empty_func__9TMainTaskFv((void *) (&main_task.value));
    run_task__9TMainTaskFv((void *) (&main_task.value));
    render_shadows__9TMainTaskFv((void *) (&main_task.value));
    render__9TMainTaskFv((void *) (&main_task.value));
    render_screen_overlay__9TMainTaskFv((void *) (&main_task.value));
    TLobby__sub_800FA464();
    TLobby__sub_802269B4();
    TAdSinglePlyChrSelectGC__sub_80201650();
    noop__23TAdSinglePlyChrSelectGCFv();
    TObjBoss2Tunnel__sub_8007D1D0();
    if (((s32) lbl_805D55C0 == 0) && (TAdPlayerLoadGC__sub_801E1B50((int) (get_chr_select_state__23TAdSinglePlyChrSelectGCFv())) != -1)) {
        if (TAdPlayerLoadGC__sub_801E1E38((int) (get_chr_select_state__23TAdSinglePlyChrSelectGCFv())) != 0) {
            TLobby__data_805D5CF4 = 0;
        } else {
            temp_r0 = TLobby__data_805D5CF4 + 1;
            TLobby__data_805D5CF4 = temp_r0;
            if (temp_r0 > 0xC) {
                disconnect_protocol__6TLobbyFv();
            }
        }
    }
    update_periodic_tick__6TLobbyFv();
    if ((func_801A5E54__Fv() != 0) || ((s32) TLobby__data_805D55A8 == 1)) {
        reset_to_chr_select__6TLobbyFv();
    }
    if (is_ready__22TQuestVmDownLoadServerFv() != 0) {
        TLobby__sub_8013998C();
        TKeyBoardControl__sub_8000F9CC((int) (0));
    }
    if (get_key_state__16TKeyBoardControlFv() != 0) {
        TLobby__sub_801A441C();
        TKeyBoardControl__sub_8000F9A4();
    }
    if (TKeyBoardControl__sub_8000F968() != 0) {
        TLobby__sub_801A40D8();
        TKeyBoardControl__sub_8000F984();
    }
    if (get_input__16TKeyBoardControlFv() != 0) {
        TLobby__sub_801A3E98();
        TKeyBoardControl__sub_8000F95C();
    }
    render_tick__Fv();
}

void TLobby__sub_801A4820(void) {
    s32 temp_r0;
    func_803DCDFC__Fv();
    controller_stuff__Fv();
    TKeyBoardControl__sub_801A5EC4();
    some_empty_func__9TMainTaskFv((void *) (&main_task.value));
    run_task__9TMainTaskFv((void *) (&main_task.value));
    render_shadows__9TMainTaskFv((void *) (&main_task.value));
    render__9TMainTaskFv((void *) (&main_task.value));
    render_screen_overlay__9TMainTaskFv((void *) (&main_task.value));
    TLobby__sub_800FA464();
    TLobby__sub_802269B4();
    TAdSinglePlyChrSelectGC__sub_80201650();
    noop__23TAdSinglePlyChrSelectGCFv();
    TObjBoss2Tunnel__sub_8007D1D0();
    TLobby__sub_8006EF90();
    if (((s32) lbl_805D55C0 == 0) && (TAdPlayerLoadGC__sub_801E1B50((int) (get_chr_select_state__23TAdSinglePlyChrSelectGCFv())) != -1)) {
        if (TAdPlayerLoadGC__sub_801E1E38((int) (get_chr_select_state__23TAdSinglePlyChrSelectGCFv())) != 0) {
            TLobby__data_805D5CF4 = 0;
        } else {
            temp_r0 = TLobby__data_805D5CF4 + 1;
            TLobby__data_805D5CF4 = temp_r0;
            if (temp_r0 > 0xC) {
                disconnect_protocol__6TLobbyFv();
            }
        }
    }
    update_periodic_tick__6TLobbyFv();
    if (get_input__16TKeyBoardControlFv() != 0) {
        TLobby__sub_801A4268();
        TKeyBoardControl__sub_8000F95C();
    }
    if (get_key_state__16TKeyBoardControlFv() != 0) {
        TLobby__sub_801A441C();
        TKeyBoardControl__sub_8000F9A4();
    }
    if (TKeyBoardControl__sub_8000F968() != 0) {
        TLobby__sub_801A40D8();
        TKeyBoardControl__sub_8000F984();
    }
    if ((s16) TLobby__data_805D5CE8 == 1) {
        TLobby__sub_801A3E98();
    }
    if ((func_801A5E54__Fv() != 0) || ((s32) TLobby__data_805D55A8 == 1)) {
        init_chr_select__6TLobbyFv();
    }
    if (is_ready__22TQuestVmDownLoadServerFv() != 0) {
        TLobby__sub_8013998C();
        TKeyBoardControl__sub_8000F9CC((int) (0));
    }
    render_tick__Fv();
}

void update_camera_state__6TLobbyFv(void) {
    if (TCameraCtrl__sub_8006B368() != 0) {
        TLobby__sub_801A46D8();
        return;
    }
    TLobby__sub_801A4820();
}
void update_periodic_tick__6TLobbyFv(void) {
    if ((TLobby__data_805D5E24 & 1) && ((lbl_805D53A4 % 900) == 0) && ((u32) TLobby__data_805D5580 != 0U)) {
        fn_801D9E50((void*)TLobby__data_805D5580);
    }
}
void TLobby__sub_801A4C6C(void* p) { *(u32*)((char*)p + 0x20) |= 0x1; }
void set_value__6TLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0xc) = v; }
void reset_counter__6TLobbyFv(void) { lbl_805D4E2C = 0; }

}
