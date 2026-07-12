#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_windows__14TWindowSubItemFPvi(void *arg0, s32 arg1);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TWindow__close(void *);
M2C_UNK TObjPlayer__sub_801B7B10();

void close_windows__14TWindowSubItemFPvi(void *arg0, s32 arg1) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x24)) != 0U) {
        switch (arg1) {
        case 0:
            TObjPlayer__sub_801B7B10();
            M2C_FIELD(arg0, s8 *, 0x1C) = 0x16;
            return;
        case 1:
            if (M2C_FIELD(arg0, void **, 0x38) != NULL) {
                TWindow__close(M2C_FIELD(arg0, void **, 0x38));
                M2C_FIELD(arg0, u32 *, 0x38) = 0U;
            }
            if (M2C_FIELD(arg0, void **, 0x34) != NULL) {
                TWindow__close(M2C_FIELD(arg0, void **, 0x34));
                M2C_FIELD(arg0, u32 *, 0x34) = 0U;
            }
            M2C_FIELD(arg0, s8 *, 0x1C) = 0xA;
            break;
        }
    }
}

}
