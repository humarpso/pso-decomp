#pragma push

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8033B264_lbl_804EF728 {
    M2C_UNK value;
    u8 remaining[0x194];
};

struct RecoveredGlobal_8033B264_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct O_8033AA64 { u8 pad[0x2C]; s32 f2c; u8 pad2[0x3C - 0x30]; s32 f3c; };

struct O_8033AC44 { u8 pad[0x24]; s32 f24; s32 f28; s32 f2c; };

typedef s32 M2C_UNK;
struct O_8033AB04 { u8 pad[0x24]; s32 f24; u8 pad2[4]; s32 f2C; };

struct O_8033ACF4 { u8 pad[0x24]; s32 f24; s32 f28; s32 f2C; };

struct V3_8033B2AC { s32 x, y, z; };

struct V3_8033B39C { f32 x, y, z; };

extern "C" {
extern s32 single_ply_quest_download_server;
void set_quest_download_server__23TAdSinglePlyChrSelectGCFi(int a0);
extern s32 lbl_805D6D80;
extern s32 lbl_805D6D84;
extern s32 lbl_805D6D88;
extern s32 single_ply_quest_download_server;
void init_logo_state__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void noop__23TAdSinglePlyChrSelectGCFv(void);
int safe_free__23TAdSinglePlyChrSelectGCFUi(void*);
void free_buffer__23TAdSinglePlyChrSelectGCFPv(void* p);
int memset(void*, void*, void*);
void clear_buffer(void* p);
u32 alloc__22TQuestVmDownLoadServerFPv(s32);
void alloc_download_buffer__23TAdSinglePlyChrSelectGCFPv(void *arg0);
extern s32 lbl_805D6D90;
void TAdSinglePlyChrSelectGC__sub_8033A9F0(u8 *arg0);
int queue_destruction__7TObjectFv(void*);
int queue_destruction__23TAdSinglePlyChrSelectGCFPv(void* p);
struct TAdSinglePlyChrSelectGC__sub_8033B5F0; void TAdSinglePlyChrSelectGC__sub_8033B5F0(void *arg0);
M2C_UNK set_player_index__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
s32 setup__23TAdSinglePlyChrSelectGCFi(s32);
void update_setup__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FDA4C();

M2C_UNK set_player_index__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
void update_select_state__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void TAdSinglePlyChrSelectGC__sub_8033B9E0(void *);
u8 * create_check_memory_card__23TAdSinglePlyChrSelectGCFPvPvPv(void *, void *, void *);
void start_check_memory_card__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
s32 send_and_handle__6TLobbyFPvii(s32, s32, s32);
void set_char_slots__23TAdSinglePlyChrSelectGCFPvii(void *arg0, s32 arg1, s32 arg2);
int request_queued_main_phase(void*);
int TAdSinglePlyChrSelectGC__sub_8033B244(void* p);
M2C_UNK call_funcs_reverse__6TLobbyFPvUi(void *, int);
M2C_UNK render_tick__Fv();
M2C_UNK set_and_notify__6TLobbyFi(int);
M2C_UNK stop_audio_streams__6TLobbyFv();
M2C_UNK delete_all_task_children__9TMainTaskFv(void *);
extern void *character_select_scene_resource_callbacks[];
#define character_select_scene_resource_callbacks (*(RecoveredGlobal_8033B264_lbl_804EF728 *)&character_select_scene_resource_callbacks)
extern RecoveredGlobal_8033B264_main_task main_task;
void TAdSinglePlyChrSelectGC__sub_8033B264(void);
M2C_UNK TWindow__close(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
int update_layout_height__17TWindowSubComCardFPvf(void*, float);
int check_room_seq_4__16TAdChrSelASlotGCFii(void*, void*);
int forward_trade_action_default__16TObjCityMainWarpFPviii(void*, void*, void*, void*);
    extern unsigned char lbl_80477D58[];
    extern const float lbl_805DFA30;
void init_warp__23TAdSinglePlyChrSelectGCFPv(void* a0);
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
int update_layout_height__17TWindowSubComCardFPvf(void*, float);
int check_room_seq_4__16TAdChrSelASlotGCFii(void*, void*);
void close_window__23TAdSinglePlyChrSelectGCFPv(void *arg0);
int forward_trade_action_default__16TObjCityMainWarpFPviii(void*, void*, void*, void*);
extern unsigned char lbl_80477D58[];
extern const float lbl_805DFA30;
void init_warps__23TAdSinglePlyChrSelectGCFPv(void* a0);
s32 is_visible__17TWindowSubComCardFPv(int);
s32 init__22THunterGuildSeqOfflineFPvPvPv(u32, int, void *);
u32 __nw__7TObjectFUl(int);
s32 get_selected_menu_value(int);
void close_window__23TAdSinglePlyChrSelectGCFPv(void *arg0);

int TAdSinglePlyChrSelectGC__sub_8033B244(void* p);
extern s32 tl_fade;
void TAdSinglePlyChrSelectGC__sub_8033AA64(O_8033AA64 *arg0);
s32 get_card_file_info__15TAdPlayerLoadGCFiPvPv(int, void *, int);
s32 query_memcard_capacity__15TAdPlayerLoadGCFi(int, int);
void set_char_slots__23TAdSinglePlyChrSelectGCFPvii(void *arg0, s32 arg1, s32 arg2);
void init_warps__23TAdSinglePlyChrSelectGCFPv(void* a0);
extern u8 lbl_804C89BC[];
extern s32 lbl_805D6D90;
void check_memcard_space__23TAdSinglePlyChrSelectGCFPv(O_8033AC44 *arg0);
s32 get_instance__15TAdPlayerLoadGCFv(void);
s32 init__22THunterGuildSeqOfflineFPvPvPv(u32, int, void *);
s32 get_load_result__15TAdPlayerLoadGCFv(s32);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 probe_card_slot__15TAdPlayerLoadGCFi(s32);
u32 __nw__7TObjectFUl(int);
void set_char_slots__23TAdSinglePlyChrSelectGCFPvii(void *arg0, s32 arg1, s32 arg2);
void close_window__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void init_warps__23TAdSinglePlyChrSelectGCFPv(void* a0);

int TAdSinglePlyChrSelectGC__sub_8033B244(void* p);
extern s32 tl_fade;
extern s32 lbl_805D6D90;
void handle_player_load__23TAdSinglePlyChrSelectGCFPv(O_8033AB04 *arg0);
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv(void);
s32 TAdSinglePlyChrSelectGC__sub_8001C5F0(void);
s32 get_instance__15TAdPlayerLoadGCFv(void);
s32 get_load_result__15TAdPlayerLoadGCFv(s32);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 probe_card_slot__15TAdPlayerLoadGCFi(s32);
void check_ready__23TAdSinglePlyChrSelectGCFv(void);
void set_char_slots__23TAdSinglePlyChrSelectGCFPvii(void *arg0, s32 arg1, s32 arg2);
void init_warps__23TAdSinglePlyChrSelectGCFPv(void* a0);

extern s32 lbl_805D6D90;
void TAdSinglePlyChrSelectGC__sub_8033ACF4(O_8033ACF4 *arg0);
M2C_UNK TKeyBoardControl__sub_8000F92C();
M2C_UNK TKeyBoardControl__sub_8000F9CC(int);
M2C_UNK set_active_camera_pose(void *, void *);
M2C_UNK activate_camera_mode(int);
s32 is_ready__22TQuestVmDownLoadServerFv();
M2C_UNK TLobby__sub_800FA464();
s8 func_801A5E54__Fv();
M2C_UNK update_input_frame__16TKeyBoardControlFv();
M2C_UNK controller_stuff__Fv();
M2C_UNK render_tick__Fv();
M2C_UNK run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
M2C_UNK update_sound_request_slots();
M2C_UNK render_screen_overlay__9TMainTaskFv(void *);
M2C_UNK some_empty_func__9TMainTaskFv(void *);
M2C_UNK render__9TMainTaskFv(void *);
M2C_UNK run_task__9TMainTaskFv(void *);
void noop__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK func_803DCDFC__Fv();
extern V3_8033B2AC lbl_80477D78[];
extern V3_8033B2AC lbl_80477D84[];
extern RecoveredGlobal_8033B264_main_task main_task;
extern s32 lbl_805D6D90;
void run_frame__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK TKeyBoardControl__sub_8000F90C(int);
M2C_UNK set_active_camera_pose(void *, void *);
M2C_UNK select_active_controller__11TCameraCtrlFc(int);
M2C_UNK TCameraCtrl__ct(u32, s32);
M2C_UNK run_load_callback_table(void *, int);
M2C_UNK init_menu_scene_lights(void *, int);
M2C_UNK reset_controller_input_state();
M2C_UNK reset_settings_to_default__6TLobbyFPv(void *);
M2C_UNK set_copy_clear_color_argb(int, int, int);
M2C_UNK render_tick__Fv();
M2C_UNK set_and_notify__6TLobbyFi(int);
M2C_UNK play_area_music(void *);
u32 __nw__7TObjectFUl(int);
M2C_UNK TWindowCtrlMain__ct(u32);
void *construct__23TAdSinglePlyChrSelectGCFPv(void *arg0);
extern V3_8033B39C lbl_80477D60[];
extern V3_8033B39C lbl_80477D6C[];
extern u8 lbl_80477D90[];
extern u8 default_scene_light_config[];

extern u8 lobby_rule_settings[];
extern s32 tl_camera;
extern s32 lbl_805D6D90;
void init_single_player_char_select_scene(void);
s32 TQuestVmDownLoadServer__sub_8006EF6C(s32);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
M2C_UNK register_callback__23TAdSinglePlyChrSelectGCFis(int, int);
u32 init_char_slots__23TAdSinglePlyChrSelectGCFi();
int TAdSinglePlyChrSelectGC__sub_801FCD3C(void *);
s32 compare_save_headers__23TAdSinglePlyChrSelectGCFPvPvPvPv(int, int, int, int);
M2C_UNK decrypt_char_data__23TAdSinglePlyChrSelectGCFPv(int);
M2C_UNK encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv(int);
M2C_UNK save_character_file__23TAdSinglePlyChrSelectGCFi(int);
s32 init_and_register__23TAdSinglePlyChrSelectGCFi(int);
s32 get_field_118__22TAdEnterSerialAccessGCFv();
s32 get_character_save_record(int);
s32 get_instance__23TAdSinglePlyChrSelectGCFv();
s32 send_and_handle__6TLobbyFPvii(s32, s32, s32);
void init_warp__23TAdSinglePlyChrSelectGCFPv(void* a0);
void init_warps__23TAdSinglePlyChrSelectGCFPv(void* a0);
void seed_character_select_serial_rng(s32);
M2C_UNK memcpy(int, void *, int);
extern s32 lbl_805D6D90;
void handle_load_result__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
int queue_destruction__7TObjectFv(void*);
s32 init__22THunterGuildSeqOfflineFPvPvPv(u32, int, void *);
u32 __nw__7TObjectFUl(int);
s32 update_window_mode_from_progress__6TLobbyFiPv(M2C_UNK *, M2C_UNK *);
void close_window__23TAdSinglePlyChrSelectGCFPv(void *arg0);

s32 get_field_44__23TAdSinglePlyChrSelectGCFPv(void *);
struct TAdSinglePlyChrSelectGC__sub_8033B9F8; u8 TAdSinglePlyChrSelectGC__sub_8033B9F8(u8 *arg0);
int TAdSinglePlyChrSelectGC__sub_8033B244(void* p);
extern M2C_UNK lbl_80477D48[];
extern M2C_UNK lbl_80477D50[];
extern s32 tl_fade;
extern s32 lbl_805D6D90;
void TAdSinglePlyChrSelectGC__sub_8033B0AC(void *arg0);
}

extern "C" {

void reset_quest_id__23TAdSinglePlyChrSelectGCFv(void);

extern s32 single_ply_quest_download_server;

void reset_quest_id__23TAdSinglePlyChrSelectGCFv(void) {
    single_ply_quest_download_server = 0xFFFF;
}
void set_quest_download_server__23TAdSinglePlyChrSelectGCFi(int a0) { (*(int *)&single_ply_quest_download_server) = a0; }
void init_logo_state__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    lbl_805D6D88 = 0;
    lbl_805D6D84 = 0;
    lbl_805D6D80 = arg0;
    single_ply_quest_download_server = 0xFFFF;
}
void noop__23TAdSinglePlyChrSelectGCFv(void) {  }
void free_buffer__23TAdSinglePlyChrSelectGCFPv(void* p) { if (*(unsigned int*)((char*)p + 0x20) != 0) { safe_free__23TAdSinglePlyChrSelectGCFUi(*(void**)((char*)p + 0x20)); *(int*)((char*)p + 0x20) = 0; *(int*)((char*)p + 0x1c) = 0; } }
void clear_buffer(void* p) { if (*(unsigned int*)((char*)p + 0x20) != 0) { memset(*(void**)((char*)p + 0x20), (void*)0, *(void**)((char*)p + 0x1c)); } }
void alloc_download_buffer__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x20) == 0U) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0x16000;
        M2C_FIELD(arg0, u32 *, 0x20) = alloc__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, s32 *, 0x1C));
    }
}
void TAdSinglePlyChrSelectGC__sub_8033A9F0(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x2C) = 0xB;
    lbl_805D6D90 &= 0xFFFFFFFE;
    set_char_slots__23TAdSinglePlyChrSelectGCFPvii((void *)(arg0), (s32)(0xA), (s32)(M2C_FIELD(arg0, s32 *, 0x24) + 0xF));
    init_warps__23TAdSinglePlyChrSelectGCFPv((void*)(arg0));
}
int queue_destruction__23TAdSinglePlyChrSelectGCFPv(void* p) { return queue_destruction__7TObjectFv(p); }

