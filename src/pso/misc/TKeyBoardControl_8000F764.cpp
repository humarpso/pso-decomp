#include "types.h"
#include "pso/misc/TKeyBoardControl.h"

struct RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270 {
    s32 value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_8000F7FC_lbl_80515F48 {
    s32 value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8000F9E4_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F90C_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F9CC_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8FC_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8EC_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F91C_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct G_8000F92C { s32 f0; s32 f4; s32 f8; s32 fc; s32 f10; };

struct G_8000F9B0 { s32 f0; s32 f4; s32 f8; s32 fc; s32 f10; };

typedef struct GXColor_8000FA00 { u8 r, g, b, a; } GXColor_8000FA00;

struct Cfg_8000FAE4 {
    void *rmode;
    s32 count;
    u32 fb[3];
    u32 fbsize;
    u32 heap;
    u32 heapsize;
};

extern "C" {
extern s32 lbl_805D49C0;
void TKeyBoardControl__sub_8000F950(void);
extern s32 lbl_805D49C0;
void TKeyBoardControl__sub_8000F95C(void);
extern s32 keyboard_active_flag;
void activate_keyboard(void);
extern s32 keyboard_active_flag;
void deactivate_keyboard(void);
extern s32 keyboard_key_state;
void mark_area_change_pending(void);
extern s32 keyboard_key_state;
void clear_keyboard_key_state(void);
s32 flush_input__16TKeyBoardControlFv(void);
s32 reset_state_byte__6TLobbyFv();
s32 disable_disconnected_ports__16TKeyBoardControlFv(void *);
s32 update_pad_rumble();
s32 read_pads__16TKeyBoardControlFv();
extern RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270 TKeyBoardControl__global_key_state;
void TKeyBoardControl__sub_8000F764(void);
s32 run_tasks__7TObjectFv(s32 *);
extern RecoveredGlobal_8000F7FC_lbl_80515F48 lbl_80515F48;
void TKeyBoardControl__sub_8000F7FC(void);
extern RecoveredGlobal_8000F9E4_lbl_804FE120 main_phase_state;
void TKeyBoardControl__sub_8000F9E4(void);
extern RecoveredGlobal_8000F9E4_lbl_804FE120 main_phase_state;
void TKeyBoardControl__sub_8000F90C(s32 arg0);
extern RecoveredGlobal_8000F9E4_lbl_804FE120 main_phase_state;
void TKeyBoardControl__sub_8000F9CC(s32 arg0);
extern RecoveredGlobal_8000F9E4_lbl_804FE120 main_phase_state;
s32 get_main_phase(void);
extern RecoveredGlobal_8000F9E4_lbl_804FE120 main_phase_state;
s32 TKeyBoardControl__sub_8000F8EC(void);
extern RecoveredGlobal_8000F9E4_lbl_804FE120 main_phase_state;
void TKeyBoardControl__sub_8000F91C(s32 arg0);
extern s32 keyboard_active_flag;
bool is_keyboard_active(void);
extern RecoveredGlobal_8000F9E4_lbl_804FE120 main_phase_state;
s32 TKeyBoardControl__sub_8000F92C(void);
extern RecoveredGlobal_8000F9E4_lbl_804FE120 main_phase_state;
s32 request_queued_main_phase(void);
void set_cull_none__8TObjFishFv(void);
void GXSetCopyClear(GXColor_8000FA00 clear_clr, u32 clear_z);
void GXCopyDisp(void *dest, int clear);
void GXInitLightPos(void *lt_obj, f32 x, f32 y, f32 z);
void GXInitLightColor(void *lt_obj, GXColor_8000FA00 color);
void GXLoadLightObjImm(void *lt_obj, int light);
void GXSetChanAmbColor(int chan, GXColor_8000FA00 amb_color);
void GXSetChanMatColor(int chan, GXColor_8000FA00 mat_color);
extern u8 gx_default_light_obj[];
extern void *video_initial_draw_framebuffer;
extern void *video_initial_display_framebuffer;
extern GXColor_8000FA00 lbl_805D7D00;
extern GXColor_8000FA00 lbl_805D7D04;
extern GXColor_8000FA00 lbl_805D7D08;
extern const f32 lbl_805D7D0C;
extern const f32 lbl_805D7D10;
extern GXColor_8000FA00 lbl_805E1200;
void init_gx_lighting_defaults(void);
s32 DVDInit();
u32 OSGetArenaHi();
u32 OSGetArenaLo();
s32 OSInit();
s32 OSSetArenaLo(u32);
void TKeyBoardControl__sub_8000F9E4(void);
void init_gx_lighting_defaults(void);
s32 TLobby__sub_8007EB70();
s32 init_disc_error_messages();
s32 load_critical_effect_resources();
s32 init_particle_buffer__13TParticleCtrlFv();
s32 load_ha_u032_kage();
s32 init_download_state__6TLobbyFv();
s32 TObjTailsTailsMove__sub_800FFE10();
s32 reset_input__16TKeyBoardControlFi(void *);
s32 TObjPlayer__sub_801416AC();
s32 load_menu_font();
s32 init_keyboard_buffer__6TLobbyFv();
s32 init_account_entries__6TLobbyFv();
s32 init_pad_state__16TKeyBoardControlFv();
s32 load_ply_level_tbl();
s32 load_banner_files__15TAdPlayerLoadGCFv();
s32 init_particle_sprite_atlas();
s32 init_char_select_globals__23TAdSinglePlyChrSelectGCFv();
s32 reset_story_select__6TLobbyFv();
s32 TLobby__sub_8020E3C0();
s32 TLobby__sub_80226BA4();
s32 TLobby__sub_8022780C();
s32 wait_for_sound_init__6TLobbyFv();
s32 init_main_task__9TMainTaskFv(void *);
s32 init_buffers();
s32 TAdSinglePlyChrSelectGC__sub_802431D0();
s32 load_player_data__6TLobbyFv();
s32 alloc_buffer__16TKeyBoardControlFv();
s32 load_ask_dictionary__6TLobbyFv();
s32 TCharaMaking__sub_8028E6B4();
s32 TCharaMaking__sub_8028E790();
s32 fn_802A1020();
s32 alloc_buffer__15TWindowSnapShotFv();
s32 TLobby__sub_8032C91C();
s32 init_heap__16TAdWarningBaseGCFv();
s32 handle_flag2_request__6TLobbyFv();
s32 load_now_loading_texture__6TLobbyFv();
s32 load_info_icon();
s32 enable_and_trigger__15TObjBoss2TunnelFv();
u32 OSInitAlloc(u32, u32, int);
s32 VIInit();
s32 PADInit();
s32 PADSetSpec(int);
s32 GXSetPixelFmt(int, int);
s32 fn_803D8030(s32, int, int);
s32 fn_803D8064(int);
s32 set_global_count__12TObjNpcEnemyFl(int);
s32 set_matrix_identity(int);
s32 fn_803DA754(s32, int, s32, int);
s32 init_video_and_gx(void *);
s32 update_camera__16TKeyBoardControlFv();
u32 fn_803DD3DC(int, void *);
s32 set_key_state__16TKeyBoardControlFi(void (*)(void));
s32 fn_803DE804(u32, u32);
s32 xmalloc__FUl(u32);
s32 init_pad_slots_and_read__16TKeyBoardControlFv(int, int, int);
s32 init_matrix_stack__10TObjPlayerFll(s32, int);
s32 init_light_globals(int, int);
s32 set_some_id__FUl(int);
s32 TObjPlayer__sub_803E492C(void *, int);
s32 set_global_7778__10TObjPlayerFl(void *);
void TKeyBoardControl__sub_8000F764(void);
extern u8 GXNtsc480IntDf[];
extern RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270 TKeyBoardControl__global_key_state;
extern u8 main_task[];
extern int lbl_805D49A0;
extern int lbl_805D49A4;
extern int player_matrix_stack_buffer;
extern s32 keyboard_input_buffer;
extern int resource_decompress_buffer;
extern int anim_model_matrix_array;
extern int lbl_805D5680;
void init_game_systems(void);
}

extern "C" {

int TKeyBoardControl__sub_8000F828(void);
void shutdown_and_reset_system(void);
int OSResetSystem(void*, void*, void*);
int TAdPlayerLoadGC__sub_801E1350(void);
int release_all__23TAdSinglePlyChrSelectGCFv(void);
int TAdWarningBaseGC__sub_8032D188(void);
int clear_split_screen_fog__8TFogCtrlFv(void*);
int TLobby__sub_80147978(void);
int TLobby__sub_8020E3BC(void);
s32 update_music_sequencer();
int shutdown_buffers__6TLobbyFv(void);
s32 update_global_sound_frame();
int TLobby__sub_8022809C(void);
int TLobby__sub_802433A8(void);
int TObjBoss2Tunnel__sub_8036EF4C(void);
s32 TObjPlayer__sub_80083FB0();
int init_default_config__10TObjPlayerFv(void);
int TObjPlayer__sub_801D92A4(void);
int TObjTailsTailsMove__sub_800FFE0C(void);
int reset_emitter_table__13TParticleCtrlFv(void);
int TWindowSnapShot__sub_802A7DA0(void);
int TWindowSubStatusDisp__sub_803386F0(void);
int destroy_game_heap__6TLobbyFv(void);
int destroy_resources__16TObjEneMe3StelthFv(void);
int fn_80082A6C(void);
int VIWaitForRetrace(void);
int VIFlush(void);
int VISetBlack(void*);
int free_resources__23TAdSinglePlyChrSelectGCFv(void);
int free_system__13TParticleCtrlFv(void);
s32 run_tasks__7TObjectFv(s32 *);
int xfree__FPv(void*);

extern s32 keyboard_task_object[];
extern s32 lbl_805D62B0;

typedef char RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
void TKeyBoardControl__sub_8000F764(void) {
    read_pads__16TKeyBoardControlFv();
    disable_disconnected_ports__16TKeyBoardControlFv((void *) (&TKeyBoardControl__global_key_state.value));
    flush_input__16TKeyBoardControlFv();
    update_pad_rumble();
    reset_state_byte__6TLobbyFv();
}

void TKeyBoardControl::run_tasks() {
    TObjPlayer__sub_80083FB0();
    update_global_sound_frame();
    if ((s32) lbl_805D62B0 != 0) {
        update_music_sequencer();
    }
    run_tasks__7TObjectFv(keyboard_task_object);
}

int TKeyBoardControl::get_fog_ctrl() { return clear_split_screen_fog__8TFogCtrlFv(this); }

typedef char RecoveredGlobal_8000F7FC_lbl_80515F48_size[sizeof(RecoveredGlobal_8000F7FC_lbl_80515F48) == 0x28 ? 1 : -1];
void TKeyBoardControl__sub_8000F7FC(void) {
    run_tasks__7TObjectFv((s32 *)(&lbl_80515F48.value));
}

void TKeyBoardControl::update() {  }
int TKeyBoardControl__sub_8000F828(void) { return 0; }

    extern int lbl_805D49A0;
    extern int lbl_805D49A4;
    extern int player_matrix_stack_buffer;
    extern int resource_decompress_buffer;
    extern int anim_model_matrix_array;
    extern int lbl_805D5680;
void shutdown_and_reset_system(void) { TLobby__sub_802433A8(); TObjTailsTailsMove__sub_800FFE0C(); init_default_config__10TObjPlayerFv(); destroy_resources__16TObjEneMe3StelthFv(); TAdPlayerLoadGC__sub_801E1350(); free_system__13TParticleCtrlFv(); reset_emitter_table__13TParticleCtrlFv(); fn_80082A6C(); free_resources__23TAdSinglePlyChrSelectGCFv(); TObjPlayer__sub_801D92A4(); TLobby__sub_8020E3BC(); TWindowSnapShot__sub_802A7DA0(); TAdWarningBaseGC__sub_8032D188(); destroy_game_heap__6TLobbyFv(); TLobby__sub_8022809C(); shutdown_buffers__6TLobbyFv(); release_all__23TAdSinglePlyChrSelectGCFv(); TWindowSubStatusDisp__sub_803386F0(); TObjBoss2Tunnel__sub_8036EF4C(); TLobby__sub_80147978(); xfree__FPv((void*)(lbl_805D49A0)); xfree__FPv((void*)(lbl_805D49A4)); xfree__FPv((void*)(resource_decompress_buffer)); xfree__FPv((void*)(lbl_805D5680)); xfree__FPv((void*)(anim_model_matrix_array)); xfree__FPv((void*)(player_matrix_stack_buffer)); VISetBlack((void*)1); VIFlush(); VIWaitForRetrace(); OSResetSystem((void*)1, (void*)0, (void*)1); }

extern s32 lbl_805D49C0;

typedef char RecoveredGlobal_8000F90C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F90C_lbl_804FE120) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8000F8FC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8FC_lbl_804FE120) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8000F8EC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8EC_lbl_804FE120) == 0x18 ? 1 : -1];
s32 TKeyBoardControl__sub_8000F8EC(void) {
    return *(s32 *)((s8 *)(&(*(RecoveredGlobal_8000F8EC_lbl_804FE120 *)&main_phase_state).value) + 0x14);
}

