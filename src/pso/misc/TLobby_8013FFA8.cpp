#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80140A6C_lbl_804A73D0 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_80140A6C_lbl_8050EA40 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

typedef s32 M2C_UNK;
struct Light_801401D0 {
    f32 dir[3];
    f32 pad[3];
    f32 amb[3];
    f32 c[4];
    f32 d[4];
};

struct Light_80140514 {
    f32 dir[3];
    f32 pad[3];
    f32 amb[3];
    f32 c[4];
    f32 d[4];
};

extern "C" {
M2C_UNK init_music_sequencer(M2C_UNK);
M2C_UNK load_floor_sound_bank();
M2C_UNK play_area_music(M2C_UNK *);
M2C_UNK init_area_lights();
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK create_tasks__6TLobbyFv();
M2C_UNK get_global_state__14TOKeyMachine01Fv();
s32 is_split_screen();
extern M2C_UNK lbl_8043F198[];
s32 init_ship_scene(void);
int clear_session_buffers__6TLobbyFv(void);
int stop_audio_streams__6TLobbyFv(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);
void update_floor_state__6TLobbyFv(void);
M2C_UNK init_music_sequencer(M2C_UNK);
M2C_UNK load_floor_sound_bank();
M2C_UNK play_area_music(M2C_UNK *);
M2C_UNK init_area_lights();
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK create_tasks__6TLobbyFv();
M2C_UNK get_global_state__14TOKeyMachine01Fv();
s32 is_split_screen();
extern M2C_UNK lbl_8043F1A8[];
s32 load_scene_ship_b(void);
int clear_session_buffers__6TLobbyFv(void);
M2C_UNK call_funcs_reverse__6TLobbyFPvUi(M2C_UNK *, M2C_UNK);
M2C_UNK stop_cue_stream();
int stop_audio_streams__6TLobbyFv(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);
extern M2C_UNK dragon_area_scene_callbacks[];
void cleanup_dragon_area_scene(void);
int clear_session_buffers__6TLobbyFv(void);
M2C_UNK call_funcs_reverse__6TLobbyFPvUi(M2C_UNK *, M2C_UNK);
int stop_audio_streams__6TLobbyFv(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);
extern M2C_UNK lbl_804A7360[];
void TLobby__sub_80140308(void);
int clear_session_buffers__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);
M2C_UNK stop_cue_stream();
int stop_audio_streams__6TLobbyFv(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);
void TLobby__sub_801403B8(void);
s32 TBoss3VoloptCtrl__ct();
M2C_UNK create_tasks__6TLobbyFv();
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK load_floor_sound_bank();
M2C_UNK get_global_state__14TOKeyMachine01Fv();
M2C_UNK init_area_lights();
u32 __nw__7TObjectFUl(s32);
s32 spawn_boss3_volopt_ctrl__6TLobbyFv(void);
int clear_session_buffers__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);
M2C_UNK stop_cue_stream();
int stop_audio_streams__6TLobbyFv(void);
int refresh_render_state__6TLobbyFv(void);
int free_heap__13TParticleCtrlFv(void);
int reset_keyboard_control__6TLobbyFv(void);
void reset_subsystems__6TLobbyFv(void);
M2C_UNK create_tasks__6TLobbyFv();
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK load_floor_sound_bank();
M2C_UNK get_global_state__14TOKeyMachine01Fv();
M2C_UNK init_area_lights();
s32 init_heap__13TParticleCtrlFPv(s32);
s32 create__16TBoss4CheckEmptyFv();
s32 init_lobby_scene__6TLobbyFv(void);
int clear_session_buffers__6TLobbyFv(void);
M2C_UNK call_funcs_reverse__6TLobbyFPvUi(M2C_UNK *, M2C_UNK);
int update_current_floor__6TLobbyFv(void);
M2C_UNK stop_cue_stream();
int stop_audio_streams__6TLobbyFv(void);
int refresh_render_state__6TLobbyFv(void);
int free_heap__13TParticleCtrlFv(void);
int reset_keyboard_control__6TLobbyFv(void);
extern M2C_UNK gryphon_area_cleanup_callbacks[];
void cleanup_floor_state__6TLobbyFv(void);
int clear_session_buffers__6TLobbyFv(void);
int stop_audio_streams__6TLobbyFv(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);
void run_floor_update__6TLobbyFv(void);
s32 is_quest_active();
void TLobby__sub_801403B4(M2C_UNK);
M2C_UNK init_music_sequencer(M2C_UNK);
M2C_UNK load_floor_sound_bank();
M2C_UNK play_area_music(M2C_UNK *);
M2C_UNK init_area_lights();
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK create_tasks__6TLobbyFv();
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(M2C_UNK);
M2C_UNK get_global_state__14TOKeyMachine01Fv();
s32 get_main_phase();
s32 is_split_screen();
extern M2C_UNK lbl_8043F1E8[];
s32 init_cave_b_stage(void);
int clear_session_buffers__6TLobbyFv(void);
int stop_audio_streams__6TLobbyFv(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);
void update_floor_and_windows__6TLobbyFv(void);
void TLobby__sub_801403B4(M2C_UNK _w0);
M2C_UNK init_music_sequencer(M2C_UNK);
M2C_UNK load_floor_sound_bank();
M2C_UNK play_area_music(M2C_UNK *);
M2C_UNK init_area_lights();
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK create_tasks__6TLobbyFv();
M2C_UNK get_global_state__14TOKeyMachine01Fv();
s32 is_split_screen();
extern M2C_UNK lbl_8043F1F8[];
s32 load_scene_cave_b(void);
int clear_session_buffers__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);
int stop_audio_streams__6TLobbyFv(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);
void update_scene__6TLobbyFv(void);
void TLobby__sub_801403B4(M2C_UNK _w0);
M2C_UNK init_music_sequencer(M2C_UNK);
M2C_UNK load_floor_sound_bank();
M2C_UNK play_area_music(M2C_UNK *);
M2C_UNK init_area_lights();
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK create_tasks__6TLobbyFv();
M2C_UNK get_global_state__14TOKeyMachine01Fv();
s32 is_split_screen();
extern M2C_UNK lbl_8043F208[];
s32 init_stage_cave_b(void);
int clear_session_buffers__6TLobbyFv(void);
M2C_UNK call_funcs_reverse__6TLobbyFPvUi(M2C_UNK *, M2C_UNK);
int stop_audio_streams__6TLobbyFv(void);
M2C_UNK TTecRaFoie__sub_80226254();
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);
extern M2C_UNK TLobby_scene_load_callback_table[];
void cleanup_boss3_scene__6TLobbyFv(void);
M2C_UNK run_load_callback_table(M2C_UNK *, M2C_UNK);
M2C_UNK TLobby__sub_80207E44();
M2C_UNK init_shop_world_context();
M2C_UNK load_floor_sound_bank();
M2C_UNK create_controller__14TObjBgmColCtrlFv();
M2C_UNK init_area_lights();
M2C_UNK TQuestBgmCtrl__ct(void *, s32);
u32 __nw__7TObjectFUl(s32);
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK create_tasks__6TLobbyFv();
M2C_UNK fn_8006EBC4(s32);
M2C_UNK construct_traffic_manager(void *, s32);
M2C_UNK get_global_state__14TOKeyMachine01Fv();
M2C_UNK reset_settings_to_default__6TLobbyFPv(M2C_UNK *);
extern M2C_UNK TLobby_scene_load_callback_table[];
extern M2C_UNK lbl_8050EA40[];
extern s32 tl_05;
extern s32 tl_07;
s32 setup_scene__6TLobbyFv(void);
int clear_session_buffers__6TLobbyFv(void);
int stop_audio_streams__6TLobbyFv(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);
void update_floor_objects__6TLobbyFv(void);
M2C_UNK init_music_sequencer(M2C_UNK);
M2C_UNK load_floor_sound_bank();
M2C_UNK play_area_music(M2C_UNK *);
M2C_UNK init_area_lights();
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK create_tasks__6TLobbyFv();
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(M2C_UNK);
M2C_UNK get_global_state__14TOKeyMachine01Fv();
s32 is_split_screen();
extern M2C_UNK lbl_8043F218[];
s32 init_stage_forest_b(void);
int clear_session_buffers__6TLobbyFv(void);
int stop_audio_streams__6TLobbyFv(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);
void update_all__6TLobbyFv(void);
M2C_UNK create_tasks__6TLobbyFv();
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK init_area_lights();
void TLobby__sub_801403B4(M2C_UNK _w0);
M2C_UNK get_global_state__14TOKeyMachine01Fv();
M2C_UNK load_floor_sound_bank();
M2C_UNK init_music_sequencer(M2C_UNK);
M2C_UNK play_area_music(M2C_UNK *);
M2C_UNK create__12TObjRainCtrlFv();
s32 is_split_screen();
extern M2C_UNK lbl_8043F228[];
s32 init_forest_b(void);
extern M2C_UNK lobby_floor_scene_callbacks[];
int clear_session_buffers__6TLobbyFv(void);
M2C_UNK call_funcs_reverse__6TLobbyFPvUi(M2C_UNK *, M2C_UNK);
int stop_audio_streams__6TLobbyFv(void);
M2C_UNK free_download_buffers__22TQuestVmDownLoadServerFv();
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);
void update_floor_download__6TLobbyFv(void);
M2C_UNK create_tasks__6TLobbyFv();
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK run_load_callback_table(M2C_UNK *, M2C_UNK);
M2C_UNK init_area_lights();
void TLobby__sub_801403B4(M2C_UNK _w0);
M2C_UNK create_controller__14TObjBgmColCtrlFv();
M2C_UNK reset_settings_to_default__6TLobbyFPv(M2C_UNK *);
M2C_UNK TQuestVmDownLoadServer__sub_801F8F14();
M2C_UNK get_global_state__14TOKeyMachine01Fv();
M2C_UNK load_floor_sound_bank();
extern M2C_UNK lobby_floor_scene_callbacks[];
extern M2C_UNK lbl_8050EA40[];
s32 init_lobby_floor_scene__6TLobbyFv(void);
int clear_session_buffers__6TLobbyFv(void);
int stop_audio_streams__6TLobbyFv(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);
void update_floor_alt__6TLobbyFv(void);
s32 is_quest_active();
void TLobby__sub_801403B4(M2C_UNK _w0);
M2C_UNK init_music_sequencer(M2C_UNK);
M2C_UNK load_floor_sound_bank();
M2C_UNK play_area_music(M2C_UNK *);
M2C_UNK init_area_lights();
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK create_tasks__6TLobbyFv();
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(M2C_UNK);
M2C_UNK get_global_state__14TOKeyMachine01Fv();
s32 get_main_phase();
s32 is_split_screen();
extern M2C_UNK lbl_8043F238[];
s32 init_machine_scene(void);
int clear_session_buffers__6TLobbyFv(void);
int stop_audio_streams__6TLobbyFv(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);
void update_floor_b__6TLobbyFv(void);
void TLobby__sub_801403B4(M2C_UNK _w0);
M2C_UNK init_music_sequencer(M2C_UNK);
M2C_UNK load_floor_sound_bank();
M2C_UNK play_area_music(M2C_UNK *);
M2C_UNK init_area_lights();
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK create_tasks__6TLobbyFv();
M2C_UNK get_global_state__14TOKeyMachine01Fv();
s32 is_split_screen();
extern M2C_UNK lbl_8043F248[];
s32 init_machine_b_scene(void);
int clear_session_buffers__6TLobbyFv(void);
int stop_audio_streams__6TLobbyFv(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);
void refresh_floor_state__6TLobbyFv(void);
int clear_session_buffers__6TLobbyFv(void);
int stop_audio_streams__6TLobbyFv(void);
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);
void run_floor_update_2__6TLobbyFv(void);
M2C_UNK create_boss2_tunnel__6TLobbyFv();
M2C_UNK create_tasks__6TLobbyFv();
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK run_load_callback_table(M2C_UNK *, M2C_UNK);
M2C_UNK init_area_lights();
void TLobby__sub_801403B4(M2C_UNK _w0);
M2C_UNK get_global_state__14TOKeyMachine01Fv();
M2C_UNK play_area_music(M2C_UNK *);
M2C_UNK load_floor_sound_bank();
extern M2C_UNK lbl_8043F1C8[];
extern M2C_UNK lbl_804A7360[];
s32 setup_area__6TLobbyFv(void);
M2C_UNK forward_floor_2CB44__6TLobbyFPv();
M2C_UNK create_tasks__6TLobbyFv();
s32 check_disconnect_conditions__6TLobbyFv();
s32 check_v2_mode__9TObjEneDDFv();
M2C_UNK run_load_callback_table(M2C_UNK *, M2C_UNK);
M2C_UNK init_map_lights(Light_801401D0 *);
M2C_UNK get_global_state__14TOKeyMachine01Fv();
M2C_UNK play_area_music(M2C_UNK *);
M2C_UNK load_floor_sound_bank();
extern M2C_UNK lbl_8043F1B8[];
extern M2C_UNK dragon_area_scene_callbacks[];
s32 init_dragon_area_scene(void);
M2C_UNK create__13TObjBoss5CtrlFv();
M2C_UNK create_tasks__6TLobbyFv();
s32 check_disconnect_conditions__6TLobbyFv();
s32 init_heap__13TParticleCtrlFPv(s32);
M2C_UNK run_load_callback_table(M2C_UNK *, M2C_UNK);
M2C_UNK init_map_lights(Light_801401D0 *);
M2C_UNK create__12TObjRainCtrlFv();
M2C_UNK get_global_state__14TOKeyMachine01Fv();
M2C_UNK play_area_music(M2C_UNK *);
M2C_UNK load_floor_sound_bank();
extern M2C_UNK lbl_8043F1D8[];
extern M2C_UNK gryphon_area_cleanup_callbacks[];
s32 init_gryphon_area__6TLobbyFv(void);
}

