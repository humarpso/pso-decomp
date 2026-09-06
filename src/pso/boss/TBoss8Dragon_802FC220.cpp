#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK spawn_effect__12TBoss8DragonFii(void *, int);
extern const f32 TBoss8Dragon__data_805DEDC8;
void TBoss8Dragon__sub_802FC220(s32 arg0);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK spawn_effect__12TBoss8DragonFii(void *, int);
extern const f32 TBoss8Dragon__data_805DED90;
extern const f32 lbl_805DEED0;
void TBoss8Dragon__sub_802FC268(u8 *arg0);
}

extern "C" {

void TBoss8Dragon__sub_802FC220(s32 arg0) {
    if (objInBand__FP7GameObjf((void *)arg0, (f32) (TBoss8Dragon__data_805DEDC8)) != 0) {
        spawn_effect__12TBoss8DragonFii((void *) (arg0), (int) (0x4003A804));
    }
}
void TBoss8Dragon__sub_802FC268(u8 *arg0) {
    if ((objInBand__FP7GameObjf(arg0, TBoss8Dragon__data_805DED90) != 0) || (objInBand__FP7GameObjf(arg0, lbl_805DEED0) != 0)) {
        spawn_effect__12TBoss8DragonFii((void *)((s32) arg0), (int)(0x4003A801));
    }
}

}
