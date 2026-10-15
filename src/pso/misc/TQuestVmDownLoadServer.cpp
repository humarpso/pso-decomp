#include "pso/TMCFormatSequence.h"

extern "C" void TWindow__close(void*);
extern "C" void close_window__17TMCFormatSequenceFPv(void*);

#include "types.h"

extern "C" {
s32 wait_confirm_and_finish__17TMCFormatSequenceFPv();
s32 update_wait_confirm__17TMCFormatSequenceFPv();
s32 check_memcard_load_result__17TMCFormatSequenceFPv();
s32 process_format_result__17TMCFormatSequenceFPv();
s32 open_windows__17TMCFormatSequenceFPv();
void run_task__17TMCFormatSequenceFv(u8 *arg0);
}extern "C" {
void *TMCFormatSequence__ct(void *arg0, void *arg1, void *arg2);
}
extern "C" {
void __ct__7TObjectFP7TObject(void *);
}
extern "C" {
extern s32 __vt__17TMCFormatSequence[];
}
extern "C" {
extern void *TMCFormatSequence__class_name;
}
extern "C" {
char TQuestVmDownLoadServer__data_804C8690[0xC] = "\xB8\xB4\xBD\xC4\xCC\xA7\xB2\xD9";
}

#include "types.h"
extern "C" {
s32 TWindowShortListCtrl__check_controller_button(void*, s32);
}
extern "C" {
s32 is_ready__24TMessageWindowControllerFv(void*);
}
extern "C" {
struct RecoveredGlobal_801F6C74_lbl_8050E208;
}
extern "C" {
extern RecoveredGlobal_801F6C74_lbl_8050E208 controller_input_state;
}
extern "C" {
void fn_801F6B00(u8* arg0);
}

#include "types.h"
extern "C" {
void TQuestVmDownLoadServer__sub_801F6B98(void);
}
extern "C" {
void clear_field2A0__22TQuestVmDownLoadServerFv(void);
}
extern "C" {
extern s32 TQuestVmDownLoadServer__instance;
}
extern "C" {
extern s32 TQuestVmDownLoadServer__instance;
}

#include "types.h"
extern "C" {
s32 get_field230__22TQuestVmDownLoadServerFv(void);
}
extern "C" {
extern s32 TQuestVmDownLoadServer__instance;
}

#include "types.h"

struct RecoveredGlobal_801F6C74_lbl_8050E208 {
    s32 value;
    u8 remaining[0x1AC];
};

struct QVm_801F6D24 {
    u8 pad0[0x294];
    u32 f294;
    u8 pad1[4];
    s32 f29C_pad;
    s32 f2A0;
};extern "C" {
s32 TQuestVmDownLoadServer__sub_8006EF6C(int);
}
extern "C" {
s32 get_localized_text_entry(int, int);
}
extern "C" {
s32 TWindowShortListCtrl__check_controller_button(void*, s32);
}
extern "C" {
void show_status_message__22TQuestVmDownLoadServerFPvii(u8* arg0, s32 arg1, s32 arg2);
}
extern "C" {
s32 update_state__13TAdMcSelectGCFv();
}
extern "C" {
s32 select_if_mc_present__13TAdMcSelectGCFv();
}
extern "C" {
extern RecoveredGlobal_801F6C74_lbl_8050E208 controller_input_state;
}
extern "C" {
extern s32 quest_download_in_progress;
}
extern "C" {
void TQuestVmDownLoadServer__sub_801F6C74(u8 *arg0);
}
extern "C" {
s32 return_to_main_menu__6TLobbyFv();
}
extern "C" {
s32 TWindowShortListCtrl__check_controller_button(void*, s32);
}
extern "C" {
extern RecoveredGlobal_801F6C74_lbl_8050E208 controller_input_state;
}
extern "C" {
void check_cancel_input__22TQuestVmDownLoadServerFPv(u8 *arg0);
}
extern "C" {
s32 get_localized_text_entry(int, int);
}
extern "C" {
s32 TWindowShortListCtrl__check_controller_button(void*, s32);
}
extern "C" {
void show_status_message__22TQuestVmDownLoadServerFPvii(u8* arg0, s32 arg1, s32 arg2);
}
extern "C" {
s32 is_ready__24TMessageWindowControllerFv(void *);
}
extern "C" {
s32 update_state__13TAdMcSelectGCFv();
}
extern "C" {
extern RecoveredGlobal_801F6C74_lbl_8050E208 controller_input_state;
}
extern "C" {
void TQuestVmDownLoadServer__sub_801F6D24(QVm_801F6D24 *self);
}

extern "C" {
void create__22TQuestVmDownLoadServerFv(void);
}
extern "C" {
s32 __ct__22TQuestVmDownLoadServerFP7TObject(void *, s32);
}
extern "C" {
void *__nw__7TObjectFUl(s32);
}
extern "C" {
extern s32 TQuestVmDownLoadServer__instance;
}
extern "C" {
extern s32 tl_00;
}
extern "C" {
typedef char RecoveredGlobal_801F6C74_lbl_8050E208_size[sizeof(RecoveredGlobal_801F6C74_lbl_8050E208) == 0x1B0 ? 1 : -1];
}
extern "C" {
typedef char RecoveredGlobal_801F6C74_lbl_8050E208_size[sizeof(RecoveredGlobal_801F6C74_lbl_8050E208) == 0x1B0 ? 1 : -1];
}

#include "types.h"

struct Pair_801F6E08 { s32 a; s32 b; };extern "C" {
void display_message__24TMessageWindowControllerFPCcl(void*, s32, s32);
}
extern "C" {
s32 create_window__24TMessageWindowControllerFll(void*, s32, void*);
}
extern "C" {
s32 get_window_layout_position(s32);
}
extern "C" {
extern s32 lbl_8044A668[];
}
extern "C" {
void show_status_message__22TQuestVmDownLoadServerFPvii(u8* arg0, s32 arg1, s32 arg2);
}

extern "C" {
void check_client_connections__22TQuestVmDownLoadServerFPv(void *arg0);
}
extern "C" {
void close__22TQuestVmDownLoadServerFPv(void *arg0);
}
extern "C" {
void close_download__22TQuestVmDownLoadServerFPv(void *arg0);
}
extern "C" {
void close_message__22TQuestVmDownLoadServerFPv(void* p);
}
extern "C" {
void destroy__22TQuestVmDownLoadServerFPv(void *arg0);
}
extern "C" {
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
}
extern "C" {
s32 probe_card_slot__15TAdPlayerLoadGCFi(s32);
}
extern "C" {
s32 get_localized_text_entry(int, int);
}
extern "C" {
s32 TQuestVmDownLoadServer__sub_8006EF6C(int);
}
extern "C" {
void free_buffers__22TQuestVmDownLoadServerFv(void);
}
extern "C" {
void allow_rendering__7TObjectFv(void *);
}
extern "C" {
s32 clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
}
extern "C" {
s32 clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
}
extern "C" {
int close__24TMessageWindowControllerFv(void*);
}
extern "C" {
void queue_destruction__7TObjectFv(void *);
}
extern "C" {
s32 reset_quest_id__23TAdSinglePlyChrSelectGCFv();
}
extern "C" {
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
}
extern "C" {
s32 set_flag_4__9TObjLukerFPv(void *);
}
extern "C" {
void set_ready__6TSceneFv(void *);
}
extern "C" {
s32 update_state__13TAdMcSelectGCFv();
}
extern "C" {
extern s32 lbl_805D55C0;
}
extern "C" {
extern s32 quest_download_in_progress;
}
extern "C" {
extern s32 quest_download_in_progress;
}
extern "C" {
extern u32 lobby_player_construction_window;
}
extern "C" {
extern s32 lbl_805D49B4;
}

#include "pso/misc/TQuestVmDownLoadServer.h"
#include "types.h"

struct SubtractiveRng {
    SubtractiveRng();
    s32 value;
    u8 remaining[0xE4];
};

struct RecoveredGlobal_801F84AC_lbl_80512BDC {
    s32 value;
    u8 remaining[0x38];
};

struct QVm_801F7890 {
    u8 pad0[0x25C];
    s32 f25C;
    u8 pad260[0x270 - 0x260];
    char name0[0xD];
    char name1[0xD];
    u8 pad28A[0x2A0 - 0x28A];
    s32 f2A0;
};

struct Req_801F7478 {
    char name[0x12];
    char title[0x22];
    u8 key[0x10];
    char *s44;
    char *s48;
    s16 h4C;
    s16 h4E;
    s32 w50;
    s16 h54;
    s32 w58;
    s32 w5C;
};

struct Src_801F7478 {
    u8 pad0[0x10];
    char title[0x24];
    s32 f34;
    s32 f38;
};

struct Req_801F770C {
    char name[0x12];
    char title[0x22];
    u8 key[0x10];
    char *s44;
    char *s48;
    s16 h4C;
    s16 h4E;
    s32 w50;
    s16 h54;
    s32 w58;
    s32 w5C;
};

struct Src_801F770C {
    u8 pad0[0x10];
    char title[0x24];
    s32 f34;
    s32 f38;
};

struct Req_801F718C {
    char name[0x12];
    char title[0x22];
    u8 key[0x10];
    char *s44;
    char *s48;
    s16 h4C;
    s16 h4E;
    s32 w50;
    s16 h54;
    s32 w58;
    s32 w5C;
};

struct Src_801F718C {
    u8 pad0[0x10];
    char title[0x24];
    s32 f34;
    s32 f38;
};