extern "C" {

void set_range__6TLobbyFPviii(void* a0, int a1, int a2, int a3);
s32 ship_scene_update(void);
void update_floor__6TLobbyFv(void);
void update_floor_a__6TLobbyFv(void);
int clear_session_buffers__6TLobbyFv(void);
M2C_UNK init_music_sequencer(M2C_UNK);
int stop_audio_streams__6TLobbyFv(void);
M2C_UNK load_floor_sound_bank();
M2C_UNK play_area_music(M2C_UNK *);
M2C_UNK init_area_lights();
s32 check_disconnect_conditions__6TLobbyFv();
M2C_UNK create_tasks__6TLobbyFv();
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(M2C_UNK);
M2C_UNK get_global_state__14TOKeyMachine01Fv();
s32 is_split_screen();
int refresh_render_state__6TLobbyFv(void);
int reset_keyboard_control__6TLobbyFv(void);
int update_current_floor__6TLobbyFv(void);

void set_range__6TLobbyFPviii(void* a0, int a1, int a2, int a3) { *(int*)((char*)a0 + 0x7220) = a1; *(int*)((char*)a0 + 0x7224) = a3; *(int*)((char*)a0 + 0x7228) = (a1 + a2); }
void update_floor__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); stop_audio_streams__6TLobbyFv(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); clear_session_buffers__6TLobbyFv(); }

