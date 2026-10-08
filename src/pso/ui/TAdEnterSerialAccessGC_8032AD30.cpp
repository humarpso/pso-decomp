#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Lim_8032B1A4 { u32 n[4]; };

struct B4_8032AD30 { u8 b[4]; };

extern "C" {
void create_callback__22TAdEnterSerialAccessGCFPvPvPv(void *, void *, void *);
void fn_8032AC9C();
extern char lbl_80477188[];
extern char lbl_80477190[];
void TAdEnterSerialAccessGC__sub_8032AE1C(void);
s32 get_localized_text_entry(int, void *);
void send_and_handle__6TLobbyFPvii(s32, s32, int);
s32 update_window_mode_from_progress__6TLobbyFiPv(void *, void *);
extern u8 lbl_80477178[];
extern u8 lbl_80477180[];
s32 TAdEnterSerialAccessGC__sub_8032AE54(void *arg0, void *arg1);
int sprintf(char *, const char *, ...);
void sscanf(int, const char *, ...);
M2C_UNK memset(s32, M2C_UNK, M2C_UNK);
extern char lbl_80477260[];
extern char lbl_80477268[];
extern char lbl_80543468[];
char *serial_to_hex_string__22TAdEnterSerialAccessGCFi(int arg0);
u8 *TAdEnterSerialAccessGC__sub_8013AD80();
u8 *TAdEnterSerialAccessGC__sub_8013ADB0();
u8 *TAdEnterPasswordGC__sub_8013ADE4();
u32 get_field_118__22TAdEnterSerialAccessGCFv();
extern u32 lbl_804ED9F8[];
extern u8 lbl_805DF77C[4];
s32 TAdEndText__sub_8001B3BC(int);
s32 TAdEndText__sub_8001B3EC(int);
u32 strlen(const char *);
extern Lim_8032B1A4 lbl_80477238;
extern Lim_8032B1A4 lbl_80477248;
s32 TKeyBoardControl__ct(void *, s32, s32, s32, s32, s32);
void *__nw__7TObjectFUl(s32);
void update_chat_window(void *);
void set_sub_position__15TWindowMakeTeamFPvPv(u8 *arg0, u8 *arg1);
int get_keyboard_field_6c__15TWindowMakeTeamFPv(void* p);
s32 has_serial_input__22TAdEnterSerialAccessGCFv(void);
u8 *get_serial_text__22TAdEnterSerialAccessGCFii(s32 arg0, s32 arg1);
extern s32 lbl_804771C8[];
extern u8 lbl_804771E0[][8];
extern s32 lbl_805D53A0;
extern B4_8032AD30 lbl_805DF770;
u32 create_keyboard_control__22TAdEnterSerialAccessGCFii(s32 arg0, s32 arg1);
}

