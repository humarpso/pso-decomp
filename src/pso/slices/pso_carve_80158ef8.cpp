#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TOBoss4Rock__sub_80147A80(void *);
void __dt__7TOBoss4Fv(void *, int);
void __dl__7TObjectFPv(void *);
extern M2C_UNK __vt__11TOBoss4Rock[];

void *__dt__11TOBoss4RockFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TOBoss4Rock;
        if (M2C_FIELD(arg0, void **, 0xA0) != NULL) { TOBoss4Rock__sub_80147A80(M2C_FIELD(arg0, void **, 0xA0)); }
        if (M2C_FIELD(arg0, void **, 0xA4) != NULL) { TOBoss4Rock__sub_80147A80(M2C_FIELD(arg0, void **, 0xA4)); }
        if (M2C_FIELD(arg0, void **, 0xA8) != NULL) { TOBoss4Rock__sub_80147A80(M2C_FIELD(arg0, void **, 0xA8)); }
        if (M2C_FIELD(arg0, void **, 0xAC) != NULL) { TOBoss4Rock__sub_80147A80(M2C_FIELD(arg0, void **, 0xAC)); }
        if (M2C_FIELD(arg0, void **, 0xB0) != NULL) { TOBoss4Rock__sub_80147A80(M2C_FIELD(arg0, void **, 0xB0)); }
        if (M2C_FIELD(arg0, void **, 0xB4) != NULL) { TOBoss4Rock__sub_80147A80(M2C_FIELD(arg0, void **, 0xB4)); }
        __dt__7TOBoss4Fv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
