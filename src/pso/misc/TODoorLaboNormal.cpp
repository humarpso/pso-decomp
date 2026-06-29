#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TODoorLaboNormal__vt19(void);
s32 TODoorLaboNormal__vt20(void);

extern s32 lbl_805D6628;

s32 TODoorLaboNormal__vt20(void) {
    return lbl_805D6628;
}

extern s32 lbl_805D662C;

s32 TODoorLaboNormal__vt19(void) {
    return lbl_805D662C;
}

}