struct QVm_801F7890;
struct QVm_801F6D24;extern "C" {
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
}
extern "C" {
void *alloc__22TQuestVmDownLoadServerFPv(s32);
}
extern "C" {
s32 move_data__6TLobbyFv(void *, s32, s32);
}
extern "C" {
s32 verify_checksum__22TQuestVmDownLoadServerFii(s32 arg0, s32 arg1);
}
extern "C" {
s32 TQuestVmDownLoadServer__sub_8006EF6C(int);
}
extern "C" {
s32 TWindowShortListCtrl__check_controller_button(void*, s32);
}
extern "C" {
void show_status_message__22TQuestVmDownLoadServerFPvii(u8* arg0, s32 arg1, s32 arg2);
}
extern "C" {
s32 select_if_mc_present__13TAdMcSelectGCFv();
}
extern "C" {
extern RecoveredGlobal_801F6C74_lbl_8050E208 controller_input_state;
}
extern "C" {
void handle_confirm_input__22TQuestVmDownLoadServerFPv(u8 *arg0);
}
extern "C" {
extern RecoveredGlobal_801F84AC_lbl_80512BDC quest_download_file_header;
}
extern "C" {
s32 *get_quest_download_file_header(void);
}
extern "C" {
void *memset(void *, int, u32);
}
extern "C" {
extern const char *TQuestVmDownLoadServer__class_name;
}
extern "C" {
extern s32 quest_download_in_progress;
}
extern "C" {
extern s32 TQuestVmDownLoadServer__instance;
}
extern "C" {
void *memset(void *, int, u32);
}
extern "C" {
int sprintf(char *, const char *, ...);
}
extern "C" {
u32 find_card_file__15TAdPlayerLoadGCFiPv(s32, char *);
}
extern "C" {
extern char lbl_8044A68C[];
}
extern "C" {
extern char lbl_8044BEE8[];
}
extern "C" {
extern const s32 lbl_805DC6B0;
}
extern "C" {
extern const s32 lbl_805DC6B4;
}
extern "C" {
void find_free_file_names__22TQuestVmDownLoadServerFPv(QVm_801F7890 *self);
}
extern "C" {
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
}
extern "C" {
void *alloc__22TQuestVmDownLoadServerFPv(s32);
}
extern "C" {
s32 move_data__6TLobbyFv(void *, s32, s32);
}
extern "C" {
void subtractive_rng_seed(SubtractiveRng *, u32);
}
extern "C" {
void subtractive_rng_make_shuffle(SubtractiveRng *);
}
extern "C" {
void subtractive_rng_unshuffle(SubtractiveRng *, void *, void *, s32);
}
extern "C" {
void apply_rng_cipher__23TAdSinglePlyChrSelectGCFPvPvi(SubtractiveRng *, u32 *, u32);
}
extern "C" {
void subtractive_rng_xor_buffer(SubtractiveRng *, u32 *, u32);
}
extern "C" {
void unshuffle_and_decrypt__22TQuestVmDownLoadServerFPvi(u32 *data, s32 size);
}
extern "C" {
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
}
extern "C" {
void *alloc__22TQuestVmDownLoadServerFPv(s32);
}
extern "C" {
s32 move_data__6TLobbyFv(void *, s32, s32);
}
extern "C" {
u32 subtractive_rng_next(SubtractiveRng *);
}
extern "C" {
void subtractive_rng_seed(SubtractiveRng *, u32);
}
extern "C" {
void subtractive_rng_make_shuffle(SubtractiveRng *);
}
extern "C" {
void permute_save_blocks__23TAdSinglePlyChrSelectGCFPvPvPvUi(SubtractiveRng *, void *, void *, s32);
}
extern "C" {
void apply_rng_cipher__23TAdSinglePlyChrSelectGCFPvPvi(SubtractiveRng *, u32 *, u32);
}
extern "C" {
void subtractive_rng_xor_buffer(SubtractiveRng *, u32 *, u32);
}
extern "C" {
void encrypt_download_data__22TQuestVmDownLoadServerFPvi(u32 *data, s32 size);
}
extern "C" {
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
}
extern "C" {
void *alloc__22TQuestVmDownLoadServerFPv(s32);
}
extern "C" {
void TAdPlayerLoadGC__sub_801E14E4(void *);
}
extern "C" {
void TAdPlayerLoadGC__sub_801E14E8(void *, s32);
}
extern "C" {
s32 build_save_file_image__15TAdPlayerLoadGCFPvPv(void *, void *);
}
extern "C" {
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
}
extern "C" {
char *strncpy(char *, const char *, u32);
}
extern "C" {
void *memcpy(void *, const void *, u32);
}
extern "C" {
void *memset(void *, int, u32);
}
extern "C" {
extern char TQuestVmDownLoadServer__data_804C8690[];
}
extern "C" {
extern u8 TQuestVmDownLoadServer__memcard_key[];
}
extern "C" {
extern char TQuestVmDownLoadServer__data_805DC5B8[];
}
extern "C" {
extern char TQuestVmDownLoadServer__data_805DC5BC[];
}
extern "C" {
void write_memcard_file__22TQuestVmDownLoadServerFPv(u8 *arg0);
}
extern "C" {
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
}
extern "C" {
void *alloc__22TQuestVmDownLoadServerFPv(s32);
}
extern "C" {
void TAdPlayerLoadGC__sub_801E14E4(void *);
}
extern "C" {
void TAdPlayerLoadGC__sub_801E14E8(void *, s32);
}
extern "C" {
s32 build_save_file_image__15TAdPlayerLoadGCFPvPv(void *, void *);
}
extern "C" {
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
}
extern "C" {
char *strncpy(char *, const char *, u32);
}
extern "C" {
void *memcpy(void *, const void *, u32);
}
extern "C" {
void *memset(void *, int, u32);
}
extern "C" {
extern char TQuestVmDownLoadServer__data_804C8690[];
}
extern "C" {
extern u8 TQuestVmDownLoadServer__memcard_key[];
}
extern "C" {
extern char TQuestVmDownLoadServer__data_805DC5B8[];
}
extern "C" {
extern char TQuestVmDownLoadServer__data_805DC5BC[];
}
extern "C" {
void TQuestVmDownLoadServer__sub_801F770C(u8 *arg0);
}
extern "C" {
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
}
extern "C" {
void *alloc__22TQuestVmDownLoadServerFPv(s32);
}
extern "C" {
s32 TQuestVmDownLoadServer__sub_8006EF6C(int);
}
extern "C" {
void show_status_message__22TQuestVmDownLoadServerFPvii(u8* arg0, s32 arg1, s32 arg2);
}
extern "C" {
void TAdPlayerLoadGC__sub_801E14E4(void *);
}
extern "C" {
void TAdPlayerLoadGC__sub_801E14E8(void *, s32);
}
extern "C" {
s32 build_save_file_image__15TAdPlayerLoadGCFPvPv(void *, void *);
}
extern "C" {
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
}
extern "C" {
char *strncpy(char *, const char *, u32);
}
extern "C" {
void *memcpy(void *, const void *, u32);
}
extern "C" {
void *memset(void *, int, u32);
}
extern "C" {
extern char TQuestVmDownLoadServer__data_804C8690[];
}
extern "C" {
extern u8 TQuestVmDownLoadServer__memcard_key[];
}
extern "C" {
extern Src_801F718C quest_download_file_info;
}
extern "C" {
extern char TQuestVmDownLoadServer__data_805DC5B8[];
}
extern "C" {
extern char TQuestVmDownLoadServer__data_805DC5BC[];
}
extern "C" {
extern u8 TQuestVmDownLoadServer__download_kind;
}
extern "C" {
void TQuestVmDownLoadServer__sub_801F718C(u8 *arg0);
}
extern "C" {
void check_client_connections__22TQuestVmDownLoadServerFPv(void *arg0);
}
extern "C" {
void TQuestVmDownLoadServer__sub_801F7FEC(u8 *arg0);
}
extern "C" {
void close_window__22TQuestVmDownLoadServerFPv(void *arg0);
}
extern "C" {
void open__22TQuestVmDownLoadServerFPv(void *arg0);
}
extern "C" {
s32 set_flag_4__9TObjLukerFPv(void *);
}
extern "C" {
s32 clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
}
extern "C" {
void handle_confirm_input__22TQuestVmDownLoadServerFPv(u8 *arg0);
}
extern "C" {
void handle_confirm_window__22TQuestVmDownLoadServerFPv(void *arg0);
}
extern "C" {
void find_free_file_names__22TQuestVmDownLoadServerFPv(QVm_801F7890 *self);
}
extern "C" {
void TQuestVmDownLoadServer__sub_801F770C(u8 *arg0);
}
extern "C" {
void load_quest_data__22TQuestVmDownLoadServerFPv(u8 *arg0);
}
extern "C" {
void abort_download__22TQuestVmDownLoadServerFPv(void *arg0);
}
extern "C" {
void write_memcard_file__22TQuestVmDownLoadServerFPv(u8 *arg0);
}
extern "C" {
void write_quest_data_named__22TQuestVmDownLoadServerFPv(u8 *arg0);
}
extern "C" {
void finish_download__22TQuestVmDownLoadServerFPv(void *arg0);
}
extern "C" {
void TQuestVmDownLoadServer__sub_801F718C(u8 *arg0);
}
extern "C" {
void write_quest_data__22TQuestVmDownLoadServerFPv(void *arg0);
}
extern "C" {
void close_download__22TQuestVmDownLoadServerFPv(void *arg0);
}
extern "C" {
void TQuestVmDownLoadServer__sub_801F6C74(u8 *arg0);
}
extern "C" {
void check_cancel_input__22TQuestVmDownLoadServerFPv(u8 *arg0);
}
extern "C" {
void close__22TQuestVmDownLoadServerFPv(void *arg0);
}
extern "C" {
void TQuestVmDownLoadServer__sub_801F6D24(QVm_801F6D24 *self);
}
extern "C" {
void destroy__22TQuestVmDownLoadServerFPv(void *arg0);
}
extern "C" {
void close_message__22TQuestVmDownLoadServerFPv(void* p);
}
extern "C" {
void fn_801F6B00(u8 *arg0);
}
extern "C" {
extern s32 lbl_805D55C0;
}
extern "C" {
struct Slot_801F7FEC { u8 pad[0x34]; s32 f34; void *f38; };
}
extern "C" {
struct Slot_801F8D30 { u8 pad[0x34]; s32 f34; void *f38; };
}
extern "C" {
s32 TAdPlayerLoadGC__sub_801E1518(void *, s32, u32);
}
extern "C" {
s32 reset_download__22TQuestVmDownLoadServerFv(void);
}
extern "C" {
void TWindow__close(void*);
}
extern "C" {
extern s32 TQuestVmDownLoadServer__dat_download_complete;
}
extern "C" {
extern s32 TQuestVmDownLoadServer__bin_download_complete;
}
extern "C" {
extern s32 TQuestVmDownLoadServer__pvr_download_complete;
}
extern "C" {
extern s32 TQuestVmDownLoadServer__gba_download_complete;
}
extern "C" {
extern u32 TQuestVmDownLoadServer__download_window;
}
extern "C" {
extern s32 TQuestVmDownLoadServer__total_download_bytes;
}
extern "C" {
extern s32 TQuestVmDownLoadServer__received_file_bytes;
}
extern "C" {
struct Src_801F8A40 {
    char name[0x10];
    char title[0x24];
    s32 f34;
    void *f38;
};
}
extern "C" {
Src_801F8A40 TQuestVmDownLoadServer__download_file_state;
}
extern "C" {
Src_801F8A40 quest_download_file_slot;
}
extern "C" {
Src_801F718C quest_download_file_info;
}
extern "C" {
RecoveredGlobal_801F84AC_lbl_80512BDC quest_download_file_header;
}
extern "C" {
SubtractiveRng TQuestVmDownLoadServer__rng_cipher_state;
}
extern "C" {
__declspec(section ".data") u32 download_rng_seed_pair[2];
}
extern "C" {
s32 disallow_rendering__7TObjectFv(u32);
}
extern "C" {
s32 TQuestVmDownLoadServer__sub_8006EF6C(int);
}
extern "C" {
s32 TWindowShortListCtrl__check_controller_button(void*, s32);
}
extern "C" {
s32 reset_counter__6TSceneFv();
}
extern "C" {
s32 is_ready__24TMessageWindowControllerFv(void *);
}
extern "C" {
s32 select_if_mc_present__13TAdMcSelectGCFv();
}
extern "C" {
u32 create__13TAdMcSelectGCFPv(s32);
}
extern "C" {
s32 get_localized_text_entry(int, int);
}
extern "C" {
void show_status_message__22TQuestVmDownLoadServerFPvii(u8* arg0, s32 arg1, s32 arg2);
}
extern "C" {
extern RecoveredGlobal_801F6C74_lbl_8050E208 controller_input_state;
}
extern "C" {
extern u32 lobby_player_construction_window;
}
extern "C" {
extern s32 tl_03;
}
extern "C" {
void update_mc_select__22TQuestVmDownLoadServerFPv(u8 *arg0);
}
extern "C" {
s32 TQuestVmDownLoadServer__sub_8006EF6C(int);
}
extern "C" {
void show_status_message__22TQuestVmDownLoadServerFPvii(u8* arg0, s32 arg1, s32 arg2);
}
extern "C" {
s32 get_localized_text_entry(int, int);
}
extern "C" {
s32 TWindowShortListCtrl__check_controller_button(void*, s32);
}
extern "C" {
s32 probe_and_check_card__15TAdPlayerLoadGCFi(s32);
}
extern "C" {
s32 TAdPlayerLoadGC__sub_801E0FA4(s32);
}
extern "C" {
s32 probe_card_slot__15TAdPlayerLoadGCFi(s32);
}
extern "C" {
s32 query_memcard_capacity__15TAdPlayerLoadGCFi(s32, int);
}
extern "C" {
void *TMCFormatSequence__ct(void *arg0, void *arg1, void *arg2);
}
extern "C" {
void *__nw__7TObjectFUl(s32);
}
extern "C" {
void TWindow__close(void*);
}
extern "C" {
u32 init_shop_judgment_window(s32);
}
extern "C" {
s32 get_window_layout_position(s32);
}
extern "C" {
s32 update_state__13TAdMcSelectGCFv();
}
extern "C" {
s32 get_selected_slot_index__13TAdMcSelectGCFv();
}
extern "C" {
void clear_field2A0__22TQuestVmDownLoadServerFv(void);
}
extern "C" {
void TQuestVmDownLoadServer__sub_801F6B98(void);
}
extern "C" {
extern RecoveredGlobal_801F6C74_lbl_8050E208 controller_input_state;
}
extern "C" {
void check_memcard_slot__22TQuestVmDownLoadServerFPv(u8 *arg0);
}
extern "C" {
s32 TQuestVmDownLoadServer__sub_801F8538(void *data, s32 size);
}

