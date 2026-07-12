#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void enter_scene__10TSceneSoraFi(s32 arg0);
M2C_UNK TCameraCtrl__sub_801A7B14();
M2C_UNK TObjPlayer__sub_800D8A60();
M2C_UNK apply_all_default__8TFogCtrlFv(s32);
M2C_UNK disallow_rendering__7TObjectFv(void *);
M2C_UNK reset_state__10TSceneSoraFv(s32);

extern void *tl_05;

void enter_scene__10TSceneSoraFi(s32 arg0) {
    TCameraCtrl__sub_801A7B14();
    reset_state__10TSceneSoraFv(arg0);
    apply_all_default__8TFogCtrlFv(arg0);
    TObjPlayer__sub_800D8A60();
    if (tl_05 != NULL) {
        disallow_rendering__7TObjectFv(tl_05);
    }
}

}
