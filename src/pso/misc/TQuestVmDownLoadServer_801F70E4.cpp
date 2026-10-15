#include "pso/misc/TQuestVmDownLoadServer.h"
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801F7CC0_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 {
    M2C_UNK value;
    u8 remaining[0xE4];
};

struct RecoveredGlobal_801F84AC_lbl_80512BDC {
    M2C_UNK value;
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

typedef s32 M2C_UNK;
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
struct QVm_801F6D24;

extern "C" {
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
void *alloc__22TQuestVmDownLoadServerFPv(s32);
M2C_UNK move_data__6TLobbyFv(void *, s32, s32);
s32 verify_checksum__22TQuestVmDownLoadServerFii(s32 arg0, s32 arg1);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
s32 TWindowShortListCtrl__check_controller_button(int, int);
M2C_UNK show_status_message__22TQuestVmDownLoadServerFPvii(void *, s32, M2C_UNK);
M2C_UNK select_if_mc_present__13TAdMcSelectGCFv();
extern RecoveredGlobal_801F7CC0_lbl_8050E208 controller_input_state;
void handle_confirm_input__22TQuestVmDownLoadServerFPv(u8 *arg0);
s32 init_single_player_chr_select__6TLobbyFPv(s32);
void TQuestVmDownLoadServer__sub_801F8FA4(void);
extern RecoveredGlobal_801F84AC_lbl_80512BDC quest_download_file_header;
M2C_UNK *get_quest_download_file_header(void);
void *memset(void *, int, u32);
extern const char *TQuestVmDownLoadServer__class_name;
extern s32 quest_download_in_progress;
extern s32 TQuestVmDownLoadServer__instance;
void *memset(void *, int, u32);
int sprintf(char *, const char *, ...);
u32 find_card_file__15TAdPlayerLoadGCFiPv(s32, char *);
extern char lbl_8044A68C[];
extern char lbl_8044BEE8[];
extern const s32 lbl_805DC6B0;
extern const s32 lbl_805DC6B4;
void find_free_file_names__22TQuestVmDownLoadServerFPv(QVm_801F7890 *self);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
void *alloc__22TQuestVmDownLoadServerFPv(s32);
M2C_UNK move_data__6TLobbyFv(void *, s32, s32);
void subtractive_rng_seed(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 *, u32);
void subtractive_rng_make_shuffle(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 *);
void subtractive_rng_unshuffle(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 *, void *, void *, s32);
void apply_rng_cipher__23TAdSinglePlyChrSelectGCFPvPvi(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 *, u32 *, u32);
void subtractive_rng_xor_buffer(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 *, u32 *, u32);
void unshuffle_and_decrypt__22TQuestVmDownLoadServerFPvi(u32 *data, s32 size);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
void *alloc__22TQuestVmDownLoadServerFPv(s32);
M2C_UNK move_data__6TLobbyFv(void *, s32, s32);
u32 subtractive_rng_next(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 *);
void subtractive_rng_seed(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 *, u32);
void subtractive_rng_make_shuffle(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 *);
void permute_save_blocks__23TAdSinglePlyChrSelectGCFPvPvPvUi(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 *, void *, void *, s32);
void apply_rng_cipher__23TAdSinglePlyChrSelectGCFPvPvi(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 *, u32 *, u32);
void subtractive_rng_xor_buffer(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 *, u32 *, u32);
void encrypt_download_data__22TQuestVmDownLoadServerFPvi(u32 *data, s32 size);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
void *alloc__22TQuestVmDownLoadServerFPv(s32);
void TAdPlayerLoadGC__sub_801E14E4(void *);
void TAdPlayerLoadGC__sub_801E14E8(void *, s32);
s32 build_save_file_image__15TAdPlayerLoadGCFPvPv(void *, void *);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
char *strncpy(char *, const char *, u32);
void *memcpy(void *, const void *, u32);
void *memset(void *, int, u32);
extern char TQuestVmDownLoadServer__data_804C8690[];
extern u8 TQuestVmDownLoadServer__memcard_key[];
extern char TQuestVmDownLoadServer__data_805DC5B8[];
extern char TQuestVmDownLoadServer__data_805DC5BC[];
void write_memcard_file__22TQuestVmDownLoadServerFPv(u8 *arg0);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
void *alloc__22TQuestVmDownLoadServerFPv(s32);
void TAdPlayerLoadGC__sub_801E14E4(void *);
void TAdPlayerLoadGC__sub_801E14E8(void *, s32);
s32 build_save_file_image__15TAdPlayerLoadGCFPvPv(void *, void *);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
char *strncpy(char *, const char *, u32);
void *memcpy(void *, const void *, u32);
void *memset(void *, int, u32);
extern char TQuestVmDownLoadServer__data_804C8690[];
extern u8 TQuestVmDownLoadServer__memcard_key[];
extern char TQuestVmDownLoadServer__data_805DC5B8[];
extern char TQuestVmDownLoadServer__data_805DC5BC[];
void TQuestVmDownLoadServer__sub_801F770C(u8 *arg0);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
void *alloc__22TQuestVmDownLoadServerFPv(s32);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
M2C_UNK show_status_message__22TQuestVmDownLoadServerFPvii(void *, s32, M2C_UNK);
void TAdPlayerLoadGC__sub_801E14E4(void *);
void TAdPlayerLoadGC__sub_801E14E8(void *, s32);
s32 build_save_file_image__15TAdPlayerLoadGCFPvPv(void *, void *);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
char *strncpy(char *, const char *, u32);
void *memcpy(void *, const void *, u32);
void *memset(void *, int, u32);
extern char TQuestVmDownLoadServer__data_804C8690[];
extern u8 TQuestVmDownLoadServer__memcard_key[];
extern Src_801F718C quest_download_file_info;
extern char TQuestVmDownLoadServer__data_805DC5B8[];
extern char TQuestVmDownLoadServer__data_805DC5BC[];
extern u8 TQuestVmDownLoadServer__download_kind;
void TQuestVmDownLoadServer__sub_801F718C(u8 *arg0);
void check_client_connections__22TQuestVmDownLoadServerFPv(void *arg0);
void TQuestVmDownLoadServer__sub_801F7FEC(u8 *arg0);
void close_window__22TQuestVmDownLoadServerFPv(void *arg0);
void open__22TQuestVmDownLoadServerFPv(void *arg0);
M2C_UNK set_flag_4__9TObjLukerFPv(void *);
void clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void* p);
void handle_confirm_input__22TQuestVmDownLoadServerFPv(u8 *arg0);
void handle_confirm_window__22TQuestVmDownLoadServerFPv(void *arg0);
void find_free_file_names__22TQuestVmDownLoadServerFPv(QVm_801F7890 *self);
void TQuestVmDownLoadServer__sub_801F770C(u8 *arg0);
void load_quest_data__22TQuestVmDownLoadServerFPv(u8 *arg0);
void abort_download__22TQuestVmDownLoadServerFPv(void *arg0);
void write_memcard_file__22TQuestVmDownLoadServerFPv(u8 *arg0);
void write_quest_data_named__22TQuestVmDownLoadServerFPv(u8 *arg0);
void finish_download__22TQuestVmDownLoadServerFPv(void *arg0);
void TQuestVmDownLoadServer__sub_801F718C(u8 *arg0);
void write_quest_data__22TQuestVmDownLoadServerFPv(void *arg0);
void close_download__22TQuestVmDownLoadServerFPv(void *arg0);
void TQuestVmDownLoadServer__sub_801F6C74(u8 *arg0);
void check_cancel_input__22TQuestVmDownLoadServerFPv(u8 *arg0);
void close__22TQuestVmDownLoadServerFPv(void *arg0);
void TQuestVmDownLoadServer__sub_801F6D24(QVm_801F6D24 *self);
void destroy__22TQuestVmDownLoadServerFPv(void *arg0);
M2C_UNK close_message__22TQuestVmDownLoadServerFPv(void *);
void fn_801F6B00(u8 *arg0);
extern s32 lbl_805D55C0;
struct Slot_801F7FEC { u8 pad[0x34]; s32 f34; void *f38; };
struct Slot_801F8D30 { u8 pad[0x34]; s32 f34; void *f38; };
s32 TAdPlayerLoadGC__sub_801E1518(void *, s32, u32);
M2C_UNK reset_download__22TQuestVmDownLoadServerFv(void);
M2C_UNK TWindow__close(void *);
extern s32 TQuestVmDownLoadServer__dat_download_complete;
extern s32 TQuestVmDownLoadServer__bin_download_complete;
extern s32 TQuestVmDownLoadServer__pvr_download_complete;
extern s32 TQuestVmDownLoadServer__gba_download_complete;
extern u32 TQuestVmDownLoadServer__download_window;
extern s32 TQuestVmDownLoadServer__total_download_bytes;
extern s32 TQuestVmDownLoadServer__received_file_bytes;
struct Src_801F8A40 {
    char name[0x10];
    char title[0x24];
    s32 f34;
    void *f38;
};
Src_801F8A40 TQuestVmDownLoadServer__download_file_state;
Src_801F8A40 quest_download_file_slot;
Src_801F718C quest_download_file_info;
RecoveredGlobal_801F84AC_lbl_80512BDC quest_download_file_header;
RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 TQuestVmDownLoadServer__rng_cipher_state;
__declspec(section ".data") u32 download_rng_seed_pair[2];
M2C_UNK disallow_rendering__7TObjectFv(u32);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
s32 TWindowShortListCtrl__check_controller_button(int, int);
M2C_UNK reset_counter__6TSceneFv();
s32 is_ready__24TMessageWindowControllerFv(void *);
M2C_UNK select_if_mc_present__13TAdMcSelectGCFv();
u32 create__13TAdMcSelectGCFPv(s32);
s32 get_localized_text_entry(M2C_UNK, M2C_UNK);
M2C_UNK show_status_message__22TQuestVmDownLoadServerFPvii(void *, s32, M2C_UNK);
extern RecoveredGlobal_801F7CC0_lbl_8050E208 controller_input_state;
extern u32 lobby_player_construction_window;
extern s32 tl_03;
void update_mc_select__22TQuestVmDownLoadServerFPv(u8 *arg0);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
M2C_UNK show_status_message__22TQuestVmDownLoadServerFPvii(void *, s32, M2C_UNK);
s32 get_localized_text_entry(M2C_UNK, M2C_UNK);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 probe_and_check_card__15TAdPlayerLoadGCFi(s32);
s32 TAdPlayerLoadGC__sub_801E0FA4(s32);
s32 probe_card_slot__15TAdPlayerLoadGCFi(s32);
s32 query_memcard_capacity__15TAdPlayerLoadGCFi(s32, int);
u8 *TMCFormatSequence__ct(void *, void *, s32);
void *__nw__7TObjectFUl(u32);
M2C_UNK TWindow__close(void *);
u32 init_shop_judgment_window(s32);
s32 get_window_layout_position(int);
M2C_UNK update_state__13TAdMcSelectGCFv();
s32 get_selected_slot_index__13TAdMcSelectGCFv();
void clear_field2A0__22TQuestVmDownLoadServerFv(void);
void TQuestVmDownLoadServer__sub_801F6B98(void);
extern RecoveredGlobal_801F7CC0_lbl_8050E208 controller_input_state;
void check_memcard_slot__22TQuestVmDownLoadServerFPv(u8 *arg0);
s32 TQuestVmDownLoadServer__sub_801F8538(void *data, s32 size);
}

