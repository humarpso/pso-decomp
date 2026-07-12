#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_foot_stamp__10TObjPlayerFii(s32 arg0, s32 arg1);
void enable_foot_stamp__10TObjPlayerFii(s32 arg1, s32 arg2);
M2C_UNK TPlayerFootStamp__sub_802B014C(s32, M2C_UNK);

void enable_foot_stamp__10TObjPlayerFii(s32 arg1, s32 arg2) {
    TPlayerFootStamp__sub_802B014C(arg2, 1);
}

void clear_foot_stamp__10TObjPlayerFii(s32 arg0, s32 arg1) {
    TPlayerFootStamp__sub_802B014C(arg1, 0);
}

}
