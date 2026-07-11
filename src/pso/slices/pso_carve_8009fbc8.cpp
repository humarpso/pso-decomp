#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void free__11TOBoss4RockFUi(void *);
void __dt__7TObjectFv(void *, int);
void __dl__7TObjectFPv(void *);
extern M2C_UNK lbl_80490410[];

void *fn_8009FBC8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80490410;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x2C));
        M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x28));
        M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
