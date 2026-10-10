#include "types.h"
#include "pso/player/TObjPlayer.h"
#include "pso/boss/TBoss1Dragon.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;

#pragma push
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

struct Cmd_801E6604 {
    const char *name;
    void (*fn)(void);
};

struct CmdTable_801E6604 {
    Cmd_801E6604 e[12];
};

typedef s32 M2C_UNK;

extern "C" {
namespace pf2_p0 { extern "C" { M2C_UNK append_string(void *); } }
#define append_string pf2_p0::append_string
namespace pf2_p0 { extern "C" { extern RecoveredGlobal_8000F7FC_lbl_80515F48 quest_player_class_name_buffer; } }
#define quest_player_class_name_buffer pf2_p0::quest_player_class_name_buffer
void append_default_string__6TLobbyFv(void);
namespace pf2_p0 { extern "C" { extern RecoveredGlobal_8000F7FC_lbl_80515F48 quest_player_name_buffer; } }
#define quest_player_name_buffer pf2_p0::quest_player_name_buffer
void TLobby__sub_801E6840(void);
int sprintf(char *, const char *, ...);
extern char lbl_80449C74[];
void append_color_code__6TLobbyFi(s32 arg0);
namespace pf2_p0 { extern "C" { s32 TLobby__sub_801E6BB8(); } }
#define TLobby__sub_801E6BB8 pf2_p0::TLobby__sub_801E6BB8
namespace pf2_p0 { extern "C" { s8 read_byte_advance__6TLobbyFv(); } }
#define read_byte_advance__6TLobbyFv pf2_p0::read_byte_advance__6TLobbyFv
void TLobby__sub_801E6C2C(s8);
namespace pf2_p0 { extern "C" { void TLobby__sub_801E6C40(); } }
#define TLobby__sub_801E6C40 pf2_p0::TLobby__sub_801E6C40
s32 expand_message_substitutions(s32 arg0, s32 arg1);
void append_color_code__6TLobbyFi(s32 arg0);
s32 parse_f_index(s32 a0);
namespace pf2_p0 { extern "C" { s32 parse_r_index(char *); } }
#define parse_r_index pf2_p0::parse_r_index
void append_float_value__6TLobbyFi(s32);
void append_int_param__6TLobbyFi(s32);
namespace pf2_p0 { extern "C" { int strcmp(const char *, const char *); } }
#define strcmp pf2_p0::strcmp
extern CmdTable_801E6604 message_substitution_handlers;
void parse_message_tag__6TLobbyFv();
namespace pf2_p0 { extern "C" { char *get_unit_list__6TLobbyFv(); } }
#define get_unit_list__6TLobbyFv pf2_p0::get_unit_list__6TLobbyFv
extern char lbl_80449C64[];
extern M2C_UNK TLobby__data_805DC4A0;
void append_unit_list_name__6TLobbyFv(void);
namespace pf2_p0 { extern "C" { char *TLobby__sub_80070ACC(); } }
#define TLobby__sub_80070ACC pf2_p0::TLobby__sub_80070ACC
extern char lbl_80449C64[];
extern M2C_UNK TLobby__data_805DC4A0;
void TLobby__sub_801E677C(void);
int sscanf(M2C_UNK, M2C_UNK *, ...);
extern M2C_UNK lbl_80449C7C[];
s32 parse_color_code__6TLobbyFPv(char *s);
}

extern "C" {

void append_card_window_text__6TLobbyFv(void);
void capture_chat_sensor__6TLobbyFi(s32 arg0);
s32 parse_f_index(s32 a0);
int sscanf(M2C_UNK, M2C_UNK *, ...);
M2C_UNK capture_message__19TOChatSensorCaptureFUsPv(u16, s32);
M2C_UNK dispatch_chat_message_to_children__12TOChatSensorFi();
namespace pf2_p0 { extern "C" { u32 get_character_save_record(int); } }
#define get_character_save_record pf2_p0::get_character_save_record

extern s32 local_client_id;

void capture_chat_sensor__6TLobbyFi(s32 arg0) {
    dispatch_chat_message_to_children__12TOChatSensorFi();
    capture_message__19TOChatSensorCaptureFUsPv((u16) local_client_id, arg0);
}

extern M2C_UNK lbl_80449C6C[];

s32 expand_message_substitutions(s32 arg0, s32 arg1) {
    TLobby__sub_801E6C40();
    while (TLobby__sub_801E6BB8() == 0) {
        s8 c = read_byte_advance__6TLobbyFv();
        switch (c) {
        case 0x3C:
            parse_message_tag__6TLobbyFv();
            break;
        case 0x3E:
            while (1) {
            }
        case 0x3D:
        default:
            TLobby__sub_801E6C2C(c);
            break;
        }
    }
    TLobby__sub_801E6C2C(0);
    return arg1;
}

void parse_message_tag__6TLobbyFv() {
    char buf[64];
    CmdTable_801E6604 tbl = message_substitution_handlers;
    u32 i;
    s32 idx;
    s8 c;
    for (i = 0; i < 0x40 && TLobby__sub_801E6BB8() == 0; i++) {
        c = read_byte_advance__6TLobbyFv();
        switch (c) {
        case 0x3E:
            buf[i] = 0;
            if ((idx = parse_r_index(buf)) != -1) {
                append_int_param__6TLobbyFi(idx);
                return;
            }
            if ((idx = parse_f_index((s32)buf)) != -1) {
                append_float_value__6TLobbyFi(idx);
                return;
            }
            if ((idx = parse_color_code__6TLobbyFPv((char *)(buf))) != -1) {
                append_color_code__6TLobbyFi(idx);
                return;
            }
            for (i = 0; i < 12; i++) {
                if (strcmp(tbl.e[i].name, buf) == 0) {
                    tbl.e[i].fn();
                }
            }
            return;
        default:
            buf[i] = c;
            break;
        }
    }
}

void append_unit_list_name__6TLobbyFv(void) {
    char *s;
    s = get_unit_list__6TLobbyFv();
    if (strcmp(s, (const char *)&TLobby__data_805DC4A0) == 0) {
        append_string(lbl_80449C64);
        return;
    }
    append_string(s);
}

void TLobby__sub_801E677C(void) {
    char *s;
    s = TLobby__sub_80070ACC();
    if (strcmp(s, (const char *)&TLobby__data_805DC4A0) == 0) {
        append_string(lbl_80449C64);
        return;
    }
    append_string(s);
}

void append_card_window_text__6TLobbyFv(void) {
    u32 temp_r3;

    temp_r3 = get_character_save_record((int) (0xFFFF));
    if (temp_r3 != 0U) {
        append_string((void *) (temp_r3 + 0x2254));
        return;
    }
    append_string((void *) (lbl_80449C6C));
}

extern M2C_UNK lbl_805DC4A4;

typedef char RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
typedef char RecoveredGlobal_8000F7FC_lbl_80515F48_size[sizeof(RecoveredGlobal_8000F7FC_lbl_80515F48) == 0x28 ? 1 : -1];
void append_default_string__6TLobbyFv(void) {
    append_string((void *)((M2C_UNK *)(&quest_player_class_name_buffer.value)));
}
typedef char RecoveredGlobal_8000F90C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F90C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8FC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8FC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8EC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8EC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F91C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F91C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9E4_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9E4_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9CC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9CC_lbl_804FE120) == 0x18 ? 1 : -1];

void TLobby__sub_801E6840(void) {
    append_string((void *)((M2C_UNK *)(&quest_player_name_buffer.value)));
}

typedef s32 M2C_UNK;
void append_color_code__6TLobbyFi(s32 arg0) {
    char buf[64];
    sprintf(buf, lbl_80449C74, arg0);
    append_string(buf);
}

s32 parse_color_code__6TLobbyFPv(char *s) {
    s32 v;
    v = -1;
    sscanf((M2C_UNK)s, lbl_80449C7C, &v);
    if ((v <= 7) && (v >= 0)) {
        return v;
    }
    return -1;
}

s32 parse_f_index(s32 a0) {
    s32 sp8;

    sp8 = -1;
    sscanf(a0, &lbl_805DC4A4, &sp8);
    if ((sp8 < 0x100) && (sp8 >= 0)) {
        return sp8;
    }
    return -1;
}

}

#undef TLobby__sub_80070ACC
#undef TLobby__sub_801E6BB8
#undef TLobby__sub_801E6C40
#undef append_string
#undef get_character_save_record
#undef get_unit_list__6TLobbyFv
#undef parse_r_index
#undef read_byte_advance__6TLobbyFv
#undef strcmp
#undef quest_player_name_buffer
#undef quest_player_class_name_buffer
#pragma pop

#pragma push
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ctrl_801E6B20 { u8 pad[0x890]; s32 type; };

struct VBase_18_f23ffb { char pad[0x18]; };

struct VObj_18_f23ffb : VBase_18_f23ffb {
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
    virtual M2C_UNK m10();
};

extern "C" {
int sprintf(char *, const char *, ...);
void append_string(s32 arg0);
namespace pf2_p1 { extern "C" { extern s32 *TLobby__script_reg_array; } }
#define TLobby__script_reg_array pf2_p1::TLobby__script_reg_array
extern char lbl_805DC4B4[4];
void append_int_param__6TLobbyFi(s32 arg0);
int sprintf(char *, const char *, ...);
void append_string(s32 arg0);
extern char lbl_80449C90[];
void TLobby__sub_801E6AE0(void);
int sprintf(char *, const char *, ...);
void append_string(s32 arg0);
extern char lbl_805DC4B0[4];
void append_float_value__6TLobbyFi(s32 arg0);
int sprintf(char *, const char *, ...);
void append_string(s32 arg0);
s32 TObjItemOKWindow__sub_801F3268();
s32 fn_801F4C98();
extern char lbl_80449C88[];
void TLobby__sub_801E6A04(void);
namespace pf2_p1 { extern "C" { s32 select_download_type__6TLobbyFi(s32); } }
#define select_download_type__6TLobbyFi pf2_p1::select_download_type__6TLobbyFi
u32 get_player_by_client_id(s32);
void append_string(s32 arg0);
extern char lbl_80449C9C[];
extern s32 local_client_id;
void append_hero_class_name(void);
u32 get_player_by_client_id(s32);
void append_string(s32 arg0);
extern char lbl_80449CA8[];
extern s32 local_client_id;
void append_hero_name(void);
s32 is_split_screen();
char *TLobby__sub_800713C8();
void append_string(s32 arg0);
char *TLobby__sub_80291D4C();
int sprintf(char *, const char *, ...);
extern char lbl_805DC4AC[3];
void TLobby__sub_801E6998(void);
}

extern "C" {

u8 TLobby__sub_801E6BB8(void);
void append_string(s32 arg0);
s32 parse_r_index(s32 arg0);
u8 read_byte_advance__6TLobbyFv(void);
namespace pf2_p1 { extern "C" { M2C_UNK sscanf(M2C_UNK, M2C_UNK *, s32 *, ...); } }
#define sscanf pf2_p1::sscanf
M2C_UNK strcpy(s32, s32);
s32 strlen();

extern M2C_UNK lbl_805DC4A8;

s32 parse_r_index(s32 arg0) {
    s32 sp8;

    sp8 = -1;
    sscanf(arg0, &lbl_805DC4A8, &sp8);
    if ((sp8 < 0x100) && (sp8 >= 0)) {
        return sp8;
    }
    return -1;
}

extern u8 *TLobby__quest_script_read_ptr;

void TLobby__sub_801E6998(void) {
    char buf[0x40];
    if (is_split_screen() == 1) {
        sprintf(buf, lbl_805DC4AC, TLobby__sub_80291D4C());
    } else {
        sprintf(buf, lbl_805DC4AC, TLobby__sub_800713C8());
    }
    buf[0x3F] = 0;
    append_string((s32)buf);
}

void TLobby__sub_801E6A04(void) {
    char buf[64];
    s32 t = fn_801F4C98();
    sprintf(buf, lbl_80449C88, TObjItemOKWindow__sub_801F3268(), t);
    buf[63] = 0;
    append_string((s32)buf);
}

void append_float_value__6TLobbyFi(s32 arg0) {
    char buf[64];
    sprintf(buf, lbl_805DC4B0, ((f32 *)TLobby__script_reg_array)[arg0]);
    append_string((s32)buf);
}

void append_int_param__6TLobbyFi(s32 arg0) {
    char buf[64];
    sprintf(buf, lbl_805DC4B4, TLobby__script_reg_array[arg0]);
    append_string((s32)buf);
}

void TLobby__sub_801E6AE0(void) {
    char buf[64];
    sprintf(buf, lbl_80449C90, 1, 12);
    append_string((s32)buf);
}

void append_hero_class_name(void) {
    Ctrl_801E6B20 *c = (Ctrl_801E6B20 *)get_player_by_client_id(local_client_id);
    if (c != NULL) {
        append_string(select_download_type__6TLobbyFi(c->type));
    } else {
        append_string((s32)lbl_80449C9C);
    }
}

void append_hero_name(void) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(get_player_by_client_id(local_client_id));
    if (temp_r3 != NULL) {
        append_string(((VObj_18_f23ffb *)(temp_r3))->m10());
    } else {
        append_string((s32)lbl_80449CA8);
    }
}

u8 TLobby__sub_801E6BB8(void) {
    return (u8) ((s8) *TLobby__quest_script_read_ptr == 0);
}

extern u8 *TLobby__quest_script_read_ptr;

u8 read_byte_advance__6TLobbyFv(void) {
    u8 *temp_r3;

    temp_r3 = TLobby__quest_script_read_ptr;
    TLobby__quest_script_read_ptr = temp_r3 + 1;
    return *temp_r3;
}

extern s32 quest_string_append_cursor;

void append_string(s32 arg0) {
    s32 temp_r31;

    temp_r31 = strlen();
    strcpy(quest_string_append_cursor, arg0);
    quest_string_append_cursor += temp_r31;
}

}

#undef select_download_type__6TLobbyFi
#undef sscanf
#undef TLobby__script_reg_array
#pragma pop

#pragma push
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801E6C2C(s8 arg0);

namespace pf2_p2 { extern "C" { extern s8 *quest_string_append_cursor; } }
#define quest_string_append_cursor pf2_p2::quest_string_append_cursor

void TLobby__sub_801E6C2C(s8 arg0) {
    s8 *temp_r4;

    temp_r4 = quest_string_append_cursor;
    quest_string_append_cursor = temp_r4 + 1;
    *temp_r4 = arg0;
}

}

#undef quest_string_append_cursor
#pragma pop

#pragma push
#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801E6D18_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E6E20_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Tbl_801E6CA4 { u32 w[18]; };

typedef s32 M2C_UNK;

extern "C" {
s32 is_phase_reached__14TBoss6PlotFalzFv();
namespace pf2_p3 { extern "C" { extern s32 TLobby__script_reg_array; } }
#define TLobby__script_reg_array pf2_p3::TLobby__script_reg_array
void TLobby__sub_801E6C4C(s32 arg0);
namespace pf2_p3 { extern "C" { u32 find_item_by_id(int); } }
#define find_item_by_id pf2_p3::find_item_by_id
s32 TObjPlayer__sub_801C1AC8();
namespace pf2_p3 { extern "C" { extern RecoveredGlobal_801E6D18_TLobby__data_80512220 TLobby__quest_argument_stack; } }
#define TLobby__quest_argument_stack pf2_p3::TLobby__quest_argument_stack
void check_item_usable_by_player__6TLobbyFv(void);
namespace pf2_p3 { extern "C" { u8 *get_player_by_client_id(s32); } }
#define get_player_by_client_id pf2_p3::get_player_by_client_id
void TLobby__sub_801E6E20(void);
void TLobby__sub_80141038(u8 *arg0, s32 arg1, s32 arg2);
extern Tbl_801E6CA4 lbl_80449B34;
extern u8 lbl_80515BA0[];
void TLobby__sub_801E6CA4(void);
void send_slot_entity_or_local__6TLobbyFUsi(u16 arg0, s32 arg1);
void *memcpy(void *, const void *, u32);
void copy_slot_entity_data__6TLobbyFv(void);
s32 store_player_name__19TOChatSensorCaptureFUsPv(u16 arg0, const char *arg1);
void TLobby__sub_801E6E88(void);
}

extern "C" {

void TLobby__sub_801E6C40(int a0, int a1);
void create_singleton__6TLobbyFv(void);
int create_singleton__6TLobbyFPv(void*);

namespace pf2_p3 { extern "C" { extern int TLobby__quest_script_read_ptr; } }
#define TLobby__quest_script_read_ptr pf2_p3::TLobby__quest_script_read_ptr
namespace pf2_p3 { extern "C" { extern int quest_string_append_cursor; } }
#define quest_string_append_cursor pf2_p3::quest_string_append_cursor
void TLobby__sub_801E6C40(int a0, int a1) { TLobby__quest_script_read_ptr = a0; quest_string_append_cursor = a1; }

    extern int tl_01;

void TLobby__sub_801E6C4C(s32 arg0) {
    if (is_phase_reached__14TBoss6PlotFalzFv() != 0) {
        M2C_FIELD(TLobby__script_reg_array, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
        return;
    }
    M2C_FIELD(TLobby__script_reg_array, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}

typedef char RecoveredGlobal_801E6D18_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E6D18_TLobby__data_80512220) == 0x20 ? 1 : -1];

void TLobby__sub_801E6CA4(void) {
    Tbl_801E6CA4 t = lbl_80449B34;
    if (TLobby__quest_argument_stack.value <= 0x11U) {
        TLobby__sub_80141038(lbl_80515BA0, t.w[TLobby__quest_argument_stack.value], 0);
    }
}

void check_item_usable_by_player__6TLobbyFv(void) {
    u8 temp_r31;
    temp_r31 = (u8) M2C_FIELD(&TLobby__quest_argument_stack.value, s32 *, 4);
    if (find_item_by_id((int) (M2C_FIELD(&TLobby__quest_argument_stack.value, s32 *, 0))) != 0U) {
        if (TObjPlayer__sub_801C1AC8() != 0) {
            M2C_FIELD((TLobby__script_reg_array + ((temp_r31 * 4) & 0x3FC)), s32 *, 0) = 1;
            return;
        }
        M2C_FIELD((TLobby__script_reg_array + ((temp_r31 * 4) & 0x3FC)), s32 *, 0) = 0;
        return;
    }
    M2C_FIELD((TLobby__script_reg_array + ((temp_r31 * 4) & 0x3FC)), s32 *, 0) = -1;
}

void create_singleton__6TLobbyFv(void) { create_singleton__6TLobbyFPv((void*)(tl_01)); }
typedef char RecoveredGlobal_801E6E20_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E6E20_TLobby__data_80512220) == 0x20 ? 1 : -1];

void copy_slot_entity_data__6TLobbyFv(void) {
    u8 buf[0x3C];
    u8 idx;
    idx = (u8) M2C_FIELD(&TLobby__quest_argument_stack.value, s32 *, 4);
    send_slot_entity_or_local__6TLobbyFUsi((u16) TLobby__quest_argument_stack.value, (s32) buf);
    memcpy((void *) (TLobby__script_reg_array + ((idx * 4) & 0x3FC)), buf, 0x3C);
}

void TLobby__sub_801E6E20(void) {
    u8 temp_r31;
    u8 *temp_r3;
    temp_r31 = (u8) M2C_FIELD(&(*(RecoveredGlobal_801E6E20_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 4);
    temp_r3 = (u8 *)(get_player_by_client_id((s32) (u16) M2C_FIELD(&(*(RecoveredGlobal_801E6E20_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 0)));
    if (temp_r3 != NULL) {
        M2C_FIELD((TLobby__script_reg_array + ((temp_r31 * 4) & 0x3FC)), s32 *, 0) = M2C_FIELD(temp_r3, s32 *, 0xDB0);
        return;
    }
    M2C_FIELD((TLobby__script_reg_array + ((temp_r31 * 4) & 0x3FC)), s32 *, 0) = -1;
}
void TLobby__sub_801E6E88(void) {
    u8 idx;
    idx = (u8) TLobby__quest_argument_stack.value;
    if (store_player_name__19TOChatSensorCaptureFUsPv((u16) M2C_FIELD(&TLobby__quest_argument_stack.value, s32 *, 4),
                                          (const char *) M2C_FIELD(&TLobby__quest_argument_stack.value, s32 *, 8)) != 0) {
        *(s32 *) (TLobby__script_reg_array + ((idx * 4) & 0x3FC)) = 1;
        return;
    }
    *(s32 *) (TLobby__script_reg_array + ((idx * 4) & 0x3FC)) = 0;
}

}

#undef find_item_by_id
#undef get_player_by_client_id
#undef TLobby__quest_argument_stack
#undef TLobby__quest_script_read_ptr
#undef TLobby__script_reg_array
#undef quest_string_append_cursor
#pragma pop

#pragma push
#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801E6F1C_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E6F40_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E7084_TLobby__data_80512220
{
  M2C_UNK value;
  u8 remaining[0x1C];
};

extern "C" {
namespace pf2_p4 { extern "C" { extern int TLobby__quest_argument_stack[]; } }
#define TLobby__quest_argument_stack pf2_p4::TLobby__quest_argument_stack
extern s16 TLobby__quest_state_word_170;
extern s16 TLobby__quest_state_word_172;
extern s16 TLobby__data_805D5ECC;
void TLobby__sub_801E6F1C(void);
M2C_UNK fn_801D9FA0(int, int, int, int, void *);
extern s32 TLobby__protocol_instance;
extern s16 TLobby__quest_state_word_170;
extern s16 TLobby__quest_state_word_172;
extern s16 TLobby__data_805D5ECC;
void run_vm_helper_with_regs__6TLobbyFv(void);
namespace pf2_p4 { extern "C" { void push_op_arg__6TLobbyFi(s32); } }
#define push_op_arg__6TLobbyFi pf2_p4::push_op_arg__6TLobbyFi
namespace pf2_p4 { extern "C" { extern s32 TLobby__data_805D5E74; } }
#define TLobby__data_805D5E74 pf2_p4::TLobby__data_805D5E74
namespace pf2_p4 { extern "C" { extern u8 *TLobby__script_reg_array; } }
#define TLobby__script_reg_array pf2_p4::TLobby__script_reg_array
namespace pf2_p4 { extern "C" { extern s32 TLobby__quest_script_pc; } }
#define TLobby__quest_script_pc pf2_p4::TLobby__quest_script_pc
extern int TLobby__quest_arg_stack_count;
void load_op_arg_window__6TLobbyFi(s32 arg0);
extern int TLobby__quest_arg_stack_count;
void quest_vm_push_u16_argument(u16 a0);
extern int TLobby__quest_arg_stack_count;
void quest_vm_push_u8_argument(u8 a0);
extern int TLobby__quest_arg_stack_count;
void push_reg_ref_by_index__6TLobbyFUc(u8 a0);
extern int TLobby__quest_arg_stack_count;
void push_table_ref_by_index__6TLobbyFUs(u16 a0);
extern int TLobby__quest_arg_stack_count;
void op_push_reg_to_stack__6TLobbyFUc(u8 a0);
}

extern "C" {

void qst_op_arg_pushs(int a0);
void create_chat_sensor_capture__6TLobbyFv(void);
int create_instance__19TOChatSensorCaptureFPv(void*);

    extern int tl_01;
void create_chat_sensor_capture__6TLobbyFv(void) { create_instance__19TOChatSensorCaptureFPv((void*)(tl_01)); }

    extern int TLobby__quest_arg_stack_count;

typedef char RecoveredGlobal_801E6F1C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E6F1C_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801E6F1C(void) {
    TLobby__data_805D5ECC = (s16) M2C_FIELD(&(*(RecoveredGlobal_801E6F1C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 0);
    TLobby__quest_state_word_170 = (s16) M2C_FIELD(&(*(RecoveredGlobal_801E6F1C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 4);
    TLobby__quest_state_word_172 = (s16) M2C_FIELD(&(*(RecoveredGlobal_801E6F1C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 8);
}

typedef char RecoveredGlobal_801E6F40_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E6F40_TLobby__data_80512220) == 0x20 ? 1 : -1];
void run_vm_helper_with_regs__6TLobbyFv(void) {
    fn_801D9FA0((int) (TLobby__protocol_instance), (int) ((*(u16 *)&TLobby__data_805D5ECC)), (int) ((*(u16 *)&TLobby__quest_state_word_170)), (int) ((*(u16 *)&TLobby__quest_state_word_172)), (void *) (&(*(RecoveredGlobal_801E6F40_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value));
}

void qst_op_arg_pushs(int a0) { int old = TLobby__quest_arg_stack_count; TLobby__quest_arg_stack_count = old + 1; TLobby__quest_argument_stack[old] = a0; }
typedef struct RecoveredGlobal_801E7084_TLobby__data_80512220 RecoveredGlobal_801E7084_TLobby__data_80512220;
typedef char RecoveredGlobal_801E7084_TLobby__data_80512220_size[((sizeof(RecoveredGlobal_801E7084_TLobby__data_80512220)) == 0x20) ? (1) : (-1)];

void push_table_ref_by_index__6TLobbyFUs(u16 a0) {
    TLobby__quest_argument_stack[TLobby__quest_arg_stack_count++] = TLobby__data_805D5E74 + a0 * 4;
}

void push_reg_ref_by_index__6TLobbyFUc(u8 a0) {
    TLobby__quest_argument_stack[TLobby__quest_arg_stack_count++] = (int)(TLobby__script_reg_array + a0 * 4);
}

void quest_vm_push_u16_argument(u16 a0) {
    TLobby__quest_argument_stack[TLobby__quest_arg_stack_count++] = a0;
}

void quest_vm_push_u8_argument(u8 a0) {
    TLobby__quest_argument_stack[TLobby__quest_arg_stack_count++] = a0;
}

void qst_op_arg_pushl(int a0)
{
  unsigned long new_var3;
  int new_var;
  int *new_var2;
  new_var = TLobby__quest_arg_stack_count;
  new_var2 = &a0;
  new_var3 = *new_var2;
  TLobby__quest_arg_stack_count = TLobby__quest_arg_stack_count + 0x1;
  TLobby__quest_argument_stack[new_var] = new_var3;
}
void op_push_reg_to_stack__6TLobbyFUc(u8 a0) {
    int v = *(int *)(TLobby__script_reg_array + a0 * 4);
    int old = TLobby__quest_arg_stack_count;
    TLobby__quest_arg_stack_count = old + 1;
    TLobby__quest_argument_stack[old] = v;
}

void load_op_arg_window__6TLobbyFi(s32 arg0) {
  int new_var;
  (*(s32 *)&TLobby__quest_arg_stack_count) = 0;
  *((s32 *) (((s8 *) TLobby__script_reg_array) + 4)) = (s32) (*((s32 *) (((s8 *) (&(*(RecoveredGlobal_801E7084_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value)) + 0)));
  *((s32 *) (((s8 *) TLobby__script_reg_array) + 8)) = (s32) (*((s32 *) (((s8 *) (&(*(RecoveredGlobal_801E7084_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value)) + 4)));
  *((s32 *) (((s8 *) TLobby__script_reg_array) + 0xC)) = (s32) (*((s32 *) (((s8 *) (&(*(RecoveredGlobal_801E7084_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value)) + 8)));
  *((s32 *) (((s8 *) TLobby__script_reg_array) + 0x10)) = (s32) (*((s32 *) (((s8 *) (&(*(RecoveredGlobal_801E7084_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value)) + 0xC)));
  *((s32 *) (((s8 *) TLobby__script_reg_array) + 0x14)) = (s32) (*((s32 *) (((s8 *) (&(*(RecoveredGlobal_801E7084_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value)) + 0x10)));
  *((s32 *) (((s8 *) TLobby__script_reg_array) + 0x18)) = (s32) (*((s32 *) (((s8 *) (&(*(RecoveredGlobal_801E7084_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value)) + 0x14)));
  *((s32 *) (((s8 *) TLobby__script_reg_array) + 0x1C)) = (s32) (*((s32 *) (((s8 *) (&(*(RecoveredGlobal_801E7084_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value)) + 0x18)));
  push_op_arg__6TLobbyFi(TLobby__quest_script_pc);
  new_var = arg0 * 4;
  TLobby__quest_script_pc = *((s32 *) (((s8 *) (TLobby__data_805D5E74 + (new_var & 0x3FFFC))) + 0));
}

extern int TLobby__quest_arg_stack_count;

}

#undef push_op_arg__6TLobbyFi
#undef TLobby__quest_argument_stack
#undef TLobby__data_805D5E74
#undef TLobby__quest_script_pc
#undef TLobby__script_reg_array
#pragma pop

#pragma push
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Glob_801E8614
{
  s32 f0;
  s32 f4;
  u8 rest[0x18];
};

extern "C" {
u32 get_player_by_client_id(s32);
s16 obj_getS16_32C(u8 *);
s16 get_field_2b8__14TItemProShieldFPv(u8 *);
extern int* TLobby__script_reg_array;
extern const f32 lbl_805DC4C4;
extern const f32 lbl_805DC4D0;
void qst_op_p_hpstat(void);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern int* TLobby__script_reg_array;
void store_tan_table_entry__6TLobbyFv(void);
}

extern "C" {

struct Glob_801E75F0 { s32 f0; s32 f4; s32 f8; s32 fC; s32 f10; u8 rest[0xC]; };

struct ItemData_801E72B4 {
    u8 data1[12];
    u32 id;
    u8 data2[4];
};

struct RecoveredGlobal_801E7CCC_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct VBase_18_eecf68 { char pad[0x18]; };

struct VObj_18_eecf68 : VBase_18_eecf68 {
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
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual s32 m14();
};

struct RecoveredGlobal_801E7CFC_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E7C5C_TLobby__data_80512220
{
  M2C_UNK value;
  u8 remaining[0x1C];
};

struct RecoveredGlobal_801E7934_TLobby__data_80512220
{
  M2C_UNK value;
  u8 remaining[0x1C];
};

struct Glob_801E78D4 { s32 f0; s32 f4; u8 rest[0x18]; };

struct Win_801E78D4 { u8 pad[0x2314]; s32 t[16]; };

struct Card_801E7D7C {
    u8 pad[0x24C];
    s32 v;
};

struct ItemData_801E7810 {
    u8 data1[12];
    u32 id;
    u8 data2[4];
};

struct Glob_80512220 { s32 field0; char pad[0x100]; };

typedef char RecoveredGlobal_801E7CCC_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E7CCC_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef struct RecoveredGlobal_801E7C5C_TLobby__data_80512220 RecoveredGlobal_801E7C5C_TLobby__data_80512220;

typedef char RecoveredGlobal_801E7C5C_TLobby__data_80512220_size[((sizeof(RecoveredGlobal_801E7C5C_TLobby__data_80512220)) == 0x20) ? (1) : (-1)];

typedef struct RecoveredGlobal_801E7934_TLobby__data_80512220 RecoveredGlobal_801E7934_TLobby__data_80512220;

typedef char RecoveredGlobal_801E7934_TLobby__data_80512220_size[((sizeof(RecoveredGlobal_801E7934_TLobby__data_80512220)) == 0x20) ? (1) : (-1)];

typedef char RecoveredGlobal_801E7CFC_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E7CFC_TLobby__data_80512220) == 0x20 ? 1 : -1];

struct RecoveredGlobal_801E7EB0_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E8288_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E82C0_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F027C_TLobby__data_80512220 { M2C_UNK value; u8 remaining[0x1C]; };

struct RecoveredGlobal_801F18C8_TLobby__data_80512220 { s32 value; u8 remaining[0x1C]; };

struct RecoveredGlobal_801F1654_TLobby__data_80512220 { M2C_UNK value; u8 remaining[0x1C]; };

struct RecoveredGlobal_801F053C_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F0B48_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F0ADC_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F0B74_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F00E4_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F0D80_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F0D54_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F0BE0_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801F196C_lbl_804499A8 {
    M2C_UNK value;
    u8 remaining[0x70];
};

struct RecoveredGlobal_801F196C_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct ItemData_801E8000 {
    u8 b0, b1, b2, b3, b4, b5, b6;
    s8 b7;
    u8 b8;
    s8 b9;
    u8 b10;
    s8 b11;
    u32 id;
    u32 extra;
};

typedef char RecoveredGlobal_801E7EB0_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E7EB0_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801E8288_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E8288_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801E82C0_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E82C0_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801F027C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F027C_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801F18C8_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F18C8_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801F1654_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F1654_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801F00E4_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F00E4_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];

typedef char RecoveredGlobal_8000F7FC_lbl_80515F48_size[sizeof(RecoveredGlobal_8000F7FC_lbl_80515F48) == 0x28 ? 1 : -1];

typedef char RecoveredGlobal_8000F90C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F90C_lbl_804FE120) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8000F8FC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8FC_lbl_804FE120) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8000F8EC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8EC_lbl_804FE120) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8000F91C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F91C_lbl_804FE120) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8000F9E4_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9E4_lbl_804FE120) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8000F9CC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9CC_lbl_804FE120) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_801F053C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F053C_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801F0ADC_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F0ADC_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801F0B48_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F0B48_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801F0B74_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F0B74_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801F0BE0_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F0BE0_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801F0D80_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F0D80_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801F0D54_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F0D54_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801F196C_lbl_804499A8_size[sizeof(RecoveredGlobal_801F196C_lbl_804499A8) == 0x74 ? 1 : -1];

typedef char RecoveredGlobal_801F196C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801F196C_TLobby__data_80512220) == 0x20 ? 1 : -1];

struct RecoveredGlobal_801E8560_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E85B4_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E9C40_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E9EE4_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E9EFC_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E9F14_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E9F2C_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E9F50_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801E9F74_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

union U_801E8784 { s32 i; f32 f; };

union U_801E871C { s32 i; f32 f; };

union U_801E8750 { s32 i; f32 f; };

union U_801E87EC { s32 i; f32 f; };

union U_801E8854 { s32 i; f32 f; };

union U_801E87B8 { s32 i; f32 f; };

struct E_801E93B4 { u8 pad[0x20]; s32 f20; u8 pad24[4]; s32 f28; u8 pad2c[0x24]; };

union U_801E8888 { s32 i; f32 f; };

union U_801E8820 { s32 i; f32 f; };

struct Glob_801E8684 { s32 f0; s32 f4; u8 rest[0x18]; };

struct Glob_801E86D0 { s32 f0; s32 f4; u8 rest[0x18]; };

struct Vec_801E9400 { f32 x, y, z; };

struct Glob_801E9400 { s32 f0; s32 f4; u8 rest[0x18]; };

struct Vec_801E945C { f32 x, y, z; };

struct Tbl_801E9AF8 { u8 bytes[0x14]; };

struct Glob_801E915C {
    s32 count;
    f32 f4;
    f32 f8;
    s32 fC;
    s32 out;
    u32 id;
};

struct Vec3_801E915C { f32 x, y, z; };

struct Glob_801E9274 {
    s32 count;
    f32 f4;
    f32 f8;
    s32 fC;
    s32 out;
    u32 id;
};

struct Vec3_801E9274 { f32 x, y, z; };

typedef char RecoveredGlobal_801E8560_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E8560_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801E85B4_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E85B4_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801E9C40_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E9C40_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801E9EE4_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E9EE4_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801E9EFC_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E9EFC_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801E9F14_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E9F14_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801E9F2C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E9F2C_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801E9F50_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E9F50_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801E9F74_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801E9F74_TLobby__data_80512220) == 0x20 ? 1 : -1];

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

struct M2CCopy_30 { u8 bytes[0x30]; };

struct M2CCopy_20 { u8 bytes[0x20]; };

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

typedef char RecoveredGlobal_801EA274_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EA274_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801EA274_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EA274_TLobby__data_80512360) == 0x2C ? 1 : -1];

struct Spawn_801EA508;

typedef char RecoveredGlobal_80141860_lbl_8050C000_size[sizeof(RecoveredGlobal_80141860_lbl_8050C000) == 0x28 ? 1 : -1];

typedef char RecoveredGlobal_80141730_lbl_8050C028_size[sizeof(RecoveredGlobal_80141730_lbl_8050C028) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_80141788_lbl_8050C000_size[sizeof(RecoveredGlobal_80141788_lbl_8050C000) == 0x28 ? 1 : -1];

typedef char RecoveredGlobal_80141788_lbl_8050C028_size[sizeof(RecoveredGlobal_80141788_lbl_8050C028) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8014175C_lbl_8050C000_size[sizeof(RecoveredGlobal_8014175C_lbl_8050C000) == 0x28 ? 1 : -1];

typedef char RecoveredGlobal_801417B8_lbl_8050C000_size[sizeof(RecoveredGlobal_801417B8_lbl_8050C000) == 0x28 ? 1 : -1];

typedef char RecoveredGlobal_801417B8_lbl_8050C028_size[sizeof(RecoveredGlobal_801417B8_lbl_8050C028) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_801417E8_lbl_8050C028_size[sizeof(RecoveredGlobal_801417E8_lbl_8050C028) == 0x18 ? 1 : -1];

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

typedef char RecoveredGlobal_801EB5AC_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EB5AC_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801EB6B8_lbl_80512350_size[sizeof(RecoveredGlobal_801EB6B8_lbl_80512350) == 0x10 ? 1 : -1];

typedef char RecoveredGlobal_801EB73C_lbl_80512340_size[sizeof(RecoveredGlobal_801EB73C_lbl_80512340) == 0x10 ? 1 : -1];

typedef char RecoveredGlobal_801EC64C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC64C_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801EC64C_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EC64C_TLobby__data_80512360) == 0x2C ? 1 : -1];

typedef char RecoveredGlobal_801EC43C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC43C_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801EC6F0_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC6F0_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801EC90C_lbl_80449AFC_size[sizeof(RecoveredGlobal_801EC90C_lbl_80449AFC) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_801EC90C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC90C_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801EC90C_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EC90C_TLobby__data_80512360) == 0x2C ? 1 : -1];

typedef char RecoveredGlobal_801EC93C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC93C_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801EC93C_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EC93C_TLobby__data_80512360) == 0x2C ? 1 : -1];

typedef char RecoveredGlobal_801EC954_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC954_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801EC954_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EC954_TLobby__data_80512360) == 0x2C ? 1 : -1];

typedef char RecoveredGlobal_801EC9CC_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC9CC_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801EC9CC_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EC9CC_TLobby__data_80512360) == 0x2C ? 1 : -1];

typedef char RecoveredGlobal_801EC984_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC984_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801EC984_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EC984_TLobby__data_80512360) == 0x2C ? 1 : -1];

typedef char RecoveredGlobal_801EC9F8_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC9F8_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801EC9F8_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EC9F8_TLobby__data_80512360) == 0x2C ? 1 : -1];