extern M2C_UNK lbl_8043F188[];

s32 ship_scene_update(void) {
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_area_lights();
    create_tasks__6TLobbyFv();
    if (is_split_screen() != 0) {
        play_area_music(lbl_8043F188);
    } else {
        init_music_sequencer(3);
    }
    dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x30);
    return 1;
}

void update_floor_a__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); stop_audio_streams__6TLobbyFv(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); clear_session_buffers__6TLobbyFv(); }
s32 init_ship_scene(void) {
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_area_lights();
    create_tasks__6TLobbyFv();
    if (is_split_screen() != 0) {
        play_area_music(lbl_8043F198);
    } else {
        init_music_sequencer(3);
    }
    return 1;
}
void update_floor_state__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); stop_audio_streams__6TLobbyFv(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); clear_session_buffers__6TLobbyFv(); }
s32 load_scene_ship_b(void) {
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_area_lights();
    create_tasks__6TLobbyFv();
    if (is_split_screen() != 0) {
        play_area_music(lbl_8043F1A8);
    } else {
        init_music_sequencer(3);
    }
    return 1;
}
void cleanup_dragon_area_scene(void) {
    refresh_render_state__6TLobbyFv();
    stop_audio_streams__6TLobbyFv();
    stop_cue_stream();
    call_funcs_reverse__6TLobbyFPvUi(dragon_area_scene_callbacks, 8);
    update_current_floor__6TLobbyFv();
    reset_keyboard_control__6TLobbyFv();
    clear_session_buffers__6TLobbyFv();
}

