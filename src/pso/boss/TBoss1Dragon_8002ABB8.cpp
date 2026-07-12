#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TBoss1Dragon__sub_8002ABB8(void *arg0, s16 arg1);
void *init_base__12TBoss1DragonFPv(void *arg0);
void __dl__7TObjectFPv(void *);
void TObjPlayer__sub_800BC40C(void *, int);
void fn_800BC4C8(void *);

extern M2C_UNK lbl_80481B34[];

void *TBoss1Dragon__sub_8002ABB8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80481B34;
        TObjPlayer__sub_800BC40C(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_80481B34[];

void *init_base__12TBoss1DragonFPv(void *arg0) {
    fn_800BC4C8(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80481B34;
    return arg0;
}

}
