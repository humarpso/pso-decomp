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

struct VBase_801A37D0 { char pad[0x18]; };

struct VObj_801A37D0 : VBase_801A37D0 {
    virtual void m0();
    virtual void m1();
};

struct Vec_801A37D0 { f32 x, y, z; };

struct Cam_801A37D0 {
    u8 pad0[0x94];
    s32 yaws[4];
    Vec_801A37D0 poss[4];
    u8 padd4[0x178 - 0xD4];
    Vec_801A37D0 pos;
    u8 pad184[0x194 - 0x184];
    s32 yaw;
};

struct RecoveredGlobal_801A3540_lbl_804C1F68;
struct PVB_801A39BC { char pad[0x18]; };

struct PV_801A39BC : PVB_801A39BC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6();
};

extern "C" {
s32 is_split_screen(void);
M2C_UNK update__16TKeyBoardControlFv();
M2C_UNK set_fullscreen_viewport__11TCameraCtrlFv();
M2C_UNK clear_resource_load_tasks();
M2C_UNK call_funcs_reverse__6TLobbyFPvUi(void *, int);
M2C_UNK reset_quest_state__6TLobbyFv();
M2C_UNK enable_camera__19TAdSelectGameModeGCFv();
M2C_UNK TLobby__sub_801A3B98();
M2C_UNK render_tick__Fv();
M2C_UNK update_lobby_subsystems__6TLobbyFv();
M2C_UNK stop_audio_streams__6TLobbyFv();
M2C_UNK run_area_scene_cleanup(void *);
M2C_UNK clear_flag3_all_tasks__9TMainTaskFv(void *);
M2C_UNK delete_all_task_children__9TMainTaskFv(void *);
M2C_UNK delete_children__7TObjectFv(int);
extern RecoveredGlobal_801A3540_lbl_804C1F68 lbl_804C1F68;
extern RecoveredGlobal_801A3540_lbl_80515BA0 lbl_80515BA0;
extern RecoveredGlobal_801A3540_main_task main_task;
extern s32 tl_su;
void teardown_scene__6TLobbyFv(void);
M2C_UNK set_mode__11TCameraCtrlFi(int);
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK render__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
M2C_UNK render_shadows__9TMainTaskFv(void *);
extern RecoveredGlobal_801A3540_main_task main_task;
void run_single_view_frame(void);
void __dt__7TObjectFv(void *, int);
M2C_UNK update__16TKeyBoardControlFv();
void *get_player_data__10TObjPlayerFi(s32);
s32 get_current_floor();
void cleanup_scene__9TLoadCtrlFv();
void start_loading__9TLoadCtrlFUi(int);
s32 get_game_mode__6TLobbyFv();
void process_pending_resources();
void find_leader_section_id(void *, s32);
void create_map_csn_ctrl__6TLobbyFv();
void unlock_main_warp_destination(s32);
void reset_controller_input_state();
M2C_UNK render_tick__Fv();
void create_quad_sprites__13TParticleCtrlFv();
void create_floor_quest_thread();
void __ct__12TQuestThreadFv(void *, u32, int);
void load_area_scene_and_init(void *);
void promote_area_floor(void *);
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
void start_loading__9TLoadCtrlFUi(int);
M2C_UNK load_battle_param_entry();
s32 get_game_mode__6TLobbyFv();
M2C_UNK reset_keyboard_state__6TLobbyFv();
s32 is_area_transfer_pending();
M2C_UNK clear_callback_and_reset_keyboard__6TLobbyFv();
M2C_UNK apply_phase_keyboard_mode();
void process_pending_resources();
void create_map_csn_ctrl__6TLobbyFv();
M2C_UNK TLobby__sub_80141038(void *, int, int);
M2C_UNK update_main_warp_visible_mask(int);
M2C_UNK init_limits__6TLobbyFv();
M2C_UNK TLobby__sub_801A2E00();
M2C_UNK reset_quest_state__6TLobbyFv();
void reset_controller_input_state();
M2C_UNK for_each_player_slot__10TObjPlayerFv(void *);
M2C_UNK rebuild_player_inventory(void *);
M2C_UNK render_tick__Fv();
void create_quad_sprites__13TParticleCtrlFv();
M2C_UNK backup_story_select__6TLobbyFv();
M2C_UNK TLobby__sub_80207E48();
M2C_UNK get_team_state__6TLobbyFPv();
M2C_UNK load_set_event_gsl__6TLobbyFv();
M2C_UNK load_set_gsl_files__6TLobbyFv();
M2C_UNK TLobby__sub_8020DC78();
void load_area_scene_and_init(void *);
void promote_area_floor(void *);
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK delete_all_task_children__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
void set_parent__7TObjectFP7TObject(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
M2C_UNK destroy_global__6TLobbyFv();
s32 get_game_play_mode();
s32 is_not_split_screen__13TRaderMapCoreFv();
extern u8 fn_801B309C[];
extern RecoveredGlobal_801A3540_lbl_80515BA0 lbl_80515BA0;
extern RecoveredGlobal_801A3540_main_task main_task;
extern void *tl_03;
void reload_offline_area__6TLobbyFv(void);
void __dt__7TObjectFv(void *, int);
M2C_UNK update__16TKeyBoardControlFv();
void *get_player_data__10TObjPlayerFi(s32);
void cleanup_scene__9TLoadCtrlFv();
void start_loading__9TLoadCtrlFUi(int);
s32 get_game_mode__6TLobbyFv();
void process_pending_resources();
void create_map_csn_ctrl__6TLobbyFv();
M2C_UNK TLobby__sub_80141038(void *, int, int);
M2C_UNK init_limits__6TLobbyFv();
M2C_UNK refresh_player_lobby_headers__10TObjPlayerFv();
M2C_UNK create_active_players__10TObjPlayerFv();
M2C_UNK set_enemy_mode_flag__6TLobbyFv();
M2C_UNK clear_quest_floor_designations();
M2C_UNK setup_quest_list__6TLobbyFv();
void create_floor_quest_thread();
void __ct__12TQuestThreadFv(void *, u32, int);
M2C_UNK clear_all_floor_handlers();
M2C_UNK create_by_mode__12TQuestThreadFv();
M2C_UNK sync_story_select__6TLobbyFv();
M2C_UNK set_state__16TAdStorySelectGCFi(int);
M2C_UNK load_vm__12TQuestListVMFv();
void *__nw__7TObjectFUl(u32);
M2C_UNK setup_split_screen();
extern u32 lbl_805D5EE8;
M2C_UNK reset_quest_state__6TLobbyFv();
void reset_controller_input_state();
M2C_UNK for_each_player_slot__10TObjPlayerFv(void *);
M2C_UNK rebuild_player_inventory(void *);
M2C_UNK render_tick__Fv();
void create_quad_sprites__13TParticleCtrlFv();
M2C_UNK get_team_state__6TLobbyFPv();
M2C_UNK TLobby__sub_8020DC78();
void load_area_scene_and_init(void *);
void promote_area_floor(void *);
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK delete_all_task_children__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
void set_parent__7TObjectFP7TObject(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
s32 get_game_play_mode();
s32 is_not_split_screen__13TRaderMapCoreFv();
extern u8 fn_801B309C[];
extern RecoveredGlobal_801A3540_lbl_80515BA0 lbl_80515BA0;
extern RecoveredGlobal_801A3540_main_task main_task;
extern void *tl_03;
void rebuild_area_keep_players__6TLobbyFv(void);
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
void reload_offline_area__6TLobbyFv(void);
void run_offline_area_transfer(void);
void run_single_view_frame(void);
s8 func_801A5E54__Fv();
M2C_UNK update_input_frame__16TKeyBoardControlFv();
M2C_UNK controller_stuff__Fv();
M2C_UNK render_tick__Fv();
M2C_UNK run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
M2C_UNK update_sound_request_slots();
M2C_UNK func_803DCDFC__Fv();
extern char lbl_804468F8[];
extern char lbl_80446908[];
extern s32 TLobby__data_805D6148;
extern s32 TLobby__data_805D614C;
void run_offline_game_frame(void);
s32 get_input__16TKeyBoardControlFv();
M2C_UNK TKeyBoardControl__sub_8000F95C();
s32 get_key_state__16TKeyBoardControlFv();
M2C_UNK TKeyBoardControl__sub_8000F9A4();
M2C_UNK TKeyBoardControl__sub_8000F9CC(M2C_UNK);
s32 is_split_screen(void);
M2C_UNK TLobby__sub_8006EF90();
M2C_UNK TObjBoss2Tunnel__sub_8007D1D0();
void TLobby__sub_8007EB20(const char *, ...);
s32 is_ready__22TQuestVmDownLoadServerFv();
M2C_UNK TLobby__sub_800FA464();
M2C_UNK reset_keyboard_input__6TLobbyFv();
void rebuild_area_keep_players__6TLobbyFv(void);
void run_offline_area_transfer(void);
void run_single_view_frame(void);
s8 func_801A5E54__Fv();
M2C_UNK update_input_frame__16TKeyBoardControlFv();
M2C_UNK controller_stuff__Fv();
M2C_UNK render_tick__Fv();
M2C_UNK run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
M2C_UNK update_sound_request_slots();
M2C_UNK noop__23TAdSinglePlyChrSelectGCFv();
M2C_UNK func_803DCDFC__Fv();
extern char lbl_804468F8[];
extern char lbl_80446908[];
extern s32 TLobby__data_805D6148;
extern s32 TLobby__data_805D614C;
void run_offline_transfer_frame(void);
M2C_UNK get_fog_ctrl__16TKeyBoardControlFPv();
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK sync_split_view_slots__11TCameraCtrlFii(s32, int);
M2C_UNK set_fullscreen_viewport__11TCameraCtrlFv();
M2C_UNK set_split_viewport__11TCameraCtrlFii(s32, s32);
u16 TCameraCtrl__sub_8006A5DC();
s32 get_camera_id__11TCameraCtrlFv();
M2C_UNK set_mode__11TCameraCtrlFi(int);
s8 TLobby__sub_801A3C40();
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK render__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
M2C_UNK TWindowCtrlMain__sub_8024CB7C();
M2C_UNK TWindowCtrlMain__sub_8024CB8C();
M2C_UNK draw_split_screen_hud__20TWindowSubStatusDispFv();
extern RecoveredGlobal_801A3540_main_task main_task;
extern Cam_801A37D0 *lbl_805D4DF0;
void run_split_screen_frame(void);
M2C_UNK update__16TKeyBoardControlFv();
M2C_UNK TKeyBoardControl__sub_8000F90C(M2C_UNK);
M2C_UNK TKeyBoardControl__sub_8000F91C(M2C_UNK);
M2C_UNK TKeyBoardControl__sub_8000F9A4();
void *get_player_data__10TObjPlayerFi(s32);
void cleanup_scene__9TLoadCtrlFv();
M2C_UNK poll_default__9TLoadCtrlFv();
s32 get_game_mode__6TLobbyFv();
s32 is_quest_active();
M2C_UNK reset_keyboard_state__6TLobbyFv();
s32 is_area_transfer_pending();
M2C_UNK clear_callback_and_reset_keyboard__6TLobbyFv();
M2C_UNK apply_phase_keyboard_mode();
M2C_UNK invoke_callback__6TLobbyFv();
M2C_UNK clear_resource_load_tasks();
void find_leader_section_id(void *, s32);
M2C_UNK run_load_callback_table(void *, M2C_UNK);
M2C_UNK init_range__6TLobbyFPvi(void *, M2C_UNK);
void create_map_csn_ctrl__6TLobbyFv();
M2C_UNK reset_keyboard_input__6TLobbyFv();
M2C_UNK shutdown_keyboard_control__6TLobbyFv();
M2C_UNK TLobby__sub_801A2DF4();
M2C_UNK TLobby__sub_801A2DF8();
M2C_UNK TLobby__sub_801A2DFC();
M2C_UNK apply_char_to_players__6TLobbyFv();
M2C_UNK set_scene__6TSceneFi(M2C_UNK);
void reset_controller_input_state();
M2C_UNK TObjPlayer__sub_801B1BA4();
M2C_UNK TObjPlayer__sub_801B1C8C();
M2C_UNK set_copy_clear_color_argb(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK render_tick__Fv();
void create_quad_sprites__13TParticleCtrlFv();
M2C_UNK TLobby__sub_801F3774();
void __ct__12TQuestThreadFv(void *, u32, int);
s32 save_character_to_card__23TAdSinglePlyChrSelectGCFv();
M2C_UNK set_current_floor_area(M2C_UNK);
void load_area_scene_and_init(void *);
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
void *__nw__7TObjectFUl(u32);
extern RecoveredGlobal_801A3540_lbl_804C1F68 lbl_804C1F68;
extern u8 TLobby__data_805011D8[];
extern RecoveredGlobal_801A3540_lbl_80515BA0 lbl_80515BA0;
extern RecoveredGlobal_801A3540_main_task main_task;
extern s32 lbl_805D53A0;
extern s32 lbl_805D53A4;
extern s32 TLobby__data_805D53AC;
extern s32 lbl_805D5CE0;
extern s32 TLobby__data_805D5E24;
extern u32 lbl_805D5EEC;
void init_offline_game_scene(void);
}

extern "C" {

void dispatch_offline_main_frame(void);
s32 is_quest_active();

typedef char RecoveredGlobal_801A3540_lbl_804C1F68_size[sizeof(RecoveredGlobal_801A3540_lbl_804C1F68) == 0x180 ? 1 : -1];
typedef char RecoveredGlobal_801A3540_lbl_80515BA0_size[sizeof(RecoveredGlobal_801A3540_lbl_80515BA0) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_801A3540_main_task_size[sizeof(RecoveredGlobal_801A3540_main_task) == 0x34 ? 1 : -1];

void reload_offline_area__6TLobbyFv(void) {
    Obj_801A3014 holder;
    void *p;
    s32 i;
    s32 j;
    __ct__7TObjectFP7TObject(&holder, NULL);
    process_pending_resources();
    reset_controller_input_state();
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
        switch (get_game_play_mode()) {
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
    promote_area_floor(&lbl_80515BA0);
    backup_story_select__6TLobbyFv();
    update__16TKeyBoardControlFv();
    get_team_state__6TLobbyFPv();
    TLobby__sub_8020DC78();
    TLobby__sub_80207E48();
    create_map_csn_ctrl__6TLobbyFv();
    create_quad_sprites__13TParticleCtrlFv();
    apply_phase_keyboard_mode();
    start_loading__9TLoadCtrlFUi(1);
    init_limits__6TLobbyFv();
    load_set_gsl_files__6TLobbyFv();
    load_set_event_gsl__6TLobbyFv();
    load_battle_param_entry();
    TLobby__sub_80141038(&lbl_80515BA0, 0, 0);
    load_area_scene_and_init(&lbl_80515BA0);
    cleanup_scene__9TLoadCtrlFv();
    if (is_area_transfer_pending() != 0) {
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
            rebuild_player_inventory(p);
            for_each_player_slot__10TObjPlayerFv(fn_801B309C);
        }
    }
    load_battle_param_entry();
    update_main_warp_visible_mask(0);
    __dt__7TObjectFv(&holder, -1);
}

void rebuild_area_keep_players__6TLobbyFv(void) {
    Obj_801A31D8 holder;
    s32 i;
    s32 j;
    void *p;
    __ct__7TObjectFP7TObject(&holder, NULL);
    process_pending_resources();
    reset_controller_input_state();
    render_tick__Fv();
    render_tick__Fv();
    refresh_player_lobby_headers__10TObjPlayerFv();
    create_active_players__10TObjPlayerFv();
    for (i = 0; i < get_game_mode__6TLobbyFv(); i++) {
        void *q = get_player_data__10TObjPlayerFi(i);
        if (q != NULL) {
            set_parent__7TObjectFP7TObject(q, &holder);
        }
    }
    delete_all_task_children__9TMainTaskFv(&main_task);
    promote_area_floor(&lbl_80515BA0);
    sync_story_select__6TLobbyFv();
    set_state__16TAdStorySelectGCFi(0);
    update__16TKeyBoardControlFv();
    reset_quest_state__6TLobbyFv();
    get_team_state__6TLobbyFPv();
    TLobby__sub_8020DC78();
    clear_all_floor_handlers();
    create_map_csn_ctrl__6TLobbyFv();
    create_quad_sprites__13TParticleCtrlFv();
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        switch (get_game_play_mode()) {
        case 0:
            break;
        case 1:
            setup_split_screen();
            break;
        case 2:
            break;
        }
    }
    start_loading__9TLoadCtrlFUi(1);
    create_by_mode__12TQuestThreadFv();
    clear_quest_floor_designations();
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
    load_vm__12TQuestListVMFv();
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        load_area_scene_and_init(&lbl_80515BA0);
    } else {
        TLobby__sub_80141038(&lbl_80515BA0, 0, 0);
        load_area_scene_and_init(&lbl_80515BA0);
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
            rebuild_player_inventory(p);
            for_each_player_slot__10TObjPlayerFv(fn_801B309C);
        }
    }
    create_floor_quest_thread();
    __dt__7TObjectFv(&holder, -1);
}

void run_offline_area_transfer(void) {
    Obj_801A33DC holder;
    s32 i;
    void *p;
    s32 j;
    __ct__7TObjectFP7TObject(&holder, NULL);
    process_pending_resources();
    reset_controller_input_state();
    render_tick__Fv();
    render_tick__Fv();
    for (i = 0; i < get_game_mode__6TLobbyFv(); i++) {
        void *q = get_player_data__10TObjPlayerFi(i);
        if (q != NULL) {
            set_parent__7TObjectFP7TObject(q, &holder);
        }
    }
    delete_all_task_children__9TMainTaskFv(&main_task.value);
    promote_area_floor(&lbl_80515BA0.value);
    update__16TKeyBoardControlFv();
    create_map_csn_ctrl__6TLobbyFv();
    create_quad_sprites__13TParticleCtrlFv();
    start_loading__9TLoadCtrlFUi(2);
    find_leader_section_id(TLobby__data_805011D8, TLobby__data_805D53AC);
    load_area_scene_and_init(&lbl_80515BA0.value);
    unlock_main_warp_destination(get_current_floor());
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
    create_floor_quest_thread();
    if (lbl_805D5EEC != 0) {
        p = __nw__7TObjectFUl(0x194);
        if (p != NULL) {
            __ct__12TQuestThreadFv(p, lbl_805D5EEC, 0);
        }
    }
    __dt__7TObjectFv(&holder, -1);
}

void teardown_scene__6TLobbyFv(void) {
    if (is_split_screen() != 0) {
        set_fullscreen_viewport__11TCameraCtrlFv();
    }
    TLobby__sub_801A3B98();
    enable_camera__19TAdSelectGameModeGCFv();
    stop_audio_streams__6TLobbyFv();
    update_lobby_subsystems__6TLobbyFv();
    reset_quest_state__6TLobbyFv();
    delete_all_task_children__9TMainTaskFv((void *) (&main_task.value));
    clear_flag3_all_tasks__9TMainTaskFv((void *) (&main_task.value));
    delete_children__7TObjectFv((int) (tl_su));
    run_area_scene_cleanup((void *) (&lbl_80515BA0.value));
    call_funcs_reverse__6TLobbyFPvUi((void *) (&lbl_804C1F68.value), (int) (0x180));
    clear_resource_load_tasks();
    update__16TKeyBoardControlFv();
    render_tick__Fv();
}

typedef char RecoveredGlobal_801A3770_main_task_size[sizeof(RecoveredGlobal_801A3770_main_task) == 0x34 ? 1 : -1];

void run_offline_game_frame(void) {
    func_803DCDFC__Fv();
    controller_stuff__Fv();
    update_input_frame__16TKeyBoardControlFv();
    TLobby__sub_8007EB20(lbl_804468F8, TLobby__data_805D614C * 0xC);
    TLobby__sub_8007EB20(lbl_80446908, TLobby__data_805D6148 * 4);
    if (is_split_screen() != 0) {
        run_split_screen_frame();
    } else {
        run_single_view_frame();
    }
    TLobby__sub_800FA464();
    update_sound_request_slots();
    run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
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
        reload_offline_area__6TLobbyFv();
        TKeyBoardControl__sub_8000F95C();
    }
    render_tick__Fv();
}

void run_offline_transfer_frame(void) {
    func_803DCDFC__Fv();
    controller_stuff__Fv();
    update_input_frame__16TKeyBoardControlFv();
    TLobby__sub_8007EB20(lbl_804468F8, TLobby__data_805D614C * 0xC);
    TLobby__sub_8007EB20(lbl_80446908, TLobby__data_805D6148 * 4);
    if (is_split_screen() != 0) {
        run_split_screen_frame();
    } else {
        run_single_view_frame();
    }
    TLobby__sub_800FA464();
    update_sound_request_slots();
    run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
    noop__23TAdSinglePlyChrSelectGCFv();
    TObjBoss2Tunnel__sub_8007D1D0();
    TLobby__sub_8006EF90();
    if (func_801A5E54__Fv() != 0) {
        reset_keyboard_input__6TLobbyFv();
    }
    if (is_ready__22TQuestVmDownLoadServerFv() != 0) {
        TKeyBoardControl__sub_8000F9CC(0);
    }
    if (get_input__16TKeyBoardControlFv() != 0) {
        rebuild_area_keep_players__6TLobbyFv();
        TKeyBoardControl__sub_8000F95C();
    }
    if (get_key_state__16TKeyBoardControlFv() != 0) {
        run_offline_area_transfer();
        TKeyBoardControl__sub_8000F9A4();
    }
    render_tick__Fv();
}

void run_single_view_frame(void) {
    some_empty_func__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A3770_main_task *)&main_task).value));
    set_mode__11TCameraCtrlFi((int) (0));
    run_task__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A3770_main_task *)&main_task).value));
    render_shadows__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A3770_main_task *)&main_task).value));
    render__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A3770_main_task *)&main_task).value));
    render_screen_overlay__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A3770_main_task *)&main_task).value));
}