s32 init_dragon_area_scene(void) {
    Light_801401D0 l;
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    run_load_callback_table(dragon_area_scene_callbacks, 8);
    if (check_v2_mode__9TObjEneDDFv() == 0) {
        l.dir[0] = -1.45f;
        l.dir[1] = 2.8f;
        l.dir[2] = -0.4f;
        l.amb[0] = 1.0f;
        l.amb[1] = 0.96f;
        l.amb[2] = 0.3f;
        l.d[0] = 1.0f;
        l.d[1] = 0.1f;
        l.d[2] = 0.24f;
        l.d[3] = 0.4f;
        l.c[0] = 1.0f;
        l.c[1] = 1.0f;
        l.c[2] = 0.51f;
        l.c[3] = 0.4f;
    } else {
        l.dir[0] = -1.45f;
        l.dir[1] = 2.8f;
        l.dir[2] = -0.4f;
        l.amb[0] = 1.0f;
        l.amb[1] = 0.96f;
        l.amb[2] = 0.75f;
        l.d[0] = 1.0f;
        l.d[1] = 0.1f;
        l.d[2] = 0.24f;
        l.d[3] = 0.4f;
        l.c[0] = 1.0f;
        l.c[1] = 0.85f;
        l.c[2] = 1.0f;
        l.c[3] = 1.0f;
    }
    init_map_lights(&l);
    create_tasks__6TLobbyFv();
    forward_floor_2CB44__6TLobbyFPv();
    play_area_music(lbl_8043F1B8);
    return 1;
}

