#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TBoss4Type2__sub_80052B6C(void *arg0);
void fn_800511EC(void *, void *);

void TBoss4Type2__sub_80052B6C(void *arg0) {
    fn_800511EC(arg0, (void *)((char *)arg0 + 952));
    M2C_FIELD(arg0, u32 *, 0x398) = 75;
}

}
