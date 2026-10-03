#include "types.h"
#include "pso/player/TObjPlayer.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801EA274_TLobby__data_80512220 {
    u32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EA274_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80141860_lbl_8050C000 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_80141730_lbl_8050C028 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80141788_lbl_8050C000 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_80141788_lbl_8050C028 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801417B8_lbl_8050C000 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_801417B8_lbl_8050C028 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801417E8_lbl_8050C028 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8014175C_lbl_8050C000 {
    M2C_UNK value;
    u8 remaining[0x24];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_30 { u8 bytes[0x30]; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_20 { u8 bytes[0x20]; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_24 { u8 bytes[0x24]; };

struct G_801EA7E8 { u8 pad[0x13]; u8 f13; u8 pad14[0x18]; };

struct Ctx_801EA5FC { u8 pad[0x10]; u8 buf[0xFD]; };

struct Ctx_801EAA34 { u8 pad[0x10]; u8 buf[0xFD]; };

struct Ctx_801EAAB4 { u8 pad[0x10]; u8 buf[0xFF]; };

struct Card_801EA0F0 {
    u8 pad[0x21A8];
    u16 stats[7];
};

struct Spawn_801EA508 {
    u8 pad0[0xC];
    f32 x;
    f32 y;
    f32 z;
    s32 f18;
    s32 f1c;
    u8 pad20[4];
    f32 a;
    f32 b;
    u8 pad2c[4];
    s32 c;
    u8 pad34[0xC];
};

struct Spawn_801EACD8 {
    u8 pad0[0xC];
    f32 x;
    f32 y;
    f32 z;
    s32 f18;
    s32 f1c;
    u8 pad20[4];
    f32 a;
    f32 b;
    u8 pad2c[4];
    s32 c;
    u8 pad34[0xC];
};

struct VBase_18_801EB10C { char pad[0x18]; };

struct Card_801EB10C : VBase_18_801EB10C {
    virtual void m0(s32);
};

struct Tag_801EB10C {
    u8 pad0[8];
    s32 id;
    char name[0x10];
    u8 pad1c[4];
    char text[0x200];
};

struct VBase_18_801EBD40 { char pad[0x18]; };

struct Card_801EBD40 : VBase_18_801EBD40 {
    virtual void m0(s32);
};

struct Item_801EBF30 {
    u8 data[12];
    s32 id;
    u32 f10;
};

struct Vec_801ECFDC {
    f32 x, y, z;
};

struct Vec_801ED0CC {
    f32 x, y, z;
};

struct Spawn_801EA388 {
    u8 pad0[0xC];
    f32 x;
    f32 y;
    f32 z;
    u8 pad18[0xC];
    f32 a;
    u8 pad28[8];
    s32 c;
    s32 d;
    s32 e;
    u8 pad3c[4];
};

extern "C" {
int obj_isState2_324(TObjPlayer*);
void set_speed__10TObjPlayerFPvf(PlayerScaleState*, f32);
void quest_set_player_shrink_size(s32 player_variable, s32 size_variable);

extern s32 lbl_805D4C24;
void TLobby__sub_801EA240(s32 arg0);
s32 is_split_screen();
s32 get_state__6TLobbyFv();
s32 get_normalized_mode__6TLobbyFv();
void TLobby__sub_801EA690(s32 arg0);
M2C_UNK send_code50_packet__10TObjPlayerFi(int);
M2C_UNK send_code_49_1__10TObjPlayerFi();
void TLobby__sub_801EA7A0(s32 arg0);
s32 is_split_screen();
s32 check_ready_state__6TLobbyFv();
s32 check_ready_status__6TLobbyFv();
void TLobby__sub_801EA84C(s32 arg0);
void TLobby__sub_801EA9F4(s32 arg0, s32 arg1);
void TLobby__sub_801EAA14(s32 arg0, s32 arg1);
s32 is_split_screen();
s32 TLobby__sub_80070DCC();
s32 TLobby__sub_8029204C();
void TLobby__sub_801EB048(s32 arg0);
s32 is_split_screen();
M2C_UNK TLobby__sub_80070EE4(int);
M2C_UNK TLobby__sub_80292200(int);
void TLobby__sub_801EB0A0(s32 arg0);
void TLobby__sub_801EB0F8(s32 arg0);
s32 get_player_by_client_id(int, void *);
s32 set_flag_80000__6TLobbyFi(int);
s32 set_flag_40000__6TLobbyFPv(int);
s32 TLobby__sub_801F3314(int);
s32 set_flag_8000__6TLobbyFi(int);
s32 check_flag_24576__6TLobbyFPv(int);
s32 TLobby__sub_801F3384(int);
s32 TLobby__sub_801F33A8(int);
s32 TLobby__sub_801F33CC(int);
s32 TLobby__sub_801F33F0(int);
s32 test_flag_16__6TLobbyFPv(int);
s32 set_flag_4__6TLobbyFPv(int);
s32 TLobby__sub_801F345C();
void TLobby__sub_801EB25C(s32 arg0, s32 arg1);
s32 get_card_window__17TWindowSubComCardFUi(u32);
s32 strncmp(void *, void *, int);
extern int* TLobby__data_805D5E78;
extern M2C_UNK TLobby__data_805DC4A0;
void TLobby__sub_801EA1B4(s32 arg0);
s32 rand(void);
extern int* TLobby__data_805D5E78;
extern const f32 lbl_805DC4C8;
void TLobby__sub_801EA94C(s32 arg0, s32 arg1);
extern RecoveredGlobal_801EA274_TLobby__data_80512220 TLobby__data_80512220;
extern RecoveredGlobal_801EA274_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801EA274(void);
s32 TLobby__sub_8001DEA8(int);
extern RecoveredGlobal_801EA274_TLobby__data_80512220 TLobby__data_80512220;
s32 TLobby__sub_8001DEA8(int);
void TLobby__sub_801EACAC(void);
void broadcast__6TLobbyFPv(void *);
void TLobby__sub_801F3640(s32);
void TLobby__sub_801EAB34(s32 arg0);
void TLobby__sub_8001DE30(void *);
void swap_endian__6TLobbyFPv(void *);
void TLobby__sub_801EAB90(s32 arg0);
void copy_all_entries__6TLobbyFPv(void *);
void byteswap_packet__6TLobbyFPv(void *);
void TLobby__sub_801EABEC(s32 arg0);
M2C_UNK copy_data__6TLobbyFPv(void *);
M2C_UNK bswap__12player_statsFv(void *);
int get_indexed_offset__6TLobbyFi(int);
void TLobby__sub_801EAC48(int _w0);
extern RecoveredGlobal_801EA274_TLobby__data_80512220 TLobby__data_80512220;
extern RecoveredGlobal_801EA274_TLobby__data_80512360 TLobby__data_80512360;
extern s32 lbl_80449B10[];
void TLobby__sub_801EA7E8(void);
Ctx_801EA5FC *get_global_state__23TAdSinglePlyChrSelectGCFv();
s32 move_data__6TLobbyFv(void *, void *, int);
extern int* TLobby__data_805D5E78;
extern u32 TLobby__data_805D5EC4;
void TLobby__sub_801EA5FC(u8 arg0);
Ctx_801EA5FC *get_global_state__23TAdSinglePlyChrSelectGCFv();
void *memcpy(void *, const void *, u32);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EAA34(u8 a0, u8 a1);
Ctx_801EA5FC *get_global_state__23TAdSinglePlyChrSelectGCFv();
void *memcpy(void *, const void *, u32);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EAAB4(u8 a0, u8 a1);
void TOMineTrap__sub_80171368(f32);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EB7C8(s32 i);
s32 get_card_window__17TWindowSubComCardFUi(u32);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EA0F0(u8 i);
void TLobby__sub_80207F30(Spawn_801EA508 *);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EA508(u8 i);
void TOChatSensor__sub_8015ACE4(void *, s32);
void * TOChatSensor__create(Spawn_801EA508 *);
void TLobby__sub_80207F30(Spawn_801EA508 *);
extern RecoveredGlobal_801EA274_TLobby__data_80512220 TLobby__data_80512220;
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EACD8(void);
s32 init_guild_card_tag__6TLobbyFi(s32 arg0);
void try_close__6TLobbyFPv(Tag_801EB10C *);
void TLobby__sub_802288B8(Card_801EB10C *, char *);
Card_801EB10C *construct__6TLobbyFPvPvPvPv(void *, void *, void *, void *);
void TLobby__sub_80228B54(char *);
void *__nw__7TObjectFUl(u32);
M2C_UNK strncpy(void *, int, int);
extern RecoveredGlobal_801EA274_TLobby__data_80512220 TLobby__data_80512220;
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EB10C(void);
s32 is_split_screen(void);
void add_entry__6TLobbyFiii(void *, void *, s32);
void TLobby__sub_80292268(void *, void *, s32);
void TLobby__sub_802288B8(Card_801EB10C *, char *);
Card_801EB10C *construct__6TLobbyFPvPvPvPv(void *, void *, void *, void *);
void TLobby__sub_80228B54(char *);
void *__nw__7TObjectFUl(u32);
M2C_UNK strncpy(void *, int, int);
extern RecoveredGlobal_801EA274_TLobby__data_80512220 TLobby__data_80512220;
void TLobby__sub_801EBD40(void);
s32 is_split_screen(void);
s32 TLobby__sub_800710D8(Item_801EBF30 *);
s32 init__9TItemDataFv(void *);
s32 TLobby__sub_8011AF58(u16);
s32 TLobby__sub_802924B4(Item_801EBF30 *, u16);
extern s32 lbl_805D53A0;
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EBF30(u8 arg0, u8 arg1);
s32 get_field_3e4__10TObjPlayerFPv(void *);
f32 xyz_distance_squared(void *, void *);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EC15C(u8 arg0, u8 arg1);
Vec_801ECFDC *TObjPlayer__sub_801C6FDC(void *);
void copy_position__6TLobbyFPv(void *, Vec_801ECFDC *);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801ECFDC(u8 arg0);
Vec_801ECFDC *TObjPlayer__sub_801C6FDC(void *);
void copy_position__6TLobbyFPv(void *, Vec_801ECFDC *);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801ED0CC(u8 arg0);
s32 is_split_screen(void);
s32 TLobby__sub_80292270(s32, s32);
s32 TLobby__sub_8007119C(s32);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EC050(u8 arg0, u8 arg1);
void TLobby__sub_80207F30(Spawn_801EA508 *);
int get_indexed_offset__6TLobbyFi(int);
void *create__17TOSymbolchatColliFPv(void *arg0);
extern int* TLobby__data_805D5E78;
extern s32 lbl_8050DB70[];
void TLobby__sub_801EA388(u8 i);
}

extern "C" {

void TLobby__sub_801EA8E8(void);
void apply_split_screen__6TLobbyFv(void);
void draw_or_send__6TLobbyFv(void);
void get_or_create_handle__6TLobbyFv(void);
void handle_split_screen__6TLobbyFv(void);
s32 init_guild_card_tag__6TLobbyFi(s32 arg0);
void set_handler__6TLobbyFi(int a0);
M2C_UNK TLobby__sub_80070BE8(M2C_UNK);
M2C_UNK TLobby__sub_80070C50();
M2C_UNK TLobby__sub_801036CC();
M2C_UNK clear_floor_event_flags();
M2C_UNK TLobby__sub_8020DBCC();
M2C_UNK TLobby__sub_80291EAC(M2C_UNK);
M2C_UNK TLobby__sub_80291FC0();
M2C_UNK TRaderMapCore__sub_801F9540();
M2C_UNK init_switch_table();
M2C_UNK __ct__16TPlyGuildCardTagFv(s32);
M2C_UNK clear_buffer__12TQuestThreadFPv(u32);
M2C_UNK draw_if_ready2__6TLobbyFv();
M2C_UNK draw_if_ready__6TLobbyFv();
M2C_UNK fn_801F57B4(s32);
int get_game_mode__6TLobbyFv(void);
u32 get_serial_access__22TQuestVmDownLoadServerFPv();
M2C_UNK init_sub_objects__6TLobbyFv();
s32 is_split_screen();
u32 poll_serial_access__22TQuestVmDownLoadServerFPv();

    extern int* TLobby__data_805D5E78;
void set_handler__6TLobbyFi(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = get_game_mode__6TLobbyFv(); }

extern u32 TLobby__data_805D5EC4;

void TLobby__sub_801EA0F0(u8 i) {
    Card_801EA0F0 *card = (Card_801EA0F0 *)get_card_window__17TWindowSubComCardFUi(0xFFFF);
    if (card != NULL) {
        (*(int * *)&TLobby__data_805D5E78)[i++] = card->stats[0];
        (*(int * *)&TLobby__data_805D5E78)[i++] = card->stats[1];
        (*(int * *)&TLobby__data_805D5E78)[i++] = card->stats[2];
        (*(int * *)&TLobby__data_805D5E78)[i++] = card->stats[3];
        (*(int * *)&TLobby__data_805D5E78)[i++] = card->stats[4];
        (*(int * *)&TLobby__data_805D5E78)[i++] = card->stats[5];
        (*(int * *)&TLobby__data_805D5E78)[i] = card->stats[6];
    }
}

void TLobby__sub_801EA1B4(s32 arg0) {
    u32 temp_r3;
    temp_r3 = get_card_window__17TWindowSubComCardFUi(0xFFFFU);
    if (temp_r3 != 0U) {
        if (strncmp((void *) (temp_r3 + 0x2254), (void *) (&TLobby__data_805DC4A0), (int) (0x20)) == 0) {
            M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
            return;
        }
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}

void TLobby__sub_801EA240(s32 arg0) {
    if ((s32) lbl_805D4C24 != 0) {
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}

typedef char RecoveredGlobal_801EA274_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EA274_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801EA274_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EA274_TLobby__data_80512360) == 0x2C ? 1 : -1];
void TLobby__sub_801EA274(void) {
    if ((u32) TLobby__data_80512220.value <= 0x1DU) {
        M2C_FIELD(&TLobby__data_80512360.value, s16 *, 0x28) = (s16) TLobby__data_80512220.value;
    }
}

void quest_set_player_shrink_size(s32 player_variable, s32 size_variable) {
    TObjPlayer* player = ((TObjPlayer*)get_player_by_client_id((int)((*(s32* *)&TLobby__data_805D5E78)[(u8)player_variable]), (void *)(size_variable)));
    if (player && !obj_isState2_324(player)) {
        s32 whole = (*(s32* *)&TLobby__data_805D5E78)[(u8)size_variable++];
        s32 numerator = (*(s32* *)&TLobby__data_805D5E78)[(u8)size_variable++];
        s32 denominator = (*(s32* *)&TLobby__data_805D5E78)[(u8)size_variable];
        set_speed__10TObjPlayerFPvf(&player->scale_state,
            denominator > 0 ? (f32)whole + (f32)numerator / (f32)denominator : (f32)whole);
    }
}

struct Spawn_801EA508;
void TLobby__sub_801EA388(u8 i) {
    Spawn_801EA388 s;
    TLobby__sub_80207F30((Spawn_801EA508 *)&s);
    s.x = TLobby__data_805D5E78[i++];
    s.y = TLobby__data_805D5E78[i++];
    s.z = TLobby__data_805D5E78[i++];
    s.a = TLobby__data_805D5E78[i++];
    s.c = TLobby__data_805D5E78[i++];
    s.d = TLobby__data_805D5E78[i++];
    s.e = TLobby__data_805D5E78[i++];
    lbl_8050DB70[0] = get_indexed_offset__6TLobbyFi((u16)TLobby__data_805D5E78[i++]);
    lbl_8050DB70[1] = get_indexed_offset__6TLobbyFi((u16)TLobby__data_805D5E78[i++]);
    lbl_8050DB70[2] = get_indexed_offset__6TLobbyFi((u16)TLobby__data_805D5E78[i]);
    create__17TOSymbolchatColliFPv(&s);
    lbl_8050DB70[1] = 0;
    lbl_8050DB70[0] = 0;
    lbl_8050DB70[2] = 0;
}

void TLobby__sub_801EA508(u8 i) {
    Spawn_801EA508 s;
    TLobby__sub_80207F30(&s);
    s.f18 = 0;
    s.f1c = 1;
    s.x = (*(int * *)&TLobby__data_805D5E78)[i++];
    s.y = (*(int * *)&TLobby__data_805D5E78)[i++];
    s.z = (*(int * *)&TLobby__data_805D5E78)[i++];
    s.a = (*(int * *)&TLobby__data_805D5E78)[i++];
    s.c = (*(int * *)&TLobby__data_805D5E78)[i];
    TOChatSensor__create(&s);
}

void TLobby__sub_801EA5FC(u8 arg0) {
    s32 idx = (*(int * *)&TLobby__data_805D5E78)[arg0];
    Ctx_801EA5FC *w = get_global_state__23TAdSinglePlyChrSelectGCFv();
    if (w != NULL && idx >= 0 && idx < 0xFD) {
        move_data__6TLobbyFv(&w->buf[idx], &TLobby__data_805D5EC4, 4);
    }
}

void get_or_create_handle__6TLobbyFv(void) {
    u32 temp_r3;

    temp_r3 = get_serial_access__22TQuestVmDownLoadServerFPv();
    TLobby__data_805D5EC4 = temp_r3;
    if (temp_r3 == 0U) {
        TLobby__data_805D5EC4 = poll_serial_access__22TQuestVmDownLoadServerFPv();
    }
}

void TLobby__sub_801EA690(s32 arg0) {
    if (is_split_screen() == 1) {
        if (get_normalized_mode__6TLobbyFv() != 0) {
            M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
            return;
        }
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
        return;
    }
    if (get_state__6TLobbyFv() != 0) {
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}

void handle_split_screen__6TLobbyFv(void) {
    if (is_split_screen() == 1) {
        TLobby__sub_80291EAC(0);
        return;
    }
    TLobby__sub_80070BE8(0);
}

void apply_split_screen__6TLobbyFv(void) {
    if (is_split_screen() == 1) {
        TLobby__sub_80291EAC(1);
        return;
    }
    TLobby__sub_80070BE8(1);
}

void TLobby__sub_801EA7A0(s32 arg0) {
    s32 temp_r3;
    temp_r3 = get_player_by_client_id((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) ((*(s32 *)&TLobby__data_805D5E78)));
    if (temp_r3 != 0) {
        send_code_49_1__10TObjPlayerFi();
        send_code50_packet__10TObjPlayerFi((int) (temp_r3));
    }
}

void TLobby__sub_801EA7E8(void) {
    u32 v = ((u32 *)&TLobby__data_80512220)[0];
    if (v < 2) {
        (*(G_801EA7E8 *)&TLobby__data_80512360).f13 = lbl_80449B10[v];
    }
}

void draw_or_send__6TLobbyFv(void) {
    if (is_split_screen() == 1) {
        draw_if_ready2__6TLobbyFv();
        return;
    }
    draw_if_ready__6TLobbyFv();
}

extern u32 lbl_805D5EE8;
extern s32 tl_00;

void TLobby__sub_801EA84C(s32 arg0) {
    s32 var_r3;
    if (is_split_screen() == 1) {
        var_r3 = check_ready_status__6TLobbyFv();
    } else {
        var_r3 = check_ready_state__6TLobbyFv();
    }
    switch (var_r3) {
    case -1:
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
        return;
    case 0:
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
        return;
    case 1:
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 2;
        return;
    }
}

void TLobby__sub_801EA8E8(void) {
    TLobby__sub_801036CC();
    if ((u32) lbl_805D5EE8 != 0U) {
        clear_buffer__12TQuestThreadFPv(lbl_805D5EE8);
    }
    fn_801F57B4(tl_00);
    init_sub_objects__6TLobbyFv();
    TLobby__sub_8020DBCC();
    clear_floor_event_flags();
    init_switch_table();
    TRaderMapCore__sub_801F9540();
    if (is_split_screen() == 1) {
        TLobby__sub_80291FC0();
        return;
    }
    TLobby__sub_80070C50();
}

void TLobby__sub_801EA94C(s32 arg0, s32 arg1) {
  s32 temp_r31;
  s32 var_r4;
  s32 temp_r30;
  temp_r31 = *((M2C_UNK *) (((s8 *) (*(s32 *)&TLobby__data_805D5E78)) + ((arg0 * 4) & 0x3FC)));
  temp_r30 = *((M2C_UNK *) (((s8 *) (*(s32 *)&TLobby__data_805D5E78)) + (((arg0 + 1) * 4) & 0x3FC)));
  var_r4 = (s32) (((f32) temp_r30) * (lbl_805DC4C8 * ((f32) rand())));
  if (var_r4 < temp_r31)
  {
    var_r4 = temp_r31;
  }
  *((M2C_UNK *) (((s8 *) (*(s32 *)&TLobby__data_805D5E78)) + ((arg1 * 4) & 0x3FC))) = var_r4;
}

void TLobby__sub_801EA9F4(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) = (s32) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) >> M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC));
}

void TLobby__sub_801EAA14(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, temp_r5) << M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC));
}

