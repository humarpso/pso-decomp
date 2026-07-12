#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TQuestThread__sub_801F5EAC(s32, s32);
extern s32 lbl_805D5EE8;

s32 get_slot_flag__26TWindowSubQuestBoardSelectFic(s32 arg0, s8 arg1) {
    if (arg1 < 0) {
        return 0;
    }
    if (arg1 > 6) {
        return 0;
    }
    return TQuestThread__sub_801F5EAC(lbl_805D5EE8, arg1 + 0x4A);
}

}
