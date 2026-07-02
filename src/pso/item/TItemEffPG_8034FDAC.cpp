#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemEffPG__sub_8034FDAC(void *arg0);
void *TItemEffPG__sub_8034FDD0(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__10TItemEffPGFv(void *, int);

s32 TItemEffPG__sub_8034FDAC(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xD4);
    if (temp_r4 > 0) {
        M2C_FIELD(arg0, s32 *, 0xD4) = (s32) (temp_r4 - 1);
        return 1;
    }
    return 0;
}

extern M2C_UNK lbl_804F0C08[];

void *TItemEffPG__sub_8034FDD0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0C08;
        __dt__10TItemEffPGFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