extern "C" {
void abort_download__22TQuestVmDownLoadServerFPv(void *arg0);
}
extern "C" {
void close_window__22TQuestVmDownLoadServerFPv(void *arg0);
}
extern "C" {
void finish_download__22TQuestVmDownLoadServerFPv(void *arg0);
}
extern "C" {
void handle_confirm_window__22TQuestVmDownLoadServerFPv(void *arg0);
}
extern "C" {
void load_quest_data__22TQuestVmDownLoadServerFPv(u8 *arg0);
}
extern "C" {
void open__22TQuestVmDownLoadServerFPv(void *arg0);
}
extern "C" {
void write_quest_data__22TQuestVmDownLoadServerFPv(void *arg0);
}
extern "C" {
void write_quest_data_named__22TQuestVmDownLoadServerFPv(u8 *arg0);
}
extern "C" {
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
}
extern "C" {
s32 get_localized_text_entry(int, int);
}
extern "C" {
s32 TQuestVmDownLoadServer__sub_8006EF6C(int);
}
extern "C" {
void show_status_message__22TQuestVmDownLoadServerFPvii(u8* arg0, s32 arg1, s32 arg2);
}
extern "C" {
s32 get_selected_menu_value(u32);
}
extern "C" {
void TWindow__close(void*);
}
extern "C" {
s32 clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
}
extern "C" {
void close_message__22TQuestVmDownLoadServerFPv(void* p);
}
extern "C" {
u32 create__13TAdMcSelectGCFPv(s32);
}
extern "C" {
s32 disallow_rendering__7TObjectFv(u32);
}
extern "C" {
s32 draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(s32, void *, s32, s32);
}
extern "C" {
s32 get_status_flag__17TWindowSubComCardFPv(u32);
}
extern "C" {
s32 is_visible__17TWindowSubComCardFPv(u32);
}
extern "C" {
void queue_destruction__7TObjectFv(void *);
}
extern "C" {
s32 reset_counter__6TSceneFv();
}
extern "C" {
s32 reset_quest_id__23TAdSinglePlyChrSelectGCFv();
}
extern "C" {
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
}
extern "C" {
s32 set_quest_download_server__23TAdSinglePlyChrSelectGCFi(s32);
}
extern "C" {
s32 update_state__13TAdMcSelectGCFv();
}
extern "C" {
extern s32 lbl_8044BEF4[];
}
extern "C" {
extern s32 lbl_805D49B4;
}
extern "C" {
extern s32 lbl_805D49B4;
}
extern "C" {
extern s32 lbl_805D49B4;
}
extern "C" {
extern s32 lbl_805D49B4;
}
extern "C" {
extern s32 lbl_805D49B4;
}
extern "C" {
extern s32 quest_download_in_progress;
}
extern "C" {
extern u32 lobby_player_construction_window;
}
extern "C" {
extern s32 tl_03;
}
extern "C" {
typedef char RecoveredGlobal_801F6C74_lbl_8050E208_size[sizeof(RecoveredGlobal_801F6C74_lbl_8050E208) == 0x1B0 ? 1 : -1];
}
extern "C" {
}
extern "C" {
extern s32 quest_download_in_progress;
}
extern "C" {
extern s32 TQuestVmDownLoadServer__instance;
}

typedef char RecoveredGlobal_801F84AC_lbl_80512BDC_size[sizeof(RecoveredGlobal_801F84AC_lbl_80512BDC) == 0x3C ? 1 : -1];extern "C" {
typedef char SubtractiveRng_size[sizeof(SubtractiveRng) == 0xE8 ? 1 : -1];
}
extern "C" {
struct SubtractiveRng;
}
extern "C" {

struct Src_801F87CC {
    u8 pad0[0x10];
    char title[0x24];
    s32 f34;
    u8 *f38;
};
}
extern "C" {
s32 update_graph__8TDLGraphFii(int, int);
}
extern "C" {
s32 get_serial_access__22TQuestVmDownLoadServerFPv();
}
extern "C" {
s32 poll_serial_access__22TQuestVmDownLoadServerFPv();
}
extern "C" {
void create__22TQuestVmDownLoadServerFv(void);
}
extern "C" {
s32 create__16TAdWarningBaseGCFv();
}
extern "C" {
int strncmp(const char *, const char *, u32);
}
extern "C" {

struct Pos_801F8A40 { s32 a, b; };
}
extern "C" {
u32 set_text__18TWindowMessagePageFiii(void *, void *, int);
}
extern "C" {
void send_and_handle__6TLobbyFPvii(u32, s32, int);
}
extern "C" {
void complete_reveal__14TWindowMessageFPv(u32);
}
extern "C" {
char *strtok(char *, const char *);
}
extern "C" {
extern u8 lbl_8044A648[];
}
extern "C" {
extern s32 lbl_805DC510;
}
extern "C" {
extern s32 lbl_805DC514;
}
extern "C" {
extern s32 lbl_805DC518;
}
extern "C" {
extern s32 lbl_805DC51C;
}
extern "C" {
extern s32 lbl_805DC520;
}
extern "C" {
extern s32 lbl_805DC524;
}
extern "C" {

struct Src_801F8E4C {
    char name[0x10];
    char title[0x24];
    s32 f34;
    u32 f38;
};
}
extern "C" {

struct Src_801F8F14 {
    char name[0x10];
    char title[0x24];
    s32 f34;
    u32 f38;
};
}

extern "C" {
void reset_download_state__22TQuestVmDownLoadServerFv(void) {
    TQuestVmDownLoadServer__dat_download_complete = 0;
    TQuestVmDownLoadServer__bin_download_complete = 0;
    TQuestVmDownLoadServer__pvr_download_complete = 0;
    TQuestVmDownLoadServer__gba_download_complete = 0;
    memset(((Src_801F8F14 *)&TQuestVmDownLoadServer__download_file_state), 0, 0x3C);
    memset(((Src_801F8F14 *)&quest_download_file_slot), 0, 0x3C);
    memset(((Src_801F8F14 *)&quest_download_file_info), 0, 0x3C);
    memset(((Src_801F8F14 *)&quest_download_file_header), 0, 0x3C);
    quest_download_in_progress = 0;
    TQuestVmDownLoadServer__total_download_bytes = 0;
    TQuestVmDownLoadServer__received_file_bytes = 0;
}
}

extern "C" {
void free_download_buffers__22TQuestVmDownLoadServerFv(void) {
    Src_801F8E4C *s0;
    Src_801F8E4C *s1;
    Src_801F8E4C *s2;
    Src_801F8E4C *s3;

    if (TQuestVmDownLoadServer__download_window != 0) {
        TWindow__close((void *)TQuestVmDownLoadServer__download_window);
        TQuestVmDownLoadServer__download_window = 0;
    }
    s0 = ((Src_801F8E4C *)&TQuestVmDownLoadServer__download_file_state);
    if (s0->f38 != 0) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void *)s0->f38);
        s0->f38 = 0;
    }
    s1 = ((Src_801F8E4C *)&quest_download_file_slot);
    if (s1->f38 != 0) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void *)s1->f38);
        s1->f38 = 0;
    }
    s2 = ((Src_801F8E4C *)&quest_download_file_info);
    if (s2->f38 != 0) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void *)s2->f38);
        s2->f38 = 0;
    }
    s3 = ((Src_801F8E4C *)&quest_download_file_header);
    if (s3->f38 != 0) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void *)s3->f38);
        s3->f38 = 0;
    }
    quest_download_in_progress = 0;
    TQuestVmDownLoadServer__total_download_bytes = 0;
    TQuestVmDownLoadServer__received_file_bytes = 0;
    reset_download__22TQuestVmDownLoadServerFv();
}
}

extern "C" {
void free_buffers__22TQuestVmDownLoadServerFv(void) {
    Slot_801F8D30 *s;

    if (TQuestVmDownLoadServer__download_window != 0U) {
        TWindow__close((void *)TQuestVmDownLoadServer__download_window);
        TQuestVmDownLoadServer__download_window = 0U;
    }
    s = (Slot_801F8D30 *)&TQuestVmDownLoadServer__download_file_state;
    if (s->f38 != 0) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(s->f38);
        s->f38 = 0;
    }
    s = (Slot_801F8D30 *)&quest_download_file_slot;
    if (s->f38 != 0) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(s->f38);
        s->f38 = 0;
    }
    s = (Slot_801F8D30 *)&quest_download_file_info;
    if (s->f38 != 0) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(s->f38);
        s->f38 = 0;
    }
    s = (Slot_801F8D30 *)&quest_download_file_header;
    if (s->f38 != 0) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(s->f38);
        s->f38 = 0;
    }
    TQuestVmDownLoadServer__dat_download_complete = 0;
    TQuestVmDownLoadServer__bin_download_complete = 0;
    TQuestVmDownLoadServer__pvr_download_complete = 0;
    TQuestVmDownLoadServer__gba_download_complete = 0;
    memset(&TQuestVmDownLoadServer__download_file_state, 0, 0x3C);
    memset(&quest_download_file_slot, 0, 0x3C);
    memset(&quest_download_file_info, 0, 0x3C);
    memset(&quest_download_file_header, 0, 0x3C);
    quest_download_in_progress = 0;
    TQuestVmDownLoadServer__total_download_bytes = 0;
    TQuestVmDownLoadServer__received_file_bytes = 0;
    reset_download__22TQuestVmDownLoadServerFv();
}
}

