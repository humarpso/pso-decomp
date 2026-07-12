#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__19TAdGameStartShineGCFv(void *arg0);

s32 TMainTask__sub_8001A430();
M2C_UNK render_status_box__20TWindowSubStatusDispFPv(void *);
M2C_UNK abs__4cXyzCFv(M2C_UNK, M2C_UNK);

void render__19TAdGameStartShineGCFv(void *arg0) {
    if ((TMainTask__sub_8001A430() != 1) && ((s32) M2C_FIELD(arg0, s32 *, 0x7C) != 0)) {
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 0xA);
        render_status_box__20TWindowSubStatusDispFPv(arg0);
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 6);
    }
}

}
