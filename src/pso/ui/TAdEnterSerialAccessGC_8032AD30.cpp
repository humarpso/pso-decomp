#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void create_callback__22TAdEnterSerialAccessGCFPvPvPv(void *, void *, void *);
void fn_8032AC9C();
extern char lbl_80477188[];
extern char lbl_80477190[];
void TAdEnterSerialAccessGC__sub_8032AE1C(void);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(int, void *);
void send_and_handle__6TLobbyFPvii(s32, s32, int);
s32 update_window_mode_from_progress__6TLobbyFiPv(void *, void *);
extern u8 lbl_80477178[];
extern u8 lbl_80477180[];
s32 TAdEnterSerialAccessGC__sub_8032AE54(void *arg0, void *arg1);
int sprintf(char *, const char *, ...);
void TAdEnterSerialAccessGC__sub_8039C8A0(int, const char *, ...);
M2C_UNK memset(s32, M2C_UNK, M2C_UNK);
extern char lbl_80477260[];
extern char lbl_80477268[];
extern char lbl_80543468[];
char *TAdEnterSerialAccessGC__sub_8032B12C(int arg0);
}

extern "C" {

void clear_serial_buffer__22TAdEnterSerialAccessGCFv(void);
void clear_state(void);
int forward_input__22TAdEnterSerialAccessGCFPv(void* p);
s32 has_serial_input__22TAdEnterSerialAccessGCFv(void);
void store_serial_access_key__22TAdEnterSerialAccessGCFiii(s32 arg0, s32 arg1, s32 arg2);
u8 *TAdEnterSerialAccessGC__sub_8032AEB4();
int TAdEnterSerialAccessGC__sub_8032B1A4(void*);
s32 TAdPsoPassSaveGC__sub_8032B584();
s32 get_instance__23TAdSinglePlyChrSelectGCFv();
M2C_UNK memset(s32, M2C_UNK, M2C_UNK);
M2C_UNK strncpy(s32, s32, M2C_UNK);

void TAdEnterSerialAccessGC__sub_8032AE1C(void) {
    create_callback__22TAdEnterSerialAccessGCFPvPvPv(lbl_80477188, lbl_80477190, (void *)fn_8032AC9C);
}

s32 TAdEnterSerialAccessGC__sub_8032AE54(void *arg0, void *arg1) {
    s32 r = update_window_mode_from_progress__6TLobbyFiPv(lbl_80477178, lbl_80477180);
    send_and_handle__6TLobbyFPvii(r, TAdSinglePlyChrSelectGC__sub_80132F2C(0x17, arg1), 1);
    return r;
}

s32 has_serial_input__22TAdEnterSerialAccessGCFv(void) {
    return (s8) *TAdEnterSerialAccessGC__sub_8032AEB4() ? 1 : 0;
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

char *TAdEnterSerialAccessGC__sub_8032B12C(int arg0) {
    u32 v = 0;
    TAdEnterSerialAccessGC__sub_8039C8A0(arg0, lbl_80477260, &v);
    memset((s32)((s32)lbl_80543468), (M2C_UNK)(0), (M2C_UNK)(0x40));
    if (v != 0) {
        sprintf(lbl_80543468, lbl_80477268, v);
    }
    return lbl_80543468;
}

int forward_input__22TAdEnterSerialAccessGCFPv(void* p) { return TAdEnterSerialAccessGC__sub_8032B1A4(p); }

}
