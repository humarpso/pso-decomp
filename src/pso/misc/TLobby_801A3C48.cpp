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

struct RecoveredGlobal_801A400C_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct Pair_801A3CFC { s32 f0; s32 f4; };

struct Entry_801A3CFC {
    u8 pad0[2];
    s16 f2;
    s32 f4;
    s32 f8;
    s32 fC;
    char name[0x10];
};

struct Msg_801A3CFC {
    u8 pad0[0x84];
    Entry_801A3CFC entries[4];
    s8 f104;
    s8 f105;
    s8 f106;
    u8 pad107[0x114 - 0x107];
};

typedef s32 M2C_UNK;
struct VBase_18_801A4268 { char pad[0x18]; };

struct VObj_18_801A4268 : VBase_18_801A4268 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

struct VBase_18_801A441C { char pad[0x18]; };

struct VObj_18_801A441C : VBase_18_801A441C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

struct Obj_801A40D8 { u8 pad[0x20]; };

struct PlB_801A40D8 { u8 pad[0x18]; };

struct Pl_801A40D8 : PlB_801A40D8 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
};

extern "C" {
M2C_UNK reset_quest_result_callbacks__22THunterGuildSeqOfflineFPv();
M2C_UNK reset_floor_items__6TLobbyFv();
M2C_UNK clear_enabled_main_warps();
M2C_UNK free_map_data__13TRaderMapCoreFv();
M2C_UNK clear_switch_table();
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
s32 is_quest_active();
void update_camera_state__6TLobbyFv(void);
M2C_UNK send_keepalive(void*);
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
int send_logout__6TLobbyFv(void);
void init_chr_select__6TLobbyFv(void);
void update_periodic_tick__6TLobbyFv(void);
s8 func_801A5E54__Fv();
M2C_UNK update_input_frame__16TKeyBoardControlFv();
M2C_UNK controller_stuff__Fv();
s32 TAdPlayerLoadGC__sub_801E1B50(int);
s32 probe_card_slot__15TAdPlayerLoadGCFi(int);
M2C_UNK render_tick__Fv();
M2C_UNK run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
M2C_UNK update_sound_request_slots();
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
void run_main_frame__6TLobbyFv(void);
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
int send_logout__6TLobbyFv(void);
void reset_to_chr_select__6TLobbyFv(void);
void update_periodic_tick__6TLobbyFv(void);
s8 func_801A5E54__Fv();
M2C_UNK update_input_frame__16TKeyBoardControlFv();
M2C_UNK controller_stuff__Fv();
s32 TAdPlayerLoadGC__sub_801E1B50(int);
s32 probe_card_slot__15TAdPlayerLoadGCFi(int);
M2C_UNK render_tick__Fv();
M2C_UNK run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
M2C_UNK update_sound_request_slots();
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
void run_lobby_frame__6TLobbyFv(void);
M2C_UNK update__16TKeyBoardControlFv();
M2C_UNK clear_resource_load_tasks();
M2C_UNK call_funcs_reverse__6TLobbyFPvUi(void *, int);
int send_logout__6TLobbyFv(void);
M2C_UNK cleanup__6TLobbyFv();
void free_objects__6TLobbyFv(void);
M2C_UNK render_tick__Fv();
M2C_UNK update_lobby_subsystems__6TLobbyFv();
M2C_UNK stop_audio_streams__6TLobbyFv();
M2C_UNK run_area_scene_cleanup(void *);
M2C_UNK clear_flag3_all_tasks__9TMainTaskFv(void *);
M2C_UNK delete_all_task_children__9TMainTaskFv(void *);
M2C_UNK delete_children__7TObjectFv(int);
M2C_UNK free_single_player_chr_select__6TLobbyFv();
M2C_UNK update_photon_chairs__6TLobbyFv();
M2C_UNK PPCSync();
extern RecoveredGlobal_801A4610_lbl_804C20E8 online_lobby_scene_callback_table;
extern RecoveredGlobal_801A4610_lbl_804C2240 lobby_area_reload_callbacks;
extern unsigned char lbl_80515BA0[];
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 lbl_805D53A0;
extern s32 lbl_805D5CF0;
extern s32 TLobby__data_805D5E24;
extern M2C_UNK *tl_su;
void cleanup_online_lobby_scene(void);
M2C_UNK set_field1C__9TLoadCtrlFi(int);
M2C_UNK debug_print__FPCc(void *);
M2C_UNK TLobby__sub_800FA464();
M2C_UNK update_input_frame__16TKeyBoardControlFv();
M2C_UNK controller_stuff__Fv();
M2C_UNK render_tick__Fv();
M2C_UNK run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
M2C_UNK update_sound_request_slots();
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK run_tl_camera_tasks__9TMainTaskFv(void *);
M2C_UNK render__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
M2C_UNK noop__23TAdSinglePlyChrSelectGCFv();
M2C_UNK func_803DCDFC__Fv();
extern M2C_UNK lbl_80446930[];
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 lbl_805D5718;
void blocking_vsync__6TLobbyFPv(void* _w0);
void __construct_array(void *, void *, int, int, int);
void TLobby__sub_8013A23C(void);
s32 construct_entry_array__6TLobbyFi(s32 arg0);
void bswap_32__FPUl(void *);
void bswap_udp_test_header__6TLobbyFPv(u8 *arg0);
s32 open_udp_socket_for_player__6TLobbyFi(s32);
s32 handle_game_join__6TLobbyFPv(void *);
s32 construct_entry_array__6TLobbyFi(s32 arg0);
void bswap_udp_test_header__6TLobbyFPv(u8 *arg0);
M2C_UNK delete_children__7TObjectFv(int);
char *strcpy(char *, const char *);
void *memset(void *, int, u32);
extern char lbl_80446918[];
extern char lbl_80446924[];
extern Pair_801A3CFC lobby_udp_test_game_entries[];
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;
extern s32 lbl_805D5E48;
void start_udp_test_game__6TLobbyFv(void);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK update__16TKeyBoardControlFv();
M2C_UNK get_current_floor();
M2C_UNK cleanup_scene__9TLoadCtrlFv();
M2C_UNK start_loading__9TLoadCtrlFUi(M2C_UNK);
M2C_UNK set_enemy_mode_flag__6TLobbyFv();
M2C_UNK process_pending_resources();
M2C_UNK find_leader_section_id(void *, s32);
M2C_UNK process_deferred_player_setup__6TLobbyFv();
M2C_UNK reset_state_flags__6TLobbyFv();
M2C_UNK create_map_csn_ctrl__6TLobbyFv();
M2C_UNK unlock_main_warp_destination();
void free_objects__6TLobbyFv(void);
int reset_controller_input_state(void);
M2C_UNK TObjPlayer__sub_801B1BA4();
M2C_UNK TObjPlayer__sub_801B1C8C();
void *get_player_by_client_id(s32);
M2C_UNK render_tick__Fv();
M2C_UNK create_quad_sprites__13TParticleCtrlFv();
M2C_UNK clear_quest_floor_designations();
M2C_UNK setup_quest_list__6TLobbyFv();
M2C_UNK create_floor_quest_thread();
void *__ct__12TQuestThreadFv(void *, u32, M2C_UNK);
M2C_UNK clear_all_floor_handlers();
M2C_UNK create_by_mode__12TQuestThreadFv();
M2C_UNK sync_story_select__6TLobbyFv();
M2C_UNK set_state__16TAdStorySelectGCFi(M2C_UNK);
M2C_UNK get_team_state__6TLobbyFPv();
M2C_UNK TLobby__sub_8020DC78();
M2C_UNK ensure_online_quests_loaded__16TQuestListOnlineFv();
M2C_UNK update_lobby_subsystems__6TLobbyFv();
M2C_UNK stop_audio_streams__6TLobbyFv();
M2C_UNK load_area_scene_and_init(void *);
M2C_UNK promote_area_floor(void *);
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK delete_all_task_children__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
void *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK set_parent__7TObjectFP7TObject(void *, void *);
M2C_UNK __ct__7TObjectFP7TObject(void *, M2C_UNK);
extern u8 TLobby__data_805011D8[];
extern unsigned char lbl_80515BA0[];
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 TLobby__data_805D53AC;
extern u32 lbl_805D5EE8;
extern void *tl_03;
M2C_UNK start_quest_mission(void);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK update__16TKeyBoardControlFv();
M2C_UNK get_current_floor();
M2C_UNK cleanup_scene__9TLoadCtrlFv();
M2C_UNK start_loading__9TLoadCtrlFUi(M2C_UNK);
M2C_UNK reset_keyboard_state__6TLobbyFv();
s32 is_area_transfer_pending();
M2C_UNK clear_callback_and_reset_keyboard__6TLobbyFv();
M2C_UNK apply_phase_keyboard_mode();
M2C_UNK process_pending_resources();
M2C_UNK find_leader_section_id(void *, s32);
M2C_UNK run_load_callback_table(void *, M2C_UNK);
M2C_UNK reset_floor_items__6TLobbyFv();
M2C_UNK reset_item_id_counters__6TLobbyFv();
M2C_UNK process_deferred_player_setup__6TLobbyFv();
M2C_UNK reset_state_flags__6TLobbyFv();
M2C_UNK create_map_csn_ctrl__6TLobbyFv();
M2C_UNK unlock_main_warp_destination();
M2C_UNK init_limits__6TLobbyFv();
void TLobby__sub_801A3E94(void);
M2C_UNK TAdDialingGC__sub_801A4C90();
int reset_controller_input_state(void);
M2C_UNK TObjPlayer__sub_801B1BA4();
M2C_UNK TObjPlayer__sub_801B1C8C();
void *get_player_by_client_id(s32);
M2C_UNK render_tick__Fv();
M2C_UNK create_quad_sprites__13TParticleCtrlFv();
M2C_UNK create_floor_quest_thread();
void *__ct__12TQuestThreadFv(void *, u32, M2C_UNK);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FF5E4(M2C_UNK);
M2C_UNK TLobby__sub_80207E24(void *, M2C_UNK);
M2C_UNK stop_audio_streams__6TLobbyFv();
M2C_UNK clear_ready_flag_unless_locked__6TLobbyFPv(void *);
M2C_UNK load_area_scene_and_init(void *);
M2C_UNK promote_area_floor(void *);
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK delete_all_task_children__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
void *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK set_parent__7TObjectFP7TObject(void *, void *);
M2C_UNK __ct__7TObjectFP7TObject(void *, M2C_UNK);
extern RecoveredGlobal_801A4610_lbl_804C2240 lobby_area_reload_callbacks;
extern u8 TLobby__data_805011D8[];
extern u8 game_variations[];
extern unsigned char lbl_80515BA0[];
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 TLobby__data_805D53AC;
extern int TLobby__new_game_setup_flags;
extern u32 lbl_805D5EEC;
extern void *tl_03;
M2C_UNK change_floor_reload_area(void);
M2C_UNK update__16TKeyBoardControlFv();
M2C_UNK TKeyBoardControl__sub_8000F90C(int);
int TKeyBoardControl__sub_8000F91C(int);
M2C_UNK TKeyBoardControl__sub_8000F9A4();
int TKeyBoardControl__sub_8000F9CC(int);
M2C_UNK set_field1C__9TLoadCtrlFi(int);
M2C_UNK cleanup_scene__9TLoadCtrlFv();
M2C_UNK poll_default__9TLoadCtrlFv();
M2C_UNK reset_keyboard_state__6TLobbyFv();
s32 is_area_transfer_pending();
M2C_UNK clear_callback_and_reset_keyboard__6TLobbyFv();
M2C_UNK apply_phase_keyboard_mode();
M2C_UNK invoke_callback__6TLobbyFv();
M2C_UNK clear_resource_load_tasks();
M2C_UNK TLobby__sub_800FA464();
M2C_UNK run_load_callback_table(void *, M2C_UNK);
M2C_UNK init_range__6TLobbyFPvi(void *, int);
M2C_UNK process_deferred_player_setup__6TLobbyFv();
M2C_UNK reset_state_flags__6TLobbyFv();
M2C_UNK TLobby__sub_801399B8(void *);
void *TLobby__ct(void *, void *);
M2C_UNK create_map_csn_ctrl__6TLobbyFv();
s32 TLobby__sub_80146908();
M2C_UNK set_scene__6TSceneFi(int);
void TLobby__sub_801A3CF8(void);
void start_udp_test_game__6TLobbyFv(void);
int TLobby__sub_801A3E8C(void);
void set_value__6TLobbyFPvi(void* p, s32 v);
u32 TAdDialingGC__sub_801A4C9C();
s8 func_801A5E54__Fv();
M2C_UNK update_input_frame__16TKeyBoardControlFv();
M2C_UNK controller_stuff__Fv();
int reset_controller_input_state(void);
M2C_UNK set_copy_clear_color_argb(int, int, int);
M2C_UNK render_tick__Fv();
M2C_UNK TGameProtocol__ct(void *, void *);
M2C_UNK create_quad_sprites__13TParticleCtrlFv();
M2C_UNK TLobby__sub_801F3774();
int init__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
M2C_UNK set_current_floor_area(int);
M2C_UNK TLobby__sub_80207F10();
M2C_UNK TLobby__sub_8020A6B0(int);
M2C_UNK load_set_gsl_files__6TLobbyFv();
M2C_UNK update_sound_request_slots();
M2C_UNK load_area_scene_and_init(void *);
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK render__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
void *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK TAdDialingGC__sub_80328730();
M2C_UNK create__12TAdDialingGCFv(void *);
M2C_UNK close__12TAdDialingGCFv();
M2C_UNK open__12TAdDialingGCFv();
M2C_UNK func_803DCDFC__Fv();
extern RecoveredGlobal_801A4610_lbl_804C20E8 online_lobby_scene_callback_table;
extern unsigned char lbl_80515BA0[];
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 lbl_805D53A4;
extern s16 TLobby__data_805D5CE8;
extern int TLobby__new_game_setup_flags;
extern s32 lbl_805D5CF0;
extern s32 TLobby__data_805D5CF4;
extern s32 TLobby__data_805D5E24;
extern M2C_UNK *tl_su;
extern void *tl_window;
void run_online_lobby_scene(void);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK update__16TKeyBoardControlFv();
M2C_UNK cleanup_scene__9TLoadCtrlFv();
M2C_UNK start_loading__9TLoadCtrlFUi(M2C_UNK);
M2C_UNK load_battle_param_entry();
M2C_UNK process_pending_resources();
M2C_UNK find_leader_section_id(void *, s32);
M2C_UNK install_game_join_handlers__6TLobbyFv();
M2C_UNK clear_counters__6TLobbyFv();
M2C_UNK send_game_character__6TLobbyFv();
M2C_UNK process_deferred_player_setup__6TLobbyFv();
M2C_UNK reset_state_flags__6TLobbyFv();
M2C_UNK send_room_change__6TLobbyFi(s32);
M2C_UNK create_map_csn_ctrl__6TLobbyFv();
M2C_UNK TLobby__sub_80141038(void *, M2C_UNK, s32);
M2C_UNK set_scene__6TSceneFi(int);
void TLobby__sub_801A3E94(void);
void free_objects__6TLobbyFv(void);
void set_value__6TLobbyFPvi(void* p, s32 v);
void reset_counter__6TLobbyFv(void);
int reset_controller_input_state(void);
M2C_UNK TObjPlayer__sub_801B1BA4();
M2C_UNK TObjPlayer__sub_801B1C8C();
M2C_UNK render_tick__Fv();
M2C_UNK create_quad_sprites__13TParticleCtrlFv();
M2C_UNK TLobby__sub_801F494C(M2C_UNK);
M2C_UNK set_current_floor_area(int);
M2C_UNK reset_story_select__6TLobbyFPv();
M2C_UNK get_team_state__6TLobbyFPv();
M2C_UNK TLobby__sub_8020A6B0(int);
M2C_UNK TLobby__sub_8020DC78();
M2C_UNK stop_audio_streams__6TLobbyFv();
M2C_UNK load_area_scene_and_init(void *);
M2C_UNK promote_area_floor(void *);
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK clear_flag3_all_tasks__9TMainTaskFv(void *);
M2C_UNK delete_all_task_children__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
M2C_UNK __ct__7TObjectFP7TObject(void *, M2C_UNK);
M2C_UNK init_key_slots__15TOKeyJungleMainFPv();
extern u8 TLobby__data_805011D8[];
extern unsigned char lbl_80515BA0[];
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 TLobby__data_805D53AC;
extern s32 TLobby__data_805D55B0;
extern s16 TLobby__data_805D5CE8;
void reload_lobby_floor_scene(void);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK update__16TKeyBoardControlFv();
M2C_UNK cleanup_scene__9TLoadCtrlFv();
M2C_UNK poll_default__9TLoadCtrlFv();
M2C_UNK create_tasks__6TLobbyFv();
M2C_UNK process_pending_resources();
M2C_UNK init_area_lights();
M2C_UNK process_deferred_player_setup__6TLobbyFv();
M2C_UNK reset_state_flags__6TLobbyFv();
M2C_UNK create_map_csn_ctrl__6TLobbyFv();
M2C_UNK create_controller__14TObjBgmColCtrlFv();
int reset_controller_input_state(void);
M2C_UNK TObjPlayer__sub_801B1BA4();
M2C_UNK TObjPlayer__sub_801B1C8C();
void *get_player_by_client_id(s32);
M2C_UNK render_tick__Fv();
M2C_UNK create_quad_sprites__13TParticleCtrlFv();
M2C_UNK load_floor_scene();
M2C_UNK TLobby__sub_8020A6B0(int);
M2C_UNK TLobby__sub_8020DC78();
M2C_UNK depart_floor_population();
M2C_UNK arrive_floor_population();
M2C_UNK update_lobby_subsystems__6TLobbyFv();
M2C_UNK stop_audio_streams__6TLobbyFv();
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK delete_all_task_children__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
M2C_UNK set_parent__7TObjectFP7TObject(void *, void *);
M2C_UNK __ct__7TObjectFP7TObject(void *, M2C_UNK);
extern RecoveredGlobal_801A4820_main_task main_task;
extern void *tl_03;
void reload_floor_scene__6TLobbyFv(void);
}