extern "C" {
void begin_file_download__22TQuestVmDownLoadServerFPv(u8 *arg0) {
    char buf[0x10];
    char *ext;
    Src_801F8A40 *s;

    if (TQuestVmDownLoadServer__download_window == 0) {
        Pos_801F8A40 pos = *(Pos_801F8A40 *)lbl_8044A648;
        TQuestVmDownLoadServer__download_window = set_text__18TWindowMessagePageFiii((void *)get_window_layout_position(0x2F), &pos, 1);
        send_and_handle__6TLobbyFPvii(TQuestVmDownLoadServer__download_window, TQuestVmDownLoadServer__sub_8006EF6C(0x3E), 0x81);
        complete_reveal__14TWindowMessageFPv(TQuestVmDownLoadServer__download_window);
        TQuestVmDownLoadServer__total_download_bytes = 0;
        TQuestVmDownLoadServer__received_file_bytes = 0;
    }
    if (arg0 != NULL) {
        memset(buf, 0, 0x10);
        strncpy(buf, (char *)(arg0 + 0x28), 0x10);
        strtok(buf, (char *)&lbl_805DC510);
        ext = strtok(NULL, (char *)&lbl_805DC514);
        TQuestVmDownLoadServer__download_kind = arg0[0x26];
        if (strncmp(ext, (char *)&lbl_805DC518, 4) == 0) {
            strncpy(TQuestVmDownLoadServer__download_file_state.name, (char *)(arg0 + 0x28), 0x10);
            strncpy(TQuestVmDownLoadServer__download_file_state.title, (char *)(arg0 + 4), 0x22);
            s = &TQuestVmDownLoadServer__download_file_state;
            s->f34 = *(s32 *)(arg0 + 0x38) + 8;
            s->f38 = alloc__22TQuestVmDownLoadServerFPv(s->f34);
            memset(s->f38, 0, s->f34);
            TQuestVmDownLoadServer__dat_download_complete = 0;
            TQuestVmDownLoadServer__total_download_bytes += *(s32 *)(arg0 + 0x38);
        } else if (strncmp(ext, (char *)&lbl_805DC51C, 4) == 0) {
            strncpy(quest_download_file_slot.name, (char *)(arg0 + 0x28), 0x10);
            strncpy(quest_download_file_slot.title, (char *)(arg0 + 4), 0x22);
            s = &quest_download_file_slot;
            s->f34 = *(s32 *)(arg0 + 0x38) + 8;
            s->f38 = alloc__22TQuestVmDownLoadServerFPv(s->f34);
            memset(s->f38, 0, s->f34);
            TQuestVmDownLoadServer__bin_download_complete = 0;
            TQuestVmDownLoadServer__total_download_bytes += *(s32 *)(arg0 + 0x38);
            if ((s8)arg0[0x26] == 0) {
                update_graph__8TDLGraphFii(TQuestVmDownLoadServer__received_file_bytes, TQuestVmDownLoadServer__total_download_bytes);
            }
        } else if (strncmp(ext, (char *)&lbl_805DC520, 4) == 0) {
            strncpy((*(Src_801F8A40 *)&quest_download_file_info).name, (char *)(arg0 + 0x28), 0x10);
            strncpy((*(Src_801F8A40 *)&quest_download_file_info).title, (char *)(arg0 + 4), 0x22);
            (*(Src_801F8A40 *)&quest_download_file_info).f34 = *(s32 *)(arg0 + 0x38);
            (*(Src_801F8A40 *)&quest_download_file_info).f38 = alloc__22TQuestVmDownLoadServerFPv((*(Src_801F8A40 *)&quest_download_file_info).f34);
            memset((*(Src_801F8A40 *)&quest_download_file_info).f38, 0, *(s32 *)(arg0 + 0x38));
            TQuestVmDownLoadServer__pvr_download_complete = 0;
            TQuestVmDownLoadServer__total_download_bytes += *(s32 *)(arg0 + 0x38);
            if ((s32)arg0[0x26] == 1) {
                update_graph__8TDLGraphFii(TQuestVmDownLoadServer__received_file_bytes, TQuestVmDownLoadServer__total_download_bytes);
            }
        } else if (strncmp(ext, (char *)&lbl_805DC524, 4) == 0) {
            strncpy((*(Src_801F8A40 *)&quest_download_file_header).name, (char *)(arg0 + 0x28), 0x10);
            strncpy((*(Src_801F8A40 *)&quest_download_file_header).title, (char *)(arg0 + 4), 0x22);
            (*(Src_801F8A40 *)&quest_download_file_header).f34 = *(s32 *)(arg0 + 0x38);
            (*(Src_801F8A40 *)&quest_download_file_header).f38 = alloc__22TQuestVmDownLoadServerFPv((*(Src_801F8A40 *)&quest_download_file_header).f34);
            TQuestVmDownLoadServer__gba_download_complete = 0;
            TQuestVmDownLoadServer__total_download_bytes += *(s32 *)(arg0 + 0x38);
            update_graph__8TDLGraphFii(TQuestVmDownLoadServer__received_file_bytes, TQuestVmDownLoadServer__total_download_bytes);
        }
    }
}
}

extern "C" {
void receive_file_chunk__22TQuestVmDownLoadServerFPv(u8 *arg0) {
    u8 *dst;
    s32 *flag;
    s32 v;

    if (arg0 != NULL) {
        if (strncmp((char *)((Src_801F87CC *)&TQuestVmDownLoadServer__download_file_state), (char *)(arg0 + 4), 0x10) == 0) {
            flag = &TQuestVmDownLoadServer__dat_download_complete;
            dst = (*(Src_801F87CC *)&TQuestVmDownLoadServer__download_file_state).f38 + 8;
        } else if (strncmp((char *)((Src_801F87CC *)&quest_download_file_slot), (char *)(arg0 + 4), 0x10) == 0) {
            flag = &TQuestVmDownLoadServer__bin_download_complete;
            dst = (*(Src_801F87CC *)&quest_download_file_slot).f38 + 8;
        } else if (strncmp((char *)((Src_801F87CC *)&quest_download_file_info), (char *)(arg0 + 4), 0x10) == 0) {
            flag = &TQuestVmDownLoadServer__pvr_download_complete;
            dst = (*(Src_801F87CC *)&quest_download_file_info).f38;
        } else if (strncmp((char *)((Src_801F87CC *)&quest_download_file_header), (char *)(arg0 + 4), 0x10) == 0) {
            flag = &TQuestVmDownLoadServer__gba_download_complete;
            dst = (*(Src_801F87CC *)&quest_download_file_header).f38;
        } else {
            return;
        }
        memcpy(dst + (arg0[1] << 10), arg0 + 0x14, *(u32 *)(arg0 + 0x414));
        TQuestVmDownLoadServer__received_file_bytes += *(u32 *)(arg0 + 0x414);
        update_graph__8TDLGraphFii(TQuestVmDownLoadServer__received_file_bytes, TQuestVmDownLoadServer__total_download_bytes);
        if (*(u32 *)(arg0 + 0x414) < 0x400) {
            *flag = 1;
        }
    }
    switch ((s8)TQuestVmDownLoadServer__download_kind) {
    case 0:
        if (TQuestVmDownLoadServer__dat_download_complete != 0 && TQuestVmDownLoadServer__bin_download_complete != 0) {
            if (TQuestVmDownLoadServer__download_window != 0) {
                TWindow__close((void *)TQuestVmDownLoadServer__download_window);
                TQuestVmDownLoadServer__download_window = 0;
            }
            v = get_serial_access__22TQuestVmDownLoadServerFPv();
            if (v == 0) {
                v = poll_serial_access__22TQuestVmDownLoadServerFPv();
            }
            download_rng_seed_pair[1] = v;
            download_rng_seed_pair[0] = v;
            encrypt_download_data__22TQuestVmDownLoadServerFPvi((u32 *)(*(Src_801F87CC *)&TQuestVmDownLoadServer__download_file_state).f38, (*(Src_801F87CC *)&TQuestVmDownLoadServer__download_file_state).f34);
            encrypt_download_data__22TQuestVmDownLoadServerFPvi((u32 *)(*(Src_801F87CC *)&quest_download_file_slot).f38, (*(Src_801F87CC *)&quest_download_file_slot).f34);
            create__22TQuestVmDownLoadServerFv();
        }
        break;
    case 1:
        if (TQuestVmDownLoadServer__dat_download_complete != 0 && TQuestVmDownLoadServer__bin_download_complete != 0 &&
            TQuestVmDownLoadServer__pvr_download_complete != 0) {
            if (TQuestVmDownLoadServer__download_window != 0) {
                TWindow__close((void *)TQuestVmDownLoadServer__download_window);
                TQuestVmDownLoadServer__download_window = 0;
            }
            v = get_serial_access__22TQuestVmDownLoadServerFPv();
            if (v == 0) {
                v = poll_serial_access__22TQuestVmDownLoadServerFPv();
            }
            download_rng_seed_pair[1] = v;
            download_rng_seed_pair[0] = v;
            encrypt_download_data__22TQuestVmDownLoadServerFPvi((u32 *)(*(Src_801F87CC *)&TQuestVmDownLoadServer__download_file_state).f38, (*(Src_801F87CC *)&TQuestVmDownLoadServer__download_file_state).f34);
            encrypt_download_data__22TQuestVmDownLoadServerFPvi((u32 *)(*(Src_801F87CC *)&quest_download_file_slot).f38, (*(Src_801F87CC *)&quest_download_file_slot).f34);
            create__22TQuestVmDownLoadServerFv();
        }
        break;
    case 2:
        if (TQuestVmDownLoadServer__gba_download_complete != 0) {
            if (TQuestVmDownLoadServer__download_window != 0) {
                TWindow__close((void *)TQuestVmDownLoadServer__download_window);
                TQuestVmDownLoadServer__download_window = 0;
            }
            create__16TAdWarningBaseGCFv();
        }
        break;
    }
}
}

extern "C" {
void encrypt_download_data__22TQuestVmDownLoadServerFPvi(u32 *data, s32 size) {
    u32 *body;
    void *src;
    void *dst;
    body = data + 1;
    data[0] = subtractive_rng_next(&TQuestVmDownLoadServer__rng_cipher_state);
    *body = 0;
    *body = TQuestVmDownLoadServer__sub_801F8538((void *)(data), (s32)(size));
    subtractive_rng_seed(&TQuestVmDownLoadServer__rng_cipher_state, data[0]);
    subtractive_rng_xor_buffer(&TQuestVmDownLoadServer__rng_cipher_state, body, (size - 4) & ~3);
    subtractive_rng_seed(&TQuestVmDownLoadServer__rng_cipher_state, download_rng_seed_pair[0]);
    apply_rng_cipher__23TAdSinglePlyChrSelectGCFPvPvi(&TQuestVmDownLoadServer__rng_cipher_state, data, size & ~3);
    src = alloc__22TQuestVmDownLoadServerFPv(size);
    dst = alloc__22TQuestVmDownLoadServerFPv(size);
    move_data__6TLobbyFv(src, (s32)data, size);
    subtractive_rng_seed(&TQuestVmDownLoadServer__rng_cipher_state, download_rng_seed_pair[1]);
    subtractive_rng_make_shuffle(&TQuestVmDownLoadServer__rng_cipher_state);
    permute_save_blocks__23TAdSinglePlyChrSelectGCFPvPvPvUi(&TQuestVmDownLoadServer__rng_cipher_state, src, dst, size);
    move_data__6TLobbyFv(data, (s32)dst, size);
    safe_free__23TAdSinglePlyChrSelectGCFUi(dst);
    safe_free__23TAdSinglePlyChrSelectGCFUi(src);
}
}

