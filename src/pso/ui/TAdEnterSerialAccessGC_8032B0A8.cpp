#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void store_serial_access_key__22TAdEnterSerialAccessGCFiii(s32 arg0, s32 arg1, s32 arg2);
s32 TAdPsoPassSaveGC__sub_8032B584();
s32 get_instance__23TAdSinglePlyChrSelectGCFv();
M2C_UNK strncpy(s32, s32, M2C_UNK);

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

}
