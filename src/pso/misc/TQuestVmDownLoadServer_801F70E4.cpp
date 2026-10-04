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

struct QVmCt_801F83F0 {
    s32 f0;
    u8 pad4[0x14];
    void *vt18;
    void *vt1C;
    u8 pad20[0x22C - 0x20];
    s32 f22C, f230, f234, f238;
    u8 pad23C[0x25C - 0x23C];
    s32 f25C, f260;
    u8 pad264[0x270 - 0x264];
    u8 b270[0xD];
    u8 b27D[0xD];
    u8 pad28A[2];
    s32 f28C, f290, f294, f298, f29C, f2A0;
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
s32 TQuestVmDownLoadServer__sub_801F8538(void *, s32);
M2C_UNK move_data__6TLobbyFv(void *, s32, s32);
s32 TQuestVmDownLoadServer__sub_801F84B8(s32 arg0, s32 arg1);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
s32 TWindowShortListCtrl__check_controller_button(int, int);
M2C_UNK TQuestVmDownLoadServer__sub_801F6E08(void *, s32, M2C_UNK);
M2C_UNK select_if_mc_present__13TAdMcSelectGCFv();
extern RecoveredGlobal_801F7CC0_lbl_8050E208 lbl_8050E208;
void TQuestVmDownLoadServer__sub_801F7CC0(u8 *arg0);
s32 init_single_player_chr_select__6TLobbyFPv(s32);
extern RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 TQuestVmDownLoadServer__data_80512C18;
void TQuestVmDownLoadServer__sub_801F8FA4(void);
extern RecoveredGlobal_801F84AC_lbl_80512BDC lbl_80512BDC;
M2C_UNK *TQuestVmDownLoadServer__sub_801F84AC(void);
void fn_80222BCC(void *);
void __ct__7TObjectFP7TObject();
void *memset(void *, int, u32);
extern M2C_UNK __vt__22TQuestVmDownLoadServer[];
extern s32 lbl_805D35E8;
extern s32 TQuestVmDownLoadServer__data_805D5F18;
extern s32 TQuestVmDownLoadServer__data_805D5F24;
QVmCt_801F83F0 *TQuestVmDownLoadServer__ct(QVmCt_801F83F0 *self);
void *memset(void *, int, u32);
int sprintf(char *, const char *, ...);
u32 TAdPlayerLoadGC__sub_801E2048(s32, char *);
extern char lbl_8044A68C[];
extern char lbl_8044BEE8[];
extern const s32 lbl_805DC6B0;
extern const s32 lbl_805DC6B4;
void TQuestVmDownLoadServer__sub_801F7890(QVm_801F7890 *self);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
void *alloc__22TQuestVmDownLoadServerFPv(s32);
M2C_UNK move_data__6TLobbyFv(void *, s32, s32);
void subtractive_rng_seed(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 *, u32);
void TAdSinglePlyChrSelectGC__sub_8007C264(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 *);
void TAdSinglePlyChrSelectGC__sub_8007C134(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 *, void *, void *, s32);
void TAdSinglePlyChrSelectGC__sub_8007C0CC(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 *, u32 *, u32);
void subtractive_rng_xor_buffer(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 *, u32 *, u32);
extern RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 TQuestVmDownLoadServer__data_80512C18;
extern u32 lbl_80512D00[];
void TQuestVmDownLoadServer__sub_801F8588(u32 *data, s32 size);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
void *alloc__22TQuestVmDownLoadServerFPv(s32);
s32 TQuestVmDownLoadServer__sub_801F8538(void *, s32);
M2C_UNK move_data__6TLobbyFv(void *, s32, s32);
u32 subtractive_rng_next(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 *);
void subtractive_rng_seed(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 *, u32);
void TAdSinglePlyChrSelectGC__sub_8007C264(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 *);
void TAdSinglePlyChrSelectGC__sub_8007C1CC(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 *, void *, void *, s32);
void TAdSinglePlyChrSelectGC__sub_8007C0CC(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 *, u32 *, u32);
void subtractive_rng_xor_buffer(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 *, u32 *, u32);
extern RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18 TQuestVmDownLoadServer__data_80512C18;
extern u32 lbl_80512D00[];
void TQuestVmDownLoadServer__sub_801F8694(u32 *data, s32 size);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
void *alloc__22TQuestVmDownLoadServerFPv(s32);
void TAdPlayerLoadGC__sub_801E14E4(void *);
void TAdPlayerLoadGC__sub_801E14E8(void *, s32);
s32 TAdPlayerLoadGC__sub_801E17F4(void *, void *);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
char *strncpy(char *, const char *, u32);
void *memcpy(void *, const void *, u32);
void *memset(void *, int, u32);
extern char TQuestVmDownLoadServer__data_804C8690[];
extern u8 TQuestVmDownLoadServer__data_804C8A34[];
extern Src_801F7478 TQuestVmDownLoadServer__data_80512B28;
extern char TQuestVmDownLoadServer__data_805DC5B8[];
extern char TQuestVmDownLoadServer__data_805DC5BC[];
void TQuestVmDownLoadServer__sub_801F7478(u8 *arg0);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
void *alloc__22TQuestVmDownLoadServerFPv(s32);
void TAdPlayerLoadGC__sub_801E14E4(void *);
void TAdPlayerLoadGC__sub_801E14E8(void *, s32);
s32 TAdPlayerLoadGC__sub_801E17F4(void *, void *);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
char *strncpy(char *, const char *, u32);
void *memcpy(void *, const void *, u32);
void *memset(void *, int, u32);
extern char TQuestVmDownLoadServer__data_804C8690[];
extern u8 TQuestVmDownLoadServer__data_804C8A34[];
extern Src_801F770C lbl_80512B64;
extern char TQuestVmDownLoadServer__data_805DC5B8[];
extern char TQuestVmDownLoadServer__data_805DC5BC[];
void TQuestVmDownLoadServer__sub_801F770C(u8 *arg0);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
void *alloc__22TQuestVmDownLoadServerFPv(s32);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
M2C_UNK TQuestVmDownLoadServer__sub_801F6E08(void *, s32, M2C_UNK);
void TAdPlayerLoadGC__sub_801E14E4(void *);
void TAdPlayerLoadGC__sub_801E14E8(void *, s32);
s32 TAdPlayerLoadGC__sub_801E17F4(void *, void *);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
char *strncpy(char *, const char *, u32);
void *memcpy(void *, const void *, u32);
void *memset(void *, int, u32);
extern char TQuestVmDownLoadServer__data_804C8690[];
extern u8 TQuestVmDownLoadServer__data_804C8A34[];
extern Src_801F718C lbl_80512BA0;
extern char TQuestVmDownLoadServer__data_805DC5B8[];
extern char TQuestVmDownLoadServer__data_805DC5BC[];
extern u8 TQuestVmDownLoadServer__data_805D5F10;
void TQuestVmDownLoadServer__sub_801F718C(u8 *arg0);
void check_client_connections__22TQuestVmDownLoadServerFPv(void *arg0);
void TQuestVmDownLoadServer__sub_801F7FEC(u8 *arg0);
void close_window__22TQuestVmDownLoadServerFPv(void *arg0);
void open__22TQuestVmDownLoadServerFPv(void *arg0);
void TQuestVmDownLoadServer__sub_801F7DC8(u8 *arg0);
M2C_UNK set_flag_4__9TObjLukerFPv(void *);
void clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void* p);
void TQuestVmDownLoadServer__sub_801F7CC0(u8 *arg0);
void TQuestVmDownLoadServer__sub_801F7AFC(u8 *arg0);
void handle_confirm_window__22TQuestVmDownLoadServerFPv(void *arg0);
void TQuestVmDownLoadServer__sub_801F7890(QVm_801F7890 *self);
void TQuestVmDownLoadServer__sub_801F770C(u8 *arg0);
void load_quest_data__22TQuestVmDownLoadServerFPv(u8 *arg0);
void abort_download__22TQuestVmDownLoadServerFPv(void *arg0);
void TQuestVmDownLoadServer__sub_801F7478(u8 *arg0);
void write_quest_data_named__22TQuestVmDownLoadServerFPv(u8 *arg0);
void finish_download__22TQuestVmDownLoadServerFPv(void *arg0);
void TQuestVmDownLoadServer__sub_801F718C(u8 *arg0);
void write_quest_data__22TQuestVmDownLoadServerFPv(void *arg0);
void close_download__22TQuestVmDownLoadServerFPv(void *arg0);
void TQuestVmDownLoadServer__sub_801F6C74(u8 *arg0);
void TQuestVmDownLoadServer__sub_801F6C0C(u8 *arg0);
void close__22TQuestVmDownLoadServerFPv(void *arg0);
void TQuestVmDownLoadServer__sub_801F6D24(QVm_801F6D24 *self);
void destroy__22TQuestVmDownLoadServerFPv(void *arg0);
M2C_UNK close_message__22TQuestVmDownLoadServerFPv(void *);
void fn_801F6B00(u8 *arg0);
extern s32 lbl_805D55C0;
void TQuestVmDownLoadServer__vt1(u8 *arg0);
struct Slot_801F7FEC { u8 pad[0x34]; s32 f34; void *f38; };
struct Slot_801F8D30 { u8 pad[0x34]; s32 f34; void *f38; };
s32 TAdPlayerLoadGC__sub_801E1518(void *, s32, u32);
M2C_UNK reset_download__22TQuestVmDownLoadServerFv(void);
M2C_UNK TWindow__close(void *);
extern s32 TQuestVmDownLoadServer__data_805D5F00;
extern s32 TQuestVmDownLoadServer__data_805D5F04;
extern s32 TQuestVmDownLoadServer__data_805D5F08;
extern s32 TQuestVmDownLoadServer__data_805D5F0C;
extern u32 TQuestVmDownLoadServer__data_805D5F14;
extern s32 TQuestVmDownLoadServer__data_805D5F1C;
extern s32 TQuestVmDownLoadServer__data_805D5F20;
Src_801F7478 TQuestVmDownLoadServer__data_80512B28;
Src_801F770C lbl_80512B64;
Src_801F718C lbl_80512BA0;
RecoveredGlobal_801F84AC_lbl_80512BDC lbl_80512BDC;
}