extern "C" {
void unshuffle_and_decrypt__22TQuestVmDownLoadServerFPvi(u32 *data, s32 size) {
    void *src;
    void *dst;
    src = alloc__22TQuestVmDownLoadServerFPv(size);
    dst = alloc__22TQuestVmDownLoadServerFPv(size);
    move_data__6TLobbyFv(src, (s32)data, size);
    subtractive_rng_seed(&TQuestVmDownLoadServer__rng_cipher_state, download_rng_seed_pair[1]);
    subtractive_rng_make_shuffle(&TQuestVmDownLoadServer__rng_cipher_state);
    subtractive_rng_unshuffle(&TQuestVmDownLoadServer__rng_cipher_state, src, dst, size);
    move_data__6TLobbyFv(data, (s32)dst, size);
    safe_free__23TAdSinglePlyChrSelectGCFUi(dst);
    safe_free__23TAdSinglePlyChrSelectGCFUi(src);
    subtractive_rng_seed(&TQuestVmDownLoadServer__rng_cipher_state, download_rng_seed_pair[0]);
    apply_rng_cipher__23TAdSinglePlyChrSelectGCFPvPvi(&TQuestVmDownLoadServer__rng_cipher_state, data, size & ~3);
    subtractive_rng_seed(&TQuestVmDownLoadServer__rng_cipher_state, data[0]);
    subtractive_rng_xor_buffer(&TQuestVmDownLoadServer__rng_cipher_state, data + 1, (size - 4) & ~3);
}
}

extern "C" {
s32 TQuestVmDownLoadServer__sub_801F8538(void *data, s32 size) {
    u32 crc = -1;
    u32 i;
    for (i = 0; i < (u32)size; i++) {
        s32 j;
        crc ^= ((u8 *)data)[i];
        for (j = 0; j < 8; j++) {
            u32 bit0 = crc & 1;
            crc >>= 1;
            if (bit0 != 0) {
                crc ^= 0xEDB88320;
            }
        }
    }
    return crc ^ 0xFFFFFFFF;
}
}

extern "C" {
s32 verify_checksum__22TQuestVmDownLoadServerFii(s32 arg0, s32 arg1) {
  s32 temp_r31;
  void *temp_r3;
  s32 temp_r29;
  temp_r3 = alloc__22TQuestVmDownLoadServerFPv(arg1);
  if (temp_r3 == 0)
  {
    return 0;
  }
  move_data__6TLobbyFv(temp_r3, arg0, arg1);
  temp_r29 = *((s32 *) (((s8 *) temp_r3) + 4));
  *((s32 *) (((s8 *) temp_r3) + 4)) = 0;
  temp_r31 = TQuestVmDownLoadServer__sub_801F8538((void *)(temp_r3), (s32)(arg1));
  safe_free__23TAdSinglePlyChrSelectGCFUi(temp_r3);
  return ((u32) __cntlzw((u32) (temp_r31 - temp_r29))) >> 5;
}
}

extern "C" {
s32 *get_quest_download_file_header(void) {
    return &quest_download_file_header.value;
}
}

TQuestVmDownLoadServer::TQuestVmDownLoadServer(TObject *parent) : TObject(parent) {
    m_name = TQuestVmDownLoadServer__class_name;
    state = 0;
    m_22c = 0;
    m_230 = 0;
    m_234 = 0;
    m_238 = 0;
    m_25c = -1;
    m_260 = NULL;
    memset(m_270, 0, 0xD);
    memset(m_27d, 0, 0xD);
    m_28c = NULL;
    m_290 = NULL;
    m_294 = 0;
    m_29c = NULL;
    TQuestVmDownLoadServer__instance = (s32)this;
    m_298 = 2;
    quest_download_in_progress = 0;
}

TQuestVmDownLoadServer::~TQuestVmDownLoadServer() {
    if (m_260 != NULL) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(m_260);
        m_260 = NULL;
    }
    if (m_29c != NULL) {
        queue_destruction__7TObjectFv(m_29c);
        m_29c = NULL;
    }
    if (m_290 != NULL) {
        TWindow__close(m_290);
        m_290 = NULL;
    }
    if (m_28c != NULL) {
        TWindow__close(m_28c);
        m_28c = NULL;
    }
    close_message__22TQuestVmDownLoadServerFPv(this);
    TQuestVmDownLoadServer__instance = 0;
    quest_download_in_progress = 0;
}

void TQuestVmDownLoadServer::run_task() {
    u8 *arg0 = (u8 *)this;
    check_client_connections__22TQuestVmDownLoadServerFPv(arg0);
    switch (state) {
    case 0:
        TQuestVmDownLoadServer__sub_801F7FEC(arg0);
        break;
    case 1:
        close_window__22TQuestVmDownLoadServerFPv(arg0);
        break;
    case 2:
        open__22TQuestVmDownLoadServerFPv(arg0);
        break;
    case 3:
        update_mc_select__22TQuestVmDownLoadServerFPv((u8 *)(arg0));
        break;
    case 4:
        if (lbl_805D55C0 != 0) {
            if (m_290 != NULL) {
                set_flag_4__9TObjLukerFPv(m_290);
            }
            if (m_29c != NULL) {
                set_flag_4__9TObjLukerFPv(m_29c);
            }
        } else {
            if (m_290 != NULL) {
                clear_flag4_bit4__22TQuestVmDownLoadServerFPv(m_290);
            }
            if (m_29c != NULL) {
                clear_flag4_bit4__22TQuestVmDownLoadServerFPv(m_29c);
            }
            handle_confirm_input__22TQuestVmDownLoadServerFPv(arg0);
        }
        break;
    case 5:
        check_memcard_slot__22TQuestVmDownLoadServerFPv((u8 *)(arg0));
        break;
    case 6:
        handle_confirm_window__22TQuestVmDownLoadServerFPv(arg0);
        break;
    case 7:
        find_free_file_names__22TQuestVmDownLoadServerFPv((QVm_801F7890 *)arg0);
        break;
    case 8:
        TQuestVmDownLoadServer__sub_801F770C(arg0);
        break;
    case 9:
        load_quest_data__22TQuestVmDownLoadServerFPv(arg0);
        break;
    case 10:
        abort_download__22TQuestVmDownLoadServerFPv(arg0);
        break;
    case 11:
        write_memcard_file__22TQuestVmDownLoadServerFPv(arg0);
        break;
    case 12:
        write_quest_data_named__22TQuestVmDownLoadServerFPv(arg0);
        break;
    case 13:
        finish_download__22TQuestVmDownLoadServerFPv(arg0);
        break;
    case 14:
        TQuestVmDownLoadServer__sub_801F718C(arg0);
        break;
    case 15:
        write_quest_data__22TQuestVmDownLoadServerFPv(arg0);
        break;
    case 16:
        close_download__22TQuestVmDownLoadServerFPv(arg0);
        break;
    case 19:
        TQuestVmDownLoadServer__sub_801F6C74(arg0);
        break;
    case 20:
        check_cancel_input__22TQuestVmDownLoadServerFPv(arg0);
        break;
    case 17:
        close__22TQuestVmDownLoadServerFPv(arg0);
        break;
    case 18:
        TQuestVmDownLoadServer__sub_801F6D24((QVm_801F6D24 *)arg0);
        break;
    case 21:
        destroy__22TQuestVmDownLoadServerFPv(arg0);
        break;
    case 22:
        close_message__22TQuestVmDownLoadServerFPv(arg0);
        break;
    case 23:
        fn_801F6B00(arg0);
        break;
    }
}
extern "C" {
void TQuestVmDownLoadServer__sub_801F7FEC(u8 *arg0) {
    Slot_801F7FEC *s;
    u32 n;

    *(s32 *)((s8 *)arg0 + 0x230) = 0;
    *(s32 *)((s8 *)arg0 + 0x264) = 0;
    *(s32 *)((s8 *)arg0 + 0x268) = 0;
    *(s32 *)((s8 *)arg0 + 0x26C) = 0;
    *(s32 *)((s8 *)arg0 + 0x298) = 0;
    s = (Slot_801F7FEC *)&TQuestVmDownLoadServer__download_file_state;
    if (s->f34 > 0) {
        n = (u32)TAdPlayerLoadGC__sub_801E1518((void *)1, 0, s->f34);
        if (n != 0xFFFFFF00) {
            *(s32 *)((s8 *)arg0 + 0x230) += n;
            *(s32 *)((s8 *)arg0 + 0x268) = n;
            *(s32 *)((s8 *)arg0 + 0x298) += 1;
        } else {
            *(s32 *)((s8 *)arg0 + 0x2A0) = 0x15;
            return;
        }
    }
    s = (Slot_801F7FEC *)&quest_download_file_slot;
    if (s->f34 > 0) {
        n = (u32)TAdPlayerLoadGC__sub_801E1518((void *)1, 0, s->f34);
        if (n != 0xFFFFFF00) {
            *(s32 *)((s8 *)arg0 + 0x230) += n;
            *(s32 *)((s8 *)arg0 + 0x264) = n;
            *(s32 *)((s8 *)arg0 + 0x298) += 1;
        } else {
            *(s32 *)((s8 *)arg0 + 0x2A0) = 0x15;
            return;
        }
    }
    s = (Slot_801F7FEC *)&quest_download_file_info;
    if (s->f34 > 0) {
        n = (u32)TAdPlayerLoadGC__sub_801E1518((void *)1, 0, s->f34);
        if (n != 0xFFFFFF00) {
            *(s32 *)((s8 *)arg0 + 0x230) += n;
            *(s32 *)((s8 *)arg0 + 0x26C) = n;
            *(s32 *)((s8 *)arg0 + 0x298) += 1;
        } else {
            *(s32 *)((s8 *)arg0 + 0x2A0) = 0x15;
            return;
        }
    }
    if (*(s32 *)((s8 *)arg0 + 0x230) > 0) {
        *(s32 *)((s8 *)arg0 + 0x2A0) = 1;
        return;
    }
    *(s32 *)((s8 *)arg0 + 0x2A0) = 0x15;
}
}

extern "C" {
void close_window__22TQuestVmDownLoadServerFPv(void *arg0) {
    u32 temp_r3;
    *(s32 *)((s8 *)arg0 + 0x2A0) = 2;
    temp_r3 = (u32) *(u32 *)((s8 *)arg0 + 0x290);
    if (temp_r3 != 0U) {
        TWindow__close((void *)(temp_r3));
        *(u32 *)((s8 *)arg0 + 0x290) = 0U;
    }
    close_message__22TQuestVmDownLoadServerFPv(arg0);
    *(s32 *)((s8 *)arg0 + 0x22C) = 0;
    if ((u32) *(u32 *)((s8 *)arg0 + 0x29C) != 0U) {
        update_state__13TAdMcSelectGCFv();
    }
}
}

