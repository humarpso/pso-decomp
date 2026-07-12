#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__17TWindowReturnCityFv(void *arg0, s16 arg1);
void close__17TWindowSubComCardFPv(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK __vt__17TWindowReturnCity[];

void *__dt__17TWindowReturnCityFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TWindowReturnCity;
        if (M2C_FIELD(arg0, void **, 0x1C) != NULL) { close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x1C)); M2C_FIELD(arg0, M2C_UNK *, 0x1C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