extern "C" {

u8 *TQuestVmDownLoadServer__vt0(u8 *arg0, s16 arg1);
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
M2C_UNK TQuestVmDownLoadServer__sub_801F6E08(void *, s32, M2C_UNK);
s32 get_selected_menu_value(u32);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
M2C_UNK close_message__22TQuestVmDownLoadServerFPv(void *);
u32 create__13TAdMcSelectGCFPv(s32);
M2C_UNK destroy__17TMedicalCenterMesFPvs(void *, M2C_UNK);
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
        TQuestVmDownLoadServer__sub_801F6E08(arg0, TQuestVmDownLoadServer__sub_8006EF6C(0xC), 1);
        return;
    }
    TQuestVmDownLoadServer__sub_801F6E08(arg0, get_localized_text_entry(0x29, 2), 1);
    M2C_FIELD(arg0, s32 *, 0x2A0) = 0x17;
    lbl_805D49B4 = 0;
}

extern s32 lbl_805D49B4;

void TQuestVmDownLoadServer__sub_801F718C(u8 *arg0) {
    Req_801F718C req;
    s32 r;
    if ((s32)TQuestVmDownLoadServer__data_805D5F10 != 1) {
        TQuestVmDownLoadServer__sub_801F6E08(arg0, TQuestVmDownLoadServer__sub_8006EF6C(0x41), 1);
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0x13;
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x25C) >= 0 && lbl_80512BA0.f34 > 0) {
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
                    strncpy(req.title, lbl_80512BA0.title, 0x22);
                    memcpy(req.key, TQuestVmDownLoadServer__data_804C8A34, 0x10);
                    req.s44 = TQuestVmDownLoadServer__data_805DC5B8;
                    req.s48 = TQuestVmDownLoadServer__data_805DC5BC;
                    req.h4C = 1;
                    req.h4E = 1;
                    req.w50 = 0;
                    req.h54 = 1;
                    req.w58 = lbl_80512BA0.f38;
                    req.w5C = lbl_80512BA0.f34;
                    TAdPlayerLoadGC__sub_801E14E8(&req, 3);
                    r = TAdPlayerLoadGC__sub_801E17F4(M2C_FIELD(arg0, void **, 0x260), &req);
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
        TQuestVmDownLoadServer__sub_801F6E08(arg0, TQuestVmDownLoadServer__sub_8006EF6C(0xC), 1);
        return;
    }
    TQuestVmDownLoadServer__sub_801F6E08(arg0, get_localized_text_entry(0x29, 2), 1);
    M2C_FIELD(arg0, s32 *, 0x2A0) = 0x17;
    lbl_805D49B4 = 0;
}