void TAdSinglePlyChrSelectGC__sub_8033AA64(O_8033AA64 *arg0) {
    if (is_visible__17TWindowSubComCardFPv(arg0->f3c) != 0) {
        switch (get_selected_menu_value(arg0->f3c)) {
        case 0:
            arg0->f2c = 0;
            ((M2C_UNK (*)(void *))TAdSinglePlyChrSelectGC__sub_8033B5F0)(arg0);
            close_window__23TAdSinglePlyChrSelectGCFPv(arg0);
            break;
        default:
            arg0->f2c = 0xE;
            ((M2C_UNK (*)(void *))TAdSinglePlyChrSelectGC__sub_8033B5F0)(arg0);
            close_window__23TAdSinglePlyChrSelectGCFPv(arg0);
            u32 o = __nw__7TObjectFUl(0x28);
            if (o != 0U) {
                init__22THunterGuildSeqOfflineFPvPvPv(o, tl_fade, (void *)TAdSinglePlyChrSelectGC__sub_8033B244);
            }
            break;
        }
    }
}

void handle_player_load__23TAdSinglePlyChrSelectGCFPv(O_8033AB04 *arg0) {
    u32 p;
    if (probe_card_slot__15TAdPlayerLoadGCFi(arg0->f24) == 0) {
        arg0->f2C = 0;
        ((M2C_UNK (*)(void *))TAdSinglePlyChrSelectGC__sub_8033B5F0)(arg0);
        return;
    }
    switch (get_instance__15TAdPlayerLoadGCFv()) {
    case 0:
        switch (TAdPlayerLoadGC__sub_801E1B50(arg0->f24)) {
        case 0:
            switch (get_load_result__15TAdPlayerLoadGCFv(arg0->f24)) {
            case 0:
                arg0->f2C = 0xE;
                close_window__23TAdSinglePlyChrSelectGCFPv(arg0);
                p = __nw__7TObjectFUl(0x28);
                if (p != 0) {
                    init__22THunterGuildSeqOfflineFPvPvPv(p, tl_fade, (void *)TAdSinglePlyChrSelectGC__sub_8033B244);
                }
                break;
            default:
                arg0->f2C = 0xD;
                lbl_805D6D90 &= ~1;
                set_char_slots__23TAdSinglePlyChrSelectGCFPvii(arg0, 0xB, -1);
                init_warps__23TAdSinglePlyChrSelectGCFPv(arg0);
                break;
            }
            break;
        }
        break;
    }
}