typedef char RecoveredGlobal_80141860_lbl_8050C000_size[sizeof(RecoveredGlobal_80141860_lbl_8050C000) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_80141730_lbl_8050C028_size[sizeof(RecoveredGlobal_80141730_lbl_8050C028) == 0x18 ? 1 : -1];

void TLobby__sub_801EAA34(u8 a0, u8 a1) {
    s32 v;
    (*(int * *)&TLobby__data_805D5E78)[a1] = 0;
    Ctx_801EAA34 *w = ((Ctx_801EAA34 *)get_global_state__23TAdSinglePlyChrSelectGCFv());
    if (w != NULL) {
        s32 i = (*(int * *)&TLobby__data_805D5E78)[a0];
        if (i >= 0 && i < 0xFD) {
            memcpy(&v, &w->buf[i], 4);
            (*(int * *)&TLobby__data_805D5E78)[a1] = v;
        }
    }
}

void TLobby__sub_801EAAB4(u8 a0, u8 a1) {
    s16 v;
    (*(int * *)&TLobby__data_805D5E78)[a1] = 0;
    Ctx_801EAAB4 *w = ((Ctx_801EAAB4 *)get_global_state__23TAdSinglePlyChrSelectGCFv());
    if (w != NULL) {
        s32 i = (*(int * *)&TLobby__data_805D5E78)[a0];
        if (i >= 0 && i < 0xFF) {
            memcpy(&v, &w->buf[i], 2);
            (*(int * *)&TLobby__data_805D5E78)[a1] = v;
        }
    }
}

void TLobby__sub_801EAB34(s32 arg0) {
    M2CCopy_30 sp8;
    u32 temp_r3;
    temp_r3 = get_indexed_offset__6TLobbyFi(arg0);
    if (temp_r3 != 0U) {
        sp8 = *(const M2CCopy_30 *)(temp_r3 - 4 + 4);
        TLobby__sub_801F3640((s32) &sp8);
        broadcast__6TLobbyFPv(&sp8);
    }
}

void TLobby__sub_801EAB90(s32 arg0) {
    M2CCopy_20 sp8;
    u32 temp_r3;
    temp_r3 = get_indexed_offset__6TLobbyFi(arg0);
    if (temp_r3 != 0U) {
        sp8 = *(const M2CCopy_20 *)(temp_r3 - 4 + 4);
        swap_endian__6TLobbyFPv(&sp8);
        TLobby__sub_8001DE30(&sp8);
    }
}

void TLobby__sub_801EABEC(s32 arg0) {
    M2CCopy_30 sp8;
    u32 temp_r3;
    temp_r3 = get_indexed_offset__6TLobbyFi(arg0);
    if (temp_r3 != 0U) {
        sp8 = *(const M2CCopy_30 *)(temp_r3 - 4 + 4);
        byteswap_packet__6TLobbyFPv(&sp8);
        copy_all_entries__6TLobbyFPv(&sp8);
    }
}

void TLobby__sub_801EAC48(int _w0) {
    struct CopyStack_801EAC48 { u8 bytes[0x24]; };
    CopyStack_801EAC48 copy_storage_801EAC48;
    s32 temp_r4;
    u32 temp_r3;
    temp_r3 = ((u32)get_indexed_offset__6TLobbyFi((int)(_w0)));
    if (temp_r3 != 0U) {
        temp_r4 = temp_r3 - 4;
        *(M2CCopy_24 *)(copy_storage_801EAC48.bytes) = *(const M2CCopy_24 *)(temp_r4 + 4);
        bswap__12player_statsFv((void *) ((copy_storage_801EAC48.bytes)));
        copy_data__6TLobbyFPv((void *) ((copy_storage_801EAC48.bytes)));
    }
}

void TLobby__sub_801EACAC(void) {
    TLobby__sub_8001DEA8((int) (M2C_FIELD(&(*(RecoveredGlobal_80141730_lbl_8050C028 *)&TLobby__data_80512220).value, s32 *, 0x0)));
}
typedef char RecoveredGlobal_80141788_lbl_8050C000_size[sizeof(RecoveredGlobal_80141788_lbl_8050C000) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_80141788_lbl_8050C028_size[sizeof(RecoveredGlobal_80141788_lbl_8050C028) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8014175C_lbl_8050C000_size[sizeof(RecoveredGlobal_8014175C_lbl_8050C000) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_801417B8_lbl_8050C000_size[sizeof(RecoveredGlobal_801417B8_lbl_8050C000) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_801417B8_lbl_8050C028_size[sizeof(RecoveredGlobal_801417B8_lbl_8050C028) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_801417E8_lbl_8050C028_size[sizeof(RecoveredGlobal_801417E8_lbl_8050C028) == 0x18 ? 1 : -1];

void TLobby__sub_801EACD8(void) {
    Spawn_801EACD8 s;
    u8 i = TLobby__data_80512220.value;
    s32 arg = *(s32 *)&TLobby__data_80512220.remaining[0];
    void *sensor;
    TLobby__sub_80207F30((Spawn_801EA508 *)(&s));
    s.x = (*(int * *)&TLobby__data_805D5E78)[i++];
    s.y = (*(int * *)&TLobby__data_805D5E78)[i++];
    s.z = (*(int * *)&TLobby__data_805D5E78)[i++];
    s.a = (*(int * *)&TLobby__data_805D5E78)[i++];
    s.c = (*(int * *)&TLobby__data_805D5E78)[i];
    sensor = TOChatSensor__create((Spawn_801EA508 *)(&s));
    if (sensor != NULL) {
        TOChatSensor__sub_8015ACE4(sensor, arg);
    }
}

void TLobby__sub_801EB048(s32 arg0) {
    if (is_split_screen() == 1) {
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = TLobby__sub_8029204C();
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = TLobby__sub_80070DCC();
}

void TLobby__sub_801EB0A0(s32 arg0) {
    if (is_split_screen() == 1) {
        TLobby__sub_80292200((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))));
        return;
    }
    TLobby__sub_80070EE4((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))));
}

void TLobby__sub_801EB0F8(s32 arg0) {
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 3;
}

void TLobby__sub_801EB10C(void) {
    Tag_801EB10C tag;
    char buf[0x400];
    Card_801EB10C *card;
    u8 i = TLobby__data_80512220.value;
    char *src = *(char **)&TLobby__data_80512220.remaining[0];
    init_guild_card_tag__6TLobbyFi((s32)&tag);
    card = (Card_801EB10C *)__nw__7TObjectFUl(0x10A8);
    if (card != NULL) {
        card = construct__6TLobbyFPvPvPvPv(card, 0, 0, 0);
    }
    strncpy(buf, (int)src, 0x3FF);
    TLobby__sub_80228B54(buf);
    TLobby__sub_802288B8(card, buf);
    if (*(s32 *)((u8 *)card + 0x109C) > 2) {
        if (card != NULL) {
            card->m0(1);
        }
    } else {
        tag.id = (*(int * *)&TLobby__data_805D5E78)[i];
        strncpy(tag.name, (int)((u8 *)card + 0x1C), 0xF);
        tag.name[0xF] = 0;
        strncpy(tag.text, (int)((u8 *)card + 0x3C), 0x1FF);
        tag.text[0x1FF] = 0;
        try_close__6TLobbyFPv(&tag);
        if (card != NULL) {
            card->m0(1);
        }
    }
}

s32 init_guild_card_tag__6TLobbyFi(s32 arg0) {
    __ct__16TPlyGuildCardTagFv(arg0 + 4);
    return arg0;
}
void TLobby__sub_801EB25C(s32 arg0, s32 arg1) {
    s32 temp_r3;
    temp_r3 = get_player_by_client_id((int)((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)))), (void *)(arg1));
    if (temp_r3 != 0) {
        if (TLobby__sub_801F345C() != 0) {
            M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 1;
            return;
        }
        if (set_flag_4__6TLobbyFPv((int) (temp_r3)) != 0) {
            M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 2;
            return;
        }
        if (test_flag_16__6TLobbyFPv((int) (temp_r3)) != 0) {
            M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 3;
            return;
        }
        if (TLobby__sub_801F33F0((int) (temp_r3)) != 0) {
            M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 4;
            return;
        }
        if (TLobby__sub_801F33CC((int) (temp_r3)) != 0) {
            M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 5;
            return;
        }
        if (TLobby__sub_801F33A8((int) (temp_r3)) != 0) {
            M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 6;
            return;
        }
        if (TLobby__sub_801F3384((int) (temp_r3)) != 0) {
            M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 7;
            return;
        }
        if (check_flag_24576__6TLobbyFPv((int) (temp_r3)) != 0) {
            M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 8;
            return;
        }
        if (set_flag_8000__6TLobbyFi((int) (temp_r3)) != 0) {
            M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 9;
            return;
        }
        if (TLobby__sub_801F3314((int) (temp_r3)) != 0) {
            M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 0xA;
            return;
        }
        if (set_flag_40000__6TLobbyFPv((int) (temp_r3)) != 0) {
            M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 0xB;
            return;
        }
        if (set_flag_80000__6TLobbyFi((int) (temp_r3)) != 0) {
            M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 0xC;
            return;
        }
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 0;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 0;
}

}

#define get_player_by_client_id(a, b) ((u32 (*)(int, int))get_player_by_client_id)(a, b)
#define get_indexed_offset__6TLobbyFi(a) ((u32 (*)(void *))get_indexed_offset__6TLobbyFi)(a)
#define get_global_state__23TAdSinglePlyChrSelectGCFv() ((s32 (*)(void))get_global_state__23TAdSinglePlyChrSelectGCFv)()
#define get_serial_access__22TQuestVmDownLoadServerFPv() ((s32 (*)(void))get_serial_access__22TQuestVmDownLoadServerFPv)()
#define poll_serial_access__22TQuestVmDownLoadServerFPv() ((s32 (*)(void))poll_serial_access__22TQuestVmDownLoadServerFPv)()

struct RecoveredGlobal_801EB6B8_lbl_80512350 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct VBase_18_26c590 { char pad[0x18]; };

struct VObj_18_26c590 : VBase_18_26c590 {
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
    virtual s32 m10();
};

struct RecoveredGlobal_801EB73C_lbl_80512340 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801EC64C_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EC64C_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801EC6F0_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EC90C_lbl_80449AFC {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_801EC90C_TLobby__data_80512220 {
    u32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EC90C_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801EC93C_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EC93C_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801EC954_TLobby__data_80512220 {
    u32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EC954_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801EC9CC_TLobby__data_80512220 {
    u32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EC9CC_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801EC9F8_TLobby__data_80512220 {
    u32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EC9F8_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801ECA1C_TLobby__data_80512220 {
    u32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801ECA1C_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801ECF84_lbl_8050D3E0 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

struct RecoveredGlobal_801EC984_TLobby__data_80512220 {
    u32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EC984_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801EB5AC_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EC43C_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct E_801EB484 { s32 a; s32 b; };

struct Pkt_801ED300 {
    u8 cmd;
    u8 size;
    u16 a;
    u16 b;
    u16 pad;
    u16 c;
    u8 d;
    u8 e;
};

struct Pkt_801ED360 {
    u8 cmd;
    u8 size;
    u16 a;
    u16 b;
    u16 pad;
    u16 c;
    u8 d;
    u8 e;
};

struct E_801EB4C4 { s16 a; s16 b; s32 c; };

struct Ctx_801EB508 { u8 pad[0x10]; u8 buf[0xFD]; };

struct Glob_801EB508 { u32 f0; s32 f4; u8 rest[0x18]; };

struct Ctx_801EB658 { u8 pad[0x10]; u8 buf[0xFF]; };

struct Glob_801EB658 { u32 f0; s32 f4; u8 rest[0x18]; };

struct Item_801EC720 { s8 a; s8 b; s8 c; u8 pad[0x1D]; };

extern "C" {
M2C_UNK create_instance__12TItemDropSubFi(int, void *);
void TLobby__sub_801EBF04(s32 arg0);
M2C_UNK TLobby__sub_80071064(int);
M2C_UNK TLobby__sub_80292604(int);
void TLobby__sub_801ECF2C(s32 arg0);
u8 *get_state__23TAdSinglePlyChrSelectGCFv();
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EB94C(s32 arg0);
s32 is_boss_phase_reached__6TLobbyFv();
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EBE14(s32 arg0);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EBB88(s32 arg0, s32 arg1);
s32 is_current_room__10TObjRoomIdFPv();
M2C_UNK draw_small_label__15TFontSmallLobbyFi(int);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EBCA0(s32 arg0);
s32 is_current_room__10TObjRoomIdFPv();
M2C_UNK TLobby__sub_801B1254(int);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EBCF0(s32 arg0);
M2C_UNK request_player_size_restore(void *);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801ED1BC(s32 arg0);

M2C_UNK request_player_shrink(void *);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801ED20C(s32 arg0);
M2C_UNK TLobby__sub_801F3694(void *);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EBC28(s32 arg0);
M2C_UNK TFontSmallLobby__sub_801C013C(void *);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EBC64(s32 arg0);
M2C_UNK TObjPlayer__sub_801AF904();
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EB914(s32 arg0);
void set_floor__6TLobbyFPvs(void *, s16);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801ED3C4(s32 arg0);
int TLobby__sub_80142944(void *);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EB604(s32 arg0, s32 arg1);
s16 get_kill_count__10TObjPlayerFPv(void *);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801ED400(s32 arg0, s32 arg1);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EB85C(s32 arg0, s32 arg1);
s32 select_download_type__6TLobbyFi(int);
M2C_UNK strncpy(void *, int, int);
extern RecoveredGlobal_801EB6B8_lbl_80512350 lbl_80512350;
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EB6B8(s32 arg0);
M2C_UNK strncpy(void *, int, int);
extern RecoveredGlobal_801EB73C_lbl_80512340 lbl_80512340;
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EB73C(s32 arg0);
extern RecoveredGlobal_801EA274_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801EC64C(void);
s32 open_menu__13TItemMenuCtrlFUi(int);
s32 open_menu__13TItemMenuCtrlFUi(int);
void TLobby__sub_801EC694(void);
M2C_UNK handle_player_event__6TLobbyFii(int, int);
void TLobby__sub_801EC6F0(void);
s32 set_lobby_id__6TLobbyFi(int);
s32 set_lobby_id__6TLobbyFi(int);
void TLobby__sub_801EC8B4(void);
s32 set_global_805D3614__6TLobbyFi(int);
s32 set_global_805D3614__6TLobbyFi(int);
void TLobby__sub_801EC8E0(void);
extern RecoveredGlobal_801EC90C_lbl_80449AFC lbl_80449AFC;
extern RecoveredGlobal_801EA274_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801EC90C(void);
extern RecoveredGlobal_801EA274_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801EC93C(void);
extern RecoveredGlobal_801EA274_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801EC954(void);
extern RecoveredGlobal_801EA274_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801EC9CC(void);
extern RecoveredGlobal_801EA274_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801EC9F8(void);
extern RecoveredGlobal_801EA274_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801ECA1C(void);
s32 copy_player_visual_record(void *, int);
extern RecoveredGlobal_801ECF84_lbl_8050D3E0 lbl_8050D3E0;
void TLobby__sub_801ECF84(s32 arg0);
int get_max_level__10TObjPlayerFv(void);
extern RecoveredGlobal_801EA274_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801EC984(void);
u32 TLobby__sub_800F7DAC(s32, s32);
M2C_UNK fn_80197FD0(void *, int);
extern s32 lbl_805D49B0;
void TLobby__sub_801EB5AC(void);
void TLobby__sub_800714B0(void *, s32);
void TLobby__sub_80292574(void *, s32);
s32 is_split_screen(void);
void TLobby__sub_801EC43C(void);
extern RecoveredGlobal_801EA274_TLobby__data_80512360 TLobby__data_80512360;
extern RecoveredGlobal_801EC90C_lbl_80449AFC lbl_80449B08;
void TLobby__sub_801EC664(void);
u8 is_floor_switch_set(int, int);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801ED25C(s32 arg0);
extern s16 lbl_80511CB0[];
void TLobby__sub_801EC5E4(void);
extern s16 lbl_80511CB0[];
void TLobby__sub_801EC624(void);
extern E_801EB484 TLobby__data_80511C80[];
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EB484(u8 src, u8 dst);
u8 is_current_floor_switch_set(int);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801ED2B0(s32 arg0);
void finalize_and_send_60__6TLobbyFPv(void* p);
void* init_6x05_switch_changed__6TLobbyFPv(void* p);
void TLobby__sub_801ED300(void);
void finalize_and_send_60__6TLobbyFPv(void* p);
void* init_6x05_switch_changed__6TLobbyFPv(void* p);
void TLobby__sub_801ED360(void);
extern E_801EB484 TLobby__data_80511C80[];
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EB4C4(u8 a0, u8 a1);
void TLobby__sub_801EB508(void);
void TLobby__sub_801EB658(void);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EB8C0(u8 arg0);
s32 forward_to_player__6TLobbyFiPv(int, void *);
s32 init__9TItemDataFv(void *);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EC720(u8 i);
void mark_area_change_pending();
s32 get_dest_area__17TObjAreaWarpQuestFPv(void *);
void send_6x21_inter_level_warp(int, void *);
s32 get_floor_map_terrain(int);
void set_area__6TLobbyFPvi(void *, int, int);
void TNpcPlayer__sub_8034E7A0();
extern u8 lbl_80515BA0[];
extern s32 lbl_805D53A0;
extern int* TLobby__data_805D5E78;
void TLobby__sub_801ED468(s32 a, s32 b);
}

extern "C" {

void TLobby__sub_801EB46C(void);
void TLobby__sub_801EB478(void);
int TLobby__sub_801EB588(void* p);
void TLobby__sub_801EB5A8(void);
int TLobby__sub_801EBE6C(void);
int TLobby__sub_801EC7A0(void);
int TLobby__sub_801EC7C4(void);
int TLobby__sub_801EC834(void* p);
int TLobby__sub_801EC854(void* p);
int TLobby__sub_801EC874(void* p);
int TLobby__sub_801ECFBC(void* p);
void dispatch_first_player__6TLobbyFv(void);
int enable_mine_trap__6TLobbyFv(void);
int forward_801F36D8__6TLobbyFPv(void* p);
int forward_802272B4__6TLobbyFPv(void* p);
void init_menu_state__6TLobbyFi(int a0);
void init_state__6TLobbyFv(void);
void init_window__6TLobbyFv(void);
void update_main_phase__6TLobbyFv(int _w0, int _w1);
M2C_UNK TLobby__sub_8006F848(s32);
int TLobby__sub_801F36BC(void*);
int TLobby__sub_801F36D8(void*);
int TLobby__sub_802272B4(void*);
int TLobby__sub_8022733C(void*);
int TNpcPlayer__sub_8014DC30(void*);
int clear_quest_state__6TLobbyFv(void*);
int create__16TObjItemOKWindowFPv(void*);
int create__17TObjItemNameEntryFPv(void*);
int create__18TObjItemNameSelectFPv(void*);
M2C_UNK handle_main_phase__6TLobbyFi();
int reset_quest_counter__6TLobbyFv(void*);
int set_instance__10TOMineTrapFi(void*);
int set_trap_count__10TOMineTrapFi(void*);

    extern int TLobby__data_805D5DC0;
void TLobby__sub_801EB46C(void) { TLobby__data_805D5DC0 = 0; }

    extern int TLobby__data_805D5DC0;
void TLobby__sub_801EB478(void) { TLobby__data_805D5DC0 = 1; }

void TLobby__sub_801EB484(u8 src, u8 dst) {
    E_801EB484 e = TLobby__data_80511C80[(*(int * *)&TLobby__data_805D5E78)[src]];
    (*(int * *)&TLobby__data_805D5E78)[dst] = e.b;
}

void TLobby__sub_801EB4C4(u8 a0, u8 a1) {
    E_801EB4C4 e = ((E_801EB4C4 *)&TLobby__data_80511C80)[(*(int * *)&TLobby__data_805D5E78)[a0]];
    (*(int * *)&TLobby__data_805D5E78)[a1] = e.b;
}

void TLobby__sub_801EB508(void) {
    u32 i = (*(Glob_801EB508 *)&TLobby__data_80512220).f0;
    s32 v = (*(Glob_801EB508 *)&TLobby__data_80512220).f4;
    Ctx_801EB508 *w = ((Ctx_801EB508 *)get_global_state__23TAdSinglePlyChrSelectGCFv());
    if (w != NULL && i < 0xFD) {
        move_data__6TLobbyFv(&w->buf[i], &v, 4);
    }
}

int forward_802272B4__6TLobbyFPv(void* p) { return TLobby__sub_802272B4(p); }
int TLobby__sub_801EB588(void* p) { return TLobby__sub_8022733C(p); }
void TLobby__sub_801EB5A8(void) {  }

typedef char RecoveredGlobal_801EB5AC_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EB5AC_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801EB5AC(void) {
    s32 temp_r31;
    u32 temp_r3;
    temp_r31 = M2C_FIELD(&(*(RecoveredGlobal_801EB5AC_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 0);
    temp_r3 = ((int)get_indexed_offset__6TLobbyFi((void *)((s32) (u16) M2C_FIELD(&(*(RecoveredGlobal_801EB5AC_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 4))));
    if (temp_r3 != 0U) {
        TLobby__sub_800F7DAC((s32) temp_r3, lbl_805D49B0);
        fn_80197FD0((void *) (lbl_805D49B0), (int) (temp_r31));
    }
}

void TLobby__sub_801EB604(s32 arg0, s32 arg1) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(((s32)get_player_by_client_id((int)((int)((u32) (u16) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)))), (int)((int)(arg1)))));
    if (temp_r3 != NULL) {
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = TLobby__sub_80142944(temp_r3);
    }
}

typedef char RecoveredGlobal_801EB6B8_lbl_80512350_size[sizeof(RecoveredGlobal_801EB6B8_lbl_80512350) == 0x10 ? 1 : -1];

void TLobby__sub_801EB658(void) {
    u32 i = (*(Glob_801EB658 *)&TLobby__data_80512220).f0;
    s16 v = (*(Glob_801EB658 *)&TLobby__data_80512220).f4;
    Ctx_801EB658 *w = ((Ctx_801EB658 *)get_global_state__23TAdSinglePlyChrSelectGCFv());
    if (w != NULL && i < 0xFF) {
        move_data__6TLobbyFv(&w->buf[i], &v, 2);
    }
}

void TLobby__sub_801EB6B8(s32 arg0) {
    s32 temp_r31;
    u8 *temp_r3;
    temp_r31 = (arg0 * 4) & 0x3FC;
    temp_r3 = (u8 *)(((u8 *)get_player_by_client_id((int)(M2C_FIELD(((*(s32 *)&TLobby__data_805D5E78) + temp_r31), s32 *, 0)), (int)((*(s32 *)&TLobby__data_805D5E78)))));
    if (temp_r3 != NULL) {
        strncpy((void *) (&lbl_80512350.value), (int) (select_download_type__6TLobbyFi((int) (M2C_FIELD(temp_r3, s32 *, 0x890)))), (int) (0xF));
        M2C_FIELD(&lbl_80512350.value, s8 *, 0xF) = 0;
        M2C_FIELD(((*(s32 *)&TLobby__data_805D5E78) + temp_r31), s32 *, 0) = 1;
        return;
    }
    M2C_FIELD(((*(s32 *)&TLobby__data_805D5E78) + temp_r31), s32 *, 0) = 0;
}

typedef char RecoveredGlobal_801EB73C_lbl_80512340_size[sizeof(RecoveredGlobal_801EB73C_lbl_80512340) == 0x10 ? 1 : -1];
void TLobby__sub_801EB73C(s32 arg0) {
    s32 temp_r31;
    u8 *temp_r3;
    temp_r31 = (arg0 * 4) & 0x3FC;
    temp_r3 = (u8 *)(((u8 *)get_player_by_client_id((int)(M2C_FIELD(((*(s32 *)&TLobby__data_805D5E78) + temp_r31), s32 *, 0)), (int)((*(s32 *)&TLobby__data_805D5E78)))));
    if (temp_r3 != NULL) {
        strncpy((void *)((void *) (&lbl_80512340.value)), (int)((void *) (((VObj_18_26c590 *)(temp_r3))->m10())), (int)((int) (0xF)));
        M2C_FIELD(&lbl_80512340.value, s8 *, 0xF) = 0;
        M2C_FIELD(((*(s32 *)&TLobby__data_805D5E78) + temp_r31), s32 *, 0) = 1;
        return;
    }
    M2C_FIELD(((*(s32 *)&TLobby__data_805D5E78) + temp_r31), s32 *, 0) = 0;
}

void TLobby__sub_801EB7C8(s32 i) {
    s32 j = i + 1;
    TOMineTrap__sub_80171368((f32)(*(s32 * *)&TLobby__data_805D5E78)[(u8)i] + (f32)(*(s32 * *)&TLobby__data_805D5E78)[(u8)j] / (f32)(*(s32 * *)&TLobby__data_805D5E78)[(u8)++j]);
}

void TLobby__sub_801EB85C(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r30;
    s32 var_r31;
    s32 var_r4;
    u32 temp_r3;
    u8 *var_r3;
    var_r30 = arg0;
    var_r31 = arg1;
    temp_r3 = get_global_state__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != 0U) {
        var_r4 = (*(s32 *)&TLobby__data_805D5E78);
        temp_r0 = M2C_FIELD(var_r4, M2C_UNK *, ((var_r30 * 4) & 0x3FC));
        if ((temp_r0 >= 0) && (temp_r0 < 0x100)) {
            var_r3 = (u8 *)(temp_r3 + temp_r0);
            var_r3 = (u8 *)((void *) M2C_FIELD(var_r3, u8 *, 0x10));
            M2C_FIELD(var_r4, M2C_UNK *, ((var_r31 * 4) & 0x3FC)) = (long) (var_r3);
        }
    }
}

void TLobby__sub_801EB8C0(u8 arg0) {
    (*(int * *)&TLobby__data_805D5E78)[arg0] = get_serial_access__22TQuestVmDownLoadServerFPv();
    if ((*(int * *)&TLobby__data_805D5E78)[arg0] == 0) {
        (*(int * *)&TLobby__data_805D5E78)[arg0] = poll_serial_access__22TQuestVmDownLoadServerFPv();
    }
}

void TLobby__sub_801EB914(s32 arg0) {
    if (get_player_by_client_id((int)((int)((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int) ((*(s32 *)&TLobby__data_805D5E78))))) != 0U) {
        TObjPlayer__sub_801AF904();
    }
}

void TLobby__sub_801EB94C(s32 arg0) {
    u8 *temp_r3;
    temp_r3 = get_state__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != NULL) {
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = M2C_FIELD(temp_r3, s32 *, 0xE284);
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}

void TLobby__sub_801EBB88(s32 arg0, s32 arg1) {
    s32 temp_r3_2;
    u8 *temp_r3;
    temp_r3 = ((u8 *)get_player_by_client_id((int)((int)((int)(M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int)(arg1)))));
    if (temp_r3 != NULL) {
        temp_r3_2 = M2C_FIELD(temp_r3, s32 *, 0x890);
        if (temp_r3_2 & 1) {
            M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 0;
            return;
        }
        if (temp_r3_2 & 2) {
            M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 1;
            return;
        }
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 2;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 2;
}

void TLobby__sub_801EBC28(s32 arg0) {
    u32 temp_r3;
    temp_r3 = get_player_by_client_id((int)((int)((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int) ((*(s32 *)&TLobby__data_805D5E78)))));
    if (temp_r3 != 0U) {
        TLobby__sub_801F3694((void *) (temp_r3 + 0x428));
    }
}

void TLobby__sub_801EBC64(s32 arg0) {
    u32 temp_r3;
    temp_r3 = get_player_by_client_id((int)((int)((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int) ((*(s32 *)&TLobby__data_805D5E78)))));
    if (temp_r3 != 0U) {
        TFontSmallLobby__sub_801C013C((void *) (temp_r3 + 0x428));
    }
}

void TLobby__sub_801EBCA0(s32 arg0) {
    s32 temp_r3;
    temp_r3 = ((s32)get_player_by_client_id((int)((int)((int)((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)))))), (int)((int)((int)((int) ((*(s32 *)&TLobby__data_805D5E78)))))));
    if ((temp_r3 != 0) && (is_current_room__10TObjRoomIdFPv() != 0)) {
        draw_small_label__15TFontSmallLobbyFi((int) (temp_r3));
    }
}

void TLobby__sub_801EBCF0(s32 arg0) {
    s32 temp_r3;
    temp_r3 = ((s32)get_player_by_client_id((int)((int)((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int) ((*(s32 *)&TLobby__data_805D5E78))))));
    if ((temp_r3 != 0) && (is_current_room__10TObjRoomIdFPv() != 0)) {
        TLobby__sub_801B1254((int) (temp_r3));
    }
}

void TLobby__sub_801EBD40(void) {
    char buf[0x200];
    Card_801EBD40 *card;
    s32 arg = TLobby__data_80512220.value;
    char *src = *(char **)&TLobby__data_80512220.remaining[0];
    card = (Card_801EBD40 *)__nw__7TObjectFUl(0x10A8);
    if (card != NULL) {
        card = ((Card_801EBD40 *)construct__6TLobbyFPvPvPvPv(card, 0, 0, 0));
    }
    strncpy(buf, (int)src, 0x1FF);
    TLobby__sub_80228B54(buf);
    TLobby__sub_802288B8((Card_801EB10C *)(card), (char *)(buf));
    if (*(s32 *)((u8 *)card + 0x109C) == 2) {
        if (is_split_screen() == 1) {
            TLobby__sub_80292268((u8 *)card + 0x1C, (u8 *)card + 0x3C, arg);
        } else {
            add_entry__6TLobbyFiii((u8 *)card + 0x1C, (u8 *)card + 0x3C, arg);
        }
    }
    if (card != NULL) {
        card->m0(1);
    }
}

void TLobby__sub_801EBE14(s32 arg0) {
    if (is_boss_phase_reached__6TLobbyFv() != 0) {
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}

int TLobby__sub_801EBE6C(void) { return set_trap_count__10TOMineTrapFi((void*)(0)); }
int enable_mine_trap__6TLobbyFv(void) { return set_trap_count__10TOMineTrapFi((void*)(1)); }

    extern int* TLobby__data_805D5E78;
    extern unsigned char TLobby__data_805D5E88;
    extern int TLobby__data_805D5E98;
    extern int TLobby__data_805D5EB8;
    extern int tl_01;
void init_menu_state__6TLobbyFi(int a0) { TLobby__data_805D5EB8 = create__16TObjItemOKWindowFPv((void*)(tl_01)); TLobby__data_805D5E78[(unsigned char)(a0)] = 0; TLobby__data_805D5E88 = a0; TLobby__data_805D5E98 = 11; }

    extern int TLobby__data_805D5E98;
    extern int TLobby__data_805D5EB4;
    extern int tl_01;

void TLobby__sub_801EBF04(s32 arg0) {
    create_instance__12TItemDropSubFi((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) ((*(s32 *)&TLobby__data_805D5E78)));
}

void TLobby__sub_801EBF30(u8 arg0, u8 arg1) {
    Item_801EBF30 item;
    init__9TItemDataFv((void *)(&item));
    item.data[0] = (*(int * *)&TLobby__data_805D5E78)[(u8)arg0++];
    item.data[1] = (*(int * *)&TLobby__data_805D5E78)[(u8)arg0++];
    item.data[2] = (*(int * *)&TLobby__data_805D5E78)[(u8)arg0++];
    item.data[3] = (*(int * *)&TLobby__data_805D5E78)[(u8)arg0++];
    item.data[4] = (*(int * *)&TLobby__data_805D5E78)[(u8)arg0++];
    item.data[5] = (*(int * *)&TLobby__data_805D5E78)[(u8)arg0];
    item.id = TLobby__sub_8011AF58(lbl_805D53A0);
    if (is_split_screen() == 1) {
        if (TLobby__sub_802924B4(&item, 0) != 0) {
            (*(int * *)&TLobby__data_805D5E78)[arg1] = 1;
        } else {
            (*(int * *)&TLobby__data_805D5E78)[arg1] = 0;
        }
    } else {
        if (TLobby__sub_800710D8(&item) != 0) {
            (*(int * *)&TLobby__data_805D5E78)[arg1] = 1;
        } else {
            (*(int * *)&TLobby__data_805D5E78)[arg1] = 0;
        }
    }
}

s32 (get_player_by_client_id)(int, void *);

void TLobby__sub_801EC050(u8 arg0, u8 arg1) {
    s32 r;
    if (is_split_screen() == 1) {
        r = TLobby__sub_80292270((*(int * *)&TLobby__data_805D5E78)[arg0], 0);
    } else {
        r = TLobby__sub_8007119C((*(int * *)&TLobby__data_805D5E78)[arg0]);
    }
    switch (r) {
    case 2:
        (*(int * *)&TLobby__data_805D5E78)[arg1] = 2;
        break;
    case 1:
        (*(int * *)&TLobby__data_805D5E78)[arg1] = 1;
        break;
    case 0:
        (*(int * *)&TLobby__data_805D5E78)[arg1] = 0;
        break;
    case -1:
        (*(int * *)&TLobby__data_805D5E78)[arg1] = 3;
        break;
    case -2:
        (*(int * *)&TLobby__data_805D5E78)[arg1] = 4;
        break;
    case -3:
        (*(int * *)&TLobby__data_805D5E78)[arg1] = 5;
        break;
    case -4:
    default:
        (*(int * *)&TLobby__data_805D5E78)[arg1] = 6;
        break;
    }
}

void TLobby__sub_801EC15C(u8 arg0, u8 arg1) {
    s32 idx;
    f32 range;
    u8 *self;
    u8 *other;
    s32 field;
    s32 i;
    idx = (*(int * *)&TLobby__data_805D5E78)[arg0++];
    range = (*(int * *)&TLobby__data_805D5E78)[arg0];
    (*(int * *)&TLobby__data_805D5E78)[arg1] = 0;
    self = (u8 *)((s32 (*)(int))get_player_by_client_id)(idx);
    if (self != NULL) {
        field = get_field_3e4__10TObjPlayerFPv(self);
        for (i = 0; i < 12; i++) {
            if (i != idx) {
                other = (u8 *)((s32 (*)(int))get_player_by_client_id)(i);
                if (other != NULL && field == get_field_3e4__10TObjPlayerFPv(other) &&
                    xyz_distance_squared(self + 0x38, other + 0x38) < range * range) {
                    (*(int * *)&TLobby__data_805D5E78)[arg1]++;
                }
            }
        }
    }
}

void init_window__6TLobbyFv(void) { TLobby__data_805D5EB4 = create__18TObjItemNameSelectFPv((void*)(tl_01)); TLobby__data_805D5E98 = 10; }

    extern int TLobby__data_805D5E98;
    extern int TLobby__data_805D5EB0;
    extern int tl_01;
void init_state__6TLobbyFv(void) { TLobby__data_805D5EB0 = create__17TObjItemNameEntryFPv((void*)(tl_01)); TLobby__data_805D5E98 = 9; }

extern s32 lbl_805D53A0;

typedef char RecoveredGlobal_801EC64C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC64C_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801EC64C_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EC64C_TLobby__data_80512360) == 0x2C ? 1 : -1];

typedef char RecoveredGlobal_801EC43C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC43C_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801EC43C(void) {
    s32 temp_r31;
    u8 *temp_r30;
    temp_r31 = M2C_FIELD(&(*(RecoveredGlobal_801EC43C_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 0);
    temp_r30 = (u8 *)(M2C_FIELD(&(*(RecoveredGlobal_801EC43C_TLobby__data_80512220 *)&TLobby__data_80512220).value, u8 **, 4));
    if (is_split_screen() == 1) {
        TLobby__sub_80292574(temp_r30, temp_r31);
        return;
    }
    TLobby__sub_800714B0(temp_r30, temp_r31);
}

s32 activate_d04_slot__10TObjPlayerFPv();
s16 get_mag_item_data(s32);
s16 get_mag_level(s32);
s16 get_mag_item_percent(s32);
s16 get_mag_item_stat_percent();
void TLobby__sub_801EC494(s32 i);

void TLobby__sub_801EC494(s32 i) {
    s32 r;
    if (((u32 (*)(void *))get_player_by_client_id)((void *)lbl_805D53A0) != 0) {
        r = activate_d04_slot__10TObjPlayerFPv();
        if (r != 0) {
            TLobby__data_805D5E78[(u8)i++] = get_mag_item_stat_percent();
            TLobby__data_805D5E78[(u8)i++] = get_mag_item_percent(r);
            TLobby__data_805D5E78[(u8)i++] = get_mag_level(r);
            TLobby__data_805D5E78[(u8)i] = get_mag_item_data(r);
        }
    }
}

void TLobby__sub_801EC5E4(void) {
    s32 i;
    s32 v = ((s32 *)&TLobby__data_80512220)[0];
    for (i = 0; i < 8; i++) {
        if (lbl_80511CB0[i] == 0) {
            lbl_80511CB0[i] = v;
            return;
        }
    }
}

void TLobby__sub_801EC624(void) {
    s32 i;
    for (i = 0; i < 8; i++) {
        lbl_80511CB0[i] = 0;
    }
}

void TLobby__sub_801EC64C(void) {
    M2C_FIELD(&TLobby__data_80512360.value, s8 *, 0x12) = (s8) (*(RecoveredGlobal_801EC64C_TLobby__data_80512220 *)&TLobby__data_80512220).value;
}

typedef char RecoveredGlobal_80141860_lbl_8050C000_size[sizeof(RecoveredGlobal_80141860_lbl_8050C000) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_80141730_lbl_8050C028_size[sizeof(RecoveredGlobal_80141730_lbl_8050C028) == 0x18 ? 1 : -1];

void TLobby__sub_801EC664(void) {
    if ((u32) (*(RecoveredGlobal_801EC90C_TLobby__data_80512220 *)&TLobby__data_80512220).value <= 0x1U) {
        M2C_FIELD(&(*(RecoveredGlobal_801EC90C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x11) = (s8) M2C_FIELD(((u8 *)(&lbl_80449B08.value) + ((*(RecoveredGlobal_801EC90C_TLobby__data_80512220 *)&TLobby__data_80512220).value * 4)), s32 *, 0);
    }
}

void TLobby__sub_801EC694(void) {
    open_menu__13TItemMenuCtrlFUi((int) (M2C_FIELD(&(*(RecoveredGlobal_80141730_lbl_8050C028 *)&TLobby__data_80512220).value, s32 *, 0x0)));
}
typedef char RecoveredGlobal_80141788_lbl_8050C000_size[sizeof(RecoveredGlobal_80141788_lbl_8050C000) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_80141788_lbl_8050C028_size[sizeof(RecoveredGlobal_80141788_lbl_8050C028) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8014175C_lbl_8050C000_size[sizeof(RecoveredGlobal_8014175C_lbl_8050C000) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_801417B8_lbl_8050C000_size[sizeof(RecoveredGlobal_801417B8_lbl_8050C000) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_801417B8_lbl_8050C028_size[sizeof(RecoveredGlobal_801417B8_lbl_8050C028) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_801417E8_lbl_8050C028_size[sizeof(RecoveredGlobal_801417E8_lbl_8050C028) == 0x18 ? 1 : -1];

void update_main_phase__6TLobbyFv(int _w0, int _w1) {
    if (get_player_by_client_id((int)((int)((int)(lbl_805D53A0))), (int)((int)((int)(_w1)))) != 0U) {
        handle_main_phase__6TLobbyFi();
    }
}

typedef char RecoveredGlobal_801EC6F0_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC6F0_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801EC6F0(void) {
    handle_player_event__6TLobbyFii((int) ((u16) M2C_FIELD(&(*(RecoveredGlobal_801EC6F0_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 0)), (int) (M2C_FIELD(&(*(RecoveredGlobal_801EC6F0_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 4)));
}

void TLobby__sub_801EC720(u8 i) {
    Item_801EC720 item;
    u16 id = (*(int * *)&TLobby__data_805D5E78)[i++];
    init__9TItemDataFv(&item);
    item.a = (*(int * *)&TLobby__data_805D5E78)[i++];
    item.b = (*(int * *)&TLobby__data_805D5E78)[i++];
    item.c = (*(int * *)&TLobby__data_805D5E78)[i++];
    forward_to_player__6TLobbyFiPv(id, &item);
}

int TLobby__sub_801EC7A0(void) { return set_instance__10TOMineTrapFi((void*)(0)); }
int TLobby__sub_801EC7C4(void) { return set_instance__10TOMineTrapFi((void*)(1)); }

void dispatch_first_player__6TLobbyFv(void) {
    s32 temp_r31;

    temp_r31 = ((s32 *)&TLobby__data_80512220)[0];
    if (is_split_screen() == 1) {
        TLobby__sub_8006F848(temp_r31);
        return;
    }
    TLobby__sub_8006F848(temp_r31);
}

int TLobby__sub_801EC834(void* p) { return clear_quest_state__6TLobbyFv(p); }
int TLobby__sub_801EC854(void* p) { return TLobby__sub_801F36BC(p); }
int TLobby__sub_801EC874(void* p) { return reset_quest_counter__6TLobbyFv(p); }
int forward_801F36D8__6TLobbyFPv(void* p) { return TLobby__sub_801F36D8(p); }

void TLobby__sub_801EC8B4(void) {
    set_lobby_id__6TLobbyFi((int) (M2C_FIELD(&(*(RecoveredGlobal_80141730_lbl_8050C028 *)&TLobby__data_80512220).value, s32 *, 0x0)));
}

void TLobby__sub_801EC8E0(void) {
    set_global_805D3614__6TLobbyFi((int) (M2C_FIELD(&(*(RecoveredGlobal_80141730_lbl_8050C028 *)&TLobby__data_80512220).value, s32 *, 0x0)));
}

typedef char RecoveredGlobal_801EC90C_lbl_80449AFC_size[sizeof(RecoveredGlobal_801EC90C_lbl_80449AFC) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_801EC90C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC90C_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801EC90C_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EC90C_TLobby__data_80512360) == 0x2C ? 1 : -1];
void TLobby__sub_801EC90C(void) {
    if ((u32) (*(RecoveredGlobal_801EC90C_TLobby__data_80512220 *)&TLobby__data_80512220).value <= 2U) {
        M2C_FIELD(&(*(RecoveredGlobal_801EC90C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0xB) = (s8) M2C_FIELD(((u8 *)(&lbl_80449AFC.value) + ((*(RecoveredGlobal_801EC90C_TLobby__data_80512220 *)&TLobby__data_80512220).value * 4)), s32 *, 0);
    }
}

typedef char RecoveredGlobal_801EC93C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC93C_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801EC93C_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EC93C_TLobby__data_80512360) == 0x2C ? 1 : -1];
void TLobby__sub_801EC93C(void) {
    M2C_FIELD(&(*(RecoveredGlobal_801EC93C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0xC) = (s8) (*(RecoveredGlobal_801EC93C_TLobby__data_80512220 *)&TLobby__data_80512220).value;
}

typedef char RecoveredGlobal_801EC954_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC954_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801EC954_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EC954_TLobby__data_80512360) == 0x2C ? 1 : -1];
void TLobby__sub_801EC954(void) {
    u32 var_r4;
    var_r4 = (*(RecoveredGlobal_801EC954_TLobby__data_80512220 *)&TLobby__data_80512220).value;
    if (var_r4 > 0x278D0U) {
        var_r4 = 0U;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EC954_TLobby__data_80512360 *)&TLobby__data_80512360).value, u32 *, 0x24) = var_r4;
}

typedef char RecoveredGlobal_801EC9CC_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC9CC_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801EC9CC_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EC9CC_TLobby__data_80512360) == 0x2C ? 1 : -1];

typedef char RecoveredGlobal_801EC984_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC984_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801EC984_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EC984_TLobby__data_80512360) == 0x2C ? 1 : -1];
void TLobby__sub_801EC984(void) {
    u32 var_r31;
    var_r31 = (*(RecoveredGlobal_801EC984_TLobby__data_80512220 *)&TLobby__data_80512220).value;
    if (var_r31 > get_max_level__10TObjPlayerFv()) {
        var_r31 = 0U;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EC984_TLobby__data_80512360 *)&TLobby__data_80512360).value, u32 *, 0x20) = var_r31;
}

void TLobby__sub_801EC9CC(void) {
    u32 var_r0;
    var_r0 = (*(RecoveredGlobal_801EC9CC_TLobby__data_80512220 *)&TLobby__data_80512220).value;
    if ((var_r0 != 0xFFU) && (var_r0 > 0x1DU)) {
        var_r0 = 0U;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EC9CC_TLobby__data_80512360 *)&TLobby__data_80512360).value, u32 *, 0x1C) = var_r0;
}

typedef char RecoveredGlobal_801EC9F8_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC9F8_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801EC9F8_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EC9F8_TLobby__data_80512360) == 0x2C ? 1 : -1];
void TLobby__sub_801EC9F8(void) {
    u32 var_r0;
    var_r0 = (*(RecoveredGlobal_801EC9F8_TLobby__data_80512220 *)&TLobby__data_80512220).value;
    if (var_r0 > 0x63U) {
        var_r0 = 0U;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EC9F8_TLobby__data_80512360 *)&TLobby__data_80512360).value, u32 *, 0x18) = var_r0;
}

typedef char RecoveredGlobal_801ECA1C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801ECA1C_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801ECA1C_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801ECA1C_TLobby__data_80512360) == 0x2C ? 1 : -1];
void TLobby__sub_801ECA1C(void) {
    if ((u32) (*(RecoveredGlobal_801ECA1C_TLobby__data_80512220 *)&TLobby__data_80512220).value <= 1U) {
        M2C_FIELD(&(*(RecoveredGlobal_801ECA1C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0xA) = (s8) (*(RecoveredGlobal_801ECA1C_TLobby__data_80512220 *)&TLobby__data_80512220).value;
    }
}

extern f32 lbl_805D3544;
void TLobby__sub_801ECC14(s32 a) {
    s32 b = a + 1;
    f32 v = (f32)TLobby__data_805D5E78[(u8)a];
    v += (f32)TLobby__data_805D5E78[(u8)b] / (f32)TLobby__data_805D5E78[(u8)++b];
    lbl_805D3544 = v;
}

extern f32 lbl_805D3540;
void TLobby__sub_801ECC98(s32 a) {
    s32 b = a + 1;
    f32 v = (f32)TLobby__data_805D5E78[(u8)a];
    v += (f32)TLobby__data_805D5E78[(u8)b] / (f32)TLobby__data_805D5E78[(u8)++b];
    lbl_805D3540 = v;
}

extern f32 lbl_805D5DC4;
void TLobby__sub_801ECD1C(s32 a) {
    s32 b = a + 1;
    f32 v = (f32)TLobby__data_805D5E78[(u8)a];
    v += (f32)TLobby__data_805D5E78[(u8)b] / (f32)TLobby__data_805D5E78[(u8)++b];
    lbl_805D5DC4 = v;
}

extern f32 lbl_805D3548;
void TLobby__sub_801ECDA0(s32 a) {
    s32 b = a + 1;
    f32 v = (f32)TLobby__data_805D5E78[(u8)a];
    v += (f32)TLobby__data_805D5E78[(u8)b] / (f32)TLobby__data_805D5E78[(u8)++b];
    lbl_805D3548 = v;
}

extern f32 lbl_805D353C;
void TLobby__sub_801ECE24(s32 a) {
    s32 b = a + 1;
    f32 v = (f32)TLobby__data_805D5E78[(u8)a];
    v += (f32)TLobby__data_805D5E78[(u8)b] / (f32)TLobby__data_805D5E78[(u8)++b];
    lbl_805D353C = v;
}

extern f32 lbl_805D3538;
void TLobby__sub_801ECEA8(s32 a) {
    s32 b = a + 1;
    f32 v = (f32)TLobby__data_805D5E78[(u8)a];
    v += (f32)TLobby__data_805D5E78[(u8)b] / (f32)TLobby__data_805D5E78[(u8)++b];
    lbl_805D3538 = v;
}

void TLobby__sub_801ECF2C(s32 arg0) {
    if (is_split_screen() == 1) {
        TLobby__sub_80292604((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))));
        return;
    }
    TLobby__sub_80071064((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))));
}

typedef char RecoveredGlobal_801ECF84_lbl_8050D3E0_size[sizeof(RecoveredGlobal_801ECF84_lbl_8050D3E0) == 0x50 ? 1 : -1];
void TLobby__sub_801ECF84(s32 arg0) {
    u32 temp_r3;
    temp_r3 = get_indexed_offset__6TLobbyFi((void *) (arg0));
    if (temp_r3 != 0U) {
        copy_player_visual_record((void *) (&lbl_8050D3E0.value), (int) (temp_r3));
    }
}

int TLobby__sub_801ECFBC(void* p) { return TNpcPlayer__sub_8014DC30(p); }

s32 (get_player_by_client_id)(int, void *);
void TLobby__sub_801ECFDC(u8 arg0) {
    Vec_801ECFDC pos;
    u8 *player;
    Vec_801ECFDC *cur;
    player = (u8 *)((s32 (*)(int))get_player_by_client_id)((*(int * *)&TLobby__data_805D5E78)[arg0++]);
    if (player != NULL) {
        cur = TObjPlayer__sub_801C6FDC(player + 0x5D4);
        if (cur != NULL) {
            pos.x = cur->x + (f32)(*(int * *)&TLobby__data_805D5E78)[arg0++];
            pos.y = cur->y + (f32)(*(int * *)&TLobby__data_805D5E78)[arg0++];
            pos.z = cur->z + (f32)(*(int * *)&TLobby__data_805D5E78)[arg0];
            copy_position__6TLobbyFPv(player + 0x5D4, &pos);
        }
    }
}

s32 (get_player_by_client_id)(int, void *);
void TLobby__sub_801ED0CC(u8 arg0) {
    Vec_801ED0CC pos;
    u8 *player;
    Vec_801ED0CC *cur;
    player = (u8 *)((s32 (*)(int))get_player_by_client_id)((*(int * *)&TLobby__data_805D5E78)[arg0++]);
    if (player != NULL) {
        cur = ((Vec_801ED0CC *)TObjPlayer__sub_801C6FDC(player + 0x5C8));
        if (cur != NULL) {
            pos.x = cur->x + (f32)(*(int * *)&TLobby__data_805D5E78)[arg0++];
            pos.y = cur->y + (f32)(*(int * *)&TLobby__data_805D5E78)[arg0++];
            pos.z = cur->z + (f32)(*(int * *)&TLobby__data_805D5E78)[arg0];
            copy_position__6TLobbyFPv((void *)(player + 0x5C8), (Vec_801ECFDC *)(&pos));
        }
    }
}

void TLobby__sub_801ED1BC(s32 arg0) {
    s32 temp_r3;
    temp_r3 = ((s32)get_player_by_client_id((int)((int)((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int) ((*(s32 *)&TLobby__data_805D5E78))))));
    if ((temp_r3 != 0) && (((s32 (*)(void))obj_isState2_324)() == 0)) {
        request_player_size_restore((void *) (temp_r3 + 0x5B0));
    }
}
void TLobby__sub_801ED20C(s32 arg0) {
    s32 temp_r3;
    temp_r3 = ((s32)get_player_by_client_id((int)((int)((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int) ((*(s32 *)&TLobby__data_805D5E78))))));
    if ((temp_r3 != 0) && (((s32 (*)(void))obj_isState2_324)() == 0)) {
        request_player_shrink((void *) (temp_r3 + 0x5B0));
    }
}

#pragma push
#pragma opt_common_subs on
#pragma opt_propagation on
#pragma opt_dead_assignments off
void TLobby__sub_801ED25C(s32 arg0) {
    s32 var_r31;
    s32 var_r4;
    u8 *var_r3;
    var_r31 = (arg0 * 4) & 0x3FC;
    var_r4 = (*(s32 *)&TLobby__data_805D5E78);
    var_r3 = (u8 *)(var_r4 + var_r31);
    var_r3 = (u8 *)(M2C_FIELD(var_r3, u8 **, 4));
    var_r4 = (s32) (s16) M2C_FIELD(var_r4, M2C_UNK *, var_r31);
    var_r3 = (u8 *)((void *) (u16) var_r3);
    var_r4 = (s32) is_floor_switch_set((int) (var_r3), (int) (var_r4));
    var_r3 = (u8 *)((*(s32 *)&TLobby__data_805D5E78) + var_r31);
    M2C_FIELD(var_r3, s32 *, 8) = var_r4;
}
#pragma pop

void TLobby__sub_801ED2B0(s32 arg0) {
    TLobby__data_805D5E78[(u8)arg0 + 1] = is_current_floor_switch_set((u16)TLobby__data_805D5E78[(u8)arg0]);
}

void TLobby__sub_801ED300(void) {
    Pkt_801ED300 pkt;
    s32 x = ((s32 *)&TLobby__data_80512220)[0];
    s32 y = ((s32 *)&TLobby__data_80512220)[1];
    init_6x05_switch_changed__6TLobbyFPv(&pkt);
    pkt.a = 0xFFFF;
    pkt.b = 0;
    pkt.c = y;
    pkt.d = x;
    pkt.e = 0;
    finalize_and_send_60__6TLobbyFPv(&pkt);
}

void TLobby__sub_801ED360(void) {
    Pkt_801ED360 pkt;
    s32 x = ((s32 *)&TLobby__data_80512220)[0];
    s32 y = ((s32 *)&TLobby__data_80512220)[1];
    init_6x05_switch_changed__6TLobbyFPv(&pkt);
    pkt.a = 0xFFFF;
    pkt.b = 0;
    pkt.c = y;
    pkt.d = x;
    pkt.e = 1;
    finalize_and_send_60__6TLobbyFPv(&pkt);
}

void TLobby__sub_801ED3C4(s32 arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(((u8 *)get_player_by_client_id((int)((int)((int)(M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int)((*(s32 *)&TLobby__data_805D5E78)))))));
    if (temp_r3 != NULL) {
        set_floor__6TLobbyFPvs(temp_r3, 0);
    }
}
void TLobby__sub_801ED400(s32 arg0, s32 arg1) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(((s32)get_player_by_client_id((int)(M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int)(arg1))));
    if (temp_r3 != NULL) {
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = (s32) get_kill_count__10TObjPlayerFPv(temp_r3);
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 0;
}
void TLobby__sub_801ED468(s32 a, s32 b) {
    u32 r = get_player_by_client_id((*(s32 * *)&TLobby__data_805D5E78)[(u8)a], b);
    if (r != 0 && lbl_805D53A0 == (*(s32 * *)&TLobby__data_805D5E78)[(u8)a]) {
        set_area__6TLobbyFPvi(lbl_80515BA0, (*(s32 * *)&TLobby__data_805D5E78)[(u8)b], get_floor_map_terrain((*(s32 * *)&TLobby__data_805D5E78)[(u8)b]));
        mark_area_change_pending();
        get_dest_area__17TObjAreaWarpQuestFPv(lbl_80515BA0);
        TNpcPlayer__sub_8034E7A0();
        send_6x21_inter_level_warp(r, (void *)get_dest_area__17TObjAreaWarpQuestFPv(lbl_80515BA0));
    }
}

}

#include "types.h"
#include "pso/boss/TBoss1Dragon.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK setControlOverride__12TBoss1DragonFs(int, void *);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801ED52C(s32 arg0);
s32 is_split_screen();
s32 TLobby__sub_80070F4C();
s32 TLobby__sub_8029299C();
void TLobby__sub_801ED55C(s32 arg0);
s32 is_split_screen();
s32 TLobby__sub_80070FD8();
s32 TLobby__sub_80292A34();
void TLobby__sub_801ED5B4(s32 arg0);
}

