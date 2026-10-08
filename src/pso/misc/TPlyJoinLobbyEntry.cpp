#include "types.h"
#include <stddef.h>
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Entry_8013634C {
    u8 tag[8];
    u32 ip_addr;
    s32 client_id;
    char name[16];
    u8 char_data[0x41C];
};

struct Tag_8013634C {
    u8 tag[8];
    u32 ip_addr;
    s32 client_id;
    char name[16];
};

struct Ent_80136FA0 { u8 pad[0xA]; char name[0x12]; };

extern "C" {
void copy_header_struct__6TLobbyFPvPv(void *, void *);
void open_udp_socket_for_player__6TLobbyFi(s32 arg0);
void TLobby__sub_80135458(s32 arg0);
void send_6x70_player_data__6TLobbyFi(s32 arg0);
void TLobby__sub_80135974(s32 arg0);
void send_6x6E_sync_game_state__6TLobbyFi(s32 arg0);
void send_6x6D_item_state__6TLobbyFi(s32 arg0);
void send_compressed_packet_6c__6TLobbyFi(s32 arg0);
void send_cmd_6B__6TLobbyFi(s32 arg0);
char * get_seq_phase__6TLobbyFPv(int);
void TLobby__sub_8013A170(const char *fmt, ...);
s32 get_player_by_client_id(void *);
u8 * create_player_object(s32, s32, void *);
void complete_reveal__14TWindowMessageFPv(void *);
int sprintf(char *, const char *, ...);
char * strncpy(char *, const char *, u32);
s32 __dt__18TPlyJoinLobbyEntryFv(s32 arg0, s16 arg1);
void TLobby__sub_8013AA64(void *, void *);
void __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(void *, void *);
void TLobby__sub_80139894(char *);
void reparent_to_main_ctrl__17TWindowSubComCardFi(u32);
void some_empty_func__9TMainTaskFv(void *);
void run_tl_camera_tasks__9TMainTaskFv(void *);
void render__9TMainTaskFv(void *);
void render_screen_overlay__9TMainTaskFv(void *);
void run_all_lists__9TMainTaskFv(void *);
void render_tick__Fv(void);
void TLobby__sub_8013A5D4(void *, void *);
void TLobby__sub_8013A5C0(void *);
void send_packet_60__6TLobbyFi(void *);
extern char TLobby__data_8043EF38[];
extern char lbl_8043EE58[];
extern char lbl_8043EF64[];
extern s32 TLobby__data_805D53AC;
extern s32 TLobby__data_805D5594;
extern s32 TLobby__data_805D5598;
extern u32 TLobby__data_805D55D8;
extern s32 lbl_805D53A0;
void on_game_player_add__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2);
s32 queue_destruction__7TObjectFv(void *);
void set_menu_mode_2__6TLobbyFv();
void calc_list_content_extent(void *);
void add_status_disp_entry__6TLobbyFPvii(void *, void *, int);
void * open_default__23TShopJudgmentItemWindowFi(void *);
extern char lbl_8043EFF8[];
extern void *TLobby__data_805D55D0;
void TLobby__sub_80136FA0(s32 arg0, Ent_80136FA0 *arg1);
}

extern "C" {

struct Stack_80135458 {
    s8 sp8;
    s8 sp9;
    s16 spA;
};

struct Stack_80135598 {
    M2C_UNK sp8;
    u8 trailing_storage[0x488];
};

struct RecoveredGlobal_80135198_lbl_804A7008 { M2C_UNK value; u8 remaining[0x14]; };

typedef char RecoveredGlobal_80135198_lbl_804A7008_size[sizeof(RecoveredGlobal_80135198_lbl_804A7008) == 0x18 ? 1 : -1];

struct Stack_80135974 {
    M2C_UNK sp8;
    M2C_UNK spC;
    u8 trailing_storage[0x1FC];
};

struct RecoveredGlobal_80135974_lbl_805127F8 { M2C_UNK value; u8 remaining[0x1FC]; };

typedef char RecoveredGlobal_80135974_lbl_805127F8_size[sizeof(RecoveredGlobal_80135974_lbl_805127F8) == 0x200 ? 1 : -1];

struct RecoveredGlobal_8013561C_lbl_805127F8 {
    M2C_UNK value;
    u8 remaining[0x1FC];
};

struct Base_80136000 { u8 pad[0x18]; };

struct Obj_80136000 : Base_80136000 { virtual ~Obj_80136000(); };

struct VBase_18_80135208 { char pad[0x18]; };

struct VObj_18_80135208 : VBase_18_80135208 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
    u8 pad1c[0x4];
};

struct Pkt_80135208 : VObj_18_80135208 {};

struct Row_80135208 { u8 pad[8]; union { u32 ip; u32 ip_addr; }; s32 client_id; char name[16]; };

struct Fld_80135208 { u8 pad6[6]; s16 a; };

struct Pkt_8013574C { u8 pad[4]; s32 len; u8 data[1]; };

struct Pkt_801357F8 { u8 pad[4]; s32 len; u8 data[1]; };

struct Pkt_801358B4 { u8 pad[4]; s32 len; u8 data[1]; };

struct S12_801358B4 { u32 a[3]; };

struct Base_801354AC { u8 pad[0x18]; };

struct Obj_801354AC : Base_801354AC { virtual ~Obj_801354AC(); };

struct Plr_801354AC : Base_801354AC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual char *m10();
};

struct Disp_801354AC { u16 id; };

struct Pkt_801354AC { u8 pad[8]; Disp_801354AC disp; };

struct Hdr_801359C4 { u16 total; u16 f2; u16 f4; u16 f6; u8 data[1]; };

struct Pkt_801359C4 { u8 cmd; u8 flag; u16 f2; s32 len; u8 data[1]; };

struct Pkt_80135AE0 { u8 cmd; u8 flag; u16 f2; s32 len; u8 data[1]; };

struct Pkt_80135BD0 { u8 cmd; u8 flag; u16 f2; s32 len; u8 data[1]; };

struct Pkt_80135CD8 { u8 cmd; u8 flag; u16 f2; s32 len; u8 data[1]; };

struct Base_80136080 { u8 pad[0x18]; };

struct Obj_80136080 : Base_80136080 { virtual ~Obj_80136080(); };

struct Plr_80136080 : Base_80136080 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

struct Entry_80136080 {
    u8 tag[8];
    u32 ip_addr;
    s32 client_id;
    char name[16];
    u8 char_data[0x420];
};

struct Base_80134F9C { u8 pad[0x18]; };

struct Obj_80134F9C : Base_80134F9C { virtual ~Obj_80134F9C(); };

struct Pair_80134F9C { s32 a; s32 b; };

struct DateStamp_80134F9C { s32 v[3]; };

struct Timer_80134F9C {
    u8 pad[0x1C];
    s32 now;
    s32 start;
    u32 limit;
    u8 state;
};

typedef char Row_TLobby__data_8050AAE8[16];

typedef struct { s32 a; s32 b; } Pair_80135E7C;

typedef struct { u8 pad0[5]; u8 kind; u8 pad6[6]; u8 name[0x8C]; } Ent_80135E7C;

typedef struct {
    u32 kb;
    u8 pad[0x14];
} A_80134E30;

typedef struct {
    u8 pad[0x4];
    u8 b[0x100];
    u16 h[7];
    u32 w0;
    u32 w1;
} D_80134E30;