void update_setup__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (setup__23TAdSinglePlyChrSelectGCFi(M2C_FIELD(arg0, s32 *, 0x24)) == 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 8;
        set_player_index__23TAdSinglePlyChrSelectGCFi(0xC);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    ((M2C_UNK (*)(void *))TAdSinglePlyChrSelectGC__sub_8033B5F0)(arg0);
}

void check_memcard_space__23TAdSinglePlyChrSelectGCFPv(O_8033AC44 *arg0) {
    switch (get_card_file_info__15TAdPlayerLoadGCFiPvPv(arg0->f24, lbl_804C89BC, 0)) {
    case 0:
        arg0->f2c = 7;
        break;
    case -1:
        break;
    default:
        if (arg0->f28 <= query_memcard_capacity__15TAdPlayerLoadGCFi(arg0->f24, 0)) {
            arg0->f2c = 7;
        } else {
            arg0->f2c = 0xA;
            lbl_805D6D90 &= ~1;
            set_char_slots__23TAdSinglePlyChrSelectGCFPvii((void *)(arg0), (s32)(8), (s32)(-1));
            init_warps__23TAdSinglePlyChrSelectGCFPv((void*)(arg0));
        }
        break;
    }
}

void TAdSinglePlyChrSelectGC__sub_8033ACF4(O_8033ACF4 *arg0) {
    if (probe_card_slot__15TAdPlayerLoadGCFi(arg0->f24) == 0) {
        arg0->f2C = 0;
        ((M2C_UNK (*)(void *))TAdSinglePlyChrSelectGC__sub_8033B5F0)(arg0);
        return;
    }
    switch (get_instance__15TAdPlayerLoadGCFv()) {
    case 0:
        switch (TAdPlayerLoadGC__sub_801E1B50(arg0->f24)) {
        case 0:
            switch (get_load_result__15TAdPlayerLoadGCFv(arg0->f24)) {
            case 0:
                arg0->f2C = 6;
                arg0->f24 = get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
                arg0->f28 = TAdSinglePlyChrSelectGC__sub_8001C5F0();
                check_ready__23TAdSinglePlyChrSelectGCFv();
                break;
            default:
                arg0->f2C = 0xD;
                lbl_805D6D90 &= ~1;
                set_char_slots__23TAdSinglePlyChrSelectGCFPvii(arg0, 0xB, -1);
                init_warps__23TAdSinglePlyChrSelectGCFPv(arg0);
                break;
            }
            break;
        }
        break;
    }
}