s32 get_main_phase(void) {
    return (*(RecoveredGlobal_8000F8FC_lbl_804FE120 *)&main_phase_state).value;
}

void TKeyBoardControl__sub_8000F90C(s32 arg0) {
    *(s32 *)((s8 *)(&(*(RecoveredGlobal_8000F90C_lbl_804FE120 *)&main_phase_state).value) + 0xC) = arg0;
}

typedef char RecoveredGlobal_8000F91C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F91C_lbl_804FE120) == 0x18 ? 1 : -1];
void TKeyBoardControl__sub_8000F91C(s32 arg0) {
    *(s32 *)((s8 *)(&(*(RecoveredGlobal_8000F91C_lbl_804FE120 *)&main_phase_state).value) + 8) = arg0;
}

s32 TKeyBoardControl__sub_8000F92C(void) {
    (*(G_8000F92C *)&main_phase_state).f10 = 3;
    return (*(G_8000F92C *)&main_phase_state).f4 = (*(G_8000F92C *)&main_phase_state).fc;
}

s32 TKeyBoardControl::get_input() {
    return lbl_805D49C0;
}

extern s32 keyboard_key_state;

void TKeyBoardControl__sub_8000F950(void) {
    lbl_805D49C0 = 1;
}

void TKeyBoardControl__sub_8000F95C(void) {
    lbl_805D49C0 = 0;
}

