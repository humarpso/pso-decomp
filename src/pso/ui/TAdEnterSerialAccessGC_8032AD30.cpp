#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

int forward_input__22TAdEnterSerialAccessGCFPv(void* p) { return TAdEnterSerialAccessGC__sub_8032B1A4(p); }

}