void update_select_state__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (TAdSinglePlyChrSelectGC__sub_801FDA4C() == 0) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 5;
        set_player_index__23TAdSinglePlyChrSelectGCFi(6);
        set_char_slots__23TAdSinglePlyChrSelectGCFPvii((void *)((void *)(arg0)), (s32)((s32)(0xC)), (s32)((s32)(-1)));
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    ((M2C_UNK (*)(void *))TAdSinglePlyChrSelectGC__sub_8033B5F0)(arg0);
}

void handle_load_result__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    s32 r;
    s32 cw;
    s32 inst;
    u32 obj;
    s32 src;
    switch (TAdPlayerLoadGC__sub_801E1B50(M2C_FIELD(arg0, s32 *, 0x24))) {
    case 0:
        seed_character_select_serial_rng(get_field_118__22TAdEnterSerialAccessGCFv());
        src = M2C_FIELD(arg0, s32 *, 0x20);
        obj = alloc__23TAdSinglePlyChrSelectGCFPv(0x1156C);
        if (obj != 0U) {
            obj = init_char_slots__23TAdSinglePlyChrSelectGCFi();
        }
        memcpy(obj, (void *)(src + 0x2048), 0x1156C);
        decrypt_char_data__23TAdSinglePlyChrSelectGCFPv(obj);
        if (init_and_register__23TAdSinglePlyChrSelectGCFi(obj) == 0) {
            lbl_805D6D90 &= ~1;
            send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, s32 *, 0x38), TQuestVmDownLoadServer__sub_8006EF6C(0x6D), 1);
            M2C_FIELD(arg0, s32 *, 0x2C) = 0xB;
            init_warp__23TAdSinglePlyChrSelectGCFPv((void*)(arg0));
            if (obj != 0U) {
                register_callback__23TAdSinglePlyChrSelectGCFis(obj, 1);
            }
        } else {
            r = compare_save_headers__23TAdSinglePlyChrSelectGCFPvPvPvPv(TAdSinglePlyChrSelectGC__sub_801FCD3C((void *)obj), get_character_save_record(0xFFFF), obj, get_instance__23TAdSinglePlyChrSelectGCFv());
            if (r != 7) {
                M2C_FIELD(arg0, s32 *, 0x2C) = 0xC;
                lbl_805D6D90 &= ~1;
                send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, s32 *, 0x38), TQuestVmDownLoadServer__sub_8006EF6C(0xA), 1);
                if (r == 6) {
                    init_warp__23TAdSinglePlyChrSelectGCFPv((void*)(arg0));
                } else {
                    init_warps__23TAdSinglePlyChrSelectGCFPv((void*)(arg0));
                }
            } else {
                seed_character_select_serial_rng(get_field_118__22TAdEnterSerialAccessGCFv());
                encrypt_save_data__23TAdSinglePlyChrSelectGCFPvPv(get_instance__23TAdSinglePlyChrSelectGCFv());
                save_character_file__23TAdSinglePlyChrSelectGCFi(1);
                M2C_FIELD(arg0, s32 *, 0x2C) = 4;
            }
            if (obj != 0U) {
                register_callback__23TAdSinglePlyChrSelectGCFis(obj, 1);
            }
        }
        break;
    }
}

