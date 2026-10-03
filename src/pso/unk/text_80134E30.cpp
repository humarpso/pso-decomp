#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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

#include <stddef.h>
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

struct Row_80135208 { u8 pad[8]; u32 ip; u8 pad2[20]; };

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

extern "C" {
int bswap_packet_header__6TLobbyFPv(void *);
M2C_UNK TLobby__sub_801E44D8(void *, void *);
void TLobby__sub_80135458(s32 arg0);
s32 TLobby__sub_8013A4A8(int, void *);
s32 free__11TOBoss4RockFUi(int);
u8 *alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
s32 TObjPlayer__sub_801B4CE4(void *, void *);
s32 TObjPlayer__sub_801B4FD8(void *);
s32 get_player_by_client_id(void *);
extern s32 lbl_805D53A0;
void TLobby__sub_80135598(s32 arg0);
s32 TLobby__sub_801A51C0(void *);
s32 DateToSeconds__FP9DateStampPi(void *, void *);
s32 getDateStamp__FP9DateStamp(void *);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_80135198_lbl_804A7008 lbl_804A7008;
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D5608;
u8 *TLobby__sub_80135198(u8 *arg0, s32 arg1);
M2C_UNK bswap_and_handle_packet__6TLobbyFii(void *, void *);
M2C_UNK TLobby__sub_8013A578(void *);
M2C_UNK memcpy(void *, void *, int);
extern RecoveredGlobal_80135974_lbl_805127F8 lbl_805127F8;
void TLobby__sub_80135974(s32 arg0);
M2C_UNK memcpy(void *, void *, int);
extern RecoveredGlobal_80135974_lbl_805127F8 lbl_805127F8;
extern s32 TLobby__data_805D5594;
extern s16 TLobby__data_805D5CE8;
void handle_6x6F_set_quest_flags_v2(s32 arg0);
extern s32 TLobby__data_805D53AC;
extern char lbl_8043EF04[];
extern char TLobby__data_8050AAE8[][16];
extern const char TLobby__data_805DB0B0[4];
s32 get_player_by_client_id(void *);
void TLobby__sub_8013A170(const char *fmt, ...);
char *strncpy(char *, const char *, u32);
void TLobby__sub_80136000(s32 idx, s32 v);
void set_ip_address__7TSocketFUl(void*, u32);
void TLobby__sub_8013A170(const char *fmt, ...);
VObj_18_80135208 *TPacket__ct(void*, s32);
void *__nw__7TObjectFUl(u32);
extern char lbl_8043EE30[];
extern Row_80135208 lbl_8050ABB8[];
extern s32 lbl_805D53A0;
extern s32 lbl_805D5E48;
void TLobby__sub_80135208(s32 arg0);
void __dl__FPv(void *);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void TLobby__sub_80103890(void *);
void TLobby__sub_8013A170(const char *fmt, ...);
s32 TLobby__sub_8013F810(void *, void *, s32, void *);
s32 free__11TOBoss4RockFUi(int);
u8 *alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
extern char lbl_8043EEA4[];
extern s32 TLobby__data_805D5594;
extern s16 TLobby__data_805D5CE8;
void handle_6x6D_sync_game_state(Pkt_8013574C *arg0);
void __dl__FPv(void *);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void TLobby__sub_8013A170(const char *fmt, ...);
s32 TLobby__sub_8013F810(void *, void *, s32, void *);
void TLobby__sub_8013A9F4(void *);
extern char lbl_8043EEC0[];
extern s32 TLobby__data_805D5594;
extern s16 TLobby__data_805D5CE8;
extern u32 *TLobby__data_805D6140;
extern u32 TLobby__data_805D6148;
void handle_6x6C_sync_game_state(Pkt_801357F8 *arg0);
void __dl__FPv(void *);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void TLobby__sub_8013A170(const char *fmt, ...);
s32 TLobby__sub_8013F810(void *, void *, s32, void *);
void bswap_6x6B__6TLobbyFPv(void *);
extern char lbl_8043EEDC[];
extern s32 TLobby__data_805D5594;
extern s16 TLobby__data_805D5CE8;
extern S12_801358B4 *TLobby__data_805D6144;
extern u32 TLobby__data_805D614C;
void handle_6x6B_sync_game_state(Pkt_801358B4 *arg0);
u16 obj_getField1c(void *);
void TLobby__sub_80135208(s32 arg0);
void TLobby__sub_8013A170(const char *fmt, ...);
void TLobby__sub_8013A348(void *);
s32 get_player_by_client_id(void *);
Plr_801354AC *create_remote_player_object(void *);
char *strncpy(char *, const char *, u32);
extern char lbl_8043EE7C[];
extern char TLobby__data_8050AAE8[][16];
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D5594;
extern s16 TLobby__data_805D5CE8;
void handle_6x70_sync_player_disp_and_inventory(Pkt_801354AC *arg0);
void __dl__FPv(void *);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void bswap_6x6E_sync_game_state__6TLobbyFPv(void *p);
s32 TLobby__sub_8013A4A8(int, void *);
s32 TLobby__sub_8013F99C(void *, void *, s32, void *);
s32 free__11TOBoss4RockFUi(int);
u8 *alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
u16 TLobby__sub_80208AD8(void *);
u16 TLobby__sub_8020BFC4(void *);
u16 copy_switch_table(void *);
void *memset(void *, int, u32);
void TLobby__sub_801359C4(s32 arg0);
void __dl__FPv(void *);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 TLobby__sub_801039BC(void *);
s32 TLobby__sub_8013A4A8(int, void *);
s32 TLobby__sub_8013F99C(void *, void *, s32, void *);
s32 free__11TOBoss4RockFUi(int);
u8 *alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
void *memset(void *, int, u32);
void TLobby__sub_80135AE0(s32 arg0);
void __dl__FPv(void *);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 TLobby__sub_8013A4A8(int, void *);
void TLobby__sub_8013A9F4(void *);
s32 TLobby__sub_8013F99C(void *, void *, s32, void *);
s32 free__11TOBoss4RockFUi(int);
u8 *alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
void *memset(void *, int, u32);
M2C_UNK memcpy(void *, void *, int);
extern u32 *TLobby__data_805D6140;
extern u32 TLobby__data_805D6148;
void TLobby__sub_80135BD0(s32 arg0);
void __dl__FPv(void *);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 TLobby__sub_8013A4A8(int, void *);
void bswap_6x6B__6TLobbyFPv(void *);
s32 TLobby__sub_8013F99C(void *, void *, s32, void *);
s32 free__11TOBoss4RockFUi(int);
u8 *alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
void *memset(void *, int, u32);
M2C_UNK memcpy(void *, void *, int);
extern S12_801358B4 *TLobby__data_805D6144;
extern u32 TLobby__data_805D614C;
void TLobby__sub_80135CD8(s32 arg0);
void copy_header_struct__6TLobbyFPvPv(void *, void *);
void __dt__18TPlyJoinLobbyEntryFv(void *, s32);
void TLobby__sub_8013A170(const char *fmt, ...);
void TLobby__sub_8013AA64(void *, void *);
s32 get_player_by_client_id(void *);
u8 *TObjPlayer__sub_801BDEF8(s32, s32, void *);
char *strncpy(char *, const char *, u32);
extern char lbl_8043EE58[];
extern char lbl_8043EF14[];
extern char TLobby__data_8043EF38[];
extern char TLobby__data_8050AAE8[][16];
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;
void TLobby__sub_80136080(s32 arg0, s32 arg1);
void init__23TAdSinglePlyChrSelectGCFv(void);
u8 *get_card_window__17TWindowSubComCardFUi(u32);
void *memset(void *, int, u32);
char *strncpy(char *, const char *, u32);
s32 open_hard_keyboard__6TLobbyFPv(void *);
void TLobby__sub_80077798(void *, void *);
char *get_card_window_field__6TLobbyFv(void);
void TLobby__sub_8007BC5C(void *);
s32 get_flag_bit0__6TLobbyFv(void);
char *get_card_window_area__6TLobbyFv(void);
void TLobby__sub_800703D0(void *, void *);
void *get_char_index__23TAdSinglePlyChrSelectGCFUi(u32);
void TProtocol__sub_801DC1E4(void *, void *, void *, void *, void *, void *, void *);
extern s32 lbl_805D53A0;
extern void *TLobby__data_805D5580;
void TLobby__sub_80134E30(void);
s32 queue_destruction__7TObjectFv(void *);
s32 TKeyBoardControl__sub_80132368(void *);
char *get_seq_phase__6TLobbyFPv(int);
s32 TLobby__sub_801A51C0(void *);
s32 TKeyBoardControl__sub_801A57D0();
s32 DateToSeconds__FP9DateStampPi(void *, void *);
s32 getDateStamp__FP9DateStamp(void *);
void set_field_1c__6TLobbyFPvf(void *, f32);
s32 TWindowCtrlMain__sub_8024CE58();
void complete_reveal__14TWindowMessageFPv(void *);
void send_and_handle__6TLobbyFPvii(void *, char *, int);
void *set_window_mode_4__6TLobbyFPvii(void *, void *, int);
void *get_window_layout_position(int);
int sprintf(char *, const char *, ...);
extern Pair_80134F9C lbl_8043EE28[];
extern u8 TKeyBoardControl__data_80506270[];
extern char lbl_8050ADB8[];
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D55A8;
extern s32 TLobby__data_805D5608;
extern const f32 lbl_805DB0A8;
void TLobby__sub_80134F9C(u8 *arg0);
}