extern "C" {
void update_mc_select__22TQuestVmDownLoadServerFPv(u8 *arg0) {
    s32 temp_r0;
    if (((u32) *(u32 *)((s8 *)arg0 + 0x294) == 0U) || (is_ready__24TMessageWindowControllerFv(arg0 + 0x1C) != 0)) {
        if ((void *) *(u8 **)((s8 *)arg0 + 0x29C) == NULL) {
            reset_counter__6TSceneFv();
            if (lobby_player_construction_window != 0) {
                disallow_rendering__7TObjectFv(lobby_player_construction_window);
            }
            *(u32 *)((s8 *)arg0 + 0x29C) = create__13TAdMcSelectGCFPv(tl_03);
        }
        if ((void *) *(u8 **)((s8 *)arg0 + 0x29C) != NULL) {
            select_if_mc_present__13TAdMcSelectGCFv();
        }
        if (TWindowShortListCtrl__check_controller_button((void *)((u8 *)&controller_input_state.value + 0x20), 2) != 0) {
            select_if_mc_present__13TAdMcSelectGCFv();
            show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)(arg0), (int) (TQuestVmDownLoadServer__sub_8006EF6C(0x42)), (int) (1));
            *(s32 *)((s8 *)arg0 + 0x2A0) = 0x14;
            return;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x294) == 0U) {
            temp_r0 = *(s32 *)((s8 *)arg0 + 0x2A4);
            switch (temp_r0) {
            case 0:
                show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)(arg0), (int) (get_localized_text_entry((int) (0x29), (int) (0))), (int) (1));
                return;
            case 1:
                show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)(arg0), (int) (TQuestVmDownLoadServer__sub_8006EF6C(0x45)), (int) (1));
                return;
            case 2:
                show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)(arg0), (int) (TQuestVmDownLoadServer__sub_8006EF6C(0x60)), (int) (1));
                return;
            case 3:
                show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)(arg0), (int) (get_localized_text_entry((int) (0x29), (int) (2))), (int) (1));
                return;
            case 4:
                show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)(arg0), (int) (get_localized_text_entry((int) (0x29), (int) (3))), (int) (1));
                return;
            case 5:
                show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)(arg0), (int) (get_localized_text_entry((int) (0x29), (int) (4))), (int) (1));
                break;
            }
        }
    }
}
}

extern "C" {
void open__22TQuestVmDownLoadServerFPv(void *arg0) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0x29C) == 0U) {
        reset_counter__6TSceneFv();
        u32 temp_r3 = lobby_player_construction_window;
        if (temp_r3 != 0U) {
            disallow_rendering__7TObjectFv(temp_r3);
        }
        *(u32 *)((s8 *)arg0 + 0x29C) = create__13TAdMcSelectGCFPv(tl_03);
    }
    *(s32 *)((s8 *)arg0 + 0x2A0) = 4;
    show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)arg0, get_localized_text_entry(0x29, 1), 1);
}
}

extern "C" {
void handle_confirm_input__22TQuestVmDownLoadServerFPv(u8 *arg0) {
    u8 *temp_r31;
    temp_r31 = (u8 *)&controller_input_state.value + 0x20;
    if (TWindowShortListCtrl__check_controller_button((void *)(temp_r31), (int) (4)) != 0) {
        select_if_mc_present__13TAdMcSelectGCFv();
        *(s32 *)((s8 *)arg0 + 0x2A0) = 5;
        return;
    }
    if (TWindowShortListCtrl__check_controller_button((void *)(temp_r31), (int) (2)) != 0) {
        select_if_mc_present__13TAdMcSelectGCFv();
        show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)((void *) (arg0)), (s32)((int) (TQuestVmDownLoadServer__sub_8006EF6C((s32)((int) (0x42))))), (s32)((int) (1)));
        *(s32 *)((s8 *)arg0 + 0x2A0) = 0x14;
    }
}
}

extern "C" {
#pragma push
}
extern "C" {
#pragma opt_propagation off
}
extern "C" {
void check_memcard_slot__22TQuestVmDownLoadServerFPv(u8 *arg0) {
    s32 slot;
    s32 cap;
    u8 *seq;
    {
        s32 t = get_selected_slot_index__13TAdMcSelectGCFv();
        slot = t;
    }
    if (probe_card_slot__15TAdPlayerLoadGCFi(slot) != 0 && probe_and_check_card__15TAdPlayerLoadGCFi(slot) != 0) {
        cap = query_memcard_capacity__15TAdPlayerLoadGCFi(slot, 0);
        switch (cap) {
        case -0xFD:
            seq = (u8 *)__nw__7TObjectFUl(0x3C);
            if (seq != NULL) {
                seq = (u8 *)TMCFormatSequence__ct(seq, arg0, (void *)slot);
            }
            *(void **)((s8 *)seq + 0x1C) = (void *)TQuestVmDownLoadServer__sub_801F6B98;
            *(void **)((s8 *)seq + 0x20) = (void *)clear_field2A0__22TQuestVmDownLoadServerFv;
            *(s32 *)((s8 *)arg0 + 0x2A0) = 0x16;
            break;
        case -1:
        case -0xFF:
            return;
        default:
            if (cap < *(s32 *)((s8 *)arg0 + 0x230)) {
                show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)arg0, TQuestVmDownLoadServer__sub_8006EF6C(0x45), 1);
                *(s32 *)((s8 *)arg0 + 0x2A0) = 0x12;
                return;
            }
            if (TAdPlayerLoadGC__sub_801E0FA4(slot) < *(s32 *)((s8 *)arg0 + 0x298)) {
                show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)arg0, TQuestVmDownLoadServer__sub_8006EF6C(0x60), 1);
                *(s32 *)((s8 *)arg0 + 0x2A0) = 0x12;
                return;
            }
            if (*(void **)((s8 *)arg0 + 0x290) != NULL) {
                TWindow__close(*(void **)((s8 *)arg0 + 0x290));
                *(void **)((s8 *)arg0 + 0x290) = NULL;
            }
            *(u32 *)((s8 *)arg0 + 0x290) = init_shop_judgment_window(get_window_layout_position(0x2B));
            show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)arg0, TQuestVmDownLoadServer__sub_8006EF6C(0x40), 1);
            *(s32 *)((s8 *)arg0 + 0x25C) = slot;
            *(s32 *)((s8 *)arg0 + 0x2A0) = 6;
            return;
        }
    } else if (TWindowShortListCtrl__check_controller_button((void *)((u8 *)&controller_input_state + 0x20), 2) != 0) {
        update_state__13TAdMcSelectGCFv();
        show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)arg0, get_localized_text_entry(0x29, 1), 1);
        *(s32 *)((s8 *)arg0 + 0x2A0) = 4;
    }
}
}

extern "C" {
#pragma pop
}

extern "C" {
void handle_confirm_window__22TQuestVmDownLoadServerFPv(void *arg0) {
    s32 temp_r3;

    if ((u32) *(u32 *)((s8 *)arg0 + 0x290) != 0U) {
        if (is_visible__17TWindowSubComCardFPv(*(u32 *)((s8 *)arg0 + 0x290)) != 0) {
            temp_r3 = get_selected_menu_value(*(u32 *)((s8 *)arg0 + 0x290));
            if (temp_r3 == 0) {
                if ((u32) *(u32 *)((s8 *)arg0 + 0x290) != 0U) {
                    TWindow__close((void *)(*(void **)((s8 *)arg0 + 0x290)));
                    *(u32 *)((s8 *)arg0 + 0x290) = 0U;
                }
                *(s32 *)((s8 *)arg0 + 0x2A0) = 7;
                return;
            }
            if (temp_r3 == 1) {
                if ((u32) *(u32 *)((s8 *)arg0 + 0x290) != 0U) {
                    TWindow__close((void *)(*(void **)((s8 *)arg0 + 0x290)));
                    *(u32 *)((s8 *)arg0 + 0x290) = 0U;
                }
                if ((u32) *(u32 *)((s8 *)arg0 + 0x28C) != 0U) {
                    clear_selected_and_update_entry__14TWindowSubItemFPv(*(void **)((s8 *)arg0 + 0x28C));
                }
                update_state__13TAdMcSelectGCFv();
                show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)arg0, get_localized_text_entry(0x29, 1), 1);
                *(s32 *)((s8 *)arg0 + 0x2A0) = 4;
                return;
            }
            goto block_12;
        }
block_12:
        if (get_status_flag__17TWindowSubComCardFPv(*(u32 *)((s8 *)arg0 + 0x290)) != 0) {
            if ((u32) *(u32 *)((s8 *)arg0 + 0x290) != 0U) {
                TWindow__close((void *)(*(void **)((s8 *)arg0 + 0x290)));
                *(u32 *)((s8 *)arg0 + 0x290) = 0U;
            }
            if ((u32) *(u32 *)((s8 *)arg0 + 0x28C) != 0U) {
                clear_selected_and_update_entry__14TWindowSubItemFPv(*(void **)((s8 *)arg0 + 0x28C));
            }
            update_state__13TAdMcSelectGCFv();
            show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)arg0, get_localized_text_entry(0x29, 1), 1);
            *(s32 *)((s8 *)arg0 + 0x2A0) = 4;
        }
    }
}
}

extern "C" {
void find_free_file_names__22TQuestVmDownLoadServerFPv(QVm_801F7890 *self) {
    char buf[0xD];
    s32 i;
    memset(self->name0, 0, 0xD);
    memset(self->name1, 0, 0xD);
    for (i = lbl_805DC6B0; i < lbl_805DC6B4; i += 2) {
        memset(buf, 0, 0xD);
        sprintf(buf, lbl_8044A68C, lbl_8044BEE8, i);
        if (find_card_file__15TAdPlayerLoadGCFiPv(self->f25C, buf) == 0xFFFFFF05) {
            sprintf(buf, lbl_8044A68C, lbl_8044BEE8, i + 1);
            if (find_card_file__15TAdPlayerLoadGCFiPv(self->f25C, buf) == 0xFFFFFF05) {
                sprintf(self->name0, lbl_8044A68C, lbl_8044BEE8, i);
                sprintf(self->name1, lbl_8044A68C, lbl_8044BEE8, i + 1);
                self->f2A0 = 8;
                return;
            }
        }
    }
    self->f2A0 = 0x11;
}
}