void TLobby__sub_80140308(void) {
    refresh_render_state__6TLobbyFv();
    stop_audio_streams__6TLobbyFv();
    call_funcs_reverse__6TLobbyFPvUi(lbl_804A7360, 8);
    reset_keyboard_control__6TLobbyFv();
    update_current_floor__6TLobbyFv();
    clear_session_buffers__6TLobbyFv();
}

s32 setup_area__6TLobbyFv(void) {
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    run_load_callback_table((M2C_UNK *)((void *) (lbl_804A7360)), (M2C_UNK)((int) (8)));
    init_area_lights();
    create_tasks__6TLobbyFv();
    create_boss2_tunnel__6TLobbyFv();
    TLobby__sub_801403B4((M2C_UNK)((int) (0)));
    play_area_music((M2C_UNK *)((void *) (lbl_8043F1C8)));
    return 1;
}

void TLobby__sub_801403B4(M2C_UNK _w0) {  }
void TLobby__sub_801403B8(void) { refresh_render_state__6TLobbyFv(); stop_audio_streams__6TLobbyFv(); stop_cue_stream(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); clear_session_buffers__6TLobbyFv(); }
s32 spawn_boss3_volopt_ctrl__6TLobbyFv(void) {
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_area_lights();
    create_tasks__6TLobbyFv();
    if (__nw__7TObjectFUl(0x24) != 0U) {
        TBoss3VoloptCtrl__ct();
    }
    return 1;
}
void reset_subsystems__6TLobbyFv(void) { free_heap__13TParticleCtrlFv(); refresh_render_state__6TLobbyFv(); stop_audio_streams__6TLobbyFv(); stop_cue_stream(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); clear_session_buffers__6TLobbyFv(); }
s32 init_lobby_scene__6TLobbyFv(void) {
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_area_lights();
    create_tasks__6TLobbyFv();
    init_heap__13TParticleCtrlFPv(0x10000);
    create__16TBoss4CheckEmptyFv();
    return 1;
}
void cleanup_floor_state__6TLobbyFv(void) {
    refresh_render_state__6TLobbyFv();
    stop_audio_streams__6TLobbyFv();
    stop_cue_stream();
    call_funcs_reverse__6TLobbyFPvUi(gryphon_area_cleanup_callbacks, 8);
    free_heap__13TParticleCtrlFv();
    update_current_floor__6TLobbyFv();
    reset_keyboard_control__6TLobbyFv();
    clear_session_buffers__6TLobbyFv();
}

