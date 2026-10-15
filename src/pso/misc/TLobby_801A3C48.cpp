#include "types.h"
#include "pso/misc/TLobby.h"

struct RecoveredGlobal_801A4820_main_task { s32 value; u8 remaining[0x30]; };
typedef char RecoveredGlobal_801A4820_main_task_size[sizeof(RecoveredGlobal_801A4820_main_task) == 0x34 ? 1 : -1];

struct RecoveredGlobal_801A46D8_main_task { s32 value; u8 remaining[0x30]; };
typedef char RecoveredGlobal_801A46D8_main_task_size[sizeof(RecoveredGlobal_801A46D8_main_task) == 0x34 ? 1 : -1];

struct RecoveredGlobal_801A4610_lbl_804C20E8 {
    s32 value;
    u8 remaining[0x154];
};

struct RecoveredGlobal_801A4610_lbl_804C2240 {
    s32 value;
    u8 remaining[0x44];
};

struct RecoveredGlobal_801A4610_lbl_80515BA0 {
    s32 value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_801A4610_main_task {
    s32 value;
    u8 remaining[0x30];
};

struct RecoveredGlobal_801A400C_main_task {
    s32 value;
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
s32 reset_quest_result_callbacks__22THunterGuildSeqOfflineFPv();
s32 reset_floor_items__6TLobbyFv();
s32 clear_enabled_main_warps();
s32 free_map_data__13TRaderMapCoreFv();
s32 clear_switch_table();
s32 apply_all_players__9TTecLukerFv();
int clear_counter__6TLobbyFv(void);
s32 clear_quest_state__6TLobbyFv();
void enable_all_battle_ctrl__10TNpcPlayerFv();
s32 queue_destruction__7TObjectFv(u32);
s32 reset_door_state__6TLobbyFv();
s32 reset_instance__8TObjDoorFv();
s32 reset_quest_counter__6TLobbyFv();
s32 set_cleanup_flag__6TLobbyFv();
extern u32 quest_mission_manager;
s32 is_quest_active();
s32 send_keepalive(void*);
extern s32 actor_frame_tick;
extern u32 TLobby__protocol_instance;
extern s32 TLobby__lobby_state_flags;
void TLobby__sub_801A4C6C(void* p);
    extern int challenge_task_created;
s32 get_input__16TKeyBoardControlFv();
int TKeyBoardControl__sub_8000F95C(void);
s32 is_keyboard_active();
s32 deactivate_keyboard();
s32 get_key_state__16TKeyBoardControlFv();
s32 clear_keyboard_key_state();
int TKeyBoardControl__sub_8000F9CC(int);
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
s32 TLobby__sub_8006EF90();
s32 TObjBoss2Tunnel__sub_8007D1D0();
s32 is_ready__22TQuestVmDownLoadServerFv();
s32 process_async_file_reads();
s32 disconnect_protocol__6TLobbyFv();
int send_logout__6TLobbyFv(void);
s8 func_801A5E54__Fv();
s32 update_input_frame__16TKeyBoardControlFv();
s32 controller_stuff__Fv();
s32 TAdPlayerLoadGC__sub_801E1B50(int);
s32 probe_card_slot__15TAdPlayerLoadGCFv(int);
s32 render_tick__Fv();
s32 run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
s32 update_sound_request_slots();
s32 render_screen_overlay__9TMainTaskFv(void *);
s32 some_empty_func__9TMainTaskFv(void *);
s32 render__9TMainTaskFv(void *);
s32 run_task__9TMainTaskFv(void *);
s32 render_shadows__9TMainTaskFv(void *);
s32 noop__23TAdSinglePlyChrSelectGCFv();
s32 func_803DCDFC__Fv();
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 TLobby__idle_timeout_active;
extern s32 lbl_805D55C0;
extern s16 TLobby__data_805D5CE8;
extern s32 TLobby__online_lobby_frame_counter;
s32 get_input__16TKeyBoardControlFv();
int TKeyBoardControl__sub_8000F95C(void);
s32 is_keyboard_active();
s32 deactivate_keyboard();
s32 get_key_state__16TKeyBoardControlFv();
s32 clear_keyboard_key_state();
int TKeyBoardControl__sub_8000F9CC(int);
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
s32 TObjBoss2Tunnel__sub_8007D1D0();
s32 is_ready__22TQuestVmDownLoadServerFv();
s32 process_async_file_reads();
s32 disconnect_protocol__6TLobbyFv();
int send_logout__6TLobbyFv(void);
s8 func_801A5E54__Fv();
s32 update_input_frame__16TKeyBoardControlFv();
s32 controller_stuff__Fv();
s32 TAdPlayerLoadGC__sub_801E1B50(int);
s32 probe_card_slot__15TAdPlayerLoadGCFv(int);
s32 render_tick__Fv();
s32 run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
s32 update_sound_request_slots();
s32 render_screen_overlay__9TMainTaskFv(void *);
s32 some_empty_func__9TMainTaskFv(void *);
s32 render__9TMainTaskFv(void *);
s32 run_task__9TMainTaskFv(void *);
s32 render_shadows__9TMainTaskFv(void *);
s32 noop__23TAdSinglePlyChrSelectGCFv();
s32 func_803DCDFC__Fv();
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 TLobby__idle_timeout_active;
extern s32 lbl_805D55C0;
extern s32 TLobby__online_lobby_frame_counter;
s32 update__16TKeyBoardControlFv();
s32 clear_resource_load_tasks();
s32 call_funcs_reverse__6TLobbyFPvUi(void *, int);
int send_logout__6TLobbyFv(void);
s32 cleanup__6TLobbyFv();
s32 render_tick__Fv();
s32 update_lobby_subsystems__6TLobbyFv();
s32 stop_audio_streams__6TLobbyFv();
s32 run_area_scene_cleanup(void *);
s32 clear_flag3_all_tasks__9TMainTaskFv(void *);
s32 delete_all_task_children__9TMainTaskFv(void *);
s32 delete_children__7TObjectFv(int);
s32 free_single_player_chr_select__6TLobbyFv();
s32 update_photon_chairs__6TLobbyFv();
s32 PPCSync();
extern RecoveredGlobal_801A4610_lbl_804C20E8 online_lobby_scene_callback_table;
extern RecoveredGlobal_801A4610_lbl_804C2240 lobby_area_reload_callbacks;
extern unsigned char lbl_80515BA0[];
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 local_client_id;
extern s32 online_lobby_scene_handle;
extern s32 TLobby__lobby_state_flags;
extern s32 *tl_su;
void cleanup_online_lobby_scene(void);
s32 set_field1C__9TLoadCtrlFl(int);
s32 debug_print__FPCc(void *);
s32 process_async_file_reads();
s32 update_input_frame__16TKeyBoardControlFv();
s32 controller_stuff__Fv();
s32 render_tick__Fv();
s32 run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
s32 update_sound_request_slots();
s32 render_screen_overlay__9TMainTaskFv(void *);
s32 some_empty_func__9TMainTaskFv(void *);
s32 run_tl_camera_tasks__9TMainTaskFv(void *);
s32 render__9TMainTaskFv(void *);
s32 run_task__9TMainTaskFv(void *);
s32 noop__23TAdSinglePlyChrSelectGCFv();
s32 func_803DCDFC__Fv();
extern s32 lbl_80446930[];
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 lbl_805D5718;
void __construct_array(void *, void *, int, int, int);
void TLobby__sub_8013A23C(void);
void bswap_32__FPUl(void *);
s32 open_udp_socket_for_player__6TLobbyFv(s32);
s32 handle_game_join__6TLobbyFPv(void *);
s32 delete_children__7TObjectFv(int);
char *strcpy(char *, const char *);
void *memset(void *, int, u32);
extern char lbl_80446918[];
extern char lbl_80446924[];
extern Pair_801A3CFC lobby_udp_test_game_entries[];
extern s32 local_client_id;
extern s32 TLobby__designated_client_id;
extern s32 game_protocol_instance;
s32 __dt__7TObjectFv(void *, s32);
s32 update__16TKeyBoardControlFv();
s32 get_current_floor();
s32 cleanup_scene__9TLoadCtrlFv();
s32 start_loading__9TLoadCtrlFUl(s32);
s32 set_enemy_mode_flag__6TLobbyFv();
s32 process_pending_resources();
s32 find_leader_section_id(void *, s32);
s32 process_deferred_player_setup__6TLobbyFv();
s32 reset_state_flags__6TLobbyFv();
s32 create_map_csn_ctrl__6TLobbyFv();
s32 unlock_main_warp_destination();
int reset_controller_input_state(void);
s32 TObjPlayer__sub_801B1BA4();
s32 TObjPlayer__sub_801B1C8C();
void *get_player_by_client_id(s32);
s32 render_tick__Fv();
s32 create_quad_sprites__13TParticleCtrlFv();
s32 clear_quest_floor_designations();
s32 setup_quest_list__6TLobbyFv();
s32 create_floor_quest_thread();
void *__ct__12TQuestThreadFv(void *, u32, s32);
s32 clear_all_floor_handlers();
s32 create_by_mode__12TQuestThreadFv();
s32 sync_story_select__6TLobbyFv();
s32 set_state__16TAdStorySelectGCFl(s32);
s32 get_team_state__6TLobbyFPv();
s32 TLobby__sub_8020DC78();
s32 ensure_online_quests_loaded__16TQuestListOnlineFv();
s32 update_lobby_subsystems__6TLobbyFv();
s32 stop_audio_streams__6TLobbyFv();
s32 load_area_scene_and_init(void *);
s32 promote_area_floor(void *);
s32 render_screen_overlay__9TMainTaskFv(void *);
s32 some_empty_func__9TMainTaskFv(void *);
s32 delete_all_task_children__9TMainTaskFv(void *);
s32 run_task__9TMainTaskFv(void *);
void *__nw__7TObjectFUl(s32);
s32 set_parent__7TObjectFP7TObject(void *, void *);
s32 __ct__7TObjectFP7TObject(void *, s32);
extern u8 TLobby__data_805011D8[];
extern unsigned char lbl_80515BA0[];
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 TLobby__designated_client_id;
extern u32 quest_mission_manager;
extern void *tl_03;
s32 start_quest_mission(void);
s32 __dt__7TObjectFv(void *, s32);
s32 update__16TKeyBoardControlFv();
s32 get_current_floor();
s32 cleanup_scene__9TLoadCtrlFv();
s32 start_loading__9TLoadCtrlFUl(s32);
s32 reset_keyboard_state__6TLobbyFv();
s32 is_area_transfer_pending();
s32 clear_callback_and_reset_keyboard__6TLobbyFv();
s32 apply_phase_keyboard_mode();
s32 process_pending_resources();
s32 find_leader_section_id(void *, s32);
s32 run_load_callback_table(void *, s32);
s32 reset_floor_items__6TLobbyFv();
s32 reset_item_id_counters__6TLobbyFv();
s32 process_deferred_player_setup__6TLobbyFv();
s32 reset_state_flags__6TLobbyFv();
s32 create_map_csn_ctrl__6TLobbyFv();
s32 unlock_main_warp_destination();
s32 init_limits__6TLobbyFv();
void TLobby__sub_801A3E94(void);
s32 TAdDialingGC__sub_801A4C90();
int reset_controller_input_state(void);
s32 TObjPlayer__sub_801B1BA4();
s32 TObjPlayer__sub_801B1C8C();
void *get_player_by_client_id(s32);
s32 render_tick__Fv();
s32 create_quad_sprites__13TParticleCtrlFv();
s32 create_floor_quest_thread();
void *__ct__12TQuestThreadFv(void *, u32, s32);
s32 load_character_from_card__23TAdSinglePlyChrSelectGCFi(s32);
s32 TLobby__sub_80207E24(void *, s32);
s32 stop_audio_streams__6TLobbyFv();
s32 clear_ready_flag_unless_locked__6TLobbyFv(void *);
s32 load_area_scene_and_init(void *);
s32 promote_area_floor(void *);
s32 render_screen_overlay__9TMainTaskFv(void *);
s32 some_empty_func__9TMainTaskFv(void *);
s32 delete_all_task_children__9TMainTaskFv(void *);
s32 run_task__9TMainTaskFv(void *);
void *__nw__7TObjectFUl(s32);
s32 set_parent__7TObjectFP7TObject(void *, void *);
s32 __ct__7TObjectFP7TObject(void *, s32);
extern RecoveredGlobal_801A4610_lbl_804C2240 lobby_area_reload_callbacks;
extern u8 TLobby__data_805011D8[];
extern u8 game_variations[];
extern unsigned char lbl_80515BA0[];
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 TLobby__designated_client_id;
extern int TLobby__new_game_setup_flags;
extern u32 quest_area_manager;
extern void *tl_03;
s32 change_floor_reload_area(void);
s32 update__16TKeyBoardControlFv();
s32 TKeyBoardControl__sub_8000F90C(int);
int TKeyBoardControl__sub_8000F91C(int);
s32 clear_keyboard_key_state();
int TKeyBoardControl__sub_8000F9CC(int);
s32 set_field1C__9TLoadCtrlFl(int);
s32 cleanup_scene__9TLoadCtrlFv();
s32 poll_default__9TLoadCtrlFv();
s32 reset_keyboard_state__6TLobbyFv();
s32 is_area_transfer_pending();
s32 clear_callback_and_reset_keyboard__6TLobbyFv();
s32 apply_phase_keyboard_mode();
s32 invoke_callback__6TLobbyFv();
s32 clear_resource_load_tasks();
s32 process_async_file_reads();
s32 run_load_callback_table(void *, s32);
s32 init_range__6TLobbyFl(void *, int);
s32 process_deferred_player_setup__6TLobbyFv();
s32 reset_state_flags__6TLobbyFv();
s32 run_join_lobby_connect__6TLobbyFi(void *);
void *TLobby__ct(void *, void *);
s32 create_map_csn_ctrl__6TLobbyFv();
s32 TLobby__sub_80146908();
s32 set_scene__6TSceneFi(int);
void TLobby__sub_801A3CF8(void);
int TLobby__sub_801A3E8C(void);
u32 TAdDialingGC__sub_801A4C9C();
s8 func_801A5E54__Fv();
s32 update_input_frame__16TKeyBoardControlFv();
s32 controller_stuff__Fv();
int reset_controller_input_state(void);
s32 set_copy_clear_color_argb(int, int, int);
s32 render_tick__Fv();
s32 TGameProtocol__ct(void *, void *);
s32 create_quad_sprites__13TParticleCtrlFv();
s32 TLobby__sub_801F3774();
int init__23TAdSinglePlyChrSelectGCFv(void);
s32 run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
s32 set_current_floor_area(int);
s32 TLobby__sub_80207F10();
s32 TLobby__sub_8020A6B0(int);
s32 load_set_gsl_files__6TLobbyFv();
s32 update_sound_request_slots();
s32 load_area_scene_and_init(void *);
s32 render_screen_overlay__9TMainTaskFv(void *);
s32 some_empty_func__9TMainTaskFv(void *);
s32 render__9TMainTaskFv(void *);
s32 run_task__9TMainTaskFv(void *);
void *__nw__7TObjectFUl(s32);
s32 TAdDialingGC__sub_80328730();
s32 create__12TAdDialingGCFv(void *);
s32 close__12TAdDialingGCFv();
s32 open__12TAdDialingGCFv();
s32 func_803DCDFC__Fv();
extern RecoveredGlobal_801A4610_lbl_804C20E8 online_lobby_scene_callback_table;
extern unsigned char lbl_80515BA0[];
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 actor_frame_tick;
extern s16 TLobby__data_805D5CE8;
extern int TLobby__new_game_setup_flags;
extern s32 online_lobby_scene_handle;
extern s32 TLobby__online_lobby_frame_counter;
extern s32 TLobby__lobby_state_flags;
extern s32 *tl_su;
extern void *tl_window;
void run_online_lobby_scene(void);
s32 __dt__7TObjectFv(void *, s32);
s32 update__16TKeyBoardControlFv();
s32 cleanup_scene__9TLoadCtrlFv();
s32 start_loading__9TLoadCtrlFUl(s32);
s32 load_battle_param_entry();
s32 process_pending_resources();
s32 find_leader_section_id(void *, s32);
s32 install_game_join_handlers__6TLobbyFv();
s32 clear_counters__6TLobbyFv();
s32 send_game_character__6TLobbyFv();
s32 process_deferred_player_setup__6TLobbyFv();
s32 reset_state_flags__6TLobbyFv();
s32 send_room_change__6TLobbyFi(s32);
s32 create_map_csn_ctrl__6TLobbyFv();
s32 TLobby__sub_80141038(void *, s32, s32);
s32 set_scene__6TSceneFi(int);
void TLobby__sub_801A3E94(void);
int reset_controller_input_state(void);
s32 TObjPlayer__sub_801B1BA4();
s32 TObjPlayer__sub_801B1C8C();
s32 render_tick__Fv();
s32 create_quad_sprites__13TParticleCtrlFv();
s32 TLobby__sub_801F494C(s32);
s32 set_current_floor_area(int);
s32 reset_story_select__6TLobbyFPv();
s32 get_team_state__6TLobbyFPv();
s32 TLobby__sub_8020A6B0(int);
s32 TLobby__sub_8020DC78();
s32 stop_audio_streams__6TLobbyFv();
s32 load_area_scene_and_init(void *);
s32 promote_area_floor(void *);
s32 render_screen_overlay__9TMainTaskFv(void *);
s32 some_empty_func__9TMainTaskFv(void *);
s32 clear_flag3_all_tasks__9TMainTaskFv(void *);
s32 delete_all_task_children__9TMainTaskFv(void *);
s32 run_task__9TMainTaskFv(void *);
s32 __ct__7TObjectFP7TObject(void *, s32);
s32 init_key_slots__15TOKeyJungleMainFPv();
extern u8 TLobby__data_805011D8[];
extern unsigned char lbl_80515BA0[];
extern RecoveredGlobal_801A4820_main_task main_task;
extern s32 TLobby__designated_client_id;
extern s32 TLobby__lobby_number;
extern s16 TLobby__data_805D5CE8;
void reload_lobby_floor_scene(void);
s32 __dt__7TObjectFv(void *, s32);
s32 update__16TKeyBoardControlFv();
s32 cleanup_scene__9TLoadCtrlFv();
s32 poll_default__9TLoadCtrlFv();
s32 create_tasks__6TLobbyFv();
s32 process_pending_resources();
s32 init_area_lights();
s32 process_deferred_player_setup__6TLobbyFv();
s32 reset_state_flags__6TLobbyFv();
s32 create_map_csn_ctrl__6TLobbyFv();
s32 create_controller__14TObjBgmColCtrlFv();
int reset_controller_input_state(void);
s32 TObjPlayer__sub_801B1BA4();
s32 TObjPlayer__sub_801B1C8C();
void *get_player_by_client_id(s32);
s32 render_tick__Fv();
s32 create_quad_sprites__13TParticleCtrlFv();
s32 load_floor_scene();
s32 TLobby__sub_8020A6B0(int);
s32 TLobby__sub_8020DC78();
s32 depart_floor_population();
s32 arrive_floor_population();
s32 update_lobby_subsystems__6TLobbyFv();
s32 stop_audio_streams__6TLobbyFv();
s32 render_screen_overlay__9TMainTaskFv(void *);
s32 some_empty_func__9TMainTaskFv(void *);
s32 delete_all_task_children__9TMainTaskFv(void *);
s32 run_task__9TMainTaskFv(void *);
s32 set_parent__7TObjectFP7TObject(void *, void *);
s32 __ct__7TObjectFP7TObject(void *, s32);
extern RecoveredGlobal_801A4820_main_task main_task;
extern void *tl_03;
}

extern "C" {

void TLobby__sub_801A3CF8(void);
int TLobby__sub_801A3E8C(void);
void TLobby__sub_801A3E94(void);
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
void TLobby::set_flag_and_update() { TLobby__new_game_setup_flags = (TLobby__new_game_setup_flags | 0x1); TLobby__sub_801A4C6C((void*)(lbl_80515BA0)); }

void TLobby::init_chr_select() { reset__16TKeyBoardControlFv(); send_logout__6TLobbyFv(); init__23TAdSinglePlyChrSelectGCFv(); TKeyBoardControl__sub_8000F91C(9); TKeyBoardControl__sub_8000F9CC(18); }
void TLobby::reset_to_chr_select() { reset_controller_input_state(); send_logout__6TLobbyFv(); TLobby::free_objects(); TKeyBoardControl__sub_8000F95C(); clear_counter__6TLobbyFv(); init__23TAdSinglePlyChrSelectGCFv(); TKeyBoardControl__sub_8000F91C(9); TKeyBoardControl__sub_8000F9CC(18); }
void TLobby__sub_801A3CF8(void) {  }

void TLobby::start_udp_test_game() {
    Msg_801A3CFC msg;
    ((TLobby *)((u8 *)&lobby_udp_test_game_entries[0]))->bswap_udp_test_header();
    ((TLobby *)((u8 *)&lobby_udp_test_game_entries[1]))->bswap_udp_test_header();
    ((TLobby *)((s32)&msg))->construct_entry_array();
    memset(&msg, 0, 0x114);
    msg.f104 = local_client_id;
    msg.f105 = TLobby__designated_client_id;
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
    delete_children__7TObjectFv(game_protocol_instance);
    open_udp_socket_for_player__6TLobbyFv(1 - local_client_id);
}

s32 TLobby::construct_entry_array() {
    s32 arg0 = (s32)this;
    __construct_array((void *)(arg0 + 0x84), (void *)TLobby__sub_8013A23C, 0, 0x20, 4);
    return arg0;
}

void TLobby::bswap_udp_test_header() {
    u8 *arg0 = (u8 *)this;
    *(u32 *)(arg0 + 4) = arg0[0] + (arg0[1] << 8) + (arg0[2] << 16) + (arg0[3] << 24);
    bswap_32__FPUl(arg0 + 4);
}

int TLobby__sub_801A3E8C(void) { return 0; }
void TLobby__sub_801A3E94(void) {  }

void reload_lobby_floor_scene(void) {
    s32 sp8[9];
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
    find_leader_section_id(TLobby__data_805011D8, TLobby__designated_client_id);
    TLobby::free_objects();
    delete_all_task_children__9TMainTaskFv(&main_task);
    clear_flag3_all_tasks__9TMainTaskFv(&main_task);
    promote_area_floor(lbl_80515BA0);
    TLobby::reset_counter();
    reset_story_select__6TLobbyFPv();
    get_team_state__6TLobbyFPv();
    TLobby__sub_8020DC78();
    update__16TKeyBoardControlFv();
    create_map_csn_ctrl__6TLobbyFv();
    create_quad_sprites__13TParticleCtrlFv();
    start_loading__9TLoadCtrlFUl(2);
    TLobby__sub_8020A6B0((int)(0xF));
    TLobby__sub_80141038(lbl_80515BA0, 0xF, TLobby__lobby_number);
    ((TLobby *)lbl_80515BA0)->set_value((s32)(0));
    set_current_floor_area((int)(0xF));
    set_scene__6TSceneFi((int)(TLobby__lobby_number));
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
    send_room_change__6TLobbyFi(TLobby__lobby_number);
    init_key_slots__15TOKeyJungleMainFPv();
    TLobby__data_805D5CE8 = 0;
    __dt__7TObjectFv(sp8, -1);
}

void TLobby::send_and_handle() { TLobby::blocking_vsync((void*)(this)); }

typedef char RecoveredGlobal_801A400C_main_task_size[sizeof(RecoveredGlobal_801A400C_main_task) == 0x34 ? 1 : -1];
void TLobby::blocking_vsync(void* _w0) {
    set_field1C__9TLoadCtrlFl((int) (0));
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
        process_async_file_reads();
        update_sound_request_slots();
        run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
        noop__23TAdSinglePlyChrSelectGCFv();
    }
    set_field1C__9TLoadCtrlFl((int) (1));
    render_tick__Fv();
}

void TLobby::reload_floor_scene() {
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

void TLobby::free_objects() {
    free_map_data__13TRaderMapCoreFv();
    clear_switch_table();
    apply_all_players__9TTecLukerFv();
    reset_floor_items__6TLobbyFv();
    enable_all_battle_ctrl__10TNpcPlayerFv();
    if ((u32) quest_mission_manager != 0U) {
        queue_destruction__7TObjectFv(quest_mission_manager);
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

s32 start_quest_mission(void) {
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
    find_leader_section_id(TLobby__data_805011D8, TLobby__designated_client_id);
    for (i = 0; i < 12; i++) {
        p = (VObj_18_801A4268 *) get_player_by_client_id(i);
        if (p != NULL) {
            set_parent__7TObjectFP7TObject(p, tmp);
        }
    }
    delete_all_task_children__9TMainTaskFv(&main_task.value);
    promote_area_floor(lbl_80515BA0);
    sync_story_select__6TLobbyFv();
    set_state__16TAdStorySelectGCFl(0);
    update__16TKeyBoardControlFv();
    TLobby::free_objects();
    get_team_state__6TLobbyFPv();
    TLobby__sub_8020DC78();
    clear_all_floor_handlers();
    create_map_csn_ctrl__6TLobbyFv();
    create_quad_sprites__13TParticleCtrlFv();
    start_loading__9TLoadCtrlFUl(1);
    create_by_mode__12TQuestThreadFv();
    clear_quest_floor_designations();
    if (quest_mission_manager != 0) {
        q = (VObj_18_801A4268 *) __nw__7TObjectFUl(0x194);
        if (q != NULL) {
            q = (VObj_18_801A4268 *) __ct__12TQuestThreadFv(q, quest_mission_manager, 0);
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

s32 change_floor_reload_area(void) {
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
    find_leader_section_id(TLobby__data_805011D8, TLobby__designated_client_id);
    for (i = 0; i < 12; i++) {
        p = (VObj_18_801A441C *) get_player_by_client_id(i);
        if (p != NULL) {
            set_parent__7TObjectFP7TObject(p, tmp);
        }
    }
    delete_all_task_children__9TMainTaskFv(&main_task.value);
    promote_area_floor(lbl_80515BA0);
    clear_ready_flag_unless_locked__6TLobbyFv(lbl_80515BA0);
    update__16TKeyBoardControlFv();
    create_map_csn_ctrl__6TLobbyFv();
    create_quad_sprites__13TParticleCtrlFv();
    start_loading__9TLoadCtrlFUl(2);
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
        load_character_from_card__23TAdSinglePlyChrSelectGCFi(0);
    }
    if (quest_area_manager != 0) {
        q = __nw__7TObjectFUl(0x194);
        if (q != NULL) {
            __ct__12TQuestThreadFv(q, quest_area_manager, 0);
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
    s32 *var_r3;
    s32 var_r31;
    s32 var_r4;
    stop_audio_streams__6TLobbyFv();
    update_lobby_subsystems__6TLobbyFv();
    send_logout__6TLobbyFv();
    TLobby::free_objects();
    var_r3 = (s32 *)(&(*(RecoveredGlobal_801A4610_main_task *)&main_task).value);
    var_r3 = (s32 *)(&(*(RecoveredGlobal_801A4610_main_task *)&main_task).value);
    delete_all_task_children__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A4610_main_task *)&main_task).value));
    var_r3 = (s32 *)(&(*(RecoveredGlobal_801A4610_main_task *)&main_task).value);
    var_r3 = (s32 *)(&(*(RecoveredGlobal_801A4610_main_task *)&main_task).value);
    clear_flag3_all_tasks__9TMainTaskFv((void *) (&(*(RecoveredGlobal_801A4610_main_task *)&main_task).value));
    var_r3 = (s32 *)((u8 *)(tl_su));
    delete_children__7TObjectFv((int) (var_r3));
    PPCSync();
    var_r31 = 0;
    do {
        render_tick__Fv();
        var_r31 += 1;
    } while (var_r31 < 0x1E);
    cleanup__6TLobbyFv();
    if ((s32) online_lobby_scene_handle == 0) {
        var_r3 = (s32 *)(&(*(RecoveredGlobal_801A4610_lbl_80515BA0 *)&lbl_80515BA0).value);
        var_r3 = (s32 *)(&(*(RecoveredGlobal_801A4610_lbl_80515BA0 *)&lbl_80515BA0).value);
        run_area_scene_cleanup((void *) (&(*(RecoveredGlobal_801A4610_lbl_80515BA0 *)&lbl_80515BA0).value));
    }
    free_single_player_chr_select__6TLobbyFv();
    update_photon_chairs__6TLobbyFv();
    var_r3 = (s32 *)(&lobby_area_reload_callbacks.value);
    var_r4 = 0x48;
    var_r3 = (s32 *)(&lobby_area_reload_callbacks.value);
    call_funcs_reverse__6TLobbyFPvUi((void *) (&lobby_area_reload_callbacks.value), (int) (0x48));
    var_r3 = (s32 *)(&online_lobby_scene_callback_table.value);
    var_r4 = 0x158;
    var_r3 = (s32 *)(&online_lobby_scene_callback_table.value);
    call_funcs_reverse__6TLobbyFPvUi((void *) (&online_lobby_scene_callback_table.value), (int) (0x158));
    local_client_id = 0;
    TLobby__lobby_state_flags = 0;
    clear_resource_load_tasks();
    update__16TKeyBoardControlFv();
    render_tick__Fv();
}

void TLobby::run_lobby_frame() {
    s32 temp_r0;
    func_803DCDFC__Fv();
    controller_stuff__Fv();
    update_input_frame__16TKeyBoardControlFv();
    some_empty_func__9TMainTaskFv((void *) (&main_task.value));
    run_task__9TMainTaskFv((void *) (&main_task.value));
    render_shadows__9TMainTaskFv((void *) (&main_task.value));
    render__9TMainTaskFv((void *) (&main_task.value));
    render_screen_overlay__9TMainTaskFv((void *) (&main_task.value));
    process_async_file_reads();
    update_sound_request_slots();
    run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
    noop__23TAdSinglePlyChrSelectGCFv();
    TObjBoss2Tunnel__sub_8007D1D0();
    if (((s32) lbl_805D55C0 == 0) && (TAdPlayerLoadGC__sub_801E1B50((int) (get_chr_select_state__23TAdSinglePlyChrSelectGCFv())) != -1)) {
        if (probe_card_slot__15TAdPlayerLoadGCFv((int) (get_chr_select_state__23TAdSinglePlyChrSelectGCFv())) != 0) {
            TLobby__online_lobby_frame_counter = 0;
        } else {
            temp_r0 = TLobby__online_lobby_frame_counter + 1;
            TLobby__online_lobby_frame_counter = temp_r0;
            if (temp_r0 > 0xC) {
                disconnect_protocol__6TLobbyFv();
            }
        }
    }
    TLobby::update_periodic_tick();
    if ((func_801A5E54__Fv() != 0) || ((s32) TLobby__idle_timeout_active == 1)) {
        TLobby::reset_to_chr_select();
    }
    if (is_ready__22TQuestVmDownLoadServerFv() != 0) {
        send_logout__6TLobbyFv();
        TKeyBoardControl__sub_8000F9CC((int) (0));
    }
    if (get_key_state__16TKeyBoardControlFv() != 0) {
        change_floor_reload_area();
        clear_keyboard_key_state();
    }
    if (is_keyboard_active() != 0) {
        TLobby::reload_floor_scene();
        deactivate_keyboard();
    }
    if (get_input__16TKeyBoardControlFv() != 0) {
        reload_lobby_floor_scene();
        TKeyBoardControl__sub_8000F95C();
    }
    render_tick__Fv();
}

void TLobby::run_main_frame() {
    s32 temp_r0;
    func_803DCDFC__Fv();
    controller_stuff__Fv();
    update_input_frame__16TKeyBoardControlFv();
    some_empty_func__9TMainTaskFv((void *) (&main_task.value));
    run_task__9TMainTaskFv((void *) (&main_task.value));
    render_shadows__9TMainTaskFv((void *) (&main_task.value));
    render__9TMainTaskFv((void *) (&main_task.value));
    render_screen_overlay__9TMainTaskFv((void *) (&main_task.value));
    process_async_file_reads();
    update_sound_request_slots();
    run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
    noop__23TAdSinglePlyChrSelectGCFv();
    TObjBoss2Tunnel__sub_8007D1D0();
    TLobby__sub_8006EF90();
    if (((s32) lbl_805D55C0 == 0) && (TAdPlayerLoadGC__sub_801E1B50((int) (get_chr_select_state__23TAdSinglePlyChrSelectGCFv())) != -1)) {
        if (probe_card_slot__15TAdPlayerLoadGCFv((int) (get_chr_select_state__23TAdSinglePlyChrSelectGCFv())) != 0) {
            TLobby__online_lobby_frame_counter = 0;
        } else {
            temp_r0 = TLobby__online_lobby_frame_counter + 1;
            TLobby__online_lobby_frame_counter = temp_r0;
            if (temp_r0 > 0xC) {
                disconnect_protocol__6TLobbyFv();
            }
        }
    }
    TLobby::update_periodic_tick();
    if (get_input__16TKeyBoardControlFv() != 0) {
        start_quest_mission();
        TKeyBoardControl__sub_8000F95C();
    }
    if (get_key_state__16TKeyBoardControlFv() != 0) {
        change_floor_reload_area();
        clear_keyboard_key_state();
    }
    if (is_keyboard_active() != 0) {
        TLobby::reload_floor_scene();
        deactivate_keyboard();
    }
    if ((s16) TLobby__data_805D5CE8 == 1) {
        reload_lobby_floor_scene();
    }
    if ((func_801A5E54__Fv() != 0) || ((s32) TLobby__idle_timeout_active == 1)) {
        TLobby::init_chr_select();
    }
    if (is_ready__22TQuestVmDownLoadServerFv() != 0) {
        send_logout__6TLobbyFv();
        TKeyBoardControl__sub_8000F9CC((int) (0));
    }
    render_tick__Fv();
}

void TLobby::update_camera_state() {
    if (is_quest_active() != 0) {
        TLobby::run_lobby_frame();
        return;
    }
    TLobby::run_main_frame();
}

void run_online_lobby_scene(void) {
    void *lobby;
    void *p;
    TLobby__new_game_setup_flags = 0;
    TLobby__lobby_state_flags = 0;
    set_copy_clear_color_argb(0, 0, 0);
    update__16TKeyBoardControlFv();
    TLobby__sub_801F3774();
    reset_controller_input_state();
    clear_keyboard_key_state();
    TKeyBoardControl__sub_8000F90C(2);
    TKeyBoardControl__sub_8000F91C(0xF);
    clear_resource_load_tasks();
    create_map_csn_ctrl__6TLobbyFv();
    create_quad_sprites__13TParticleCtrlFv();
    poll_default__9TLoadCtrlFv();
    reset_keyboard_state__6TLobbyFv();
    apply_phase_keyboard_mode();
    run_load_callback_table((void *)(&online_lobby_scene_callback_table.value), (s32)(0x158));
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
    online_lobby_scene_handle = TLobby__sub_80146908();
    TAdDialingGC__sub_80328730();
    set_field1C__9TLoadCtrlFl(0);
    while (TAdDialingGC__sub_801A4C9C() != 0) {
        func_803DCDFC__Fv();
        controller_stuff__Fv();
        update_input_frame__16TKeyBoardControlFv();
        some_empty_func__9TMainTaskFv(&main_task.value);
        run_task__9TMainTaskFv(&main_task.value);
        render__9TMainTaskFv(&main_task.value);
        render_screen_overlay__9TMainTaskFv(&main_task.value);
        process_async_file_reads();
        update_sound_request_slots();
        run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
        if (func_801A5E54__Fv() != 0) {
            break;
        }
        render_tick__Fv();
    }
    set_field1C__9TLoadCtrlFl(1);
    close__12TAdDialingGCFv();
    if (online_lobby_scene_handle != 0) {
        init__23TAdSinglePlyChrSelectGCFv();
        TKeyBoardControl__sub_8000F91C(2);
        TKeyBoardControl__sub_8000F9CC(0x12);
        cleanup_scene__9TLoadCtrlFv();
    } else {
        lobby = __nw__7TObjectFUl((s32)(0x1C));
        if (lobby != NULL) {
            lobby = TLobby__ct(lobby, tl_su);
        }
        p = __nw__7TObjectFUl((s32)(0x20));
        if (p != NULL) {
            TGameProtocol__ct(p, tl_su);
        }
        TLobby__sub_801A3CF8();
        reset_state_flags__6TLobbyFv();
        if (TLobby__sub_801A3E8C() != 0) {
            load_set_gsl_files__6TLobbyFv();
            init_range__6TLobbyFl(lbl_80515BA0, 0);
        } else {
            init_range__6TLobbyFl(lbl_80515BA0, 0xF);
            ((TLobby *)lbl_80515BA0)->set_value((s32)(0));
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
            TLobby::start_udp_test_game();
        } else {
            run_join_lobby_connect__6TLobbyFi(lobby);
        }
    }
    actor_frame_tick = 0;
    TLobby__data_805D5CE8 = 0;
    TLobby__online_lobby_frame_counter = 0;
    render_tick__Fv();
}

void TLobby::update_periodic_tick() {
    if ((TLobby__lobby_state_flags & 1) && ((actor_frame_tick % 900) == 0) && ((u32) TLobby__protocol_instance != 0U)) {
        send_keepalive((void*)TLobby__protocol_instance);
    }
}
void TLobby__sub_801A4C6C(void* p) { *(u32*)((char*)p + 0x20) |= 0x1; }
void TLobby::set_value(s32 v) { *(s32*)((char*)this + 0xc) = v; }
void TLobby::reset_counter() { challenge_task_created = 0; }

}
