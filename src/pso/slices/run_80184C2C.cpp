#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

    extern int lbl_8050DC50[];
int fn_80184C2C(int a0) {  return lbl_8050DC50[a0]; }

    extern int lbl_8050DC38[];
int fn_80184C40(int a0) {  return lbl_8050DC38[a0]; }

extern s32 lbl_805D5B30;

u8 fn_80184C54(void) {
    return (u8) (lbl_805D5B30 != -1);
}

    extern int lbl_8050DC20[];
int fn_80184C6C(int a0) {  return lbl_8050DC20[a0]; }

}