extern "C" {

void TLobby__sub_801ED50C(void* p);

void TLobby__sub_801ED50C(void* p) { TBoss1Dragon::clearControlOverride(); }
void TLobby__sub_801ED52C(s32 arg0) {
    setControlOverride__12TBoss1DragonFs((int) ((u16) M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) (TLobby__data_805D5E78));
}
void TLobby__sub_801ED55C(s32 arg0) {
    if (is_split_screen() == 1) {
        M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = TLobby__sub_8029299C();
        return;
    }
    M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = TLobby__sub_80070F4C();
}
void TLobby__sub_801ED5B4(s32 arg0) {
    if (is_split_screen() == 1) {
        M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = TLobby__sub_80292A34();
        return;
    }
    M2C_FIELD(TLobby__data_805D5E78, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = TLobby__sub_80070FD8();
}

s32 is_split_screen(void);
void try_set_value__6TLobbyFf(f32);
void set_camera_height_if_valid__6TLobbyFf(f32);

void TLobby__sub_801ED60C(s32 a) {
    s32 b = a + 1;
    f32 v = (f32)TLobby__data_805D5E78[(u8)a];
    v += (f32)TLobby__data_805D5E78[(u8)b] / (f32)TLobby__data_805D5E78[(u8)++b];
    if (is_split_screen() == 1) {
        set_camera_height_if_valid__6TLobbyFf(v);
        return;
    }
    try_set_value__6TLobbyFf(v);
}
}
