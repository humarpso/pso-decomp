#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TWindowSubComCard__sub_80244A14(void *);
void __dt__7TObjectFv(void *, int);
void __dl__7TObjectFPv(void *);
extern M2C_UNK __vt__16TKeyBoardControl[];

void *__dt__16TKeyBoardControlFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TKeyBoardControl;
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x28)); }
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x24)); }
        if (M2C_FIELD(arg0, void **, 0x20) != NULL) { TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x20)); }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