extern "C" {

void abort_download__22TQuestVmDownLoadServerFPv(void *arg0);
void close_window__22TQuestVmDownLoadServerFPv(void *arg0);
void finish_download__22TQuestVmDownLoadServerFPv(void *arg0);
void handle_confirm_window__22TQuestVmDownLoadServerFPv(void *arg0);
void load_quest_data__22TQuestVmDownLoadServerFPv(u8 *arg0);
void open__22TQuestVmDownLoadServerFPv(void *arg0);
void write_quest_data__22TQuestVmDownLoadServerFPv(void *arg0);
void write_quest_data_named__22TQuestVmDownLoadServerFPv(u8 *arg0);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 get_localized_text_entry(M2C_UNK, M2C_UNK);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
M2C_UNK show_status_message__22TQuestVmDownLoadServerFPvii(void *, s32, M2C_UNK);
s32 get_selected_menu_value(u32);
M2C_UNK TWindow__close(void *);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
M2C_UNK close_message__22TQuestVmDownLoadServerFPv(void *);
u32 create__13TAdMcSelectGCFPv(s32);
M2C_UNK disallow_rendering__7TObjectFv(u32);
s32 draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(s32, void *, s32, s32);
s32 get_status_flag__17TWindowSubComCardFPv(u32);
s32 is_visible__17TWindowSubComCardFPv(u32);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK reset_counter__6TSceneFv();
M2C_UNK reset_quest_id__23TAdSinglePlyChrSelectGCFv();
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
M2C_UNK set_quest_download_server__23TAdSinglePlyChrSelectGCFi(s32);
M2C_UNK update_state__13TAdMcSelectGCFv();

extern M2C_UNK lbl_8044BEF4[];
extern s32 lbl_805D49B4;

void write_quest_data__22TQuestVmDownLoadServerFPv(void *arg0) {
    set_quest_download_server__23TAdSinglePlyChrSelectGCFi(M2C_FIELD(arg0, s32 *, 0x25C));
    lbl_805D49B4 = 1;
    if (draw_window_bg__23TAdSinglePlyChrSelectGCFiiii((s32)(M2C_FIELD(arg0, s32 *, 0x25C)), (void *)(lbl_8044BEF4), (s32)(M2C_FIELD(arg0, s32 *, 0x260)), (s32)(M2C_FIELD(arg0, s32 *, 0x26C))) == 0) {
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0x10;
        show_status_message__22TQuestVmDownLoadServerFPvii(arg0, TQuestVmDownLoadServer__sub_8006EF6C(0xC), 1);
        return;
    }
    show_status_message__22TQuestVmDownLoadServerFPvii(arg0, get_localized_text_entry(0x29, 2), 1);
    M2C_FIELD(arg0, s32 *, 0x2A0) = 0x17;
    lbl_805D49B4 = 0;
}

extern s32 lbl_805D49B4;

void TQuestVmDownLoadServer__sub_801F718C(u8 *arg0) {
    Req_801F718C req;
    s32 r;
    if ((s32)TQuestVmDownLoadServer__download_kind != 1) {
        show_status_message__22TQuestVmDownLoadServerFPvii(arg0, TQuestVmDownLoadServer__sub_8006EF6C(0x41), 1);
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0x13;
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x25C) >= 0 && quest_download_file_info.f34 > 0) {
        if (TAdPlayerLoadGC__sub_801E1B50(M2C_FIELD(arg0, s32 *, 0x25C)) == 0) {
            if (M2C_FIELD(arg0, s32 *, 0x26C) > 0) {
                if (M2C_FIELD(arg0, void **, 0x260) != NULL) {
                    safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0x260));
                    M2C_FIELD(arg0, void **, 0x260) = NULL;
                }
                M2C_FIELD(arg0, void **, 0x260) = alloc__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, s32 *, 0x26C) << 13);
                if (M2C_FIELD(arg0, void **, 0x260) != NULL) {
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
                    r = build_save_file_image__15TAdPlayerLoadGCFPvPv(M2C_FIELD(arg0, void **, 0x260), &req);
                    TAdPlayerLoadGC__sub_801E14E4(&req);
                    switch (r) {
                    case -0x100:
                        M2C_FIELD(arg0, s32 *, 0x2A0) = 0x11;
                        break;
                    default:
                        if (r != M2C_FIELD(arg0, s32 *, 0x26C)) {
                            M2C_FIELD(arg0, s32 *, 0x26C) = r;
                        }
                        M2C_FIELD(arg0, s32 *, 0x2A0) = 0xF;
                        break;
                    }
                } else {
                    M2C_FIELD(arg0, s32 *, 0x2A0) = 0x11;
                }
            } else {
                M2C_FIELD(arg0, s32 *, 0x2A0) = 0x11;
            }
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0x11;
    }
}

