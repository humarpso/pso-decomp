#include "pso/map/FloorResourceCallbacks.h"
#include "pso/misc/TLobby_8013FFA8.h"
#include "pso/misc/TLobby_80207DA8.h"
#include "pso/misc/TLobby_802268F4.h"
#include "pso/misc/TShopGetItemWindow_8021EEE4.h"
#include "pso/unk/text_8006EBC4.h"

#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/TBoss4CheckEmpty.h"
#include "pso/TObjBoss5Ctrl.h"
#include "pso/TObjRainCtrl.h"
#include "pso/TParticleCtrl.h"
#include "pso/boss/TBoss4DarkFalz.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/misc/TQuestVmDownLoadServer.h"
#include "pso/object/TObjBgmColCtrl.h"

struct RecoveredGlobal_80140A6C_lbl_804A73D0 {
    s32 value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_80140A6C_lbl_8050EA40 {
    s32 value;
    u8 remaining[0x2C];
};

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
s32 init_music_sequencer(s32);
s32 load_floor_sound_bank();
s32 play_area_music(s32 *);
}
void init_area_lights(void);
extern "C" {
s32 is_split_screen();
extern s32 lbl_8043F198[];
extern s32 lbl_8043F1A8[];
s32 call_funcs_reverse__6TLobbyFPvUi(s32 *, s32);
extern s32 dragon_area_scene_callbacks[];
extern s32 lbl_804A7360[];
s32 TBoss3VoloptCtrl__ct();
u32 __nw__7TObjectFUl(s32);
extern s32 gryphon_area_cleanup_callbacks[];
s32 is_quest_active();
s32 get_main_phase();
extern s32 lbl_8043F1E8[];
extern s32 lbl_8043F1F8[];
extern s32 lbl_8043F208[];
void TTecRaFoie__sub_80226254(void);
extern s32 TLobby_scene_load_callback_table[];
s32 run_load_callback_table(s32 *, s32);
s32 __ct__13TQuestBgmCtrlFP7TObject(void *, s32);
s32 construct_traffic_manager(void *, s32);
extern s32 lobby_rule_settings[];
extern s32 tl_05;
extern s32 tl_07;
extern s32 lbl_8043F218[];
extern s32 lbl_8043F228[];
extern s32 lobby_floor_scene_callbacks[];
extern s32 lbl_8043F238[];
extern s32 lbl_8043F248[];
extern s32 lbl_8043F1C8[];
s32 forward_floor_2CB44__6TLobbyFv();
}
void init_map_lights(u8 *arg0);
extern s32 lbl_8043F1B8[];
extern s32 lbl_8043F1D8[];
extern "C" {

void TLobby::set_range(int a1, int a2, int a3) { *(int*)((char*)this + 0x7220) = a1; *(int*)((char*)this + 0x7224) = a3; *(int*)((char*)this + 0x7228) = (a1 + a2); }
void TLobby::update_floor() { TLobby::refresh_render_state(); TLobby::stop_audio_streams(); unload_current_floor_resources(); TLobby::update_current_floor(); TLobby::clear_session_buffers(); }
}

extern s32 lbl_8043F188[];

s32 ship_scene_update(void) {
    TOKeyMachine01::get_global_state();
    load_floor_sound_bank();
    if (TLobby::check_disconnect_conditions() != 0) {
        return 0;
    }
    init_area_lights();
    TLobby::create_tasks();
    if (is_split_screen() != 0) {
        play_area_music(lbl_8043F188);
    } else {
        init_music_sequencer(3);
    }
    TBoss4DarkFalz::dispatch_by_main_phase(0x30);
    return 1;
}
extern "C" {

void TLobby::update_floor_a() { TLobby::refresh_render_state(); TLobby::stop_audio_streams(); unload_current_floor_resources(); TLobby::update_current_floor(); TLobby::clear_session_buffers(); }
}
s32 init_ship_scene(void) {
    TOKeyMachine01::get_global_state();
    load_floor_sound_bank();
    if (TLobby::check_disconnect_conditions() != 0) {
        return 0;
    }
    init_area_lights();
    TLobby::create_tasks();
    if (is_split_screen() != 0) {
        play_area_music(lbl_8043F198);
    } else {
        init_music_sequencer(3);
    }
    return 1;
}
extern "C" {
void TLobby::update_floor_state() { TLobby::refresh_render_state(); TLobby::stop_audio_streams(); unload_current_floor_resources(); TLobby::update_current_floor(); TLobby::clear_session_buffers(); }
}
s32 load_scene_ship_b(void) {
    TOKeyMachine01::get_global_state();
    load_floor_sound_bank();
    if (TLobby::check_disconnect_conditions() != 0) {
        return 0;
    }
    init_area_lights();
    TLobby::create_tasks();
    if (is_split_screen() != 0) {
        play_area_music(lbl_8043F1A8);
    } else {
        init_music_sequencer(3);
    }
    return 1;
}
void cleanup_dragon_area_scene(void) {
    TLobby::refresh_render_state();
    TLobby::stop_audio_streams();
    stop_cue_stream();
    call_funcs_reverse__6TLobbyFPvUi(dragon_area_scene_callbacks, 8);
    TLobby::update_current_floor();
    unload_current_floor_resources();
    TLobby::clear_session_buffers();
}