extern s32 lbl_805D49B4;

void TQuestVmDownLoadServer__sub_801F7478(u8 *arg0) {
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
                strncpy(req.title, TQuestVmDownLoadServer__data_80512B28.title, 0x22);
                memcpy(req.key, TQuestVmDownLoadServer__data_804C8A34, 0x10);
                req.s44 = TQuestVmDownLoadServer__data_805DC5B8;
                req.s48 = TQuestVmDownLoadServer__data_805DC5BC;
                req.h4C = 1;
                req.h4E = 1;
                req.w50 = 0;
                req.h54 = 1;
                req.w58 = TQuestVmDownLoadServer__data_80512B28.f38;
                req.w5C = TQuestVmDownLoadServer__data_80512B28.f34;
                TAdPlayerLoadGC__sub_801E14E8(&req, 3);
                r = TAdPlayerLoadGC__sub_801E17F4(M2C_FIELD(arg0, void **, 0x260), &req);
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
extern s32 TQuestVmDownLoadServer__data_805D5F18;

void load_quest_data__22TQuestVmDownLoadServerFPv(u8 *arg0) {
    set_quest_download_server__23TAdSinglePlyChrSelectGCFi(M2C_FIELD(arg0, s32 *, 0x25C));
    lbl_805D49B4 = 1;
    if (draw_window_bg__23TAdSinglePlyChrSelectGCFiiii((s32)(M2C_FIELD(arg0, s32 *, 0x25C)), (void *)(arg0 + 0x270), (s32)(M2C_FIELD(arg0, s32 *, 0x260)), (s32)(M2C_FIELD(arg0, s32 *, 0x264))) == 0) {
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0xA;
        TQuestVmDownLoadServer__sub_801F6E08(arg0, TQuestVmDownLoadServer__sub_8006EF6C(0xC), 1);
        TQuestVmDownLoadServer__data_805D5F18 = 1;
        return;
    }
    TQuestVmDownLoadServer__sub_801F6E08(arg0, get_localized_text_entry(0x29, 2), 1);
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
                strncpy(req.title, lbl_80512B64.title, 0x22);
                memcpy(req.key, TQuestVmDownLoadServer__data_804C8A34, 0x10);
                req.s44 = TQuestVmDownLoadServer__data_805DC5B8;
                req.s48 = TQuestVmDownLoadServer__data_805DC5BC;
                req.h4C = 1;
                req.h4E = 1;
                req.w50 = 0;
                req.h54 = 1;
                req.w58 = lbl_80512B64.f38;
                req.w5C = lbl_80512B64.f34;
                TAdPlayerLoadGC__sub_801E14E8(&req, 3);
                r = TAdPlayerLoadGC__sub_801E17F4(M2C_FIELD(arg0, void **, 0x260), &req);
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

void TQuestVmDownLoadServer__sub_801F7890(QVm_801F7890 *self) {
    char buf[0xD];
    s32 i;
    memset(self->name0, 0, 0xD);
    memset(self->name1, 0, 0xD);
    for (i = lbl_805DC6B0; i < lbl_805DC6B4; i += 2) {
        memset(buf, 0, 0xD);
        sprintf(buf, lbl_8044A68C, lbl_8044BEE8, i);
        if (TAdPlayerLoadGC__sub_801E2048(self->f25C, buf) == 0xFFFFFF05) {
            sprintf(buf, lbl_8044A68C, lbl_8044BEE8, i + 1);
            if (TAdPlayerLoadGC__sub_801E2048(self->f25C, buf) == 0xFFFFFF05) {
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
                TQuestVmDownLoadServer__sub_801F6E08(arg0, get_localized_text_entry(0x29, 1), 1);
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
            TQuestVmDownLoadServer__sub_801F6E08(arg0, get_localized_text_entry(0x29, 1), 1);
            M2C_FIELD(arg0, s32 *, 0x2A0) = 4;
        }
    }
}

extern u32 lbl_805D55D4;
extern s32 tl_03;

typedef char RecoveredGlobal_801F7CC0_lbl_8050E208_size[sizeof(RecoveredGlobal_801F7CC0_lbl_8050E208) == 0x1B0 ? 1 : -1];
void TQuestVmDownLoadServer__sub_801F7CC0(u8 *arg0) {
    u8 *temp_r31;
    temp_r31 = (u8 *)&lbl_8050E208.value + 0x20;
    if (TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (4)) != 0) {
        select_if_mc_present__13TAdMcSelectGCFv();
        M2C_FIELD(arg0, s32 *, 0x2A0) = 5;
        return;
    }
    if (TWindowShortListCtrl__check_controller_button((int) (temp_r31), (int) (2)) != 0) {
        select_if_mc_present__13TAdMcSelectGCFv();
        TQuestVmDownLoadServer__sub_801F6E08((void *)((void *) (arg0)), (s32)((int) (TQuestVmDownLoadServer__sub_8006EF6C((M2C_UNK)((int) (0x42))))), (M2C_UNK)((int) (1)));
        M2C_FIELD(arg0, s32 *, 0x2A0) = 0x14;
    }
}

void open__22TQuestVmDownLoadServerFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x29C) == 0U) {
        reset_counter__6TSceneFv();
        u32 temp_r3 = lbl_805D55D4;
        if (temp_r3 != 0U) {
            disallow_rendering__7TObjectFv(temp_r3);
        }
        M2C_FIELD(arg0, u32 *, 0x29C) = create__13TAdMcSelectGCFPv(tl_03);
    }
    M2C_FIELD(arg0, s32 *, 0x2A0) = 4;
    TQuestVmDownLoadServer__sub_801F6E08(arg0, get_localized_text_entry(0x29, 1), 1);
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
    s = (Slot_801F7FEC *)&TQuestVmDownLoadServer__data_80512B28;
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
    s = (Slot_801F7FEC *)&lbl_80512B64;
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
    s = (Slot_801F7FEC *)&lbl_80512BA0;
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