void finish_download__22TQuestVmDownLoadServerFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_801E1B50(M2C_FIELD(arg0, s32 *, 0x25C)) == 0) {
        reset_quest_id__23TAdSinglePlyChrSelectGCFv();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x260) != 0U) {
            safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0x260));
            M2C_FIELD(arg0, u32 *, 0x260) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) != 0U) {
            clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x28C));
        }
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0xE;
        lbl_805D49B4 = 0;
    }
}

extern s32 lbl_805D49B4;

void write_quest_data_named__22TQuestVmDownLoadServerFPv(u8 *arg0) {
    set_quest_download_server__23TAdSinglePlyChrSelectGCFi(M2C_FIELD(arg0, s32 *, 0x25C));
    lbl_805D49B4 = 1;
    if (draw_window_bg__23TAdSinglePlyChrSelectGCFiiii((s32)(M2C_FIELD(arg0, s32 *, 0x25C)), (void *)(arg0 + 0x27D), (s32)(M2C_FIELD(arg0, s32 *, 0x260)), (s32)(M2C_FIELD(arg0, s32 *, 0x268))) == 0) {
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0xD;
        show_status_message__22TQuestVmDownLoadServerFPvii(arg0, TQuestVmDownLoadServer__sub_8006EF6C(0xC), 1);
        return;
    }
    show_status_message__22TQuestVmDownLoadServerFPvii(arg0, get_localized_text_entry(0x29, 2), 1);
    M2C_FIELD(arg0, s32 *, 0x2A0) = 0x17;
    lbl_805D49B4 = 0;
}