typedef char RecoveredGlobal_8013561C_lbl_805127F8_size[sizeof(RecoveredGlobal_8013561C_lbl_805127F8) == 0x200 ? 1 : -1];

struct RecoveredGlobal_8013630C_main_task { M2C_UNK value; u8 remaining[0x30]; };

typedef char RecoveredGlobal_8013630C_main_task_size[sizeof(RecoveredGlobal_8013630C_main_task) == 0x34 ? 1 : -1];

struct Base_801361E8 { u8 pad[0x18]; };

struct Obj_801361E8 : Base_801361E8 { virtual ~Obj_801361E8(); };

struct Node_801361E8 {
    u8 pad0[6];
    u16 id;
    u8 pad8[4];
    Node_801361E8 *next;
    u8 pad10[8];
    void *vt;
    u8 b1c, b1d, b1e, b1f;
};

struct Mgr_801361E8 { u8 pad[0x14]; Node_801361E8 *head; };

struct NodeB_801368B0;

struct Base_801368B0 { u8 pad[0x18]; };

struct Obj_801368B0 : Base_801368B0 { virtual ~Obj_801368B0(); };

struct Ent_801368B0 { u8 hdr[0xC]; s32 id; char name[0x10]; u8 rest[0x43C - 0x20]; };

struct Base_80136A8C { u8 pad[0x18]; };

struct Ply_80136A8C : Base_80136A8C {
    virtual ~Ply_80136A8C();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void m6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual char *m10();
};

struct Hdr_80136A8C {
    u8 pad0[0xAC];
    s32 fAC;
    u8 padB0[0x488 - 0xB0];
    s32 f488;
    u8 pad48C[4];
};

struct Base_80136C94 { u8 pad[0x18]; };

struct Obj_80136C94 : Base_80136C94 { virtual ~Obj_80136C94(); };

struct Row_80136C94 { u8 pad[8]; u32 ip; u8 pad2[20]; };

struct Hdr_80136C94 { u8 data[0x10]; };

struct Pkt_80136C94 {
    u8 pad0[0x84];
    Row_80136C94 rows[4];
    s8 client_id;
    s8 leader_id;
    s8 b106;
    s8 b107;
    s8 count;
    s8 b109;
    s8 b10a;
    s8 b10b;
    s32 w10c;
    u8 b110;
};

typedef struct { u8 pad0[0xA]; char name[0x12]; } Ent_8013703C;

