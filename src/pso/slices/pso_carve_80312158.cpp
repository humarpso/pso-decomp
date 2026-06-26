#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8007FE04(void *, void *, M2C_UNK);
void *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_80244A14(void *);
s32 TPlayerBattleCtrl4P__sub_80310BA8(void *);
M2C_UNK TPlayerBattleCtrl4P__sub_803112A4(void *, M2C_UNK);

void TPlayerBattleCtrl4P__vt12(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x24C) = (s32) (M2C_FIELD(arg0, s32 *, 0x24C) - 1);
    if ((TPlayerBattleCtrl4P__sub_80310BA8(arg0) != 0) || ((s32) M2C_FIELD(arg0, s32 *, 0x24C) >= 0)) {
        if (M2C_FIELD(arg0, void **, 0x20) != (void *) 0) {
        fn_80244A14(M2C_FIELD(arg0, void **, 0x20));
        M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        {
            void *temp = __nw__7TObjectFUl(0x28);
            if (temp != 0) {
                fn_8007FE04(temp, arg0, 0);
            }
        }
        M2C_FIELD(arg0, s32 *, 0x240) = 0x96;
        TPlayerBattleCtrl4P__sub_803112A4(arg0, 7);
        }
    }
}

}
