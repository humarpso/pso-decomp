#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__14TWindowMessageFv(void *arg0, s16 arg1);
void free__11TOBoss4RockFUi(void *);
void __dl__7TObjectFPv(void *);
void TWindowAddition__sub_802443F0(void *, int);

extern M2C_UNK __vt__14TWindowMessage[];

void *__dt__14TWindowMessageFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TWindowMessage;
        if (M2C_FIELD(arg0, void **, 0x7C) != NULL) { free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x7C)); }
        TWindowAddition__sub_802443F0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