extern "C" {

void TQuestVmDownLoadServer__sub_801F770C(u8 *arg0) {
    Req_801F770C req;
    s32 r;
    if (*(s32 *)((s8 *)arg0 + 0x25C) >= 0 && TAdPlayerLoadGC__sub_801E1B50(*(s32 *)((s8 *)arg0 + 0x25C)) == 0) {
        if (*(s32 *)((s8 *)arg0 + 0x264) > 0) {
            if (*(void **)((s8 *)arg0 + 0x260) != NULL) {
                safe_free__23TAdSinglePlyChrSelectGCFUi(*(void **)((s8 *)arg0 + 0x260));
                *(void **)((s8 *)arg0 + 0x260) = NULL;
            }
            *(void **)((s8 *)arg0 + 0x260) = alloc__22TQuestVmDownLoadServerFPv(*(s32 *)((s8 *)arg0 + 0x264) << 13);
            if (*(void **)((s8 *)arg0 + 0x260) != NULL) {
                memset(&req, 0, sizeof(req));
                strncpy(req.name, TQuestVmDownLoadServer__data_804C8690, 0x12);
                strncpy(req.title, quest_download_file_slot.title, 0x22);
                memcpy(req.key, TQuestVmDownLoadServer__memcard_key, 0x10);
                req.s44 = TQuestVmDownLoadServer__data_805DC5B8;
                req.s48 = TQuestVmDownLoadServer__data_805DC5BC;
                req.h4C = 1;
                req.h4E = 1;
                req.w50 = 0;
                req.h54 = 1;
                req.w58 = (s32)quest_download_file_slot.f38;
                req.w5C = quest_download_file_slot.f34;
                TAdPlayerLoadGC__sub_801E14E8(&req, 3);
                r = build_save_file_image__15TAdPlayerLoadGCFPvPv(*(void **)((s8 *)arg0 + 0x260), &req);
                TAdPlayerLoadGC__sub_801E14E4(&req);
                switch (r) {
                case -0x100:
                    *(s32 *)((s8 *)arg0 + 0x2A0) = 0x11;
                    break;
                default:
                    if (r != *(s32 *)((s8 *)arg0 + 0x264)) {
                        *(s32 *)((s8 *)arg0 + 0x264) = r;
                    }
                    *(s32 *)((s8 *)arg0 + 0x2A0) = 0x9;
                    break;
                }
            } else {
                *(s32 *)((s8 *)arg0 + 0x2A0) = 0x11;
            }
        } else {
            *(s32 *)((s8 *)arg0 + 0x2A0) = 0x11;
        }
    }
}
}

extern "C" {
void load_quest_data__22TQuestVmDownLoadServerFPv(u8 *arg0) {
    set_quest_download_server__23TAdSinglePlyChrSelectGCFi(*(s32 *)((s8 *)arg0 + 0x25C));
    lbl_805D49B4 = 1;
    if (draw_window_bg__23TAdSinglePlyChrSelectGCFiiii((s32)(*(s32 *)((s8 *)arg0 + 0x25C)), (void *)(arg0 + 0x270), (s32)(*(s32 *)((s8 *)arg0 + 0x260)), (s32)(*(s32 *)((s8 *)arg0 + 0x264))) == 0) {
        *(s32 *)((s8 *)arg0 + 0x2A0) = 0xA;
        show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)arg0, TQuestVmDownLoadServer__sub_8006EF6C(0xC), 1);
        quest_download_in_progress = 1;
        return;
    }
    show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)arg0, get_localized_text_entry(0x29, 2), 1);
    *(s32 *)((s8 *)arg0 + 0x2A0) = 0x17;
    lbl_805D49B4 = 0;
}
}

extern "C" {
void abort_download__22TQuestVmDownLoadServerFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_801E1B50(*(s32 *)((s8 *)arg0 + 0x25C)) == 0) {
        reset_quest_id__23TAdSinglePlyChrSelectGCFv();
        if ((u32) *(u32 *)((s8 *)arg0 + 0x260) != 0U) {
            safe_free__23TAdSinglePlyChrSelectGCFUi(*(void **)((s8 *)arg0 + 0x260));
            *(u32 *)((s8 *)arg0 + 0x260) = 0U;
        }
        *(s32 *)((s8 *)arg0 + 0x2A0) = 0xB;
        lbl_805D49B4 = 0;
    }
}
}

extern "C" {
void write_memcard_file__22TQuestVmDownLoadServerFPv(u8 *arg0) {
    Req_801F7478 req;
    s32 r;
    if (*(s32 *)((s8 *)arg0 + 0x25C) >= 0 && TAdPlayerLoadGC__sub_801E1B50(*(s32 *)((s8 *)arg0 + 0x25C)) == 0) {
        if (*(s32 *)((s8 *)arg0 + 0x268) > 0) {
            if (*(void **)((s8 *)arg0 + 0x260) != NULL) {
                safe_free__23TAdSinglePlyChrSelectGCFUi(*(void **)((s8 *)arg0 + 0x260));
                *(void **)((s8 *)arg0 + 0x260) = NULL;
            }
            *(void **)((s8 *)arg0 + 0x260) = alloc__22TQuestVmDownLoadServerFPv(*(s32 *)((s8 *)arg0 + 0x268) << 13);
            if (*(void **)((s8 *)arg0 + 0x260) != NULL) {
                memset(&req, 0, sizeof(req));
                strncpy(req.name, TQuestVmDownLoadServer__data_804C8690, 0x12);
                strncpy(req.title, TQuestVmDownLoadServer__download_file_state.title, 0x22);
                memcpy(req.key, TQuestVmDownLoadServer__memcard_key, 0x10);
                req.s44 = TQuestVmDownLoadServer__data_805DC5B8;
                req.s48 = TQuestVmDownLoadServer__data_805DC5BC;
                req.h4C = 1;
                req.h4E = 1;
                req.w50 = 0;
                req.h54 = 1;
                req.w58 = (s32)TQuestVmDownLoadServer__download_file_state.f38;
                req.w5C = TQuestVmDownLoadServer__download_file_state.f34;
                TAdPlayerLoadGC__sub_801E14E8(&req, 3);
                r = build_save_file_image__15TAdPlayerLoadGCFPvPv(*(void **)((s8 *)arg0 + 0x260), &req);
                TAdPlayerLoadGC__sub_801E14E4(&req);
                switch (r) {
                case -0x100:
                    *(s32 *)((s8 *)arg0 + 0x2A0) = 0x11;
                    break;
                default:
                    if (r != *(s32 *)((s8 *)arg0 + 0x268)) {
                        *(s32 *)((s8 *)arg0 + 0x268) = r;
                    }
                    *(s32 *)((s8 *)arg0 + 0x2A0) = 0xC;
                    break;
                }
            } else {
                *(s32 *)((s8 *)arg0 + 0x2A0) = 0x11;
            }
        } else {
            *(s32 *)((s8 *)arg0 + 0x2A0) = 0x11;
        }
    }
}
}

extern "C" {
void write_quest_data_named__22TQuestVmDownLoadServerFPv(u8 *arg0) {
    set_quest_download_server__23TAdSinglePlyChrSelectGCFi(*(s32 *)((s8 *)arg0 + 0x25C));
    lbl_805D49B4 = 1;
    if (draw_window_bg__23TAdSinglePlyChrSelectGCFiiii((s32)(*(s32 *)((s8 *)arg0 + 0x25C)), (void *)(arg0 + 0x27D), (s32)(*(s32 *)((s8 *)arg0 + 0x260)), (s32)(*(s32 *)((s8 *)arg0 + 0x268))) == 0) {
        *(s32 *)((s8 *)arg0 + 0x2A0) = 0xD;
        show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)arg0, TQuestVmDownLoadServer__sub_8006EF6C(0xC), 1);
        return;
    }
    show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)arg0, get_localized_text_entry(0x29, 2), 1);
    *(s32 *)((s8 *)arg0 + 0x2A0) = 0x17;
    lbl_805D49B4 = 0;
}
}

extern "C" {
void finish_download__22TQuestVmDownLoadServerFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_801E1B50(*(s32 *)((s8 *)arg0 + 0x25C)) == 0) {
        reset_quest_id__23TAdSinglePlyChrSelectGCFv();
        if ((u32) *(u32 *)((s8 *)arg0 + 0x260) != 0U) {
            safe_free__23TAdSinglePlyChrSelectGCFUi(*(void **)((s8 *)arg0 + 0x260));
            *(u32 *)((s8 *)arg0 + 0x260) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x28C) != 0U) {
            clear_selected_and_update_entry__14TWindowSubItemFPv(*(void **)((s8 *)arg0 + 0x28C));
        }
        *(s32 *)((s8 *)arg0 + 0x2A0) = 0xE;
        lbl_805D49B4 = 0;
    }
}
}

extern "C" {
void TQuestVmDownLoadServer__sub_801F718C(u8 *arg0) {
    Req_801F718C req;
    s32 r;
    if ((s32)TQuestVmDownLoadServer__download_kind != 1) {
        show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)arg0, TQuestVmDownLoadServer__sub_8006EF6C(0x41), 1);
        *(s32 *)((s8 *)arg0 + 0x2A0) = 0x13;
        return;
    }
    if (*(s32 *)((s8 *)arg0 + 0x25C) >= 0 && quest_download_file_info.f34 > 0) {
        if (TAdPlayerLoadGC__sub_801E1B50(*(s32 *)((s8 *)arg0 + 0x25C)) == 0) {
            if (*(s32 *)((s8 *)arg0 + 0x26C) > 0) {
                if (*(void **)((s8 *)arg0 + 0x260) != NULL) {
                    safe_free__23TAdSinglePlyChrSelectGCFUi(*(void **)((s8 *)arg0 + 0x260));
                    *(void **)((s8 *)arg0 + 0x260) = NULL;
                }
                *(void **)((s8 *)arg0 + 0x260) = alloc__22TQuestVmDownLoadServerFPv(*(s32 *)((s8 *)arg0 + 0x26C) << 13);
                if (*(void **)((s8 *)arg0 + 0x260) != NULL) {
                    memset(&req, 0, sizeof(req));
                    strncpy(req.name, TQuestVmDownLoadServer__data_804C8690, 0x12);
                    strncpy(req.title, quest_download_file_info.title, 0x22);
                    memcpy(req.key, TQuestVmDownLoadServer__memcard_key, 0x10);
                    req.s44 = TQuestVmDownLoadServer__data_805DC5B8;
                    req.s48 = TQuestVmDownLoadServer__data_805DC5BC;
                    req.h4C = 1;
                    req.h4E = 1;
                    req.w50 = 0;
                    req.h54 = 1;
                    req.w58 = quest_download_file_info.f38;
                    req.w5C = quest_download_file_info.f34;
                    TAdPlayerLoadGC__sub_801E14E8(&req, 3);
                    r = build_save_file_image__15TAdPlayerLoadGCFPvPv(*(void **)((s8 *)arg0 + 0x260), &req);
                    TAdPlayerLoadGC__sub_801E14E4(&req);
                    switch (r) {
                    case -0x100:
                        *(s32 *)((s8 *)arg0 + 0x2A0) = 0x11;
                        break;
                    default:
                        if (r != *(s32 *)((s8 *)arg0 + 0x26C)) {
                            *(s32 *)((s8 *)arg0 + 0x26C) = r;
                        }
                        *(s32 *)((s8 *)arg0 + 0x2A0) = 0xF;
                        break;
                    }
                } else {
                    *(s32 *)((s8 *)arg0 + 0x2A0) = 0x11;
                }
            } else {
                *(s32 *)((s8 *)arg0 + 0x2A0) = 0x11;
            }
        }
    } else {
        *(s32 *)((s8 *)arg0 + 0x2A0) = 0x11;
    }
}
}

extern "C" {
void write_quest_data__22TQuestVmDownLoadServerFPv(void *arg0) {
    set_quest_download_server__23TAdSinglePlyChrSelectGCFi(*(s32 *)((s8 *)arg0 + 0x25C));
    lbl_805D49B4 = 1;
    if (draw_window_bg__23TAdSinglePlyChrSelectGCFiiii((s32)(*(s32 *)((s8 *)arg0 + 0x25C)), (void *)(lbl_8044BEF4), (s32)(*(s32 *)((s8 *)arg0 + 0x260)), (s32)(*(s32 *)((s8 *)arg0 + 0x26C))) == 0) {
        *(s32 *)((s8 *)arg0 + 0x2A0) = 0x10;
        show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)arg0, TQuestVmDownLoadServer__sub_8006EF6C(0xC), 1);
        return;
    }
    show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)arg0, get_localized_text_entry(0x29, 2), 1);
    *(s32 *)((s8 *)arg0 + 0x2A0) = 0x17;
    lbl_805D49B4 = 0;
}
}

