#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_8002E5D4(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void TObjPlayer__sub_8002EC28(void *, int);

extern M2C_UNK lbl_80482090[];

void *TObjPlayer__sub_8002E5D4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482090;
        TObjPlayer__sub_8002EC28(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
