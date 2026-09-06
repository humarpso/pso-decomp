#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void set_flag_800__11TBoss7JointFPv(void *);
void set_effect_target_position__8TObjFishFPvPvPv(void *, void *, void *);
void TObjFish__sub_802ECB38(void *);
M2C_UNK TBoss8Dragon__sub_800BB780(void *);
M2C_UNK TObjFish__sub_802EC468(int, f32, f32);
extern const f32 lbl_805DEA44;
extern const f32 lbl_805DEA48;
void TObjFish__sub_802ED86C(u8 *arg0);
}

extern "C" {

void TObjFish__sub_802ED868(void);
void TObjFish__sub_802ED920(void);
void TObjFish__sub_802ED924(void);
void sync_position_vectors__8TObjFishFi(s32 arg0);
s32 VecCopy__FP3VecPC3Vec(s32, s32);

void sync_position_vectors__8TObjFishFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}
void TObjFish__sub_802ED868(void) {  }

void TObjFish__sub_802ED86C(u8 *arg0) {
    s32 temp_r4;
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x2B8) - M2C_FIELD(arg0, s16 *, 0x32C);
    if (M2C_FIELD(arg0, s32 *, 0x628) & 8) {
        M2C_FIELD(arg0, s32 *, 0x6FC) = (s32) (M2C_FIELD(arg0, s32 *, 0x6FC) - temp_r4);
        TObjFish__sub_802EC468((int) (M2C_FIELD(arg0, s32 *, 0xA4) + 0x1C), (f32) (lbl_805DEA44), (f32) (lbl_805DEA48));
        set_effect_target_position__8TObjFishFPvPvPv(arg0, (void *)0x3B213, arg0 + 0x50C);
    } else {
        M2C_FIELD(arg0, s32 *, 0x700) = (s32) (M2C_FIELD(arg0, s32 *, 0x700) - temp_r4);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x700) < 0) {
            M2C_FIELD(arg0, s32 *, 0x700) = 0;
            TObjFish__sub_802ECB38(arg0);
        }
    }
    M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s16 *, 0x2B8);
    set_flag_800__11TBoss7JointFPv(arg0);
    TBoss8Dragon__sub_800BB780((void *) (arg0));
}

void TObjFish__sub_802ED920(void) {  }
void TObjFish__sub_802ED924(void) {  }

}
