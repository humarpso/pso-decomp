#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270 {
    M2C_UNK value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_8000F7FC_lbl_80515F48 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8000F9E4_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F90C_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F9CC_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8FC_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8EC_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F91C_lbl_804FE120 {
    M2C_UNK value;
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
void TKeyBoardControl__sub_8000F978(void);
extern s32 keyboard_active_flag;
void TKeyBoardControl__sub_8000F984(void);
extern s32 keyboard_key_state;
void mark_area_change_pending(void);
extern s32 keyboard_key_state;
void TKeyBoardControl__sub_8000F9A4(void);
s32 flush_input__16TKeyBoardControlFv(void);
M2C_UNK reset_state_byte__6TLobbyFv();
M2C_UNK disable_disconnected_ports__16TKeyBoardControlFv(void *);
M2C_UNK update_pad_rumble();
M2C_UNK read_pads__16TKeyBoardControlFv();
extern RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270 TKeyBoardControl__global_key_state;
void TKeyBoardControl__sub_8000F764(void);
M2C_UNK run_tasks__7TObjectFv(M2C_UNK *);
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
bool TKeyBoardControl__sub_8000F968(void);
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
M2C_UNK DVDInit();
u32 OSGetArenaHi();
u32 OSGetArenaLo();
M2C_UNK OSInit();
M2C_UNK OSSetArenaLo(u32);
void TKeyBoardControl__sub_8000F9E4(void);
void init_gx_lighting_defaults(void);
M2C_UNK TLobby__sub_8007EB70();
M2C_UNK init_disc_error_messages();
M2C_UNK load_critical_effect_resources();
M2C_UNK init_particle_buffer__13TParticleCtrlFv();
M2C_UNK load_ha_u032_kage();
M2C_UNK init_download_state__6TLobbyFv();
M2C_UNK TObjTailsTailsMove__sub_800FFE10();
M2C_UNK reset_input__16TKeyBoardControlFi(void *);
M2C_UNK TObjPlayer__sub_801416AC();
M2C_UNK load_menu_font();
M2C_UNK init_keyboard_buffer__6TLobbyFv();
M2C_UNK init_account_entries__6TLobbyFv();
M2C_UNK init_pad_state__16TKeyBoardControlFv();
M2C_UNK load_ply_level_tbl();
M2C_UNK load_banner_files__15TAdPlayerLoadGCFv();
M2C_UNK init_particle_sprite_atlas();
M2C_UNK init_char_select_globals__23TAdSinglePlyChrSelectGCFv();
M2C_UNK reset_story_select__6TLobbyFv();
M2C_UNK TLobby__sub_8020E3C0();
M2C_UNK TLobby__sub_80226BA4();
M2C_UNK TLobby__sub_8022780C();
M2C_UNK wait_for_sound_init__6TLobbyFv();
M2C_UNK init_main_task__9TMainTaskFv(void *);
M2C_UNK init_buffers();
M2C_UNK TAdSinglePlyChrSelectGC__sub_802431D0();
M2C_UNK load_player_data__6TLobbyFv();
M2C_UNK alloc_buffer__16TKeyBoardControlFv();
M2C_UNK load_ask_dictionary__6TLobbyFv();
M2C_UNK TCharaMaking__sub_8028E6B4();
M2C_UNK TCharaMaking__sub_8028E790();
M2C_UNK fn_802A1020();
M2C_UNK alloc_buffer__15TWindowSnapShotFv();
M2C_UNK TLobby__sub_8032C91C();
M2C_UNK init_heap__16TAdWarningBaseGCFv();
M2C_UNK handle_flag2_request__6TLobbyFv();
M2C_UNK load_now_loading_texture__6TLobbyFv();
M2C_UNK load_info_icon();
M2C_UNK enable_and_trigger__15TObjBoss2TunnelFv();
u32 OSInitAlloc(u32, u32, int);
M2C_UNK VIInit();
M2C_UNK PADInit();
M2C_UNK PADSetSpec(int);
M2C_UNK GXSetPixelFmt(int, int);
M2C_UNK fn_803D8030(s32, int, int);
M2C_UNK fn_803D8064(int);
M2C_UNK set_global_count__12TObjNpcEnemyFi(int);
M2C_UNK set_matrix_identity(int);
M2C_UNK fn_803DA754(s32, int, s32, int);
M2C_UNK init_video_and_gx(void *);
M2C_UNK update_camera__16TKeyBoardControlFv();
u32 fn_803DD3DC(int, void *);
M2C_UNK set_key_state__16TKeyBoardControlFi(void (*)(void));
M2C_UNK fn_803DE804(u32, u32);
s32 xmalloc__FUl(u32);
M2C_UNK init_pad_slots_and_read__16TKeyBoardControlFv(int, int, int);
M2C_UNK init_matrix_stack__10TObjPlayerFii(s32, int);
M2C_UNK init_light_globals(int, int);
M2C_UNK set_some_id__FUl(int);
M2C_UNK TObjPlayer__sub_803E492C(void *, int);
M2C_UNK set_global_7778__10TObjPlayerFi(void *);
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
int get_fog_ctrl__16TKeyBoardControlFPv(void* p);
s32 get_input__16TKeyBoardControlFv(void);
s32 get_key_state__16TKeyBoardControlFv(void);
void run_tasks__16TKeyBoardControlFv(void);
void shutdown_and_reset_system(void);
void update__16TKeyBoardControlFv(void);
int OSResetSystem(void*, void*, void*);
int TAdPlayerLoadGC__sub_801E1350(void);
int release_all__23TAdSinglePlyChrSelectGCFv(void);
int TAdWarningBaseGC__sub_8032D188(void);
int clear_split_screen_fog__8TFogCtrlFv(void*);
int TLobby__sub_80147978(void);
int TLobby__sub_8020E3BC(void);
M2C_UNK update_music_sequencer();
int shutdown_buffers__6TLobbyFv(void);
M2C_UNK update_global_sound_frame();
int TLobby__sub_8022809C(void);
int TLobby__sub_802433A8(void);
int TObjBoss2Tunnel__sub_8036EF4C(void);
M2C_UNK TObjPlayer__sub_80083FB0();
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
M2C_UNK run_tasks__7TObjectFv(M2C_UNK *);
int xfree__FPv(void*);

extern M2C_UNK lbl_80515F70[];
extern s32 lbl_805D62B0;

typedef char RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
void TKeyBoardControl__sub_8000F764(void) {
    read_pads__16TKeyBoardControlFv();
    disable_disconnected_ports__16TKeyBoardControlFv((void *) (&TKeyBoardControl__global_key_state.value));
    flush_input__16TKeyBoardControlFv();
    update_pad_rumble();
    reset_state_byte__6TLobbyFv();
}

void run_tasks__16TKeyBoardControlFv(void) {
    TObjPlayer__sub_80083FB0();
    update_global_sound_frame();
    if ((s32) lbl_805D62B0 != 0) {
        update_music_sequencer();
    }
    run_tasks__7TObjectFv(lbl_80515F70);
}

int get_fog_ctrl__16TKeyBoardControlFPv(void* p) { return clear_split_screen_fog__8TFogCtrlFv(p); }

typedef char RecoveredGlobal_8000F7FC_lbl_80515F48_size[sizeof(RecoveredGlobal_8000F7FC_lbl_80515F48) == 0x28 ? 1 : -1];
void TKeyBoardControl__sub_8000F7FC(void) {
    run_tasks__7TObjectFv((M2C_UNK *)(&lbl_80515F48.value));
}

void update__16TKeyBoardControlFv(void) {  }
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
    return M2C_FIELD(&(*(RecoveredGlobal_8000F8EC_lbl_804FE120 *)&main_phase_state).value, s32 *, 0x14);
}

