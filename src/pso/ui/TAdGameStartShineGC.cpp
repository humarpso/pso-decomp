#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdGameStartShineGC__vt2(void *arg0);

s32 fn_8001A430();
M2C_UNK fn_8034A938(void *);
M2C_UNK abs__4cXyzCFv(M2C_UNK, M2C_UNK);

void TAdGameStartShineGC__vt2(void *arg0) {
    if ((fn_8001A430() != 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x7C) != 0)) {
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 0xA);
        fn_8034A938(arg0);
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 6);
    }
}

}