extern "C" {

void TLobby__sub_80135FFC(void);

extern "C" {
typedef struct { s32 a; s32 b; } Pair_80135E7C;
typedef struct { u8 pad0[5]; u8 kind; u8 pad6[6]; u8 name[0x8C]; } Ent_80135E7C;
void TLobby__sub_80266E34(void *);
void add_list_entry__6TLobbyFPviii(void *, int, void *, int);
void *open_default__23TShopJudgmentItemWindowFi(void *);
extern Pair_80135E7C lbl_8043EE18[];
extern u8 lbl_8043EEF8[];
extern s32 TLobby__data_805D5594;
extern s32 TLobby__data_805D55A4;
extern void *TLobby__data_805D55CC;
extern void *TLobby__data_805D55D0;
}

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
void TLobby__sub_80134E30(void) {
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
    TLobby__sub_8007BC5C(b);
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
    TProtocol__sub_801DC1E4(TLobby__data_805D5580, get_char_index__23TAdSinglePlyChrSelectGCFUi(0xFFFF), &d, &a, b, e, c);
}

void TLobby__sub_80134F9C(u8 *arg0) {
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

void TLobby__sub_80135208(s32 arg0) {
    VObj_18_80135208 *o = (VObj_18_80135208 *)__nw__7TObjectFUl(0xE70);
    if (o != NULL) {
        o = TPacket__ct(o, lbl_805D5E48);
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

void TLobby__sub_80135458(s32 arg0) {
    Stack_80135458 stack;
    stack.sp8 = 0x71;
    stack.sp9 = 1;
    stack.spA = 0;
    bswap_packet_header__6TLobbyFPv(&stack.sp8);
    TLobby__sub_801E44D8((void *) (&stack.sp8), (void *) (arg0));
}

void handle_6x70_sync_player_disp_and_inventory(Pkt_801354AC *arg0) {
    Plr_801354AC *plr;
    Disp_801354AC *disp;
    Obj_801354AC *p;
    if (TLobby__data_805D5CE8 == 0 && (TLobby__data_805D5594 == 0xE || TLobby__data_805D5594 == 0xF)) {
        disp = &arg0->disp;
        TLobby__sub_8013A348(disp);
        if (disp->id != lbl_805D53A0) {
            p = (Obj_801354AC *)get_player_by_client_id((void *)disp->id);
            if (p != NULL) {
                delete p;
            }
            plr = create_remote_player_object(disp);
            strncpy(TLobby__data_8050AAE8[obj_getField1c(plr)], plr->m10(), 0x10);
            TLobby__sub_80135208(disp->id);
            TLobby__sub_8013A170(lbl_8043EE7C, obj_getField1c(plr));
        }
    }
}

void TLobby__sub_80135598(s32 arg0) {
    Stack_80135598 stack;
    u8 *temp_r3;
    TObjPlayer__sub_801B4FD8((void *) (&stack.sp8));
    temp_r3 = (u8 *)(alloc_buffer__11TOBoss4RockFPv(0x494));
    if (temp_r3 != NULL) {
        TObjPlayer__sub_801B4CE4((void *) (get_player_by_client_id((void *) (lbl_805D53A0))), (void *) (temp_r3 + 8));
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
typedef char RecoveredGlobal_8013561C_lbl_805127F8_size[sizeof(RecoveredGlobal_8013561C_lbl_805127F8) == 0x200 ? 1 : -1];
void handle_6x6F_set_quest_flags_v2(s32 arg0) {
    if (((s16) TLobby__data_805D5CE8 == 0) && (((s32) TLobby__data_805D5594 == 0xE) || ((s32) TLobby__data_805D5594 == 0xF))) {
        memcpy((void *) (&(*(RecoveredGlobal_8013561C_lbl_805127F8 *)&lbl_805127F8).value), (void *) (arg0 + 4), (int) (0x200));
    }
}
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
            TLobby__sub_80103890(buf);
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

void TLobby__sub_801359C4(s32 arg0) {
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
            hdr->f4 = TLobby__sub_80208AD8(&hdr->data[n]);
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

void TLobby__sub_80135AE0(s32 arg0) {
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
            n = TLobby__sub_801039BC(src);
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

void TLobby__sub_80135BD0(s32 arg0) {
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

void TLobby__sub_80135CD8(s32 arg0) {
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

void TLobby__sub_80135E7C(s32 arg0, Ent_80135E7C *arg1) {
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
    TLobby__sub_80266E34(TLobby__data_805D55D0);
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
void TLobby__sub_80136000(s32 idx, s32 v) {
    Obj_80136000 *p;
    TLobby__data_805D53AC = v;
    p = (Obj_80136000 *)get_player_by_client_id((void *)idx);
    if (p) {
        delete p;
        TLobby__sub_8013A170(lbl_8043EF04, idx);
    }
    strncpy(TLobby__data_8050AAE8[idx], TLobby__data_805DB0B0, 0x10);
}
void TLobby__sub_80136080(s32 arg0, s32 arg1) {
    Entry_80136080 e;
    Obj_80136080 *p;
    u8 *plr;
    TLobby__sub_8013AA64(&e, (void *)arg0);
    TLobby__data_805D53AC = arg1;
    if (e.client_id == lbl_805D53A0) {
        TLobby__sub_8013A170(lbl_8043EF14, e.client_id);
        __dt__18TPlyJoinLobbyEntryFv(&e, -1);
        return;
    }
    p = (Obj_80136080 *)get_player_by_client_id((void *)e.client_id);
    if (p != NULL) {
        delete p;
        TLobby__sub_8013A170(TLobby__data_8043EF38, e.client_id);
    }
    strncpy(TLobby__data_8050AAE8[e.client_id], e.name, 0x10);
    plr = TObjPlayer__sub_801BDEF8(e.client_id, 4, e.char_data);
    copy_header_struct__6TLobbyFPvPv(plr + 0xDAC, &e);
    ((Plr_80136080 *)plr)->m6();
    TLobby__sub_8013A170(lbl_8043EE58, e.client_id);
    __dt__18TPlyJoinLobbyEntryFv(&e, -1);
}

}