void TAdSinglePlyChrSelectGC__sub_8033B0AC(void *arg0) {
    u32 o;
    if (M2C_FIELD(arg0, void **, 0x40) != 0) {
        if (((s32 (*)(void *))TAdSinglePlyChrSelectGC__sub_8033B9F8)(M2C_FIELD(arg0, void **, 0x40)) == 1) {
            queue_destruction__7TObjectFv((void*)(M2C_FIELD(arg0, void **, 0x40)));
            M2C_FIELD(arg0, void **, 0x40) = 0;
            M2C_FIELD(arg0, s32 *, 0x2C) = 2;
            M2C_FIELD(arg0, s32 *, 0x38) = update_window_mode_from_progress__6TLobbyFiPv(lbl_80477D48, lbl_80477D50);
            lbl_805D6D90 |= 1;
            return;
        }
        if (get_field_44__23TAdSinglePlyChrSelectGCFPv(M2C_FIELD(arg0, void **, 0x40)) == 1) {
            queue_destruction__7TObjectFv((void*)(M2C_FIELD(arg0, void **, 0x40)));
            M2C_FIELD(arg0, void **, 0x40) = 0;
            M2C_FIELD(arg0, s32 *, 0x2C) = 0xE;
            ((M2C_UNK (*)(void *))TAdSinglePlyChrSelectGC__sub_8033B5F0)(arg0);
            close_window__23TAdSinglePlyChrSelectGCFPv(arg0);
            o = __nw__7TObjectFUl(0x28);
            if (o != 0U) {
                init__22THunterGuildSeqOfflineFPvPvPv(o, tl_fade, (void *)TAdSinglePlyChrSelectGC__sub_8033B244);
            }
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    }
}

void start_check_memory_card__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    u8 *temp_r3;
    M2C_FIELD(arg0, u8 **, 0x40) = create_check_memory_card__23TAdSinglePlyChrSelectGCFPvPvPv(arg0, NULL, NULL);
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x40));
    if (temp_r3 != NULL) {
        TAdSinglePlyChrSelectGC__sub_8033B9E0(temp_r3);
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = 1;
}
void set_char_slots__23TAdSinglePlyChrSelectGCFPvii(void *arg0, s32 arg1, s32 arg2) {
    send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, s32 *, 0x38), TQuestVmDownLoadServer__sub_8006EF6C(arg1), 1);
    if (arg2 != -1) {
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, s32 *, 0x38), TQuestVmDownLoadServer__sub_8006EF6C(arg2), 8);
    }
}
int TAdSinglePlyChrSelectGC__sub_8033B244(void* p) { return request_queued_main_phase(p); }
void TAdSinglePlyChrSelectGC__sub_8033B264(void) {
    delete_all_task_children__9TMainTaskFv((void *) (&main_task.value));
    stop_audio_streams__6TLobbyFv();
    set_and_notify__6TLobbyFi((int) (0));
    call_funcs_reverse__6TLobbyFPvUi((void *) (&character_select_scene_resource_callbacks.value), (int) (0x30));
    render_tick__Fv();
}