bool is_keyboard_active(void) {
    return keyboard_active_flag != 0;
}

void activate_keyboard(void) {
    keyboard_active_flag = 1;
}

void deactivate_keyboard(void) {
    keyboard_active_flag = 0;
}

s32 TKeyBoardControl::get_key_state() {
    return keyboard_key_state;
}

void mark_area_change_pending(void) {
    keyboard_key_state = 1;
}

void clear_keyboard_key_state(void) {
    keyboard_key_state = 0;
}
typedef char RecoveredGlobal_8000F9E4_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9E4_lbl_804FE120) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8000F9CC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9CC_lbl_804FE120) == 0x18 ? 1 : -1];

s32 request_queued_main_phase(void) {
    (*(G_8000F9B0 *)&main_phase_state).f10 = 2;
    return (*(G_8000F9B0 *)&main_phase_state).f4 = (*(G_8000F9B0 *)&main_phase_state).f8;
}

void TKeyBoardControl__sub_8000F9CC(s32 arg0) {
    *(s32 *)((s8 *)(&(*(RecoveredGlobal_8000F9CC_lbl_804FE120 *)&main_phase_state).value) + 4) = arg0;
    *(s32 *)((s8 *)(&(*(RecoveredGlobal_8000F9CC_lbl_804FE120 *)&main_phase_state).value) + 0x10) = 1;
}

