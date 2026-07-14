#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void activate_mirage__23TObjEneMe3ShinowaMirageFPvi(u8 *arg0, s32 arg1);
M2C_UNK TBoss1Dragon__sub_80143504(void *, int);
M2C_UNK TBoss8Dragon__sub_800B9958(void *, int);
M2C_UNK TObjEneDD__sub_800BBA18(void *, int);
M2C_UNK TObjEneMe3ShinowaMirage__sub_800E3AFC(void *);
s32 TObjEneMe3ShinowaReal__sub_800E45CC(int, int);
M2C_UNK TObjPlayer__sub_80020898(void *, void *);
s32 TPhotonMylla__sub_80154CB4(int);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

extern const f64 lbl_8043CFA0;
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5B8;

void activate_mirage__23TObjEneMe3ShinowaMirageFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r4_2;

    temp_r3 = TPhotonMylla__sub_80154CB4((int) (M2C_FIELD(arg0, u16 *, 0x42C)));
    if (temp_r3 != 0) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (temp_r3 + 0x38));
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x44), (void *) (arg0 + 0x38));
        VecCopy__FP3VecPC3Vec((void *) (M2C_FIELD(arg0, s32 *, 0xA4) + 0x1C), (void *) (arg0 + 0x38));
        TObjPlayer__sub_80020898((void *) (arg0 + 0x5C), (void *) (temp_r3 + 0x5C));
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFF7FF;
        M2C_FIELD(arg0, s32 *, 0x30) = temp_r4;
        M2C_FIELD(arg0, s32 *, 0x30) = 0x20000000;
        M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s16 *, 0x2B8);
        M2C_FIELD(arg0, s32 *, 0x3D4) = arg1;
        TBoss8Dragon__sub_800B9958((void *) (arg0), (int) (TObjEneMe3ShinowaReal__sub_800E45CC((int) (temp_r3), (int) (temp_r4))));
        M2C_FIELD(arg0, f32 *, 0x430) = (f32) TObjEneMe3ShinowaMirage__data_805DA5B8;
        temp_r4_2 = M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFDFF;
        M2C_FIELD(arg0, s32 *, 0x3C4) = temp_r4_2;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xA;
        TBoss1Dragon__sub_80143504((void *) (arg0), (int) (temp_r4_2));
        M2C_FIELD(arg0, f32 *, 0xC0) = (f32) (u32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), s32 *, 4) - 1);
        TObjEneDD__sub_800BBA18((void *) (arg0), (int) (8));
        TObjEneMe3ShinowaMirage__sub_800E3AFC((void *) (arg0));
    }
}

}
