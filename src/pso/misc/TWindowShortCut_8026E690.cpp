#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__15TWindowShortCutFv(void *arg0, s16 arg1);
void TWindowSubComCard__sub_80244A14(void *);
void __dl__7TObjectFPv(void *);
void fn_80246674(void *, int);
void fn_80288070(void *, int);

extern M2C_UNK __vt__15TWindowShortCut[];

void *__dt__15TWindowShortCutFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TWindowShortCut;
        if (M2C_FIELD(arg0, void **, 0x68) != NULL) { TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x68)); M2C_FIELD(arg0, M2C_UNK *, 0x68) = 0; }
        if (M2C_FIELD(arg0, void **, 0x64) != NULL) { TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x64)); M2C_FIELD(arg0, M2C_UNK *, 0x64) = 0; }
        fn_80288070(M2C_FIELD(arg0, void **, 0x60), 1);
        fn_80246674(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
