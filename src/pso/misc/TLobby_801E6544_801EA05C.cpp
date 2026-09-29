#include "types.h"
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

#include "pso/player/TObjPlayer.h"
extern "C" {
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
s32 rand__11TOBoss4RockFv(void);
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
s32 TPlayerBattleCtrl4P__sub_801BA74C(int, void *);
int obj_isState2_324(TObjPlayer*);
extern int* TLobby__data_805D5E78;
void set_speed__10TObjPlayerFPvf(PlayerScaleState*, f32);
void quest_set_player_shrink_size(s32 player_variable, s32 size_variable);
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
M2C_UNK TLobby__sub_802089B0();
M2C_UNK TLobby__sub_8020DBCC();
M2C_UNK TLobby__sub_80291EAC(M2C_UNK);
M2C_UNK TLobby__sub_80291FC0();
M2C_UNK TRaderMapCore__sub_801F9540();
M2C_UNK TSwitch__sub_8022945C();
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
    TObjPlayer* player = ((TObjPlayer*)TPlayerBattleCtrl4P__sub_801BA74C((int)((*(s32* *)&TLobby__data_805D5E78)[(u8)player_variable]), (void *)(size_variable)));
    if (player && !obj_isState2_324(player)) {
        s32 whole = (*(s32* *)&TLobby__data_805D5E78)[(u8)size_variable++];
        s32 numerator = (*(s32* *)&TLobby__data_805D5E78)[(u8)size_variable++];
        s32 denominator = (*(s32* *)&TLobby__data_805D5E78)[(u8)size_variable];
        set_speed__10TObjPlayerFPvf(&player->scale_state,
            denominator > 0 ? (f32)whole + (f32)numerator / (f32)denominator : (f32)whole);
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
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) ((*(s32 *)&TLobby__data_805D5E78)));
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
    TLobby__sub_802089B0();
    TSwitch__sub_8022945C();
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
  var_r4 = (s32) (((f32) temp_r30) * (lbl_805DC4C8 * ((f32) rand__11TOBoss4RockFv())));
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

s32 init_guild_card_tag__6TLobbyFi(s32 arg0) {
    __ct__16TPlyGuildCardTagFv(arg0 + 4);
    return arg0;
}
void TLobby__sub_801EB25C(s32 arg0, s32 arg1) {
    s32 temp_r3;
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int)((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)))), (void *)(arg1));
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
