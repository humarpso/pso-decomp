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

extern "C" {
M2C_UNK append_string(void *);
extern RecoveredGlobal_8000F7FC_lbl_80515F48 lbl_80512350;
void TLobby__sub_801E6818(void);
M2C_UNK append_string(void *);
extern RecoveredGlobal_8000F7FC_lbl_80515F48 lbl_80512340;
void TLobby__sub_801E6840(void);
}

extern "C" {

void append_card_window_text__6TLobbyFv(void);
void capture_chat_sensor__6TLobbyFi(s32 arg0);
s32 parse_f_index(s32 a0);
int TAdEnterSerialAccessGC__sub_8039C8A0(M2C_UNK, M2C_UNK *, ...);
M2C_UNK TOChatSensorCapture__sub_8015A99C(u16, s32);
M2C_UNK TOChatSensor__sub_8015B108();
M2C_UNK append_string(void *);
u32 get_card_window__17TWindowSubComCardFUi(int);

extern s32 lbl_805D53A0;

void capture_chat_sensor__6TLobbyFi(s32 arg0) {
    TOChatSensor__sub_8015B108();
    TOChatSensorCapture__sub_8015A99C((u16) lbl_805D53A0, arg0);
}

extern M2C_UNK lbl_80449C6C[];

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

s32 parse_f_index(s32 a0) {
    s32 sp8;

    sp8 = -1;
    TAdEnterSerialAccessGC__sub_8039C8A0(a0, &lbl_805DC4A4, &sp8);
    if ((sp8 < 0x100) && (sp8 >= 0)) {
        return sp8;
    }
    return -1;
}

}