extern "C" {

void TLobby__sub_801A3CF8(void);
int TLobby__sub_801A3E8C(void);
void TLobby__sub_801A3E94(void);
void init_chr_select__6TLobbyFv(void);
void reset_to_chr_select__6TLobbyFv(void);
void send_and_handle__6TLobbyFPv(void* p);
void set_flag_and_update__6TLobbyFv(void);
int TKeyBoardControl__sub_8000F91C(int);
int TKeyBoardControl__sub_8000F95C(void);
int TKeyBoardControl__sub_8000F9CC(int);
int reset_controller_input_state(void);
int send_logout__6TLobbyFv(void);
int clear_counter__6TLobbyFv(void);
int init__23TAdSinglePlyChrSelectGCFv(void);
int reset__16TKeyBoardControlFv(void);

    extern unsigned char lbl_80515BA0[];
    extern int TLobby__new_game_setup_flags;
void set_flag_and_update__6TLobbyFv(void) { TLobby__new_game_setup_flags = (TLobby__new_game_setup_flags | 0x1); TLobby__sub_801A4C6C((void*)(lbl_80515BA0)); }

void init_chr_select__6TLobbyFv(void) { reset__16TKeyBoardControlFv(); send_logout__6TLobbyFv(); init__23TAdSinglePlyChrSelectGCFv(); TKeyBoardControl__sub_8000F91C(9); TKeyBoardControl__sub_8000F9CC(18); }
void reset_to_chr_select__6TLobbyFv(void) { reset_controller_input_state(); send_logout__6TLobbyFv(); free_objects__6TLobbyFv(); TKeyBoardControl__sub_8000F95C(); clear_counter__6TLobbyFv(); init__23TAdSinglePlyChrSelectGCFv(); TKeyBoardControl__sub_8000F91C(9); TKeyBoardControl__sub_8000F9CC(18); }
void TLobby__sub_801A3CF8(void) {  }

void start_udp_test_game__6TLobbyFv(void) {
    Msg_801A3CFC msg;
    bswap_udp_test_header__6TLobbyFPv((u8 *)&lobby_udp_test_game_entries[0]);
    bswap_udp_test_header__6TLobbyFPv((u8 *)&lobby_udp_test_game_entries[1]);
    construct_entry_array__6TLobbyFi((s32)&msg);
    memset(&msg, 0, 0x114);
    msg.f104 = lbl_805D53A0;
    msg.f105 = TLobby__data_805D53AC;
    msg.f106 = 0;
    msg.entries[0].f2 = 1;
    msg.entries[0].f4 = 0x013158B7;
    msg.entries[0].f8 = lobby_udp_test_game_entries[0].f4;
    msg.entries[0].fC = 0;
    strcpy(msg.entries[0].name, lbl_80446918);
    msg.entries[1].f2 = 1;
    msg.entries[1].f4 = 0x013158B8;
    msg.entries[1].f8 = lobby_udp_test_game_entries[1].f4;
    msg.entries[1].fC = 1;
    strcpy(msg.entries[1].name, lbl_80446924);
    handle_game_join__6TLobbyFPv(&msg);
    delete_children__7TObjectFv(lbl_805D5E48);
    open_udp_socket_for_player__6TLobbyFi(1 - lbl_805D53A0);
}

s32 construct_entry_array__6TLobbyFi(s32 arg0) {
    __construct_array((void *)(arg0 + 0x84), (void *)TLobby__sub_8013A23C, 0, 0x20, 4);
    return arg0;
}

void bswap_udp_test_header__6TLobbyFPv(u8 *arg0) {
    *(u32 *)(arg0 + 4) = arg0[0] + (arg0[1] << 8) + (arg0[2] << 16) + (arg0[3] << 24);
    bswap_32__FPUl(arg0 + 4);
}

int TLobby__sub_801A3E8C(void) { return 0; }
void TLobby__sub_801A3E94(void) {  }

void reload_lobby_floor_scene(void) {
    M2C_UNK sp8[9];
    __ct__7TObjectFP7TObject(sp8, 0);
    clear_counters__6TLobbyFv();
    reset_state_flags__6TLobbyFv();
    TObjPlayer__sub_801B1C8C();
    stop_audio_streams__6TLobbyFv();
    process_pending_resources();
    reset_controller_input_state();
    send_game_character__6TLobbyFv();
    render_tick__Fv();
    render_tick__Fv();
    find_leader_section_id(TLobby__data_805011D8, TLobby__data_805D53AC);
    free_objects__6TLobbyFv();
    delete_all_task_children__9TMainTaskFv(&main_task);
    clear_flag3_all_tasks__9TMainTaskFv(&main_task);
    promote_area_floor(lbl_80515BA0);
    reset_counter__6TLobbyFv();
    reset_story_select__6TLobbyFPv();
    get_team_state__6TLobbyFPv();
    TLobby__sub_8020DC78();
    update__16TKeyBoardControlFv();
    create_map_csn_ctrl__6TLobbyFv();
    create_quad_sprites__13TParticleCtrlFv();
    start_loading__9TLoadCtrlFUi(2);
    TLobby__sub_8020A6B0((int)(0xF));
    TLobby__sub_80141038(lbl_80515BA0, 0xF, TLobby__data_805D55B0);
    set_value__6TLobbyFPvi((void*)(lbl_80515BA0), (s32)(0));
    set_current_floor_area((int)(0xF));
    set_scene__6TSceneFi((int)(TLobby__data_805D55B0));
    load_area_scene_and_init(lbl_80515BA0);
    load_battle_param_entry();
    cleanup_scene__9TLoadCtrlFv();
    some_empty_func__9TMainTaskFv(&main_task);
    run_task__9TMainTaskFv(&main_task);
    render_screen_overlay__9TMainTaskFv(&main_task);
    TLobby__sub_801F494C(0);
    TLobby__sub_801A3E94();
    process_deferred_player_setup__6TLobbyFv();
    install_game_join_handlers__6TLobbyFv();
    TObjPlayer__sub_801B1BA4();
    send_room_change__6TLobbyFi(TLobby__data_805D55B0);
    init_key_slots__15TOKeyJungleMainFPv();
    TLobby__data_805D5CE8 = 0;
    __dt__7TObjectFv(sp8, -1);
}

void send_and_handle__6TLobbyFPv(void* p) { blocking_vsync__6TLobbyFPv((void*)(p)); }

typedef char RecoveredGlobal_801A400C_main_task_size[sizeof(RecoveredGlobal_801A400C_main_task) == 0x34 ? 1 : -1];
void blocking_vsync__6TLobbyFPv(void* _w0) {
    set_field1C__9TLoadCtrlFi((int) (0));
    func_803DCDFC__Fv();
    if ((s32) lbl_805D5718 != 0) {
        some_empty_func__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A400C_main_task *)&main_task).value));
        run_tl_camera_tasks__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A400C_main_task *)&main_task).value));
        render__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A400C_main_task *)&main_task).value));
        render_screen_overlay__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A400C_main_task *)&main_task).value));
        debug_print__FPCc((void *) (lbl_80446930));
        render_tick__Fv();
    } else {
        controller_stuff__Fv();
        update_input_frame__16TKeyBoardControlFv();
        some_empty_func__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A400C_main_task *)&main_task).value));
        run_task__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A400C_main_task *)&main_task).value));
        render__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A400C_main_task *)&main_task).value));
        render_screen_overlay__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A400C_main_task *)&main_task).value));
        TLobby__sub_800FA464();
        update_sound_request_slots();
        run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
        noop__23TAdSinglePlyChrSelectGCFv();
    }
    set_field1C__9TLoadCtrlFi((int) (1));
    render_tick__Fv();
}