extern "C" {
void close_download__22TQuestVmDownLoadServerFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_801E1B50(*(s32 *)((s8 *)arg0 + 0x25C)) == 0) {
        reset_quest_id__23TAdSinglePlyChrSelectGCFv();
        if ((u32) *(u32 *)((s8 *)arg0 + 0x260) != 0U) {
            safe_free__23TAdSinglePlyChrSelectGCFUi(*(void **)((s8 *)arg0 + 0x260));
            *(u32 *)((s8 *)arg0 + 0x260) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x28C) != 0U) {
            clear_selected_and_update_entry__14TWindowSubItemFPv(*(void **)((s8 *)arg0 + 0x28C));
        }
        show_status_message__22TQuestVmDownLoadServerFPvii((u8*)(arg0), (s32)(TQuestVmDownLoadServer__sub_8006EF6C(0x41)), (s32)(1));
        *(s32 *)((s8 *)arg0 + 0x2A0) = 0x13;
        lbl_805D49B4 = 0;
    }
}
}

extern "C" {
void destroy__22TQuestVmDownLoadServerFPv(void *arg0) {
    set_ready__6TSceneFv(arg0);
    if (lobby_player_construction_window != 0) {
        allow_rendering__7TObjectFv((void *)lobby_player_construction_window);
    }
    free_buffers__22TQuestVmDownLoadServerFv();
    queue_destruction__7TObjectFv(arg0);
}
}

extern "C" {
void close__22TQuestVmDownLoadServerFPv(void *arg0) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0x260) != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(*(void **)((s8 *)arg0 + 0x260));
        *(u32 *)((s8 *)arg0 + 0x260) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x28C) != 0U) {
        clear_selected_and_update_entry__14TWindowSubItemFPv(*(void **)((s8 *)arg0 + 0x28C));
    }
    update_state__13TAdMcSelectGCFv();
    show_status_message__22TQuestVmDownLoadServerFPvii((u8*)(arg0), (s32)(get_localized_text_entry(0x29, 1)), (s32)(1));
    *(s32 *)((s8 *)arg0 + 0x2A0) = 4;
    quest_download_in_progress = 0;
}
}

extern "C" {
void check_client_connections__22TQuestVmDownLoadServerFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 var_r30;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x2A0);
    if ((temp_r0 == 0) || (temp_r0 == 0x15) || (temp_r0 == 0x16)) {
        return;
    }
    {
        if ((s32) lbl_805D55C0 != 0) {
            if ((u32) *(u32 *)((s8 *)arg0 + 0x29C) != 0U) {
                set_flag_4__9TObjLukerFPv(*(void **)((s8 *)arg0 + 0x29C));
            }
        } else {
            if ((u32) *(u32 *)((s8 *)arg0 + 0x29C) != 0U) {
                clear_flag4_bit4__22TQuestVmDownLoadServerFPv(*(void **)((s8 *)arg0 + 0x29C));
            }
            var_r30 = 0;
            *(s32 *)((s8 *)arg0 + 0x234) = 0;
            do {
                if (probe_card_slot__15TAdPlayerLoadGCFi(var_r30) != 0) {
                    *(s32 *)((s8 *)arg0 + 0x234) = (s32) (*(s32 *)((s8 *)arg0 + 0x234) | (1 << var_r30));
                }
                var_r30 += 1;
            } while (var_r30 < 8);
            temp_r3 = *(s32 *)((s8 *)arg0 + 0x234);
            if (temp_r3 != (s32) *(s32 *)((s8 *)arg0 + 0x238)) {
                *(s32 *)((s8 *)arg0 + 0x238) = temp_r3;
                if ((s32) quest_download_in_progress != 0) {
                    quest_download_in_progress = 0;
                    show_status_message__22TQuestVmDownLoadServerFPvii((u8*)(arg0), (s32)(TQuestVmDownLoadServer__sub_8006EF6C(0xB)), (s32)(1));
                    *(s32 *)((s8 *)arg0 + 0x2A0) = 0x12;
                } else {
                    *(s32 *)((s8 *)arg0 + 0x2A0) = 1;
                }
            }
        }
    }
}
}

extern "C" {
void show_status_message__22TQuestVmDownLoadServerFPvii(u8* arg0, s32 arg1, s32 arg2) {
    Pair_801F6E08 sp;
    if (*(u32*)(arg0 + 0x294) == 0) {
        sp.a = lbl_8044A668[0];
        sp.b = lbl_8044A668[1];
        *(s32*)(arg0 + 0x294) = create_window__24TMessageWindowControllerFll(arg0 + 0x1C, get_window_layout_position(0x2F), &sp);
    }
    display_message__24TMessageWindowControllerFPCcl(arg0 + 0x1C, arg1, arg2 | 0x80);
}
}

extern "C" {
void close_message__22TQuestVmDownLoadServerFPv(void* p) { if (*(unsigned int*)((char*)p + 0x294) != 0) { close__24TMessageWindowControllerFv((char*)p + 0x1c); *(int*)((char*)p + 0x294) = 0; } }
}

extern "C" {
void TQuestVmDownLoadServer__sub_801F6D24(QVm_801F6D24 *self) {
    u8 *p;
    if (self->f294 == 0 || is_ready__24TMessageWindowControllerFv((u8 *)self + 0x1C) != 0) {
        p = ((u8 *)&controller_input_state) + 0x20;
        if (TWindowShortListCtrl__check_controller_button((void *)(p), (int)(4)) != 0 || TWindowShortListCtrl__check_controller_button((void *)(p), (int)(2)) != 0) {
            update_state__13TAdMcSelectGCFv();
            show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)(self), (int)(get_localized_text_entry((int)(0x29), (int)(1))), (int)(1));
            self->f2A0 = 4;
        }
    }
}
}

extern "C" {
void TQuestVmDownLoadServer__sub_801F6C74(u8 *arg0) {
    u8 *temp_r31;
    temp_r31 = (u8 *)&controller_input_state.value + 0x20;
    quest_download_in_progress = 0;
    if (TWindowShortListCtrl__check_controller_button((void *)(temp_r31), (int) (4)) != 0) {
        update_state__13TAdMcSelectGCFv();
        show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)(arg0), (int) (get_localized_text_entry((int) (0x29), (int) (1))), (int) (1));
        *(s32 *)((s8 *)arg0 + 0x2A0) = 4;
    }
    if (TWindowShortListCtrl__check_controller_button((void *)(temp_r31), (int) (2)) != 0) {
        select_if_mc_present__13TAdMcSelectGCFv();
        show_status_message__22TQuestVmDownLoadServerFPvii((u8 *)(arg0), (int) (TQuestVmDownLoadServer__sub_8006EF6C((int) (0x42))), (int) (1));
        *(s32 *)((s8 *)arg0 + 0x2A0) = 0x14;
    }
}
}

extern "C" {
void check_cancel_input__22TQuestVmDownLoadServerFPv(u8 *arg0) {
    u8 *temp_r31;
    temp_r31 = (u8 *)&(*(RecoveredGlobal_801F6C74_lbl_8050E208 *)&controller_input_state).value + 0x20;
    if ((TWindowShortListCtrl__check_controller_button((void *)(temp_r31), (int) (4)) != 0) || (TWindowShortListCtrl__check_controller_button((void *)(temp_r31), (int) (2)) != 0)) {
        return_to_main_menu__6TLobbyFv();
        *(s32 *)((s8 *)arg0 + 0x2A0) = 0x15;
    }
}
}

extern "C" {
void create__22TQuestVmDownLoadServerFv(void) {
    void *temp_r3;

    if ((u32) TQuestVmDownLoadServer__instance == 0U) {
        temp_r3 = __nw__7TObjectFUl(0x2A8);
        if (temp_r3 != 0) {
            __ct__22TQuestVmDownLoadServerFP7TObject(temp_r3, tl_00);
        }
    }
}
}

extern "C" {
s32 get_field230__22TQuestVmDownLoadServerFv(void) {
    if ((void *) TQuestVmDownLoadServer__instance != NULL) {
        return *(s32 *)((s8 *)TQuestVmDownLoadServer__instance + 0x230);
    }
    return 0;
}
}

extern "C" {
void TQuestVmDownLoadServer__sub_801F6B98(void) {
    if ((void *) TQuestVmDownLoadServer__instance != NULL) {
        *(s32 *)((s8 *)TQuestVmDownLoadServer__instance + 0x2A0) = 0;
    }
}
}

extern "C" {
void clear_field2A0__22TQuestVmDownLoadServerFv(void) {
    if ((void *) TQuestVmDownLoadServer__instance != NULL) {
        *(s32 *)((s8 *)TQuestVmDownLoadServer__instance + 0x2A0) = 0;
    }
}
}

extern "C" {
void fn_801F6B00(u8* arg0) {
    if (*(u32*)(arg0 + 0x294) == 0 || is_ready__24TMessageWindowControllerFv(arg0 + 0x1C) != 0) {
        void* p = (u8 *)&controller_input_state + 0x20;
        if (TWindowShortListCtrl__check_controller_button(p, 4) != 0 || TWindowShortListCtrl__check_controller_button(p, 2) != 0) {
            *(s32*)(arg0 + 0x2A0) = 0x11;
        }
    }
}
}

extern "C" {
void *TMCFormatSequence__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TMCFormatSequence;
    *(void **)((s8 *)arg0 + 0x0) = TMCFormatSequence__class_name;
    *(u32 *)((s8 *)arg0 + 0x24) = 0;
    *(void **)((s8 *)arg0 + 0x28) = arg2;
    *(u32 *)((s8 *)arg0 + 0x1C) = 0;
    *(u32 *)((s8 *)arg0 + 0x20) = 0;
    *(u32 *)((s8 *)arg0 + 0x34) = 0;
    *(u32 *)((s8 *)arg0 + 0x38) = 0;
    *(u32 *)((s8 *)arg0 + 0x2C) = 11;
    *(u32 *)((s8 *)arg0 + 0x30) = 101;
    return arg0;
}
}

extern "C" {
TMCFormatSequence::~TMCFormatSequence() {
    if (m_38 != nullptr) { TWindow__close(m_38); m_38 = nullptr; }
    close_window__17TMCFormatSequenceFPv(this);
}
}

extern "C" {
void run_task__17TMCFormatSequenceFv(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x24);
    switch (temp_r0) {
    case 0:
        open_windows__17TMCFormatSequenceFPv();
        return;
    case 1:
        process_format_result__17TMCFormatSequenceFPv();
        return;
    case 2:
        check_memcard_load_result__17TMCFormatSequenceFPv();
        return;
    case 3:
        wait_confirm_and_finish__17TMCFormatSequenceFPv();
        return;
    case 4:
        update_wait_confirm__17TMCFormatSequenceFPv();
        return;
    }
}
}