extern s32 lbl_805D49B4;

void write_memcard_file__22TQuestVmDownLoadServerFPv(u8 *arg0) {
    Req_801F7478 req;
    s32 r;
    if (M2C_FIELD(arg0, s32 *, 0x25C) >= 0 && TAdPlayerLoadGC__sub_801E1B50(M2C_FIELD(arg0, s32 *, 0x25C)) == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x268) > 0) {
            if (M2C_FIELD(arg0, void **, 0x260) != NULL) {
                safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0x260));
                M2C_FIELD(arg0, void **, 0x260) = NULL;
            }
            M2C_FIELD(arg0, void **, 0x260) = alloc__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, s32 *, 0x268) << 13);
            if (M2C_FIELD(arg0, void **, 0x260) != NULL) {
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
                r = build_save_file_image__15TAdPlayerLoadGCFPvPv(M2C_FIELD(arg0, void **, 0x260), &req);
                TAdPlayerLoadGC__sub_801E14E4(&req);
                switch (r) {
                case -0x100:
                    M2C_FIELD(arg0, s32 *, 0x2A0) = 0x11;
                    break;
                default:
                    if (r != M2C_FIELD(arg0, s32 *, 0x268)) {
                        M2C_FIELD(arg0, s32 *, 0x268) = r;
                    }
                    M2C_FIELD(arg0, s32 *, 0x2A0) = 0xC;
                    break;
                }
            } else {
                M2C_FIELD(arg0, s32 *, 0x2A0) = 0x11;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x2A0) = 0x11;
        }
    }
}

