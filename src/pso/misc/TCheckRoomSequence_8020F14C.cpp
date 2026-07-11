#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_check__18TCheckRoomSequenceFUi(u32 arg0);
M2C_UNK fn_80073DC4(M2C_UNK, M2C_UNK);

extern s32 TCheckRoomSequence__data_805D6164;
extern s32 TCheckRoomSequence__data_805D6168;

void init_check__18TCheckRoomSequenceFUi(u32 arg0) {
    if (arg0 != 0U) {
        TCheckRoomSequence__data_805D6164 = 0x46;
        TCheckRoomSequence__data_805D6168 = 2;
        fn_80073DC4(arg0, 0x10);
    }
}

}
