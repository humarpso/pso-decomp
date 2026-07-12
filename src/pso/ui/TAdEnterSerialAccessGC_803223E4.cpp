#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_field20_state__22TAdEnterSerialAccessGCFPv(void *arg0);
s32 TWindowKeyBoardSoft__sub_8025B8C8(u32);

s32 get_field20_state__22TAdEnterSerialAccessGCFPv(void *arg0) {
    u32 temp_r3 = M2C_FIELD(arg0, u32 *, 0x20);
    if (temp_r3 == 0U) {
        return 0;
    }
    return TWindowKeyBoardSoft__sub_8025B8C8(temp_r3);
}

}