M2C_UNK memcpy(void *, void *, int);
void * memset(void *, int, u32);
void TKeyBoardControl__sub_8000F978();
void mark_area_change_pending();
u16 obj_getField1c(void *);
void * get_current_floor();
s32 queue_destruction__7TObjectFv(void *);
char * get_card_window_area__6TLobbyFv(void);
s32 get_flag_bit0__6TLobbyFv(void);
void TLobby__sub_800703D0(void *, void *);
M2C_UNK __dt__12TPlyCharDataFv(s32, M2C_UNK);
void copy_header_struct__6TLobbyFPvPv(void *, void *);
void clear_header_struct__10TObjPlayerFPv(void *);
void TLobby__sub_80077798(void *, void *);
void set_ip_address__7TSocketFUl(void*, u32);
void collect_active_card_ids__6TLobbyFPv(void *);
void __dl__FPv(void *);
void * alloc__23TAdSinglePlyChrSelectGCFPv(s32);
int bswap_packet_header__6TLobbyFPv(void *);
void TFontSmallTask__sub_800FD5F4(void *, s32);
void apply_sync_item_state__6TLobbyFPv(void *);
s32 write_sync_item_state__6TLobbyFPv(void *);
s32 TKeyBoardControl__sub_80132368(void *);
void send_game_character__6TLobbyFv(void);
void update_idle_timeout__6TLobbyFPv(u8 *arg0);
u8 * TLobby__sub_80135198(u8 *arg0, s32 arg1);
void open_udp_socket_for_player__6TLobbyFi(s32 arg0);
void TLobby__sub_80135458(s32 arg0);
void handle_6x70_sync_player_disp_and_inventory(Pkt_801354AC *arg0);
void send_6x70_player_data__6TLobbyFi(s32 arg0);
void handle_6x6F_set_quest_flags_v2(s32 arg0);
void handle_6x6D_sync_game_state(Pkt_8013574C *arg0);
void handle_6x6C_sync_game_state(Pkt_801357F8 *arg0);
void handle_6x6B_sync_game_state(Pkt_801358B4 *arg0);
void TLobby__sub_80135974(s32 arg0);
void send_6x6E_sync_game_state__6TLobbyFi(s32 arg0);
void send_6x6D_item_state__6TLobbyFi(s32 arg0);
void send_compressed_packet_6c__6TLobbyFi(s32 arg0);
void send_cmd_6B__6TLobbyFi(s32 arg0);
void TLobby__sub_80135FFC(void);
void retire_lobby_player__6TLobbyFii(s32 idx, s32 v);
void on_lobby_player_add__6TLobbyFii(s32 arg0, s32 arg1);
s32 __dt__18TPlyJoinLobbyEntryFv(s32 arg0, s16 arg1);
void remove_player__6TLobbyFUiii(u32 arg0, s32 arg1, s32 arg2);
void handle_6x72_done_loading_into_game(void);
void handle_lobby_enter__6TLobbyFPviiiiiii(Ent_801368B0 *ents, s32 n, s32 client_id, s32 leader, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void make_players__6TLobbyFv(void);
void handle_game_join__6TLobbyFPv(Pkt_80136C94 *pkt);
void add_lobby_members__6TLobbyFPvisi(Ent_801368B0 *, s32, s32, s32);
void destroy_all_objects__6TLobbyFv();
void set_menu_mode_1__6TLobbyFv(void);
void set_menu_mode_0__6TLobbyFv(void);
char * get_seq_phase__6TLobbyFPv(int);
void TLobby__sub_8013A170(const char *fmt, ...);
void bswap_6x6E_sync_game_state__6TLobbyFPv(void *p);
s32 open_hard_keyboard__6TLobbyFPv(void *);
void bswap_player_data__6TLobbyFi(void *);
void set_player_count__6TLobbyFi(s32);
s32 TLobby__sub_8013A4A8(int, void *);
M2C_UNK bswap_and_handle_packet__6TLobbyFii(void *, void *);
M2C_UNK TLobby__sub_8013A578(void *);
void TLobby__sub_8013A9F4(void *);
void bswap_6x6B__6TLobbyFPv(void *);
void TLobby__sub_8013AA64(void *, void *);
void fn_8013ACE4(s32);
void set_area_random_seed(s32);
s32 TLobby__sub_8013F810(void *, void *, s32, void *);
s32 TLobby__sub_8013F99C(void *, void *, s32, void *);
s32 free__11TOBoss4RockFUi(int);
u8 * alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
void clear_enabled_main_warps();
void set_flag_and_update__6TLobbyFv();
s32 TLobby__sub_801A3E8C();
s32 TLobby__sub_801A51C0(void *);
VObj_18_80135208 * TPacket__ct(void*, s32);
s32 TKeyBoardControl__sub_801A57D0();
s32 fill_player_record__10TObjPlayerFPvPv(void *, void *);
s32 TObjPlayer__sub_801B4FD8(void *);
s32 get_player_by_client_id(void *);
Plr_801354AC * create_remote_player_object(void *);
u8 * create_player_object(s32, s32, void *);
void TLobby__sub_801DB554(void *);
void send_player_data_98__9TProtocolFPvPvPvPvPvPvPv(void *, void *, void *, void *, void *, void *, void *);
s32 DateToSeconds__FP9DateStampPi(void *, void *);
s32 getDateStamp__FP9DateStamp(void *);
void bswap_32__FPUl(u32 *);
M2C_UNK send_subcommand_to_client__6TLobbyFPvUi(void *, void *);
void init__23TAdSinglePlyChrSelectGCFv(void);
u8 * get_card_window__17TWindowSubComCardFUi(u32);
void * get_char_index__23TAdSinglePlyChrSelectGCFUi(u32);
void TLobby__sub_80207750(void *, s32);
void TAdStorySelectGC__sub_80207D44(s32);
u16 export_sync_records__6TLobbyFPv(void *);
u16 TLobby__sub_8020BFC4(void *);
void set_area__6TLobbyFPvi(void *, s32, s32);
u16 copy_switch_table(void *);
s32 clear_flag3_all_tasks__9TMainTaskFv(void *);
void * __nw__7TObjectFUl(u32);
s32 __ct__7TObjectFP7TObject(void *, void *);
s32 TWindow__close(int);
void set_field_1c__6TLobbyFPvf(void *, f32);
s32 TWindowCtrlMain__sub_8024CE58();
void calc_list_content_extent(void *);
void add_status_disp_entry__6TLobbyFPvii(void *, void *, int);
void complete_reveal__14TWindowMessageFPv(void *);
void send_and_handle__6TLobbyFPvii(void *, char *, int);
void * set_window_mode_4__6TLobbyFPvii(void *, void *, int);
void * get_window_layout_position(int);
void add_list_entry__6TLobbyFPviii(void *, int, void *, int);
void * open_default__23TShopJudgmentItemWindowFi(void *);
char * get_card_window_field__6TLobbyFv(void);
int sprintf(char *, const char *, ...);
int strncmp(const char *, const char *, unsigned long);
char * strncpy(char *, const char *, u32);

extern u8 TKeyBoardControl__data_80506270[];
extern char TLobby__data_8043EF38[];
extern u8 TLobby__data_805011D8[];
extern s32 TLobby__data_805D4E30;
extern s32 TLobby__data_805D53AC;
extern u8 *TLobby__data_805D5580;
extern s32 TLobby__data_805D5584;
extern s32 TLobby__data_805D5588;
extern s32 TLobby__data_805D5590;
extern s32 TLobby__data_805D5594;
extern s32 TLobby__data_805D5598;
extern s32 TLobby__data_805D55A4;
extern s32 TLobby__data_805D55A8;
extern s32 TLobby__data_805D55AC;
extern s32 TLobby__data_805D55B0;
extern s32 TLobby__data_805D55B8;
extern void *TLobby__data_805D55CC;
extern void *TLobby__data_805D55D0;
extern u32 TLobby__data_805D55D8;
extern s32 TLobby__data_805D5608;
extern s16 TLobby__data_805D5CE8;
extern u32 *TLobby__data_805D6140;
extern S12_801358B4 *TLobby__data_805D6144;
extern u32 TLobby__data_805D6148;
extern u32 TLobby__data_805D614C;
extern const char TLobby__data_805DB0B0[4];
extern u8 TLobby__sub_801371B0[];
extern Pair_80135E7C lbl_8043EE18[];
extern Pair_80134F9C lbl_8043EE28[];
extern char lbl_8043EE30[];
extern char lbl_8043EE48[];
extern char lbl_8043EE58[];
extern char lbl_8043EE7C[];
extern char lbl_8043EEA4[];
extern char lbl_8043EEC0[];
extern char lbl_8043EEDC[];
extern u8 lbl_8043EEF8[];
extern char lbl_8043EF04[];
extern char lbl_8043EF14[];
extern char lbl_8043EF4C[];
extern char lbl_8043EFC4[];
extern char lbl_8043EFD4[];
extern u8 lbl_8043F004[];
extern u8 lbl_8043F010[];
extern char lbl_8043F020[];
extern RecoveredGlobal_80135198_lbl_804A7008 lbl_804A7008;
extern char lbl_8050ADB8[];
extern RecoveredGlobal_80135974_lbl_805127F8 lbl_805127F8;
extern u8 lbl_80515BA0[];
extern s32 lbl_805D53A0;
extern s32 lbl_805D5550;
extern s32 lbl_805D55A0;
extern Mgr_801361E8 *lbl_805D5E48;
extern s32 lbl_805D61AC;
extern const f32 lbl_805DB0A8;
extern RecoveredGlobal_8013630C_main_task main_task;
struct VBase_18_9029aa { char pad[0x18]; };
struct VObj_18_9029aa : VBase_18_9029aa {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual M2C_UNK m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual s32 m10();
};

struct LEntry_801352C0 { u8 hdr[0x20]; u8 body[0x41C]; };
struct LobbyData_801352C0 {
    u8 pad0[0xC];
    LEntry_801352C0 ents[4];
    u8 pad[0x4088 - 0xC - 4 * 0x43C];
    char names[12][16];
    s32 pending[4];
};

extern char lbl_8043EE68[];
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FF5E4(int);
u32 TLobby__data_80506A60[3];
u32 TLobby__data_80506A6C[3252];
u32 lbl_80509D3C[8];
u32 lbl_80509D5C[852];
char TLobby__data_8050AAAC[0x28];
u32 lbl_8050AAD4[5];
Row_TLobby__data_8050AAE8 TLobby__data_8050AAE8[12];
s32 lbl_8050ABA8[4];
Row_80135208 lbl_8050ABB8[4];
u32 lbl_8050AC38[64];
u32 lbl_8050AD38[32];

extern "C" {
extern Mgr_801361E8 *lbl_805D5E48;
extern RecoveredGlobal_8013630C_main_task main_task;
}

void send_game_character__6TLobbyFv(void) {
    A_80134E30 a;
    u8 b[0x7C];
    char c[0xAC];
    D_80134E30 d;
    u8 e[0x204];
    u8 *card;
    init__23TAdSinglePlyChrSelectGCFv();
    card = get_card_window__17TWindowSubComCardFUi(0xFFFF);
    memset(&a, 0, sizeof(a));
    a.kb = open_hard_keyboard__6TLobbyFPv((void *)lbl_805D53A0) != 0 ? 1 : 0;
    TLobby__sub_80077798(card + 0x22EC, &a);
    memset(c, 0, sizeof(c));
    strncpy(c, get_card_window_field__6TLobbyFv(), 0xAC);
    memset(b, 0, sizeof(b));
    collect_active_card_ids__6TLobbyFPv(b);
    memset(e, 0, sizeof(e));
    if (get_flag_bit0__6TLobbyFv() != 0) {
        e[1] = 1;
        strncpy((char *)e + 4, get_card_window_area__6TLobbyFv(), 0x200);
    }
    memset(&d, 0, sizeof(d));
    TLobby__sub_800703D0(d.b, card + 0x21C4);
    d.h[0] = *(u16 *)(card + 0x21A8);
    d.h[1] = *(u16 *)(card + 0x21AA);
    d.h[2] = *(u16 *)(card + 0x21AC);
    d.h[3] = *(u16 *)(card + 0x21AE);
    d.h[4] = *(u16 *)(card + 0x21B0);
    d.h[5] = *(u16 *)(card + 0x21B2);
    d.h[6] = *(u16 *)(card + 0x21B4);
    d.w0 = *(u32 *)(card + 0x21B8);
    d.w1 = *(u32 *)(card + 0x21BC);
    send_player_data_98__9TProtocolFPvPvPvPvPvPvPv((*(void * *)&TLobby__data_805D5580), get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF), &d, &a, b, e, c);
}

