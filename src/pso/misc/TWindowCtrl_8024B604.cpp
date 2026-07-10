#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_level_up_window__11TWindowCtrlFii(s32 arg0, s32 arg1);
M2C_UNK __ct__17TWindowSetLevelUpFv(void *, s32, s32, s32);
void *__nw__7TObjectFUl(M2C_UNK);

extern s32 tl_07;

void create_level_up_window__11TWindowCtrlFii(s32 arg0, s32 arg1) {
    void *obj = __nw__7TObjectFUl(0x40);
    if (obj != NULL) {
        __ct__17TWindowSetLevelUpFv(obj, tl_07, arg0, arg1);
    }
}

}