void abort_download__22TQuestVmDownLoadServerFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_801E1B50(M2C_FIELD(arg0, s32 *, 0x25C)) == 0) {
        reset_quest_id__23TAdSinglePlyChrSelectGCFv();
        if ((u32) M2C_FIELD(arg0, u32 *, 0x260) != 0U) {
            safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0x260));
            M2C_FIELD(arg0, u32 *, 0x260) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0xB;
        lbl_805D49B4 = 0;
    }
}

extern s32 lbl_805D49B4;
extern s32 quest_download_in_progress;

void load_quest_data__22TQuestVmDownLoadServerFPv(u8 *arg0) {
    set_quest_download_server__23TAdSinglePlyChrSelectGCFi(M2C_FIELD(arg0, s32 *, 0x25C));
    lbl_805D49B4 = 1;
    if (draw_window_bg__23TAdSinglePlyChrSelectGCFiiii((s32)(M2C_FIELD(arg0, s32 *, 0x25C)), (void *)(arg0 + 0x270), (s32)(M2C_FIELD(arg0, s32 *, 0x260)), (s32)(M2C_FIELD(arg0, s32 *, 0x264))) == 0) {
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0xA;
        show_status_message__22TQuestVmDownLoadServerFPvii(arg0, TQuestVmDownLoadServer__sub_8006EF6C(0xC), 1);
        quest_download_in_progress = 1;
        return;
    }
    show_status_message__22TQuestVmDownLoadServerFPvii(arg0, get_localized_text_entry(0x29, 2), 1);
    M2C_FIELD(arg0, s32 *, 0x2A0) = 0x17;
    lbl_805D49B4 = 0;
}

void TQuestVmDownLoadServer__sub_801F770C(u8 *arg0) {
    Req_801F770C req;
    s32 r;
    if (M2C_FIELD(arg0, s32 *, 0x25C) >= 0 && TAdPlayerLoadGC__sub_801E1B50(M2C_FIELD(arg0, s32 *, 0x25C)) == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x264) > 0) {
            if (M2C_FIELD(arg0, void **, 0x260) != NULL) {
                safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0x260));
                M2C_FIELD(arg0, void **, 0x260) = NULL;
            }
            M2C_FIELD(arg0, void **, 0x260) = alloc__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, s32 *, 0x264) << 13);
            if (M2C_FIELD(arg0, void **, 0x260) != NULL) {
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
                r = build_save_file_image__15TAdPlayerLoadGCFPvPv(M2C_FIELD(arg0, void **, 0x260), &req);
                TAdPlayerLoadGC__sub_801E14E4(&req);
                switch (r) {
                case -0x100:
                    M2C_FIELD(arg0, s32 *, 0x2A0) = 0x11;
                    break;
                default:
                    if (r != M2C_FIELD(arg0, s32 *, 0x264)) {
                        M2C_FIELD(arg0, s32 *, 0x264) = r;
                    }
                    M2C_FIELD(arg0, s32 *, 0x2A0) = 0x9;
                    break;
                }
            } else {
                M2C_FIELD(arg0, s32 *, 0x2A0) = 0x11;
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x2A0) = 0x11;
        }
    }
}

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