void TKeyBoardControl__sub_8000F9E4(void) {
    *(s32 *)((s8 *)(&main_phase_state.value) + 0) = 1;
    *(s32 *)((s8 *)(&main_phase_state.value) + 8) = 1;
    *(s32 *)((s8 *)(&main_phase_state.value) + 0xC) = 1;
    *(s32 *)((s8 *)(&main_phase_state.value) + 0x14) = 1;
}
void init_gx_lighting_defaults(void) {
    GXColor_8000FA00 c0 = lbl_805D7D00;
    GXColor_8000FA00 c1 = lbl_805D7D04;
    GXColor_8000FA00 c2 = lbl_805D7D08;
    GXSetCopyClear(lbl_805E1200, 0xFFFFFF);
    GXInitLightPos(gx_default_light_obj, lbl_805D7D0C, lbl_805D7D10, lbl_805D7D0C);
    GXInitLightColor(gx_default_light_obj, c2);
    GXLoadLightObjImm(gx_default_light_obj, 1);
    GXSetChanAmbColor(0, c0);
    GXSetChanAmbColor(2, c2);
    GXSetChanMatColor(4, c1);
    GXCopyDisp(video_initial_display_framebuffer, 1);
    GXCopyDisp(video_initial_draw_framebuffer, 1);
    set_cull_none__8TObjFishFv();
}
void init_game_systems(void) {
    Cfg_8000FAE4 cfg;
    u32 lo;
    u32 hi;
    u32 size;
    u32 start;
    s32 t;
    PADSetSpec(5);
    OSInit();
    DVDInit();
    VIInit();
    PADInit();
    update_camera__16TKeyBoardControlFv();
    lo = OSGetArenaLo();
    hi = OSGetArenaHi();
    cfg.rmode = NULL;
    cfg.rmode = GXNtsc480IntDf;
    cfg.count = 2;
    size = fn_803DD3DC(0, GXNtsc480IntDf);
    cfg.fb[0] = (lo + 0x1F) & ~0x1F;
    cfg.fbsize = 0x40000;
    cfg.fb[1] = cfg.fb[0] + size;
    cfg.fb[2] = cfg.fb[1] + size;
    cfg.heap = OSInitAlloc(cfg.fb[2] + 0x40000, hi, 2);
    cfg.heapsize = 0x518000;
    start = cfg.heap + 0x518000;
    fn_803DE804(start, hi - start);
    init_video_and_gx(&cfg);
    OSSetArenaLo(hi);
    (*(s32 *)&lbl_805D49A0) = xmalloc__FUl(0x4560);
    (*(s32 *)&lbl_805D49A4) = xmalloc__FUl(0x73A0);
    fn_803DA754((*(s32 *)&lbl_805D49A0), 0x2E4, (*(s32 *)&lbl_805D49A4), 0x2E4);
    init_light_globals((int) (0), (int) (0));
    set_some_id__FUl(0x100000);
    (*(s32 *)&resource_decompress_buffer) = xmalloc__FUl(0x80000);
    (*(s32 *)&lbl_805D5680) = xmalloc__FUl(0x6000);
    (*(s32 *)&anim_model_matrix_array) = xmalloc__FUl(0x14A0);
    TObjPlayer__sub_803E492C((void *) ((*(s32 *)&resource_decompress_buffer)), (int) (0x2000));
    set_key_state__16TKeyBoardControlFi(TKeyBoardControl__sub_8000F764);
    (*(s32 *)&player_matrix_stack_buffer) = xmalloc__FUl(0x600);
    init_matrix_stack__10TObjPlayerFll((*(s32 *)&player_matrix_stack_buffer), 0x20);
    set_matrix_identity(0);
    init_pad_slots_and_read__16TKeyBoardControlFv((int) (0), (int) (0), (int) (0));
    enable_and_trigger__15TObjBoss2TunnelFv();
    TAdSinglePlyChrSelectGC__sub_802431D0();
    init_pad_state__16TKeyBoardControlFv();
    set_global_7778__10TObjPlayerFl((void *)(*(s32 *)&lbl_805D5680));
    keyboard_input_buffer = xmalloc__FUl(0x1000);
    fn_803D8030(keyboard_input_buffer, 0x80, 0x800);
    set_global_count__12TObjNpcEnemyFl(-1);
    fn_803D8064(0xC);
    init_gx_lighting_defaults();
    TObjPlayer__sub_801416AC();
    alloc_buffer__16TKeyBoardControlFv();
    TKeyBoardControl__sub_8000F9E4();
    reset_input__16TKeyBoardControlFi(&TKeyBoardControl__global_key_state);
    init_buffers();
    init_main_task__9TMainTaskFv(main_task);
    TLobby__sub_8007EB70();
    TLobby__sub_8022780C();
    init_download_state__6TLobbyFv();
    load_menu_font();
    load_now_loading_texture__6TLobbyFv();
    TCharaMaking__sub_8028E790();
    init_char_select_globals__23TAdSinglePlyChrSelectGCFv();
    TLobby__sub_80226BA4();
    wait_for_sound_init__6TLobbyFv();
    load_info_icon();
    TLobby__sub_8020E3C0();
    alloc_buffer__15TWindowSnapShotFv();
    init_heap__16TAdWarningBaseGCFv();
    load_ask_dictionary__6TLobbyFv();
    TCharaMaking__sub_8028E6B4();
    load_critical_effect_resources();
    init_particle_sprite_atlas();
    init_particle_buffer__13TParticleCtrlFv();
    GXSetPixelFmt((int) (1), (int) (0));
    init_disc_error_messages();
    init_keyboard_buffer__6TLobbyFv();
    load_banner_files__15TAdPlayerLoadGCFv();
    load_player_data__6TLobbyFv();
    init_account_entries__6TLobbyFv();
    load_ha_u032_kage();
    TObjTailsTailsMove__sub_800FFE10();
    reset_story_select__6TLobbyFv();
    TLobby__sub_8032C91C();
    load_ply_level_tbl();
    fn_802A1020();
    handle_flag2_request__6TLobbyFv();
}

}