s32 init_gryphon_area__6TLobbyFv(void) {
    Light_80140514 l;
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_heap__13TParticleCtrlFPv(0x100000);
    run_load_callback_table(gryphon_area_cleanup_callbacks, 8);
    l.dir[0] = -0.46f;
    l.dir[1] = 0.88f;
    l.dir[2] = -0.13f;
    l.amb[0] = 1.0f;
    l.amb[1] = 1.0f;
    l.amb[2] = 0.15f;
    l.d[0] = 1.0f;
    l.d[1] = 0.1f;
    l.d[2] = 0.24f;
    l.d[3] = 0.4f;
    l.c[0] = 1.0f;
    l.c[1] = 0.64f;
    l.c[2] = 0.7f;
    l.c[3] = 0.74f;
    init_map_lights((Light_801401D0 *)(&l));
    create_tasks__6TLobbyFv();
    create__12TObjRainCtrlFv();
    create__13TObjBoss5CtrlFv();
    play_area_music(lbl_8043F1D8);
    return 1;
}

void run_floor_update__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); stop_audio_streams__6TLobbyFv(); update_current_floor__6TLobbyFv(); reset_keyboard_control__6TLobbyFv(); clear_session_buffers__6TLobbyFv(); }
s32 init_cave_b_stage(void) {
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_area_lights();
    create_tasks__6TLobbyFv();
    TLobby__sub_801403B4((M2C_UNK)(0));
    if (is_split_screen() != 0) {
        play_area_music(lbl_8043F1E8);
    } else {
        init_music_sequencer(1);
    }
    if ((get_main_phase() != 0xE) || (is_quest_active() == 0)) {
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x1E);
    }
    return 1;
}
void update_floor_and_windows__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); stop_audio_streams__6TLobbyFv(); update_current_floor__6TLobbyFv(); reset_keyboard_control__6TLobbyFv(); clear_session_buffers__6TLobbyFv(); }
s32 load_scene_cave_b(void) {
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_area_lights();
    create_tasks__6TLobbyFv();
    TLobby__sub_801403B4(0);
    if (is_split_screen() != 0) {
        play_area_music(lbl_8043F1F8);
    } else {
        init_music_sequencer(1);
    }
    return 1;
}
void update_scene__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); stop_audio_streams__6TLobbyFv(); update_current_floor__6TLobbyFv(); reset_keyboard_control__6TLobbyFv(); clear_session_buffers__6TLobbyFv(); }
s32 init_stage_cave_b(void) {
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_area_lights();
    create_tasks__6TLobbyFv();
    TLobby__sub_801403B4(0);
    if (is_split_screen() != 0) {
        play_area_music(lbl_8043F208);
    } else {
        init_music_sequencer(1);
    }
    return 1;
}
void cleanup_boss3_scene__6TLobbyFv(void) {
    refresh_render_state__6TLobbyFv();
    stop_audio_streams__6TLobbyFv();
    TTecRaFoie__sub_80226254();
    call_funcs_reverse__6TLobbyFPvUi(TLobby_scene_load_callback_table, 0x60);
    reset_keyboard_control__6TLobbyFv();
    update_current_floor__6TLobbyFv();
    clear_session_buffers__6TLobbyFv();
}
s32 setup_scene__6TLobbyFv(void) {
    void *obj;
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    TLobby__sub_80207E44();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_area_lights();
    init_shop_world_context();
    run_load_callback_table(TLobby_scene_load_callback_table, 0x60);
    reset_settings_to_default__6TLobbyFPv(lbl_8050EA40);
    create_tasks__6TLobbyFv();
    create_controller__14TObjBgmColCtrlFv();
    if (((s32)get_global_state__14TOKeyMachine01Fv()) == 0) {
        obj = ((void *)__nw__7TObjectFUl((s32)(0x78)));
        if (obj != NULL) {
            construct_traffic_manager(obj, tl_05);
        }
    }
    obj = ((void *)__nw__7TObjectFUl((s32)(0x1C)));
    if (obj != NULL) {
        TQuestBgmCtrl__ct(obj, tl_05);
    }
    fn_8006EBC4(tl_07);
    return 1;
}
void update_floor_objects__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); stop_audio_streams__6TLobbyFv(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); clear_session_buffers__6TLobbyFv(); }
s32 init_stage_forest_b(void) {
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_area_lights();
    create_tasks__6TLobbyFv();
    if (is_split_screen() != 0) {
        play_area_music(lbl_8043F218);
    } else {
        init_music_sequencer(0);
    }
    dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x14);
    return 1;
}
void update_all__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); stop_audio_streams__6TLobbyFv(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); clear_session_buffers__6TLobbyFv(); }
s32 init_forest_b(void) {
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_area_lights();
    create_tasks__6TLobbyFv();
    create__12TObjRainCtrlFv();
    TLobby__sub_801403B4(0);
    if (is_split_screen() != 0) {
        play_area_music(lbl_8043F228);
    } else {
        init_music_sequencer(0);
    }
    return 1;
}
void update_floor_download__6TLobbyFv(void) {
    free_download_buffers__22TQuestVmDownLoadServerFv();
    reset_keyboard_control__6TLobbyFv();
    update_current_floor__6TLobbyFv();
    call_funcs_reverse__6TLobbyFPvUi(lobby_floor_scene_callbacks, 0x30);
    stop_audio_streams__6TLobbyFv();
    refresh_render_state__6TLobbyFv();
    stop_audio_streams__6TLobbyFv();
    clear_session_buffers__6TLobbyFv();
}
s32 init_lobby_floor_scene__6TLobbyFv(void) {
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (((s32)run_load_callback_table((M2C_UNK *)((void *) (&(*(RecoveredGlobal_80140A6C_lbl_804A73D0 *)&lobby_floor_scene_callbacks).value)), (M2C_UNK)((int) (0x30)))) == 0) {
        return 0;
    }
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_area_lights();
    TQuestVmDownLoadServer__sub_801F8F14();
    reset_settings_to_default__6TLobbyFPv((M2C_UNK *)((void *) (&(*(RecoveredGlobal_80140A6C_lbl_8050EA40 *)&lbl_8050EA40).value)));
    create_tasks__6TLobbyFv();
    create_controller__14TObjBgmColCtrlFv();
    TLobby__sub_801403B4((M2C_UNK)((int) (0)));
    return 1;
}
void update_floor_alt__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); stop_audio_streams__6TLobbyFv(); update_current_floor__6TLobbyFv(); reset_keyboard_control__6TLobbyFv(); clear_session_buffers__6TLobbyFv(); }
s32 init_machine_scene(void) {
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_area_lights();
    create_tasks__6TLobbyFv();
    TLobby__sub_801403B4(0);
    if (is_split_screen() != 0) {
        play_area_music(lbl_8043F238);
    } else {
        init_music_sequencer(2);
    }
    if ((get_main_phase() != 0xE) || (is_quest_active() == 0)) {
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x28);
    }
    return 1;
}
void update_floor_b__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); stop_audio_streams__6TLobbyFv(); update_current_floor__6TLobbyFv(); reset_keyboard_control__6TLobbyFv(); clear_session_buffers__6TLobbyFv(); }
s32 init_machine_b_scene(void) {
    get_global_state__14TOKeyMachine01Fv();
    load_floor_sound_bank();
    if (check_disconnect_conditions__6TLobbyFv() != 0) {
        return 0;
    }
    init_area_lights();
    create_tasks__6TLobbyFv();
    TLobby__sub_801403B4(0);
    if (is_split_screen() != 0) {
        play_area_music(lbl_8043F248);
    } else {
        init_music_sequencer(2);
    }
    return 1;
}
void refresh_floor_state__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); stop_audio_streams__6TLobbyFv(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); clear_session_buffers__6TLobbyFv(); }
void run_floor_update_2__6TLobbyFv(void) { refresh_render_state__6TLobbyFv(); stop_audio_streams__6TLobbyFv(); reset_keyboard_control__6TLobbyFv(); update_current_floor__6TLobbyFv(); clear_session_buffers__6TLobbyFv(); }

typedef char RecoveredGlobal_80140A6C_lbl_804A73D0_size[sizeof(RecoveredGlobal_80140A6C_lbl_804A73D0) == 0x30 ? 1 : -1];
typedef char RecoveredGlobal_80140A6C_lbl_8050EA40_size[sizeof(RecoveredGlobal_80140A6C_lbl_8050EA40) == 0x30 ? 1 : -1];

}