void run_frame__23TAdSinglePlyChrSelectGCFv(void) {
    func_803DCDFC__Fv();
    controller_stuff__Fv();
    update_input_frame__16TKeyBoardControlFv();
    V3_8033B2AC a = lbl_80477D78[0];
    V3_8033B2AC b = lbl_80477D84[0];
    activate_camera_mode(9);
    set_active_camera_pose(&a, &b);
    some_empty_func__9TMainTaskFv(&main_task.value);
    run_task__9TMainTaskFv(&main_task.value);
    render__9TMainTaskFv(&main_task.value);
    render_screen_overlay__9TMainTaskFv(&main_task.value);
    TLobby__sub_800FA464();
    update_sound_request_slots();
    run_save_load_sequence__23TAdSinglePlyChrSelectGCFv();
    noop__23TAdSinglePlyChrSelectGCFv();
    if (!(lbl_805D6D90 & 1)) {
        if (func_801A5E54__Fv() != 0) {
            TKeyBoardControl__sub_8000F92C();
        }
        if (is_ready__22TQuestVmDownLoadServerFv() != 0) {
            TKeyBoardControl__sub_8000F9CC(0);
        }
    }
    render_tick__Fv();
}

struct RecoveredGlobal_8033B264_lbl_804EF728;
void init_single_player_char_select_scene(void) {
    u32 p;
    set_copy_clear_color_argb(0, 0, 0);
    reset_controller_input_state();
    run_load_callback_table(&character_select_scene_resource_callbacks, 0x30);
    init_menu_scene_lights(default_scene_light_config, 4);
    p = __nw__7TObjectFUl(0x1D4);
    if (p != 0) {
        TCameraCtrl__ct(p, tl_camera);
    }
    V3_8033B39C a = lbl_80477D60[0];
    V3_8033B39C b = lbl_80477D6C[0];
    select_active_controller__11TCameraCtrlFc(9);
    set_active_camera_pose(&a, &b);
    p = __nw__7TObjectFUl(0x1C);
    if (p != 0) {
        TWindowCtrlMain__ct(p);
    }
    p = __nw__7TObjectFUl(0x44);
    if (p != 0) {
        ((M2C_UNK (*)(u32))construct__23TAdSinglePlyChrSelectGCFPv)(p);
    }
    TKeyBoardControl__sub_8000F90C(2);
    lbl_805D6D90 = 0;
    play_area_music(lbl_80477D90);
    set_and_notify__6TLobbyFi(-900);
    reset_settings_to_default__6TLobbyFPv(lobby_rule_settings);
    render_tick__Fv();
}

void close_window__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x3C);
    if ((u32) temp_r3 != 0U) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) != 0) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        }
    }
}
void init_warp__23TAdSinglePlyChrSelectGCFPv(void* a0) { close_window__23TAdSinglePlyChrSelectGCFPv((void *)(a0)); *(int*)((char*)a0 + 0x3c) = check_room_seq_4__16TAdChrSelASlotGCFii(lbl_80477D58, (void*)2); forward_trade_action_default__16TObjCityMainWarpFPviii((void*)(*(int*)((char*)a0 + 0x3c)), (void*)((int)TQuestVmDownLoadServer__sub_8006EF6C((s32)((void*)14))), (void*)6, (void*)1); update_layout_height__17TWindowSubComCardFPvf((void*)(*(int*)((char*)a0 + 0x3c)), lbl_805DFA30); }
void init_warps__23TAdSinglePlyChrSelectGCFPv(void* a0) { close_window__23TAdSinglePlyChrSelectGCFPv((void *)(a0)); *(int*)((char*)a0 + 0x3c) = check_room_seq_4__16TAdChrSelASlotGCFii(lbl_80477D58, (void*)2); forward_trade_action_default__16TObjCityMainWarpFPviii((void*)(*(int*)((char*)a0 + 0x3c)), (void*)((int)TQuestVmDownLoadServer__sub_8006EF6C((s32)((void*)13))), (void*)6, (void*)0); forward_trade_action_default__16TObjCityMainWarpFPviii((void*)(*(int*)((char*)a0 + 0x3c)), (void*)((int)TQuestVmDownLoadServer__sub_8006EF6C((s32)((void*)14))), (void*)6, (void*)1); update_layout_height__17TWindowSubComCardFPvf((void*)(*(int*)((char*)a0 + 0x3c)), lbl_805DFA30); }

