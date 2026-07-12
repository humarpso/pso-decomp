#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_attack_state__14TBoss7CrawfishFPv(void *arg0);
s32 TBoss7Crawfish__sub_80308AA8(void *);
M2C_UNK TBoss7Crawfish__sub_80308F8C(void *, M2C_UNK);
s16 TObjPlayer__sub_801C0004(void *);
M2C_UNK TBoss7Crawfish__sub_803086A8(void *);
M2C_UNK TBoss7Crawfish__sub_8030880C(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(void *, f32);

extern const f32 lbl_805DF0F8;

void update_attack_state__14TBoss7CrawfishFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    void *temp_r4;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3C8) - 1;
    M2C_FIELD(arg0, s32 *, 0x3C8) = temp_r0;
    if (temp_r0 < 0) {
        TBoss7Crawfish__sub_80308F8C(arg0, 1);
    }
    if ((TObjPlayer__sub_801C0004(arg0) == 2) && (objInBand__FP7GameObjf(arg0, lbl_805DF0F8) != 0)) {
        temp_r4 = M2C_FIELD(arg0, void **, 0xA4);
        if (M2C_FIELD(temp_r4, s32 *, 0x18) & 0x02000000) {
            M2C_FIELD(temp_r4, s32 *, 0x18) &= ~0x02000000;
        }
        if (TBoss7Crawfish__sub_80308AA8(arg0) != 0) {
            TBoss7Crawfish__sub_8030880C(arg0, 0x3A80A);
        } else {
            TBoss7Crawfish__sub_8030880C(arg0, 0x3A80B);
        }
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 0x02000000) {
        TBoss7Crawfish__sub_803086A8(arg0);
    }
}

}
