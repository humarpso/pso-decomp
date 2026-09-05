#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 objInBand__FP7GameObjf(f32);
M2C_UNK spawn_effect__12TBoss8DragonFii(void *, int);
extern const f32 TBoss8Dragon__data_805DEDC8;
void TBoss8Dragon__sub_802FC220(s32 arg0);
}

extern "C" {

void TBoss8Dragon__sub_802FC220(s32 arg0) {
    if (objInBand__FP7GameObjf((f32) (TBoss8Dragon__data_805DEDC8)) != 0) {
        spawn_effect__12TBoss8DragonFii((void *) (arg0), (int) (0x4003A804));
    }
}

}