typedef char RecoveredGlobal_8033B264_lbl_804EF728_size[sizeof(RecoveredGlobal_8033B264_lbl_804EF728) == 0x198 ? 1 : -1];
typedef char RecoveredGlobal_8033B264_main_task_size[sizeof(RecoveredGlobal_8033B264_main_task) == 0x34 ? 1 : -1];

}

#pragma pop

#undef character_select_scene_resource_callbacks
#pragma push

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

class Sel_8033B640 {
public:
    void s0(); void s1(); void s2(); void s3(); void s4();
    void s5(); void s6(); void s7(); void s8(); void s9();
    void s10(); void s11(); void s12(); void s13(); void s14();
    u8 pad[0x2C];
    s32 state;
};

typedef void (Sel_8033B640::*SelFn_8033B640)();

struct RecoveredGlobal_8033B9C4_lbl_80513910 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
u8 TAdSinglePlyChrSelectGC__sub_8033B9F8(u8 *arg0);
extern void *lbl_804EF8C0[];
extern s32 tl_01;
u8 TAdSinglePlyChrSelectGC__sub_8033B9F8(u8 *arg0);
u8 TAdSinglePlyChrSelectGC__sub_8033B9F8(u8 *arg0);
void TAdSinglePlyChrSelectGC__sub_8033B9EC(void* p);
extern void *lbl_804EF8C0[];
extern s32 tl_01;
u8 TAdSinglePlyChrSelectGC__sub_8033B9F8(u8 *arg0);
void TAdSinglePlyChrSelectGC__sub_8033B9EC(void* p);
u8 TAdSinglePlyChrSelectGC__sub_8033B9F8(u8 *arg0);
void TAdSinglePlyChrSelectGC__sub_8033B9E0(void* p);
extern void *lbl_804EF8C0[];
extern s32 tl_01;
u8 TAdSinglePlyChrSelectGC__sub_8033B9F8(u8 *arg0);
void TAdSinglePlyChrSelectGC__sub_8033B9E0(void* p);
u8 TAdSinglePlyChrSelectGC__sub_8033B9F8(u8 *arg0);
s32 get_field_44__23TAdSinglePlyChrSelectGCFPv(void* p);
extern void *lbl_804EF8C0[];
extern s32 tl_01;
u8 TAdSinglePlyChrSelectGC__sub_8033B9F8(u8 *arg0);
s32 get_field_44__23TAdSinglePlyChrSelectGCFPv(void* p);
u8 TAdSinglePlyChrSelectGC__sub_8033B9F8(u8 *arg0);
void *construct__23TAdSinglePlyChrSelectGCFPv(void *arg0);
M2C_UNK __ct__12TAdBackTxtGCFv(void *, void *);
M2C_UNK __ct__7TObjectFP7TObject(void *, s32);
M2C_UNK __ct__9TAdBackGCFv(void *, void *);

s32 get_flag_count__23TAdSinglePlyChrSelectGCFv();
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();
extern void *lbl_804EF8C0[];
extern s32 tl_01;
u8 TAdSinglePlyChrSelectGC__sub_8033B9F8(u8 *arg0);
void *construct__23TAdSinglePlyChrSelectGCFPv(void *arg0);
void *destroy__23TAdSinglePlyChrSelectGCFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void free_buffer__23TAdSinglePlyChrSelectGCFPv(void *);
extern void* lbl_804EF8C0[];
void *destroy__23TAdSinglePlyChrSelectGCFPvs(void *arg0, s16 arg1);
void TAdSinglePlyChrSelectGC__sub_8033B5F0(void *arg0);
M2C_UNK TWindow__close(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
extern void* lbl_804EF8C0[];
void TAdSinglePlyChrSelectGC__sub_8033B5F0(void *arg0);
extern RecoveredGlobal_8033B9C4_lbl_80513910 chr_select_serial_seeds;
void seed_character_select_serial_rng(s32 arg0);
s32 find_card_file__15TAdPlayerLoadGCFiPv(void *, void *);
extern char pso_system_card_filename[];
bool TAdSinglePlyChrSelectGC__sub_8033BA84(void *self);
s32 find_card_file__15TAdPlayerLoadGCFiPv(void *, void *);
extern u8 lbl_804C88C0[];
extern char pso_system_card_filename[];
extern u8 lbl_804C89BC[];
s32 has_no_save_files__23TAdSinglePlyChrSelectGCFPv(void *arg0);
}

extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {

}
extern "C" {

extern "C" void reset_default_view__11TCameraCtrlFv();
extern "C" void init_default_view__11TCameraCtrlFv();
extern "C" void reset_view_state__11TCameraCtrlFv();
extern "C" void free_all_windows__15TWindowCtrlMainFv();
extern "C" void TWindowCtrlMain__sub_8024D838();
extern "C" void free_global__23TAdSinglePlyChrSelectGCFv();
extern "C" void free_keyboard_soft_resources__6TLobbyFv();
extern "C" void free_singleton_805D65C0__23TAdSinglePlyChrSelectGCFv();
extern "C" void register_texture_f256_ad_pic_2();
extern "C" void register_texture_f256_backtext();
extern "C" void reset__11TCameraCtrlFv();
extern "C" void update_keyboard_menu__6TLobbyFv();
void *character_select_scene_resource_callbacks[12] = {
    (void *)&reset_view_state__11TCameraCtrlFv, (void *)&reset__11TCameraCtrlFv, (void *)&init_default_view__11TCameraCtrlFv, (void *)&reset_default_view__11TCameraCtrlFv,
    (void *)&register_texture_f256_ad_pic_2, (void *)&free_global__23TAdSinglePlyChrSelectGCFv, (void *)&register_texture_f256_backtext, (void *)&free_singleton_805D65C0__23TAdSinglePlyChrSelectGCFv,
    (void *)&TWindowCtrlMain__sub_8024D838, (void *)&free_all_windows__15TWindowCtrlMainFv, (void *)&update_keyboard_menu__6TLobbyFv, (void *)&free_keyboard_soft_resources__6TLobbyFv,
};

void TAdSinglePlyChrSelectGC__sub_8033B5F0(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x38);
    if ((u32) temp_r3 != 0U) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) != 0) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x38));
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        }
    }
}

void dispatch_state__23TAdSinglePlyChrSelectGCFPv(Sel_8033B640 *arg0) {
    static SelFn_8033B640 table[15] = {
        &Sel_8033B640::s0, &Sel_8033B640::s1, &Sel_8033B640::s2,
        &Sel_8033B640::s3, &Sel_8033B640::s4, &Sel_8033B640::s5,
        &Sel_8033B640::s6, &Sel_8033B640::s7, &Sel_8033B640::s8,
        &Sel_8033B640::s9, &Sel_8033B640::s10, &Sel_8033B640::s11,
        &Sel_8033B640::s12, &Sel_8033B640::s13, &Sel_8033B640::s14,
    };
    (arg0->*table[arg0->state])();
}

void *destroy__23TAdSinglePlyChrSelectGCFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK*)lbl_804EF8C0;
        free_buffer__23TAdSinglePlyChrSelectGCFPv(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *construct__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    void *p;
    __ct__7TObjectFP7TObject(arg0, tl_01);
    M2C_FIELD(arg0, void **, 0x18) = lbl_804EF8C0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) ((s8 (*)(void *))get_chr_select_state__23TAdSinglePlyChrSelectGCFv)(lbl_804EF8C0);
    M2C_FIELD(arg0, s32 *, 0x28) = get_flag_count__23TAdSinglePlyChrSelectGCFv();
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    p = ((void * (*)(M2C_UNK))__nw__7TObjectFUl)(0x24);
    if (p != NULL) {
        __ct__9TAdBackGCFv(p, arg0);
    }
    p = ((void * (*)(M2C_UNK))__nw__7TObjectFUl)(0x28);
    if (p != NULL) {
        __ct__12TAdBackTxtGCFv(p, arg0);
    }
    ((M2C_UNK (*)(void *))alloc_download_buffer__23TAdSinglePlyChrSelectGCFPv)(arg0);
    ((M2C_UNK (*)(void *))clear_buffer)(arg0);
    init_slots__23TAdSinglePlyChrSelectGCFv();
    return arg0;
}

typedef char RecoveredGlobal_8033B9C4_lbl_80513910_size[sizeof(RecoveredGlobal_8033B9C4_lbl_80513910) == 0x10 ? 1 : -1];
void seed_character_select_serial_rng(s32 arg0) {
    M2C_FIELD(&chr_select_serial_seeds.value, s32 *, 4) = arg0;
    M2C_FIELD(&chr_select_serial_seeds.value, s32 *, 0) = arg0;
}

s32 get_field_44__23TAdSinglePlyChrSelectGCFPv(void* p) { return *(s32*)((char*)p + 0x44); }

void TAdSinglePlyChrSelectGC__sub_8033B9E0(void* p) { *(s32*)((char*)p + 0x40) = 1; }

void TAdSinglePlyChrSelectGC__sub_8033B9EC(void* p) { *(s32*)((char*)p + 0x4c) = 1; }

u8 TAdSinglePlyChrSelectGC__sub_8033B9F8(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x3C) == 1);
}

s32 has_no_save_files__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (find_card_file__15TAdPlayerLoadGCFiPv(arg0, ((u8 *)&pso_system_card_filename)) != 0 || find_card_file__15TAdPlayerLoadGCFiPv(arg0, lbl_804C88C0) != 0 || find_card_file__15TAdPlayerLoadGCFiPv(arg0, lbl_804C89BC) != 0) {
        return 0;
    }
    return 1;
}

bool TAdSinglePlyChrSelectGC__sub_8033BA84(void *self) {
    return !find_card_file__15TAdPlayerLoadGCFiPv(self, pso_system_card_filename);
}

}

#pragma pop