s32 init_dragon_area_scene(void) {
    Light_801401D0 l;
    TOKeyMachine01::get_global_state();
    load_floor_sound_bank();
    if (TLobby::check_disconnect_conditions() != 0) {
        return 0;
    }
    run_load_callback_table(dragon_area_scene_callbacks, 8);
    if (TObjEneDD::check_v2_mode() == 0) {
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
    init_map_lights((u8 *)&l);
    TLobby::create_tasks();
    forward_floor_2CB44__6TLobbyFv();
    play_area_music(lbl_8043F1B8);
    return 1;
}
extern "C" {

void TLobby__sub_80140308(void) {
    TLobby::refresh_render_state();
    TLobby::stop_audio_streams();
    call_funcs_reverse__6TLobbyFPvUi(lbl_804A7360, 8);
    unload_current_floor_resources();
    TLobby::update_current_floor();
    TLobby::clear_session_buffers();
}

s32 TLobby::setup_area() {
    TOKeyMachine01::get_global_state();
    load_floor_sound_bank();
    if (TLobby::check_disconnect_conditions() != 0) {
        return 0;
    }
    run_load_callback_table(lbl_804A7360, 8);
    init_area_lights();
    TLobby::create_tasks();
    TLobby::create_boss2_tunnel();
    TLobby__sub_801403B4(0);
    play_area_music(lbl_8043F1C8);
    return 1;
}

void TLobby__sub_801403B4(s32 _w0) {  }
void TLobby__sub_801403B8(void) { TLobby::refresh_render_state(); TLobby::stop_audio_streams(); stop_cue_stream(); unload_current_floor_resources(); TLobby::update_current_floor(); TLobby::clear_session_buffers(); }
s32 TLobby::spawn_boss3_volopt_ctrl() {
    TOKeyMachine01::get_global_state();
    load_floor_sound_bank();
    if (TLobby::check_disconnect_conditions() != 0) {
        return 0;
    }
    init_area_lights();
    TLobby::create_tasks();
    if (__nw__7TObjectFUl(0x24) != 0U) {
        TBoss3VoloptCtrl__ct();
    }
    return 1;
}
void TLobby::reset_subsystems() { TParticleCtrl::free_heap(); TLobby::refresh_render_state(); TLobby::stop_audio_streams(); stop_cue_stream(); unload_current_floor_resources(); TLobby::update_current_floor(); TLobby::clear_session_buffers(); }
s32 TLobby::init_lobby_scene() {
    TOKeyMachine01::get_global_state();
    load_floor_sound_bank();
    if (TLobby::check_disconnect_conditions() != 0) {
        return 0;
    }
    init_area_lights();
    TLobby::create_tasks();
    TParticleCtrl::init_heap((void *)0x10000);
    TBoss4CheckEmpty::create();
    return 1;
}
void TLobby::cleanup_floor_state() {
    TLobby::refresh_render_state();
    TLobby::stop_audio_streams();
    stop_cue_stream();
    call_funcs_reverse__6TLobbyFPvUi(gryphon_area_cleanup_callbacks, 8);
    TParticleCtrl::free_heap();
    TLobby::update_current_floor();
    unload_current_floor_resources();
    TLobby::clear_session_buffers();
}

s32 TLobby::init_gryphon_area() {
    Light_80140514 l;
    TOKeyMachine01::get_global_state();
    load_floor_sound_bank();
    if (TLobby::check_disconnect_conditions() != 0) {
        return 0;
    }
    TParticleCtrl::init_heap((void *)0x100000);
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
    init_map_lights((u8 *)((Light_801401D0 *)(&l)));
    TLobby::create_tasks();
    TObjRainCtrl::create();
    TObjBoss5Ctrl::create();
    play_area_music(lbl_8043F1D8);
    return 1;
}

void TLobby::run_floor_update() { TLobby::refresh_render_state(); TLobby::stop_audio_streams(); TLobby::update_current_floor(); unload_current_floor_resources(); TLobby::clear_session_buffers(); }
}
s32 init_cave_b_stage(void) {
    TOKeyMachine01::get_global_state();
    load_floor_sound_bank();
    if (TLobby::check_disconnect_conditions() != 0) {
        return 0;
    }
    init_area_lights();
    TLobby::create_tasks();
    TLobby__sub_801403B4(0);
    if (is_split_screen() != 0) {
        play_area_music(lbl_8043F1E8);
    } else {
        init_music_sequencer(1);
    }
    if ((get_main_phase() != 0xE) || (is_quest_active() == 0)) {
        TBoss4DarkFalz::dispatch_by_main_phase(0x1E);
    }
    return 1;
}
extern "C" {
void TLobby::update_floor_and_windows() { TLobby::refresh_render_state(); TLobby::stop_audio_streams(); TLobby::update_current_floor(); unload_current_floor_resources(); TLobby::clear_session_buffers(); }
}
s32 load_scene_cave_b(void) {
    TOKeyMachine01::get_global_state();
    load_floor_sound_bank();
    if (TLobby::check_disconnect_conditions() != 0) {
        return 0;
    }
    init_area_lights();
    TLobby::create_tasks();
    TLobby__sub_801403B4(0);
    if (is_split_screen() != 0) {
        play_area_music(lbl_8043F1F8);
    } else {
        init_music_sequencer(1);
    }
    return 1;
}
extern "C" {
void TLobby::update_scene() { TLobby::refresh_render_state(); TLobby::stop_audio_streams(); TLobby::update_current_floor(); unload_current_floor_resources(); TLobby::clear_session_buffers(); }
}
s32 init_stage_cave_b(void) {
    TOKeyMachine01::get_global_state();
    load_floor_sound_bank();
    if (TLobby::check_disconnect_conditions() != 0) {
        return 0;
    }
    init_area_lights();
    TLobby::create_tasks();
    TLobby__sub_801403B4(0);
    if (is_split_screen() != 0) {
        play_area_music(lbl_8043F208);
    } else {
        init_music_sequencer(1);
    }
    return 1;
}
extern "C" {
void TLobby::cleanup_boss3_scene() {
    TLobby::refresh_render_state();
    TLobby::stop_audio_streams();
    TTecRaFoie__sub_80226254();
    call_funcs_reverse__6TLobbyFPvUi(TLobby_scene_load_callback_table, 0x60);
    unload_current_floor_resources();
    TLobby::update_current_floor();
    TLobby::clear_session_buffers();
}
s32 TLobby::setup_scene() {
    void *obj;
    TOKeyMachine01::get_global_state();
    load_floor_sound_bank();
    TLobby__sub_80207E44();
    if (TLobby::check_disconnect_conditions() != 0) {
        return 0;
    }
    init_area_lights();
    init_shop_world_context();
    run_load_callback_table(TLobby_scene_load_callback_table, 0x60);
    ((TLobby *)lobby_rule_settings)->reset_settings_to_default();
    TLobby::create_tasks();
    TObjBgmColCtrl::create_controller();
    if (((s32)TOKeyMachine01::get_global_state()) == 0) {
        obj = ((void *)__nw__7TObjectFUl(0x78));
        if (obj != NULL) {
            construct_traffic_manager(obj, tl_05);
        }
    }
    obj = ((void *)__nw__7TObjectFUl(0x1C));
    if (obj != NULL) {
        __ct__13TQuestBgmCtrlFP7TObject(obj, tl_05);
    }
    fn_8006EBC4(tl_07);
    return 1;
}
void TLobby::update_floor_objects() { TLobby::refresh_render_state(); TLobby::stop_audio_streams(); unload_current_floor_resources(); TLobby::update_current_floor(); TLobby::clear_session_buffers(); }
}
s32 init_stage_forest_b(void) {
    TOKeyMachine01::get_global_state();
    load_floor_sound_bank();
    if (TLobby::check_disconnect_conditions() != 0) {
        return 0;
    }
    init_area_lights();
    TLobby::create_tasks();
    if (is_split_screen() != 0) {
        play_area_music(lbl_8043F218);
    } else {
        init_music_sequencer(0);
    }
    TBoss4DarkFalz::dispatch_by_main_phase(0x14);
    return 1;
}
extern "C" {
void TLobby::update_all() { TLobby::refresh_render_state(); TLobby::stop_audio_streams(); unload_current_floor_resources(); TLobby::update_current_floor(); TLobby::clear_session_buffers(); }
}
s32 init_forest_b(void) {
    TOKeyMachine01::get_global_state();
    load_floor_sound_bank();
    if (TLobby::check_disconnect_conditions() != 0) {
        return 0;
    }
    init_area_lights();
    TLobby::create_tasks();
    TObjRainCtrl::create();
    TLobby__sub_801403B4(0);
    if (is_split_screen() != 0) {
        play_area_music(lbl_8043F228);
    } else {
        init_music_sequencer(0);
    }
    return 1;
}
extern "C" {
void TLobby::update_floor_download() {
    TQuestVmDownLoadServer::free_download_buffers();
    unload_current_floor_resources();
    TLobby::update_current_floor();
    call_funcs_reverse__6TLobbyFPvUi(lobby_floor_scene_callbacks, 0x30);
    TLobby::stop_audio_streams();
    TLobby::refresh_render_state();
    TLobby::stop_audio_streams();
    TLobby::clear_session_buffers();
}
s32 TLobby::init_lobby_floor_scene() {
    TOKeyMachine01::get_global_state();
    load_floor_sound_bank();
    if (((s32)run_load_callback_table((s32 *)((void *) (&(*(RecoveredGlobal_80140A6C_lbl_804A73D0 *)&lobby_floor_scene_callbacks).value)), 0x30)) == 0) {
        return 0;
    }
    if (TLobby::check_disconnect_conditions() != 0) {
        return 0;
    }
    init_area_lights();
    TQuestVmDownLoadServer::reset_download_state();
    ((TLobby *)(&(*(RecoveredGlobal_80140A6C_lbl_8050EA40 *)&lobby_rule_settings).value))->reset_settings_to_default();
    TLobby::create_tasks();
    TObjBgmColCtrl::create_controller();
    TLobby__sub_801403B4(0);
    return 1;
}
void TLobby::update_floor_alt() { TLobby::refresh_render_state(); TLobby::stop_audio_streams(); TLobby::update_current_floor(); unload_current_floor_resources(); TLobby::clear_session_buffers(); }
}
s32 init_machine_scene(void) {
    TOKeyMachine01::get_global_state();
    load_floor_sound_bank();
    if (TLobby::check_disconnect_conditions() != 0) {
        return 0;
    }
    init_area_lights();
    TLobby::create_tasks();
    TLobby__sub_801403B4(0);
    if (is_split_screen() != 0) {
        play_area_music(lbl_8043F238);
    } else {
        init_music_sequencer(2);
    }
    if ((get_main_phase() != 0xE) || (is_quest_active() == 0)) {
        TBoss4DarkFalz::dispatch_by_main_phase(0x28);
    }
    return 1;
}
extern "C" {
void TLobby::update_floor_b() { TLobby::refresh_render_state(); TLobby::stop_audio_streams(); TLobby::update_current_floor(); unload_current_floor_resources(); TLobby::clear_session_buffers(); }
}
s32 init_machine_b_scene(void) {
    TOKeyMachine01::get_global_state();
    load_floor_sound_bank();
    if (TLobby::check_disconnect_conditions() != 0) {
        return 0;
    }
    init_area_lights();
    TLobby::create_tasks();
    TLobby__sub_801403B4(0);
    if (is_split_screen() != 0) {
        play_area_music(lbl_8043F248);
    } else {
        init_music_sequencer(2);
    }
    return 1;
}
extern "C" {
void TLobby::refresh_floor_state() { TLobby::refresh_render_state(); TLobby::stop_audio_streams(); unload_current_floor_resources(); TLobby::update_current_floor(); TLobby::clear_session_buffers(); }
void TLobby::run_floor_update_2() { TLobby::refresh_render_state(); TLobby::stop_audio_streams(); unload_current_floor_resources(); TLobby::update_current_floor(); TLobby::clear_session_buffers(); }
}

typedef char RecoveredGlobal_80140A6C_lbl_804A73D0_size[sizeof(RecoveredGlobal_80140A6C_lbl_804A73D0) == 0x30 ? 1 : -1];
typedef char RecoveredGlobal_80140A6C_lbl_8050EA40_size[sizeof(RecoveredGlobal_80140A6C_lbl_8050EA40) == 0x30 ? 1 : -1];
