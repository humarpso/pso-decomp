#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubStatusDisp__sub_803387F8(void *arg0, s8 arg1);
M2C_UNK get_message_10__20TWindowSubStatusDispFPv(s32);

void TWindowSubStatusDisp__sub_803387F8(void *arg0, s8 arg1) {
    get_message_10__20TWindowSubStatusDispFPv(arg1 + 0x113);
}

}