void handle_confirm_window__22TQuestVmDownLoadServerFPv(void *arg0) {
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x290) != 0U) {
        if (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x290)) != 0) {
            temp_r3 = get_selected_menu_value(M2C_FIELD(arg0, u32 *, 0x290));
            if (temp_r3 == 0) {
                if ((u32) M2C_FIELD(arg0, u32 *, 0x290) != 0U) {
                    TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x290)));
                    M2C_FIELD(arg0, u32 *, 0x290) = 0U;
                }
                M2C_FIELD(arg0, s32 *, 0x2A0) = 7;
                return;
            }
            if (temp_r3 == 1) {
                if ((u32) M2C_FIELD(arg0, u32 *, 0x290) != 0U) {
                    TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x290)));
                    M2C_FIELD(arg0, u32 *, 0x290) = 0U;
                }
                if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) != 0U) {
                    clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x28C));
                }
                update_state__13TAdMcSelectGCFv();
                show_status_message__22TQuestVmDownLoadServerFPvii(arg0, get_localized_text_entry(0x29, 1), 1);
                M2C_FIELD(arg0, s32 *, 0x2A0) = 4;
                return;
            }
            goto block_12;
        }
block_12:
        if (get_status_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x290)) != 0) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x290) != 0U) {
                TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x290)));
                M2C_FIELD(arg0, u32 *, 0x290) = 0U;
            }
            if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) != 0U) {
                clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x28C));
            }
            update_state__13TAdMcSelectGCFv();
            show_status_message__22TQuestVmDownLoadServerFPvii(arg0, get_localized_text_entry(0x29, 1), 1);
            M2C_FIELD(arg0, s32 *, 0x2A0) = 4;
        }
    }
}

extern u32 lobby_player_construction_window;
extern s32 tl_03;

typedef char RecoveredGlobal_801F7CC0_lbl_8050E208_size[sizeof(RecoveredGlobal_801F7CC0_lbl_8050E208) == 0x1B0 ? 1 : -1];

#pragma push
#pragma opt_propagation off
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
                seq = TMCFormatSequence__ct(seq, arg0, slot);
            }
            M2C_FIELD(seq, void **, 0x1C) = (void *)TQuestVmDownLoadServer__sub_801F6B98;
            M2C_FIELD(seq, void **, 0x20) = (void *)clear_field2A0__22TQuestVmDownLoadServerFv;
            M2C_FIELD(arg0, s32 *, 0x2A0) = 0x16;
            break;
        case -1:
        case -0xFF:
            return;
        default:
            if (cap < M2C_FIELD(arg0, s32 *, 0x230)) {
                show_status_message__22TQuestVmDownLoadServerFPvii(arg0, TQuestVmDownLoadServer__sub_8006EF6C(0x45), 1);
                M2C_FIELD(arg0, s32 *, 0x2A0) = 0x12;
                return;
            }
            if (TAdPlayerLoadGC__sub_801E0FA4(slot) < M2C_FIELD(arg0, s32 *, 0x298)) {
                show_status_message__22TQuestVmDownLoadServerFPvii(arg0, TQuestVmDownLoadServer__sub_8006EF6C(0x60), 1);
                M2C_FIELD(arg0, s32 *, 0x2A0) = 0x12;
                return;
            }
            if (M2C_FIELD(arg0, void **, 0x290) != NULL) {
                TWindow__close(M2C_FIELD(arg0, void **, 0x290));
                M2C_FIELD(arg0, void **, 0x290) = NULL;
            }
            M2C_FIELD(arg0, u32 *, 0x290) = init_shop_judgment_window(get_window_layout_position(0x2B));
            show_status_message__22TQuestVmDownLoadServerFPvii(arg0, TQuestVmDownLoadServer__sub_8006EF6C(0x40), 1);
            M2C_FIELD(arg0, s32 *, 0x25C) = slot;
            M2C_FIELD(arg0, s32 *, 0x2A0) = 6;
            return;
        }
    } else if (TWindowShortListCtrl__check_controller_button((int)((u8 *)&controller_input_state + 0x20), 2) != 0) {
        update_state__13TAdMcSelectGCFv();
        show_status_message__22TQuestVmDownLoadServerFPvii(arg0, get_localized_text_entry(0x29, 1), 1);
        M2C_FIELD(arg0, s32 *, 0x2A0) = 4;
    }
}
#pragma pop

