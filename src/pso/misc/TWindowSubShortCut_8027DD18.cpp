#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_8027DD18(void *arg0);
void render__18TWindowSubShortCutFv(void);
s32 TWindowSubComCard__sub_8026CBB8(s32 a0 = 0);
s32 TWindowSubShortCutList__sub_8027E3B4(s32 a0 = 0, s32 a1 = 0);

void fn_8027DD18(void *arg0) {
    s32 tmp = TWindowSubComCard__sub_8026CBB8(0x72);
    TWindowSubShortCutList__sub_8027E3B4(tmp, M2C_FIELD(arg0, s32 *, 0x24));
}
void render__18TWindowSubShortCutFv(void) {  }

}