typedef char RecoveredGlobal_801ECA1C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801ECA1C_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801ECA1C_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801ECA1C_TLobby__data_80512360) == 0x2C ? 1 : -1];

typedef char RecoveredGlobal_801ECF84_lbl_8050D3E0_size[sizeof(RecoveredGlobal_801ECF84_lbl_8050D3E0) == 0x50 ? 1 : -1];

struct Item_801ED7BC {
    u8 data[12];
    s32 id;
    u32 f10;
};

struct RecoveredGlobal_801EDA70_lbl_80449AC8 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_801EDA70_TLobby__data_80512220 {
    u32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EDA70_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801EDB4C_lbl_80449AAC {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_801EDB4C_TLobby__data_80512220 {
    u32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EDB4C_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801EDBDC_lbl_80449A94 {
    s32 value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801EDBDC_TLobby__data_80512220 {
    u32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EDBDC_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801EDC24_lbl_80449A88 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_801EDC24_TLobby__data_80512220 {
    u32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EDC24_TLobby__data_80512360 {
    s8 value;
    u8 remaining[0x2B];
};

struct RecoveredGlobal_800F8A78_lbl_80501178 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801EDD0C_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EDD44_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801ED938_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801ED938_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct Tbl_801EDC98 { u32 w[18]; };

typedef char RecoveredGlobal_801EDA70_lbl_80449AC8_size[sizeof(RecoveredGlobal_801EDA70_lbl_80449AC8) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_801EDA70_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EDA70_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801EDA70_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EDA70_TLobby__data_80512360) == 0x2C ? 1 : -1];

typedef char RecoveredGlobal_801ED938_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801ED938_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801ED938_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801ED938_TLobby__data_80512360) == 0x2C ? 1 : -1];

typedef char RecoveredGlobal_801EDB4C_lbl_80449AAC_size[sizeof(RecoveredGlobal_801EDB4C_lbl_80449AAC) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_801EDB4C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EDB4C_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801EDB4C_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EDB4C_TLobby__data_80512360) == 0x2C ? 1 : -1];

typedef char RecoveredGlobal_801EDBDC_lbl_80449A94_size[sizeof(RecoveredGlobal_801EDBDC_lbl_80449A94) == 0x10 ? 1 : -1];

typedef char RecoveredGlobal_801EDBDC_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EDBDC_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801EDBDC_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EDBDC_TLobby__data_80512360) == 0x2C ? 1 : -1];

typedef char RecoveredGlobal_801EDC24_lbl_80449A88_size[sizeof(RecoveredGlobal_801EDC24_lbl_80449A88) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_801EDC24_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EDC24_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801EDC24_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EDC24_TLobby__data_80512360) == 0x2C ? 1 : -1];

typedef char RecoveredGlobal_800F8A78_lbl_80501178_size[sizeof(RecoveredGlobal_800F8A78_lbl_80501178) == 0x10 ? 1 : -1];

typedef char RecoveredGlobal_801EDD0C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EDD0C_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801EDD44_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EDD44_TLobby__data_80512220) == 0x20 ? 1 : -1];

struct Pkt_801EE048 {
    u8 cmd;
    u8 size;
    u16 a;
    s32 b;
    s32 c;
    s32 d;
};

struct Item_801EE0BC {
    u8 data[12];
    s32 id;
    u32 f10;
};

struct Pkt_801EDF64 {
    u8 cmd;
    u8 size;
    u16 a;
    u16 b;
    u16 pad;
    u16 c;
    u8 d;
    u8 e;
};

struct Pkt_801EE330 {
    u8 cmd;
    u8 size;
    u16 pad0;
    u16 a;
    u16 pad1;
    s32 b;
};

struct RecoveredGlobal_801EE5A4_TLobby__data_80512220 {
    u32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EE5A4_lbl_805129F8 {
    M2C_UNK value;
    u8 remaining[0xD4];
};

struct Pkt_801EE54C {
    u8 cmd;
    u8 size;
    u16 a;
    s32 b;
    s32 c;
    s32 d;
};

struct Ent_801EE5EC {
    u8 name[0x20];
    s32 v;
};

typedef char RecoveredGlobal_801EE5A4_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EE5A4_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801EE5A4_lbl_805129F8_size[sizeof(RecoveredGlobal_801EE5A4_lbl_805129F8) == 0xD8 ? 1 : -1];

struct RecoveredGlobal_801EEFB4_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct Item_801EE77C {
    u8 data[12];
    s32 id;
    u32 f10;
};

struct Player_801EE77C {
    u8 pad[0xD00];
    void *fD00;
};

struct Item_801EEE68 {
    u8 data[12];
    s32 id;
    u32 f10;
};

struct Item_801EE77C;

typedef char RecoveredGlobal_801EEFB4_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EEFB4_TLobby__data_80512220) == 0x20 ? 1 : -1];

struct RecoveredGlobal_801EF100_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EF298_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EF4F4_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

typedef char RecoveredGlobal_801EF100_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EF100_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801EF298_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EF298_TLobby__data_80512220) == 0x20 ? 1 : -1];

typedef char RecoveredGlobal_801EF4F4_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EF4F4_TLobby__data_80512220) == 0x20 ? 1 : -1];

struct RecoveredGlobal_801EF5D0_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
    virtual void m0(int);
    char pad2[0x1080];
    s32 f109c;
};

struct G80512220 { s32 a; void *b; u8 rest[0x18]; };

typedef char RecoveredGlobal_801EF5D0_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EF5D0_TLobby__data_80512220) == 0x20 ? 1 : -1];

struct Args_801F1A0C { u32 idx; char *text; u8 pad8[0x18]; };

struct Base_801F1A0C { u8 pad[0x18]; };

struct List_801F1A0C : Base_801F1A0C {
    virtual ~List_801F1A0C();
    char names[0x84][0x20];
    s32 count;
};

struct Cfg_801F0970 { s32 i; s32 b; f32 c; };

struct Vec3_801F0970 { f32 x, y, z; };

struct Pair_801F1838 { s32 a; s32 b; };

struct Vec2_801E717C { f32 x, y; };

struct Vec2_801E74D0 { f32 x, y; };

struct Vec3_801E79BC { f32 x, y, z; };

struct Spawn_801E8930 {
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
    u8 pad34[0x8];
};

struct Vec_801E8930 { f32 x; f32 y; f32 z; };

struct Spawn_801E8AE8 {
    u8 pad0[0xC];
    f32 x;
    f32 y;
    f32 z;
    u8 pad18[0xC];
    f32 a;
    f32 b;
    u8 pad2c[4];
    s32 c;
    u8 pad34[0xC];
};

struct Spawn_801E8C14 {
    u8 pad0[0xC];
    f32 x;
    f32 y;
    f32 z;
    u8 pad18[0xC];
    f32 a;
    f32 b;
    u8 pad2c[4];
    s32 c;
    u8 pad34[0xC];
};

struct Spawn_801E8D44 {
    u8 pad0[0xC];
    f32 x;
    f32 y;
    f32 z;
    u8 pad18[0xC];
    f32 a;
    f32 b;
    u8 pad2c[4];
    s32 c;
    u8 pad34[0xC];
};

struct Spawn_801E8E4C {
    u8 pad0[0xC];
    f32 x;
    f32 y;
    f32 z;
    u8 pad18[0xC];
    f32 a;
    f32 b;
    u8 pad2c[4];
    s32 c;
    u8 pad34[0xC];
};

struct Spawn_801E8F54 {
    u8 pad0[0xC];
    f32 x;
    f32 y;
    f32 z;
    u8 pad18[0xC];
    f32 a;
    f32 b;
    u8 pad2c[4];
    s32 c;
    u8 pad34[0xC];
};

struct Vec_801EE220 {
    f32 x, y, z;
};

struct Vec_801EF134 {
    f32 x, y, z;
};

struct NpcSet_801EF3B4 {
    u8 pad0[0xC];
    f32 x;
    f32 y;
    f32 z;
    u8 pad18[0x1C - 0x18];
    s32 f1C;
    u8 pad20[4];
    f32 f24;
    u8 pad28[0x30 - 0x28];
    s32 f30;
    s32 f34;
    s32 f38;
    u8 pad3C[0x40 - 0x3C];
};

struct Spawn_801EF7A8 {
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
    u8 pad34[0x8];
};

struct Vec_801EF7A8 { f32 x; f32 y; f32 z; };

struct NpcSet_801EF944 {
    u8 pad0[0xC];
    f32 x;
    f32 y;
    f32 z;
    u8 pad18[0x24 - 0x18];
    f32 f24;
    f32 f28;
    u8 pad2C[0x30 - 0x2C];
    s32 f30;
    u8 pad34[0x40 - 0x34];
};

struct NpcSet_801EFA5C {
    u8 pad0[0xC];
    f32 x;
    f32 y;
    f32 z;
    u8 pad18[0x24 - 0x18];
    f32 f24;
    f32 f28;
    u8 pad2C[0x30 - 0x2C];
    s32 f30;
    u8 pad34[0x40 - 0x34];
};

struct NpcSet_801EFB6C {
    u8 pad0[0xC];
    f32 x;
    f32 y;
    f32 z;
    u8 pad18[0x24 - 0x18];
    f32 f24;
    f32 f28;
    u8 pad2C[0x30 - 0x2C];
    s32 f30;
    u8 pad34[0x40 - 0x34];
};

struct NpcSet_801EFC54 {
    u8 pad0[0xC];
    f32 x;
    f32 y;
    f32 z;
    u8 pad18[0x24 - 0x18];
    f32 f24;
    f32 f28;
    u8 pad2C[0x30 - 0x2C];
    s32 f30;
    u8 pad34[0x40 - 0x34];
};

struct NpcSet_801EFD3C {
    u8 pad0[0xC];
    f32 x;
    f32 y;
    f32 z;
    u8 pad18[0x24 - 0x18];
    f32 f24;
    f32 f28;
    u8 pad2C[0x30 - 0x2C];
    s32 f30;
    u8 pad34[0x40 - 0x34];
};

typedef struct Vec_801F0034 { f32 x, y, z; } Vec_801F0034;

struct RecoveredGlobal_801F027C_TLobby__data_80512220;

struct Vec_801F0110 {
    f32 x, y, z;
};

struct Vec_801F0458 { f32 x, y, z; };

struct Vec_801F0574 {
    f32 x, y, z;
};

typedef struct Vec_801F0710 { f32 x, y, z; } Vec_801F0710;

struct Vec_801F07D8 {
    f32 x, y, z;
};

struct Vec_801F08AC {
    f32 x, y, z;
};

struct WalkCmd_801F09EC {
    u16 f0;
    u16 player;
    f32 x;
    f32 z;
    u32 flags;
};

struct Obj_801F09EC {
    u8 pad[0x30];
    u32 f30;
};

struct Vec_801F12F0 {
    f32 x, y, z;
};

struct Npc_801F1450 {
    s16 h0;
    s16 h2;
    s32 flags;
    f32 f8;
    f32 fC;
    f32 f10;
    f32 f14;
    f32 f18;
    f32 f1C;
    u8 b20;
    u8 b21;
    u8 b22;
    u8 b23;
    f32 f24;
};