extern M2C_UNK __vt__22TQuestVmDownLoadServer[];
extern s32 TQuestVmDownLoadServer__data_805D5F18;
extern s32 TQuestVmDownLoadServer__data_805D5F24;

void TQuestVmDownLoadServer__vt1(u8 *arg0) {
    check_client_connections__22TQuestVmDownLoadServerFPv(arg0);
    switch (M2C_FIELD(arg0, u32 *, 0x2A0)) {
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
        TQuestVmDownLoadServer__sub_801F7DC8(arg0);
        break;
    case 4:
        if (lbl_805D55C0 != 0) {
            if (M2C_FIELD(arg0, void **, 0x290) != NULL) {
                set_flag_4__9TObjLukerFPv(M2C_FIELD(arg0, void **, 0x290));
            }
            if (M2C_FIELD(arg0, void **, 0x29C) != NULL) {
                set_flag_4__9TObjLukerFPv(M2C_FIELD(arg0, void **, 0x29C));
            }
        } else {
            if (M2C_FIELD(arg0, void **, 0x290) != NULL) {
                clear_flag4_bit4__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, void **, 0x290));
            }
            if (M2C_FIELD(arg0, void **, 0x29C) != NULL) {
                clear_flag4_bit4__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, void **, 0x29C));
            }
            TQuestVmDownLoadServer__sub_801F7CC0(arg0);
        }
        break;
    case 5:
        TQuestVmDownLoadServer__sub_801F7AFC(arg0);
        break;
    case 6:
        handle_confirm_window__22TQuestVmDownLoadServerFPv(arg0);
        break;
    case 7:
        TQuestVmDownLoadServer__sub_801F7890((QVm_801F7890 *)arg0);
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
        TQuestVmDownLoadServer__sub_801F7478(arg0);
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
        TQuestVmDownLoadServer__sub_801F6C0C(arg0);
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