void handle_confirm_input__22TQuestVmDownLoadServerFPv(u8 *arg0) {
    u8 *temp_r31;
    temp_r31 = (u8 *)&controller_input_state.value + 0x20;
    if (TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (4)) != 0) {
        select_if_mc_present__13TAdMcSelectGCFv();
        M2C_FIELD(arg0, s32 *, 0x2A0) = 5;
        return;
    }
    if (TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (2)) != 0) {
        select_if_mc_present__13TAdMcSelectGCFv();
        show_status_message__22TQuestVmDownLoadServerFPvii((void *)((void *) (arg0)), (s32)((int) (TQuestVmDownLoadServer__sub_8006EF6C((M2C_UNK)((int) (0x42))))), (M2C_UNK)((int) (1)));
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0x14;
    }
}

void open__22TQuestVmDownLoadServerFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x29C) == 0U) {
        reset_counter__6TSceneFv();
        u32 temp_r3 = lobby_player_construction_window;
        if (temp_r3 != 0U) {
            disallow_rendering__7TObjectFv(temp_r3);
        }
        M2C_FIELD(arg0, u32 *, 0x29C) = create__13TAdMcSelectGCFPv(tl_03);
    }
    M2C_FIELD(arg0, s32 *, 0x2A0) = 4;
    show_status_message__22TQuestVmDownLoadServerFPvii(arg0, get_localized_text_entry(0x29, 1), 1);
}

void update_mc_select__22TQuestVmDownLoadServerFPv(u8 *arg0) {
    s32 temp_r0;
    if (((u32) M2C_FIELD(arg0, u32 *, 0x294) == 0U) || (is_ready__24TMessageWindowControllerFv(arg0 + 0x1C) != 0)) {
        if ((void *) M2C_FIELD(arg0, u8 **, 0x29C) == NULL) {
            reset_counter__6TSceneFv();
            if (lobby_player_construction_window != 0) {
                disallow_rendering__7TObjectFv(lobby_player_construction_window);
            }
            M2C_FIELD(arg0, u32 *, 0x29C) = create__13TAdMcSelectGCFPv(tl_03);
        }
        if ((void *) M2C_FIELD(arg0, u8 **, 0x29C) != NULL) {
            select_if_mc_present__13TAdMcSelectGCFv();
        }
        if (TWindowShortListCtrl__check_controller_button((int)((u8 *)&controller_input_state.value + 0x20), 2) != 0) {
            select_if_mc_present__13TAdMcSelectGCFv();
            show_status_message__22TQuestVmDownLoadServerFPvii((void *) (arg0), (int) (TQuestVmDownLoadServer__sub_8006EF6C(0x42)), (int) (1));
            M2C_FIELD(arg0, s32 *, 0x2A0) = 0x14;
            return;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x294) == 0U) {
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x2A4);
            switch (temp_r0) {
            case 0:
                show_status_message__22TQuestVmDownLoadServerFPvii((void *) (arg0), (int) (get_localized_text_entry((int) (0x29), (int) (0))), (int) (1));
                return;
            case 1:
                show_status_message__22TQuestVmDownLoadServerFPvii((void *) (arg0), (int) (TQuestVmDownLoadServer__sub_8006EF6C(0x45)), (int) (1));
                return;
            case 2:
                show_status_message__22TQuestVmDownLoadServerFPvii((void *) (arg0), (int) (TQuestVmDownLoadServer__sub_8006EF6C(0x60)), (int) (1));
                return;
            case 3:
                show_status_message__22TQuestVmDownLoadServerFPvii((void *) (arg0), (int) (get_localized_text_entry((int) (0x29), (int) (2))), (int) (1));
                return;
            case 4:
                show_status_message__22TQuestVmDownLoadServerFPvii((void *) (arg0), (int) (get_localized_text_entry((int) (0x29), (int) (3))), (int) (1));
                return;
            case 5:
                show_status_message__22TQuestVmDownLoadServerFPvii((void *) (arg0), (int) (get_localized_text_entry((int) (0x29), (int) (4))), (int) (1));
                break;
            }
        }
    }
}

void close_window__22TQuestVmDownLoadServerFPv(void *arg0) {
    u32 temp_r3;
    M2C_FIELD(arg0, s32 *, 0x2A0) = 2;
    temp_r3 = (u32) M2C_FIELD(arg0, u32 *, 0x290);
    if (temp_r3 != 0U) {
        TWindow__close((void *)(temp_r3));
        M2C_FIELD(arg0, u32 *, 0x290) = 0U;
    }
    close_message__22TQuestVmDownLoadServerFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x22C) = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x29C) != 0U) {
        update_state__13TAdMcSelectGCFv();
    }
}

