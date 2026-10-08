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
M2C_UNK append_string(void *);
extern RecoveredGlobal_8000F7FC_lbl_80515F48 lbl_80512350;
void TLobby__sub_801E6818(void);
M2C_UNK append_string(void *);
extern RecoveredGlobal_8000F7FC_lbl_80515F48 lbl_80512340;
void TLobby__sub_801E6840(void);
int sprintf(char *, const char *, ...);
M2C_UNK append_string(void *);
extern char lbl_80449C74[];
void append_color_code__6TLobbyFi(s32 arg0);
s32 TLobby__sub_801E6BB8();
s8 read_byte_advance__6TLobbyFv();
void TLobby__sub_801E6C2C(s8);
void TLobby__sub_801E6C40();
s32 expand_message_substitutions(s32 arg0, s32 arg1);
void append_color_code__6TLobbyFi(s32 arg0);
s32 parse_f_index(s32 a0);
s32 parse_r_index(char *);
void append_float_value__6TLobbyFi(s32);
void append_int_param__6TLobbyFi(s32);
s32 TLobby__sub_801E6BB8();
s8 read_byte_advance__6TLobbyFv();
int strcmp(const char *, const char *);
extern CmdTable_801E6604 lbl_80449C04;
void parse_message_tag__6TLobbyFv();
char *get_unit_list__6TLobbyFv();
M2C_UNK append_string(void *);
int strcmp(const char *, const char *);
extern char lbl_80449C64[];
extern M2C_UNK TLobby__data_805DC4A0;
void append_unit_list_name__6TLobbyFv(void);
char *TLobby__sub_80070ACC();
M2C_UNK append_string(void *);
int strcmp(const char *, const char *);
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
M2C_UNK append_string(void *);
u32 get_card_window__17TWindowSubComCardFUi(int);

extern s32 lbl_805D53A0;

void capture_chat_sensor__6TLobbyFi(s32 arg0) {
    dispatch_chat_message_to_children__12TOChatSensorFi();
    capture_message__19TOChatSensorCaptureFUsPv((u16) lbl_805D53A0, arg0);
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
    CmdTable_801E6604 tbl = lbl_80449C04;
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

    temp_r3 = get_card_window__17TWindowSubComCardFUi((int) (0xFFFF));
    if (temp_r3 != 0U) {
        append_string((void *) (temp_r3 + 0x2254));
        return;
    }
    append_string((void *) (lbl_80449C6C));
}

extern M2C_UNK lbl_805DC4A4;

typedef char RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
typedef char RecoveredGlobal_8000F7FC_lbl_80515F48_size[sizeof(RecoveredGlobal_8000F7FC_lbl_80515F48) == 0x28 ? 1 : -1];
void TLobby__sub_801E6818(void) {
    append_string((void *)((M2C_UNK *)(&lbl_80512350.value)));
}
typedef char RecoveredGlobal_8000F90C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F90C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8FC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8FC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8EC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8EC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F91C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F91C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9E4_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9E4_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9CC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9CC_lbl_804FE120) == 0x18 ? 1 : -1];

void TLobby__sub_801E6840(void) {
    append_string((void *)((M2C_UNK *)(&lbl_80512340.value)));
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