void run_split_screen_frame(void) {
    s32 i;
    s8 id;
    some_empty_func__9TMainTaskFv(&main_task);
    id = TLobby__sub_801A3C40();
    if (id >= 0) {
        set_mode__11TCameraCtrlFi(id);
        run_task__9TMainTaskFv(&main_task);
        get_fog_ctrl__16TKeyBoardControlFPv();
        set_split_viewport__11TCameraCtrlFii(1, 0);
        render__9TMainTaskFv(&main_task);
        if (lbl_805D4DF0 != NULL) {
            lbl_805D4DF0->yaws[id] = lbl_805D4DF0->yaw;
            VecCopy__FP3VecPC3Vec(&lbl_805D4DF0->poss[id], &lbl_805D4DF0->pos);
        }
    } else {
        for (i = 0; i < get_camera_id__11TCameraCtrlFv(); i++) {
            set_mode__11TCameraCtrlFi(i);
            if (TCameraCtrl__sub_8006A5DC() != 5 && TCameraCtrl__sub_8006A5DC() != 9) {
                if (i == 0) {
                    run_task__9TMainTaskFv(&main_task);
                    draw_split_screen_hud__20TWindowSubStatusDispFv();
                } else if (lbl_805D4DF0 != NULL) {
                    ((VObj_801A37D0 *)lbl_805D4DF0)->m1();
                }
                set_split_viewport__11TCameraCtrlFii(get_camera_id__11TCameraCtrlFv(), i);
                get_fog_ctrl__16TKeyBoardControlFPv();
                render__9TMainTaskFv(&main_task);
                sync_split_view_slots__11TCameraCtrlFii(i, 0);
                TWindowCtrlMain__sub_8024CB8C();
            } else {
                TWindowCtrlMain__sub_8024CB7C();
                if (i == 0) {
                    run_task__9TMainTaskFv(&main_task);
                }
                set_split_viewport__11TCameraCtrlFii(1, 0);
                get_fog_ctrl__16TKeyBoardControlFPv();
                render__9TMainTaskFv(&main_task);
                sync_split_view_slots__11TCameraCtrlFii(i, 1);
                TWindowCtrlMain__sub_8024CB7C();
                break;
            }
        }
    }
    set_mode__11TCameraCtrlFi(0x64);
    set_fullscreen_viewport__11TCameraCtrlFv();
    render_screen_overlay__9TMainTaskFv(&main_task);
}