void * memcpy(void *, const void *, u32);
M2C_UNK memset(void *, int, int);
int TKeyBoardControl__sub_8000F950(void);
void mark_area_change_pending();
M2C_UNK add_meseta__10TObjPlayerFl(s32, s32);
void VecCopy__FP3VecPC3Vec(Vec_801F0574 *, const void *);
int obj_isState2_324(TObjPlayer*);
s16 obj_getS16_32E(u8 *);
s32 obj_getPtr2B0_20();
s16 obj_getS16_2BA(u8 *);
s16 obj_getS16_32C(u8 *);
s32 obj_isState3_324(int);
void * get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
s32 is_split_screen();
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(u8 *);
f64 atan2_float(void *, f32, f32);
void broadcast__6TLobbyFPv(void *);
void TLobby__sub_8001DE30(void *);
void copy_all_entries__6TLobbyFPv(void *);
M2C_UNK copy_data__6TLobbyFPv(void *);
s32 TLobby__sub_8001DEA8(int);
void swap_endian__6TLobbyFPv(void *);
void byteswap_packet__6TLobbyFPv(void *);
M2C_UNK bswap__12player_statsFv(void *);
Ctx_801EA5FC * get_global_state__23TAdSinglePlyChrSelectGCFv();
M2C_UNK setControlOverride__12TBoss1DragonFs(int, void *);
s32 get_game_mode__6TLobbyFv(void);
s32 is_boss_phase_reached__6TLobbyFv();
f32 * get_position_ptr__10TObjPlayerFPv();
int set_camera_capture_overlay_alpha(void*);
int set_shake_preset__11TCameraCtrlFi(void*);
M2C_UNK reset_cameras_to_actor(M2C_UNK, M2C_UNK);
s32 is_quest_active();
M2C_UNK reset_battle_camera__11TCameraCtrlFPv();
void TCameraCtrl__sub_8006B3B8(Vec_801EE220 *, Vec_801EE220 *);
int reset_to_local_player__11TCameraCtrlFv(void*);
void set_override_position_and_angle__11TCameraCtrlFPvs(Vec_801E9400 *, int, Vec_801E9400 *, int *);
void set_fixed_position_and_target__11TCameraCtrlFPvPv(Vec_801E945C *, Vec_801E945C *, Vec_801E945C *);
void request_follow_camera_offsets(Vec_801EF134 *, Vec_801EF134 *, u16);
int set_active_camera_flag__11TCameraCtrlFv(void*);
int end_conversation_camera(void*);
int begin_conversation_camera(void*);
u32 get_layout_id__20TWindowSubStatusDispFv(M2C_UNK);
M2C_UNK set_name_string__6TLobbyFi(s32);
M2C_UNK get_unit_list__6TLobbyFv();
M2C_UNK TLobby__sub_80070ACC();
M2C_UNK set_split_screen_flag__6TLobbyFv();
M2C_UNK TLobby__sub_80070B34(int);
s32 get_state__6TLobbyFv();
M2C_UNK TLobby__sub_80070BE8(M2C_UNK);
M2C_UNK TLobby__sub_80070C50();
M2C_UNK update_dead_list_win__6TLobbyFv();
M2C_UNK draw_if_ready__6TLobbyFv();
s32 check_ready_state__6TLobbyFv();
s32 get_max_challenge_time__6TLobbyFv();
M2C_UNK TLobby__sub_80070EE4(int);
s32 TLobby__sub_80070F4C();
s32 TLobby__sub_80070FD8();
M2C_UNK TLobby__sub_80071064(int);
s32 TLobby__sub_800710D8(Item_801EBF30 *);
s32 TLobby__sub_8007119C(s32);
void add_entry__6TLobbyFiii(void *, void *, s32);
void set_player_name_and_color__6TLobbyFPvi(void *, s32);
M2C_UNK set_selected_layout__6TLobbyFi(u32);
void try_set_value__6TLobbyFf(f32);
M2C_UNK set_split_screen_flag__6TLobbyFi(s32);
M2C_UNK rebuild_players_for_stage__10TObjPlayerFi(s32);
s32 copy_player_visual_record(void *, int);
s16 get_field_2b8__14TItemProShieldFPv(u8 *);
s32 fn_80077788(void);
s32 fn_80077790(void);
M2C_UNK __ct__16TPlyGuildCardTagFv(s32);
int reset_state__9TCineCtrlFi(void*);
int reset__9TCineCtrlFi(void*);
int count_active_cards__17TWindowSubComCardFv(void);
void * get_state__23TAdSinglePlyChrSelectGCFv();
volatile unsigned long get_actor_section_id(int);
u32 create_timed_particle_emitter(void* v, s32 a, s32 b, s32 c);
void set_flags__11TBoss4Type2FPvUi(void*, s32);
s32 get_field_d8__10TObjPlayerFPv(void *);
M2C_UNK clear_flag_3__7TObjectFv(void *);
u32 prs_decompress_buffer(s32, s32);
int init_fadeout_state__6TLobbyFi(void*);
int set_fade_params__6TLobbyFi(void*);
void TLobby__sub_800F8498(u32, s32, s32, s32, u8, u8, u8, u8);
M2C_UNK init__22THunterGuildSeqOfflineFPvPvPv(void *, s32, M2C_UNK *);
u32 get_serial_access__22TQuestVmDownLoadServerFPv();
u32 poll_serial_access__22TQuestVmDownLoadServerFPv();
void clear_flag_2__11TWindowCtrlFv(void);
s32 set_close_flag__11TWindowCtrlFv();
void * find_item_by_id(s32);
void copy_to_item_data__5TItemFPvPv(void *, Item_801EE77C *);
M2C_UNK TLobby__sub_801036CC();
s32 get_lobby_flag__6TLobbyFv(void);
s32 get_drop_flag__6TLobbyFv(void);
s32 forward_to_player__6TLobbyFiPv(int, void *);
M2C_UNK handle_player_event__6TLobbyFii(int, int);
s32 is_script_controlled__10TObjPlayerFPv();
s32 activate_d04_slot__10TObjPlayerFPv();
M2C_UNK create_instance__12TItemDropSubFi(int, void *);
void init__9TItemDataFv(Item_801EE77C *);
s16 get_mag_item_data(s32);
s16 get_mag_level(s32);
s16 get_mag_item_percent(s32);
s16 get_mag_item_stat_percent();
s32 open_menu__13TItemMenuCtrlFUi(int);
s32 advance_item_id_counter(u16);
s16 get_kill_count__10TObjPlayerFPv(void *);
f32 xz_distance_squared(Vec3_801E79BC *, Vec3_801E79BC *);
f32 xyz_distance_squared(void *, void *);
s32 select_download_type__6TLobbyFi(int);
void set_ready_flag__18TCheckRoomSequenceFPv(s32 win);
void TLobby__sub_80141038(u8 *arg0, s32 arg1, s32 arg2);
int TLobby__sub_80142944(void *);
int TNpcPlayer__sub_8014DC30(void*);
void sync_from_lobby__10TNpcPlayerFPv(WalkCmd_801F09EC *);
void init_6x40_walk_packet(WalkCmd_801F09EC *);
u8 * find_entity_by_id(u16);
void set_trigger_text__12TOChatSensorFPvPv(void *, s32);
void * TOChatSensor__create(Spawn_801EA508 *);
void byteswap_and_send__6TLobbyFi(s32 arg0);
void init_packet_67_04__6TLobbyFPv(void* p);
void finalize_and_send_60__6TLobbyFPv(void* p);
void* init_6x05_switch_changed__6TLobbyFPv(void* p);
void TOMineTrap__sub_80171368(f32);
int set_instance__10TOMineTrapFi(void*);
int set_trap_count__10TOMineTrapFi(void*);
void * create__17TOSymbolchatColliFPv(void *arg0);
int clear_enabled_main_warps(void*);
s32 clear_active_bit__16TObjCityMainWarpFv(int);
M2C_UNK set_active_bit__16TObjCityMainWarpFv(int);
s32 TLobby__sub_80190FD0(int);
void * create_npc__6TLobbyFPv(NpcSet_801EF3B4 *);
int TObjHashiVersus2__sub_801912A4(void*);
int TObjHashiVersus2__sub_801912B0(void*);
M2C_UNK delete_by_param__13TQuestColCtrlFi(int, void *);
void * create_quest_col_apc_inw__6TLobbyFPvPv(Spawn_801E8930 *, int *);
int fn_8019608C(void*);
void * fn_80196214(Spawn_801E8C14 *, s32 *);
void * fn_801963A8(Spawn_801E8D44 *, s32 *);
void * create_quest_col_alock(Spawn_801E8AE8 *, s32 *);
void * fn_80196814(Spawn_801E8E4C *, s32 *);
void * create_quest_col(Spawn_801E8F54 *, s32 *);
int load_memcard_file(void);
int TLobby__sub_80197F74(void);
M2C_UNK fn_80197FD0(void *, int);
s32 get_dest_area__17TObjAreaWarpQuestFPv(void *);
s32 is_current_room__10TObjRoomIdFPv();
s16 get_stat_by_key_state__10TObjPlayerFPv(u8 *);
int clear_counter__6TLobbyFv(void);
int clear_quest_state__6TLobbyFv(void*);
int reset_quest_counter__6TLobbyFv(void*);
int set_cleanup_flag__6TLobbyFv(void*);
int reset_instance__8TObjDoorFv(void);
int reset_door_state__6TLobbyFv(void);
s32 get_card_window_field_244__10TObjPlayerFPv();
M2C_UNK init_local_pad_binding__10TObjPlayerFPv();
M2C_UNK stop_force_if_alive__10TObjPlayerFPv();
int get_max_level__10TObjPlayerFv(void);
M2C_UNK TObjPlayer__sub_801AF904();
M2C_UNK send_field1c_packet__6TLobbyFi();
M2C_UNK send_font_state__6TLobbyFi();
int count_members__6TLobbyFv(void);
M2C_UNK draw_small_label__15TFontSmallLobbyFi(int);
M2C_UNK TLobby__sub_801B1254(int);
M2C_UNK foreach_player__10TObjPlayerFv(M2C_UNK *);
void send_6x24_teleport_player(u16, Vec_801F0110 *, s32);
M2C_UNK prepare_guild_return__10TObjPlayerFPv(u32, M2C_UNK);
M2C_UNK player_flag_1__6TLobbyFPv();
s32 check_player_state_flag_2__6TLobbyFPv(int);
M2C_UNK stop_battle__10TObjPlayerFPv();
M2C_UNK enable_action_input__10TObjPlayerFPv();
M2C_UNK disable_action_input__10TObjPlayerFPv();
M2C_UNK TObjPlayer__sub_801B3FD8();
M2C_UNK attach_battle_ctrl_sub__10TObjPlayerFPv(s32);
M2C_UNK forward_1BF500_at_63c__10TObjPlayerFPv(s32);
M2C_UNK TObjPlayer__sub_801B4044();
M2C_UNK send_code50_packet__10TObjPlayerFi(int);
M2C_UNK send_code_49_1__10TObjPlayerFi();
M2C_UNK release_attached_resource__10TObjPlayerFPv(s32);
M2C_UNK action_enable_if_present__10TObjPlayerFPv(s32);
void request_inventory_item__10TObjPlayerFP9TItemData(void *, Item_801EEE68 *);
void get_item_record__23TShopJudgmentItemWindowFPv(void *, s32, s32);
M2C_UNK send_6x29_delete_item__10TObjPlayerFPvii(u32, s32, s32);
s32 can_inventory_accept_item__10TObjPlayerFPvPv(void *, Item_801EEE68 *);
u32 get_player_by_client_id(s32);
void send_6x21_inter_level_warp(int, void *);
void set_speed__10TObjPlayerFPvf(PlayerScaleState*, f32);
u32 TObjPlayer__sub_801BFFA0(void *);
M2C_UNK TFontSmallLobby__sub_801C013C(void *);
void init_battle_ctrl__6TLobbyFii(s32, s32);
M2C_UNK request_player_size_restore(void *);
M2C_UNK request_player_shrink(void *);
Vec_801ECFDC * TObjPlayer__sub_801C6FDC(void *);
void * set_mode_and_refresh_object__10TObjPlayerFPvi(void *, Item_801EE77C *);
void * start_inventory_update__10TObjPlayerFPvi(void *, s32);
void * get_owner_if_alive__10TObjPlayerFPv(void *);
M2C_UNK fn_801DA140(int, int, int);
M2C_UNK DateToSeconds__FP9DateStampPi(void *, void *);
M2C_UNK getDateStamp__FP9DateStamp(void *);
s32 force_bgm__13TQuestBgmCtrlFi(int);
s32 defer_bgm__13TQuestBgmCtrlFi(int);
void* __ct__13TQuestBgmCtrlFP7TObject(void*, s32);
void request_1c38_1_7__6TLobbyFv(void);
void reset_and_set_mode__6TLobbyFv(void);
void TLobby__sub_801E72B4(u8 i);
void dispatch_story_select_by_op__6TLobbyFi(s32 arg0);
void TLobby__sub_801E7408(void);
void spawn_lobby_object__6TLobbyFv(void);
void close_active_window__6TLobbyFi(int a0);
void op_play_sound_from_reg__6TLobbyFi(s32 arg0);
void create_help_window__6TLobbyFv(void);
void send_data__6TLobbyFv(void);
void fill_player_present_flags__6TLobbyFUc(u8 out);
void TLobby__sub_801E7810(u8 i, u8 out);
void set_card_window_entry__6TLobbyFv(void);
void TLobby__sub_801E7934(void);
void TLobby__sub_801E7AC8(void);
void TLobby__sub_801E7B64(void);
void store_player_section_id__6TLobbyFv(void);
void TLobby__sub_801E7CCC(void);
void TLobby__sub_801E7CFC(void);
void TLobby__sub_801E7D7C(u8 i);
void set_handler_entry__6TLobbyFi(int a0);
void TLobby__sub_801E7E50(s32 arg0);
void quest_vm_get_language(void);
void copy_item_data_to_quest_buffer__6TLobbyFv(void);
void notify_player_battle__6TLobbyFv(void);
int get_selected_slot__6TLobbyFPv(void* p);
int destroy__6TLobbyFPv(void* p);
int init_graph__6TLobbyFPv(void* p);
void init_local_pad_if_client_exists__6TLobbyFv(void);
void stop_force_for_client__6TLobbyFv(void);
void TLobby__sub_801E8390(void);
void TLobby__sub_801E83BC(void);
void op_player_cmd_a__6TLobbyFv(void);
void op_player_cmd_b__6TLobbyFv(void);
void clear_flag3__6TLobbyFv(void);
void free_static__6TLobbyFv(void);
void update_card_window_slot__6TLobbyFv(void);
void TLobby__sub_801E85B4(void);
void op_cos__6TLobbyFv(void);
void op_sin__6TLobbyFv(void);
void op_fdiv_reg__6TLobbyFUci(u8 reg, s32 val);
void op_fdiv_reg_reg__6TLobbyFUcUc(u8 reg, u8 src);
void mul_reg_by_immediate_float__6TLobbyFUci(u8 reg, s32 val);
void mul_reg_by_reg_float__6TLobbyFUcUc(u8 reg, u8 src);
void sub_register_float_imm__6TLobbyFUci(u8 reg, s32 val);
void sub_register_float_reg__6TLobbyFUcUc(u8 reg, u8 src);
void add_imm_float_to_reg__6TLobbyFUci(u8 reg, s32 val);
void add_reg_to_reg_float__6TLobbyFUcUc(u8 reg, u8 src);
void op_move_reg_reg__6TLobbyFii(s32 arg0, s32 arg1);
void TLobby__sub_801E905C(void);
void TLobby__sub_801E9084(void);
void clear_flag__6TLobbyFv(void);
void free_child__6TLobbyFv(void);
void set_partner_dialogue_for_slot__6TLobbyFUcUcPv(u8 a0, u8 a1, void *a2);
void compute_path_point__6TLobbyFv(void);
void calc_path_point__6TLobbyFv(void);
void load_reg_table_f28__6TLobbyFUcUc(u8 a0, u8 a1);
void load_reg_table_f20__6TLobbyFUcUc(u8 src, u8 dst);
int TLobby__sub_801E93E0(void* p);
void TLobby__sub_801E9400(void);
void set_fixed_camera_from_table__6TLobbyFv(void);
void op_close_windows_by_flags__6TLobbyFi(s32 arg0);
int TLobby__sub_801E95B0(void* p);
int find_player_143__6TLobbyFv(void);
void op_window_ctrl_mode_b__6TLobbyFi(s32 arg0);
void start_slot_mode_10__6TLobbyFi(s32 arg0);
void TLobby__sub_801E9654(s32 arg0);
void TLobby__sub_801E9684(s32 arg0);
void TLobby__sub_801E96B4(s32 arg0);
void dispatch_slot_event_6__6TLobbyFi(s32 arg0);
void dispatch_slot_event_5__6TLobbyFi(s32 arg0);
void op_window_ctrl_mode4__6TLobbyFi(s32 arg0);
void op_window_ctrl_mode3__6TLobbyFi(s32 arg0);
void start_slot_mode_2__6TLobbyFi(s32 arg0);
void TLobby__sub_801E97D4(s32 arg0);
void TLobby__sub_801E9804(s32 arg0);
void TLobby__sub_801E9834(s32 arg0);
void TLobby__sub_801E9864(s32 arg0, s32 arg1);
void end_camera_pan_for_slot__6TLobbyFi(s32 arg0);
void TLobby__sub_801E99A0(s32 arg0, s32 arg1);
void reset_random_enemies_mode__6TLobbyFv(void);
void create_hunter_guild_seq__6TLobbyFv(void);
void TLobby__sub_801E9A50(s32 arg0);
void create_challenge_4p_results__6TLobbyFUc(u8 arg0);
void TLobby__sub_801E9AF8(s32 idx);
void update_and_apply_alloc__6TLobbyFv(void);
void set_lobby_mode_slot__6TLobbyFi(s32 arg0);
void TLobby__sub_801E9C40(void);
void set_story_select__6TLobbyFi(s32 arg0);
int TLobby__sub_801E9CD0(void* p);
void cache_player_field__6TLobbyFv(void);
void update_by_screen_mode__6TLobbyFv(void);
void update_split_screen__6TLobbyFv(void);
void TLobby__sub_801E9D94(s32 arg0);
void TLobby__sub_801E9DEC(u8 out);
void quest_vm_store_s32_indirect(void);
void quest_vm_store_s16_indirect(void);
void quest_vm_store_s8_indirect(void);
void quest_vm_load_s32_indirect(void);
void quest_vm_load_s16_indirect(void);
void load_reg_from_signed_byte__6TLobbyFv(void);
void set_unit_list_flag__6TLobbyFi(s32 arg0);
void set_unit_name_flag__6TLobbyFi(s32 arg0);
void set_handler__6TLobbyFi(int a0);
void store_card_stats__6TLobbyFUc(u8 i);
void TLobby__sub_801EA1B4(s32 arg0);
void op_set_reg_from_flag__6TLobbyFi(s32 arg0);
void TLobby__sub_801EA274(void);
void quest_set_player_shrink_size(s32 player_variable, s32 size_variable);
void spawn_symbolchat_colli__6TLobbyFUc(u8 i);
void create_chat_sensor__6TLobbyFUc(u8 i);
void TLobby__sub_801EA5FC(u8 arg0);
void get_or_create_handle__6TLobbyFv(void);
void TLobby__sub_801EA690(s32 arg0);
void handle_split_screen__6TLobbyFv(void);
void apply_split_screen__6TLobbyFv(void);
void TLobby__sub_801EA7A0(s32 arg0);
void load_setting_13_from_table__6TLobbyFv(void);
void draw_or_send__6TLobbyFv(void);
void TLobby__sub_801EA84C(s32 arg0);
void TLobby__sub_801EA8E8(void);
void roll_random_in_range__6TLobbyFii(s32 arg0, s32 arg1);
void quest_vm_shift_right_arithmetic_register(s32 arg0, s32 arg1);
void quest_vm_shift_left_register(s32 arg0, s32 arg1);
void copy_script_register_from_buffer__6TLobbyFUcUc(u8 a0, u8 a1);
void load_chr_select_word__6TLobbyFUcUc(u8 a0, u8 a1);
void broadcast_entry__6TLobbyFi(s32 arg0);
void TLobby__sub_801EAB90(s32 arg0);
void TLobby__sub_801EABEC(s32 arg0);
void TLobby__sub_801EAC48(int _w0);
void dispatch_state_value__6TLobbyFv(void);
void spawn_chat_sensor__6TLobbyFv(void);
void TLobby__sub_801EB048(s32 arg0);
void TLobby__sub_801EB0A0(s32 arg0);
void TLobby__sub_801EB0F8(s32 arg0);
void TLobby__sub_801EB10C(void);
s32 init_guild_card_tag__6TLobbyFi(s32 arg0);
void update_player_status__6TLobbyFii(s32 arg0, s32 arg1);
void TLobby__sub_801EB46C(void);
void TLobby__sub_801EB478(void);
void TLobby__sub_801EB484(u8 src, u8 dst);
void copy_table_value__6TLobbyFUcUc(u8 a0, u8 a1);
void write_state_s32_to_buffer__6TLobbyFv(void);
int forward_802272B4__6TLobbyFPv(void* p);
int TLobby__sub_801EB588(void* p);
void TLobby__sub_801EB5A8(void);
void decompress_indexed_resource__6TLobbyFv(void);
void update_client_slot_from_player__6TLobbyFii(s32 arg0, s32 arg1);
void write_state_s16_to_buffer__6TLobbyFv(void);
void TLobby__sub_801EB6B8(s32 arg0);
void store_player_name_by_client__6TLobbyFi(s32 arg0);
void eval_op_add_ratio__6TLobbyFi(s32 i);
void TLobby__sub_801EB85C(s32 arg0, s32 arg1);
void acquire_serial_access_for_slot__6TLobbyFUc(u8 arg0);
void TLobby__sub_801EB914(s32 arg0);
void store_chr_select_value__6TLobbyFi(s32 arg0);
void store_player_state_flag__6TLobbyFii(s32 arg0, s32 arg1);
void apply_to_player_by_client_id_a__6TLobbyFi(s32 arg0);
void apply_to_player_by_client_id_b__6TLobbyFi(s32 arg0);
void TLobby__sub_801EBCA0(s32 arg0);
void TLobby__sub_801EBCF0(s32 arg0);
void TLobby__sub_801EBD40(void);
void store_boss_phase_flag__6TLobbyFi(s32 arg0);
int TLobby__sub_801EBE6C(void);
int enable_mine_trap__6TLobbyFv(void);
void init_menu_state__6TLobbyFi(int a0);
void TLobby__sub_801EBF04(s32 arg0);
void create_item_from_table__6TLobbyFUcUc(u8 arg0, u8 arg1);
void TLobby__sub_801EC050(u8 arg0, u8 arg1);
void count_nearby_players__6TLobbyFUcUc(u8 arg0, u8 arg1);
void init_window__6TLobbyFv(void);
void init_state__6TLobbyFv(void);
void TLobby__sub_801EC43C(void);
void write_mag_stats__6TLobbyFi(s32 i);
void add_to_free_slot__6TLobbyFv(void);
void clear_reg_block__6TLobbyFv(void);
void TLobby__sub_801EC64C(void);
void load_setting_17_from_table__6TLobbyFv(void);
void TLobby__sub_801EC694(void);
void update_main_phase__6TLobbyFv(int _w0, int _w1);
void handle_player_event_from_data__6TLobbyFv(void);
void forward_item_to_player__6TLobbyFUc(u8 i);
int TLobby__sub_801EC7A0(void);
int TLobby__sub_801EC7C4(void);
void dispatch_first_player__6TLobbyFv(void);
int TLobby__sub_801EC834(void* p);
int TLobby__sub_801EC854(void* p);
int TLobby__sub_801EC874(void* p);
int forward_801F36D8__6TLobbyFPv(void* p);
void TLobby__sub_801EC8B4(void);
void apply_global_805D3614__6TLobbyFv(void);
void TLobby__sub_801EC90C(void);
void TLobby__sub_801EC93C(void);
void TLobby__sub_801EC954(void);
void TLobby__sub_801EC984(void);
void copy_clamped_setting_to_slot__6TLobbyFv(void);
void TLobby__sub_801EC9F8(void);
void TLobby__sub_801ECA1C(void);
void TLobby__sub_801ECF2C(s32 arg0);
void copy_player_visual_record_by_index__6TLobbyFi(s32 arg0);
int TLobby__sub_801ECFBC(void* p);
void TLobby__sub_801ECFDC(u8 arg0);
void TLobby__sub_801ED0CC(u8 arg0);
void qst_op_unshrink(s32 arg0);
void qst_op_shrink(s32 arg0);
void store_floor_switch_state__6TLobbyFi(s32 arg0);
void update_floor_switch_state__6TLobbyFi(s32 arg0);
void send_6x05_switch_changed_off__6TLobbyFv(void);
void send_6x05_switch_changed_on__6TLobbyFv(void);
void reset_player_floor_by_slot__6TLobbyFi(s32 arg0);
void store_player_kill_count__6TLobbyFii(s32 arg0, s32 arg1);
void warp_player_to_area__6TLobbyFii(s32 a, s32 b);
void TLobby__sub_801ED50C(void* p);
void op_set_control_override__6TLobbyFi(s32 arg0);
void TLobby__sub_801ED55C(s32 arg0);
void TLobby__sub_801ED5B4(s32 arg0);
void dispatch_split_screen__6TLobbyFv(void);
void update_split_screen_camera__6TLobbyFv(void);
void TLobby__sub_801ED764(s32 arg0);
void spawn_item_from_regs__6TLobbyFUc(u8 arg0);
void apply_player_count__6TLobbyFv(void);
void TLobby__sub_801ED938(void);
void op_set_mode_byte__6TLobbyFv(void);
void update_table_byte8__6TLobbyFv(void);
void update_table_byte7__6TLobbyFv(void);
void TLobby__sub_801EDA70(void);
void TLobby__sub_801EDABC(void);
void TLobby__sub_801EDB04(void);
void TLobby__sub_801EDB4C(void);
void set_menu_byte_2__6TLobbyFv(void);
void set_menu_byte_1__6TLobbyFv(void);
void set_menu_byte_0__6TLobbyFv(void);
void op_clear_block__6TLobbyFv(void);
void TLobby__sub_801EDC98(void);
void send_field1c_if_player_exists__6TLobbyFii(int _w0, int _w1);
void send_font_state_if_player_exists__6TLobbyFii(int _w0, int _w1);
void qst_op_map_designate_ex(u32 first);
int TLobby__sub_801EDDDC(void);
int TLobby__sub_801EDE00(void);
void store_player_position__6TLobbyFii(s32 a, s32 b);
void store_status__6TLobbyFi(int a0);
void qst_op_get_difficulty_level2__6TLobbyFi(s32 arg0);
void create_quest_bgm_ctrl__6TLobbyFv(void);
void send_switch_changed_from_args__6TLobbyFi(s32 arg0);
void quest_vm_get_designated_client_id(u8 reg);
void quest_vm_get_local_client_id(u8 reg);
int forward_801F36E4__6TLobbyFPv(void* p);
int qst_op_warp_on(void* p);
void send_packet_67_04__6TLobbyFv(void);
void TLobby__sub_801EE09C(void* p);
void check_item_equippable_by_room__6TLobbyFUcUc(u8 arg0, u8 arg1);
void handle_active_battle__6TLobbyFv(void);
void sync_battle_ctrl_4p__6TLobbyFv(void);
void reset_battle_camera__6TLobbyFv(void);
void send_6x77_sync_quest_register(void);
void TLobby__sub_801EE374(void);
void TLobby__sub_801EE3C0(void);
void update_local_player__6TLobbyFv(void);
void attach_battle_ctrl__6TLobbyFv(void);
void TLobby__sub_801EE48C(void);
void process_static_805D53A0__6TLobbyFv(void);
void TLobby__sub_801EE4D4(void);
int TLobby__sub_801EE4D8(void);
void notify_guild_offline__6TLobbyFUs(u16 arg0);
void qst_op_get_difficulty_level_v1__6TLobbyFi(s32 arg0);
void TLobby__sub_801EE54C(void);
void qst_op_clear_quest_board_handler(void);
void qst_op_set_quest_board_handler(void);
void set_table_entry__6TLobbyFi(int a0);
void qst_op_winset_time(s32 arg0);
int qst_op_winend_time(void* p);
int create_alt_timer__6TLobbyFPv(void* p);
void open_door__6TLobbyFv(void);
void update_doors__6TLobbyFv(void);
void qst_op_map_designate(u32 first);
void TLobby__sub_801EE77C(u8 arg0, u8 arg1);
void qst_op_item_check(u32 first, u32 destination);
void qst_op_item_delete2(u32 src, u32 dst);
void qst_op_item_delete(u32 src, u32 dst);
void qst_op_item_create2(u8 arg0, u8 arg1);
void qst_op_item_create(u8 arg0, u8 arg1);
void qst_op_del_obj_param(s32 arg0);
void notify_battle_ctrl_player__6TLobbyFv(void);
void qst_op_pl_add_meseta(void);
int qst_op_clr_qt_cancel(void);
int qst_op_clr_qt_success(void);
int qst_op_clr_qt_failure(void);
void qst_op_set_qt_cancel(u16 arg0);
void qst_op_set_qt_success(u16 arg0);
void qst_op_set_qt_failure(u16 arg0);
void qst_op_clr_floor_handler(void);
void qst_op_set_floor_handler(void);
int TLobby__sub_801EF24C(void* p);
void clear_active_bit_from_data__6TLobbyFv(void);
void qst_op_set_mainwarp(void);
void qst_op_force_bgm__6TLobbyFv(void);
void qst_op_playbgm_epi(void);
void qst_op_switch_off(void);
void qst_op_switch_on(void);
void qst_op_npc_talk_kill(void);
void qst_op_p_talk_guild(void);
void qst_op_p_return_guild(void);
int forward_npc_player__6TLobbyFPv(void* p);
void cleanup_luker_and_quest_flag__6TLobbyFv(void);
void clear_quest_vm__6TLobbyFv(void);
void set_partner_remark_from_state__6TLobbyFv(void);
void qst_op_nop_A0_debug(void);
int qst_op_cine_disable(void);
int qst_op_cine_enable(void);
void qst_op_hud_show(void);
void qst_op_hud_hide(void);
int TLobby__sub_801EF748(void* p);
int TLobby__sub_801EF768(void* p);
int TLobby__sub_801EF788(void* p);
void qst_op_gettime(u8 arg0);
void qst_op_unhide_ene(s32 arg0);
void qst_op_unhide_obj(s32 arg0);
void qst_op_chk_ene_num(int a0);
void qst_op_if_zone_clear(s32 arg0, s32 arg1);
void qst_op_p_action_enable(void);
void qst_op_p_action_disable(void);
void qst_op_create_pipe(void);
void qst_op_p_enablewarp(void);
void qst_op_p_disablewarp(void);
void qst_op_p_dead(void);
void qst_op_p_look_at(void);
void spawn_flagged_particle_emitter__6TLobbyFv(void);
void qst_op_p_look(void);
int qst_op_p_col(void* p);
int qst_op_p_noncol(void* p);
void qst_op_enable_movement1(void);
void qst_op_disable_movement1(void);
int qst_op_npc_talk(void* p);
int qst_op_npc_nont(void* p);
void qst_op_npc_kill(void);
int qst_op_cam_adj(void* p);
void qst_op_game_lev_reset_nop_86(void);
void qst_op_game_lev_super_nop_85(void);
int qst_op_cam_zmout(void* p);
int qst_op_cam_zmin(void* p);
int qst_op_cam_quake(void);
void qst_op_npc_play(void);
void qst_op_npc_stop(void);
void qst_op_npc_crtpk(void);
void qst_op_npc_crt(void);
void qst_op_winend(void);
void qst_op_mesend(void);
void qst_op_add_msg(void);
void close_window__6TLobbyFv(void);
void quest_cmd_winend(void);
void qst_op_window_msg(void);
void qst_op_bgm(void);
void qst_op_se(void);
void qst_op_fadeout(void);
void qst_op_fadein(void);
void qst_op_list(void);
void qst_op_message(void);
void pop_stack_into_slots__6TLobbyFii(s32 arg0, s32 arg1);
void push_op_args_from_table__6TLobbyFii(s32, s32);
void set_slot__6TLobbyFi(int a0);
void qst_op_nop_42_stack_push(s32 arg0);
void qst_op_switch_call(s32 arg0, u8 arg1, s32 arg2);
void qst_op_switch_jmp(s32 arg0, u8 arg1, s32 arg2);
void qst_op_jmpi_le(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmp_le(s32 arg0, s32 arg1, s32 arg2);
void qst_op_ujmpi_le(s32 arg0, u32 arg1, s32 arg2);
void qst_op_ujmp_le(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmpi_ge(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmp_ge(s32 arg0, s32 arg1, s32 arg2);
void qst_op_ujmpi_ge(s32 arg0, u32 arg1, s32 arg2);
void qst_op_ujmp_ge(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmpi_lt(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmp_lt(s32 arg0, s32 arg1, s32 arg2);
void qst_op_ujmpi_lt(s32 arg0, u32 arg1, s32 arg2);
void qst_op_ujmp_lt(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmpi_gt(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmp_gt(s32 arg0, s32 arg1, s32 arg2);
void qst_op_ujmpi_gt(s32 arg0, u32 arg1, s32 arg2);
void qst_op_ujmp_gt(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmpi_ne(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmp_ne(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmpi_eq(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmp_eq(s32 arg0, s32 arg1, s32 arg2);
void qst_op_jmp_off(s32 arg0, u8 arg1, u8 *arg2);
void qst_op_jmp_on(s32 arg0, u8 arg1, u8 *arg2);
void qst_op_call(u16 arg0);
void quest_vm_modulo_unsigned_immediate(s32 arg0, u32 arg1);
void op_mod_reg__6TLobbyFii(s32 arg0, s32 arg1);
void qst_op_jmp(int a0);
void qst_op_xori(s32 arg0, s32 arg1);
void qst_op_xor(s32 arg0, s32 arg1);
void qst_op_ori(s32 arg0, s32 arg1);
void qst_op_or(s32 arg0, s32 arg1);
void qst_op_andi(s32 arg0, s32 arg1);
void qst_op_and(s32 arg0, s32 arg1);
void qst_op_divi(s32 arg0, s32 arg1);
void qst_op_div(s32 arg0, s32 arg1);
void qst_op_muli(s32 arg0, s32 arg1);
void qst_op_mul(s32 arg0, s32 arg1);
void qst_op_subi(s32 arg0, s32 arg1);
void qst_op_sub(s32 arg0, s32 arg1);
void qst_op_addi(int a0, int a1);
void qst_op_add(s32 arg0, s32 arg1);
void qst_op_gget(u16 arg0, s32 arg1);
void qst_op_glet(u16 arg0, s32 arg1);
namespace pf2_p5 { extern "C" { int pop_stack_value__6TLobbyFv(void); } }
#define pop_stack_value__6TLobbyFv pf2_p5::pop_stack_value__6TLobbyFv
namespace pf2_p5 { extern "C" { M2C_UNK push_op_arg__6TLobbyFi(int); } }
#define push_op_arg__6TLobbyFi pf2_p5::push_op_arg__6TLobbyFi
namespace pf2_p5 { extern "C" { u32 get_indexed_offset__6TLobbyFi(void *, int); } }
#define get_indexed_offset__6TLobbyFi pf2_p5::get_indexed_offset__6TLobbyFi
M2C_UNK clear_quest_vm_flag__6TLobbyFv();
M2C_UNK free_luker_object__6TLobbyFv(void);
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
void fn_801F34A0(void *);
s32 get_field_d4(void *);
s32 fn_get_field_3ac(void *);
M2C_UNK TMainTask__sub_801F34D0(void *);
void set_floor__6TLobbyFPvs(void *, s16);
M2C_UNK TLobby__sub_801F34E8(int, int);
s32 TLobby__sub_801F34F8();
void TLobby__sub_801F3500(void *, Vec_801E8930 *);
void bswap_4x32__6TLobbyFPv(void *);
int TLobby__sub_801F3568(void*);
void sync_quest_register_and_send__6TLobbyFPv(void* p);
void build_6x77_sync_quest_register(void* p);
s32 get_field_6CE8__6TLobbyFv();
s32 get_lobby_count__6TLobbyFv();
M2C_UNK TLobby__sub_801F3614();
void copy_position__6TLobbyFPv(void *, Vec_801ECFDC *);
void bswap_entry_words__6TLobbyFi(s32);
M2C_UNK TLobby__sub_801F3694(void *);
int TLobby__sub_801F36BC(void*);
s32 set_lobby_id__6TLobbyFi(int);
s32 set_global_805D3614__6TLobbyFi(int);
int TLobby__sub_801F36D8(void*);
int TLobby__sub_801F36E4(void*);
M2C_UNK TLobby__sub_801F36F0(int);
void TLobby__sub_801F36F8(s32, s32, s32, Item_801ED7BC *);
M2C_UNK TLobby__sub_801F3700(int);
void TLobby__sub_801F3708(s32, s32, s32, Item_801ED7BC *);
int set_mode__13TRaderMapCoreFi(void*);
int set_quest_exit_callback(void*);
int set_quest_cancel_callback(void*);
int set_quest_success_callback(void*);
int THunterGuildSeqOffline__sub_801F3748(void*);
int TObjDoor__sub_801F3754(void);
int TObjDoor__sub_801F3760(void);
M2C_UNK set_main_warp_id__8TObjDoorFi(int);
void set_quest_floor_designation_ex(s16, s32, s32, s32, s32);
void set_quest_floor_designation(s16, s32, s32, s32);
s32 get_story_flag(void *);
M2C_UNK clear_story_flag(void *);
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(void *);
int create__16TObjItemOKWindowFPv(void*);
int create__18TObjItemNameSelectFPv(void*);
int create__17TObjItemNameEntryFPv(void*);
M2C_UNK destroy_children_with_tag(s32);
s32 clear_floor_handler(int);
M2C_UNK set_floor_handler(int, int);
M2C_UNK clear_buffer__12TQuestThreadFPv(u32);
int hide_radar__13TRaderMapCoreFv(void);
int show_radar__13TRaderMapCoreFv(void);
M2C_UNK free_map_data__13TRaderMapCoreFv();
s32 find_entry__23TAdSinglePlyChrSelectGCFii(s32, ItemData_801E7810 *);
s32 get_character_save_record(u32);
s32 get_floor_map_terrain(int);
M2C_UNK request_story_select_state(int);
s32 set_state__16TAdStorySelectGCFi(s32);
void TLobby__sub_80207F30(Spawn_801EA508 *);
M2C_UNK clear_floor_event_flags();
M2C_UNK init_sub_objects__6TLobbyFv();
int count_quest_enemies_flag8__6TLobbyFv(void);
s32 is_room_enemy_set_cleared(int, int, void *);
s32 unhide_enemies_at__6TLobbyFiii(s32, s32, s32, s32);
void unhide_room_set_objects(s32 a, s16 b, s16 c, s32 d);
M2C_UNK reset_id_tables__6TLobbyFv();
s32 TCheckRoomSequence__sub_80210D44(Item_801EE0BC *, s32);
M2C_UNK handle_main_phase__6TLobbyFi();
void try_close__6TLobbyFPv(Tag_801EB10C *);
M2C_UNK play_sound_effect(int, int, int, int);
M2C_UNK play_cue_stream_file(int);
int TLobby__sub_802272B4(void*);
int TLobby__sub_8022733C(void*);
void set_area__6TLobbyFPvi(void *, int, int);
void tokenize_args__6TLobbyFPvPv(Card_801EB10C *, char *);
void parse_csv_line__6TLobbyFPvPv(void *, void *);
Card_801EB10C * construct__6TLobbyFPvPvPvPv(void *, void *, void *, void *);
void trim_whitespace__6TLobbyFPv(char *);
u8 is_floor_switch_set(int, int);
u8 is_current_floor_switch_set(int);
s32 clear_current_floor_switch(int);
s32 set_current_floor_switch(int);
M2C_UNK init_switch_table();
M2C_UNK update_all_task_lists__9TMainTaskFv(M2C_UNK *);
M2C_UNK clear_all_flag3__9TMainTaskFv(M2C_UNK *);
void * __nw__7TObjectFUl(u32);
M2C_UNK apply_all_players__9TTecLukerFv();
void create_for_player__9TTecLukerFii(int, Vec_801F0034 *);
s32 create_quest_telepipe_for_client(int);
M2C_UNK TWindow__close(void*);
void set_field_1c__6TLobbyFPvf(s32 win, f32 v);
s32 request_active_window_close();
void clear_flag__11TWindowCtrlFv(void);
M2C_UNK set_timer_window_time__11TWindowCtrlFi(int, void *);
int close_timer_window__11TWindowCtrlFv(void*);
int create_alt_timer__11TWindowCtrlFv(void*);
s32 close_window_if_active(void *);
int TObjPlayer__sub_8024ABDC(void*);
M2C_UNK TLobby__sub_8024AC20(void *);
int set_flag_bit2__11TWindowCtrlFv(void);
void clear_flag_bit2__11TWindowCtrlFv(void);
int suppress_slot__11TWindowCtrlFi(void*);
int unsuppress_slot__11TWindowCtrlFi(void*);
void set_field28__11TWindowCtrlFs(u16);
M2C_UNK close_windows_by_flags__11TWindowCtrlFUs(int, void *);
void open__11TWindowCtrlFiii(s32, s32, s32);
void open_default__11TWindowCtrlFPvi(u16, s32);
s32 __ct__15TWindowHelpItemFPvUs(s32, s32, s32);
void align_menu_entry_positions(s32 win);
void calc_window_size__17TWindowSubComCardFPv(s32 win);
void forward_trade_action_default__16TObjCityMainWarpFPviii(s32 win, char *name, s32 kind, s32 i);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(s32 a, s32 b);
void send_and_handle__6TLobbyFPvii(void*, s32, s32);
u32 update_window_mode_from_progress__6TLobbyFiPv(s32, Pair_801F1838 *);
void set_field_90__6TLobbyFPvi(void *, s32);
s32 dispatch_message_window_text(int, int, int);
void * create_quest_message_window_at(Vec2_801E74D0 *, Vec2_801E74D0 *);
u32 create_quest_message_window();
s32 get_window_layout_position(M2C_UNK);
M2C_UNK fn_80278518(void *, int);
M2C_UNK save_and_close__20TShopArmorListWindowFPv();
s32 create_equip_kind_window(s32, M2C_UNK *, s32);
M2C_UNK update_screen__6TLobbyFPv();
M2C_UNK set_challenge_split_flag__6TLobbyFPv();
M2C_UNK TLobby__sub_80291DF8(int);
s32 get_normalized_mode__6TLobbyFv();
M2C_UNK TLobby__sub_80291EAC(M2C_UNK);
M2C_UNK draw_if_ready2__6TLobbyFv();
s32 check_ready_status__6TLobbyFv();
M2C_UNK reset_menu_state_globals__6TLobbyFv();
s32 TLobby__sub_8029204C();
M2C_UNK TLobby__sub_80292200(int);
void TLobby__sub_80292268(void *, void *, s32);
s32 TLobby__sub_80292270(s32, s32);
s32 TLobby__sub_802924B4(Item_801EBF30 *, u16);
void set_encoded_name_and_color__6TLobbyFPvi(void *, s32);
M2C_UNK update_challenge_timer__6TLobbyFi(int);
void set_camera_height_if_valid__6TLobbyFf(f32);
M2C_UNK try_set_split_screen__6TLobbyFi(s32);
M2C_UNK rebuild_players_for_stage__6TLobbyFi(s32);
M2C_UNK clamp_and_store_layout_index__6TLobbyFi(u32);
s32 TLobby__sub_8029299C();
s32 TLobby__sub_80292A34();
s32 is_not_split_screen__13TRaderMapCoreFv(void);
void init_instance_with_text__19TPlayerBattleCtrl4PFii(s32, s32);
int destroy_singleton__6TLobbyFv(void*);
int init_graph__6TLobbyFv(void*);
M2C_UNK send_data__6TLobbyFi(s32);
int update_alloc_size__6TLobbyFv(void*);
int get_selected_slot__6TLobbyFv(void*);
void TLobby__sub_8032CC24();
M2C_UNK set_send_buffer__6TLobbyFPvi(s32, s32);
M2C_UNK TLobby__sub_8032CDEC();
void update_entries__18TChallenge4PResultFii(ItemData_801E72B4 *, s32);
s32 TChallenge4PResult__sub_8034B498();
s32 create__18TChallenge4PResultFii(int, int);
s32 clear_slot_entries__18TChallenge4PResultFv();
s32 fn_8034D3D0(u8 *, f32, s32, s32, s32, Vec3_801E915C *, s32);
s32 fn_8034D790(u8 *, f32, s32, s32, s32, Vec3_801E9274 *);
s32 set_partner_dialogue_override(u32, int, int);
M2C_UNK TLobby__sub_8034DAA0(int, int, void *);
void copy_entry_by_index__10TNpcPlayerFii(Npc_801F1450 *, s32);
int notify_all_battle_players__10TObjPlayerFv(void*);
int update_4p_battle_ctrls__10TObjPlayerFv(void*);
M2C_UNK set_partner_common_remark(int, int);
int clear_partner_dialogue_flags(void*);
void send_code_45_to_player__10TNpcPlayerFi(u16);
void play_effect__10TNpcPlayerFi(u16);
void quest_player_face_actor(u16, u16);
void quest_player_look_at_partner(u16);
void send_stop_at_position__10TNpcPlayerFUsPvs(u16, Vec_801F0458 *, s32);
int enable_partner_chatter__10TNpcPlayerFv(void*);
int disable_partner_chatter__10TNpcPlayerFv(void*);
s32 quest_remove_npc_player(int);
void send_inter_level_warp_all__10TNpcPlayerFi();
s32 send_npc_control_6x69__10TNpcPlayerFs(int);
s32 send_npc_stop_6x69__10TNpcPlayerFs(int);
void send_npc_control_create__10TNpcPlayerFsUssPvi(u16, u16, s32, Vec_801F12F0 *, s32);
void create_companion__10TNpcPlayerFUsUsiPvi(u16 leader, u16 slot, int appearance, f32* pos, int heading);
void create_default_companion__10TNpcPlayerFssPvi(u16 leader, int appearance, f32* pos, int heading);
s32 send_npc_control_notify_players__10TNpcPlayerFsUss(s32, s32, s32);
M2C_UNK send_npc_create__10TNpcPlayerFss(int, int);
M2C_UNK reset_player_lobby_model__10TNpcPlayerFUs(int, void *);
M2C_UNK update_player_field__10TNpcPlayerFUsi(int, int, void *);
M2C_UNK end_camera_pan_for_client__10TNpcPlayerFUs(int, void *);
M2C_UNK apply_to_battle_player_slot__10TNpcPlayerFUss(int, int, void *);
s32 TObjPlayer__sub_80354CCC(int);
s32 TObjPlayer__sub_80354D14(int);
s32 TObjPlayer__sub_80354DAC(int);
s32 TObjPlayer__sub_80354DF4(int);
void set_timer__6TLobbyFPvf(void *, f32);
void * open_message_scroll_window__6TLobbyFiii(Vec2_801E717C *, Vec2_801E717C *, void *);
void fn_80364C40(void *, s32, s32, f32);
s32 rand(void);
s32 strncmp(void *, void *, int);
s32 strcmp(void *, void *);
M2C_UNK strncpy(void *, int, int);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
s32 move_data__6TLobbyFv(void *, void *, int);
int TLobby__sub_803DF1CC(void);

extern E_801EB484 TLobby__duel_result_table[];
extern RecoveredGlobal_801F027C_TLobby__data_80512220 TLobby__quest_argument_stack;
extern RecoveredGlobal_801EDA70_TLobby__data_80512360 TLobby__data_80512360;
extern s32 TLobby__designated_client_id;
extern s32 TLobby__protocol_instance;
extern int TLobby__battle_ctrl_default_value;
extern int* TLobby__data_805D5E74;
extern int* TLobby__script_reg_array;
extern u8 *TLobby__quest_message_window;
extern u32 TLobby__quest_secondary_window;
extern s32 TLobby__quest_choice_window;
extern unsigned char TLobby__active_window_index;
extern int TLobby__quest_script_pc;
extern int TLobby__quest_window_state;
extern int TLobby__quest_arg_stack_count;
extern int TLobby__data_805D5EB0;
extern int TLobby__quest_window_object;
extern int TLobby__menu_state_object;
extern s32 TLobby__quest_state_object_168;
extern u32 TLobby__quest_state_object_16c;
extern u32 TLobby__data_805D5EC4;
extern s32 gba_download_data_buffer;
extern s32 gba_download_data_size;
extern M2C_UNK TLobby__data_805DC4A0;
extern int evt2_random_enemies_mode;
extern RecoveredGlobal_8000F7FC_lbl_80515F48 fn_801F3480;
extern RecoveredGlobal_801F196C_lbl_804499A8 quest_sound_effect_ids;
extern Pair_801F1838 lbl_80449A38[];
extern Tbl_801EDC98 lbl_80449A40;
extern RecoveredGlobal_801EDC24_lbl_80449A88 lbl_80449A88;
extern RecoveredGlobal_801EDBDC_lbl_80449A94 lbl_80449A94;
extern RecoveredGlobal_801EDB4C_lbl_80449AAC lbl_80449AA4;
extern RecoveredGlobal_801EDB4C_lbl_80449AAC lbl_80449AAC;
extern RecoveredGlobal_801EDB4C_lbl_80449AAC lbl_80449AB8;
extern RecoveredGlobal_801EDB4C_lbl_80449AAC lbl_80449AC0;
extern RecoveredGlobal_801EDA70_lbl_80449AC8 lbl_80449AC8;
extern RecoveredGlobal_801EDA70_lbl_80449AC8 lbl_80449AD4;
extern RecoveredGlobal_801EDB4C_lbl_80449AAC lbl_80449ADC;
extern RecoveredGlobal_801EDB4C_lbl_80449AAC lbl_80449AE4;
extern RecoveredGlobal_801EC90C_lbl_80449AFC lbl_80449AFC;
extern RecoveredGlobal_801EC90C_lbl_80449AFC lbl_80449B08;
extern s32 lbl_80449B10[];
extern Tbl_801E9AF8 lbl_80449B18[];
extern M2C_UNK lbl_80449B2C[];
extern const f64 lbl_80449CC0;
extern s32 qst_bgm_filename_table[];
extern RecoveredGlobal_801ECF84_lbl_8050D3E0 lbl_8050D3E0;
extern s32 symbolchat_colli_param_table[];
extern E_801E93B4 controller_input_state[];
extern s16 battle_event_second_table[];
extern RecoveredGlobal_801EB73C_lbl_80512340 quest_player_name_buffer;
extern RecoveredGlobal_801EB6B8_lbl_80512350 quest_player_class_name_buffer;
extern RecoveredGlobal_801EE5A4_lbl_805129F8 quest_board_handlers;
extern u8 lbl_80515BA0[];
extern f32 lbl_805D3538;
extern f32 lbl_805D353C;
extern f32 lbl_805D3540;
extern f32 lbl_805D3544;
extern f32 lbl_805D3548;
extern s32 resource_decompress_buffer;
extern s32 volopt_death_active;
extern s32 local_client_id;
extern s32 current_language;
extern s32 game_difficulty_selection;
extern f32 lbl_805D5DC4;
extern s32 quest_message_speaker_id;
extern u32 quest_mission_manager;
extern const f32 lbl_805DC4B8;
extern const f32 lbl_805DC4BC;
extern const f32 lbl_805DC4C0;
extern const f32 lbl_805DC4C4;
extern const f32 lbl_805DC4C8;
extern const f32 lbl_805DC4CC;
extern const f32 lbl_805DC4D4;
extern const f32 lbl_805DC4D8;
extern RecoveredGlobal_8000F7FC_lbl_80515F48 main_task;
extern s32 tl_00;
extern int tl_01;
extern void *tl_03;
extern void *tl_04;
extern s32 tl_05;

extern "C" {
extern RecoveredGlobal_801F027C_TLobby__data_80512220 TLobby__quest_argument_stack;
}

extern "C" {
extern RecoveredGlobal_801F027C_TLobby__data_80512220 TLobby__quest_argument_stack;
}

void request_1c38_1_7__6TLobbyFv(void) {
    ((M2C_UNK (*)(M2C_UNK, M2C_UNK))pop_stack_into_slots__6TLobbyFii)(1, 7);
}

void reset_and_set_mode__6TLobbyFv(void) { TLobby__quest_arg_stack_count = 0; push_op_args_from_table__6TLobbyFii(1, 7); }

void open_scroll_message_window__6TLobbyFv(void) {
    Vec2_801E717C pos;
    Vec2_801E717C size;
    s32 x = (*(Glob_801E75F0 *)&TLobby__quest_argument_stack).f0;
    s32 y = (*(Glob_801E75F0 *)&TLobby__quest_argument_stack).f4;
    s32 cols = (*(Glob_801E75F0 *)&TLobby__quest_argument_stack).f8;
    s32 rows = (*(Glob_801E75F0 *)&TLobby__quest_argument_stack).fC;
    s32 field90 = (*(Glob_801E75F0 *)&TLobby__quest_argument_stack).f10;
    f32 timer = *(f32 *)&(*(Glob_801E75F0 *)&TLobby__quest_argument_stack).rest[0];
    s32 msg = *(s32 *)&(*(Glob_801E75F0 *)&TLobby__quest_argument_stack).rest[4];
    s32 arg = *(s32 *)&(*(Glob_801E75F0 *)&TLobby__quest_argument_stack).rest[8];
    void *win;

    if ((*(void * *)&TLobby__quest_message_window) != NULL) {
        ((void (*)(void *))TWindow__close)((*(void * *)&TLobby__quest_message_window));
    }
    pos.x = x;
    pos.y = y;
    size.x = lbl_805DC4B8 + (f32)(cols * 0x12);
    size.y = (lbl_805DC4BC + (f32)(rows * 0x14)) - lbl_805DC4C0;
    win = open_message_scroll_window__6TLobbyFiii(&pos, &size, (void *)((*(s32 *)&TLobby__script_reg_array) + msg * 4));
    set_field_90__6TLobbyFPvi(win, field90);
    ((void (*)(void *, s32, s32))dispatch_message_window_text)(win, arg, 0x13);
    set_timer__6TLobbyFPvf(win, timer);
    (*(void * *)&TLobby__quest_message_window) = win;
}

void TLobby__sub_801E72B4(u8 i) {
    ItemData_801E72B4 item;
    s32 mode = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    ((void (*)(ItemData_801E72B4 *))init__9TItemDataFv)(&item);
    item.data1[0] = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    item.data1[1] = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    item.data1[2] = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    item.data1[3] = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    item.data1[4] = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    item.data1[5] = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i];
    item.id = ((u32 (*)(u16))advance_item_id_counter)(local_client_id);
    switch (mode) {
    case 0:
        update_entries__18TChallenge4PResultFii(&item, 2);
        break;
    case 1:
        update_entries__18TChallenge4PResultFii(&item, 0);
        break;
    case 2:
        update_entries__18TChallenge4PResultFii(&item, 1);
        break;
    }
}

void dispatch_story_select_by_op__6TLobbyFi(s32 arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC));
    switch (temp_r0) {
    case 0:
        request_story_select_state((int) (0));
        return;
    case 1:
        request_story_select_state((int) (1));
        return;
    }
}

void TLobby__sub_801E7408(void) {
    s32 id = (*(Glob_801E75F0 *)&TLobby__quest_argument_stack).f0;
    s32 arg = (*(Glob_801E75F0 *)&TLobby__quest_argument_stack).f4;
    void *player;
    s32 start;
    s32 end;
    s32 i;
    s32 win;
    s32 v;
    if (id < 100) {
        open_default__11TWindowCtrlFPvi(id, arg);
        set_field28__11TWindowCtrlFs(id);
        return;
    }
    start = get_game_mode__6TLobbyFv();
    end = start + get_lobby_flag__6TLobbyFv();
    for (i = start; i < end; i++) {
        player = get_player_data__10TObjPlayerFi(i);
        if (player != NULL) {
            win = obj_getField1c(player);
            if (win < 0x4000) {
                v = fn_get_field_3ac(player);
            } else {
                v = get_field_d4(player);
            }
            if (v == id) {
                open_default__11TWindowCtrlFPvi(win, arg);
                set_field28__11TWindowCtrlFs(win);
                return;
            }
        }
    }
}

void open_quest_message_window__6TLobbyFv(void) {
    Vec2_801E74D0 pos;
    Vec2_801E74D0 size;
    s32 x = (*(Glob_801E75F0 *)&TLobby__quest_argument_stack).f0;
    s32 y = (*(Glob_801E75F0 *)&TLobby__quest_argument_stack).f4;
    s32 cols = (*(Glob_801E75F0 *)&TLobby__quest_argument_stack).f8;
    s32 rows = (*(Glob_801E75F0 *)&TLobby__quest_argument_stack).fC;
    s32 field90 = (*(Glob_801E75F0 *)&TLobby__quest_argument_stack).f10;
    s32 arg = *(s32 *)&(*(Glob_801E75F0 *)&TLobby__quest_argument_stack).rest[0];

    if ((*(void * *)&TLobby__quest_message_window) != NULL) {
        ((void (*)(void *))TWindow__close)((*(void * *)&TLobby__quest_message_window));
    }
    pos.x = x;
    pos.y = y;
    size.x = lbl_805DC4B8 + (f32)(cols * 0x12);
    size.y = (lbl_805DC4BC + (f32)(rows * 0x14)) - lbl_805DC4C0;
    (*(void * *)&TLobby__quest_message_window) = create_quest_message_window_at(&pos, &size);
    set_field_90__6TLobbyFPvi((*(void * *)&TLobby__quest_message_window), field90);
    ((void (*)(void *, s32, s32))dispatch_message_window_text)((*(void * *)&TLobby__quest_message_window), arg, 3);
    (*(s32 *)&TLobby__quest_window_state) = 4;
    ((void (*)(void))set_flag_bit2__11TWindowCtrlFv)();
    ((void (*)(s32))close_window_if_active)(local_client_id);
    ((void (*)(void))request_active_window_close)();
    ((void (*)(void))set_close_flag__11TWindowCtrlFv)();
}

void spawn_lobby_object__6TLobbyFv(void) {
    s32 a = (*(Glob_801E75F0 *)&TLobby__quest_argument_stack).f0;
    s32 b = (*(Glob_801E75F0 *)&TLobby__quest_argument_stack).f4;
    s32 c = (*(Glob_801E75F0 *)&TLobby__quest_argument_stack).f8;
    s32 d = (*(Glob_801E75F0 *)&TLobby__quest_argument_stack).fC;
    s32 e = (*(Glob_801E75F0 *)&TLobby__quest_argument_stack).f10;
    u32 obj = ((u32 (*)(u32))__nw__7TObjectFUl)(0x30);
    if (obj != 0) {
        TLobby__sub_800F8498(obj, (*(s32 *)&tl_01), 0, e, (u8)d, (u8)a, (u8)b, (u8)c);
    }
}

void close_active_window__6TLobbyFi(int a0) { TLobby__script_reg_array[(unsigned char)(a0)] = -1; TLobby__active_window_index = a0; TLobby__quest_window_state = 12; set_flag_bit2__11TWindowCtrlFv(); ((int (*)(void*))close_window_if_active)((void*)((*(int *)&local_client_id))); ((int (*)(void))request_active_window_close)(); ((int (*)(void))set_close_flag__11TWindowCtrlFv)(); }

void op_play_sound_from_reg__6TLobbyFi(s32 arg0) {
    if ((u32) TLobby__quest_state_object_16c != 0U) {
        fn_80278518((void *) (TLobby__quest_state_object_168), (int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))));
    }
}

void create_help_window__6TLobbyFv(void) {
    s32 var_r31;

    TLobby__quest_state_object_168 = create_equip_kind_window(get_window_layout_position(3), lbl_80449B2C, local_client_id);
    save_and_close__20TShopArmorListWindowFPv();
    var_r31 = ((s32 (*)(M2C_UNK))__nw__7TObjectFUl)(0xBC);
    if (var_r31 != 0) {
        var_r31 = __ct__15TWindowHelpItemFPvUs(var_r31, get_window_layout_position(2), local_client_id);
    }
    (*(s32 *)&TLobby__quest_state_object_16c) = var_r31;
}

void send_data__6TLobbyFv(void) {
    s32 temp_r31;

    temp_r31 = (*(struct Glob_80512220 *)&TLobby__quest_argument_stack).field0;
    free_luker_object__6TLobbyFv();
    send_data__6TLobbyFi(temp_r31);
    set_send_buffer__6TLobbyFPvi(gba_download_data_buffer, gba_download_data_size);
    clear_quest_vm_flag__6TLobbyFv();
}

void fill_player_present_flags__6TLobbyFUc(u8 out) {
    s32 p;
    for (p = 0; p < 4; p++, out++) {
        if (((u8 * (*)(s32))get_player_by_client_id)(p) != NULL) {
            ((s32 *)(*(s32 *)&TLobby__script_reg_array))[out] = 1;
        } else {
            ((s32 *)(*(s32 *)&TLobby__script_reg_array))[out] = 0;
        }
    }
}

void TLobby__sub_801E7810(u8 i, u8 out) {
    ItemData_801E7810 item;
    s32 card;
    ((s32 *)(*(s32 *)&TLobby__script_reg_array))[out] = -1;
    card = get_character_save_record(0xFFFF);
    if (card != 0) {
        ((void (*)(ItemData_801E7810 *))init__9TItemDataFv)(&item);
        item.data1[0] = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
        item.data1[1] = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
        item.data1[2] = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
        item.data1[4] = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i];
        if (find_entry__23TAdSinglePlyChrSelectGCFii(card, &item) != 0) {
            ((s32 *)(*(s32 *)&TLobby__script_reg_array))[out] = 1;
        } else {
            ((s32 *)(*(s32 *)&TLobby__script_reg_array))[out] = 0;
        }
    }
}

void set_card_window_entry__6TLobbyFv(void) {
    s32 idx = (*(Glob_801E78D4 *)&TLobby__quest_argument_stack).f0;
    s32 val = (*(Glob_801E78D4 *)&TLobby__quest_argument_stack).f4;
    Win_801E78D4 *w = ((Win_801E78D4 *)get_character_save_record(0xFFFFU));
    if (w != NULL && idx >= 0 && idx < 0x10) {
        w->t[idx] = val;
    }
}

void TLobby__sub_801E7934(void) {
  long long new_var;
  s32 temp_r31;
  u32 temp_r3;
  u8 temp_r30;
  temp_r31 = *((s32 *) (((s8 *) (&(*(RecoveredGlobal_801E7934_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value)) + 0));
  temp_r30 = (u8) (*((s32 *) (((s8 *) (&(*(RecoveredGlobal_801E7934_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value)) + 4)));
  temp_r3 = get_character_save_record(0xFFFFU);
  if (temp_r3 != 0U)
  {
    if ((temp_r31 >= 0) && (temp_r31 < 0x10))
    {
      new_var = temp_r3 + (temp_r31 * 4);
      *((s32 *) (((s8 *) ((*(s32 *)&TLobby__script_reg_array) + ((temp_r30 * 4) & 0x3FC))) + 0)) = *((s32 *) (((s8 *) new_var) + 0x2314));
    }
  }
  else
  {
    *((s32 *) (((s8 *) ((*(s32 *)&TLobby__script_reg_array) + ((temp_r30 * 4) & 0x3FC))) + 0)) = -1;
  }
}

void TLobby__sub_801E79BC(u8 i, u8 out) {
    Vec3_801E79BC pos;
    f32 r;
    f32 r2;
    s32 p;
    u8 *player;

    pos.x = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    pos.y = lbl_805DC4C4;
    pos.z = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    r = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i];
    r2 = r * r;
    for (p = 0; p < 4; p++, out++) {
        ((s32 *)(*(s32 *)&TLobby__script_reg_array))[out] = 0;
        player = ((u8 * (*)(s32))get_player_by_client_id)(p);
        if (player != NULL) {
            if (xz_distance_squared((Vec3_801E79BC *)(player + 0x38), &pos) < r2) {
                ((s32 *)(*(s32 *)&TLobby__script_reg_array))[out] = 1;
            }
        }
    }
}

void TLobby__sub_801E7AC8(void) {
    u8 *player = ((u8 * (*)(s32))get_player_by_client_id)((*(struct Glob_80512220 *)&TLobby__quest_argument_stack).field0);
    u8 i = *(s32 *)&(*(struct Glob_80512220 *)&TLobby__quest_argument_stack).pad[0];
    if (player != NULL) {
        ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++] = get_field_3e4__10TObjPlayerFPv(player);
        ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i] = get_stat_by_key_state__10TObjPlayerFPv(player);
    } else {
        ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++] = -1;
        ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i] = -1;
    }
}

void TLobby__sub_801E7B64(void) {
    u8 *player = ((u8 * (*)(s32))get_player_by_client_id)((*(struct Glob_80512220 *)&TLobby__quest_argument_stack).field0);
    u8 i = *(s32 *)&(*(struct Glob_80512220 *)&TLobby__quest_argument_stack).pad[0];
    if (player != NULL) {
        ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++] = get_field_2b8__14TItemProShieldFPv(player);
        ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++] = obj_getS16_32C(player);
        ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++] = obj_getS16_2BA(player);
        ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i] = obj_getS16_32E(player);
    } else {
        ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++] = -1;
        ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++] = -1;
        ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++] = -1;
        ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i] = -1;
    }
}