extern "C" {

void clear_serial_buffer__22TAdEnterSerialAccessGCFv(void);
void clear_state(void);
int forward_input__22TAdEnterSerialAccessGCFPv(void* p);
s32 has_serial_input__22TAdEnterSerialAccessGCFv(void);
void store_serial_access_key__22TAdEnterSerialAccessGCFiii(s32 arg0, s32 arg1, s32 arg2);
u8 *get_serial_text__22TAdEnterSerialAccessGCFii(s32 arg0, s32 arg1);
int TAdEnterSerialAccessGC__sub_8032B1A4(void *arg0, s32 arg1, char *arg2);
s32 TAdPsoPassSaveGC__sub_8032B584();
s32 get_instance__23TAdSinglePlyChrSelectGCFv();
M2C_UNK memset(s32, M2C_UNK, M2C_UNK);
M2C_UNK strncpy(s32, s32, M2C_UNK);

u32 create_keyboard_control__22TAdEnterSerialAccessGCFii(s32 arg0, s32 arg1) {
    u8 *kb;
    if (arg1 < 0 || arg1 >= 4) {
        return 0;
    }
    B4_8032AD30 sp8 = lbl_805DF770;
    kb = (u8 *)__nw__7TObjectFUl(0x2C);
    if (kb != NULL) {
        kb = (u8 *)TKeyBoardControl__ct(kb, arg0, lbl_804771C8[arg1], 0, sp8.b[arg1], lbl_805D53A0);
    }
    if (kb == NULL) {
        return 0;
    }
    set_sub_position__15TWindowMakeTeamFPvPv(kb, lbl_804771E0[arg1]);
    if (((s32 (*)(s32, s32))has_serial_input__22TAdEnterSerialAccessGCFv)(arg0, arg1) != 0) {
        ((int (*)(void *, u8 *))get_keyboard_field_6c__15TWindowMakeTeamFPv)(kb, get_serial_text__22TAdEnterSerialAccessGCFii(arg0, arg1));
    }
    if (arg1 != 3) {
        update_chat_window(kb);
    }
    return (u32)kb;
}

void TAdEnterSerialAccessGC__sub_8032AE1C(void) {
    create_callback__22TAdEnterSerialAccessGCFPvPvPv(lbl_80477188, lbl_80477190, (void *)fn_8032AC9C);
}

s32 TAdEnterSerialAccessGC__sub_8032AE54(void *arg0, void *arg1) {
    s32 r = update_window_mode_from_progress__6TLobbyFiPv(lbl_80477178, lbl_80477180);
    send_and_handle__6TLobbyFPvii(r, get_localized_text_entry(0x17, arg1), 1);
    return r;
}

u8 *get_serial_text__22TAdEnterSerialAccessGCFii(s32 arg0, s32 arg1) {
    if (arg1 == 3) {
        return lbl_805DF77C;
    }
    if (arg1 == 2 && TAdPsoPassSaveGC__sub_8032B584() == 0) {
        return lbl_805DF77C;
    }
    if (*(s8 *) (get_instance__23TAdSinglePlyChrSelectGCFv() + 0x1152C) != 0) {
        switch (arg1) {
        case 0:
            return (u8 *) serial_to_hex_string__22TAdEnterSerialAccessGCFi(get_instance__23TAdSinglePlyChrSelectGCFv() + 0x1152C);
        case 1:
            return (u8 *) (get_instance__23TAdSinglePlyChrSelectGCFv() + 0x1153C);
        case 2:
            return (u8 *) (get_instance__23TAdSinglePlyChrSelectGCFv() + 0x1154C);
        }
    } else if (lbl_804ED9F8[arg1] == get_field_118__22TAdEnterSerialAccessGCFv()) {
        switch (arg1) {
        case 0:
            return TAdEnterSerialAccessGC__sub_8013ADB0();
        case 1:
            return TAdEnterSerialAccessGC__sub_8013AD80();
        case 2:
            return TAdEnterPasswordGC__sub_8013ADE4();
        }
    }
    return lbl_805DF77C;
}

s32 has_serial_input__22TAdEnterSerialAccessGCFv(void) {
    return (s8) *((u8 *(*)(void))get_serial_text__22TAdEnterSerialAccessGCFii)() ? 1 : 0;
}

void clear_serial_buffer__22TAdEnterSerialAccessGCFv(void) {
    u32 temp_r3;

    temp_r3 = get_instance__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != 0U) {
        memset(temp_r3 + 0x1154C, 0, 0x10);
    }
}

void clear_state(void) {
    s32 temp_r3;

    temp_r3 = get_instance__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != 0) {
        memset(temp_r3 + 0x1152C, 0, 0x10);
        memset(temp_r3 + 0x1153C, 0, 0x10);
        memset(temp_r3 + 0x1154C, 0, 0x10);
    }
}

void store_serial_access_key__22TAdEnterSerialAccessGCFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;

    temp_r3 = get_instance__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != 0) {
        strncpy(temp_r3 + 0x1152C, arg0, 0xF);
        strncpy(temp_r3 + 0x1153C, arg1, 0xF);
        if (TAdPsoPassSaveGC__sub_8032B584() != 0) {
            strncpy(temp_r3 + 0x1154C, arg2, 0xF);
        }
    }
}

char *serial_to_hex_string__22TAdEnterSerialAccessGCFi(int arg0) {
    u32 v = 0;
    sscanf(arg0, lbl_80477260, &v);
    memset((s32)((s32)lbl_80543468), (M2C_UNK)(0), (M2C_UNK)(0x40));
    if (v != 0) {
        sprintf(lbl_80543468, lbl_80477268, v);
    }
    return lbl_80543468;
}

int TAdEnterSerialAccessGC__sub_8032B1A4(void *arg0, s32 arg1, char *arg2) {
    s32 i;
    s32 n;

    Lim_8032B1A4 max = lbl_80477238;
    max.n[2] = strlen(arg2);
    max.n[3] = strlen(arg2);
    Lim_8032B1A4 min = lbl_80477248;
    if (strlen(arg2) < min.n[arg1]) {
        return 0;
    }
    switch (arg1) {
    case 0:
    case 1:
        n = max.n[arg1];
        for (i = 0; i < n; i++, arg2++) {
            if (TAdEndText__sub_8001B3BC(*arg2) == 0) {
                return 0;
            }
        }
        break;
    case 2:
        n = max.n[arg1];
        for (i = 0; i < n; i++, arg2++) {
            if (TAdEndText__sub_8001B3EC(*arg2) == 0) {
                return 0;
            }
        }
        break;
    case 3:
        break;
    }
    return 1;
}

int forward_input__22TAdEnterSerialAccessGCFPv(void* p) { return ((int (*)(void *))TAdEnterSerialAccessGC__sub_8032B1A4)(p); }

}