void reload_floor_scene__6TLobbyFv(void) {
    Obj_801A40D8 sp8;
    s32 i;
    Pl_801A40D8 *p;
    s32 j;
    reset_state_flags__6TLobbyFv();
    TObjPlayer__sub_801B1C8C();
    stop_audio_streams__6TLobbyFv();
    update_lobby_subsystems__6TLobbyFv();
    __ct__7TObjectFP7TObject(&sp8, 0);
    process_pending_resources();
    reset_controller_input_state();
    render_tick__Fv();
    render_tick__Fv();
    for (i = 0; i < 12; i++) {
        p = (Pl_801A40D8 *)get_player_by_client_id(i);
        if (p != NULL) {
            set_parent__7TObjectFP7TObject(p, &sp8);
        }
    }
    delete_all_task_children__9TMainTaskFv(&main_task);
    update__16TKeyBoardControlFv();
    create_map_csn_ctrl__6TLobbyFv();
    create_quad_sprites__13TParticleCtrlFv();
    poll_default__9TLoadCtrlFv();
    load_floor_scene();
    init_area_lights();
    depart_floor_population();
    TLobby__sub_8020DC78();
    TLobby__sub_8020A6B0(0xF);
    arrive_floor_population();
    create_tasks__6TLobbyFv();
    cleanup_scene__9TLoadCtrlFv();
    some_empty_func__9TMainTaskFv(&main_task);
    run_task__9TMainTaskFv(&main_task);
    render_screen_overlay__9TMainTaskFv(&main_task);
    for (j = 0; j < 12; j++) {
        p = (Pl_801A40D8 *)get_player_by_client_id(j);
        if (p != NULL) {
            set_parent__7TObjectFP7TObject(p, tl_03);
            p->v6();
        }
    }
    process_deferred_player_setup__6TLobbyFv();
    TObjPlayer__sub_801B1BA4();
    create_controller__14TObjBgmColCtrlFv();
    __dt__7TObjectFv(&sp8, -1);
}

