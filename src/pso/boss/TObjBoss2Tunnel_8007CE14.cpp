#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjBoss2Tunnel__sub_8007CE14(void);
s32 TAdPlayerLoadGC__sub_801E1E38(M2C_UNK);
s32 TObjBoss2Tunnel__sub_8007CB50();
s32 TObjBoss2Tunnel__sub_8007CBC4();

M2C_UNK save_screen_snapshot();
M2C_UNK memcard_check_snapshot(M2C_UNK, s32 *);
extern s32 TObjBoss2Tunnel__data_805D4E94;

s32 TObjBoss2Tunnel__sub_8007CE14(void) {
    s32 sp8;

    memcard_check_snapshot(1, &sp8);
    if (sp8 == 1) {
        if ((s32) TObjBoss2Tunnel__data_805D4E94 != 0) {
            return -9;
        }
        save_screen_snapshot();
loop_4:
        if (TAdPlayerLoadGC__sub_801E1E38(1) == 0) {
            TObjBoss2Tunnel__data_805D4E94 = 0;
            return -5;
        }
        if (TObjBoss2Tunnel__sub_8007CBC4() != 0) {
            if (TObjBoss2Tunnel__sub_8007CB50() == 0) {
                TObjBoss2Tunnel__data_805D4E94 = 1;
                return -9;
            }
            goto block_9;
        }
        goto loop_4;
    }
block_9:
    TObjBoss2Tunnel__data_805D4E94 = 0;
    return sp8;
}

}
