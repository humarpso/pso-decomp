#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubQuestBoardSelect__sub_8027D3BC(void *arg0);
M2C_UNK fn_8027D230(void *);
s32 fn_8027D2A0(void *, u8);
s32 fn_8027DB20();

void TWindowSubQuestBoardSelect__sub_8027D3BC(void *arg0) {
    u8 temp_r3;

    if ((fn_8027DB20() == 0) && (fn_8027D2A0(arg0, M2C_FIELD(arg0, u8 *, 0x61)) == 0)) {
        do {
            M2C_FIELD(arg0, u8 *, 0x61) = (u8) (M2C_FIELD(arg0, u8 *, 0x61) + 1);
            temp_r3 = M2C_FIELD(arg0, u8 *, 0x61);
            if ((s8) temp_r3 > 6) {
                M2C_FIELD(arg0, u8 *, 0x61) = (u8) (temp_r3 - 6);
            }
        } while (fn_8027D2A0(arg0, M2C_FIELD(arg0, u8 *, 0x61)) == 0);
        fn_8027D230(arg0);
    }
}

}
