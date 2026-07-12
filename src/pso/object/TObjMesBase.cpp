#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjMesBase__vt12(void);
void TObjMesBase__sub_80194C98(void *arg0);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *obj);

void TObjMesBase__sub_80194C98(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0xAC);
    if ((p != 0) && (all_parents_unqueued_for_destruction__7TObjectFv(p) == 0)) {
        M2C_FIELD(arg0, u32 *, 0xAC) = 0U;
        M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    }
}
void TObjMesBase__vt12(void) {  }

}