void free_objects__6TLobbyFv(void) {
    free_map_data__13TRaderMapCoreFv();
    clear_switch_table();
    apply_all_players__9TTecLukerFv();
    reset_floor_items__6TLobbyFv();
    enable_all_battle_ctrl__10TNpcPlayerFv();
    if ((u32) lbl_805D5EE8 != 0U) {
        queue_destruction__7TObjectFv(lbl_805D5EE8);
    }
    clear_enabled_main_warps();
    reset_quest_result_callbacks__22THunterGuildSeqOfflineFPv();
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

M2C_UNK start_quest_mission(void) {
    u8 tmp[0x1C];
    s32 i;
    s32 j;
    VObj_18_801A4268 *q;
    VObj_18_801A4268 *p;
    __ct__7TObjectFP7TObject(tmp, 0);
    reset_state_flags__6TLobbyFv();
    TObjPlayer__sub_801B1C8C();
    stop_audio_streams__6TLobbyFv();
    update_lobby_subsystems__6TLobbyFv();
    process_pending_resources();
    reset_controller_input_state();
    render_tick__Fv();
    render_tick__Fv();
    find_leader_section_id(TLobby__data_805011D8, TLobby__data_805D53AC);
    for (i = 0; i < 12; i++) {
        p = (VObj_18_801A4268 *) get_player_by_client_id(i);
        if (p != NULL) {
            set_parent__7TObjectFP7TObject(p, tmp);
        }
    }
    delete_all_task_children__9TMainTaskFv(&main_task.value);
    promote_area_floor(lbl_80515BA0);
    sync_story_select__6TLobbyFv();
    set_state__16TAdStorySelectGCFi(0);
    update__16TKeyBoardControlFv();
    free_objects__6TLobbyFv();
    get_team_state__6TLobbyFPv();
    TLobby__sub_8020DC78();
    clear_all_floor_handlers();
    create_map_csn_ctrl__6TLobbyFv();
    create_quad_sprites__13TParticleCtrlFv();
    start_loading__9TLoadCtrlFUi(1);
    create_by_mode__12TQuestThreadFv();
    clear_quest_floor_designations();
    if (lbl_805D5EE8 != 0) {
        q = (VObj_18_801A4268 *) __nw__7TObjectFUl(0x194);
        if (q != NULL) {
            q = (VObj_18_801A4268 *) __ct__12TQuestThreadFv(q, lbl_805D5EE8, 0);
        }
        q->m1();
    }
    setup_quest_list__6TLobbyFv();
    set_enemy_mode_flag__6TLobbyFv();
    ensure_online_quests_loaded__16TQuestListOnlineFv();
    load_area_scene_and_init(lbl_80515BA0);
    get_current_floor();
    unlock_main_warp_destination();
    cleanup_scene__9TLoadCtrlFv();
    some_empty_func__9TMainTaskFv(&main_task.value);
    run_task__9TMainTaskFv(&main_task.value);
    render_screen_overlay__9TMainTaskFv(&main_task.value);
    for (j = 0; j < 12; j++) {
        p = (VObj_18_801A4268 *) get_player_by_client_id(j);
        if (p != NULL) {
            set_parent__7TObjectFP7TObject(p, tl_03);
            p->m6();
        }
    }
    process_deferred_player_setup__6TLobbyFv();
    TObjPlayer__sub_801B1BA4();
    create_floor_quest_thread();
    __dt__7TObjectFv(tmp, -1);
}

M2C_UNK change_floor_reload_area(void) {
    u8 tmp[0x1C];
    s32 i;
    s32 j;
    s32 r;
    void *q;
    VObj_18_801A441C *p;
    __ct__7TObjectFP7TObject(tmp, 0);
    reset_state_flags__6TLobbyFv();
    TObjPlayer__sub_801B1C8C();
    stop_audio_streams__6TLobbyFv();
    process_pending_resources();
    reset_controller_input_state();
    render_tick__Fv();
    render_tick__Fv();
    find_leader_section_id(TLobby__data_805011D8, TLobby__data_805D53AC);
    for (i = 0; i < 12; i++) {
        p = (VObj_18_801A441C *) get_player_by_client_id(i);
        if (p != NULL) {
            set_parent__7TObjectFP7TObject(p, tmp);
        }
    }
    delete_all_task_children__9TMainTaskFv(&main_task.value);
    promote_area_floor(lbl_80515BA0);
    clear_ready_flag_unless_locked__6TLobbyFPv(lbl_80515BA0);
    update__16TKeyBoardControlFv();
    create_map_csn_ctrl__6TLobbyFv();
    create_quad_sprites__13TParticleCtrlFv();
    start_loading__9TLoadCtrlFUi(2);
    if (TLobby__new_game_setup_flags & 1) {
        TLobby__new_game_setup_flags &= ~1;
        init_limits__6TLobbyFv();
        TAdDialingGC__sub_801A4C90();
        TLobby__sub_80207E24(game_variations, 0x80);
        apply_phase_keyboard_mode();
        run_load_callback_table(&lobby_area_reload_callbacks.value, 0x48);
        reset_item_id_counters__6TLobbyFv();
        reset_floor_items__6TLobbyFv();
    }
    r = ((s32)load_area_scene_and_init(lbl_80515BA0));
    get_current_floor();
    unlock_main_warp_destination();
    cleanup_scene__9TLoadCtrlFv();
    some_empty_func__9TMainTaskFv(&main_task.value);
    run_task__9TMainTaskFv(&main_task.value);
    render_screen_overlay__9TMainTaskFv(&main_task.value);
    for (j = 0; j < 12; j++) {
        p = (VObj_18_801A441C *) get_player_by_client_id(j);
        if (p != NULL) {
            set_parent__7TObjectFP7TObject(p, tl_03);
            p->m6();
        }
    }
    if (r != 0) {
        TLobby__sub_801A3E94();
    }
    TObjPlayer__sub_801B1BA4();
    process_deferred_player_setup__6TLobbyFv();
    create_floor_quest_thread();
    if (r != 0) {
        TAdSinglePlyChrSelectGC__sub_801FF5E4(0);
    }
    if (lbl_805D5EEC != 0) {
        q = __nw__7TObjectFUl(0x194);
        if (q != NULL) {
            __ct__12TQuestThreadFv(q, lbl_805D5EEC, 0);
        }
    }
    if (is_area_transfer_pending() != 0) {
        reset_keyboard_state__6TLobbyFv();
        clear_callback_and_reset_keyboard__6TLobbyFv();
    }
    clear_callback_and_reset_keyboard__6TLobbyFv();
    __dt__7TObjectFv(tmp, -1);
}

void cleanup_online_lobby_scene(void) {
    M2C_UNK *var_r3;
    s32 var_r31;
    s32 var_r4;
    stop_audio_streams__6TLobbyFv();
    update_lobby_subsystems__6TLobbyFv();
    send_logout__6TLobbyFv();
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
        run_area_scene_cleanup((void *) (&(*(RecoveredGlobal_801A4610_lbl_80515BA0 *)&lbl_80515BA0).value));
    }
    free_single_player_chr_select__6TLobbyFv();
    update_photon_chairs__6TLobbyFv();
    var_r3 = (M2C_UNK *)(&lobby_area_reload_callbacks.value);
    var_r4 = 0x48;
    var_r3 = (M2C_UNK *)(&lobby_area_reload_callbacks.value);
    call_funcs_reverse__6TLobbyFPvUi((void *) (&lobby_area_reload_callbacks.value), (int) (0x48));
    var_r3 = (M2C_UNK *)(&online_lobby_scene_callback_table.value);
    var_r4 = 0x158;
    var_r3 = (M2C_UNK *)(&online_lobby_scene_callback_table.value);
    call_funcs_reverse__6TLobbyFPvUi((void *) (&online_lobby_scene_callback_table.value), (int) (0x158));
    lbl_805D53A0 = 0;
    TLobby__data_805D5E24 = 0;
    clear_resource_load_tasks();
    update__16TKeyBoardControlFv();
    render_tick__Fv();
}

