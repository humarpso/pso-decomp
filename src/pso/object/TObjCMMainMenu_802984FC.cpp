#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjCMMainMenu__vt1(void);
void TObjCMMainMenu__vt5(void *arg0);
void TObjCMMainMenu__vt6(void *arg0);

extern s32 TObjCMMainMenu__data_805D659C;

void TObjCMMainMenu__vt6(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x30) - 1;
    M2C_FIELD(arg0, s32 *, 0x30) = temp_r0;
    if (temp_r0 < 0) {
        TObjCMMainMenu__data_805D659C = 4;
    }
}

extern s32 TObjCMMainMenu__data_805D659C;

void TObjCMMainMenu__vt5(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x30) - 1;
    M2C_FIELD(arg0, s32 *, 0x30) = temp_r0;
    if (temp_r0 < 0) {
        TObjCMMainMenu__data_805D659C = 3;
    }
}

void TObjCMMainMenu__vt1(void) {  }

}
