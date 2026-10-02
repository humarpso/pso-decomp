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

typedef s32 M2C_UNK;
struct VBase_801A33DC { char pad[0x18]; };

struct VObj_801A33DC : VBase_801A33DC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

struct Obj_801A33DC { u8 data[0x20]; };

struct RecoveredGlobal_801A3540_lbl_80515BA0;
struct RecoveredGlobal_801A3540_main_task;
struct VBase_801A3014 { char pad[0x18]; };

struct VObj_801A3014 : VBase_801A3014 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

struct Obj_801A3014 { u8 data[0x20]; };

struct VBase_801A31D8 { char pad[0x18]; };

struct VObj_801A31D8 : VBase_801A31D8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

struct Obj_801A31D8 { u8 data[0x20]; };

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
void __dt__7TObjectFv(void *, int);
M2C_UNK update__16TKeyBoardControlFv();
void *get_player_data__10TObjPlayerFi(s32);
s32 get_current_floor();
void cleanup_scene__9TLoadCtrlFv();
void TLoadCtrl__sub_8001C978(int);
s32 get_game_mode__6TLobbyFv();
void TLobby__sub_800FA260();
void TLobby__sub_800FD614(void *, s32);
void create_map_csn_ctrl__6TLobbyFv();
void TObjCityMainWarp__sub_801865B4(s32);
void TKeyBoardControl__sub_801A66B8();
M2C_UNK render_tick__Fv();
void create_quad_sprites__13TParticleCtrlFv();
void TQuestThread__sub_801F5B5C();
void __ct__12TQuestThreadFv(void *, u32, int);
void TLobby__sub_802286C4(void *);
void TLobby__sub_80228754(void *);
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK delete_all_task_children__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
void *__nw__7TObjectFUl(u32);
void set_parent__7TObjectFP7TObject(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern u8 TLobby__data_805011D8[];
extern RecoveredGlobal_801A3540_lbl_80515BA0 lbl_80515BA0;
extern RecoveredGlobal_801A3540_main_task main_task;
extern s32 TLobby__data_805D53AC;
extern u32 lbl_805D5EEC;
extern void *tl_03;
void run_offline_area_transfer(void);
void __dt__7TObjectFv(void *, int);
M2C_UNK update__16TKeyBoardControlFv();
void *get_player_data__10TObjPlayerFi(s32);
void cleanup_scene__9TLoadCtrlFv();
void TLoadCtrl__sub_8001C978(int);
M2C_UNK TLobby__sub_8001DC30();
s32 get_game_mode__6TLobbyFv();
M2C_UNK reset_keyboard_state__6TLobbyFv();
s32 TLobby__sub_800F8AE8();
M2C_UNK clear_callback_and_reset_keyboard__6TLobbyFv();
M2C_UNK TLobby__sub_800F8B20();
void TLobby__sub_800FA260();
void create_map_csn_ctrl__6TLobbyFv();
M2C_UNK TLobby__sub_80141038(void *, int, int);
M2C_UNK TObjCityMainWarp__sub_801868A8(int);
M2C_UNK init_limits__6TLobbyFv();
M2C_UNK TLobby__sub_801A2E00();
M2C_UNK reset_quest_state__6TLobbyFv();
void TKeyBoardControl__sub_801A66B8();
M2C_UNK TObjPlayer__sub_801B1A84(void *);
M2C_UNK fn_801B802C(void *);
M2C_UNK render_tick__Fv();
void create_quad_sprites__13TParticleCtrlFv();
M2C_UNK TLobby__sub_80207644();
M2C_UNK TLobby__sub_80207E48();
M2C_UNK get_team_state__6TLobbyFPv();
M2C_UNK TLobby__sub_8020901C();
M2C_UNK TLobby__sub_8020B118();
M2C_UNK TLobby__sub_8020DC78();
void TLobby__sub_802286C4(void *);
void TLobby__sub_80228754(void *);
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK delete_all_task_children__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
void set_parent__7TObjectFP7TObject(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
M2C_UNK destroy_global__6TLobbyFv();
s32 TLobby__sub_8030A7B0();
s32 is_not_split_screen__13TRaderMapCoreFv();
extern u8 fn_801B309C[];
extern RecoveredGlobal_801A3540_lbl_80515BA0 lbl_80515BA0;
extern RecoveredGlobal_801A3540_main_task main_task;
extern void *tl_03;
void TLobby__sub_801A3014(void);
void __dt__7TObjectFv(void *, int);
M2C_UNK update__16TKeyBoardControlFv();
void *get_player_data__10TObjPlayerFi(s32);
void cleanup_scene__9TLoadCtrlFv();
void TLoadCtrl__sub_8001C978(int);
s32 get_game_mode__6TLobbyFv();
void TLobby__sub_800FA260();
void create_map_csn_ctrl__6TLobbyFv();
M2C_UNK TLobby__sub_80141038(void *, int, int);
M2C_UNK init_limits__6TLobbyFv();
M2C_UNK TObjPlayer__sub_801BDCF8();
M2C_UNK TObjPlayer__sub_801BDC98();
M2C_UNK set_enemy_mode_flag__6TLobbyFv();
M2C_UNK TLobby__sub_801F3DEC();
M2C_UNK setup_quest_list__6TLobbyFv();
void TQuestThread__sub_801F5B5C();
void __ct__12TQuestThreadFv(void *, u32, int);
M2C_UNK TQuestThread__sub_801F5DA8();
M2C_UNK TQuestThread__sub_801F60DC();
M2C_UNK sync_story_select__6TLobbyFv();
M2C_UNK set_state__16TAdStorySelectGCFi(int);
M2C_UNK TQuestListVM__sub_802186A8();
void *__nw__7TObjectFUl(u32);
M2C_UNK setup_split_screen();
extern u32 lbl_805D5EE8;
M2C_UNK reset_quest_state__6TLobbyFv();
void TKeyBoardControl__sub_801A66B8();
M2C_UNK TObjPlayer__sub_801B1A84(void *);
M2C_UNK fn_801B802C(void *);
M2C_UNK render_tick__Fv();
void create_quad_sprites__13TParticleCtrlFv();
M2C_UNK get_team_state__6TLobbyFPv();
M2C_UNK TLobby__sub_8020DC78();
void TLobby__sub_802286C4(void *);
void TLobby__sub_80228754(void *);
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK delete_all_task_children__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
void set_parent__7TObjectFP7TObject(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
s32 TLobby__sub_8030A7B0();
s32 is_not_split_screen__13TRaderMapCoreFv();
extern u8 fn_801B309C[];
extern RecoveredGlobal_801A3540_lbl_80515BA0 lbl_80515BA0;
extern RecoveredGlobal_801A3540_main_task main_task;
extern void *tl_03;
void TLobby__sub_801A31D8(void);
s32 get_input__16TKeyBoardControlFv();
M2C_UNK TKeyBoardControl__sub_8000F95C();
s32 get_key_state__16TKeyBoardControlFv();
M2C_UNK TKeyBoardControl__sub_8000F9A4();
M2C_UNK TKeyBoardControl__sub_8000F9CC(M2C_UNK);
s32 is_split_screen(void);
M2C_UNK TObjBoss2Tunnel__sub_8007D1D0();
void TLobby__sub_8007EB20(const char *, ...);
s32 is_ready__22TQuestVmDownLoadServerFv();
M2C_UNK TLobby__sub_800FA464();
M2C_UNK shutdown_keyboard_control__6TLobbyFv();
void TLobby__sub_801A3014(void);
void run_offline_area_transfer(void);
void TLobby__sub_801A3770(void);
M2C_UNK TLobby__sub_801A37D0();
s8 func_801A5E54__Fv();
M2C_UNK TKeyBoardControl__sub_801A5EC4();
M2C_UNK controller_stuff__Fv();
M2C_UNK render_tick__Fv();
M2C_UNK TAdSinglePlyChrSelectGC__sub_80201650();
M2C_UNK TLobby__sub_802269B4();
M2C_UNK func_803DCDFC__Fv();
extern char lbl_804468F8[];
extern char lbl_80446908[];
extern s32 TLobby__data_805D6148;
extern s32 TLobby__data_805D614C;
void TLobby__sub_801A35C8(void);
}

extern "C" {

void TLobby__sub_801A3988(void);
s32 TCameraCtrl__sub_8006B368();
M2C_UNK TLobby__sub_801A3698();

typedef char RecoveredGlobal_801A3540_lbl_804C1F68_size[sizeof(RecoveredGlobal_801A3540_lbl_804C1F68) == 0x180 ? 1 : -1];
typedef char RecoveredGlobal_801A3540_lbl_80515BA0_size[sizeof(RecoveredGlobal_801A3540_lbl_80515BA0) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_801A3540_main_task_size[sizeof(RecoveredGlobal_801A3540_main_task) == 0x34 ? 1 : -1];

void TLobby__sub_801A3014(void) {
    Obj_801A3014 holder;
    void *p;
    s32 i;
    s32 j;
    __ct__7TObjectFP7TObject(&holder, NULL);
    TLobby__sub_800FA260();
    TKeyBoardControl__sub_801A66B8();
    render_tick__Fv();
    render_tick__Fv();
    TLobby__sub_801A2E00();
    for (i = 0; i < get_game_mode__6TLobbyFv(); i++) {
        void *q = get_player_data__10TObjPlayerFi(i);
        if (q != NULL) {
            set_parent__7TObjectFP7TObject(q, &holder);
        }
    }
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        switch (TLobby__sub_8030A7B0()) {
        case 0:
            break;
        case 1:
            destroy_global__6TLobbyFv();
            break;
        case 2:
            break;
        }
    }
    reset_quest_state__6TLobbyFv();
    delete_all_task_children__9TMainTaskFv(&main_task);
    TLobby__sub_80228754(&lbl_80515BA0);
    TLobby__sub_80207644();
    update__16TKeyBoardControlFv();
    get_team_state__6TLobbyFPv();
    TLobby__sub_8020DC78();
    TLobby__sub_80207E48();
    create_map_csn_ctrl__6TLobbyFv();
    create_quad_sprites__13TParticleCtrlFv();
    TLobby__sub_800F8B20();
    TLoadCtrl__sub_8001C978(1);
    init_limits__6TLobbyFv();
    TLobby__sub_8020B118();
    TLobby__sub_8020901C();
    TLobby__sub_8001DC30();
    TLobby__sub_80141038(&lbl_80515BA0, 0, 0);
    TLobby__sub_802286C4(&lbl_80515BA0);
    cleanup_scene__9TLoadCtrlFv();
    if (TLobby__sub_800F8AE8() != 0) {
        reset_keyboard_state__6TLobbyFv();
        clear_callback_and_reset_keyboard__6TLobbyFv();
    }
    clear_callback_and_reset_keyboard__6TLobbyFv();
    some_empty_func__9TMainTaskFv(&main_task);
    run_task__9TMainTaskFv(&main_task);
    render_screen_overlay__9TMainTaskFv(&main_task);
    for (j = 0; j < get_game_mode__6TLobbyFv(); j++) {
        p = get_player_data__10TObjPlayerFi(j);
        if (p != NULL) {
            set_parent__7TObjectFP7TObject(p, tl_03);
            ((VObj_801A3014 *)p)->m6();
            fn_801B802C(p);
            TObjPlayer__sub_801B1A84(fn_801B309C);
        }
    }
    TLobby__sub_8001DC30();
    TObjCityMainWarp__sub_801868A8(0);
    __dt__7TObjectFv(&holder, -1);
}

void TLobby__sub_801A31D8(void) {
    Obj_801A31D8 holder;
    s32 i;
    s32 j;
    void *p;
    __ct__7TObjectFP7TObject(&holder, NULL);
    TLobby__sub_800FA260();
    TKeyBoardControl__sub_801A66B8();
    render_tick__Fv();
    render_tick__Fv();
    TObjPlayer__sub_801BDCF8();
    TObjPlayer__sub_801BDC98();
    for (i = 0; i < get_game_mode__6TLobbyFv(); i++) {
        void *q = get_player_data__10TObjPlayerFi(i);
        if (q != NULL) {
            set_parent__7TObjectFP7TObject(q, &holder);
        }
    }
    delete_all_task_children__9TMainTaskFv(&main_task);
    TLobby__sub_80228754(&lbl_80515BA0);
    sync_story_select__6TLobbyFv();
    set_state__16TAdStorySelectGCFi(0);
    update__16TKeyBoardControlFv();
    reset_quest_state__6TLobbyFv();
    get_team_state__6TLobbyFPv();
    TLobby__sub_8020DC78();
    TQuestThread__sub_801F5DA8();
    create_map_csn_ctrl__6TLobbyFv();
    create_quad_sprites__13TParticleCtrlFv();
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        switch (TLobby__sub_8030A7B0()) {
        case 0:
            break;
        case 1:
            setup_split_screen();
            break;
        case 2:
            break;
        }
    }
    TLoadCtrl__sub_8001C978(1);
    TQuestThread__sub_801F60DC();
    TLobby__sub_801F3DEC();
    {
        void *t = __nw__7TObjectFUl(0x194);
        if (t != NULL) {
            t = ((void *(*)(void *, u32, int))__ct__12TQuestThreadFv)(t, lbl_805D5EE8, 0);
        }
        ((VObj_801A31D8 *)t)->m1();
    }
    set_enemy_mode_flag__6TLobbyFv();
    init_limits__6TLobbyFv();
    setup_quest_list__6TLobbyFv();
    TQuestListVM__sub_802186A8();
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        TLobby__sub_802286C4(&lbl_80515BA0);
    } else {
        TLobby__sub_80141038(&lbl_80515BA0, 0, 0);
        TLobby__sub_802286C4(&lbl_80515BA0);
    }
    cleanup_scene__9TLoadCtrlFv();
    some_empty_func__9TMainTaskFv(&main_task);
    run_task__9TMainTaskFv(&main_task);
    render_screen_overlay__9TMainTaskFv(&main_task);
    for (j = 0; j < get_game_mode__6TLobbyFv(); j++) {
        p = get_player_data__10TObjPlayerFi(j);
        if (p != NULL) {
            set_parent__7TObjectFP7TObject(p, tl_03);
            ((VObj_801A31D8 *)p)->m6();
            fn_801B802C(p);
            TObjPlayer__sub_801B1A84(fn_801B309C);
        }
    }
    TQuestThread__sub_801F5B5C();
    __dt__7TObjectFv(&holder, -1);
}

void run_offline_area_transfer(void) {
    Obj_801A33DC holder;
    s32 i;
    void *p;
    s32 j;
    __ct__7TObjectFP7TObject(&holder, NULL);
    TLobby__sub_800FA260();
    TKeyBoardControl__sub_801A66B8();
    render_tick__Fv();
    render_tick__Fv();
    for (i = 0; i < get_game_mode__6TLobbyFv(); i++) {
        void *q = get_player_data__10TObjPlayerFi(i);
        if (q != NULL) {
            set_parent__7TObjectFP7TObject(q, &holder);
        }
    }
    delete_all_task_children__9TMainTaskFv(&main_task.value);
    TLobby__sub_80228754(&lbl_80515BA0.value);
    update__16TKeyBoardControlFv();
    create_map_csn_ctrl__6TLobbyFv();
    create_quad_sprites__13TParticleCtrlFv();
    TLoadCtrl__sub_8001C978(2);
    TLobby__sub_800FD614(TLobby__data_805011D8, TLobby__data_805D53AC);
    TLobby__sub_802286C4(&lbl_80515BA0.value);
    TObjCityMainWarp__sub_801865B4(get_current_floor());
    cleanup_scene__9TLoadCtrlFv();
    some_empty_func__9TMainTaskFv(&main_task.value);
    run_task__9TMainTaskFv(&main_task.value);
    render_screen_overlay__9TMainTaskFv(&main_task.value);
    for (j = 0; j < get_game_mode__6TLobbyFv(); j++) {
        p = get_player_data__10TObjPlayerFi(j);
        if (p != NULL) {
            set_parent__7TObjectFP7TObject(p, tl_03);
            ((VObj_801A33DC *)p)->m6();
        }
    }
    TQuestThread__sub_801F5B5C();
    if (lbl_805D5EEC != 0) {
        p = __nw__7TObjectFUl(0x194);
        if (p != NULL) {
            __ct__12TQuestThreadFv(p, lbl_805D5EEC, 0);
        }
    }
    __dt__7TObjectFv(&holder, -1);
}

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

void TLobby__sub_801A35C8(void) {
    func_803DCDFC__Fv();
    controller_stuff__Fv();
    TKeyBoardControl__sub_801A5EC4();
    TLobby__sub_8007EB20(lbl_804468F8, TLobby__data_805D614C * 0xC);
    TLobby__sub_8007EB20(lbl_80446908, TLobby__data_805D6148 * 4);
    if (is_split_screen() != 0) {
        TLobby__sub_801A37D0();
    } else {
        TLobby__sub_801A3770();
    }
    TLobby__sub_800FA464();
    TLobby__sub_802269B4();
    TAdSinglePlyChrSelectGC__sub_80201650();
    TObjBoss2Tunnel__sub_8007D1D0();
    if (func_801A5E54__Fv() != 0) {
        shutdown_keyboard_control__6TLobbyFv();
    }
    if (is_ready__22TQuestVmDownLoadServerFv() != 0) {
        TKeyBoardControl__sub_8000F9CC(0);
    }
    if (get_key_state__16TKeyBoardControlFv() != 0) {
        run_offline_area_transfer();
        TKeyBoardControl__sub_8000F9A4();
    }
    if (get_input__16TKeyBoardControlFv() != 0) {
        TLobby__sub_801A3014();
        TKeyBoardControl__sub_8000F95C();
    }
    render_tick__Fv();
}

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