void run_lobby_frame__6TLobbyFv(void) {
    s32 temp_r0;
    func_803DCDFC__Fv();
    controller_stuff__Fv();
    update_input_frame__16TKeyBoardControlFv();
    some_empty_func__9TMainTaskFv((void *) (&main_task.value));
    run_task__9TMainTaskFv((void *) (&main_task.value));
    render_shadows__9TMainTaskFv((void *) (&main_task.value));
    render__9TMainTaskFv((void *) (&main_task.value));
    render_screen_overlay__9TMainTaskFv((void *) (&main_task.value));
    TLobby__sub_800FA464();
    update_sound_request_slots();
    run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
    noop__23TAdSinglePlyChrSelectGCFv();
    TObjBoss2Tunnel__sub_8007D1D0();
    if (((s32) lbl_805D55C0 == 0) && (TAdPlayerLoadGC__sub_801E1B50((int) (get_chr_select_state__23TAdSinglePlyChrSelectGCFv())) != -1)) {
        if (probe_card_slot__15TAdPlayerLoadGCFi((int) (get_chr_select_state__23TAdSinglePlyChrSelectGCFv())) != 0) {
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
        send_logout__6TLobbyFv();
        TKeyBoardControl__sub_8000F9CC((int) (0));
    }
    if (get_key_state__16TKeyBoardControlFv() != 0) {
        change_floor_reload_area();
        TKeyBoardControl__sub_8000F9A4();
    }
    if (TKeyBoardControl__sub_8000F968() != 0) {
        reload_floor_scene__6TLobbyFv();
        TKeyBoardControl__sub_8000F984();
    }
    if (get_input__16TKeyBoardControlFv() != 0) {
        reload_lobby_floor_scene();
        TKeyBoardControl__sub_8000F95C();
    }
    render_tick__Fv();
}

void run_main_frame__6TLobbyFv(void) {
    s32 temp_r0;
    func_803DCDFC__Fv();
    controller_stuff__Fv();
    update_input_frame__16TKeyBoardControlFv();
    some_empty_func__9TMainTaskFv((void *) (&main_task.value));
    run_task__9TMainTaskFv((void *) (&main_task.value));
    render_shadows__9TMainTaskFv((void *) (&main_task.value));
    render__9TMainTaskFv((void *) (&main_task.value));
    render_screen_overlay__9TMainTaskFv((void *) (&main_task.value));
    TLobby__sub_800FA464();
    update_sound_request_slots();
    run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
    noop__23TAdSinglePlyChrSelectGCFv();
    TObjBoss2Tunnel__sub_8007D1D0();
    TLobby__sub_8006EF90();
    if (((s32) lbl_805D55C0 == 0) && (TAdPlayerLoadGC__sub_801E1B50((int) (get_chr_select_state__23TAdSinglePlyChrSelectGCFv())) != -1)) {
        if (probe_card_slot__15TAdPlayerLoadGCFi((int) (get_chr_select_state__23TAdSinglePlyChrSelectGCFv())) != 0) {
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
        start_quest_mission();
        TKeyBoardControl__sub_8000F95C();
    }
    if (get_key_state__16TKeyBoardControlFv() != 0) {
        change_floor_reload_area();
        TKeyBoardControl__sub_8000F9A4();
    }
    if (TKeyBoardControl__sub_8000F968() != 0) {
        reload_floor_scene__6TLobbyFv();
        TKeyBoardControl__sub_8000F984();
    }
    if ((s16) TLobby__data_805D5CE8 == 1) {
        reload_lobby_floor_scene();
    }
    if ((func_801A5E54__Fv() != 0) || ((s32) TLobby__data_805D55A8 == 1)) {
        init_chr_select__6TLobbyFv();
    }
    if (is_ready__22TQuestVmDownLoadServerFv() != 0) {
        send_logout__6TLobbyFv();
        TKeyBoardControl__sub_8000F9CC((int) (0));
    }
    render_tick__Fv();
}

void update_camera_state__6TLobbyFv(void) {
    if (is_quest_active() != 0) {
        run_lobby_frame__6TLobbyFv();
        return;
    }
    run_main_frame__6TLobbyFv();
}

void run_online_lobby_scene(void) {
    void *lobby;
    void *p;
    TLobby__new_game_setup_flags = 0;
    TLobby__data_805D5E24 = 0;
    set_copy_clear_color_argb(0, 0, 0);
    update__16TKeyBoardControlFv();
    TLobby__sub_801F3774();
    reset_controller_input_state();
    TKeyBoardControl__sub_8000F9A4();
    TKeyBoardControl__sub_8000F90C(2);
    TKeyBoardControl__sub_8000F91C(0xF);
    clear_resource_load_tasks();
    create_map_csn_ctrl__6TLobbyFv();
    create_quad_sprites__13TParticleCtrlFv();
    poll_default__9TLoadCtrlFv();
    reset_keyboard_state__6TLobbyFv();
    apply_phase_keyboard_mode();
    run_load_callback_table((void *)(&online_lobby_scene_callback_table.value), (M2C_UNK)(0x158));
    if (is_area_transfer_pending() != 0) {
        reset_keyboard_state__6TLobbyFv();
        invoke_callback__6TLobbyFv();
        clear_callback_and_reset_keyboard__6TLobbyFv();
        cleanup_scene__9TLoadCtrlFv();
        return;
    }
    clear_callback_and_reset_keyboard__6TLobbyFv();
    TLobby__sub_80207F10();
    TLobby__sub_8020A6B0(0xF);
    open__12TAdDialingGCFv();
    create__12TAdDialingGCFv(tl_window);
    lbl_805D5CF0 = TLobby__sub_80146908();
    TAdDialingGC__sub_80328730();
    set_field1C__9TLoadCtrlFi(0);
    while (TAdDialingGC__sub_801A4C9C() != 0) {
        func_803DCDFC__Fv();
        controller_stuff__Fv();
        update_input_frame__16TKeyBoardControlFv();
        some_empty_func__9TMainTaskFv(&main_task.value);
        run_task__9TMainTaskFv(&main_task.value);
        render__9TMainTaskFv(&main_task.value);
        render_screen_overlay__9TMainTaskFv(&main_task.value);
        TLobby__sub_800FA464();
        update_sound_request_slots();
        run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
        if (func_801A5E54__Fv() != 0) {
            break;
        }
        render_tick__Fv();
    }
    set_field1C__9TLoadCtrlFi(1);
    close__12TAdDialingGCFv();
    if (lbl_805D5CF0 != 0) {
        init__23TAdSinglePlyChrSelectGCFv();
        TKeyBoardControl__sub_8000F91C(2);
        TKeyBoardControl__sub_8000F9CC(0x12);
        cleanup_scene__9TLoadCtrlFv();
    } else {
        lobby = __nw__7TObjectFUl((M2C_UNK)(0x1C));
        if (lobby != NULL) {
            lobby = TLobby__ct(lobby, tl_su);
        }
        p = __nw__7TObjectFUl((M2C_UNK)(0x20));
        if (p != NULL) {
            TGameProtocol__ct(p, tl_su);
        }
        TLobby__sub_801A3CF8();
        reset_state_flags__6TLobbyFv();
        if (TLobby__sub_801A3E8C() != 0) {
            load_set_gsl_files__6TLobbyFv();
            init_range__6TLobbyFPvi(lbl_80515BA0, 0);
        } else {
            init_range__6TLobbyFPvi(lbl_80515BA0, 0xF);
            set_value__6TLobbyFPvi((void*)(lbl_80515BA0), (s32)(0));
            set_current_floor_area(0xF);
            set_scene__6TSceneFi(0);
        }
        load_area_scene_and_init(lbl_80515BA0);
        cleanup_scene__9TLoadCtrlFv();
        process_deferred_player_setup__6TLobbyFv();
        some_empty_func__9TMainTaskFv(&main_task.value);
        run_task__9TMainTaskFv(&main_task.value);
        render_screen_overlay__9TMainTaskFv(&main_task.value);
        if (TLobby__sub_801A3E8C() != 0) {
            start_udp_test_game__6TLobbyFv();
        } else {
            TLobby__sub_801399B8(lobby);
        }
    }
    lbl_805D53A4 = 0;
    TLobby__data_805D5CE8 = 0;
    TLobby__data_805D5CF4 = 0;
    render_tick__Fv();
}

void update_periodic_tick__6TLobbyFv(void) {
    if ((TLobby__data_805D5E24 & 1) && ((lbl_805D53A4 % 900) == 0) && ((u32) TLobby__data_805D5580 != 0U)) {
        send_keepalive((void*)TLobby__data_805D5580);
    }
}
void TLobby__sub_801A4C6C(void* p) { *(u32*)((char*)p + 0x20) |= 0x1; }
void set_value__6TLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0xc) = v; }
void reset_counter__6TLobbyFv(void) { lbl_805D4E2C = 0; }

}
