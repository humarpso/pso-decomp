#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjFish__sub_802EC330(u8 *arg0);
M2C_UNK TBoss4Zako__sub_803D8910(int, void *);
M2C_UNK TObjEneDD__sub_800B9BEC(void *, void *, f32);
M2C_UNK VecCopy__FP3VecPC3Vec(int, void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK spawn_via_trap__8TObjFishFiii(void *, int, void *);

extern const f32 lbl_805DEA14;
extern const f32 lbl_805DEA30;
extern const f32 lbl_805DEA58;
extern const f32 lbl_805DEB68;

void TObjFish__sub_802EC330(u8 *arg0) {
    u8 *temp_r31;

    TObjEneDD__sub_800B9BEC((void *) (arg0 + 0x38), (void *) (arg0 + 0x50C), (f32) (lbl_805DEB68));
    TObjEneDD__sub_800B9BEC((void *) (arg0 + 0x4C4), (void *) (arg0 + 0x518), (f32) (lbl_805DEB68));
    temp_r31 = arg0 + 0x524;
    VecCopy__FP3VecPC3Vec((int) (temp_r31), (void *) (arg0 + 0x518));
    TBoss4Zako__sub_803D8910((int) (temp_r31), (void *) (arg0 + 0x518));
    M2C_FIELD(temp_r31, f32 *, 0) = (f32) (M2C_FIELD(temp_r31, f32 *, 0) * lbl_805DEA14);
    M2C_FIELD(temp_r31, f32 *, 4) = (f32) (M2C_FIELD(temp_r31, f32 *, 4) * lbl_805DEA14);
    M2C_FIELD(temp_r31, f32 *, 8) = (f32) (M2C_FIELD(temp_r31, f32 *, 8) * lbl_805DEA14);
    if ((M2C_FIELD(arg0, s32 *, 0x628) & 0x100) && ((objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DEA58)) != 0) || (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DEA30)) != 0))) {
        M2C_FIELD(arg0, s32 *, 0x6BC) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6BC) <= 0x10) {
        if (M2C_FIELD(arg0, s32 *, 0x628) & 0x400) {
            spawn_via_trap__8TObjFishFiii((void *) (arg0), (int) (0x39704), (void *) (arg0 + 0x524));
        } else {
            spawn_via_trap__8TObjFishFiii((void *) (arg0), (int) (0x3A303), (void *) (arg0 + 0x524));
        }
        M2C_FIELD(arg0, s32 *, 0x6BC) = (s32) (M2C_FIELD(arg0, s32 *, 0x6BC) + 1);
    }
    if (M2C_FIELD(arg0, s32 *, 0x628) & 0x200) {
        spawn_via_trap__8TObjFishFiii((void *) (arg0), (int) (0x39F08), (void *) (arg0 + 0x50C));
    }
}

}