void TQuestVmDownLoadServer__sub_801F7FEC(u8 *arg0) {
    Slot_801F7FEC *s;
    u32 n;

    M2C_FIELD(arg0, s32 *, 0x230) = 0;
    M2C_FIELD(arg0, s32 *, 0x264) = 0;
    M2C_FIELD(arg0, s32 *, 0x268) = 0;
    M2C_FIELD(arg0, s32 *, 0x26C) = 0;
    M2C_FIELD(arg0, s32 *, 0x298) = 0;
    s = (Slot_801F7FEC *)&TQuestVmDownLoadServer__download_file_state;
    if (s->f34 > 0) {
        n = (u32)TAdPlayerLoadGC__sub_801E1518((void *)1, 0, s->f34);
        if (n != 0xFFFFFF00) {
            M2C_FIELD(arg0, s32 *, 0x230) += n;
            M2C_FIELD(arg0, s32 *, 0x268) = n;
            M2C_FIELD(arg0, s32 *, 0x298) += 1;
        } else {
            M2C_FIELD(arg0, s32 *, 0x2A0) = 0x15;
            return;
        }
    }
    s = (Slot_801F7FEC *)&quest_download_file_slot;
    if (s->f34 > 0) {
        n = (u32)TAdPlayerLoadGC__sub_801E1518((void *)1, 0, s->f34);
        if (n != 0xFFFFFF00) {
            M2C_FIELD(arg0, s32 *, 0x230) += n;
            M2C_FIELD(arg0, s32 *, 0x264) = n;
            M2C_FIELD(arg0, s32 *, 0x298) += 1;
        } else {
            M2C_FIELD(arg0, s32 *, 0x2A0) = 0x15;
            return;
        }
    }
    s = (Slot_801F7FEC *)&quest_download_file_info;
    if (s->f34 > 0) {
        n = (u32)TAdPlayerLoadGC__sub_801E1518((void *)1, 0, s->f34);
        if (n != 0xFFFFFF00) {
            M2C_FIELD(arg0, s32 *, 0x230) += n;
            M2C_FIELD(arg0, s32 *, 0x26C) = n;
            M2C_FIELD(arg0, s32 *, 0x298) += 1;
        } else {
            M2C_FIELD(arg0, s32 *, 0x2A0) = 0x15;
            return;
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x230) > 0) {
        M2C_FIELD(arg0, s32 *, 0x2A0) = 1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2A0) = 0x15;
}

extern s32 quest_download_in_progress;
extern s32 TQuestVmDownLoadServer__instance;

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

typedef char RecoveredGlobal_801F84AC_lbl_80512BDC_size[sizeof(RecoveredGlobal_801F84AC_lbl_80512BDC) == 0x3C ? 1 : -1];

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

extern "C" {

M2C_UNK *get_quest_download_file_header(void) {
    return &quest_download_file_header.value;
}

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
typedef char RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18_size[sizeof(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18) == 0xE8 ? 1 : -1];

struct RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18;

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

struct Src_801F87CC {
    u8 pad0[0x10];
    char title[0x24];
    s32 f34;
    u8 *f38;
};

M2C_UNK update_graph__8TDLGraphFii(int, int);
s32 get_serial_access__22TQuestVmDownLoadServerFPv();
s32 poll_serial_access__22TQuestVmDownLoadServerFPv();
M2C_UNK create__22TQuestVmDownLoadServerFv();
M2C_UNK create__16TAdWarningBaseGCFv();
int strncmp(const char *, const char *, u32);
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

struct Pos_801F8A40 { s32 a, b; };
u32 set_text__18TWindowMessagePageFiii(void *, void *, int);
void send_and_handle__6TLobbyFPvii(u32, s32, int);
void complete_reveal__14TWindowMessageFPv(u32);
char *strtok(char *, const char *);
extern u8 lbl_8044A648[];
extern M2C_UNK lbl_805DC510;
extern M2C_UNK lbl_805DC514;
extern M2C_UNK lbl_805DC518;
extern M2C_UNK lbl_805DC51C;
extern M2C_UNK lbl_805DC520;
extern M2C_UNK lbl_805DC524;
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

struct Src_801F8E4C {
    char name[0x10];
    char title[0x24];
    s32 f34;
    u32 f38;
};

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

struct Src_801F8F14 {
    char name[0x10];
    char title[0x24];
    s32 f34;
    u32 f38;
};

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

void TQuestVmDownLoadServer__sub_801F8FA4(void) {
    init_single_player_chr_select__6TLobbyFPv((s32) &TQuestVmDownLoadServer__rng_cipher_state.value);
}

}