s32 get_main_phase(void) {
    return (*(RecoveredGlobal_8000F8FC_lbl_804FE120 *)&main_phase_state).value;
}

void TKeyBoardControl__sub_8000F90C(s32 arg0) {
    M2C_FIELD(&(*(RecoveredGlobal_8000F90C_lbl_804FE120 *)&main_phase_state).value, s32 *, 0xC) = arg0;
}

typedef char RecoveredGlobal_8000F91C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F91C_lbl_804FE120) == 0x18 ? 1 : -1];
void TKeyBoardControl__sub_8000F91C(s32 arg0) {
    M2C_FIELD(&(*(RecoveredGlobal_8000F91C_lbl_804FE120 *)&main_phase_state).value, s32 *, 8) = arg0;
}

s32 TKeyBoardControl__sub_8000F92C(void) {
    (*(G_8000F92C *)&main_phase_state).f10 = 3;
    return (*(G_8000F92C *)&main_phase_state).f4 = (*(G_8000F92C *)&main_phase_state).fc;
}

s32 get_input__16TKeyBoardControlFv(void) {
    return lbl_805D49C0;
}

extern s32 keyboard_key_state;

void TKeyBoardControl__sub_8000F950(void) {
    lbl_805D49C0 = 1;
}

void TKeyBoardControl__sub_8000F95C(void) {
    lbl_805D49C0 = 0;
}

