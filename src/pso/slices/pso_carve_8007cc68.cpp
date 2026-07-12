#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 memcard_check_snapshot(M2C_UNK, M2C_UNK);
s32 TAdSinglePlyChrSelectGC__sub_802432CC(M2C_UNK, M2C_UNK *, s32);
extern M2C_UNK TObjBoss2Tunnel__data_80438A08[];
extern s16 TObjBoss2Tunnel__data_805D4E8A;
extern s32 TObjBoss2Tunnel__data_805D4E90;

s32 save_screen_snapshot(void) {
    if (memcard_check_snapshot(1, 0) == 0) {
        return 0;
    }
    if (TAdSinglePlyChrSelectGC__sub_802432CC(1, TObjBoss2Tunnel__data_80438A08, TObjBoss2Tunnel__data_805D4E90) != 0) {
        return 0;
    }
    TObjBoss2Tunnel__data_805D4E8A = 2;
    return 1;
}

}