void update_idle_timeout__6TLobbyFPv(u8 *arg0) {
    Timer_80134F9C *t = (Timer_80134F9C *)arg0;
    Pair_80134F9C tmp = lbl_8043EE28[0];
    DateStamp_80134F9C ds;
    u32 limit;
    u32 elapsed;
    getDateStamp__FP9DateStamp(&ds);
    DateToSeconds__FP9DateStampPi(&ds, &t->now);
    if (TWindowCtrlMain__sub_8024CE58() == 0) {
        (*(Obj_80134F9C * *)&TLobby__data_805D5608) = 0;
    }
    if (TKeyBoardControl__sub_80132368(TKeyBoardControl__data_80506270) != 0 || TKeyBoardControl__sub_801A57D0() != 0) {
        t->start = t->now;
        t->state = 0;
        if ((*(Obj_80134F9C * *)&TLobby__data_805D5608) != 0) {
            delete (*(Obj_80134F9C * *)&TLobby__data_805D5608);
            (*(Obj_80134F9C * *)&TLobby__data_805D5608) = 0;
        }
    }
    t->limit = TLobby__sub_801A51C0((void *)lbl_805D53A0);
    elapsed = t->now - t->start;
    switch (t->state) {
    case 0:
        if (t->limit != 0 && elapsed + 0x1E > t->limit) {
            t->state = 1;
            if ((*(Obj_80134F9C * *)&TLobby__data_805D5608) == 0 && TWindowCtrlMain__sub_8024CE58() != 0) {
                sprintf(lbl_8050ADB8, get_seq_phase__6TLobbyFPv(0x1F), t->limit - elapsed);
                (*(Obj_80134F9C * *)&TLobby__data_805D5608) = (Obj_80134F9C *)set_window_mode_4__6TLobbyFPvii(get_window_layout_position(0xCA), &tmp, 1);
                send_and_handle__6TLobbyFPvii((void *)(*(Obj_80134F9C * *)&TLobby__data_805D5608), lbl_8050ADB8, 0x80);
                set_field_1c__6TLobbyFPvf((void *)(*(Obj_80134F9C * *)&TLobby__data_805D5608), lbl_805DB0A8);
                complete_reveal__14TWindowMessageFPv((void *)(*(Obj_80134F9C * *)&TLobby__data_805D5608));
            }
        }
        break;
    case 1:
        limit = t->limit;
        if (elapsed > limit) {
            delete (*(Obj_80134F9C * *)&TLobby__data_805D5608);
            (*(Obj_80134F9C * *)&TLobby__data_805D5608) = 0;
            TLobby__data_805D55A8 = 1;
            queue_destruction__7TObjectFv(arg0);
        } else {
            sprintf(lbl_8050ADB8, get_seq_phase__6TLobbyFPv(0x1F), limit - elapsed);
        }
        break;
    }
}

u8 *TLobby__sub_80135198(u8 *arg0, s32 arg1) {
    M2C_UNK sp8;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804A7008.value;
    getDateStamp__FP9DateStamp((void *) (&sp8));
    DateToSeconds__FP9DateStampPi((void *) (&sp8), (void *) (arg0 + 0x1C));
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x24) = TLobby__sub_801A51C0((void *) (lbl_805D53A0));
    M2C_FIELD(arg0, s8 *, 0x28) = 0;
    TLobby__data_805D5608 = 0;
    return arg0;
}

void open_udp_socket_for_player__6TLobbyFi(s32 arg0) {
    VObj_18_80135208 *o = (VObj_18_80135208 *)__nw__7TObjectFUl(0xE70);
    if (o != NULL) {
        o = TPacket__ct(o, (*(s32 *)&lbl_805D5E48));
    }
    if (o != NULL) {
        u8 *p = (u8 *)o;
        *(s16 *)(p + 6) = arg0;
        set_ip_address__7TSocketFUl(o, lbl_8050ABB8[arg0].ip);
        *(s16 *)(p + 0x20) = lbl_805D53A0 + 0xFA0;
        *(s16 *)(p + 0x22) = arg0 + 0xFA0;
        s32 v = o->m4();
        TLobby__sub_8013A170(lbl_8043EE30, v, p[0x1C], p[0x1D], p[0x1E], p[0x1F]);
    }
}

void handle_6x71_unblock_game_join(void) {
    LEntry_801352C0 *e;
    s32 *pend;
    u8 *p;
    s32 i;

    if (TLobby__data_805D5CE8 == 0) {
        p = create_player_object(lbl_805D53A0, 0, get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF));
        copy_header_struct__6TLobbyFPvPv(p + 0xDAC, (u8 *)TLobby__data_805D5580 + 0x1900);
        ((VObj_18_9029aa *)p)->m6();
        {
            s32 nm = (s32)TLobby__data_8050AAE8;
            strncpy((char *)(nm + lbl_805D53A0 * 16), (const char *)((VObj_18_9029aa *)p)->m10(), 0x10);
        }
        TLobby__sub_8013A170(lbl_8043EE48, lbl_805D53A0);
        pend = (s32 *)lbl_8050ABA8;
        for (i = 0; i < 4; i++) {
            if (pend[i] != 0) {
                send_6x70_player_data__6TLobbyFi(i);
                if (((void *(*)(s32))get_player_by_client_id)(i) == NULL) {
                    e = (LEntry_801352C0 *)TLobby__data_80506A6C;
                    e += i;
                    p = create_player_object(i, 4, e->body);
                    copy_header_struct__6TLobbyFPvPv(p + 0xDAC, e);
                    ((VObj_18_9029aa *)p)->m6();
                    open_udp_socket_for_player__6TLobbyFi(i);
                    TLobby__sub_8013A170(lbl_8043EE58, i);
                } else {
                    TLobby__sub_8013A170(lbl_8043EE68, i);
                }
            }
            pend[i] = 0;
        }
        TLobby__sub_801DB554(TLobby__data_805D5580);
        TAdSinglePlyChrSelectGC__sub_801FF5E4(0);
        TLobby__data_805D5594 = 0xF;
    }
}

void TLobby__sub_80135458(s32 arg0) {
    Stack_80135458 stack;
    stack.sp8 = 0x71;
    stack.sp9 = 1;
    stack.spA = 0;
    bswap_packet_header__6TLobbyFPv(&stack.sp8);
    send_subcommand_to_client__6TLobbyFPvUi((void *) (&stack.sp8), (void *) (arg0));
}

void handle_6x70_sync_player_disp_and_inventory(Pkt_801354AC *arg0) {
    Plr_801354AC *plr;
    Disp_801354AC *disp;
    Obj_801354AC *p;
    if (TLobby__data_805D5CE8 == 0 && (TLobby__data_805D5594 == 0xE || TLobby__data_805D5594 == 0xF)) {
        disp = &arg0->disp;
        bswap_player_data__6TLobbyFi(disp);
        if (disp->id != lbl_805D53A0) {
            p = (Obj_801354AC *)get_player_by_client_id((void *)disp->id);
            if (p != NULL) {
                delete p;
            }
            plr = create_remote_player_object(disp);
            strncpy(TLobby__data_8050AAE8[obj_getField1c(plr)], plr->m10(), 0x10);
            open_udp_socket_for_player__6TLobbyFi(disp->id);
            TLobby__sub_8013A170(lbl_8043EE7C, obj_getField1c(plr));
        }
    }
}