void dispatch_offline_main_frame(void) {
    if (is_quest_active() != 0) {
        run_offline_game_frame();
        return;
    }
    run_offline_transfer_frame();
}
void init_offline_game_scene(void) {
    s32 temp_r31;
    s32 var_r30;
    void *temp_r3;
    lbl_805D5CE0 = 0;
    TLobby__data_805D5E24 = 0;
    set_copy_clear_color_argb(0, 0, 0);
    update__16TKeyBoardControlFv();
    reset_controller_input_state();
    TKeyBoardControl__sub_8000F9A4();
    clear_resource_load_tasks();
    create_map_csn_ctrl__6TLobbyFv();
    create_quad_sprites__13TParticleCtrlFv();
    poll_default__9TLoadCtrlFv();
    TObjPlayer__sub_801B1C8C();
    set_current_floor_area(0);
    set_scene__6TSceneFi(0);
    init_range__6TLobbyFPvi(&lbl_80515BA0, 0);
    reset_keyboard_state__6TLobbyFv();
    apply_phase_keyboard_mode();
    run_load_callback_table(&lbl_804C1F68, 0x180);
    if (is_area_transfer_pending() != 0) {
        reset_keyboard_state__6TLobbyFv();
        invoke_callback__6TLobbyFv();
        clear_callback_and_reset_keyboard__6TLobbyFv();
        cleanup_scene__9TLoadCtrlFv();
        TObjPlayer__sub_801B1BA4();
        return;
    }
    clear_callback_and_reset_keyboard__6TLobbyFv();
    TLobby__sub_801F3774();
    TLobby__sub_801A2DFC();
    apply_char_to_players__6TLobbyFv();
    TLobby__sub_801A2DF8();
    lbl_805D53A4 = 0;
    lbl_805D53A0 = 0;
    TLobby__data_805D53AC = 0;
    TLobby__sub_801A2DF4();
    find_leader_section_id(TLobby__data_805011D8, TLobby__data_805D53AC);
    load_area_scene_and_init(&lbl_80515BA0);
    cleanup_scene__9TLoadCtrlFv();
    some_empty_func__9TMainTaskFv(&main_task);
    run_task__9TMainTaskFv(&main_task);
    render_screen_overlay__9TMainTaskFv(&main_task);
    temp_r31 = get_game_mode__6TLobbyFv();
    for (var_r30 = 0; var_r30 < temp_r31; var_r30++) {
        temp_r3 = get_player_data__10TObjPlayerFi(var_r30);
        if (temp_r3 != NULL) {
            ((PV_801A39BC *)temp_r3)->m6();
        }
    }
    TObjPlayer__sub_801B1BA4();
    if (lbl_805D5EEC != 0) {
        void *q = __nw__7TObjectFUl(0x194);
        if (q != NULL) {
            __ct__12TQuestThreadFv(q, lbl_805D5EEC, 0);
        }
    }
    if (save_character_to_card__23TAdSinglePlyChrSelectGCFv() == 0) {
        if (is_quest_active() != 0) {
            shutdown_keyboard_control__6TLobbyFv();
        } else {
            reset_keyboard_input__6TLobbyFv();
        }
    }
    TKeyBoardControl__sub_8000F90C(2);
    TKeyBoardControl__sub_8000F91C(0xE);
    render_tick__Fv();
}

}
