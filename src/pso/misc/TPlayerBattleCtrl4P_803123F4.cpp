#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TPlayerBattleCtrl4P__vt7(void *arg0);
void TPlayerBattleCtrl4P__sub_803112A4(void *, int);
void fn_80269C6C(void *, void *, int);

void TPlayerBattleCtrl4P__vt7(void *arg0) {
    if (M2C_FIELD(arg0, void **, 0x20) != NULL) {
        fn_80269C6C(M2C_FIELD(arg0, void **, 0x20), (void *)((char *)arg0 + 56), 128);
    }
    M2C_FIELD(arg0, u32 *, 0x240) = 240;
    TPlayerBattleCtrl4P__sub_803112A4(arg0, 2);
}

}