u8 *TQuestVmDownLoadServer__vt0(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)__vt__22TQuestVmDownLoadServer;
        M2C_FIELD(arg0, void **, 0x1C) = (void *) ((u8 *)__vt__22TQuestVmDownLoadServer + 0x18);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x260) != 0U) {
            safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0x260));
            M2C_FIELD(arg0, u32 *, 0x260) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x29C) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x29C));
            M2C_FIELD(arg0, u32 *, 0x29C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x290) != 0U) {
            TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x290)));
            M2C_FIELD(arg0, u32 *, 0x290) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) != 0U) {
            TWindow__close((void *)(M2C_FIELD(arg0, void **, 0x28C)));
            M2C_FIELD(arg0, u32 *, 0x28C) = 0U;
        }
        close_message__22TQuestVmDownLoadServerFPv(arg0);
        TQuestVmDownLoadServer__data_805D5F24 = 0;
        TQuestVmDownLoadServer__data_805D5F18 = 0;
        destroy__17TMedicalCenterMesFPvs(arg0 + 0x1C, 0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_801F84AC_lbl_80512BDC_size[sizeof(RecoveredGlobal_801F84AC_lbl_80512BDC) == 0x3C ? 1 : -1];

QVmCt_801F83F0 *TQuestVmDownLoadServer__ct(QVmCt_801F83F0 *self) {
    __ct__7TObjectFP7TObject();
    fn_80222BCC(&self->vt1C);
    self->vt18 = ((u8 *)&__vt__22TQuestVmDownLoadServer);
    self->vt1C = ((u8 *)&__vt__22TQuestVmDownLoadServer) + 0x18;
    self->f0 = lbl_805D35E8;
    self->f2A0 = 0;
    self->f22C = 0;
    self->f230 = 0;
    self->f234 = 0;
    self->f238 = 0;
    self->f25C = -1;
    self->f260 = 0;
    memset(self->b270, 0, 0xD);
    memset(self->b27D, 0, 0xD);
    self->f28C = 0;
    self->f290 = 0;
    self->f294 = 0;
    self->f29C = 0;
    (*(QVmCt_801F83F0 * *)&TQuestVmDownLoadServer__data_805D5F24) = self;
    self->f298 = 2;
    TQuestVmDownLoadServer__data_805D5F18 = 0;
    return self;
}

M2C_UNK *TQuestVmDownLoadServer__sub_801F84AC(void) {
    return &lbl_80512BDC.value;
}

s32 TQuestVmDownLoadServer__sub_801F84B8(s32 arg0, s32 arg1) {
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
  temp_r31 = TQuestVmDownLoadServer__sub_801F8538(temp_r3, arg1);
  safe_free__23TAdSinglePlyChrSelectGCFUi(temp_r3);
  return ((u32) __cntlzw((u32) (temp_r31 - temp_r29))) >> 5;
}
typedef char RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18_size[sizeof(RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18) == 0xE8 ? 1 : -1];

struct RecoveredGlobal_801F8FA4_TQuestVmDownLoadServer__data_80512C18;
void TQuestVmDownLoadServer__sub_801F8588(u32 *data, s32 size) {
    void *src;
    void *dst;
    src = alloc__22TQuestVmDownLoadServerFPv(size);
    dst = alloc__22TQuestVmDownLoadServerFPv(size);
    move_data__6TLobbyFv(src, (s32)data, size);
    subtractive_rng_seed(&TQuestVmDownLoadServer__data_80512C18, lbl_80512D00[1]);
    TAdSinglePlyChrSelectGC__sub_8007C264(&TQuestVmDownLoadServer__data_80512C18);
    TAdSinglePlyChrSelectGC__sub_8007C134(&TQuestVmDownLoadServer__data_80512C18, src, dst, size);
    move_data__6TLobbyFv(data, (s32)dst, size);
    safe_free__23TAdSinglePlyChrSelectGCFUi(dst);
    safe_free__23TAdSinglePlyChrSelectGCFUi(src);
    subtractive_rng_seed(&TQuestVmDownLoadServer__data_80512C18, lbl_80512D00[0]);
    TAdSinglePlyChrSelectGC__sub_8007C0CC(&TQuestVmDownLoadServer__data_80512C18, data, size & ~3);
    subtractive_rng_seed(&TQuestVmDownLoadServer__data_80512C18, data[0]);
    subtractive_rng_xor_buffer(&TQuestVmDownLoadServer__data_80512C18, data + 1, (size - 4) & ~3);
}

void TQuestVmDownLoadServer__sub_801F8694(u32 *data, s32 size) {
    u32 *body;
    void *src;
    void *dst;
    body = data + 1;
    data[0] = subtractive_rng_next(&TQuestVmDownLoadServer__data_80512C18);
    *body = 0;
    *body = TQuestVmDownLoadServer__sub_801F8538(data, size);
    subtractive_rng_seed(&TQuestVmDownLoadServer__data_80512C18, data[0]);
    subtractive_rng_xor_buffer(&TQuestVmDownLoadServer__data_80512C18, body, (size - 4) & ~3);
    subtractive_rng_seed(&TQuestVmDownLoadServer__data_80512C18, lbl_80512D00[0]);
    TAdSinglePlyChrSelectGC__sub_8007C0CC(&TQuestVmDownLoadServer__data_80512C18, data, size & ~3);
    src = alloc__22TQuestVmDownLoadServerFPv(size);
    dst = alloc__22TQuestVmDownLoadServerFPv(size);
    move_data__6TLobbyFv(src, (s32)data, size);
    subtractive_rng_seed(&TQuestVmDownLoadServer__data_80512C18, lbl_80512D00[1]);
    TAdSinglePlyChrSelectGC__sub_8007C264(&TQuestVmDownLoadServer__data_80512C18);
    TAdSinglePlyChrSelectGC__sub_8007C1CC(&TQuestVmDownLoadServer__data_80512C18, src, dst, size);
    move_data__6TLobbyFv(data, (s32)dst, size);
    safe_free__23TAdSinglePlyChrSelectGCFUi(dst);
    safe_free__23TAdSinglePlyChrSelectGCFUi(src);
}

void TQuestVmDownLoadServer__sub_801F8D30(void) {
    Slot_801F8D30 *s;

    if (TQuestVmDownLoadServer__data_805D5F14 != 0U) {
        TWindow__close((void *)TQuestVmDownLoadServer__data_805D5F14);
        TQuestVmDownLoadServer__data_805D5F14 = 0U;
    }
    s = (Slot_801F8D30 *)&TQuestVmDownLoadServer__data_80512B28;
    if (s->f38 != 0) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(s->f38);
        s->f38 = 0;
    }
    s = (Slot_801F8D30 *)&lbl_80512B64;
    if (s->f38 != 0) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(s->f38);
        s->f38 = 0;
    }
    s = (Slot_801F8D30 *)&lbl_80512BA0;
    if (s->f38 != 0) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(s->f38);
        s->f38 = 0;
    }
    s = (Slot_801F8D30 *)&lbl_80512BDC;
    if (s->f38 != 0) {
        safe_free__23TAdSinglePlyChrSelectGCFUi(s->f38);
        s->f38 = 0;
    }
    TQuestVmDownLoadServer__data_805D5F00 = 0;
    TQuestVmDownLoadServer__data_805D5F04 = 0;
    TQuestVmDownLoadServer__data_805D5F08 = 0;
    TQuestVmDownLoadServer__data_805D5F0C = 0;
    memset(&TQuestVmDownLoadServer__data_80512B28, 0, 0x3C);
    memset(&lbl_80512B64, 0, 0x3C);
    memset(&lbl_80512BA0, 0, 0x3C);
    memset(&lbl_80512BDC, 0, 0x3C);
    TQuestVmDownLoadServer__data_805D5F18 = 0;
    TQuestVmDownLoadServer__data_805D5F1C = 0;
    TQuestVmDownLoadServer__data_805D5F20 = 0;
    reset_download__22TQuestVmDownLoadServerFv();
}

void TQuestVmDownLoadServer__sub_801F8FA4(void) {
    init_single_player_chr_select__6TLobbyFPv((s32) &TQuestVmDownLoadServer__data_80512C18.value);
}

}