bool TKeyBoardControl__sub_8000F968(void) {
    return keyboard_active_flag != 0;
}

void TKeyBoardControl__sub_8000F978(void) {
    keyboard_active_flag = 1;
}

void TKeyBoardControl__sub_8000F984(void) {
    keyboard_active_flag = 0;
}

s32 get_key_state__16TKeyBoardControlFv(void) {
    return keyboard_key_state;
}

void mark_area_change_pending(void) {
    keyboard_key_state = 1;
}

void TKeyBoardControl__sub_8000F9A4(void) {
    keyboard_key_state = 0;
}
typedef char RecoveredGlobal_8000F9E4_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9E4_lbl_804FE120) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8000F9CC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9CC_lbl_804FE120) == 0x18 ? 1 : -1];

s32 request_queued_main_phase(void) {
    (*(G_8000F9B0 *)&main_phase_state).f10 = 2;
    return (*(G_8000F9B0 *)&main_phase_state).f4 = (*(G_8000F9B0 *)&main_phase_state).f8;
}

void TKeyBoardControl__sub_8000F9CC(s32 arg0) {
    M2C_FIELD(&(*(RecoveredGlobal_8000F9CC_lbl_804FE120 *)&main_phase_state).value, s32 *, 4) = arg0;
    M2C_FIELD(&(*(RecoveredGlobal_8000F9CC_lbl_804FE120 *)&main_phase_state).value, s32 *, 0x10) = 1;
}

void TKeyBoardControl__sub_8000F9E4(void) {
    M2C_FIELD(&main_phase_state.value, s32 *, 0) = 1;
    M2C_FIELD(&main_phase_state.value, s32 *, 8) = 1;
    M2C_FIELD(&main_phase_state.value, s32 *, 0xC) = 1;
    M2C_FIELD(&main_phase_state.value, s32 *, 0x14) = 1;
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
    init_matrix_stack__10TObjPlayerFii((*(s32 *)&player_matrix_stack_buffer), 0x20);
    set_matrix_identity(0);
    init_pad_slots_and_read__16TKeyBoardControlFv((int) (0), (int) (0), (int) (0));
    enable_and_trigger__15TObjBoss2TunnelFv();
    TAdSinglePlyChrSelectGC__sub_802431D0();
    init_pad_state__16TKeyBoardControlFv();
    set_global_7778__10TObjPlayerFi((void *)(*(s32 *)&lbl_805D5680));
    keyboard_input_buffer = xmalloc__FUl(0x1000);
    fn_803D8030(keyboard_input_buffer, 0x80, 0x800);
    set_global_count__12TObjNpcEnemyFi(-1);
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
