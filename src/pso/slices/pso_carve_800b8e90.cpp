#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TOBoss4Rock__sub_80147A80(void *);
void __dt__10TObjMotionFv(void *, int);
void __dl__7TObjectFPv(void *);
extern M2C_UNK __vt__10TObjCGrass[];

void *__dt__10TObjCGrassFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TObjCGrass;
        if (M2C_FIELD(arg0, void **, 0xFC) != NULL) { TOBoss4Rock__sub_80147A80(M2C_FIELD(arg0, void **, 0xFC)); }
        __dt__10TObjMotionFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