void send_6x70_player_data__6TLobbyFi(s32 arg0) {
    Stack_80135598 stack;
    u8 *temp_r3;
    TObjPlayer__sub_801B4FD8((void *) (&stack.sp8));
    temp_r3 = (u8 *)(alloc_buffer__11TOBoss4RockFPv(0x494));
    if (temp_r3 != NULL) {
        fill_player_record__10TObjPlayerFPvPv((void *) (get_player_by_client_id((void *) (lbl_805D53A0))), (void *) (temp_r3 + 8));
        M2C_FIELD(temp_r3, s8 *, 0) = 0x70;
        M2C_FIELD(temp_r3, s8 *, 1) = 0;
        M2C_FIELD(temp_r3, s16 *, 2) = (s16) lbl_805D53A0;
        M2C_FIELD(temp_r3, s32 *, 4) = 0x494;
        TLobby__sub_8013A4A8((int) (temp_r3), (void *) (arg0));
        free__11TOBoss4RockFUi((int) (temp_r3));
    }
}

#pragma push
#pragma peephole off
void handle_6x6F_set_quest_flags_v2(s32 arg0) {
    if (((s16) TLobby__data_805D5CE8 == 0) && (((s32) TLobby__data_805D5594 == 0xE) || ((s32) TLobby__data_805D5594 == 0xF))) {
        memcpy((void *) (&(*(RecoveredGlobal_8013561C_lbl_805127F8 *)&lbl_805127F8).value), (void *) (arg0 + 4), (int) (0x200));
    }
}
extern int fold_flush_0;
#pragma pop

void handle_6x6D_sync_game_state(Pkt_8013574C *arg0) {
    s32 len;
    u8 *buf;
    void *tmp;
    if (TLobby__data_805D5CE8 == 0 && (TLobby__data_805D5594 == 0xE || TLobby__data_805D5594 == 0xF)) {
        len = arg0->len - 8;
        TLobby__sub_8013A170(lbl_8043EEA4, arg0->len);
        buf = alloc_buffer__11TOBoss4RockFPv((M2C_UNK)(0x8000));
        if (buf != NULL) {
            tmp = alloc__23TAdSinglePlyChrSelectGCFPv(0x7230);
            if (tmp != NULL) {
                TLobby__sub_8013F810(tmp, arg0->data + 0, len, buf);
                __dl__FPv(tmp);
            }
            apply_sync_item_state__6TLobbyFPv(buf);
            free__11TOBoss4RockFUi((int)buf);
        }
    }
}

void handle_6x6C_sync_game_state(Pkt_801357F8 *arg0) {
    u32 r;
    u32 *p;
    s32 n;
    s32 i;
    if (TLobby__data_805D5CE8 == 0 && (TLobby__data_805D5594 == 0xE || TLobby__data_805D5594 == 0xF)) {
        n = arg0->len - 8;
        TLobby__sub_8013A170(lbl_8043EEC0, arg0->len);
        p = (u32 *)alloc__23TAdSinglePlyChrSelectGCFPv(0x7230);
        if (p != NULL) {
            r = ((u32)TLobby__sub_8013F810(p, arg0->data, n, TLobby__data_805D6140));
            __dl__FPv(p);
            n = r >> 2;
            p = TLobby__data_805D6140;
            TLobby__data_805D6148 = n;
            for (i = 0; i < n; i++) {
                TLobby__sub_8013A9F4(&p[i]);
            }
        }
    }
}

void handle_6x6B_sync_game_state(Pkt_801358B4 *arg0) {
    u32 r;
    S12_801358B4 *p;
    s32 n;
    s32 i;
    if (TLobby__data_805D5CE8 == 0 && (TLobby__data_805D5594 == 0xE || TLobby__data_805D5594 == 0xF)) {
        n = arg0->len - 8;
        TLobby__sub_8013A170(lbl_8043EEDC, arg0->len);
        p = (S12_801358B4 *)alloc__23TAdSinglePlyChrSelectGCFPv(0x7230);
        if (p != NULL) {
            r = ((u32)TLobby__sub_8013F810(p, arg0->data, n, TLobby__data_805D6144));
            __dl__FPv(p);
            n = r / 12;
            p = TLobby__data_805D6144;
            TLobby__data_805D614C = n;
            for (i = 0; i < n; i++) {
                bswap_6x6B__6TLobbyFPv(&p[i]);
            }
        }
    }
}

void TLobby__sub_80135974(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_80135974, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80135974, spC) == 0x4) ? 1 : -1];
    Stack_80135974 stack;
    TLobby__sub_8013A578((void *) (&stack.sp8));
    memcpy((void *) (&stack.spC), (void *) (&lbl_805127F8.value), (int) (0x200));
    bswap_and_handle_packet__6TLobbyFii((void *) (&stack.sp8), (void *) (arg0));
}

void send_6x6E_sync_game_state__6TLobbyFi(s32 arg0) {
    s32 n;
    s32 len;
    Pkt_801359C4 *buf;
    Hdr_801359C4 *hdr;
    void *tmp;
    buf = (Pkt_801359C4 *)alloc_buffer__11TOBoss4RockFPv((M2C_UNK)(0x4000));
    if (buf != NULL) {
        memset(buf, 0, 0x4000);
        hdr = (Hdr_801359C4 *)alloc__23TAdSinglePlyChrSelectGCFPv(0x4008);
        if (hdr != NULL) {
            memset(hdr, 0, 0x4008);
            hdr->f2 = TLobby__sub_8020BFC4(hdr->data);
            n = hdr->f2;
            hdr->f4 = export_sync_records__6TLobbyFPv(&hdr->data[n]);
            n += hdr->f4;
            hdr->f6 = copy_switch_table(&hdr->data[n]);
            n += hdr->f6;
            hdr->total = n;
            bswap_6x6E_sync_game_state__6TLobbyFPv(hdr);
            tmp = alloc__23TAdSinglePlyChrSelectGCFPv(0x7230);
            if (tmp != NULL) {
                len = TLobby__sub_8013F99C(tmp, hdr, n, buf->data);
                __dl__FPv(tmp);
            }
            __dl__FPv(hdr);
        }
        buf->cmd = 0x6E;
        buf->flag = 0;
        buf->f2 = 0;
        buf->len = ((len + 3) & ~3) + 8;
        TLobby__sub_8013A4A8((int)buf, (void *)arg0);
        free__11TOBoss4RockFUi((int)buf);
    }
}

void send_6x6D_item_state__6TLobbyFi(s32 arg0) {
    s32 n;
    s32 len;
    Pkt_80135AE0 *buf;
    u8 *src;
    void *tmp;
    buf = (Pkt_80135AE0 *)alloc_buffer__11TOBoss4RockFPv((M2C_UNK)(0x8000));
    if (buf != NULL) {
        memset(buf, 0, 0x8000);
        src = alloc_buffer__11TOBoss4RockFPv((M2C_UNK)(0x8000));
        if (src != NULL) {
            memset(src, 0, 0x8000);
            n = write_sync_item_state__6TLobbyFPv(src);
            tmp = alloc__23TAdSinglePlyChrSelectGCFPv(0x7230);
            if (tmp != NULL) {
                len = TLobby__sub_8013F99C(tmp, src, n, buf->data);
                __dl__FPv(tmp);
            }
            free__11TOBoss4RockFUi((int)src);
        }
        buf->cmd = 0x6D;
        buf->flag = 0;
        buf->f2 = 0;
        buf->len = ((len + 3) & ~3) + 8;
        TLobby__sub_8013A4A8((int)buf, (void *)arg0);
        free__11TOBoss4RockFUi((int)buf);
    }
}