void store_player_section_id__6TLobbyFv(void) {
  u32 temp_r3;
  u8 temp_r31;
  temp_r3 = ((u32)((u8 * (*)(s32))get_player_by_client_id)((s32)((int) (*((s32 *) (((s8 *) (&(*(RecoveredGlobal_801E7C5C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value)) + 0))))));
  temp_r31 = (u8) (*((s32 *) (((s8 *) (&(*(RecoveredGlobal_801E7C5C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value)) + 4)));
  if (temp_r3 != 0U)
  {
    *((s32 *) (((s8 *) ((*(s32 *)&TLobby__script_reg_array) + ((temp_r31 * 4) & 0x3FC))) + 0)) = get_actor_section_id((int) temp_r3);
    return;
  }
  *((s32 *) (((s8 *) ((*(s32 *)&TLobby__script_reg_array) + ((temp_r31 * 4) & 0x3FC))) + 0)) = -1;
}

void TLobby__sub_801E7CCC(void) {
    TLobby__sub_801F34E8((int) (M2C_FIELD(&(*(RecoveredGlobal_801E7CCC_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 0)), (int) (M2C_FIELD(&(*(RecoveredGlobal_801E7CCC_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 4)));
}

void TLobby__sub_801E7CFC(void) {
    u8 temp_r31;
    u8 *temp_r3;
    temp_r3 = (u8 *)(((u8 * (*)(s32))get_player_by_client_id)(M2C_FIELD(&(*(RecoveredGlobal_801E7CFC_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 0)));
    temp_r31 = (u8) M2C_FIELD(&(*(RecoveredGlobal_801E7CFC_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 4);
    if (temp_r3 != NULL) {
        M2C_FIELD(((*(s32 *)&TLobby__script_reg_array) + ((temp_r31 * 4) & 0x3FC)), s32 *, 0) = ((VObj_18_eecf68 *)(temp_r3))->m14() + 1;
        return;
    }
    M2C_FIELD(((*(s32 *)&TLobby__script_reg_array) + ((temp_r31 * 4) & 0x3FC)), s32 *, 0) = -1;
}

void TLobby__sub_801E7D7C(u8 i) {
    Card_801E7D7C *w;
    if (((u32)((u8 * (*)(s32))get_player_by_client_id)((s32)((*(void * *)&local_client_id)))) != 0) {
        (*(s32 * *)&TLobby__script_reg_array)[i] = obj_getPtr2B0_20();
    } else {
        (*(s32 * *)&TLobby__script_reg_array)[i] = -1;
    }
    w = ((Card_801E7D7C *)get_character_save_record(0xFFFF));
    if (w != 0) {
        (&(*(s32 * *)&TLobby__script_reg_array)[i])[1] = w->v;
    } else {
        (&(*(s32 * *)&TLobby__script_reg_array)[i])[1] = -1;
    }
}

void set_handler_entry__6TLobbyFi(int a0) { TLobby__script_reg_array[(unsigned char)(a0)] = count_active_cards__17TWindowSubComCardFv(); }

void TLobby__sub_801E7E50(s32 arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(get_character_save_record(0xFFFFU));
    if (temp_r3 != NULL) {
        M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = M2C_FIELD(temp_r3, s32 *, 0xC);
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = -1;
}

void quest_vm_get_language(void) {
    M2C_FIELD(((*(s32 *)&TLobby__script_reg_array) + ((*(RecoveredGlobal_801E7EB0_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value * 4)), s32 *, 0) = current_language;
}

void set_wrapped__9TItemDataFPv(Item_801EE77C *);
void set_present_color__9TItemDataFPvi(Item_801EE77C *, s8);
void wrap_item_as_present__6TLobbyFv(void) {
    s32 id;
    s8 n;
    u32 player;
    Item_801EE77C item;
    void *obj;
    id = ((s32 *)&TLobby__quest_argument_stack)[0];
    n = ((s32 *)&TLobby__quest_argument_stack)[1];
    obj = find_item_by_id(id);
    if (obj != NULL) {
        copy_to_item_data__5TItemFPvPv(obj, &item);
    } else {
        return;
    }
    player = get_player_by_client_id(local_client_id);
    if (player != 0) {
        send_6x29_delete_item__10TObjPlayerFPvii(player, id, 1);
        set_wrapped__9TItemDataFPv(&item);
        set_present_color__9TItemDataFPvi(&item, n);
        if (can_inventory_accept_item__10TObjPlayerFPvPv((void *)player, (Item_801EEE68 *)&item) > 0) {
            request_inventory_item__10TObjPlayerFP9TItemData((void *)player, (Item_801EEE68 *)&item);
        }
    }
}

void set_wrapped__9TItemDataFPv(Item_801EE77C *);
void wrap_pending_item__6TLobbyFv(void) {
    s32 id;
    u32 player;
    Item_801EE77C item;
    void *obj;
    id = ((s32 *)&TLobby__quest_argument_stack)[0];
    obj = find_item_by_id(id);
    if (obj != NULL) {
        copy_to_item_data__5TItemFPvPv(obj, &item);
    } else {
        return;
    }
    player = get_player_by_client_id(local_client_id);
    if (player != 0) {
        send_6x29_delete_item__10TObjPlayerFPvii(player, id, 1);
        set_wrapped__9TItemDataFPv(&item);
        if (can_inventory_accept_item__10TObjPlayerFPvPv((void *)player, (Item_801EEE68 *)&item) > 0) {
            request_inventory_item__10TObjPlayerFP9TItemData((void *)player, (Item_801EEE68 *)&item);
        }
    }
}

void copy_item_data_to_quest_buffer__6TLobbyFv(void) {
    s32 r;
    void *item;
    ItemData_801E8000 d;
    r = ((s32 *)&TLobby__quest_argument_stack)[1];
    item = find_item_by_id(((s32 *)&TLobby__quest_argument_stack)[0]);
    if (item != NULL) {
        ((void (*)(void *, ItemData_801E8000 *))copy_to_item_data__5TItemFPvPv)(item, &d);
        TLobby__script_reg_array[r++] = d.b0;
        TLobby__script_reg_array[r++] = d.b1;
        TLobby__script_reg_array[r++] = d.b2;
        TLobby__script_reg_array[r++] = d.b3;
        TLobby__script_reg_array[r++] = d.b4;
        TLobby__script_reg_array[r++] = d.b5;
        TLobby__script_reg_array[r++] = d.b6;
        TLobby__script_reg_array[r++] = d.b7;
        TLobby__script_reg_array[r++] = d.b8;
        TLobby__script_reg_array[r++] = d.b9;
        TLobby__script_reg_array[r++] = d.b10;
        TLobby__script_reg_array[r++] = d.b11;
    } else {
        TLobby__script_reg_array[r] = -1;
    }
}

void notify_player_battle__6TLobbyFv(void) {
    s32 temp_r31;
    u32 ret;

    temp_r31 = ((s32 *)&TLobby__quest_argument_stack)[0];
    ret = get_player_by_client_id(local_client_id);
    if (ret != 0U) {
        send_6x29_delete_item__10TObjPlayerFPvii(ret, temp_r31, 1);
    }
}

void TLobby__sub_801E819C(void) {
    u16 a = ((s32 *)&TLobby__quest_argument_stack)[0];
    f32 b = (f32)((s32 *)&TLobby__quest_argument_stack)[1];
    void *p = __nw__7TObjectFUl(0x24);
    if (p != 0) {
        fn_80364C40(p, a, (*(s32 *)&tl_03), b);
    }
}

int get_selected_slot__6TLobbyFPv(void* p) { return get_selected_slot__6TLobbyFv(p); }

int destroy__6TLobbyFPv(void* p) { return destroy_singleton__6TLobbyFv(p); }

int init_graph__6TLobbyFPv(void* p) { return init_graph__6TLobbyFv(p); }

void init_local_pad_if_client_exists__6TLobbyFv(void) {
    if (get_player_by_client_id((s32)((int) ((u16) (*(RecoveredGlobal_801E8288_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value))) != 0U) {
        init_local_pad_binding__10TObjPlayerFPv();
    }
}

void stop_force_for_client__6TLobbyFv(void) {
    if (get_player_by_client_id((s32)((int) ((u16) (*(RecoveredGlobal_801E82C0_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value))) != 0U) {
        stop_force_if_alive__10TObjPlayerFPv();
    }
}

s32 TObjPlayer__sub_80354C7C(u16, void *);
void TLobby__sub_801E82F8(void) {
    u8 idx = ((s32 *)&TLobby__quest_argument_stack)[2];
    TLobby__script_reg_array[idx] = TObjPlayer__sub_80354C7C(((s32 *)&TLobby__quest_argument_stack)[0], &TLobby__quest_argument_stack);
}

s32 TObjPlayer__sub_80354D5C(u16, void *);
void TLobby__sub_801E8344(void) {
    u8 idx = ((s32 *)&TLobby__quest_argument_stack)[1];
    TLobby__script_reg_array[idx] = TObjPlayer__sub_80354D5C(((s32 *)&TLobby__quest_argument_stack)[0], &TLobby__quest_argument_stack);
}

void TLobby__sub_801E8390(void) {
    TObjPlayer__sub_80354CCC((int) ((u16) (*(RecoveredGlobal_801F00E4_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value));
}

void TLobby__sub_801E83BC(void) {
    TObjPlayer__sub_80354DAC((int) ((u16) (*(RecoveredGlobal_801F00E4_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value));
}

void op_player_cmd_a__6TLobbyFv(void) {
    TObjPlayer__sub_80354D14((int) ((u16) (*(RecoveredGlobal_801F00E4_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value));
}

void op_player_cmd_b__6TLobbyFv(void) {
    TObjPlayer__sub_80354DF4((int) ((u16) (*(RecoveredGlobal_801F00E4_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value));
}

M2C_UNK TObjPlayer__sub_80354C2C(u16, int);
void TLobby__sub_801E8440(void) {
    TObjPlayer__sub_80354C2C(((s32 *)&TLobby__quest_argument_stack)[0], (u16)((s32 *)&TLobby__quest_argument_stack)[1]);
}

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void clear_flag3__6TLobbyFv(void) {
    void *self = tl_03;
    if (self != NULL) {
        clear_flag_3__7TObjectFv(self);
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void free_static__6TLobbyFv(void) {
    void *temp = tl_03;
    if (temp != 0) {
        TMainTask__sub_801F34D0(temp);
    }
}
#pragma pop

s32 count_items_of_type__10TObjPlayerFPvccc(u32, u8, u8, u8);
void count_player_items_to_global__6TLobbyFii(s32 i, s32 dst) {
    u16 a = TLobby__script_reg_array[(u8)i++];
    u8 b = TLobby__script_reg_array[(u8)i++];
    u8 c = TLobby__script_reg_array[(u8)i++];
    u8 d = TLobby__script_reg_array[(u8)i];
    u32 p = get_player_by_client_id(a);
    if (p != 0) {
        TLobby__script_reg_array[(u8)dst] = count_items_of_type__10TObjPlayerFPvccc(p, b, c, d);
    }
}

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void update_card_window_slot__6TLobbyFv(void) {
    u8 temp_r31;
    temp_r31 = (u8) M2C_FIELD(&(*(RecoveredGlobal_801E8560_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 4);
    if (((u32 (*)(int))get_player_by_client_id)((int) (M2C_FIELD(&(*(RecoveredGlobal_801E8560_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 0))) != 0U) {
        M2C_FIELD(((*(s32 *)&TLobby__script_reg_array) + ((temp_r31 * 4) & 0x3FC)), s32 *, 0) = get_card_window_field_244__10TObjPlayerFPv();
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801E85B4(void) {
    u8 temp_r31;
    temp_r31 = (u8) M2C_FIELD(&(*(RecoveredGlobal_801E85B4_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 0);
    M2C_FIELD(((*(s32 *)&TLobby__script_reg_array) + ((temp_r31 * 4) & 0x3FC)), s32 *, 0) = (s32) (lbl_80449CC0 * atan2_float((void *) (&(*(RecoveredGlobal_801E85B4_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value), (f32) (M2C_FIELD(&(*(RecoveredGlobal_801E85B4_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, f32 *, 4)), (f32) (M2C_FIELD(&(*(RecoveredGlobal_801E85B4_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, f32 *, 8))));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

typedef struct Glob_801E8614 Glob_801E8614;
void store_tan_table_entry__6TLobbyFv(void) {
  s32 arg;
  u8 idx;
  idx = (*(Glob_801E8614 *)&TLobby__quest_argument_stack).f0 & 0xFFu;
  arg = (*(Glob_801E8614 *)&TLobby__quest_argument_stack).f4;
  f32 v = sin_table_lookup(arg) / cos_table_lookup(arg);
  (*(s32 * *)&TLobby__script_reg_array)[idx] = *((s32 *) (&v));
}

void op_cos__6TLobbyFv(void) {
    u8 idx = (*(Glob_801E8684 *)&TLobby__quest_argument_stack).f0;
    f32 v = cos_table_lookup((*(Glob_801E8684 *)&TLobby__quest_argument_stack).f4);
    (*(s32 * *)&TLobby__script_reg_array)[idx] = *(s32 *)&v;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void op_sin__6TLobbyFv(void) {
    u8 idx = (*(Glob_801E86D0 *)&TLobby__quest_argument_stack).f0;
    f32 v = sin_table_lookup((*(Glob_801E86D0 *)&TLobby__quest_argument_stack).f4);
    (*(s32 * *)&TLobby__script_reg_array)[idx] = *(s32 *)&v;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void op_fdiv_reg__6TLobbyFUci(u8 reg, s32 val) {
    U_801E871C b;
    U_801E871C a;
    a.i = val;
    b.f = *(f32 *)((*(s32 *)&TLobby__script_reg_array) + reg * 4);
    b.f /= a.f;
    *(s32 *)((*(s32 *)&TLobby__script_reg_array) + reg * 4) = b.i;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void op_fdiv_reg_reg__6TLobbyFUcUc(u8 reg, u8 src) {
    U_801E8750 b;
    b.f = *(f32 *)((*(s32 *)&TLobby__script_reg_array) + reg * 4);
    b.f /= *(f32 *)((*(s32 *)&TLobby__script_reg_array) + src * 4);
    *(s32 *)((*(s32 *)&TLobby__script_reg_array) + reg * 4) = b.i;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void mul_reg_by_immediate_float__6TLobbyFUci(u8 reg, s32 val) {
    U_801E8784 b;
    U_801E8784 a;
    a.i = val;
    b.f = *(f32 *)((*(s32 *)&TLobby__script_reg_array) + reg * 4);
    b.f *= a.f;
    *(s32 *)((*(s32 *)&TLobby__script_reg_array) + reg * 4) = b.i;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void mul_reg_by_reg_float__6TLobbyFUcUc(u8 reg, u8 src) {
    U_801E87B8 b;
    b.f = *(f32 *)((*(s32 *)&TLobby__script_reg_array) + reg * 4);
    b.f *= *(f32 *)((*(s32 *)&TLobby__script_reg_array) + src * 4);
    *(s32 *)((*(s32 *)&TLobby__script_reg_array) + reg * 4) = b.i;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void sub_register_float_imm__6TLobbyFUci(u8 reg, s32 val) {
    U_801E87EC b;
    U_801E87EC a;
    a.i = val;
    b.f = *(f32 *)((*(s32 *)&TLobby__script_reg_array) + reg * 4);
    b.f -= a.f;
    *(s32 *)((*(s32 *)&TLobby__script_reg_array) + reg * 4) = b.i;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void sub_register_float_reg__6TLobbyFUcUc(u8 reg, u8 src) {
    U_801E8820 b;
    b.f = *(f32 *)((*(s32 *)&TLobby__script_reg_array) + reg * 4);
    b.f -= *(f32 *)((*(s32 *)&TLobby__script_reg_array) + src * 4);
    *(s32 *)((*(s32 *)&TLobby__script_reg_array) + reg * 4) = b.i;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void add_imm_float_to_reg__6TLobbyFUci(u8 reg, s32 val) {
    U_801E8854 b;
    U_801E8854 a;
    a.i = val;
    b.f = *(f32 *)((*(s32 *)&TLobby__script_reg_array) + reg * 4);
    b.f += a.f;
    *(s32 *)((*(s32 *)&TLobby__script_reg_array) + reg * 4) = b.i;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void add_reg_to_reg_float__6TLobbyFUcUc(u8 reg, u8 src) {
    U_801E8888 b;
    b.f = *(f32 *)((*(s32 *)&TLobby__script_reg_array) + reg * 4);
    b.f += *(f32 *)((*(s32 *)&TLobby__script_reg_array) + src * 4);
    *(s32 *)((*(s32 *)&TLobby__script_reg_array) + reg * 4) = b.i;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void op_move_reg_reg__6TLobbyFii(s32 arg0, s32 arg1) {
    M2C_FIELD(((*(s32 *)&TLobby__script_reg_array) + ((arg0 * 4) & 0x3FC)), s32 *, 0) = (s32) M2C_FIELD(((*(s32 *)&TLobby__script_reg_array) + ((arg1 * 4) & 0x3FC)), f32 *, 0);
}
#pragma pop

#define REGS_801E8930 (*(int **)&TLobby__script_reg_array)
void op_store_float_bits__6TLobbyFUcUc(u8 reg, u8 src) {
    U_801E8888 b;
    b.f = (f32)TLobby__script_reg_array[src];
    TLobby__script_reg_array[reg] = b.i;
}

void spawn_object_from_registers__6TLobbyFUcUc(u8 i, u8 slot) {
    u8 start = i;
    Vec_801E8930 v;
    Spawn_801E8930 s;
    void *obj;

    ((void (*)(Spawn_801E8930 *))TLobby__sub_80207F30)(&s);
    s.x = REGS_801E8930[i++];
    s.y = REGS_801E8930[i++];
    s.z = REGS_801E8930[i++];
    s.a = REGS_801E8930[i++];
    s.c = REGS_801E8930[i++];
    s.b = REGS_801E8930[i++];
    obj = create_quest_col_apc_inw__6TLobbyFPvPv(&s, &REGS_801E8930[start]);
    if (obj != NULL) {
        v.x = REGS_801E8930[i++];
        v.y = REGS_801E8930[i++];
        v.z = REGS_801E8930[i];
        TLobby__sub_801F3500(obj, &v);
        REGS_801E8930[slot] = (u16)((int (*)(int))obj_getField1c)((int)obj);
    }
}

#undef REGS_801E8930
void spawn_quest_col_alock__6TLobbyFUcUc(u8 i, u8 out) {
    Spawn_801E8AE8 s;
    void *obj;
    ((void (*)(Spawn_801E8AE8 *))TLobby__sub_80207F30)(&s);
    s.x = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    s.y = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    s.z = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    s.a = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    s.c = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    s.b = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i];
    obj = create_quest_col_alock(&s, &((s32 *)(*(s32 *)&TLobby__script_reg_array))[out]);
    if (obj != NULL) {
        ((s32 *)(*(s32 *)&TLobby__script_reg_array))[out] = obj_getField1c(obj);
    }
}

void spawn_object_from_script_args6__6TLobbyFUcUc(u8 i, u8 out) {
    Spawn_801E8C14 s;
    void *obj;
    u8 first = i;
    ((void (*)(Spawn_801E8C14 *))TLobby__sub_80207F30)(&s);
    s.x = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    s.y = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    s.z = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    s.a = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    s.b = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    s.c = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i];
    obj = fn_80196214(&s, &((s32 *)(*(s32 *)&TLobby__script_reg_array))[first]);
    if (obj != NULL) {
        ((s32 *)(*(s32 *)&TLobby__script_reg_array))[out] = obj_getField1c(obj);
    }
}

void TLobby__sub_801E8D44(u8 i, u8 out) {
    Spawn_801E8D44 s;
    void *obj;
    u8 first = i;
    ((void (*)(Spawn_801E8D44 *))TLobby__sub_80207F30)(&s);
    s.x = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    s.y = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    s.z = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    s.a = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    s.c = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i];
    obj = fn_801963A8(&s, &((s32 *)(*(s32 *)&TLobby__script_reg_array))[first]);
    if (obj != NULL) {
        ((s32 *)(*(s32 *)&TLobby__script_reg_array))[out] = obj_getField1c(obj);
    }
}

void spawn_object_from_script_args5__6TLobbyFUcUc(u8 i, u8 out) {
    Spawn_801E8E4C s;
    void *obj;
    u8 first = i;
    ((void (*)(Spawn_801E8E4C *))TLobby__sub_80207F30)(&s);
    s.x = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    s.y = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    s.z = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    s.a = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    s.c = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i];
    obj = fn_80196814(&s, &((s32 *)(*(s32 *)&TLobby__script_reg_array))[first]);
    if (obj != NULL) {
        ((s32 *)(*(s32 *)&TLobby__script_reg_array))[out] = obj_getField1c(obj);
    }
}

void spawn_quest_col__6TLobbyFUcUc(u8 i, u8 out) {
    Spawn_801E8F54 s;
    void *obj;
    u8 first = i;
    ((void (*)(Spawn_801E8F54 *))TLobby__sub_80207F30)(&s);
    s.x = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    s.y = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    s.z = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    s.a = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i++];
    s.c = ((s32 *)(*(s32 *)&TLobby__script_reg_array))[i];
    obj = create_quest_col(&s, &((s32 *)(*(s32 *)&TLobby__script_reg_array))[first]);
    if (obj != NULL) {
        ((s32 *)(*(s32 *)&TLobby__script_reg_array))[out] = obj_getField1c(obj);
    }
}

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801E905C(void) {
    clear_all_flag3__9TMainTaskFv((M2C_UNK *)(&main_task.value));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801E9084(void) {
    update_all_task_lists__9TMainTaskFv((M2C_UNK *)(&main_task.value));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void clear_flag__6TLobbyFv(void) {
    void *temp = tl_04;
    if (temp != 0) {
        clear_flag_3__7TObjectFv(temp);
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void free_child__6TLobbyFv(void) {
    void *temp = tl_04;
    if (temp != 0) {
        TMainTask__sub_801F34D0(temp);
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_partner_dialogue_for_slot__6TLobbyFUcUcPv(u8 a0, u8 a1, void *a2) {
    s32 x = (*(s32 * *)&TLobby__script_reg_array)[a0];
    s32 v = (*(s32 * *)&TLobby__script_reg_array)[a1];
    u16 y = x;
    u32 r = get_indexed_offset__6TLobbyFi(a2, x);
    if (r != 0U) {
        set_partner_dialogue_override(r, v, y);
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void compute_path_point__6TLobbyFv(void) {
    Vec3_801E915C v;
    Glob_801E915C *g = (Glob_801E915C *)&TLobby__quest_argument_stack;
    s32 count = g->count;
    f32 f4 = g->f4;
    f32 f8 = g->f8;
    s32 fC = g->fC;
    s32 out = g->out;
    u8 *pts;
    s32 i;
    s32 ret;
    s32 j;
    Vec3_801E915C *dst;
    pts = (u8 *)get_indexed_offset__6TLobbyFi((void *)(u16)g->id, (int)g);
    if (pts == NULL) {
        return;
    }
    for (i = 0; i < count; i++) {
        bswap_4x32__6TLobbyFPv(pts + i * 0x10);
    }
    ret = fn_8034D3D0(pts, f4, count, f8, fC, &v, 100);
    dst = (Vec3_801E915C *)&((s32 *)(*(s32 *)&TLobby__script_reg_array))[out];
    dst->x = v.x;
    dst->y = v.y;
    dst->z = v.z;
    *(s32 *)&((f32 *)(*(s32 *)&TLobby__script_reg_array))[out + 3] = ret;
    for (j = 0; j < count; j++) {
        bswap_4x32__6TLobbyFPv(pts + j * 0x10);
    }
    return;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void calc_path_point__6TLobbyFv(void) {
    Vec3_801E9274 v;
    Glob_801E9274 *g = (Glob_801E9274 *)&TLobby__quest_argument_stack;
    s32 count = g->count;
    f32 f4 = g->f4;
    f32 f8 = g->f8;
    s32 fC = g->fC;
    s32 out = g->out;
    u8 *pts;
    s32 i;
    s32 ret;
    s32 j;
    Vec3_801E9274 *dst;
    pts = (u8 *)get_indexed_offset__6TLobbyFi((void *)(u16)g->id, (int)g);
    if (pts == NULL) {
        return;
    }
    for (i = 0; i < count; i++) {
        bswap_4x32__6TLobbyFPv(pts + i * 0x10);
    }
    ret = fn_8034D790(pts, f4, count, f8, fC, &v);
    dst = (Vec3_801E9274 *)&((s32 *)(*(s32 *)&TLobby__script_reg_array))[out];
    dst->x = v.x;
    dst->y = v.y;
    dst->z = v.z;
    *(s32 *)&((f32 *)(*(s32 *)&TLobby__script_reg_array))[out + 3] = ret;
    for (j = 0; j < count; j++) {
        bswap_4x32__6TLobbyFPv(pts + j * 0x10);
    }
    return;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void load_reg_table_f28__6TLobbyFUcUc(u8 a0, u8 a1) {
    ((s32 *)(*(s32 *)&TLobby__script_reg_array))[a1] = controller_input_state[((s32 *)(*(s32 *)&TLobby__script_reg_array))[a0]].f28;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void load_reg_table_f20__6TLobbyFUcUc(u8 src, u8 dst) {
    *(s32 *)((*(s32 *)&TLobby__script_reg_array) + dst * 4) = controller_input_state[*(s32 *)((*(s32 *)&TLobby__script_reg_array) + src * 4)].f20;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int TLobby__sub_801E93E0(void* p) { return reset_to_local_player__11TCameraCtrlFv(p); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801E9400(void) {
    Vec_801E9400 *p = (Vec_801E9400 *)((*(int * *)&TLobby__script_reg_array) + (*(Glob_801E9400 *)&TLobby__quest_argument_stack).f4);
    Vec_801E9400 v;
    v.x = p->x;
    v.y = p->y;
    v.z = p->z;
    set_override_position_and_angle__11TCameraCtrlFPvs(&v, (u16)(*(Glob_801E9400 *)&TLobby__quest_argument_stack).f0, p, (*(int * *)&TLobby__script_reg_array));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_fixed_camera_from_table__6TLobbyFv(void) {
    Vec_801E945C a;
    Vec_801E945C b;
    Vec_801E945C *p = (Vec_801E945C *)((*(int * *)&TLobby__script_reg_array) + ((s32 *)&TLobby__quest_argument_stack)[0]);
    a.x = p[0].x;
    a.y = p[0].y;
    a.z = p[0].z;
    b.x = p[1].x;
    b.y = p[1].y;
    b.z = p[1].z;
    set_fixed_position_and_target__11TCameraCtrlFPvPv(&a, &b, p);
}
#pragma pop

struct Vec3_801E94CC { f32 x, y, z; };
void set_position_from__14TBoss4DarkFalzFPvPv(u32, Vec3_801E94CC *);
u32 find_by_id__13TQuestColCtrlFUs(u16);
void set_quest_object_position__6TLobbyFii(s32 i, s32 k) {
    Vec3_801E94CC v;
    v.x = TLobby__script_reg_array[(u8)k++];
    v.y = TLobby__script_reg_array[(u8)k++];
    v.z = TLobby__script_reg_array[(u8)k];
    u32 r = find_by_id__13TQuestColCtrlFUs((u16)TLobby__script_reg_array[(u8)i]);
    if (r != 0) {
        set_position_from__14TBoss4DarkFalzFPvPv(r, &v);
    }
}

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void op_close_windows_by_flags__6TLobbyFi(s32 arg0) {
    close_windows_by_flags__11TWindowCtrlFUs((int) ((u16) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) ((*(s32 *)&TLobby__script_reg_array)));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int TLobby__sub_801E95B0(void* p) { return TLobby__sub_801F3568(p); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int find_player_143__6TLobbyFv(void) { return set_camera_capture_overlay_alpha((void*)(143)); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void op_window_ctrl_mode_b__6TLobbyFi(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (0xB), (void *) ((*(s32 *)&TLobby__script_reg_array)));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void start_slot_mode_10__6TLobbyFi(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (0xA), (void *) ((*(s32 *)&TLobby__script_reg_array)));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801E9654(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (9), (void *) ((*(s32 *)&TLobby__script_reg_array)));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801E9684(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (8), (void *) ((*(s32 *)&TLobby__script_reg_array)));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801E96B4(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (7), (void *) ((*(s32 *)&TLobby__script_reg_array)));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void dispatch_slot_event_6__6TLobbyFi(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (6), (void *) ((*(s32 *)&TLobby__script_reg_array)));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void dispatch_slot_event_5__6TLobbyFi(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (5), (void *) ((*(s32 *)&TLobby__script_reg_array)));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void op_window_ctrl_mode4__6TLobbyFi(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (4), (void *) ((*(s32 *)&TLobby__script_reg_array)));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void op_window_ctrl_mode3__6TLobbyFi(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (3), (void *) ((*(s32 *)&TLobby__script_reg_array)));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void start_slot_mode_2__6TLobbyFi(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (2), (void *) ((*(s32 *)&TLobby__script_reg_array)));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801E97D4(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (1), (void *) ((*(s32 *)&TLobby__script_reg_array)));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801E9804(s32 arg0) {
    TLobby__sub_8034DAA0((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (0), (void *) ((*(s32 *)&TLobby__script_reg_array)));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801E9834(s32 arg0) {
    reset_player_lobby_model__10TNpcPlayerFUs((int) ((u16) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) ((*(s32 *)&TLobby__script_reg_array)));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801E9864(s32 arg0, s32 arg1) {
    update_player_field__10TNpcPlayerFUsi((int) ((u16) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC))), (void *) ((*(s32 *)&TLobby__script_reg_array)));
}
#pragma pop

struct Move_801E989C {
    u16 f0;
    u16 id;
    f32 x;
    f32 z;
    u8 pad[4];
};
void reset_model__10TNpcPlayerFPv(Move_801E989C *);
void reset_move_state__10TNpcPlayerFPv(Move_801E989C *);
void TLobby__sub_801E989C(u8 arg0) {
    Move_801E989C m;
    f32 x;
    f32 z;
    u16 id;
    s32 i;

    i = arg0;
    x = TLobby__script_reg_array[i++];
    i++;
    z = TLobby__script_reg_array[i++];
    id = TLobby__script_reg_array[i];
    if (get_player_by_client_id(id) != 0) {
        reset_move_state__10TNpcPlayerFPv(&m);
        m.id = id;
        m.x = x;
        m.z = z;
        reset_model__10TNpcPlayerFPv(&m);
    }
}

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void end_camera_pan_for_slot__6TLobbyFi(s32 arg0) {
    end_camera_pan_for_client__10TNpcPlayerFUs((int) ((u16) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) ((*(s32 *)&TLobby__script_reg_array)));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801E99A0(s32 arg0, s32 arg1) {
    apply_to_battle_player_slot__10TNpcPlayerFUss((int) ((u16) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) ((s16) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC))), (void *) ((*(s32 *)&TLobby__script_reg_array)));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void reset_random_enemies_mode__6TLobbyFv(void) { clear_counter__6TLobbyFv(); evt2_random_enemies_mode = 0; TKeyBoardControl__sub_8000F950(); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void create_hunter_guild_seq__6TLobbyFv(void) {
    void *temp_r3;
    if ((is_quest_active() == 1) && ((temp_r3 = (void*)((u32 (*)(M2C_UNK))__nw__7TObjectFUl)(0x28)) != 0U)) {
        init__22THunterGuildSeqOfflineFPvPvPv(temp_r3, tl_00, (M2C_UNK *)reset_random_enemies_mode__6TLobbyFv);
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801E9A50(s32 arg0) {
    if (TChallenge4PResult__sub_8034B498() != 0) {
        M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void create_challenge_4p_results__6TLobbyFUc(u8 arg0) {
    s32 i;
    clear_slot_entries__18TChallenge4PResultFv();
    i = 0;
    do {
        create__18TChallenge4PResultFii((u16)i, (*(s32 * *)&TLobby__script_reg_array)[arg0]);
        i += 1;
    } while (i < 4);
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801E9AF8(s32 idx) {
    s32 tbl[5];
    s32 n;
    *(Tbl_801E9AF8 *)tbl = *lbl_80449B18;
    TLobby__sub_8032CC24();
    n = TLobby__sub_801F34F8();
    if (n >= 0 && n < 5) {
        (*(s32 * *)&TLobby__script_reg_array)[(u8)idx] = tbl[n];
    } else {
        (*(s32 * *)&TLobby__script_reg_array)[(u8)idx] = 2;
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void update_and_apply_alloc__6TLobbyFv(void) { update_alloc_size__6TLobbyFv((void*)0); ((int (*)(void*, void*))set_send_buffer__6TLobbyFPvi)((void*)((*(int *)&gba_download_data_buffer)), (void*)((*(int *)&gba_download_data_size))); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_lobby_mode_slot__6TLobbyFi(s32 arg0) {
    if (get_lobby_count__6TLobbyFv() != 0) {
        M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
        return;
    }
    if (get_field_6CE8__6TLobbyFv() != 0) {
        M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 2;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801E9C40(void) {
    fn_801DA140((int) (TLobby__protocol_instance), (int) ((u8) M2C_FIELD(&(*(RecoveredGlobal_801E9C40_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 0)), (int) (M2C_FIELD(&(*(RecoveredGlobal_801E9C40_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 4)));
    TLobby__sub_801F3614();
    TLobby__sub_8032CDEC();
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_story_select__6TLobbyFi(s32 arg0) {
    switch (arg0) {
    case 0:
        set_state__16TAdStorySelectGCFi(0);
        return;
    case 1:
        set_state__16TAdStorySelectGCFi(1);
        return;
    default:
        set_state__16TAdStorySelectGCFi(0);
        return;
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int TLobby__sub_801E9CD0(void* p) { return ((int (*)(void*))TLobby__sub_801EA5FC)(p); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void cache_player_field__6TLobbyFv(void) {
    s32 var_r0;
    void *temp_r3;

    temp_r3 = get_state__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != NULL) {
        var_r0 = M2C_FIELD(temp_r3, s32 *, 0xE284);
    } else {
        var_r0 = 0;
    }
    (*(s32 *)&TLobby__data_805D5EC4) = var_r0;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void update_by_screen_mode__6TLobbyFv(void) {
    if (is_split_screen() == 1) {
        update_screen__6TLobbyFPv();
        return;
    }
    update_dead_list_win__6TLobbyFv();
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void update_split_screen__6TLobbyFv(void) {
    if (is_split_screen() == 1) {
        set_challenge_split_flag__6TLobbyFPv();
        return;
    }
    set_split_screen_flag__6TLobbyFv();
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801E9D94(s32 arg0) {
    if (is_split_screen() == 1) {
        TLobby__sub_80291DF8((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))));
        return;
    }
    TLobby__sub_80070B34((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801E9DEC(u8 out) {
    u32 *p;
    s16 i;
    u8 *player;
    ((s32 *)(*(s32 *)&TLobby__script_reg_array))[out] = 0;
    p = (u32 *)0x8C007220;
    for (i = 0; i < 0xC0U; i++) {
        if (*p++ != 0) {
            ((s32 *)(*(s32 *)&TLobby__script_reg_array))[out] |= 1;
        }
    }
    if (fn_80077790() == 1) {
        ((s32 *)(*(s32 *)&TLobby__script_reg_array))[out] |= 2;
    }
    if (fn_80077788() == 1) {
        ((s32 *)(*(s32 *)&TLobby__script_reg_array))[out] |= 4;
    }
    if (get_drop_flag__6TLobbyFv() == 1) {
        ((s32 *)(*(s32 *)&TLobby__script_reg_array))[out] |= 8;
    }
    player = ((u8 *)((u32 (*)(int))get_player_by_client_id)((int)(local_client_id)));
    if (player != NULL && TObjPlayer__sub_801BFFA0(player + 0x41C) != 0) {
        ((s32 *)(*(s32 *)&TLobby__script_reg_array))[out] |= 0x10;
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void quest_vm_store_s32_indirect(void) {
    *M2C_FIELD(&(*(RecoveredGlobal_801E9EE4_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 **, 0) = M2C_FIELD(&(*(RecoveredGlobal_801E9EE4_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 4);
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void quest_vm_store_s16_indirect(void) {
    *M2C_FIELD(&(*(RecoveredGlobal_801E9EFC_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s16 **, 0) = (s16) M2C_FIELD(&(*(RecoveredGlobal_801E9EFC_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 4);
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void quest_vm_store_s8_indirect(void) {
    *M2C_FIELD(&(*(RecoveredGlobal_801E9F14_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s8 **, 0) = (s8) M2C_FIELD(&(*(RecoveredGlobal_801E9F14_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 4);
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void quest_vm_load_s32_indirect(void) {
    M2C_FIELD(((*(s32 *)&TLobby__script_reg_array) + ((M2C_FIELD(&(*(RecoveredGlobal_801E9F2C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 0) * 4) & 0x3FC)), s32 *, 0) = M2C_FIELD(M2C_FIELD(&(*(RecoveredGlobal_801E9F2C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 **, 4), s32 *, 0);
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void quest_vm_load_s16_indirect(void) {
    M2C_FIELD(((*(s32 *)&TLobby__script_reg_array) + ((M2C_FIELD(&(*(RecoveredGlobal_801E9F50_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 0) * 4) & 0x3FC)), s32 *, 0) = (s32) M2C_FIELD(M2C_FIELD(&(*(RecoveredGlobal_801E9F50_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s16 **, 4), s16 *, 0);
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void load_reg_from_signed_byte__6TLobbyFv(void) {
    M2C_FIELD(((*(s32 *)&TLobby__script_reg_array) + ((M2C_FIELD(&(*(RecoveredGlobal_801E9F74_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 0) * 4) & 0x3FC)), s32 *, 0) = (s32) (s8) M2C_FIELD(M2C_FIELD(&(*(RecoveredGlobal_801E9F74_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, u8 **, 4), u8 *, 0);
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_unit_list_flag__6TLobbyFi(s32 arg0) {
    if (strcmp((void *)(get_unit_list__6TLobbyFv()), (void *) (&TLobby__data_805DC4A0)) == 0) {
        M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_unit_name_flag__6TLobbyFi(s32 arg0) {
    if (strcmp((void *)(TLobby__sub_80070ACC()), (void *) (&TLobby__data_805DC4A0)) == 0) {
        M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_handler__6TLobbyFi(int a0) { TLobby__script_reg_array[(unsigned char)(a0)] = ((int (*)(void))get_game_mode__6TLobbyFv)(); }
#pragma pop

u8 *TWindowSubStatusDisp__sub_8006F134(s32, M2C_UNK);
s32 get_slot_clamped__6TLobbyFv(int);
void TLobby__sub_801EA094(s32 arg0) {
    u32 temp_r3;

    temp_r3 = get_character_save_record(0xFFFF);
    if (temp_r3 != 0U) {
        M2C_FIELD(TLobby__script_reg_array, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = get_slot_clamped__6TLobbyFv((int) (M2C_FIELD(TWindowSubStatusDisp__sub_8006F134(temp_r3 + 0x21C4, -1), s32 *, 4)));
    }
}

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void store_card_stats__6TLobbyFUc(u8 i) {
    Card_801EA0F0 *card = (Card_801EA0F0 *)get_character_save_record(0xFFFF);
    if (card != NULL) {
        (*(int * *)&TLobby__script_reg_array)[i++] = card->stats[0];
        (*(int * *)&TLobby__script_reg_array)[i++] = card->stats[1];
        (*(int * *)&TLobby__script_reg_array)[i++] = card->stats[2];
        (*(int * *)&TLobby__script_reg_array)[i++] = card->stats[3];
        (*(int * *)&TLobby__script_reg_array)[i++] = card->stats[4];
        (*(int * *)&TLobby__script_reg_array)[i++] = card->stats[5];
        (*(int * *)&TLobby__script_reg_array)[i] = card->stats[6];
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EA1B4(s32 arg0) {
    u32 temp_r3;
    temp_r3 = get_character_save_record(0xFFFFU);
    if (temp_r3 != 0U) {
        if (strncmp((void *) (temp_r3 + 0x2254), (void *) (&TLobby__data_805DC4A0), (int) (0x20)) == 0) {
            M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
            return;
        }
        M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void op_set_reg_from_flag__6TLobbyFi(s32 arg0) {
    if ((s32) volopt_death_active != 0) {
        M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EA274(void) {
    if ((u32) (*(RecoveredGlobal_801EA274_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value <= 0x1DU) {
        M2C_FIELD(&(*(RecoveredGlobal_801EA274_TLobby__data_80512360 *)&TLobby__data_80512360).value, s16 *, 0x28) = (s16) (*(RecoveredGlobal_801EA274_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value;
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void quest_set_player_shrink_size(s32 player_variable, s32 size_variable) {
    TObjPlayer* player = ((TObjPlayer*)((s32 (*)(int, void *))get_player_by_client_id)((int)((*(s32* *)&TLobby__script_reg_array)[(u8)player_variable]), (void *)(size_variable)));
    if (player && !obj_isState2_324(player)) {
        s32 whole = (*(s32* *)&TLobby__script_reg_array)[(u8)size_variable++];
        s32 numerator = (*(s32* *)&TLobby__script_reg_array)[(u8)size_variable++];
        s32 denominator = (*(s32* *)&TLobby__script_reg_array)[(u8)size_variable];
        set_speed__10TObjPlayerFPvf(&player->scale_state,
            denominator > 0 ? (f32)whole + (f32)numerator / (f32)denominator : (f32)whole);
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void spawn_symbolchat_colli__6TLobbyFUc(u8 i) {
    Spawn_801EA388 s;
    TLobby__sub_80207F30((Spawn_801EA508 *)&s);
    s.x = TLobby__script_reg_array[i++];
    s.y = TLobby__script_reg_array[i++];
    s.z = TLobby__script_reg_array[i++];
    s.a = TLobby__script_reg_array[i++];
    s.c = TLobby__script_reg_array[i++];
    s.d = TLobby__script_reg_array[i++];
    s.e = TLobby__script_reg_array[i++];
    symbolchat_colli_param_table[0] = ((int (*)(int))get_indexed_offset__6TLobbyFi)((u16)TLobby__script_reg_array[i++]);
    symbolchat_colli_param_table[1] = ((int (*)(int))get_indexed_offset__6TLobbyFi)((u16)TLobby__script_reg_array[i++]);
    symbolchat_colli_param_table[2] = ((int (*)(int))get_indexed_offset__6TLobbyFi)((u16)TLobby__script_reg_array[i]);
    create__17TOSymbolchatColliFPv(&s);
    symbolchat_colli_param_table[1] = 0;
    symbolchat_colli_param_table[0] = 0;
    symbolchat_colli_param_table[2] = 0;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void create_chat_sensor__6TLobbyFUc(u8 i) {
    Spawn_801EA508 s;
    TLobby__sub_80207F30(&s);
    s.f18 = 0;
    s.f1c = 1;
    s.x = (*(int * *)&TLobby__script_reg_array)[i++];
    s.y = (*(int * *)&TLobby__script_reg_array)[i++];
    s.z = (*(int * *)&TLobby__script_reg_array)[i++];
    s.a = (*(int * *)&TLobby__script_reg_array)[i++];
    s.c = (*(int * *)&TLobby__script_reg_array)[i];
    TOChatSensor__create(&s);
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EA5FC(u8 arg0) {
    s32 idx = (*(int * *)&TLobby__script_reg_array)[arg0];
    Ctx_801EA5FC *w = get_global_state__23TAdSinglePlyChrSelectGCFv();
    if (w != NULL && idx >= 0 && idx < 0xFD) {
        move_data__6TLobbyFv(&w->buf[idx], &TLobby__data_805D5EC4, 4);
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void get_or_create_handle__6TLobbyFv(void) {
    u32 temp_r3;

    temp_r3 = get_serial_access__22TQuestVmDownLoadServerFPv();
    TLobby__data_805D5EC4 = temp_r3;
    if (temp_r3 == 0U) {
        TLobby__data_805D5EC4 = poll_serial_access__22TQuestVmDownLoadServerFPv();
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EA690(s32 arg0) {
    if (is_split_screen() == 1) {
        if (get_normalized_mode__6TLobbyFv() != 0) {
            M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
            return;
        }
        M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
        return;
    }
    if (get_state__6TLobbyFv() != 0) {
        M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void handle_split_screen__6TLobbyFv(void) {
    if (is_split_screen() == 1) {
        TLobby__sub_80291EAC(0);
        return;
    }
    TLobby__sub_80070BE8(0);
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void apply_split_screen__6TLobbyFv(void) {
    if (is_split_screen() == 1) {
        TLobby__sub_80291EAC(1);
        return;
    }
    TLobby__sub_80070BE8(1);
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EA7A0(s32 arg0) {
    s32 temp_r3;
    temp_r3 = ((s32 (*)(int, void *))get_player_by_client_id)((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) ((*(s32 *)&TLobby__script_reg_array)));
    if (temp_r3 != 0) {
        send_code_49_1__10TObjPlayerFi();
        send_code50_packet__10TObjPlayerFi((int) (temp_r3));
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void load_setting_13_from_table__6TLobbyFv(void) {
    u32 v = ((u32 *)&TLobby__quest_argument_stack)[0];
    if (v < 2) {
        (*(G_801EA7E8 *)&TLobby__data_80512360).f13 = lbl_80449B10[v];
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void draw_or_send__6TLobbyFv(void) {
    if (is_split_screen() == 1) {
        draw_if_ready2__6TLobbyFv();
        return;
    }
    draw_if_ready__6TLobbyFv();
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EA84C(s32 arg0) {
    s32 var_r3;
    if (is_split_screen() == 1) {
        var_r3 = check_ready_status__6TLobbyFv();
    } else {
        var_r3 = check_ready_state__6TLobbyFv();
    }
    switch (var_r3) {
    case -1:
        M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
        return;
    case 0:
        M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
        return;
    case 1:
        M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 2;
        return;
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EA8E8(void) {
    TLobby__sub_801036CC();
    if ((u32) quest_mission_manager != 0U) {
        clear_buffer__12TQuestThreadFPv(quest_mission_manager);
    }
    destroy_children_with_tag(tl_00);
    init_sub_objects__6TLobbyFv();
    reset_id_tables__6TLobbyFv();
    clear_floor_event_flags();
    init_switch_table();
    free_map_data__13TRaderMapCoreFv();
    if (is_split_screen() == 1) {
        reset_menu_state_globals__6TLobbyFv();
        return;
    }
    TLobby__sub_80070C50();
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void roll_random_in_range__6TLobbyFii(s32 arg0, s32 arg1) {
  s32 temp_r31;
  s32 var_r4;
  s32 temp_r30;
  temp_r31 = *((M2C_UNK *) (((s8 *) (*(s32 *)&TLobby__script_reg_array)) + ((arg0 * 4) & 0x3FC)));
  temp_r30 = *((M2C_UNK *) (((s8 *) (*(s32 *)&TLobby__script_reg_array)) + (((arg0 + 1) * 4) & 0x3FC)));
  var_r4 = (s32) (((f32) temp_r30) * (lbl_805DC4C8 * ((f32) rand())));
  if (var_r4 < temp_r31)
  {
    var_r4 = temp_r31;
  }
  *((M2C_UNK *) (((s8 *) (*(s32 *)&TLobby__script_reg_array)) + ((arg1 * 4) & 0x3FC))) = var_r4;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void quest_vm_shift_right_arithmetic_register(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r5) = (s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r5) >> M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void quest_vm_shift_left_register(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r5) = M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r5) << M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void copy_script_register_from_buffer__6TLobbyFUcUc(u8 a0, u8 a1) {
    s32 v;
    (*(int * *)&TLobby__script_reg_array)[a1] = 0;
    Ctx_801EAA34 *w = ((Ctx_801EAA34 *)get_global_state__23TAdSinglePlyChrSelectGCFv());
    if (w != NULL) {
        s32 i = (*(int * *)&TLobby__script_reg_array)[a0];
        if (i >= 0 && i < 0xFD) {
            memcpy(&v, &w->buf[i], 4);
            (*(int * *)&TLobby__script_reg_array)[a1] = v;
        }
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void load_chr_select_word__6TLobbyFUcUc(u8 a0, u8 a1) {
    s16 v;
    (*(int * *)&TLobby__script_reg_array)[a1] = 0;
    Ctx_801EAAB4 *w = ((Ctx_801EAAB4 *)get_global_state__23TAdSinglePlyChrSelectGCFv());
    if (w != NULL) {
        s32 i = (*(int * *)&TLobby__script_reg_array)[a0];
        if (i >= 0 && i < 0xFF) {
            memcpy(&v, &w->buf[i], 2);
            (*(int * *)&TLobby__script_reg_array)[a1] = v;
        }
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void broadcast_entry__6TLobbyFi(s32 arg0) {
    M2CCopy_30 sp8;
    u32 temp_r3;
    temp_r3 = ((int (*)(int))get_indexed_offset__6TLobbyFi)(arg0);
    if (temp_r3 != 0U) {
        sp8 = *(const M2CCopy_30 *)(temp_r3 - 4 + 4);
        bswap_entry_words__6TLobbyFi((s32) &sp8);
        broadcast__6TLobbyFPv(&sp8);
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EAB90(s32 arg0) {
    M2CCopy_20 sp8;
    u32 temp_r3;
    temp_r3 = ((int (*)(int))get_indexed_offset__6TLobbyFi)(arg0);
    if (temp_r3 != 0U) {
        sp8 = *(const M2CCopy_20 *)(temp_r3 - 4 + 4);
        swap_endian__6TLobbyFPv(&sp8);
        TLobby__sub_8001DE30(&sp8);
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EABEC(s32 arg0) {
    M2CCopy_30 sp8;
    u32 temp_r3;
    temp_r3 = ((int (*)(int))get_indexed_offset__6TLobbyFi)(arg0);
    if (temp_r3 != 0U) {
        sp8 = *(const M2CCopy_30 *)(temp_r3 - 4 + 4);
        byteswap_packet__6TLobbyFPv(&sp8);
        copy_all_entries__6TLobbyFPv(&sp8);
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EAC48(int _w0) {
    struct CopyStack_801EAC48 { u8 bytes[0x24]; };
    CopyStack_801EAC48 copy_storage_801EAC48;
    s32 temp_r4;
    u32 temp_r3;
    temp_r3 = ((u32)((int (*)(int))get_indexed_offset__6TLobbyFi)((int)(_w0)));
    if (temp_r3 != 0U) {
        temp_r4 = temp_r3 - 4;
        *(M2CCopy_24 *)(copy_storage_801EAC48.bytes) = *(const M2CCopy_24 *)(temp_r4 + 4);
        bswap__12player_statsFv((void *) ((copy_storage_801EAC48.bytes)));
        copy_data__6TLobbyFPv((void *) ((copy_storage_801EAC48.bytes)));
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void dispatch_state_value__6TLobbyFv(void) {
    TLobby__sub_8001DEA8((int) (M2C_FIELD(&(*(RecoveredGlobal_80141730_lbl_8050C028 *)&TLobby__quest_argument_stack).value, s32 *, 0x0)));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void spawn_chat_sensor__6TLobbyFv(void) {
    Spawn_801EACD8 s;
    u8 i = (*(RecoveredGlobal_801EA274_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value;
    s32 arg = *(s32 *)&(*(RecoveredGlobal_801EA274_TLobby__data_80512220 *)&TLobby__quest_argument_stack).remaining[0];
    void *sensor;
    TLobby__sub_80207F30((Spawn_801EA508 *)(&s));
    s.x = (*(int * *)&TLobby__script_reg_array)[i++];
    s.y = (*(int * *)&TLobby__script_reg_array)[i++];
    s.z = (*(int * *)&TLobby__script_reg_array)[i++];
    s.a = (*(int * *)&TLobby__script_reg_array)[i++];
    s.c = (*(int * *)&TLobby__script_reg_array)[i];
    sensor = TOChatSensor__create((Spawn_801EA508 *)(&s));
    if (sensor != NULL) {
        set_trigger_text__12TOChatSensorFPvPv(sensor, arg);
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EB048(s32 arg0) {
    if (is_split_screen() == 1) {
        M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = TLobby__sub_8029204C();
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = get_max_challenge_time__6TLobbyFv();
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EB0A0(s32 arg0) {
    if (is_split_screen() == 1) {
        TLobby__sub_80292200((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))));
        return;
    }
    TLobby__sub_80070EE4((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EB0F8(s32 arg0) {
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 3;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EB10C(void) {
    Tag_801EB10C tag;
    char buf[0x400];
    Card_801EB10C *card;
    u8 i = (*(RecoveredGlobal_801EA274_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value;
    char *src = *(char **)&(*(RecoveredGlobal_801EA274_TLobby__data_80512220 *)&TLobby__quest_argument_stack).remaining[0];
    init_guild_card_tag__6TLobbyFi((s32)&tag);
    card = (Card_801EB10C *)__nw__7TObjectFUl(0x10A8);
    if (card != NULL) {
        card = construct__6TLobbyFPvPvPvPv(card, 0, 0, 0);
    }
    strncpy(buf, (int)src, 0x3FF);
    trim_whitespace__6TLobbyFPv(buf);
    tokenize_args__6TLobbyFPvPv(card, buf);
    if (*(s32 *)((u8 *)card + 0x109C) > 2) {
        if (card != NULL) {
            card->m0(1);
        }
    } else {
        tag.id = (*(int * *)&TLobby__script_reg_array)[i];
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
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 init_guild_card_tag__6TLobbyFi(s32 arg0) {
    __ct__16TPlyGuildCardTagFv(arg0 + 4);
    return arg0;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void update_player_status__6TLobbyFii(s32 arg0, s32 arg1) {
    s32 temp_r3;
    temp_r3 = ((s32 (*)(int, void *))get_player_by_client_id)((int)((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)))), (void *)(arg1));
    if (temp_r3 != 0) {
        if (TLobby__sub_801F345C() != 0) {
            M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 1;
            return;
        }
        if (set_flag_4__6TLobbyFPv((int) (temp_r3)) != 0) {
            M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 2;
            return;
        }
        if (test_flag_16__6TLobbyFPv((int) (temp_r3)) != 0) {
            M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 3;
            return;
        }
        if (TLobby__sub_801F33F0((int) (temp_r3)) != 0) {
            M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 4;
            return;
        }
        if (TLobby__sub_801F33CC((int) (temp_r3)) != 0) {
            M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 5;
            return;
        }
        if (TLobby__sub_801F33A8((int) (temp_r3)) != 0) {
            M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 6;
            return;
        }
        if (TLobby__sub_801F3384((int) (temp_r3)) != 0) {
            M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 7;
            return;
        }
        if (check_flag_24576__6TLobbyFPv((int) (temp_r3)) != 0) {
            M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 8;
            return;
        }
        if (set_flag_8000__6TLobbyFi((int) (temp_r3)) != 0) {
            M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 9;
            return;
        }
        if (TLobby__sub_801F3314((int) (temp_r3)) != 0) {
            M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 0xA;
            return;
        }
        if (set_flag_40000__6TLobbyFPv((int) (temp_r3)) != 0) {
            M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 0xB;
            return;
        }
        if (set_flag_80000__6TLobbyFi((int) (temp_r3)) != 0) {
            M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 0xC;
            return;
        }
        M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 0;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 0;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EB46C(void) { TLobby__battle_ctrl_default_value = 0; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EB478(void) { TLobby__battle_ctrl_default_value = 1; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EB484(u8 src, u8 dst) {
    E_801EB484 e = TLobby__duel_result_table[(*(int * *)&TLobby__script_reg_array)[src]];
    (*(int * *)&TLobby__script_reg_array)[dst] = e.b;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void copy_table_value__6TLobbyFUcUc(u8 a0, u8 a1) {
    E_801EB4C4 e = ((E_801EB4C4 *)&TLobby__duel_result_table)[(*(int * *)&TLobby__script_reg_array)[a0]];
    (*(int * *)&TLobby__script_reg_array)[a1] = e.b;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void write_state_s32_to_buffer__6TLobbyFv(void) {
    u32 i = (*(Glob_801EB508 *)&TLobby__quest_argument_stack).f0;
    s32 v = (*(Glob_801EB508 *)&TLobby__quest_argument_stack).f4;
    Ctx_801EB508 *w = ((Ctx_801EB508 *)((s32 (*)(void))get_global_state__23TAdSinglePlyChrSelectGCFv)());
    if (w != NULL && i < 0xFD) {
        move_data__6TLobbyFv(&w->buf[i], &v, 4);
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int forward_802272B4__6TLobbyFPv(void* p) { return TLobby__sub_802272B4(p); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int TLobby__sub_801EB588(void* p) { return TLobby__sub_8022733C(p); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EB5A8(void) {  }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void decompress_indexed_resource__6TLobbyFv(void) {
    s32 temp_r31;
    u32 temp_r3;
    temp_r31 = M2C_FIELD(&(*(RecoveredGlobal_801EB5AC_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 0);
    temp_r3 = ((int)((u32 (*)(void *))get_indexed_offset__6TLobbyFi)((void *)((s32) (u16) M2C_FIELD(&(*(RecoveredGlobal_801EB5AC_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 4))));
    if (temp_r3 != 0U) {
        prs_decompress_buffer((s32) temp_r3, resource_decompress_buffer);
        fn_80197FD0((void *) (resource_decompress_buffer), (int) (temp_r31));
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void update_client_slot_from_player__6TLobbyFii(s32 arg0, s32 arg1) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(((s32)((u32 (*)(int, int))get_player_by_client_id)((int)((int)((u32) (u16) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)))), (int)((int)(arg1)))));
    if (temp_r3 != NULL) {
        M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = TLobby__sub_80142944(temp_r3);
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void write_state_s16_to_buffer__6TLobbyFv(void) {
    u32 i = (*(Glob_801EB658 *)&TLobby__quest_argument_stack).f0;
    s16 v = (*(Glob_801EB658 *)&TLobby__quest_argument_stack).f4;
    Ctx_801EB658 *w = ((Ctx_801EB658 *)((s32 (*)(void))get_global_state__23TAdSinglePlyChrSelectGCFv)());
    if (w != NULL && i < 0xFF) {
        move_data__6TLobbyFv(&w->buf[i], &v, 2);
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EB6B8(s32 arg0) {
    s32 temp_r31;
    u8 *temp_r3;
    temp_r31 = (arg0 * 4) & 0x3FC;
    temp_r3 = (u8 *)(((u8 *)((u32 (*)(int, int))get_player_by_client_id)((int)(M2C_FIELD(((*(s32 *)&TLobby__script_reg_array) + temp_r31), s32 *, 0)), (int)((*(s32 *)&TLobby__script_reg_array)))));
    if (temp_r3 != NULL) {
        strncpy((void *) (&quest_player_class_name_buffer.value), (int) (select_download_type__6TLobbyFi((int) (M2C_FIELD(temp_r3, s32 *, 0x890)))), (int) (0xF));
        M2C_FIELD(&quest_player_class_name_buffer.value, s8 *, 0xF) = 0;
        M2C_FIELD(((*(s32 *)&TLobby__script_reg_array) + temp_r31), s32 *, 0) = 1;
        return;
    }
    M2C_FIELD(((*(s32 *)&TLobby__script_reg_array) + temp_r31), s32 *, 0) = 0;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void store_player_name_by_client__6TLobbyFi(s32 arg0) {
    s32 temp_r31;
    u8 *temp_r3;
    temp_r31 = (arg0 * 4) & 0x3FC;
    temp_r3 = (u8 *)(((u8 *)((u32 (*)(int, int))get_player_by_client_id)((int)(M2C_FIELD(((*(s32 *)&TLobby__script_reg_array) + temp_r31), s32 *, 0)), (int)((*(s32 *)&TLobby__script_reg_array)))));
    if (temp_r3 != NULL) {
        strncpy((void *)((void *) (&quest_player_name_buffer.value)), (int)((void *) (((VObj_18_26c590 *)(temp_r3))->m10())), (int)((int) (0xF)));
        M2C_FIELD(&quest_player_name_buffer.value, s8 *, 0xF) = 0;
        M2C_FIELD(((*(s32 *)&TLobby__script_reg_array) + temp_r31), s32 *, 0) = 1;
        return;
    }
    M2C_FIELD(((*(s32 *)&TLobby__script_reg_array) + temp_r31), s32 *, 0) = 0;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void eval_op_add_ratio__6TLobbyFi(s32 i) {
    s32 j = i + 1;
    TOMineTrap__sub_80171368((f32)(*(s32 * *)&TLobby__script_reg_array)[(u8)i] + (f32)(*(s32 * *)&TLobby__script_reg_array)[(u8)j] / (f32)(*(s32 * *)&TLobby__script_reg_array)[(u8)++j]);
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EB85C(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r30;
    s32 var_r31;
    s32 var_r4;
    u32 temp_r3;
    u8 *var_r3;
    var_r30 = arg0;
    var_r31 = arg1;
    temp_r3 = ((s32 (*)(void))get_global_state__23TAdSinglePlyChrSelectGCFv)();
    if (temp_r3 != 0U) {
        var_r4 = (*(s32 *)&TLobby__script_reg_array);
        temp_r0 = M2C_FIELD(var_r4, M2C_UNK *, ((var_r30 * 4) & 0x3FC));
        if ((temp_r0 >= 0) && (temp_r0 < 0x100)) {
            var_r3 = (u8 *)(temp_r3 + temp_r0);
            var_r3 = (u8 *)((void *) M2C_FIELD(var_r3, u8 *, 0x10));
            M2C_FIELD(var_r4, M2C_UNK *, ((var_r31 * 4) & 0x3FC)) = (long) (var_r3);
        }
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void acquire_serial_access_for_slot__6TLobbyFUc(u8 arg0) {
    (*(int * *)&TLobby__script_reg_array)[arg0] = ((s32 (*)(void))get_serial_access__22TQuestVmDownLoadServerFPv)();
    if ((*(int * *)&TLobby__script_reg_array)[arg0] == 0) {
        (*(int * *)&TLobby__script_reg_array)[arg0] = ((s32 (*)(void))poll_serial_access__22TQuestVmDownLoadServerFPv)();
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EB914(s32 arg0) {
    if (((u32 (*)(int, int))get_player_by_client_id)((int)((int)((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int) ((*(s32 *)&TLobby__script_reg_array))))) != 0U) {
        TObjPlayer__sub_801AF904();
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void store_chr_select_value__6TLobbyFi(s32 arg0) {
    u8 *temp_r3;
    temp_r3 = ((u8 * (*)(void))get_state__23TAdSinglePlyChrSelectGCFv)();
    if (temp_r3 != NULL) {
        M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = M2C_FIELD(temp_r3, s32 *, 0xE284);
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}
#pragma pop

s32 try_spend_actor_meseta(u32, s32);
void qst_op_try_spend_meseta__6TLobbyFii(s32 arg0, s32 arg1) {
    u32 p = get_player_by_client_id(TLobby__script_reg_array[(u8)arg0++]);
    if (p != 0) {
        if (try_spend_actor_meseta(p, TLobby__script_reg_array[(u8)arg0]) != 0) {
            TLobby__script_reg_array[(u8)arg1] = 1;
        } else {
            TLobby__script_reg_array[(u8)arg1] = 0;
        }
    } else {
        TLobby__script_reg_array[(u8)((u8)arg1 + 1)] = 0;
    }
}

void fill_player_team_flags__6TLobbyFii(s32 arg0, s32 arg1) {
    u8 *p = ((u8 * (*)(s32))get_player_by_client_id)(TLobby__script_reg_array[(u8)arg0]);
    if (p != NULL) {
        s32 f = *(s32 *)(p + 0x890);
        if (f & 4) {
            TLobby__script_reg_array[(u8)arg1] = 0;
        } else if (f & 8) {
            TLobby__script_reg_array[(u8)arg1] = 1;
        } else if (f & 0x10) {
            TLobby__script_reg_array[(u8)arg1] = 2;
        } else {
            TLobby__script_reg_array[(u8)arg1] = 3;
        }
        if (f & 0x20) {
            TLobby__script_reg_array[(u8)(arg1 + 1)] = 0;
        } else if (f & 0x40) {
            TLobby__script_reg_array[(u8)(arg1 + 1)] = 1;
        } else if (f & 0x80) {
            TLobby__script_reg_array[(u8)(arg1 + 1)] = 2;
        } else {
            TLobby__script_reg_array[(u8)(arg1 + 1)] = 3;
        }
    } else {
        TLobby__script_reg_array[(u8)arg1++] = 3;
        TLobby__script_reg_array[(u8)arg1] = 3;
    }
}

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void store_player_state_flag__6TLobbyFii(s32 arg0, s32 arg1) {
    s32 temp_r3_2;
    u8 *temp_r3;
    temp_r3 = ((u8 *)((u32 (*)(int, int))get_player_by_client_id)((int)((int)((int)(M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int)(arg1)))));
    if (temp_r3 != NULL) {
        temp_r3_2 = M2C_FIELD(temp_r3, s32 *, 0x890);
        if (temp_r3_2 & 1) {
            M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 0;
            return;
        }
        if (temp_r3_2 & 2) {
            M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 1;
            return;
        }
        M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 2;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 2;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void apply_to_player_by_client_id_a__6TLobbyFi(s32 arg0) {
    u32 temp_r3;
    temp_r3 = ((u32 (*)(int, int))get_player_by_client_id)((int)((int)((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int) ((*(s32 *)&TLobby__script_reg_array)))));
    if (temp_r3 != 0U) {
        TLobby__sub_801F3694((void *) (temp_r3 + 0x428));
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void apply_to_player_by_client_id_b__6TLobbyFi(s32 arg0) {
    u32 temp_r3;
    temp_r3 = ((u32 (*)(int, int))get_player_by_client_id)((int)((int)((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int) ((*(s32 *)&TLobby__script_reg_array)))));
    if (temp_r3 != 0U) {
        TFontSmallLobby__sub_801C013C((void *) (temp_r3 + 0x428));
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EBCA0(s32 arg0) {
    s32 temp_r3;
    temp_r3 = ((s32)((u32 (*)(int, int))get_player_by_client_id)((int)((int)((int)((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)))))), (int)((int)((int)((int) ((*(s32 *)&TLobby__script_reg_array)))))));
    if ((temp_r3 != 0) && (is_current_room__10TObjRoomIdFPv() != 0)) {
        draw_small_label__15TFontSmallLobbyFi((int) (temp_r3));
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EBCF0(s32 arg0) {
    s32 temp_r3;
    temp_r3 = ((s32)((u32 (*)(int, int))get_player_by_client_id)((int)((int)((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int) ((*(s32 *)&TLobby__script_reg_array))))));
    if ((temp_r3 != 0) && (is_current_room__10TObjRoomIdFPv() != 0)) {
        TLobby__sub_801B1254((int) (temp_r3));
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EBD40(void) {
    char buf[0x200];
    Card_801EBD40 *card;
    s32 arg = (*(RecoveredGlobal_801EA274_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value;
    char *src = *(char **)&(*(RecoveredGlobal_801EA274_TLobby__data_80512220 *)&TLobby__quest_argument_stack).remaining[0];
    card = (Card_801EBD40 *)__nw__7TObjectFUl(0x10A8);
    if (card != NULL) {
        card = ((Card_801EBD40 *)construct__6TLobbyFPvPvPvPv(card, 0, 0, 0));
    }
    strncpy(buf, (int)src, 0x1FF);
    trim_whitespace__6TLobbyFPv(buf);
    tokenize_args__6TLobbyFPvPv((Card_801EB10C *)(card), (char *)(buf));
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
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void store_boss_phase_flag__6TLobbyFi(s32 arg0) {
    if (is_boss_phase_reached__6TLobbyFv() != 0) {
        M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int TLobby__sub_801EBE6C(void) { return set_trap_count__10TOMineTrapFi((void*)(0)); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int enable_mine_trap__6TLobbyFv(void) { return set_trap_count__10TOMineTrapFi((void*)(1)); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void init_menu_state__6TLobbyFi(int a0) { TLobby__menu_state_object = create__16TObjItemOKWindowFPv((void*)(tl_01)); TLobby__script_reg_array[(unsigned char)(a0)] = 0; TLobby__active_window_index = a0; TLobby__quest_window_state = 11; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EBF04(s32 arg0) {
    create_instance__12TItemDropSubFi((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) ((*(s32 *)&TLobby__script_reg_array)));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void create_item_from_table__6TLobbyFUcUc(u8 arg0, u8 arg1) {
    Item_801EBF30 item;
    ((s32 (*)(void *))init__9TItemDataFv)((void *)(&item));
    item.data[0] = (*(int * *)&TLobby__script_reg_array)[(u8)arg0++];
    item.data[1] = (*(int * *)&TLobby__script_reg_array)[(u8)arg0++];
    item.data[2] = (*(int * *)&TLobby__script_reg_array)[(u8)arg0++];
    item.data[3] = (*(int * *)&TLobby__script_reg_array)[(u8)arg0++];
    item.data[4] = (*(int * *)&TLobby__script_reg_array)[(u8)arg0++];
    item.data[5] = (*(int * *)&TLobby__script_reg_array)[(u8)arg0];
    item.id = advance_item_id_counter(local_client_id);
    if (is_split_screen() == 1) {
        if (TLobby__sub_802924B4(&item, 0) != 0) {
            (*(int * *)&TLobby__script_reg_array)[arg1] = 1;
        } else {
            (*(int * *)&TLobby__script_reg_array)[arg1] = 0;
        }
    } else {
        if (TLobby__sub_800710D8(&item) != 0) {
            (*(int * *)&TLobby__script_reg_array)[arg1] = 1;
        } else {
            (*(int * *)&TLobby__script_reg_array)[arg1] = 0;
        }
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EC050(u8 arg0, u8 arg1) {
    s32 r;
    if (is_split_screen() == 1) {
        r = TLobby__sub_80292270((*(int * *)&TLobby__script_reg_array)[arg0], 0);
    } else {
        r = TLobby__sub_8007119C((*(int * *)&TLobby__script_reg_array)[arg0]);
    }
    switch (r) {
    case 2:
        (*(int * *)&TLobby__script_reg_array)[arg1] = 2;
        break;
    case 1:
        (*(int * *)&TLobby__script_reg_array)[arg1] = 1;
        break;
    case 0:
        (*(int * *)&TLobby__script_reg_array)[arg1] = 0;
        break;
    case -1:
        (*(int * *)&TLobby__script_reg_array)[arg1] = 3;
        break;
    case -2:
        (*(int * *)&TLobby__script_reg_array)[arg1] = 4;
        break;
    case -3:
        (*(int * *)&TLobby__script_reg_array)[arg1] = 5;
        break;
    case -4:
    default:
        (*(int * *)&TLobby__script_reg_array)[arg1] = 6;
        break;
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void count_nearby_players__6TLobbyFUcUc(u8 arg0, u8 arg1) {
    s32 idx;
    f32 range;
    u8 *self;
    u8 *other;
    s32 field;
    s32 i;
    idx = (*(int * *)&TLobby__script_reg_array)[arg0++];
    range = (*(int * *)&TLobby__script_reg_array)[arg0];
    (*(int * *)&TLobby__script_reg_array)[arg1] = 0;
    self = (u8 *)((s32 (*)(int))get_player_by_client_id)(idx);
    if (self != NULL) {
        field = ((s32 (*)(void *))get_field_3e4__10TObjPlayerFPv)(self);
        for (i = 0; i < 12; i++) {
            if (i != idx) {
                other = (u8 *)((s32 (*)(int))get_player_by_client_id)(i);
                if (other != NULL && field == ((s32 (*)(void *))get_field_3e4__10TObjPlayerFPv)(other) &&
                    xyz_distance_squared(self + 0x38, other + 0x38) < range * range) {
                    (*(int * *)&TLobby__script_reg_array)[arg1]++;
                }
            }
        }
    }
}
#pragma pop

s32 TLobby__sub_800712D8(s32, s32, s32);
s32 TLobby__sub_802923C4(s32, s32, s32);
void TLobby__sub_801EC248(u8 arg0, u8 arg1) {
    s32 a = (*(int * *)&TLobby__script_reg_array)[(u8)arg0++];
    s32 b = (*(int * *)&TLobby__script_reg_array)[(u8)arg0++];
    s32 c = (*(int * *)&TLobby__script_reg_array)[(u8)arg0];
    if (is_split_screen() == 1) {
        if (TLobby__sub_802923C4(a, b, c) != 0) {
            (*(int * *)&TLobby__script_reg_array)[arg1] = 1;
        } else {
            (*(int * *)&TLobby__script_reg_array)[arg1] = 0;
        }
    } else {
        if (TLobby__sub_800712D8(a, b, c) != 0) {
            (*(int * *)&TLobby__script_reg_array)[arg1] = 1;
        } else {
            (*(int * *)&TLobby__script_reg_array)[arg1] = 0;
        }
    }
}

s32 get_selected_entry_value(void);
s32 TObjItemOKWindow__sub_801F3268(void);
void TItemData__sub_8010CA08(Item_801EBF30 *, s32, s32);
void TLobby__sub_801EC31C(u8 arg0) {
    Item_801EBF30 item;
    u8 t = get_selected_entry_value();
    TItemData__sub_8010CA08(&item, TObjItemOKWindow__sub_801F3268(), t);
    if (is_split_screen() == 1) {
        if (TLobby__sub_802924B4(&item, 0) != 0) {
            (*(int * *)&TLobby__script_reg_array)[arg0] = 1;
        } else {
            (*(int * *)&TLobby__script_reg_array)[arg0] = 0;
        }
    } else {
        if (TLobby__sub_800710D8(&item) != 0) {
            (*(int * *)&TLobby__script_reg_array)[arg0] = 1;
        } else {
            (*(int * *)&TLobby__script_reg_array)[arg0] = 0;
        }
    }
}

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void init_window__6TLobbyFv(void) { TLobby__quest_window_object = create__18TObjItemNameSelectFPv((void*)(tl_01)); TLobby__quest_window_state = 10; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void init_state__6TLobbyFv(void) { TLobby__data_805D5EB0 = create__17TObjItemNameEntryFPv((void*)(tl_01)); TLobby__quest_window_state = 9; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EC43C(void) {
    s32 temp_r31;
    u8 *temp_r30;
    temp_r31 = M2C_FIELD(&(*(RecoveredGlobal_801EC43C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 0);
    temp_r30 = (u8 *)(M2C_FIELD(&(*(RecoveredGlobal_801EC43C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, u8 **, 4));
    if (is_split_screen() == 1) {
        set_encoded_name_and_color__6TLobbyFPvi(temp_r30, temp_r31);
        return;
    }
    set_player_name_and_color__6TLobbyFPvi(temp_r30, temp_r31);
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void write_mag_stats__6TLobbyFi(s32 i) {
    s32 r;
    if (((u32 (*)(void *))get_player_by_client_id)((void *)local_client_id) != 0) {
        r = activate_d04_slot__10TObjPlayerFPv();
        if (r != 0) {
            TLobby__script_reg_array[(u8)i++] = get_mag_item_stat_percent();
            TLobby__script_reg_array[(u8)i++] = get_mag_item_percent(r);
            TLobby__script_reg_array[(u8)i++] = get_mag_level(r);
            TLobby__script_reg_array[(u8)i] = get_mag_item_data(r);
        }
    }
}
#pragma pop

s32 isValidGroundDrop__9TItemDataFv(void *);
void TItemData__sub_8010CA08(Item_801EBF30 *, s32, s32);
void give_pending_item_to_local_player__6TLobbyFv(void) {
    Item_801EBF30 item;
    u8 r = ((s32 *)&TLobby__quest_argument_stack)[1];
    s32 a = ((s32 *)&TLobby__quest_argument_stack)[2];
    u16 id = ((s32 *)&TLobby__quest_argument_stack)[0];
    if (id == local_client_id) {
        void *player = (void *)get_player_by_client_id(id);
        if (player != NULL) {
            TItemData__sub_8010CA08(&item, a, (u8)TLobby__script_reg_array[r]);
            if (isValidGroundDrop__9TItemDataFv(&item) == 1 && can_inventory_accept_item__10TObjPlayerFPvPv(player, (Item_801EEE68 *)&item) > 0) {
                request_inventory_item__10TObjPlayerFP9TItemData(player, (Item_801EEE68 *)&item);
            }
        }
    }
}

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void add_to_free_slot__6TLobbyFv(void) {
    s32 i;
    s32 v = ((s32 *)&TLobby__quest_argument_stack)[0];
    for (i = 0; i < 8; i++) {
        if (battle_event_second_table[i] == 0) {
            battle_event_second_table[i] = v;
            return;
        }
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void clear_reg_block__6TLobbyFv(void) {
    s32 i;
    for (i = 0; i < 8; i++) {
        battle_event_second_table[i] = 0;
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EC64C(void) {
    M2C_FIELD(&(*(RecoveredGlobal_801EA274_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x12) = (s8) (*(RecoveredGlobal_801EC64C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void load_setting_17_from_table__6TLobbyFv(void) {
    if ((u32) (*(RecoveredGlobal_801EC90C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value <= 0x1U) {
        M2C_FIELD(&(*(RecoveredGlobal_801EC90C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x11) = (s8) M2C_FIELD(((u8 *)(&lbl_80449B08.value) + ((*(RecoveredGlobal_801EC90C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value * 4)), s32 *, 0);
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EC694(void) {
    open_menu__13TItemMenuCtrlFUi((int) (M2C_FIELD(&(*(RecoveredGlobal_80141730_lbl_8050C028 *)&TLobby__quest_argument_stack).value, s32 *, 0x0)));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void update_main_phase__6TLobbyFv(int _w0, int _w1) {
    if (((u32 (*)(int, int))get_player_by_client_id)((int)((int)((int)(local_client_id))), (int)((int)((int)(_w1)))) != 0U) {
        handle_main_phase__6TLobbyFi();
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void handle_player_event_from_data__6TLobbyFv(void) {
    handle_player_event__6TLobbyFii((int) ((u16) M2C_FIELD(&(*(RecoveredGlobal_801EC6F0_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 0)), (int) (M2C_FIELD(&(*(RecoveredGlobal_801EC6F0_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 4)));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void forward_item_to_player__6TLobbyFUc(u8 i) {
    Item_801EC720 item;
    u16 id = (*(int * *)&TLobby__script_reg_array)[i++];
    ((s32 (*)(void *))init__9TItemDataFv)(&item);
    item.a = (*(int * *)&TLobby__script_reg_array)[i++];
    item.b = (*(int * *)&TLobby__script_reg_array)[i++];
    item.c = (*(int * *)&TLobby__script_reg_array)[i++];
    forward_to_player__6TLobbyFiPv(id, &item);
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int TLobby__sub_801EC7A0(void) { return set_instance__10TOMineTrapFi((void*)(0)); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int TLobby__sub_801EC7C4(void) { return set_instance__10TOMineTrapFi((void*)(1)); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void dispatch_first_player__6TLobbyFv(void) {
    s32 temp_r31;

    temp_r31 = ((s32 *)&TLobby__quest_argument_stack)[0];
    if (is_split_screen() == 1) {
        set_name_string__6TLobbyFi(temp_r31);
        return;
    }
    set_name_string__6TLobbyFi(temp_r31);
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int TLobby__sub_801EC834(void* p) { return clear_quest_state__6TLobbyFv(p); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int TLobby__sub_801EC854(void* p) { return TLobby__sub_801F36BC(p); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int TLobby__sub_801EC874(void* p) { return reset_quest_counter__6TLobbyFv(p); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int forward_801F36D8__6TLobbyFPv(void* p) { return TLobby__sub_801F36D8(p); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EC8B4(void) {
    set_lobby_id__6TLobbyFi((int) (M2C_FIELD(&(*(RecoveredGlobal_80141730_lbl_8050C028 *)&TLobby__quest_argument_stack).value, s32 *, 0x0)));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void apply_global_805D3614__6TLobbyFv(void) {
    set_global_805D3614__6TLobbyFi((int) (M2C_FIELD(&(*(RecoveredGlobal_80141730_lbl_8050C028 *)&TLobby__quest_argument_stack).value, s32 *, 0x0)));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EC90C(void) {
    if ((u32) (*(RecoveredGlobal_801EC90C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value <= 2U) {
        M2C_FIELD(&(*(RecoveredGlobal_801EC90C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0xB) = (s8) M2C_FIELD(((u8 *)(&lbl_80449AFC.value) + ((*(RecoveredGlobal_801EC90C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value * 4)), s32 *, 0);
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EC93C(void) {
    M2C_FIELD(&(*(RecoveredGlobal_801EC93C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0xC) = (s8) (*(RecoveredGlobal_801EC93C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EC954(void) {
    u32 var_r4;
    var_r4 = (*(RecoveredGlobal_801EC954_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value;
    if (var_r4 > 0x278D0U) {
        var_r4 = 0U;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EC954_TLobby__data_80512360 *)&TLobby__data_80512360).value, u32 *, 0x24) = var_r4;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EC984(void) {
    u32 var_r31;
    var_r31 = (*(RecoveredGlobal_801EC984_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value;
    if (var_r31 > get_max_level__10TObjPlayerFv()) {
        var_r31 = 0U;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EC984_TLobby__data_80512360 *)&TLobby__data_80512360).value, u32 *, 0x20) = var_r31;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void copy_clamped_setting_to_slot__6TLobbyFv(void) {
    u32 var_r0;
    var_r0 = (*(RecoveredGlobal_801EC9CC_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value;
    if ((var_r0 != 0xFFU) && (var_r0 > 0x1DU)) {
        var_r0 = 0U;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EC9CC_TLobby__data_80512360 *)&TLobby__data_80512360).value, u32 *, 0x1C) = var_r0;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EC9F8(void) {
    u32 var_r0;
    var_r0 = (*(RecoveredGlobal_801EC9F8_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value;
    if (var_r0 > 0x63U) {
        var_r0 = 0U;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EC9F8_TLobby__data_80512360 *)&TLobby__data_80512360).value, u32 *, 0x18) = var_r0;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801ECA1C(void) {
    if ((u32) (*(RecoveredGlobal_801ECA1C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value <= 1U) {
        M2C_FIELD(&(*(RecoveredGlobal_801ECA1C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0xA) = (s8) (*(RecoveredGlobal_801ECA1C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value;
    }
}
#pragma pop

extern f32 lbl_805D5DC8;
void TLobby__sub_801ECA88(s32 a) {
    s32 b = a + 1;
    f32 v = (f32)TLobby__script_reg_array[(u8)a];
    v += (f32)TLobby__script_reg_array[(u8)b] / (f32)TLobby__script_reg_array[(u8)++b];
    lbl_805D5DC8 = v;
}

extern f32 lbl_805D3550;
void TLobby__sub_801ECB0C(s32 a) {
    s32 b = a + 1;
    f32 v = (f32)TLobby__script_reg_array[(u8)a];
    v += (f32)TLobby__script_reg_array[(u8)b] / (f32)TLobby__script_reg_array[(u8)++b];
    lbl_805D3550 = v;
}

extern f32 lbl_805D354C;
void TLobby__sub_801ECB90(s32 a) {
    s32 b = a + 1;
    f32 v = (f32)TLobby__script_reg_array[(u8)a];
    v += (f32)TLobby__script_reg_array[(u8)b] / (f32)TLobby__script_reg_array[(u8)++b];
    lbl_805D354C = v;
}

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void calc_stat_ratio_3544__6TLobbyFi(s32 a) {
    s32 b = a + 1;
    f32 v = (f32)TLobby__script_reg_array[(u8)a];
    v += (f32)TLobby__script_reg_array[(u8)b] / (f32)TLobby__script_reg_array[(u8)++b];
    lbl_805D3544 = v;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void calc_stat_ratio_3540__6TLobbyFi(s32 a) {
    s32 b = a + 1;
    f32 v = (f32)TLobby__script_reg_array[(u8)a];
    v += (f32)TLobby__script_reg_array[(u8)b] / (f32)TLobby__script_reg_array[(u8)++b];
    lbl_805D3540 = v;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void op_fdiv_to_global_a__6TLobbyFi(s32 a) {
    s32 b = a + 1;
    f32 v = (f32)TLobby__script_reg_array[(u8)a];
    v += (f32)TLobby__script_reg_array[(u8)b] / (f32)TLobby__script_reg_array[(u8)++b];
    lbl_805D5DC4 = v;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void op_fdiv_to_global_b__6TLobbyFi(s32 a) {
    s32 b = a + 1;
    f32 v = (f32)TLobby__script_reg_array[(u8)a];
    v += (f32)TLobby__script_reg_array[(u8)b] / (f32)TLobby__script_reg_array[(u8)++b];
    lbl_805D3548 = v;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void calc_ratio_value__6TLobbyFi(s32 a) {
    s32 b = a + 1;
    f32 v = (f32)TLobby__script_reg_array[(u8)a];
    v += (f32)TLobby__script_reg_array[(u8)b] / (f32)TLobby__script_reg_array[(u8)++b];
    lbl_805D353C = v;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801ECEA8(s32 a) {
    s32 b = a + 1;
    f32 v = (f32)TLobby__script_reg_array[(u8)a];
    v += (f32)TLobby__script_reg_array[(u8)b] / (f32)TLobby__script_reg_array[(u8)++b];
    lbl_805D3538 = v;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801ECF2C(s32 arg0) {
    if (is_split_screen() == 1) {
        update_challenge_timer__6TLobbyFi((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))));
        return;
    }
    TLobby__sub_80071064((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void copy_player_visual_record_by_index__6TLobbyFi(s32 arg0) {
    u32 temp_r3;
    temp_r3 = ((u32 (*)(void *))get_indexed_offset__6TLobbyFi)((void *) (arg0));
    if (temp_r3 != 0U) {
        copy_player_visual_record((void *) (&lbl_8050D3E0.value), (int) (temp_r3));
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int TLobby__sub_801ECFBC(void* p) { return TNpcPlayer__sub_8014DC30(p); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801ECFDC(u8 arg0) {
    Vec_801ECFDC pos;
    u8 *player;
    Vec_801ECFDC *cur;
    player = (u8 *)((s32 (*)(int))get_player_by_client_id)((*(int * *)&TLobby__script_reg_array)[arg0++]);
    if (player != NULL) {
        cur = TObjPlayer__sub_801C6FDC(player + 0x5D4);
        if (cur != NULL) {
            pos.x = cur->x + (f32)(*(int * *)&TLobby__script_reg_array)[arg0++];
            pos.y = cur->y + (f32)(*(int * *)&TLobby__script_reg_array)[arg0++];
            pos.z = cur->z + (f32)(*(int * *)&TLobby__script_reg_array)[arg0];
            copy_position__6TLobbyFPv(player + 0x5D4, &pos);
        }
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801ED0CC(u8 arg0) {
    Vec_801ED0CC pos;
    u8 *player;
    Vec_801ED0CC *cur;
    player = (u8 *)((s32 (*)(int))get_player_by_client_id)((*(int * *)&TLobby__script_reg_array)[arg0++]);
    if (player != NULL) {
        cur = ((Vec_801ED0CC *)TObjPlayer__sub_801C6FDC(player + 0x5C8));
        if (cur != NULL) {
            pos.x = cur->x + (f32)(*(int * *)&TLobby__script_reg_array)[arg0++];
            pos.y = cur->y + (f32)(*(int * *)&TLobby__script_reg_array)[arg0++];
            pos.z = cur->z + (f32)(*(int * *)&TLobby__script_reg_array)[arg0];
            copy_position__6TLobbyFPv((void *)(player + 0x5C8), (Vec_801ECFDC *)(&pos));
        }
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void qst_op_unshrink(s32 arg0) {
    s32 temp_r3;
    temp_r3 = ((s32)((u32 (*)(int, int))get_player_by_client_id)((int)((int)((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int) ((*(s32 *)&TLobby__script_reg_array))))));
    if ((temp_r3 != 0) && (((s32 (*)(void))obj_isState2_324)() == 0)) {
        request_player_size_restore((void *) (temp_r3 + 0x5B0));
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void qst_op_shrink(s32 arg0) {
    s32 temp_r3;
    temp_r3 = ((s32)((u32 (*)(int, int))get_player_by_client_id)((int)((int)((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int) ((*(s32 *)&TLobby__script_reg_array))))));
    if ((temp_r3 != 0) && (((s32 (*)(void))obj_isState2_324)() == 0)) {
        request_player_shrink((void *) (temp_r3 + 0x5B0));
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma opt_common_subs on
#pragma opt_propagation on
#pragma opt_dead_assignments off
void store_floor_switch_state__6TLobbyFi(s32 arg0) {
    s32 var_r31;
    s32 var_r4;
    u8 *var_r3;
    var_r31 = (arg0 * 4) & 0x3FC;
    var_r4 = (*(s32 *)&TLobby__script_reg_array);
    var_r3 = (u8 *)(var_r4 + var_r31);
    var_r3 = (u8 *)(M2C_FIELD(var_r3, u8 **, 4));
    var_r4 = (s32) (s16) M2C_FIELD(var_r4, M2C_UNK *, var_r31);
    var_r3 = (u8 *)((void *) (u16) var_r3);
    var_r4 = (s32) is_floor_switch_set((int) (var_r3), (int) (var_r4));
    var_r3 = (u8 *)((*(s32 *)&TLobby__script_reg_array) + var_r31);
    M2C_FIELD(var_r3, s32 *, 8) = var_r4;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void update_floor_switch_state__6TLobbyFi(s32 arg0) {
    TLobby__script_reg_array[(u8)arg0 + 1] = is_current_floor_switch_set((u16)TLobby__script_reg_array[(u8)arg0]);
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void send_6x05_switch_changed_off__6TLobbyFv(void) {
    Pkt_801ED300 pkt;
    s32 x = ((s32 *)&TLobby__quest_argument_stack)[0];
    s32 y = ((s32 *)&TLobby__quest_argument_stack)[1];
    init_6x05_switch_changed__6TLobbyFPv(&pkt);
    pkt.a = 0xFFFF;
    pkt.b = 0;
    pkt.c = y;
    pkt.d = x;
    pkt.e = 0;
    finalize_and_send_60__6TLobbyFPv(&pkt);
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void send_6x05_switch_changed_on__6TLobbyFv(void) {
    Pkt_801ED360 pkt;
    s32 x = ((s32 *)&TLobby__quest_argument_stack)[0];
    s32 y = ((s32 *)&TLobby__quest_argument_stack)[1];
    init_6x05_switch_changed__6TLobbyFPv(&pkt);
    pkt.a = 0xFFFF;
    pkt.b = 0;
    pkt.c = y;
    pkt.d = x;
    pkt.e = 1;
    finalize_and_send_60__6TLobbyFPv(&pkt);
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void reset_player_floor_by_slot__6TLobbyFi(s32 arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(((u8 *)((u32 (*)(int, int))get_player_by_client_id)((int)((int)((int)(M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int)((*(s32 *)&TLobby__script_reg_array)))))));
    if (temp_r3 != NULL) {
        set_floor__6TLobbyFPvs(temp_r3, 0);
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void store_player_kill_count__6TLobbyFii(s32 arg0, s32 arg1) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(((s32)((u32 (*)(int, int))get_player_by_client_id)((int)(M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int)(arg1))));
    if (temp_r3 != NULL) {
        M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = (s32) get_kill_count__10TObjPlayerFPv(temp_r3);
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 0;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void warp_player_to_area__6TLobbyFii(s32 a, s32 b) {
    u32 r = ((u32 (*)(int, int))get_player_by_client_id)((*(s32 * *)&TLobby__script_reg_array)[(u8)a], b);
    if (r != 0 && local_client_id == (*(s32 * *)&TLobby__script_reg_array)[(u8)a]) {
        set_area__6TLobbyFPvi(lbl_80515BA0, (*(s32 * *)&TLobby__script_reg_array)[(u8)b], get_floor_map_terrain((*(s32 * *)&TLobby__script_reg_array)[(u8)b]));
        mark_area_change_pending();
        get_dest_area__17TObjAreaWarpQuestFPv(lbl_80515BA0);
        send_inter_level_warp_all__10TNpcPlayerFi();
        send_6x21_inter_level_warp(r, (void *)get_dest_area__17TObjAreaWarpQuestFPv(lbl_80515BA0));
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801ED50C(void* p) { TBoss1Dragon::clearControlOverride(); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void op_set_control_override__6TLobbyFi(s32 arg0) {
    setControlOverride__12TBoss1DragonFs((int) ((u16) M2C_FIELD(TLobby__script_reg_array, M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) (TLobby__script_reg_array));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801ED55C(s32 arg0) {
    if (is_split_screen() == 1) {
        M2C_FIELD(TLobby__script_reg_array, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = TLobby__sub_8029299C();
        return;
    }
    M2C_FIELD(TLobby__script_reg_array, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = TLobby__sub_80070F4C();
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801ED5B4(s32 arg0) {
    if (is_split_screen() == 1) {
        M2C_FIELD(TLobby__script_reg_array, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = TLobby__sub_80292A34();
        return;
    }
    M2C_FIELD(TLobby__script_reg_array, M2C_UNK *, ((arg0 * 4) & 0x3FC)) = TLobby__sub_80070FD8();
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801ED60C(s32 a) {
    s32 b = a + 1;
    f32 v = (f32)TLobby__script_reg_array[(u8)a];
    v += (f32)TLobby__script_reg_array[(u8)b] / (f32)TLobby__script_reg_array[(u8)++b];
    if (is_split_screen() == 1) {
        set_camera_height_if_valid__6TLobbyFf(v);
        return;
    }
    try_set_value__6TLobbyFf(v);
}
#pragma pop

void dispatch_split_screen__6TLobbyFv(void) {
    s32 temp_r31;

    temp_r31 = ((s32 *)&TLobby__quest_argument_stack)[0];
    if (is_split_screen() == 1) {
        try_set_split_screen__6TLobbyFi(temp_r31);
        return;
    }
    set_split_screen_flag__6TLobbyFi(temp_r31);
}

void update_split_screen_camera__6TLobbyFv(void) {
    s32 temp_r31;

    temp_r31 = (*(struct Glob_80512220 *)&TLobby__quest_argument_stack).field0;
    if (is_split_screen() == 1) {
        rebuild_players_for_stage__6TLobbyFi(temp_r31);
        return;
    }
    rebuild_players_for_stage__10TObjPlayerFi(temp_r31);
}

void TLobby__sub_801ED764(s32 arg0) {
    if (is_split_screen() == 1) {
        TLobby__sub_801F3700((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))));
        return;
    }
    TLobby__sub_801F36F0((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))));
}

#define REGS_801ED7BC ((s32 *)TLobby__script_reg_array)
void spawn_item_from_regs__6TLobbyFUc(u8 arg0) {
    Item_801ED7BC item;
    s32 a;
    s32 b;
    s32 c;
    a = REGS_801ED7BC[(u8)arg0++];
    b = REGS_801ED7BC[(u8)arg0++];
    c = REGS_801ED7BC[(u8)arg0++];
    ((void (*)(Item_801ED7BC *))init__9TItemDataFv)(&item);
    item.data[0] = REGS_801ED7BC[(u8)arg0++];
    item.data[1] = REGS_801ED7BC[(u8)arg0++];
    item.data[2] = REGS_801ED7BC[(u8)arg0++];
    item.data[3] = REGS_801ED7BC[(u8)arg0++];
    item.data[4] = REGS_801ED7BC[(u8)arg0++];
    item.data[5] = REGS_801ED7BC[(u8)arg0];
    item.id = advance_item_id_counter(local_client_id);
    if (is_split_screen() == 1) {
        TLobby__sub_801F3708(a, b, c, &item);
    } else {
        TLobby__sub_801F36F8(a, b, c, &item);
    }
}

#undef REGS_801ED7BC
#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void apply_player_count__6TLobbyFv(void) {
    u32 temp_r30;
    u32 temp_r31;

    temp_r30 = ((u32 *)&TLobby__quest_argument_stack)[0];
    temp_r31 = get_layout_id__20TWindowSubStatusDispFv(-1);
    if (is_split_screen() == 1) {
        if (temp_r30 < temp_r31) {
            clamp_and_store_layout_index__6TLobbyFi(temp_r30);
            return;
        }
        clamp_and_store_layout_index__6TLobbyFi(0U);
        return;
    }
    if (temp_r30 < temp_r31) {
        set_selected_layout__6TLobbyFi(temp_r30);
        return;
    }
    set_selected_layout__6TLobbyFi(0U);
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801ED938(void) {
    s32 temp_r31;
    temp_r31 = (*(RecoveredGlobal_801ED938_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        init_instance_with_text__19TPlayerBattleCtrl4PFii((s32) &(*(RecoveredGlobal_801ED938_TLobby__data_80512360 *)&TLobby__data_80512360).value, temp_r31);
        return;
    }
    init_battle_ctrl__6TLobbyFii((s32) &(*(RecoveredGlobal_801ED938_TLobby__data_80512360 *)&TLobby__data_80512360).value, temp_r31);
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void op_set_mode_byte__6TLobbyFv(void) {
    if ((u32) (*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value <= 0x1U) {
        M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x9) = (s8) (&lbl_80449AE4.value)[(*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value];
        return;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x9) = (s8) lbl_80449AE4.value;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void update_table_byte8__6TLobbyFv(void) {
    if ((u32) (*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value <= 0x1U) {
        M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x8) = (s8) (&lbl_80449ADC.value)[(*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value];
        return;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x8) = (s8) lbl_80449ADC.value;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void update_table_byte7__6TLobbyFv(void) {
    if ((u32) (*(RecoveredGlobal_801EDA70_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value <= 0x1U) {
        M2C_FIELD(&TLobby__data_80512360.value, s8 *, 0x7) = (s8) M2C_FIELD(((u8 *)(&lbl_80449AD4.value) + ((*(RecoveredGlobal_801EDA70_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value * 4)), s32 *, 0);
        return;
    }
    M2C_FIELD(&TLobby__data_80512360.value, s8 *, 0x7) = (s8) M2C_FIELD(&lbl_80449AD4.value, s32 *, 0x4);
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EDA70(void) {
    if ((u32) (*(RecoveredGlobal_801EDA70_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value <= 2U) {
        M2C_FIELD(&TLobby__data_80512360.value, s8 *, 6) = (s8) M2C_FIELD(((u8 *)(&lbl_80449AC8.value) + ((*(RecoveredGlobal_801EDA70_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value * 4)), s32 *, 0);
        return;
    }
    M2C_FIELD(&TLobby__data_80512360.value, s8 *, 6) = (s8) M2C_FIELD(&lbl_80449AC8.value, s32 *, 8);
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EDABC(void) {
    if ((u32) (*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value <= 0x1U) {
        M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x5) = (s8) (&lbl_80449AC0.value)[(*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value];
        return;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x5) = (s8) lbl_80449AC0.value;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EDB04(void) {
    if ((u32) (*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value <= 0x1U) {
        M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x4) = (s8) (&lbl_80449AB8.value)[(*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value];
        return;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x4) = (s8) lbl_80449AB8.value;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EDB4C(void) {
    if ((u32) (*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value <= 2U) {
        M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 3) = (s8) (&lbl_80449AAC.value)[(*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value];
        return;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 3) = (s8) lbl_80449AAC.value;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_menu_byte_2__6TLobbyFv(void) {
    if ((u32) (*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value <= 0x1U) {
        M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x2) = (s8) (&lbl_80449AA4.value)[(*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value];
        return;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x2) = (s8) lbl_80449AA4.value;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_menu_byte_1__6TLobbyFv(void) {
    if ((u32) (*(RecoveredGlobal_801EDBDC_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value <= 3U) {
        M2C_FIELD(&(*(RecoveredGlobal_801EDBDC_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 1) = (s8) (&lbl_80449A94.value)[(*(RecoveredGlobal_801EDBDC_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value];
        return;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EDBDC_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 1) = (s8) lbl_80449A94.value;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void set_menu_byte_0__6TLobbyFv(void) {
    s8 var_r0;
    if ((u32) (*(RecoveredGlobal_801EDC24_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value <= 2U) {
        var_r0 = (s8) M2C_FIELD(((u8 *)(&lbl_80449A88.value) + ((*(RecoveredGlobal_801EDC24_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value * 4)), s32 *, 0);
    } else {
        var_r0 = (s8) M2C_FIELD(&lbl_80449A88.value, s32 *, 8);
    }
    (*(RecoveredGlobal_801EDC24_TLobby__data_80512360 *)&TLobby__data_80512360).value = var_r0;
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void op_clear_block__6TLobbyFv(void) {
    memset((void *) (&(*(RecoveredGlobal_800F8A78_lbl_80501178 *)&TLobby__data_80512360).value), (int) (0), (int) (0x2c));
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void TLobby__sub_801EDC98(void) {
    Tbl_801EDC98 t = lbl_80449A40;
    if (((u32 *)&TLobby__quest_argument_stack)[0] <= 0x11U) {
        TLobby__sub_80141038(lbl_80515BA0, t.w[((u32 *)&TLobby__quest_argument_stack)[0]], 0);
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void send_field1c_if_player_exists__6TLobbyFii(int _w0, int _w1) {
    if (((u32 (*)(int, int))get_player_by_client_id)((int)((int) ((*(RecoveredGlobal_801EDD0C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value)), (int)(_w1)) != 0U) {
        send_field1c_packet__6TLobbyFi();
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void send_font_state_if_player_exists__6TLobbyFii(int _w0, int _w1) {
    if (((u32 (*)(int, int))get_player_by_client_id)((int)((int) ((*(RecoveredGlobal_801EDD44_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value)), (int)(_w1)) != 0U) {
        send_font_state__6TLobbyFi();
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void qst_op_map_designate_ex(u32 first) {
    u32 i = first;
    s32 a = (*(s32 **)&TLobby__script_reg_array)[(u8)i++];
    s32 b = (*(s32 **)&TLobby__script_reg_array)[(u8)i++];
    s16 c = (*(s32 **)&TLobby__script_reg_array)[(u8)i++];
    s32 d = (*(s32 **)&TLobby__script_reg_array)[(u8)i++];
    s32 e = (*(s32 **)&TLobby__script_reg_array)[(u8)i];
    set_quest_floor_designation_ex(c, a, b, d, e);
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int TLobby__sub_801EDDDC(void) { return set_mode__13TRaderMapCoreFi((void*)(0)); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
int TLobby__sub_801EDE00(void) { return set_mode__13TRaderMapCoreFi((void*)(1)); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void store_player_position__6TLobbyFii(s32 a, s32 b) {
    if (((u32 (*)(int, int))get_player_by_client_id)((int)((*(s32 * *)&TLobby__script_reg_array)[(u8)b]), (int)(b)) != 0) {
        f32 *p = get_position_ptr__10TObjPlayerFPv();
        if (p != NULL) {
            (*(s32 * *)&TLobby__script_reg_array)[(u8)a++] = (s32)p[0];
            (*(s32 * *)&TLobby__script_reg_array)[(u8)a++] = (s32)p[1];
            (*(s32 * *)&TLobby__script_reg_array)[(u8)a] = (s32)p[2];
        }
    }
}
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void store_status__6TLobbyFi(int a0) { TLobby__script_reg_array[(unsigned char)(a0)] = count_members__6TLobbyFv(); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void qst_op_get_difficulty_level2__6TLobbyFi(s32 arg0) {
    s32 var_r5;
    var_r5 = game_difficulty_selection;
    if (var_r5 < 0) {
        var_r5 = 0;
    }
    if (var_r5 > 3) {
        var_r5 = 3;
    }
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = var_r5;
}
#pragma pop

void create_quest_bgm_ctrl__6TLobbyFv(void) {
    void* obj = __nw__7TObjectFUl(0x1C);
    if (obj != 0) {
        __ct__13TQuestBgmCtrlFP7TObject(obj, tl_05);
    }
}

void send_switch_changed_from_args__6TLobbyFi(s32 arg0) {
    Pkt_801EDF64 pkt;
    init_6x05_switch_changed__6TLobbyFPv(&pkt);
    pkt.b = 0;
    pkt.a = 0xFFFF;
    pkt.c = (*(s32* *)&TLobby__script_reg_array)[(u8)arg0++];
    pkt.d = (*(s32* *)&TLobby__script_reg_array)[(u8)arg0++];
    pkt.e = (*(s32* *)&TLobby__script_reg_array)[(u8)arg0];
    finalize_and_send_60__6TLobbyFPv(&pkt);
}

void quest_vm_get_designated_client_id(u8 reg) {
    (*(s32 * *)&TLobby__script_reg_array)[reg] = TLobby__designated_client_id;
}

void quest_vm_get_local_client_id(u8 reg) {
    (*(s32 * *)&TLobby__script_reg_array)[reg] = local_client_id;
}

int forward_801F36E4__6TLobbyFPv(void* p) { return TLobby__sub_801F36E4(p); }

int qst_op_warp_on(void* p) { return set_cleanup_flag__6TLobbyFv(p); }

void send_packet_67_04__6TLobbyFv(void) {
    Pkt_801EE048 pkt;
    s32 x = ((s32 *)&TLobby__quest_argument_stack)[0];
    s32 y = ((s32 *)&TLobby__quest_argument_stack)[1];
    init_packet_67_04__6TLobbyFPv(&pkt);
    pkt.b = x;
    pkt.a = 0;
    pkt.c = y;
    pkt.d = 0;
    byteswap_and_send__6TLobbyFi((s32)&pkt);
}

void TLobby__sub_801EE09C(void* p) { TBoss1Dragon::requestActionRefresh(); }

void check_item_equippable_by_room__6TLobbyFUcUc(u8 arg0, u8 arg1) {
    Item_801EE0BC item;
    ((void (*)(Item_801EE0BC *))init__9TItemDataFv)(&item);
    item.data[0] = (*(s32 * *)&TLobby__script_reg_array)[(u8)arg0++];
    item.data[1] = (*(s32 * *)&TLobby__script_reg_array)[(u8)arg0++];
    item.data[2] = (*(s32 * *)&TLobby__script_reg_array)[(u8)arg0++];
    item.data[3] = (*(s32 * *)&TLobby__script_reg_array)[(u8)arg0++];
    item.data[4] = (*(s32 * *)&TLobby__script_reg_array)[(u8)arg0++];
    item.data[5] = (*(s32 * *)&TLobby__script_reg_array)[(u8)arg0];
    if (TCheckRoomSequence__sub_80210D44(&item, 0) != 0) {
        (*(s32 * *)&TLobby__script_reg_array)[arg1] = 1;
    } else {
        (*(s32 * *)&TLobby__script_reg_array)[arg1] = 0;
    }
}

void handle_active_battle__6TLobbyFv(void) {
    if (((s32 (*)(s32))get_player_by_client_id)((s32)(local_client_id)) != 0U) {
        stop_battle__10TObjPlayerFPv();
    }
}

void sync_battle_ctrl_4p__6TLobbyFv(void) {
    if (((s32 (*)(s32))get_player_by_client_id)((s32)(local_client_id)) != 0U) {
        player_flag_1__6TLobbyFPv();
    }
}

void reset_battle_camera__6TLobbyFv(void) {
    u32 temp_r3;
    reset_battle_camera__11TCameraCtrlFPv();
    temp_r3 = ((s32 (*)(s32))get_player_by_client_id)((s32)(local_client_id));
    if (temp_r3 != 0U) {
        reset_cameras_to_actor(temp_r3, 0);
    }
}

void set_camera_from_table__6TLobbyFUc(u8 arg0) {
    Vec_801EE220 eye;
    Vec_801EE220 at;

    eye.x = (*(s32 * *)&TLobby__script_reg_array)[(u8)arg0++];
    eye.y = (*(s32 * *)&TLobby__script_reg_array)[(u8)arg0++];
    eye.z = (*(s32 * *)&TLobby__script_reg_array)[(u8)arg0++];
    at.x = (*(s32 * *)&TLobby__script_reg_array)[(u8)arg0++];
    at.y = (*(s32 * *)&TLobby__script_reg_array)[(u8)arg0++];
    at.z = (*(s32 * *)&TLobby__script_reg_array)[(u8)arg0];
    TCameraCtrl__sub_8006B3B8(&eye, &at);
}

void send_6x77_sync_quest_register(void) {
    Pkt_801EE330 pkt;
    build_6x77_sync_quest_register(&pkt);
    pkt.a = ((s32 *)&TLobby__quest_argument_stack)[0];
    pkt.b = ((s32 *)&TLobby__quest_argument_stack)[1];
    sync_quest_register_and_send__6TLobbyFPv(&pkt);
}

void TLobby__sub_801EE374(void) {
    u32 x = ((u32 *)&TLobby__quest_argument_stack)[0];
    u32 y = ((u32 *)&TLobby__quest_argument_stack)[1];
    u8* s = ((u8* (*)(void))get_global_state__23TAdSinglePlyChrSelectGCFv)();
    if (s != 0 && x < 0x100) {
        s[x + 0x10] = y;
    }
}

void TLobby__sub_801EE3C0(void) {
    u32 x = ((u32 *)&TLobby__quest_argument_stack)[0];
    u32 y = ((u32 *)&TLobby__quest_argument_stack)[1];
    u8* s = ((u8* (*)(void))get_global_state__23TAdSinglePlyChrSelectGCFv)();
    if (s != 0 && x < 0x100) {
        s[x + 0x10] = y;
    }
}

void update_local_player__6TLobbyFv(void) {
    s32 temp_r3;

    temp_r3 = ((s32 (*)(s32))get_player_by_client_id)((s32)(local_client_id));
    if (temp_r3 != 0) {
        TObjPlayer__sub_801B3FD8();
        forward_1BF500_at_63c__10TObjPlayerFPv(temp_r3);
    }
}

void attach_battle_ctrl__6TLobbyFv(void) {
    s32 temp_r3;

    temp_r3 = ((s32 (*)(s32))get_player_by_client_id)(local_client_id);
    if (temp_r3 != 0) {
        TObjPlayer__sub_801B4044();
        attach_battle_ctrl_sub__10TObjPlayerFPv(temp_r3);
    }
}

void TLobby__sub_801EE48C(void) { TObjPlayer__sub_8024ABDC((void*)((*(int *)&local_client_id))); }

void process_static_805D53A0__6TLobbyFv(void) { ((int (*)(void*))TLobby__sub_8024AC20)((void*)((*(int *)&local_client_id))); }

void TLobby__sub_801EE4D4(void) {  }

int TLobby__sub_801EE4D8(void) { return set_quest_exit_callback((void*)(-1)); }

void notify_guild_offline__6TLobbyFUs(u16 arg0) {
    set_quest_exit_callback((void *) (arg0));
}

void qst_op_get_difficulty_level_v1__6TLobbyFi(s32 arg0) {
    s32 var_r5;
    var_r5 = game_difficulty_selection;
    if (var_r5 < 0) {
        var_r5 = 0;
    }
    if (var_r5 > 2) {
        var_r5 = 2;
    }
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = var_r5;
}

void TLobby__sub_801EE54C(void) {
    Pkt_801EE54C pkt;
    s32 x = ((s32 *)&TLobby__quest_argument_stack)[0];
    init_packet_67_04__6TLobbyFPv(&pkt);
    pkt.a = 0;
    pkt.b = get_current_floor();
    pkt.c = x;
    pkt.d = 0;
    byteswap_and_send__6TLobbyFi((s32)&pkt);
}

void qst_op_clear_quest_board_handler(void) {
    if ((u32) (*(RecoveredGlobal_801EE5A4_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value <= 5U) {
        memset((void *) ((u8 *)&quest_board_handlers.value + ((*(RecoveredGlobal_801EE5A4_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value * 0x24)), (int) (0), (int) (0x24));
    }
}

void qst_op_set_quest_board_handler(void) {
    s32 i = ((s32 *)&TLobby__quest_argument_stack)[0];
    s32 v = ((s32 *)&TLobby__quest_argument_stack)[1];
    s32 n = ((s32 *)&TLobby__quest_argument_stack)[2];
    if (i <= 5) {
        Ent_801EE5EC* e = &((Ent_801EE5EC *)&quest_board_handlers)[i];
        e->v = v;
        ((void* (*)(void*, s32, s32))strncpy)(e, n, 0x20);
    }
}

void set_table_entry__6TLobbyFi(int a0) { TLobby__script_reg_array[(unsigned char)(a0)] = TLobby__sub_803DF1CC(); }

void qst_op_winset_time(s32 arg0) {
    set_timer_window_time__11TWindowCtrlFi((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) ((*(s32 *)&TLobby__script_reg_array)));
}

int qst_op_winend_time(void* p) { return close_timer_window__11TWindowCtrlFv(p); }

int create_alt_timer__6TLobbyFPv(void* p) { return create_alt_timer__11TWindowCtrlFv(p); }

void open_door__6TLobbyFv(void) { reset_door_state__6TLobbyFv(); reset_instance__8TObjDoorFv(); }

void update_doors__6TLobbyFv(void) { TObjDoor__sub_801F3760(); TObjDoor__sub_801F3754(); }

void qst_op_map_designate(u32 first) {
    u32 i = first;
    s32 floor = (*(s32 * *)&TLobby__script_reg_array)[(u8)i++];
    s16 mode = (*(s32 * *)&TLobby__script_reg_array)[(u8)i++];
    s32 terrain = (*(s32 * *)&TLobby__script_reg_array)[(u8)i++];
    s32 extra = (*(s32 * *)&TLobby__script_reg_array)[(u8)i];
    set_quest_floor_designation(mode, floor, terrain, extra);
}

void TLobby__sub_801EE77C(u8 arg0, u8 arg1) {
    Item_801EE77C item;
    Player_801EE77C *player;
    void *obj;
    player = (Player_801EE77C *)get_player_by_client_id(local_client_id);
    if (player != NULL) {
        init__9TItemDataFv(&item);
        item.data[0] = (*(int * *)&TLobby__script_reg_array)[(u8)arg0++];
        item.data[1] = (*(int * *)&TLobby__script_reg_array)[(u8)arg0++];
        item.data[2] = (*(int * *)&TLobby__script_reg_array)[(u8)arg0++];
        item.data[4] = (*(int * *)&TLobby__script_reg_array)[(u8)arg0];
        obj = set_mode_and_refresh_object__10TObjPlayerFPvi(player->fD00, &item);
        if (obj != NULL) {
            obj = get_owner_if_alive__10TObjPlayerFPv(obj);
            if (obj != NULL) {
                (*(int * *)&TLobby__script_reg_array)[arg1] = get_field_d8__10TObjPlayerFPv(obj);
            } else {
                (*(int * *)&TLobby__script_reg_array)[arg1] = -1;
            }
        } else {
            (*(int * *)&TLobby__script_reg_array)[arg1] = -1;
        }
    } else {
        (*(int * *)&TLobby__script_reg_array)[arg1] = -1;
    }
}

void qst_op_item_check(u32 first, u32 destination) {
    Item_801EE77C item;
    u32 player;
    void *slot;
    void *owner;
    player = get_player_by_client_id(local_client_id);
    if (player != 0) {
        init__9TItemDataFv(&item);
        item.data[0] = TLobby__script_reg_array[(u8)first++];
        item.data[1] = TLobby__script_reg_array[(u8)first++];
        item.data[2] = TLobby__script_reg_array[(u8)first];
        slot = set_mode_and_refresh_object__10TObjPlayerFPvi(M2C_FIELD(player, void **, 0xD00), &item);
        if (slot != 0) {
            owner = get_owner_if_alive__10TObjPlayerFPv(slot);
            if (owner != 0) {
                TLobby__script_reg_array[(u8) destination] = get_field_d8__10TObjPlayerFPv(owner);
                return;
            }
            TLobby__script_reg_array[(u8) destination] = -1;
            return;
        }
        TLobby__script_reg_array[(u8) destination] = -1;
        return;
    }
    TLobby__script_reg_array[(u8) destination] = -1;
}

void qst_op_item_delete2(u32 src, u32 dst) {
    Item_801EE77C item;
    u32 player;
    void *slot;
    void *owner;
    if ((u8)dst > 0xF4) {
        return;
    }
    player = get_player_by_client_id(local_client_id);
    if (player != 0) {
        init__9TItemDataFv(&item);
        item.data[0] = TLobby__script_reg_array[(u8)src++];
        item.data[1] = TLobby__script_reg_array[(u8)src++];
        item.data[2] = TLobby__script_reg_array[(u8)src];
        slot = set_mode_and_refresh_object__10TObjPlayerFPvi(M2C_FIELD(player, void **, 0xD00), &item);
        if (slot != 0) {
            owner = get_owner_if_alive__10TObjPlayerFPv(slot);
            if (owner != 0) {
                copy_to_item_data__5TItemFPvPv(owner, &item);
                TLobby__script_reg_array[(u8)dst++] = item.data[0];
                TLobby__script_reg_array[(u8)dst++] = item.data[1];
                TLobby__script_reg_array[(u8)dst++] = item.data[2];
                TLobby__script_reg_array[(u8)dst++] = item.data[3];
                TLobby__script_reg_array[(u8)dst++] = item.data[4];
                TLobby__script_reg_array[(u8)dst++] = item.data[5];
                TLobby__script_reg_array[(u8)dst++] = item.data[6];
                TLobby__script_reg_array[(u8)dst++] = (s8)item.data[7];
                TLobby__script_reg_array[(u8)dst++] = item.data[8];
                TLobby__script_reg_array[(u8)dst++] = (s8)item.data[9];
                TLobby__script_reg_array[(u8)dst++] = item.data[10];
                TLobby__script_reg_array[(u8)dst] = (s8)item.data[11];
                get_item_record__23TShopJudgmentItemWindowFPv((void *)player, item.id, 1);
                return;
            }
            TLobby__script_reg_array[(u8)dst] = -1;
            return;
        }
        TLobby__script_reg_array[(u8)dst] = -1;
        return;
    }
    TLobby__script_reg_array[(u8)dst] = -1;
}

void qst_op_item_delete(u32 src, u32 dst) {
    Item_801EE77C item;
    u32 player;
    void *slot;
    void *owner;
    if ((u8)dst > 0xF4) {
        return;
    }
    player = get_player_by_client_id(local_client_id);
    if (player != 0) {
        slot = start_inventory_update__10TObjPlayerFPvi(M2C_FIELD(player, void **, 0xD00), TLobby__script_reg_array[(u8)src]);
        if (slot != 0) {
            owner = get_owner_if_alive__10TObjPlayerFPv(slot);
            if (owner != 0) {
                copy_to_item_data__5TItemFPvPv(owner, &item);
                TLobby__script_reg_array[(u8)dst++] = item.data[0];
                TLobby__script_reg_array[(u8)dst++] = item.data[1];
                TLobby__script_reg_array[(u8)dst++] = item.data[2];
                TLobby__script_reg_array[(u8)dst++] = item.data[3];
                TLobby__script_reg_array[(u8)dst++] = item.data[4];
                TLobby__script_reg_array[(u8)dst++] = item.data[5];
                TLobby__script_reg_array[(u8)dst++] = item.data[6];
                TLobby__script_reg_array[(u8)dst++] = (s8)item.data[7];
                TLobby__script_reg_array[(u8)dst++] = item.data[8];
                TLobby__script_reg_array[(u8)dst++] = (s8)item.data[9];
                TLobby__script_reg_array[(u8)dst++] = item.data[10];
                TLobby__script_reg_array[(u8)dst] = (s8)item.data[11];
                get_item_record__23TShopJudgmentItemWindowFPv((void *)player, TLobby__script_reg_array[(u8)src], 1);
                return;
            }
            TLobby__script_reg_array[(u8)dst] = -1;
            return;
        }
        TLobby__script_reg_array[(u8)dst] = -1;
        return;
    }
    TLobby__script_reg_array[(u8)dst] = -1;
}

void qst_op_item_create2(u8 arg0, u8 arg1) {
    Item_801EEE68 item;
    void *player;
    player = (void *)get_player_by_client_id(local_client_id);
    if (player != NULL) {
        init__9TItemDataFv((Item_801EE77C *)(&item));
        item.data[0] = TLobby__script_reg_array[arg0++];
        item.data[1] = TLobby__script_reg_array[arg0++];
        item.data[2] = TLobby__script_reg_array[arg0++];
        item.data[3] = TLobby__script_reg_array[arg0++];
        item.data[4] = TLobby__script_reg_array[arg0++];
        item.data[5] = TLobby__script_reg_array[arg0++];
        item.id = advance_item_id_counter(local_client_id);
        item.data[6] = TLobby__script_reg_array[arg0++];
        item.data[7] = TLobby__script_reg_array[arg0++];
        item.data[8] = TLobby__script_reg_array[arg0++];
        item.data[9] = TLobby__script_reg_array[arg0++];
        item.data[10] = TLobby__script_reg_array[arg0++];
        item.data[11] = TLobby__script_reg_array[arg0];
        if (can_inventory_accept_item__10TObjPlayerFPvPv(player, &item) > 0) {
            request_inventory_item__10TObjPlayerFP9TItemData(player, &item);
            TLobby__script_reg_array[arg1] = item.id;
        } else {
            TLobby__script_reg_array[arg1] = -1;
        }
    } else {
        TLobby__script_reg_array[arg1] = -1;
    }
}

void qst_op_item_create(u8 arg0, u8 arg1) {
    Item_801EEE68 item;
    void *player;
    player = (void *)get_player_by_client_id(local_client_id);
    if (player != NULL) {
        init__9TItemDataFv((Item_801EE77C *)(&item));
        item.data[0] = (*(int * *)&TLobby__script_reg_array)[(u8)arg0++];
        item.data[1] = (*(int * *)&TLobby__script_reg_array)[(u8)arg0++];
        item.data[2] = (*(int * *)&TLobby__script_reg_array)[(u8)arg0];
        item.id = advance_item_id_counter(local_client_id);
        if (can_inventory_accept_item__10TObjPlayerFPvPv(player, &item) > 0) {
            request_inventory_item__10TObjPlayerFP9TItemData(player, &item);
            (*(int * *)&TLobby__script_reg_array)[arg1] = item.id;
        } else {
            (*(int * *)&TLobby__script_reg_array)[arg1] = -1;
        }
    } else {
        (*(int * *)&TLobby__script_reg_array)[arg1] = -1;
    }
}

void qst_op_del_obj_param(s32 arg0) {
    delete_by_param__13TQuestColCtrlFi((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) ((*(s32 *)&TLobby__script_reg_array)));
}

void notify_battle_ctrl_player__6TLobbyFv(void) {
    s32 temp_r31;
    u32 ret;

    temp_r31 = ((s32 *)&TLobby__quest_argument_stack)[0];
    ret = get_player_by_client_id(local_client_id);
    if (ret != 0U) {
        add_meseta__10TObjPlayerFl(ret, temp_r31);
    }
}

void qst_op_pl_add_meseta(void) {
    s32 temp_r31;
    u32 temp_r3;
    temp_r31 = M2C_FIELD(&(*(RecoveredGlobal_801EEFB4_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 4);
    temp_r3 = get_player_by_client_id((s32)((int) (M2C_FIELD(&(*(RecoveredGlobal_801EEFB4_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 0))));
    if (temp_r3 != 0U) {
        add_meseta__10TObjPlayerFl((s32)((int) (temp_r3)), (s32)((int) (temp_r31)));
    }
}

int qst_op_clr_qt_cancel(void) { return set_quest_cancel_callback((void*)(-1)); }

int qst_op_clr_qt_success(void) { return set_quest_success_callback((void*)(-1)); }

int qst_op_clr_qt_failure(void) { return THunterGuildSeqOffline__sub_801F3748((void*)(-1)); }

void qst_op_set_qt_cancel(u16 arg0) {
    set_quest_cancel_callback((void *) (arg0));
}

void qst_op_set_qt_success(u16 arg0) {
    set_quest_success_callback((void *) (arg0));
}

void qst_op_set_qt_failure(u16 arg0) {
    THunterGuildSeqOffline__sub_801F3748((void *) (arg0));
}

void qst_op_clr_floor_handler(void) {
    clear_floor_handler((int) (M2C_FIELD(&(*(RecoveredGlobal_80141730_lbl_8050C028 *)&TLobby__quest_argument_stack).value, s32 *, 0x0)));
}

void qst_op_set_floor_handler(void) {
    set_floor_handler((int) (M2C_FIELD(&(*(RecoveredGlobal_801EF100_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 0)), (int) ((u16) M2C_FIELD(&(*(RecoveredGlobal_801EF100_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 4)));
}

void qst_set_camera_offsets__6TLobbyFUc(u8 arg0) {
    s32 i = arg0;
    Vec_801EF134 a;
    Vec_801EF134 b;

    a.x = (*(s32 * *)&TLobby__script_reg_array)[i++];
    a.y = (*(s32 * *)&TLobby__script_reg_array)[i++];
    a.z = (*(s32 * *)&TLobby__script_reg_array)[i++];
    b.x = (*(s32 * *)&TLobby__script_reg_array)[i++];
    b.y = (*(s32 * *)&TLobby__script_reg_array)[i++];
    b.z = (*(s32 * *)&TLobby__script_reg_array)[i];
    request_follow_camera_offsets(&a, &b, 0xFFFF);
}

int TLobby__sub_801EF24C(void* p) { return clear_enabled_main_warps(p); }

void clear_active_bit_from_data__6TLobbyFv(void) {
    clear_active_bit__16TObjCityMainWarpFv((int) (M2C_FIELD(&(*(RecoveredGlobal_80141730_lbl_8050C028 *)&TLobby__quest_argument_stack).value, s32 *, 0x0)));
}

void qst_op_set_mainwarp(void) {
    s32 temp_r31;
    temp_r31 = (*(RecoveredGlobal_801EF298_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value;
    set_active_bit__16TObjCityMainWarpFv((int) ((*(RecoveredGlobal_801EF298_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value));
    set_main_warp_id__8TObjDoorFi((int) (temp_r31));
}

void qst_op_force_bgm__6TLobbyFv(void) {
    force_bgm__13TQuestBgmCtrlFi((int) (M2C_FIELD(&(*(RecoveredGlobal_80141730_lbl_8050C028 *)&TLobby__quest_argument_stack).value, s32 *, 0x0)));
}

void qst_op_playbgm_epi(void) {
    defer_bgm__13TQuestBgmCtrlFi((int) (M2C_FIELD(&(*(RecoveredGlobal_80141730_lbl_8050C028 *)&TLobby__quest_argument_stack).value, s32 *, 0x0)));
}

void qst_op_switch_off(void) {
    clear_current_floor_switch((int) ((u16) (*(RecoveredGlobal_801F00E4_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value));
}

void qst_op_switch_on(void) {
    set_current_floor_switch((int) ((u16) (*(RecoveredGlobal_801F00E4_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value));
}

void qst_op_npc_talk_kill(void) {
    TLobby__sub_80190FD0((int) (M2C_FIELD(&(*(RecoveredGlobal_80141730_lbl_8050C028 *)&TLobby__quest_argument_stack).value, s32 *, 0x0)));
}

void qst_op_npc_talk_pl(u8 arg0) {
    s32 i;
    NpcSet_801EF3B4 set;

    ((void (*)(NpcSet_801EF3B4 *))TLobby__sub_80207F30)(&set);
    i = arg0;
    set.x = (*(s32 * *)&TLobby__script_reg_array)[i++];
    set.y = (*(s32 * *)&TLobby__script_reg_array)[i++];
    set.z = (*(s32 * *)&TLobby__script_reg_array)[i++];
    set.f24 = (*(s32 * *)&TLobby__script_reg_array)[i++];
    set.f1C = (*(f32 *)&lbl_805DC4CC) * (*(s32 * *)&TLobby__script_reg_array)[i++];
    set.f30 = (*(s32 * *)&TLobby__script_reg_array)[i++];
    set.f34 = (*(s32 * *)&TLobby__script_reg_array)[i++];
    set.f38 = (*(s32 * *)&TLobby__script_reg_array)[i];
    create_npc__6TLobbyFPv(&set);
}

void qst_op_p_talk_guild(void) {
    if (get_player_by_client_id((s32)((int) ((*(RecoveredGlobal_801EF4F4_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value))) != 0U) {
        handle_main_phase__6TLobbyFi();
    }
}

void qst_op_p_return_guild(void) {
    u32 player = get_player_by_client_id(local_client_id);
    if (player != 0U) {
        prepare_guild_return__10TObjPlayerFPv(player, 0);
    }
}

int forward_npc_player__6TLobbyFPv(void* p) { return clear_partner_dialogue_flags(p); }

void cleanup_luker_and_quest_flag__6TLobbyFv(void) { ((int (*)(void))free_luker_object__6TLobbyFv)(); TLobby__sub_80197F74(); ((int (*)(void))clear_quest_vm_flag__6TLobbyFv)(); }

void clear_quest_vm__6TLobbyFv(void) { ((int (*)(void))free_luker_object__6TLobbyFv)(); load_memcard_file(); ((int (*)(void))clear_quest_vm_flag__6TLobbyFv)(); }

void set_partner_remark_from_state__6TLobbyFv(void) {
    set_partner_common_remark((int) (M2C_FIELD(&(*(RecoveredGlobal_801EF5D0_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 0)), (int) (M2C_FIELD(&(*(RecoveredGlobal_801EF5D0_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 4)));
}

void qst_op_nop_A0_debug(void) {
    char buf[0x200];
    VObj_18 *o;
    void *s = (*(G80512220 *)&TLobby__quest_argument_stack).b;
    o = (VObj_18 *)((void * (*)(u32, void *))__nw__7TObjectFUl)(0x10A8, &TLobby__quest_argument_stack);
    if (o != NULL) {
        o = ((VObj_18 * (*)(void *, void *, void *, void *))construct__6TLobbyFPvPvPvPv)(o, 0, 0, 0);
    }
    buf[0x1FF] = 0;
    ((void (*)(void *, void *, int))strncpy)(buf, s, 0x1FF);
    ((void (*)(void *))trim_whitespace__6TLobbyFPv)(buf);
    parse_csv_line__6TLobbyFPvPv(o, buf);
    if (o->f109c != 2) {
        while (1) {}
    }
    if (o != NULL) {
        o->m0(1);
    }
}

int qst_op_cine_disable(void) { return reset_state__9TCineCtrlFi((void*)(0)); }

int qst_op_cine_enable(void) { return reset__9TCineCtrlFi((void*)(0)); }

void qst_op_hud_show(void) { unsuppress_slot__11TWindowCtrlFi((void*)((*(int *)&local_client_id))); show_radar__13TRaderMapCoreFv(); }

void qst_op_hud_hide(void) { suppress_slot__11TWindowCtrlFi((void*)((*(int *)&local_client_id))); hide_radar__13TRaderMapCoreFv(); }

int TLobby__sub_801EF748(void* p) { return notify_all_battle_players__10TObjPlayerFv(p); }

int TLobby__sub_801EF768(void* p) { return update_4p_battle_ctrls__10TObjPlayerFv(p); }

int TLobby__sub_801EF788(void* p) { return fn_8019608C(p); }

void TLobby__sub_801EF7A8(u8 i) {
    u8 start = i;
    Vec_801EF7A8 v;
    Spawn_801EF7A8 s;
    void *obj;

    ((void (*)(Spawn_801EF7A8 *))TLobby__sub_80207F30)(&s);
    s.x = TLobby__script_reg_array[i++];
    s.y = TLobby__script_reg_array[i++];
    s.z = TLobby__script_reg_array[i++];
    s.a = TLobby__script_reg_array[i++];
    s.c = TLobby__script_reg_array[i++];
    s.b = TLobby__script_reg_array[i++];
    obj = ((void * (*)(Spawn_801EF7A8 *, int *))create_quest_col_apc_inw__6TLobbyFPvPv)(&s, &TLobby__script_reg_array[start]);
    if (obj != NULL) {
        v.x = TLobby__script_reg_array[i++];
        v.y = TLobby__script_reg_array[i++];
        v.z = TLobby__script_reg_array[i];
        ((void (*)(void *, Vec_801EF7A8 *))TLobby__sub_801F3500)(obj, &v);
    }
}

void qst_op_set_obj_param(u8 arg0, u8 arg1) {
    NpcSet_801EF944 set;

    ((void (*)(NpcSet_801EF944 *))TLobby__sub_80207F30)(&set);
    set.x = TLobby__script_reg_array[(u8)arg0++];
    set.y = TLobby__script_reg_array[(u8)arg0++];
    set.z = TLobby__script_reg_array[(u8)arg0++];
    set.f24 = TLobby__script_reg_array[(u8)arg0++];
    set.f30 = TLobby__script_reg_array[(u8)arg0++];
    set.f28 = TLobby__script_reg_array[(u8)arg0];
    ((void (*)(NpcSet_801EF944 *, int *))create_quest_col_alock)(&set, &TLobby__script_reg_array[arg1]);
}

void qst_op_col_npcinr(u8 arg0) {
    NpcSet_801EFA5C set;
    u8 first;

    ((void (*)(NpcSet_801EFA5C *))TLobby__sub_80207F30)(&set);
    first = arg0;
    set.x = TLobby__script_reg_array[(u8)arg0++];
    set.y = TLobby__script_reg_array[(u8)arg0++];
    set.z = TLobby__script_reg_array[(u8)arg0++];
    set.f24 = TLobby__script_reg_array[(u8)arg0++];
    set.f28 = TLobby__script_reg_array[(u8)arg0++];
    set.f30 = TLobby__script_reg_array[(u8)arg0];
    ((void (*)(NpcSet_801EFA5C *, int *))fn_80196214)(&set, &TLobby__script_reg_array[first]);
}

void qst_op_col_npcin(u8 arg0) {
    NpcSet_801EFB6C set;
    u8 first;

    ((void (*)(NpcSet_801EFB6C *))TLobby__sub_80207F30)(&set);
    first = arg0;
    set.x = TLobby__script_reg_array[(u8)arg0++];
    set.y = TLobby__script_reg_array[(u8)arg0++];
    set.z = TLobby__script_reg_array[(u8)arg0++];
    set.f24 = TLobby__script_reg_array[(u8)arg0++];
    set.f30 = TLobby__script_reg_array[(u8)arg0];
    ((void (*)(NpcSet_801EFB6C *, int *))fn_801963A8)(&set, &TLobby__script_reg_array[first]);
}

void qst_op_at_coords_talk(u8 arg0) {
    NpcSet_801EFC54 set;
    u8 first;

    ((void (*)(NpcSet_801EFC54 *))TLobby__sub_80207F30)(&set);
    first = arg0;
    set.x = TLobby__script_reg_array[(u8)arg0++];
    set.y = TLobby__script_reg_array[(u8)arg0++];
    set.z = TLobby__script_reg_array[(u8)arg0++];
    set.f24 = TLobby__script_reg_array[(u8)arg0++];
    set.f30 = TLobby__script_reg_array[(u8)arg0];
    ((void (*)(NpcSet_801EFC54 *, int *))fn_80196814)(&set, &TLobby__script_reg_array[first]);
}

void qst_op_at_coords_call(u8 arg0) {
    NpcSet_801EFD3C set;
    u8 first;

    ((void (*)(NpcSet_801EFD3C *))TLobby__sub_80207F30)(&set);
    first = arg0;
    set.x = TLobby__script_reg_array[(u8)arg0++];
    set.y = TLobby__script_reg_array[(u8)arg0++];
    set.z = TLobby__script_reg_array[(u8)arg0++];
    set.f24 = TLobby__script_reg_array[(u8)arg0++];
    set.f30 = TLobby__script_reg_array[(u8)arg0];
    ((void (*)(NpcSet_801EFD3C *, int *))create_quest_col)(&set, &TLobby__script_reg_array[first]);
}

#pragma push
#pragma fp_contract on
void qst_op_gettime(u8 arg0) {
    M2C_UNK spC;
    s32 sp8;
    getDateStamp__FP9DateStamp((void *) (&spC));
    DateToSeconds__FP9DateStampPi((void *) (&spC), (void *) (&sp8));
    ((s32 *) (*(s32 *)&TLobby__script_reg_array))[arg0] = sp8;
}
#pragma pop

void qst_op_unhide_ene(s32 arg0) {
    s32 v0 = TLobby__script_reg_array[(u8)arg0];
    s32 v1 = TLobby__script_reg_array[(u8)++arg0];
    s32 v2 = TLobby__script_reg_array[(u8)++arg0];
    unhide_enemies_at__6TLobbyFiii(v0, (s16)v1, (s16)v2, arg0);
}

void qst_op_unhide_obj(s32 arg0) {
    s32 v0 = TLobby__script_reg_array[(u8)arg0];
    s32 v1 = TLobby__script_reg_array[(u8)++arg0];
    s32 v2 = TLobby__script_reg_array[(u8)++arg0];
    unhide_room_set_objects(v0, (s16)v1, (s16)v2, arg0);
}

void qst_op_chk_ene_num(int a0) { TLobby__script_reg_array[(unsigned char)(a0)] = count_quest_enemies_flag8__6TLobbyFv(); }

void qst_op_if_zone_clear(s32 arg0, s32 arg1) {
    if (is_room_enemy_set_cleared((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC))), (int) ((s16) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, (((arg1 + 1) * 4) & 0x3FC))), (void *) ((*(s32 *)&TLobby__script_reg_array))) != 0) {
        M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}

void qst_op_p_action_enable(void) {
    s32 temp_r3;

    temp_r3 = ((s32 (*)(s32))get_player_by_client_id)(local_client_id);
    if (temp_r3 != 0) {
        enable_action_input__10TObjPlayerFPv();
        action_enable_if_present__10TObjPlayerFPv(temp_r3);
    }
}

void qst_op_p_action_disable(void) {
    s32 temp_r3;

    temp_r3 = ((s32 (*)(s32))get_player_by_client_id)(local_client_id);
    if (temp_r3 != 0) {
        disable_action_input__10TObjPlayerFPv();
        release_attached_resource__10TObjPlayerFPv(temp_r3);
    }
}

void qst_op_pos_pipe(u8 arg0) {
    s32 i = arg0;
    Vec_801F0034 point;

    point.x = (f32)TLobby__script_reg_array[i++];
    point.y = (f32)TLobby__script_reg_array[i++];
    point.z = (f32)TLobby__script_reg_array[i++];
    create_for_player__9TTecLukerFii((u16)TLobby__script_reg_array[i], &point);
}

void qst_op_create_pipe(void) {
    create_quest_telepipe_for_client((int) ((u16) (*(RecoveredGlobal_801F00E4_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value));
}

void qst_op_p_setpos(void) {
    Vec_801F0110 pos;
    u16 player;
    u8 reg;
    u8 i;
    void *obj;

    reg = ((s32 *)&TLobby__quest_argument_stack)[1];
    player = ((s32 *)&TLobby__quest_argument_stack)[0];
    i = reg;
    pos.x = TLobby__script_reg_array[i++];
    pos.y = TLobby__script_reg_array[i++];
    pos.z = TLobby__script_reg_array[i++];
    send_6x24_teleport_player(player, &pos, lbl_805DC4CC * TLobby__script_reg_array[i]);
    obj = (void *)((s32 (*)(s32))get_player_by_client_id)(player);
    if (obj != NULL && player == local_client_id) {
        ((void (*)(void *, s32))reset_cameras_to_actor)(obj, 0);
    }
}

void qst_op_p_enablewarp(void) {
    foreach_player__10TObjPlayerFv((M2C_UNK *)(&fn_801F3480.value));
}

void qst_op_p_disablewarp(void) {
    apply_all_players__9TTecLukerFv();
    foreach_player__10TObjPlayerFv((M2C_UNK *)((void *) fn_801F34A0));
}

void qst_op_p_dead(void) {
    s32 temp_r31;
    u8 *temp_r3;
    temp_r31 = M2C_FIELD(&TLobby__quest_argument_stack.value, s32 *, 0);
    temp_r3 = (u8 *)(((u8 *)((s32 (*)(s32))get_player_by_client_id)(M2C_FIELD(&TLobby__quest_argument_stack.value, s32 *, 4))));
    if ((temp_r3 != NULL) && (is_script_controlled__10TObjPlayerFPv() == 0)) {
        if (obj_isState3_324((int) (temp_r3)) != 0) {
            if (M2C_FIELD(temp_r3, s32 *, 0x30) & 0x800) {
                M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, (temp_r31 * 4)) = 1;
                return;
            }
            goto block_7;
        }
        if (check_player_state_flag_2__6TLobbyFPv((int) (temp_r3)) != 0) {
            M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, (temp_r31 * 4)) = 1;
            return;
        }
        goto block_7;
    }
block_7:
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, (temp_r31 * 4)) = 0;
}

#pragma push
#pragma opt_propagation off
#pragma opt_common_subs off
void qst_op_p_hpstat(void) {
    s32 reg;
    f32 pct;
    f32 limit;
    void *obj;
    f32 hp;
    s32 player;
    s32 *args = (s32 *)&TLobby__quest_argument_stack;
    int *regs = (*(int * *)&TLobby__script_reg_array);
    reg = args[0];
    pct = regs[reg];
    player = args[1];
    if (lbl_805DC4C4 == pct) {
        (*(int * *)&TLobby__script_reg_array)[reg] = 0;
        return;
    }
    limit = lbl_805DC4D0 / pct;
    obj = (void *)((s32)get_player_by_client_id(player));
    if (obj != NULL) {
        hp = obj_getS16_32C((u8 *)(obj));
        if (hp / get_field_2b8__14TItemProShieldFPv((u8 *)(obj)) < limit) {
            (*(int * *)&TLobby__script_reg_array)[reg] = 1;
            return;
        }
    }
    (*(int * *)&TLobby__script_reg_array)[reg] = 0;
}
#pragma pop

void qst_op_p_move(u8 arg0) {
    Vec_801F0458 pos;
    s32 i = arg0;
    s32 yaw;
    u16 id;

    pos.x = (f32) TLobby__script_reg_array[i++];
    pos.y = (f32) TLobby__script_reg_array[i++];
    pos.z = (f32) TLobby__script_reg_array[i++];
    yaw = (s32) (lbl_805DC4CC * (f32) TLobby__script_reg_array[i++]);
    id = TLobby__script_reg_array[i++];
    send_stop_at_position__10TNpcPlayerFUsPvs(id, &pos, yaw);
}

void qst_op_p_look_at(void) {
    quest_player_face_actor((u16) M2C_FIELD(&(*(RecoveredGlobal_801F053C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 0), (u16) M2C_FIELD(&(*(RecoveredGlobal_801F053C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value, s32 *, 4));
}

void spawn_particle_at_entity__6TLobbyFUc(u8 arg0) {
    Vec_801F0574 v;
    u16 id;
    s16 kind;
    s32 extra;
    f32 dy;
    u8 *p;
    u32 r;
    s32 i;

    i = arg0;
    kind = TLobby__script_reg_array[i++];
    extra = TLobby__script_reg_array[i++];
    id = TLobby__script_reg_array[i++];
    dy = TLobby__script_reg_array[i];
    p = find_entity_by_id(id);
    if (p != NULL) {
        VecCopy__FP3VecPC3Vec(&v, p + 0x38);
        v.y += dy;
        r = create_timed_particle_emitter(&v, kind, 0, extra);
        if (r != 0) {
            set_flags__11TBoss4Type2FPvUi((void *)r, 0x40);
        }
    }
}

s32 get_load_result__15TAdPlayerLoadGCFv(s32);
s32 probe_card_slot__15TAdPlayerLoadGCFi(s32);
s32 find_card_file__15TAdPlayerLoadGCFiPv(s32, const char *);
extern const char lbl_80449CC8[];
void probe_character_save__6TLobbyFv(void) {
    u8 reg = ((s32 *)&TLobby__quest_argument_stack)[0];
    s32 ok = 0;
    if (probe_card_slot__15TAdPlayerLoadGCFi(0) != 0 && find_card_file__15TAdPlayerLoadGCFiPv(0, lbl_80449CC8) == 0 && get_load_result__15TAdPlayerLoadGCFv(0) == 0) {
        ok = 1;
    }
    if (ok == 0 && probe_card_slot__15TAdPlayerLoadGCFi(1) != 0 && find_card_file__15TAdPlayerLoadGCFiPv(1, lbl_80449CC8) == 0 && get_load_result__15TAdPlayerLoadGCFv(1) == 0) {
        ok = 1;
    }
    TLobby__script_reg_array[reg] = ok;
}

void qst_op_particle_id(u8 first) {
    Vec_801F0710 point;
    s32 i = first;
    s16 effect = (s16) TLobby__script_reg_array[i++];
    s32 lifetime = TLobby__script_reg_array[i++];
    u16 id = (u16) TLobby__script_reg_array[i++];
    f32 height = (f32) TLobby__script_reg_array[i];
    s32 actor = ((s32 (*)(int))find_entity_by_id)(id);
    if (actor != 0) {
        ((void (*)(Vec_801F0710 *, const Vec_801F0710 *))VecCopy__FP3VecPC3Vec)(&point, (const Vec_801F0710 *) (actor + 0x38));
        point.y += height;
        ((void * (*)(Vec_801F0710 *, int, int, int))create_timed_particle_emitter)(&point, effect, 0, lifetime);
    }
}

void TLobby__sub_801F07D8(u8 arg0) {
    Vec_801F07D8 v;
    s32 i;
    f32 x;
    f32 y;
    f32 z;
    s16 kind;
    s32 extra;
    u32 r;

    i = arg0;
    x = TLobby__script_reg_array[i++];
    y = TLobby__script_reg_array[i++];
    z = TLobby__script_reg_array[i++];
    kind = TLobby__script_reg_array[i++];
    extra = TLobby__script_reg_array[i];
    v.x = x;
    v.y = y;
    v.z = z;
    r = create_timed_particle_emitter(&v, kind, 0, extra);
    if (r != 0) {
        set_flags__11TBoss4Type2FPvUi((void *)r, 0x40);
    }
}

void spawn_stored_particle_emitter__6TLobbyFUc(u8 arg0) {
    Vec_801F08AC v;
    s32 i;
    f32 x;
    f32 y;
    f32 z;
    s16 kind;
    s32 extra;

    i = arg0;
    x = TLobby__script_reg_array[i++];
    y = TLobby__script_reg_array[i++];
    z = TLobby__script_reg_array[i++];
    kind = TLobby__script_reg_array[i++];
    extra = TLobby__script_reg_array[i];
    v.x = x;
    v.y = y;
    v.z = z;
    create_timed_particle_emitter(&v, kind, 0, extra);
}

void spawn_flagged_particle_emitter__6TLobbyFv(void) {
    Vec3_801F0970 v;
    f32* p = &((f32*)TLobby__script_reg_array)[(*(Cfg_801F0970 *)&TLobby__quest_argument_stack).i];
    v.x = p[0];
    v.y = p[1];
    v.z = p[2];
    u32 r = create_timed_particle_emitter(&v, (*(Cfg_801F0970 *)&TLobby__quest_argument_stack).b, 0, (s32)(*(Cfg_801F0970 *)&TLobby__quest_argument_stack).c);
    if (r != 0) {
        set_flags__11TBoss4Type2FPvUi((void*)r, 0x40);
    }
}

void qst_op_pl_walk(u8 arg0) {
    WalkCmd_801F09EC cmd;
    f32 x;
    f32 z;
    u16 player;
    Obj_801F09EC *obj;
    s32 i;

    i = arg0;
    x = TLobby__script_reg_array[i++];
    i++;
    z = TLobby__script_reg_array[i++];
    player = TLobby__script_reg_array[i];
    obj = (Obj_801F09EC *)((s32 (*)(s32))get_player_by_client_id)(player);
    if (obj != NULL) {
        init_6x40_walk_packet(&cmd);
        cmd.player = player;
        cmd.x = x;
        cmd.z = z;
        cmd.flags = 0;
        if (obj->f30 & 0x100000) {
            cmd.flags |= 8;
        }
        sync_from_lobby__10TNpcPlayerFPv(&cmd);
    }
}

void qst_op_p_look(void) {
    quest_player_look_at_partner((u16) (*(RecoveredGlobal_801F0ADC_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value);
}

int qst_op_p_col(void* p) { return TObjHashiVersus2__sub_801912A4(p); }

int qst_op_p_noncol(void* p) { return TObjHashiVersus2__sub_801912B0(p); }

void qst_op_enable_movement1(void) {
    send_code_45_to_player__10TNpcPlayerFi((u16) (*(RecoveredGlobal_801F0B48_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value);
}

void qst_op_disable_movement1(void) {
    play_effect__10TNpcPlayerFi((u16) (*(RecoveredGlobal_801F0B74_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value);
}

int qst_op_npc_talk(void* p) { return enable_partner_chatter__10TNpcPlayerFv(p); }

int qst_op_npc_nont(void* p) { return disable_partner_chatter__10TNpcPlayerFv(p); }

void qst_op_npc_kill(void) {
    quest_remove_npc_player((int) ((u16) (*(RecoveredGlobal_801F0BE0_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value));
}

int qst_op_cam_adj(void* p) { return set_active_camera_flag__11TCameraCtrlFv(p); }

void qst_op_game_lev_reset_nop_86(void) {  }

void qst_op_game_lev_super_nop_85(void) {  }

int qst_op_cam_zmout(void* p) { return end_conversation_camera(p); }

int qst_op_cam_zmin(void* p) { return begin_conversation_camera(p); }

int qst_op_cam_quake(void) { return set_shake_preset__11TCameraCtrlFi((void*)(2)); }

void qst_op_npc_play(void) {
    send_npc_control_6x69__10TNpcPlayerFs((int) ((s32) (u16) (*(RecoveredGlobal_801F0D54_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value));
}

void qst_op_npc_stop(void) {
    send_npc_stop_6x69__10TNpcPlayerFs((int) ((s32) (u16) (*(RecoveredGlobal_801F0D80_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value));
}

void qst_op_npc_crp_id(u8 first) {
    f32 pos[3];
    int heading;
    int leader;
    int appearance;
    int slot;
    int i = first;

    pos[0] = (f32)TLobby__script_reg_array[i++];
    pos[1] = (f32)TLobby__script_reg_array[i++];
    pos[2] = (f32)TLobby__script_reg_array[i++];
    heading = (int)(lbl_805DC4CC * (f32)TLobby__script_reg_array[i++]);
    leader = TLobby__script_reg_array[i++];
    slot = TLobby__script_reg_array[i++];
    appearance = TLobby__script_reg_array[i++];
    free_luker_object__6TLobbyFv();
    create_companion__10TNpcPlayerFUsUsiPvi(leader, slot, appearance, pos, heading);
    clear_quest_vm_flag__6TLobbyFv();
}

void qst_op_npc_crp(u8 first) {
    f32 pos[3];
    int heading;
    int leader;
    int appearance;
    int i = first;

    pos[0] = (f32)TLobby__script_reg_array[i++];
    pos[1] = (f32)TLobby__script_reg_array[i++];
    pos[2] = (f32)TLobby__script_reg_array[i++];
    heading = (int)(lbl_805DC4CC * (f32)TLobby__script_reg_array[i++]);
    leader = TLobby__script_reg_array[i++];
    appearance = TLobby__script_reg_array[i++];
    free_luker_object__6TLobbyFv();
    create_default_companion__10TNpcPlayerFssPvi(leader, appearance, pos, heading);
    clear_quest_vm_flag__6TLobbyFv();
}

void qst_op_npc_crppk(u8 arg0) {
    Vec_801F12F0 v;
    s32 angle;
    s32 a;
    s32 b;
    s32 c;
    s32 i;

    i = arg0;
    v.x = TLobby__script_reg_array[i++];
    v.y = TLobby__script_reg_array[i++];
    v.z = TLobby__script_reg_array[i++];
    angle = lbl_805DC4CC * TLobby__script_reg_array[i++];
    a = TLobby__script_reg_array[i++];
    b = TLobby__script_reg_array[i++];
    c = TLobby__script_reg_array[i];
    free_luker_object__6TLobbyFv();
    send_npc_control_create__10TNpcPlayerFsUssPvi(a, c, b, &v, angle);
    clear_quest_vm_flag__6TLobbyFv();
}

void qst_op_npc_crtpk(void) {
    s32 a = ((s32 *)&TLobby__quest_argument_stack)[0];
    s32 b = ((s32 *)&TLobby__quest_argument_stack)[1];
    free_luker_object__6TLobbyFv();
    send_npc_control_notify_players__10TNpcPlayerFsUss(a & 0xFFFF, 1, b);
    clear_quest_vm_flag__6TLobbyFv();
}

void handle_spawn_npc_packet__6TLobbyFv(void) {
    Npc_801F1450 s;
    u8 i;
    s32 flags;
    s32 arg;

    i = TLobby__quest_argument_stack.value;
    arg = *(s32 *)TLobby__quest_argument_stack.remaining;
    s.h0 = TLobby__script_reg_array[i++];
    s.h2 = TLobby__script_reg_array[i++];
    switch (TLobby__script_reg_array[i++]) {
    case 0:
        flags = 0x40;
        break;
    case 1:
        flags = 4;
        break;
    case 2:
        flags = 8;
        break;
    case 3:
    case 10:
        flags = 0xC0;
        break;
    case 11:
        flags = 0x84;
        break;
    case 12:
        flags = 0x88;
        break;
    case 13:
        flags = 0x90;
        break;
    }
    s.flags = flags;
    s.f8 = TLobby__script_reg_array[i++];
    s.fC = TLobby__script_reg_array[i++];
    s.f10 = TLobby__script_reg_array[i++];
    s.f14 = TLobby__script_reg_array[i++];
    s.f18 = TLobby__script_reg_array[i++];
    s.f1C = TLobby__script_reg_array[i++];
    s.b20 = TLobby__script_reg_array[i++];
    s.b21 = TLobby__script_reg_array[i++];
    s.b22 = TLobby__script_reg_array[i++];
    s.b23 = TLobby__script_reg_array[i++];
    s.f24 = TLobby__script_reg_array[i];
    copy_entry_by_index__10TNpcPlayerFii(&s, arg);
}

void qst_op_npc_crt(void) {
    M2C_UNK *var_r3;
    s32 var_r4;
    free_luker_object__6TLobbyFv();
    var_r3 = (M2C_UNK *)(&TLobby__quest_argument_stack.value);
    var_r3 = (M2C_UNK *)(&TLobby__quest_argument_stack.value);
    var_r4 = M2C_FIELD(&TLobby__quest_argument_stack.value, s32 *, 4);
    var_r3 = (M2C_UNK *)((u8 *)((M2C_UNK *) (u16) M2C_FIELD(&TLobby__quest_argument_stack.value, s32 *, 0)));
    send_npc_create__10TNpcPlayerFss((int) (var_r3), (int) (var_r4));
    clear_quest_vm_flag__6TLobbyFv();
}

void qst_op_winend(void) {
    if ((void *) TLobby__quest_message_window != NULL) {
        TWindow__close((void*)(TLobby__quest_message_window));
        TLobby__quest_message_window = NULL;
    }
    clear_flag_bit2__11TWindowCtrlFv();
    TLobby__sub_8024AC20((void *) (local_client_id));
    clear_flag__11TWindowCtrlFv();
    clear_flag_2__11TWindowCtrlFv();
}

void qst_op_mesend(void) {
    s32 id;
    void *p;
    s32 start;
    s32 end;
    s32 i;
    s32 f;
    s32 v;
    TLobby__sub_8024AC20((void *)local_client_id);
    clear_flag__11TWindowCtrlFv();
    clear_flag_2__11TWindowCtrlFv();
    id = quest_message_speaker_id;
    if (id < 100) {
        ((void (*)(u16))close_windows_by_flags__11TWindowCtrlFUs)(id);
        return;
    }
    start = get_game_mode__6TLobbyFv();
    end = start + get_lobby_flag__6TLobbyFv();
    for (i = start; i < end; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != NULL) {
            f = obj_getField1c(p);
            if (f < 0x4000) {
                v = fn_get_field_3ac(p);
            } else {
                v = get_field_d4(p);
            }
            if (v == id) {
                ((void (*)(s32))close_windows_by_flags__11TWindowCtrlFUs)(f);
                return;
            }
        }
    }
}

void qst_op_add_msg(void) {
    s32 x = ((s32 *)&TLobby__quest_argument_stack)[0];
    if ((*(u8* *)&TLobby__quest_message_window) != 0) {
        dispatch_message_window_text((int)(*(u8* *)&TLobby__quest_message_window), x, 3);
        TLobby__quest_window_state = 4;
        return;
    }
    if (TLobby__quest_secondary_window != 0) {
        send_and_handle__6TLobbyFPvii((void*)TLobby__quest_secondary_window, x, 3);
        TLobby__quest_window_state = 5;
        return;
    }
    ((s32 *)&TLobby__quest_argument_stack)[1] = x;
    ((s32 *)&TLobby__quest_argument_stack)[0] = quest_message_speaker_id;
    qst_op_message();
}

void close_window__6TLobbyFv(void) {
    if ((u32) TLobby__quest_secondary_window != 0U) {
        TWindow__close((void*)TLobby__quest_secondary_window);
        TLobby__quest_secondary_window = 0U;
    }
}

void quest_cmd_winend(void) {
    s32 t = TLobby__quest_argument_stack.value;
    Pair_801F1838 pr = lbl_80449A38[0];
    if (TLobby__quest_secondary_window != 0) {
        TWindow__close((void*)((void *)TLobby__quest_secondary_window));
        TLobby__quest_secondary_window = 0;
    }
    TLobby__quest_secondary_window = update_window_mode_from_progress__6TLobbyFiPv(get_window_layout_position(0x71), &pr);
    send_and_handle__6TLobbyFPvii((void*)((void *)TLobby__quest_secondary_window), (s32)(t), (s32)(3));
    set_field_1c__6TLobbyFPvf(TLobby__quest_secondary_window, lbl_805DC4D4);
    TLobby__quest_window_state = 5;
}

void qst_op_window_msg(void) {
    s32 temp_r31;
    u32 temp_r3;
    temp_r31 = (*(RecoveredGlobal_801F18C8_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value;
    if ((u32) (*(u32 *)&TLobby__quest_message_window) != 0U) {
        TWindow__close((void*)((int) ((*(u32 *)&TLobby__quest_message_window))));
    }
    temp_r3 = create_quest_message_window();
    (*(u32 *)&TLobby__quest_message_window) = temp_r3;
    dispatch_message_window_text((int) (temp_r3), (int) (temp_r31), (int) (3));
    (*(s32 *)&TLobby__quest_window_state) = 4;
    ((s32 (*)(void))set_flag_bit2__11TWindowCtrlFv)();
    close_window_if_active((void *) (local_client_id));
    request_active_window_close();
    set_close_flag__11TWindowCtrlFv();
}

void qst_op_bgm(void) {
    play_cue_stream_file(qst_bgm_filename_table[(*(RecoveredGlobal_801F027C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value]);
}

void qst_op_se(void) {
    play_sound_effect((int) (M2C_FIELD(((u8 *)(&quest_sound_effect_ids.value) + ((*(RecoveredGlobal_801F196C_TLobby__data_80512220 *)&TLobby__quest_argument_stack).value * 4)), s32 *, 0)), (int) (0), (int) (0), (int) (0));
}

void qst_op_fadeout(void) { init_fadeout_state__6TLobbyFi((void*)0); TLobby__quest_window_state = 8; }

void qst_op_fadein(void) { set_fade_params__6TLobbyFi((void*)0); TLobby__quest_window_state = 8; }

void qst_op_list(void) {
    char *text;
    List_801F1A0C *list;
    u8 idx;
    s32 i;
    char buf[0x200];
    idx = (*(Args_801F1A0C *)&TLobby__quest_argument_stack).idx;
    text = (*(Args_801F1A0C *)&TLobby__quest_argument_stack).text;
    list = (List_801F1A0C *)__nw__7TObjectFUl(0x10A8);
    if (list != 0) {
        list = (List_801F1A0C *)((void * (*)(void *, void *, void *, void *))construct__6TLobbyFPvPvPvPv)(list, 0, 0, 0);
    }
    ((char * (*)(char *, const char *, u32))strncpy)(buf, text, 0x1FF);
    trim_whitespace__6TLobbyFPv(buf);
    ((void (*)(void *, char *))tokenize_args__6TLobbyFPvPv)(list, buf);
    TLobby__quest_choice_window = check_room_seq_4__16TAdChrSelASlotGCFii(get_window_layout_position(0x37), list->count);
    for (i = 0; i < list->count; i++) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(TLobby__quest_choice_window, list->names[i], 7, i);
    }
    calc_window_size__17TWindowSubComCardFPv(TLobby__quest_choice_window);
    align_menu_entry_positions(TLobby__quest_choice_window);
    set_ready_flag__18TCheckRoomSequenceFPv(TLobby__quest_choice_window);
    set_field_1c__6TLobbyFPvf(TLobby__quest_choice_window, lbl_805DC4D8);
    (*(int * *)&TLobby__script_reg_array)[idx] = 0;
    TLobby__active_window_index = idx;
    TLobby__quest_window_state = 7;
    close_window_if_active((void *)local_client_id);
    request_active_window_close();
    set_close_flag__11TWindowCtrlFv();
    delete list;
}

void qst_op_message(void) {
    s32 speaker = ((s32 *)&TLobby__quest_argument_stack)[0];
    s32 text = ((s32 *)&TLobby__quest_argument_stack)[1];
    s32 first;
    void *actor;
    s32 end;
    s32 i;
    close_window_if_active((void *)local_client_id);
    request_active_window_close();
    set_close_flag__11TWindowCtrlFv();
    quest_message_speaker_id = speaker;
    if (speaker < 100) {
        open__11TWindowCtrlFiii(speaker & 0xFFFF, text, 0x2D);
        ((void (*)(s32))set_field28__11TWindowCtrlFs)((u16)speaker);
        TLobby__quest_window_state = 4;
    } else {
        first = get_game_mode__6TLobbyFv();
        end = first + get_lobby_flag__6TLobbyFv();
        for (i = first; i < end; i++) {
            actor = get_player_data__10TObjPlayerFi(i);
            if (actor != NULL) {
                s32 identity = obj_getField1c(actor);
                s32 entity;
                if (identity < 0x4000) {
                    entity = fn_get_field_3ac(actor);
                } else {
                    entity = get_field_d4(actor);
                }
                if (entity == speaker) {
                    open__11TWindowCtrlFiii(identity, text, 0x2D);
                    ((void (*)(s32))set_field28__11TWindowCtrlFs)(identity);
                    TLobby__quest_window_state = 4;
                    break;
                }
            }
        }
    }
}

void pop_stack_into_slots__6TLobbyFii(s32 arg0, s32 arg1) {
    s32 n = arg1;
    u8 j = arg0 + arg1;
    while (n > 0) {
        int v = pop_stack_value__6TLobbyFv();
        j--;
        TLobby__script_reg_array[j] = v;
        n--;
    }
}

void push_op_args_from_table__6TLobbyFii(s32 arg0, s32 arg1) {
    s32 i;
    for (i = 0; i < arg1; i++) {
        push_op_arg__6TLobbyFi(TLobby__script_reg_array[(u8)arg0++]);
    }
}

void set_slot__6TLobbyFi(int a0) { TLobby__script_reg_array[(unsigned char)(a0)] = pop_stack_value__6TLobbyFv(); }

void qst_op_nop_42_stack_push(s32 arg0) {
    push_op_arg__6TLobbyFi((int) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))));
}

void qst_op_switch_call(s32 arg0, u8 arg1, s32 arg2) {
    s32 temp_r3;
    temp_r3 = M2C_FIELD(((*(s32 *)&TLobby__script_reg_array) + ((arg0 * 4) & 0x3FC)), s32 *, 0);
    if ((temp_r3 < (s32) arg1) && (temp_r3 >= 0)) {
        qst_op_call((u16)((int) (M2C_FIELD((arg2 + (temp_r3 * 2)), u16 *, 0))));
    }
}

void qst_op_switch_jmp(s32 arg0, u8 arg1, s32 arg2) {
    s32 temp_r3;
    temp_r3 = M2C_FIELD(((*(s32 *)&TLobby__script_reg_array) + ((arg0 * 4) & 0x3FC)), s32 *, 0);
    if ((temp_r3 < (s32) arg1) && (temp_r3 >= 0)) {
        qst_op_jmp((int) (M2C_FIELD((arg2 + (temp_r3 * 2)), u16 *, 0)));
    }
}

void qst_op_jmpi_le(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) <= arg1) {
        (*(s32 *)&TLobby__quest_script_pc) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_jmp_le(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) <= (s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__quest_script_pc) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_ujmpi_le(s32 arg0, u32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) <= arg1) {
        (*(s32 *)&TLobby__quest_script_pc) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_ujmp_le(s32 arg0, s32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) <= (u32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__quest_script_pc) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_jmpi_ge(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) >= arg1) {
        (*(s32 *)&TLobby__quest_script_pc) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_jmp_ge(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) >= (s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__quest_script_pc) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_ujmpi_ge(s32 arg0, u32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) >= arg1) {
        (*(s32 *)&TLobby__quest_script_pc) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_ujmp_ge(s32 arg0, s32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) >= (u32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__quest_script_pc) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_jmpi_lt(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) < arg1) {
        (*(s32 *)&TLobby__quest_script_pc) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_jmp_lt(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) < (s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__quest_script_pc) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_ujmpi_lt(s32 arg0, u32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) < arg1) {
        (*(s32 *)&TLobby__quest_script_pc) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_ujmp_lt(s32 arg0, s32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) < (u32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__quest_script_pc) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_jmpi_gt(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) > arg1) {
        (*(s32 *)&TLobby__quest_script_pc) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_jmp_gt(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) > (s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__quest_script_pc) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_ujmpi_gt(s32 arg0, u32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) > arg1) {
        (*(s32 *)&TLobby__quest_script_pc) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_ujmp_gt(s32 arg0, s32 arg1, s32 arg2) {
    if ((u32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) > (u32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__quest_script_pc) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_jmpi_ne(s32 arg0, s32 arg1, s32 arg2) {
    if (arg1 != (s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__quest_script_pc) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_jmp_ne(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) != (s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__quest_script_pc) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_jmpi_eq(s32 arg0, s32 arg1, s32 arg2) {
    if (arg1 == (s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__quest_script_pc) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_jmp_eq(s32 arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) == (s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC))) {
        (*(s32 *)&TLobby__quest_script_pc) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg2 * 4) & 0x3FFFC));
    }
}

void qst_op_jmp_off(s32 arg0, u8 arg1, u8 *arg2) {
    s32 all_off = 1;
    while (arg1 != 0) {
        u8 reg = *arg2;
        arg1--;
        arg2++;
        all_off &= (u8) ((s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((reg * 4) & 0x3FC)) == 0);
    }
    if (all_off != 0) {
        (*(s32 *)&TLobby__quest_script_pc) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg0 * 4) & 0x3FFFC));
    }
}

void qst_op_jmp_on(s32 arg0, u8 arg1, u8 *arg2) {
    s32 i;
    for (i = 0; i < arg1; i++) {
        if ((s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((*arg2++ * 4) & 0x3FC)) == 0) {
            return;
        }
    }
    (*(s32 *)&TLobby__quest_script_pc) = M2C_FIELD((*(s32 *)&TLobby__data_805D5E74), M2C_UNK *, ((arg0 * 4) & 0x3FFFC));
}

#pragma push
#pragma fp_contract on
void qst_op_call(u16 arg0) {
    push_op_arg__6TLobbyFi((int)((void *) ((*(s32 *)&TLobby__quest_script_pc))));
    (*(s32 *)&TLobby__quest_script_pc) = ((s32 *) (*(s32 *)&TLobby__data_805D5E74))[arg0];
}
#pragma pop

void quest_vm_modulo_unsigned_immediate(s32 arg0, u32 arg1) {
    s32 temp_r5;
    temp_r5 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r5) = M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r5) % arg1;
}

void op_mod_reg__6TLobbyFii(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r5) = M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r5) % M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC));
}

void qst_op_jmp(int a0) { TLobby__quest_script_pc = TLobby__data_805D5E74[(unsigned short)(a0)]; }

void qst_op_xori(s32 arg0, s32 arg1) {
    s32 temp_r3;
    temp_r3 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r3) ^= arg1;
}

void qst_op_xor(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r5) = M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r5) ^ M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC));
}

void qst_op_ori(s32 arg0, s32 arg1) {
  s32 temp_r3;
  M2C_UNK *new_var;
  temp_r3 = (arg0 * 4) & 0x3FC;
  new_var = (M2C_UNK *) (((s8 *) (*(s32 *)&TLobby__script_reg_array)) + temp_r3);
  *new_var = (*new_var) | arg1;
}

void qst_op_or(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r5) = M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r5) | M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC));
}

void qst_op_andi(s32 arg0, s32 arg1) {
    s32 temp_r3;
    temp_r3 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r3) &= arg1;
}

void qst_op_and(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r5) = M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r5) & M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC));
}

void qst_op_divi(s32 arg0, s32 arg1) {
    s32 temp_r3;
    temp_r3 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r3) = (s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r3) / arg1;
}

void qst_op_div(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r5) = (s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r5) / (s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC));
}

void qst_op_muli(s32 arg0, s32 arg1) {
    s32 temp_r3;
    temp_r3 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r3) *= arg1;
}

void qst_op_mul(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r5) = M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r5) * M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC));
}

void qst_op_subi(s32 arg0, s32 arg1) {
    s32 temp_r3;
    temp_r3 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r3) = M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r3) - arg1;
}

void qst_op_sub(s32 arg0, s32 arg1) {
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) -= M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC));
}

#pragma push
#pragma scheduling off
void qst_op_addi(int a0, int a1) { TLobby__script_reg_array[(unsigned char)(a0)] += a1; }
#pragma pop

void qst_op_add(s32 arg0, s32 arg1) {
    s32 temp_r5;
    temp_r5 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r5) = M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r5) + M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC));
}

void qst_op_gget(u16 arg0, s32 arg1) {
    if (get_story_flag((void *) (arg0)) != 0) {
        M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 1;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 0;
}

void qst_op_glet(u16 arg0, s32 arg1) {
    if ((s32) M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC)) != 0) {
        dispatch_by_main_phase__14TBoss4DarkFalzFUs((void *) (arg0));
        return;
    }
    clear_story_flag((void *) (arg0));
}

}

#undef get_indexed_offset__6TLobbyFi
#undef pop_stack_value__6TLobbyFv
#undef push_op_arg__6TLobbyFi
#pragma pop

#pragma push
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_A { s32 a; M2C_UNK (*fn)(s32, s32); };

extern "C" {
void qst_getargs_801F26A8(s32 arg0);
struct Ent_A; namespace pf2_p6 { extern "C" { s32 read_be_u16(struct Ent_A *); } }
#define read_be_u16 pf2_p6::read_be_u16
namespace pf2_p6 { extern "C" { s32 read_packet_byte__6TLobbyFv(); } }
#define read_packet_byte__6TLobbyFv pf2_p6::read_packet_byte__6TLobbyFv
extern struct Ent_A qst_opcode_table[];
void qst_getargs_801F26A8(s32 arg0);
void qst_op_gclear(u16 arg0);
namespace pf2_p6 { extern "C" { M2C_UNK clear_story_flag(s32); } }
#define clear_story_flag pf2_p6::clear_story_flag
namespace pf2_p6 { extern "C" { extern int local_client_id; } }
#define local_client_id pf2_p6::local_client_id
void qst_op_gclear(u16 arg0);
void qst_op_gset(u16 arg0);
namespace pf2_p6 { extern "C" { M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(s32); } }
#define dispatch_by_main_phase__14TBoss4DarkFalzFUs pf2_p6::dispatch_by_main_phase__14TBoss4DarkFalzFUs
void qst_op_gset(u16 arg0);
void qst_op_thread_stg(u16 arg0);
int create__12TQuestThreadFi(void*);
void qst_op_thread_stg(u16 arg0);
void qst_op_thread(u16 arg0);
int create_quest_thread(void*);
void qst_op_thread(u16 arg0);
void qst_op_rev(s32 arg0);
void qst_op_clear(s32 arg0);
void qst_op_set(s32 arg0);
namespace pf2_p6 { extern "C" { extern s32 TLobby__data_805D5E74; } }
#define TLobby__data_805D5E74 pf2_p6::TLobby__data_805D5E74
void TLobby__sub_801F2570(s32 arg0, s32 arg1);
void quest_vm_get_register_address(s32 arg0, s32 arg1);
void qst_op_let(s32 arg0, s32 arg1);
}

extern "C" {

void quest_vm_assign_u16_immediate(int a0, int a1);
void qst_op_exit(void);
void qst_op_grev(s32 arg0);
void qst_op_leta_letb(int a0, int a1);
void qst_op_leti(int a0, int a1);
void qst_op_nop(void);
void qst_op_ret(void);
void qst_op_sync(void);
s32 pop_stack_value__6TLobbyFv();
namespace pf2_p6 { extern "C" { s32 get_story_flag(s32); } }
#define get_story_flag pf2_p6::get_story_flag

void qst_op_grev(s32 arg0) {
    u16 v = arg0;
    if (get_story_flag(v) != 0) {
        clear_story_flag(v);
        return;
    }
    dispatch_by_main_phase__14TBoss4DarkFalzFUs(v);
}

    extern int* TLobby__script_reg_array;

#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
void qst_op_gclear(u16 arg0) {
    clear_story_flag((s32)((void *) (arg0)));
}

#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
void qst_op_gset(u16 arg0) {
    dispatch_by_main_phase__14TBoss4DarkFalzFUs((s32)((void *) (arg0)));
}

void qst_op_rev(s32 arg0) {
    s32 temp_r3;
    temp_r3 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r3) = (s32) (u8) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r3) == 0);
}

void qst_op_clear(s32 arg0) {
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}

void qst_op_set(s32 arg0) {
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
}

void TLobby__sub_801F2570(s32 arg0, s32 arg1) {
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = TLobby__data_805D5E74 + ((arg1 * 4) & 0x3FFFC);
}

void quest_vm_get_register_address(s32 arg0, s32 arg1) {
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = (*(s32 *)&TLobby__script_reg_array) + ((arg1 * 4) & 0x3FC);
}

void quest_vm_assign_u16_immediate(int a0, int a1) { TLobby__script_reg_array[(unsigned char)(a0)] = (a1 & 0xffff); }

    extern int* TLobby__script_reg_array;
void qst_op_leta_letb(int a0, int a1) { TLobby__script_reg_array[(unsigned char)(a0)] = (a1 & 0xff); }

    extern int* TLobby__script_reg_array;
void qst_op_leti(int a0, int a1) { TLobby__script_reg_array[(unsigned char)(a0)] = a1; }

namespace pf2_p6 { extern "C" { extern s32 TLobby__quest_window_state; } }
#define TLobby__quest_window_state pf2_p6::TLobby__quest_window_state

#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

void qst_op_let(s32 arg0, s32 arg1) {
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC));
}

void qst_op_thread_stg(u16 arg0) {
    create__12TQuestThreadFi((void *) (arg0));
}

#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
void qst_op_thread(u16 arg0) {
    create_quest_thread((void *) (arg0));
}

void qst_op_sync(void) { TLobby__quest_window_state = 1; }

void qst_op_exit(void) { TLobby__quest_window_state = 3; }

extern s32 TLobby__script_stack_depth;
namespace pf2_p6 { extern "C" { extern s32 TLobby__quest_script_pc; } }
#define TLobby__quest_script_pc pf2_p6::TLobby__quest_script_pc

void qst_op_ret(void) {
    u32 temp_r31;

    temp_r31 = (u32) (-TLobby__script_stack_depth & ~TLobby__script_stack_depth) >> 0x1FU;
    if (temp_r31 != 0) {
        TLobby__quest_script_pc = pop_stack_value__6TLobbyFv();
    }
    if (temp_r31 == 0) {
        TLobby__quest_window_state = 2;
    }
}

void qst_op_nop(void) {  }
void qst_getargs_801F26A8(s32 arg0) {
    M2C_UNK (*temp_r31)(s32, s32);
    s32 temp_r30;
    struct Ent_A *e;
    e = (struct Ent_A *) (u8 *) qst_opcode_table;
    e = (struct Ent_A *) ((u8 *) e + (arg0 * 8));
    temp_r31 = e->fn;
    temp_r30 = read_be_u16(e);
    temp_r31(temp_r30, read_packet_byte__6TLobbyFv());
}

}

#undef clear_story_flag
#undef dispatch_by_main_phase__14TBoss4DarkFalzFUs
#undef get_story_flag
#undef read_be_u16
#undef read_packet_byte__6TLobbyFv
#undef TLobby__data_805D5E74
#undef TLobby__quest_script_pc
#undef TLobby__quest_window_state
#undef local_client_id
#pragma pop

#pragma push
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Entry804C69D8_801F2748 {
    u32 field0;
    void (*handler)(void*);
};
struct Entry804C69D8_801F2910 {
    u32 field0;
    void (*handler)(s32, s32, s32);
};

typedef s32 M2C_UNK;
struct Entry804C69D8_801F28AC {
    u32 field0;
    void (*handler)(s32, s32, s32);
};

extern "C" {
struct Entry804C69D8; namespace pf2_p7 { extern "C" { extern struct Entry804C69D8 qst_opcode_table[]; } }
#define qst_opcode_table pf2_p7::qst_opcode_table
namespace pf2_p7 { extern "C" { s32 read_packet_byte__6TLobbyFv(void*); } }
#define read_packet_byte__6TLobbyFv pf2_p7::read_packet_byte__6TLobbyFv
namespace pf2_p7 { extern "C" { M2C_UNK read_be_u16(void *); } }
#define read_be_u16 pf2_p7::read_be_u16
void qst_getargs_801F2910(s32 arg0);
extern u8 lbl_8051238C[];
namespace pf2_p7 { extern "C" { void append_string_to_buffer(void*); } }
#define append_string_to_buffer pf2_p7::append_string_to_buffer
void qst_getargs_cstring(s32 arg0);
void qst_getargs_801F27A0(s32 op);
void qst_getargs_801F2828(s32 op);
s32 stream_read_be32();
void qst_getargs_801F28AC(s32 arg0);
}

extern "C" {

struct Entry804C69D8 {
    u32 field0;
    M2C_UNK (*handler)(M2C_UNK);
};

void qst_getargs_801F2700(s32 arg0) {
    struct Entry804C69D8 *temp_r3;
    M2C_UNK (*temp_r31)(M2C_UNK);

    temp_r3 = qst_opcode_table;
    temp_r3 += arg0;
    temp_r31 = temp_r3->handler;
    temp_r31(read_be_u16(temp_r3));
}
void qst_getargs_cstring(s32 arg0) {
    Entry804C69D8_801F2748 *e = (Entry804C69D8_801F2748 *)&qst_opcode_table;
    e += arg0;
    void (*fn)(void*) = e->handler;
    append_string_to_buffer(lbl_8051238C);
    fn(lbl_8051238C);
}

typedef void (*Handler_801F27A0)(s32, u8, s16 *);
typedef void (*Handler_801F2828)(u16, u8, u8 *);

void qst_getargs_801F27A0(s32 op) {
    s16 buf[16];
    Handler_801F27A0 fn = (Handler_801F27A0) qst_opcode_table[op].handler;
    s32 first = ((s32 (*)(void))read_packet_byte__6TLobbyFv)();
    u8 count = ((s32 (*)(void))read_packet_byte__6TLobbyFv)();
    s32 i;

    for (i = 0; i < count; i++) {
        buf[i] = ((s16 (*)(void))read_be_u16)();
    }
    fn(first, count, buf);
}

void qst_getargs_801F2828(s32 op) {
    u8 buf[16];
    Handler_801F2828 fn = (Handler_801F2828) qst_opcode_table[op].handler;
    u16 label = ((M2C_UNK (*)(void))read_be_u16)();
    u8 count = ((s32 (*)(void))read_packet_byte__6TLobbyFv)();
    s32 i;

    for (i = 0; i < count; i++) {
        buf[i] = ((s32 (*)(void))read_packet_byte__6TLobbyFv)();
    }
    fn(label, count, buf);
}

void qst_getargs_801F28AC(s32 arg0) {
    Entry804C69D8_801F28AC* e = ((Entry804C69D8_801F28AC *)&qst_opcode_table);
    e += arg0;
    void (*fn)(s32, s32, s32) = e->handler;
    s32 a = read_packet_byte__6TLobbyFv(e);
    s32 b = stream_read_be32();
    fn(a, b, read_be_u16((void *)b));
}

void qst_getargs_801F2910(s32 arg0) {
    Entry804C69D8_801F2910* e = ((Entry804C69D8_801F2910 *)&qst_opcode_table);
    e += arg0;
    void (*fn)(s32, s32, s32) = e->handler;
    s32 a = read_packet_byte__6TLobbyFv(e);
    s32 b = read_packet_byte__6TLobbyFv((void*)a);
    fn(a, b, ((s32)read_be_u16((void *)((void*)b))));
}

}

#undef append_string_to_buffer
#undef read_be_u16
#undef read_packet_byte__6TLobbyFv
#undef qst_opcode_table
#pragma pop

#pragma push
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_command__6TLobbyFi(s32 arg0);
s32 read_packet_byte__6TLobbyFv(struct Ent_A *);

namespace pf2_p8 { extern "C" { s32 read_be_u16(); } }
#define read_be_u16 pf2_p8::read_be_u16
extern struct Ent_A qst_opcode_table[];

void dispatch_command__6TLobbyFi(s32 arg0) {
    M2C_UNK (*temp_r31)(s32, s32);
    s32 temp_r30;
    struct Ent_A *e;

    e = (struct Ent_A *) (u8 *) qst_opcode_table;
    e = (struct Ent_A *) ((u8 *) e + (arg0 * 8));
    temp_r31 = e->fn;
    temp_r30 = read_packet_byte__6TLobbyFv(e);
    temp_r31(temp_r30, read_be_u16());
}

}

#undef read_be_u16
#pragma pop

#pragma push
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

namespace pf2_p9 { extern "C" { M2C_UNK read_be_u16(void *); } }
#define read_be_u16 pf2_p9::read_be_u16

struct Entry804C69D8; namespace pf2_p9 { extern "C" { extern struct Entry804C69D8 qst_opcode_table[]; } }
#define qst_opcode_table pf2_p9::qst_opcode_table

void qst_getargs_801F29CC(s32 arg0) {
    struct Entry804C69D8 *temp_r3;
    M2C_UNK (*temp_r31)(M2C_UNK);

    temp_r3 = qst_opcode_table;
    temp_r3 += arg0;
    temp_r31 = temp_r3->handler;
    temp_r31(read_be_u16(temp_r3));
}

}

#undef read_be_u16
#undef qst_opcode_table
#pragma pop

#pragma push
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct {
    s32 x0;
    M2C_UNK (*fn)(M2C_UNK);
} Ent_801F2A14;

typedef struct Ent_801F2AB4 {
    s32 x0;
    void (*fn)(s32, s32);
} Ent_801F2AB4;
extern "C" {
s32 read_packet_byte__6TLobbyFv(struct Ent_A *);
namespace pf2_p10 { extern "C" { M2C_UNK stream_read_be32(void); } }
#define stream_read_be32 pf2_p10::stream_read_be32
namespace pf2_p10 { extern "C" { extern Ent_801F2A14 qst_opcode_table[]; } }
#define qst_opcode_table pf2_p10::qst_opcode_table
void qst_getargs_801F2A5C(s32 arg0);
void qst_getargs_801F2AB4(s32 arg0);
}

extern "C" {

void qst_getargs_801F2A14(s32 arg0) {
    Ent_801F2A14 *temp_r3;
    M2C_UNK (*temp_r31)(M2C_UNK);

    temp_r3 = qst_opcode_table;
    temp_r3 += arg0;
    temp_r31 = temp_r3->fn;
    temp_r31(stream_read_be32());
}
#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
void qst_getargs_801F2A5C(s32 arg0) {
    M2C_UNK (*temp_r31)(s32, s32);
    s32 temp_r30;
    struct Ent_A *e;
    e = (struct Ent_A *) (u8 *) ((struct Ent_A *)&qst_opcode_table);
    e = (struct Ent_A *) ((u8 *) e + (arg0 * 8));
    temp_r31 = e->fn;
    temp_r30 = read_packet_byte__6TLobbyFv(e);
    temp_r31(temp_r30, ((s32)stream_read_be32()));
}
void qst_getargs_801F2AB4(s32 arg0) {
    void (*fn)(s32, s32);
    s32 a;
    Ent_801F2AB4 *e = (Ent_801F2AB4 *)&qst_opcode_table;
    e += arg0;
    fn = e->fn;
    a = ((s32 (*)(void))read_packet_byte__6TLobbyFv)();
    fn(a, ((s32 (*)(void))read_packet_byte__6TLobbyFv)());
}

}

#undef stream_read_be32
#undef qst_opcode_table
#pragma pop

#pragma push
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801F2BCC_TLobby__data_80512240 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

extern "C" {
extern int TLobby__script_value_stack[];
namespace pf2_p11 { extern "C" { extern int TLobby__script_stack_depth; } }
#define TLobby__script_stack_depth pf2_p11::TLobby__script_stack_depth
s32 pop_stack_value__6TLobbyFv(void);
}

extern "C" {

typedef struct {
    s32 x0;
    M2C_UNK (*fn)(M2C_UNK);
} Ent_801F2B0C;

int get_indexed_offset__6TLobbyFi(int a0);
void qst_getargs_801F2B0C(s32 arg0);
namespace pf2_p11 { extern "C" { M2C_UNK read_packet_byte__6TLobbyFv(void *); } }
#define read_packet_byte__6TLobbyFv pf2_p11::read_packet_byte__6TLobbyFv

namespace pf2_p11 { extern "C" { extern Ent_801F2B0C qst_opcode_table[]; } }
#define qst_opcode_table pf2_p11::qst_opcode_table

void qst_getargs_801F2B0C(s32 arg0) {
    Ent_801F2B0C *temp_r3;
    M2C_UNK (*temp_r31)(M2C_UNK);

    temp_r3 = qst_opcode_table;
    temp_r3 += arg0;
    temp_r31 = temp_r3->fn;
    temp_r31(read_packet_byte__6TLobbyFv(temp_r3));
}

namespace pf2_p11 { extern "C" { extern s32 TLobby__quest_arg_stack_count; } }
#define TLobby__quest_arg_stack_count pf2_p11::TLobby__quest_arg_stack_count
void qst_getargs_801F2B54(s32 arg0) {
    Ent_801F2B0C *e;

    e = qst_opcode_table;
    e += arg0;
    e->fn((M2C_UNK)e);
    TLobby__quest_arg_stack_count = 0;
}

void qst_getargs_801F2B94(s32 arg0) {
    ((void (*)(void))qst_opcode_table[arg0].fn)();
}

extern int TLobby__script_value_stack[];

    extern int* TLobby__data_805D5E74;
namespace pf2_p11 { extern "C" { extern int TLobby__quest_data_base; } }
#define TLobby__quest_data_base pf2_p11::TLobby__quest_data_base

typedef char RecoveredGlobal_801F2BCC_TLobby__data_80512240_size[sizeof(RecoveredGlobal_801F2BCC_TLobby__data_80512240) == 0x100 ? 1 : -1];
s32 pop_stack_value__6TLobbyFv(void) {
    s32 temp_r4;
    if ((s32) (*(s32 *)&TLobby__script_stack_depth) > 0) {
        temp_r4 = (*(s32 *)&TLobby__script_stack_depth) - 1;
        (*(s32 *)&TLobby__script_stack_depth) = temp_r4;
        return M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_801F2BCC_TLobby__data_80512240 *)&TLobby__script_value_stack).value) + (temp_r4 * 4)), s32 *, 0);
    }
    return 0;
}

void push_op_arg__6TLobbyFi(int a0)
{
  int new_var;
  new_var = (TLobby__script_stack_depth = (0, TLobby__script_stack_depth));
  TLobby__script_stack_depth = TLobby__script_stack_depth + 0x1;
  TLobby__script_value_stack[new_var] = a0;
}
int get_indexed_offset__6TLobbyFi(int a0) {  return (TLobby__quest_data_base + TLobby__data_805D5E74[(unsigned short)(a0)]); }

}

#undef read_packet_byte__6TLobbyFv
#undef TLobby__script_stack_depth
#undef TLobby__quest_arg_stack_count
#undef TLobby__quest_data_base
#undef qst_opcode_table
#pragma pop

#pragma push
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void append_string_to_buffer(s32 arg0);
s32 stream_read_be32(void);
namespace pf2_p12 { extern "C" { M2C_UNK expand_message_substitutions(s32, s32, s32); } }
#define expand_message_substitutions pf2_p12::expand_message_substitutions
M2C_UNK bswap_32__FPUl(s32 *, s32);
namespace pf2_p12 { extern "C" { M2C_UNK memcpy(s32 *, s32, M2C_UNK); } }
#define memcpy pf2_p12::memcpy
namespace pf2_p12 { extern "C" { s32 strlen(s32, s32); } }
#define strlen pf2_p12::strlen

extern s32 TLobby__quest_data_base;
namespace pf2_p12 { extern "C" { extern s32 TLobby__quest_script_pc; } }
#define TLobby__quest_script_pc pf2_p12::TLobby__quest_script_pc

void append_string_to_buffer(s32 arg0) {
    s32 temp_r31;

    temp_r31 = strlen(TLobby__quest_data_base + TLobby__quest_script_pc, TLobby__quest_data_base);
    expand_message_substitutions(TLobby__quest_data_base + TLobby__quest_script_pc, arg0, TLobby__quest_data_base);
    TLobby__quest_script_pc += temp_r31 + 1;
}

extern s32 TLobby__quest_data_base;

s32 stream_read_be32(void) {
    s32 sp8;
    s32 temp_r4;

    memcpy(&sp8, TLobby__quest_data_base + TLobby__quest_script_pc, 4);
    temp_r4 = TLobby__quest_script_pc;
    TLobby__quest_script_pc = temp_r4 + 4;
    bswap_32__FPUl(&sp8, temp_r4);
    return sp8;
}

}

#undef expand_message_substitutions
#undef memcpy
#undef strlen
#undef TLobby__quest_script_pc
#pragma pop

#pragma push
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK bswap_16__FPUs(u16 *, s32);
namespace pf2_p13 { extern "C" { M2C_UNK memcpy(u16 *, s32, M2C_UNK); } }
#define memcpy pf2_p13::memcpy
extern s32 TLobby__quest_data_base;
namespace pf2_p13 { extern "C" { extern s32 TLobby__quest_script_pc; } }
#define TLobby__quest_script_pc pf2_p13::TLobby__quest_script_pc

u16 read_be_u16(void) {
    u16 sp8;
    s32 temp_r4;

    memcpy(&sp8, TLobby__quest_data_base + TLobby__quest_script_pc, 2);
    temp_r4 = TLobby__quest_script_pc;
    TLobby__quest_script_pc = temp_r4 + 2;
    bswap_16__FPUs(&sp8, temp_r4);
    return sp8;
}

}

#undef memcpy
#undef TLobby__quest_script_pc
#pragma pop
