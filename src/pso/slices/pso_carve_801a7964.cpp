#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK allow_rendering__7TObjectFv(void *);
M2C_UNK TObjPlayer__sub_800D8A6C();
M2C_UNK TFogCtrl__sub_801A7918(void *);
M2C_UNK update__10TSceneSoraFv(void *);
M2C_UNK fn_801A7AF0();
extern void *tl_05;

void fn_801A7964(void *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x154) & 1)) {
        fn_801A7AF0();
        update__10TSceneSoraFv(arg0);
        TFogCtrl__sub_801A7918(arg0);
        TObjPlayer__sub_800D8A6C();
    }
    if (tl_05 != 0) {
        allow_rendering__7TObjectFv(tl_05);
    }
}

}