void send_compressed_packet_6c__6TLobbyFi(s32 arg0) {
    u32 *src;
    s32 len;
    u32 size;
    Pkt_80135BD0 *buf;
    void *tmp;
    u32 n;
    u32 *p;
    u32 i;
    buf = (Pkt_80135BD0 *)alloc_buffer__11TOBoss4RockFPv((M2C_UNK)(0x8000));
    if (buf != NULL) {
        memset(buf, 0, 0x8000);
        tmp = alloc__23TAdSinglePlyChrSelectGCFPv(0x7230);
        if (tmp != NULL) {
            src = TLobby__data_805D6140;
            size = TLobby__data_805D6148 * 4;
            n = size / 4;
            p = (u32 *)alloc_buffer__11TOBoss4RockFPv((M2C_UNK)(size));
            memcpy(p, src, size);
            for (i = 0; i < n; i++) {
                TLobby__sub_8013A9F4(&p[i]);
            }
            len = TLobby__sub_8013F99C(tmp, p, size, buf->data);
            free__11TOBoss4RockFUi((int)p);
            __dl__FPv(tmp);
            buf->cmd = 0x6C;
            buf->flag = 0;
            buf->f2 = 0;
            buf->len = ((len + 3) & ~3) + 8;
            TLobby__sub_8013A4A8((int)buf, (void *)arg0);
        }
        free__11TOBoss4RockFUi((int)buf);
    }
}

void send_cmd_6B__6TLobbyFi(s32 arg0) {
    S12_801358B4 *src;
    s32 len;
    u32 size;
    Pkt_80135CD8 *buf;
    void *tmp;
    u32 n;
    S12_801358B4 *p;
    u32 i;
    buf = (Pkt_80135CD8 *)alloc_buffer__11TOBoss4RockFPv((M2C_UNK)(0x8000));
    if (buf != NULL) {
        memset(buf, 0, 0x8000);
        tmp = alloc__23TAdSinglePlyChrSelectGCFPv(0x7230);
        if (tmp != NULL) {
            src = TLobby__data_805D6144;
            size = TLobby__data_805D614C * sizeof(S12_801358B4);
            n = size / sizeof(S12_801358B4);
            p = (S12_801358B4 *)alloc_buffer__11TOBoss4RockFPv((M2C_UNK)(n * sizeof(S12_801358B4)));
            memcpy(p, src, size);
            for (i = 0; i < n; i++) {
                bswap_6x6B__6TLobbyFPv(&p[i]);
            }
            len = TLobby__sub_8013F99C(tmp, p, size, buf->data);
            free__11TOBoss4RockFUi((int)p);
            __dl__FPv(tmp);
            buf->cmd = 0x6B;
            buf->flag = 0;
            buf->f2 = 0;
            buf->len = ((len + 3) & ~3) + 8;
            TLobby__sub_8013A4A8((int)buf, (void *)arg0);
        }
        free__11TOBoss4RockFUi((int)buf);
    }
}

void open_download_list_window__6TLobbyFiPv(s32 arg0, Ent_80135E7C *arg1) {
    static void *tbl = lbl_8043EEF8;
    s32 i;
    Ent_80135E7C *e;
    void *w;

    if (TLobby__data_805D55D0 != 0) {
        queue_destruction__7TObjectFv(TLobby__data_805D55D0);
        TLobby__data_805D55D0 = 0;
    }
    TLobby__data_805D55D0 = open_default__23TShopJudgmentItemWindowFi(tbl);
    for (i = 0; i < arg0; i++) {
        e = &arg1[i];
        switch (e->kind) {
        case 0:
            add_list_entry__6TLobbyFPviii(TLobby__data_805D55D0, 0x2C, e->name, i);
            break;
        case 1:
            add_list_entry__6TLobbyFPviii(TLobby__data_805D55D0, 0x17, e->name, i);
            break;
        case 2:
            add_list_entry__6TLobbyFPviii(TLobby__data_805D55D0, 0x31, e->name, i);
            break;
        default:
            add_list_entry__6TLobbyFPviii(TLobby__data_805D55D0, 0x2C, e->name, i);
            break;
        }
    }
    calc_list_content_extent(TLobby__data_805D55D0);
    if (TLobby__data_805D55CC != 0) {
        queue_destruction__7TObjectFv(TLobby__data_805D55CC);
        TLobby__data_805D55CC = 0;
    }
    {
        Pair_80135E7C p = lbl_8043EE18[0];
        w = get_window_layout_position(0xC7);
        TLobby__data_805D55CC = set_window_mode_4__6TLobbyFPvii(w, &p, 1);
        send_and_handle__6TLobbyFPvii(TLobby__data_805D55CC, (char *)arg1 + 0x2C, 3);
    }
    TLobby__data_805D55A4 = 0;
    TLobby__data_805D5594 = 0x11;
}

void TLobby__sub_80135FFC(void) {  }

void retire_lobby_player__6TLobbyFii(s32 idx, s32 v) {
    Obj_80136000 *p;
    TLobby__data_805D53AC = v;
    p = (Obj_80136000 *)get_player_by_client_id((void *)idx);
    if (p) {
        delete p;
        TLobby__sub_8013A170(lbl_8043EF04, idx);
    }
    strncpy(TLobby__data_8050AAE8[idx], TLobby__data_805DB0B0, 0x10);
}

void on_lobby_player_add__6TLobbyFii(s32 arg0, s32 arg1) {
    Entry_80136080 e;
    Obj_80136080 *p;
    u8 *plr;
    TLobby__sub_8013AA64(&e, (void *)arg0);
    TLobby__data_805D53AC = arg1;
    if (e.client_id == lbl_805D53A0) {
        TLobby__sub_8013A170(lbl_8043EF14, e.client_id);
        ((void (*)(void *, s32))__dt__18TPlyJoinLobbyEntryFv)(&e, -1);
        return;
    }
    p = (Obj_80136080 *)get_player_by_client_id((void *)e.client_id);
    if (p != NULL) {
        delete p;
        TLobby__sub_8013A170(TLobby__data_8043EF38, e.client_id);
    }
    strncpy(TLobby__data_8050AAE8[e.client_id], e.name, 0x10);
    plr = create_player_object(e.client_id, 4, e.char_data);
    copy_header_struct__6TLobbyFPvPv(plr + 0xDAC, &e);
    ((Plr_80136080 *)plr)->m6();
    TLobby__sub_8013A170(lbl_8043EE58, e.client_id);
    ((void (*)(void *, s32))__dt__18TPlyJoinLobbyEntryFv)(&e, -1);
}

s32 __dt__18TPlyJoinLobbyEntryFv(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        __dt__12TPlyCharDataFv(arg0 + 0x20, -1);
        if (arg1 > 0) {
            ((M2C_UNK (*)(s32))__dl__FPv)(arg0);
        }
    }
    return arg0;
}

