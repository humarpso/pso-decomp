#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss7Joint__vt60(u8 *arg0);
M2C_UNK TBoss7Joint__sub_802E7B00(int);
u32 TBoss7Joint__sub_802EE814(void *, int);
M2C_UNK TBoss7Joint__sub_802EE820(void *);
M2C_UNK TBoss8Dragon__sub_800BB780(void *);
M2C_UNK TObjFish__sub_802EC468(void *, f32, f32);
M2C_UNK TObjFish__sub_802ECB70(int, int, int);

extern const f32 lbl_805DEBB0;
extern const f32 lbl_805DEBB4;

void TBoss7Joint__vt60(u8 *arg0) {
    s16 temp_r4;
    s32 temp_r31;

    temp_r4 = M2C_FIELD(arg0, s16 *, 0x32C);
    temp_r31 = M2C_FIELD(arg0, s16 *, 0x2B8) - temp_r4;
    if (TBoss7Joint__sub_802EE814((void *) (arg0), (int) (temp_r4)) != 0U) {
        TObjFish__sub_802EC468((void *) (arg0 + 0x38), (f32) (lbl_805DEBB0), (f32) (lbl_805DEBB4));
        TObjFish__sub_802ECB70((int) (M2C_FIELD(arg0, s32 *, 0x10)), (int) (temp_r31), (int) (M2C_FIELD(arg0, u16 *, 0x2D4)));
    } else {
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) - temp_r31);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C4) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x3C4) = 0;
            TBoss7Joint__sub_802EE820((void *) (arg0));
        }
    }
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s16 *, 0x2B8);
    TBoss7Joint__sub_802E7B00((int) (M2C_FIELD(arg0, s32 *, 0x10)));
    TBoss8Dragon__sub_800BB780((void *) (arg0));
}

}
