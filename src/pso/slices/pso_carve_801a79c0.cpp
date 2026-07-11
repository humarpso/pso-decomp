#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK disallow_rendering__7TObjectFv(void *);
M2C_UNK fn_800D8A60();
M2C_UNK fn_801A793C(s32);
M2C_UNK reset_state__10TSceneSoraFv(s32);
M2C_UNK fn_801A7B14();
extern void *tl_05;

void fn_801A79C0(s32 arg0) {
    fn_801A7B14();
    reset_state__10TSceneSoraFv(arg0);
    fn_801A793C(arg0);
    fn_800D8A60();
    if (tl_05 != NULL) {
        disallow_rendering__7TObjectFv(tl_05);
    }
}

}