void remove_player__6TLobbyFUiii(u32 arg0, s32 arg1, s32 arg2) {
    Obj_801361E8 *p;
    Node_801361E8 *n;
    TLobby__data_805D53AC = arg1;
    TLobby__data_805D5598 = arg2;
    p = (Obj_801361E8 *)get_player_by_client_id((void *)arg0);
    if (p != NULL) {
        for (n = lbl_805D5E48->head; n != NULL; n = n->next) {
            if (n->id == arg0) {
                TLobby__sub_8013A170(lbl_8043EF4C, n->b1c, n->b1d, n->b1e, n->b1f);
                delete (Obj_801361E8 *)n;
                break;
            }
        }
        delete p;
    }
    strncpy(TLobby__data_8050AAE8[arg0], TLobby__data_805DB0B0, 0x10);
    if (TLobby__data_805D5594 == 0xE) {
        TLobby__data_805D5CE8 = 1;
    }
    if (TLobby__data_805D55D8 != 0) {
        TWindow__close(TLobby__data_805D55D8);
        TLobby__data_805D55D8 = 0;
    }
    if (lbl_805D61AC == 0) {
        clear_flag3_all_tasks__9TMainTaskFv(&main_task.value);
    }
}

void handle_6x72_done_loading_into_game(void) {
    if ((u32) TLobby__data_805D55D8 != 0U) {
        TWindow__close((int) (TLobby__data_805D55D8));
        TLobby__data_805D55D8 = 0U;
    }
    clear_flag3_all_tasks__9TMainTaskFv((void *) (&main_task.value));
}

void on_game_player_add__6TLobbyFiii(s32 arg0, s32 arg1, s32 arg2) {
    Entry_8013634C e;
    s32 pkt;
    Obj_801361E8 *p;
    Node_801361E8 *n;
    u8 *plr;
    if (TLobby__data_805D5594 != 0xE && TLobby__data_805D5594 != 0xF) {
        return;
    }
    TLobby__sub_8013AA64(&e, (void *)arg0);
    if (e.client_id == lbl_805D53A0) {
        ((void (*)(void *, s32))__dt__18TPlyJoinLobbyEntryFv)(&e, -1);
        return;
    }
    __as__16TPlyGuildCardTagFRC16TPlyGuildCardTag(&lbl_8050ABB8[e.client_id], &e);
    lbl_8050ABB8[e.client_id].ip_addr = e.ip_addr;
    lbl_8050ABB8[e.client_id].client_id = e.client_id;
    strncpy(lbl_8050ABB8[e.client_id].name, e.name, 0x10);
    TLobby__data_805D5598 = arg2;
    sprintf((char *)lbl_8050AD38, get_seq_phase__6TLobbyFPv(0x10), e.name);
    TLobby__sub_80139894((char *)lbl_8050AD38);
    complete_reveal__14TWindowMessageFPv((void *)TLobby__data_805D55D8);
    reparent_to_main_ctrl__17TWindowSubComCardFi(TLobby__data_805D55D8);
    some_empty_func__9TMainTaskFv(&main_task);
    run_tl_camera_tasks__9TMainTaskFv(&main_task);
    render__9TMainTaskFv(&main_task);
    render_screen_overlay__9TMainTaskFv(&main_task);
    render_tick__Fv();
    some_empty_func__9TMainTaskFv(&main_task);
    run_tl_camera_tasks__9TMainTaskFv(&main_task);
    render__9TMainTaskFv(&main_task);
    render_screen_overlay__9TMainTaskFv(&main_task);
    render_tick__Fv();
    some_empty_func__9TMainTaskFv(&main_task);
    run_tl_camera_tasks__9TMainTaskFv(&main_task);
    render__9TMainTaskFv(&main_task);
    render_screen_overlay__9TMainTaskFv(&main_task);
    render_tick__Fv();
    run_all_lists__9TMainTaskFv(&main_task);
    TLobby__data_805D53AC = arg1;
    p = ((Obj_801361E8 *(*)(void *))get_player_by_client_id)((void *)e.client_id);
    if (p != NULL) {
        for (n = lbl_805D5E48->head; n != NULL; n = n->next) {
            if (n->id == e.client_id) {
                TLobby__sub_8013A170(lbl_8043EF64, e.client_id, n->b1c, n->b1d, n->b1e, n->b1f);
                delete (Obj_801361E8 *)n;
                break;
            }
        }
        delete p;
        TLobby__sub_8013A170(TLobby__data_8043EF38, e.client_id);
    }
    if (lbl_805D53A0 == TLobby__data_805D53AC) {
        send_6x6D_item_state__6TLobbyFi(e.client_id);
        send_cmd_6B__6TLobbyFi(e.client_id);
        send_compressed_packet_6c__6TLobbyFi(e.client_id);
        send_6x6E_sync_game_state__6TLobbyFi(e.client_id);
        TLobby__sub_80135974(e.client_id);
        TLobby__sub_80135458(e.client_id);
    }
    if (((u8 *(*)(void *))get_player_by_client_id)((void *)lbl_805D53A0) != NULL) {
        send_6x70_player_data__6TLobbyFi(e.client_id);
        if (((u8 *(*)(void *))get_player_by_client_id)((void *)e.client_id) == NULL) {
            plr = create_player_object(e.client_id, 4, e.char_data);
            copy_header_struct__6TLobbyFPvPv(plr + 0xDAC, &e);
            ((Plr_80136080 *)plr)->m6();
            open_udp_socket_for_player__6TLobbyFi(e.client_id);
            TLobby__sub_8013A170(lbl_8043EE58, e.client_id);
        }
    } else {
        lbl_8050ABA8[e.client_id] = 1;
        TLobby__sub_8013A5D4(&((Entry_8013634C *)TLobby__data_80506A6C)[e.client_id], &e);
    }
    if (lbl_805D53A0 == TLobby__data_805D53AC) {
        TLobby__sub_8013A5C0(&pkt);
        send_packet_60__6TLobbyFi(&pkt);
    }
    ((void (*)(void *, s32))__dt__18TPlyJoinLobbyEntryFv)(&e, -1);
}

#pragma push
#pragma opt_propagation off
void handle_lobby_enter__6TLobbyFPviiiiiii(Ent_801368B0 *ents, s32 n, s32 client_id, s32 leader, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 v4;
    Obj_801368B0 *p;
    s32 i;
    s32 j;
    Node_801361E8 *node;
    destroy_all_objects__6TLobbyFv();
    TLobby__sub_8013A170(lbl_8043EFC4, client_id);
    lbl_805D53A0 = client_id;
    v4 = arg4;
    TLobby__data_805D5584 = 1;
    TLobby__data_805D5598 = 1;
    TLobby__data_805D55B0 = arg4;
    TLobby__data_805D55AC = arg5;
    TLobby__data_805D55B8 = arg6;
    set_player_count__6TLobbyFi(0);
    TLobby__data_805D5588 = 0;
    TLobby__data_805D53AC = leader;
    for (node = lbl_805D5E48->head; node != NULL; node = node->next) {
        TLobby__sub_8013A170(lbl_8043EF4C, node->b1c, node->b1d, node->b1e, node->b1f);
        delete (Obj_801368B0 *)node;
    }
    for (j = 0; j < 12; j++) {
        TLobby__data_8050AAE8[j][0] = 0;
    }
    for (i = 0; i < n; i++) {
        strncpy(TLobby__data_8050AAE8[ents[i].id], ents[i].name, 0x10);
    }
    for (i = 0; i < 12; i++) {
        p = (Obj_801368B0 *)get_player_by_client_id((void *)i);
        if (p != NULL) {
            delete p;
            TLobby__sub_8013A170(TLobby__data_8043EF38, i);
        }
    }
    add_lobby_members__6TLobbyFPvisi(ents, n, client_id, leader);
    TLobby__sub_80207750(get_current_floor(), v4);
    lbl_805D55A0 = arg7;
    TKeyBoardControl__sub_8000F978();
    *(u8 **)(TLobby__data_805D5580 + 0xBBF8) = TLobby__sub_801371B0;
}
extern int fold_flush_1;
#pragma pop

void make_players__6TLobbyFv(void) {
    Ply_80136A8C *p;
    Hdr_80136A8C hdr;
    Ply_80136A8C *q;
    if (TLobby__sub_801A3E8C() != 0) {
        p = (Ply_80136A8C *)create_player_object(lbl_805D53A0, 0, get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF));
        copy_header_struct__6TLobbyFPvPv((u8 *)p + 0xDAC, (u8 *)(*(void * *)&TLobby__data_805D5580) + 0x1900);
        p->m6();
        strncpy(TLobby__data_8050AAE8[lbl_805D53A0], p->m10(), 0x10);
        TLobby__sub_8013A170(lbl_8043EE48, lbl_805D53A0);
        TLobby__sub_801DB554((*(void * *)&TLobby__data_805D5580));
        TLobby__data_805D5594 = 0xF;
        p = (Ply_80136A8C *)create_player_object(1 - lbl_805D53A0, 4, get_char_index__23TAdSinglePlyChrSelectGCFUi(0));
        if (p != NULL) {
            TObjPlayer__sub_801B4FD8(&hdr);
            fill_player_record__10TObjPlayerFPvPv(p, &hdr);
            bswap_player_data__6TLobbyFi(&hdr);
            hdr.fAC = 0;
            hdr.f488 = 0;
            delete p;
            q = ((Ply_80136A8C * (*)(void *))create_remote_player_object)(&hdr);
            if (q != NULL) {
                q->m6();
            }
        }
    } else if (lbl_805D53A0 == TLobby__data_805D53AC) {
        p = (Ply_80136A8C *)create_player_object(lbl_805D53A0, 0, get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF));
        copy_header_struct__6TLobbyFPvPv((u8 *)p + 0xDAC, (u8 *)(*(void * *)&TLobby__data_805D5580) + 0x1900);
        p->m6();
        strncpy(TLobby__data_8050AAE8[lbl_805D53A0], p->m10(), 0x10);
        TLobby__sub_8013A170(lbl_8043EE48, lbl_805D53A0);
        TLobby__sub_801DB554((*(void * *)&TLobby__data_805D5580));
        TLobby__data_805D5594 = 0xF;
    }
}

void handle_game_join__6TLobbyFPv(Pkt_80136C94 *pkt) {
    Hdr_80136C94 hdr;
    Obj_80136C94 *p;
    s32 i;
    s32 j;
    clear_header_struct__10TObjPlayerFPv(&hdr);
    ((void * (*)(void *, const void *, u32))memcpy)(((Row_80136C94 *)&lbl_8050ABB8), pkt->rows, 0x80);
    bswap_32__FPUl(&((Row_80136C94 *)&lbl_8050ABB8)[0].ip);
    bswap_32__FPUl(&((Row_80136C94 *)&lbl_8050ABB8)[1].ip);
    bswap_32__FPUl(&((Row_80136C94 *)&lbl_8050ABB8)[2].ip);
    bswap_32__FPUl(&((Row_80136C94 *)&lbl_8050ABB8)[3].ip);
    destroy_all_objects__6TLobbyFv();
    TLobby__sub_8013A170(lbl_8043EFD4, pkt->client_id);
    lbl_805D53A0 = pkt->client_id;
    TLobby__data_805D53AC = pkt->leader_id;
    TLobby__data_805D5598 = pkt->b106;
    set_player_count__6TLobbyFi(pkt->count);
    TLobby__data_805D4E30 = pkt->b10b;
    lbl_805D5550 = pkt->b107;
    lbl_805D55A0 = pkt->b109;
    set_area_random_seed(pkt->w10c);
    TFontSmallTask__sub_800FD5F4(TLobby__data_805011D8, pkt->b10a);
    if ((s32)pkt->b110 == 2) {
        TAdStorySelectGC__sub_80207D44(1);
    } else {
        TAdStorySelectGC__sub_80207D44(0);
    }
    fn_8013ACE4(pkt->w10c);
    for (i = 0; i < 0xC; i++) {
        p = (Obj_80136C94 *)get_player_by_client_id((void *)i);
        if (p != NULL) {
            delete p;
            TLobby__sub_8013A170(TLobby__data_8043EF38, i);
        }
    }
    for (j = 0; j < 4; j++) {
        lbl_8050ABA8[j] = 0;
    }
    clear_enabled_main_warps();
    TLobby__data_805D5590 = 4;
    set_area__6TLobbyFPvi(lbl_80515BA0, 0, 0);
    set_flag_and_update__6TLobbyFv();
    mark_area_change_pending();
}

void TLobby__sub_80136FA0(s32 arg0, Ent_80136FA0 *arg1) {
    void *w = lbl_8043EFF8;
    s32 i;
    void *old = TLobby__data_805D55D0;
    if (old != 0) {
        queue_destruction__7TObjectFv(old);
        TLobby__data_805D55D0 = 0;
    }
    TLobby__data_805D55D0 = open_default__23TShopJudgmentItemWindowFi(w);
    for (i = 0; i < arg0; i++) {
        add_status_disp_entry__6TLobbyFPvii(TLobby__data_805D55D0, arg1[i].name, i);
    }
    calc_list_content_extent(TLobby__data_805D55D0);
    set_menu_mode_2__6TLobbyFv();
}

void open_ship_block_select_menu__6TLobbyFiPvPv(s32 arg0, Ent_8013703C *arg1, Ent_8013703C *arg2) {
    static void *tblA = lbl_8043F004;
    static void *tblB = lbl_8043F010;
    void *tbl;
    s32 cmp;
    s32 i;

    cmp = strncmp(arg1->name, lbl_8043F020, 5);
    if (cmp == 0) {
        tbl = tblB;
    } else {
        tbl = tblA;
    }
    if (TLobby__data_805D55D0 != 0) {
        ((void (*)(void *))queue_destruction__7TObjectFv)(TLobby__data_805D55D0);
        TLobby__data_805D55D0 = 0;
    }
    TLobby__data_805D55D0 = open_default__23TShopJudgmentItemWindowFi(tbl);
    for (i = 0; i < arg0; i++) {
        add_status_disp_entry__6TLobbyFPvii(TLobby__data_805D55D0, arg1[i].name, i);
    }
    calc_list_content_extent(TLobby__data_805D55D0);
    if (cmp == 0) {
        set_menu_mode_1__6TLobbyFv();
    } else {
        set_menu_mode_0__6TLobbyFv();
    }
    if (strncmp(arg2->name, lbl_8043F020, 5) != 0) {
        memset(TLobby__data_8050AAAC, 0, 0x11);
        strncpy(TLobby__data_8050AAAC, arg2->name, 0x10);
    }
}

}
