#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_802ABCDC {
    s16 spC;
    u8 pad_E[0x4];
    s16 sp12;
    u8 pad_14[0x38];
    u8 sp4C;
};

struct Stack_802ABC64 {
    s16 spC;
    u8 pad_E[0x4];
    s16 sp12;
    s16 sp14;
    u8 pad_16[0x36];
    u8 sp4C;
};

extern "C" {
M2C_UNK TBoss4DarkFalz__sub_8004B4F0(void *, void *);
u32 create__11TBoss6Type1Fi(void *, int);
extern u32 TBoss6PlotFalz__data_805D66F0;
void TBoss6PlotFalz__sub_802ABCDC(u8 *arg0);
M2C_UNK TBoss4DarkFalz__sub_8004B4F0(void *, void *);
u32 create__11TBoss6Type2Fi(void *, int);
extern u32 TBoss6PlotFalz__data_805D66F4;
void TBoss6PlotFalz__sub_802ABC64(u8 *arg0);
s32 TBoss6Type1__sub_802ABDEC(void *);
extern const f32 lbl_805DE0B4;
f32 TBoss6Mine__sub_802ABD88(s32 *arg0);
}

extern "C" {

void ensure_field384__14TBoss6PlotFalzFPv(void *arg0);
void release_object__14TBoss6PlotFalzFPv(void* p);
void reset_fish_globals__8TObjFishFv(void);
u32 create__10TBoss6TubeFPv();
int queue_destruction__7TObjectFv(void*);

void release_object__14TBoss6PlotFalzFPv(void* p) { if (*(unsigned int*)((char*)p + 0x384) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x384)); *(int*)((char*)p + 0x384) = 0; } }

void TBoss6PlotFalz__sub_802ABC64(u8 *arg0) {
    Stack_802ABC64 stack;
    u8 *sp8;
    u16 temp_r4;
    if ((u32) TBoss6PlotFalz__data_805D66F4 == 0U) {
        sp8 = (u8 *)(arg0);
        stack.sp4C = M2C_FIELD(arg0, u8 *, 0x37C);
        TBoss4DarkFalz__sub_8004B4F0((void *) (&stack.spC), (void *) (arg0 + 0x388));
        stack.sp14 = 1;
        stack.spC = M2C_FIELD(arg0, s16 *, 0x2C) + 0x1FF;
        temp_r4 = M2C_FIELD(arg0, u16 *, 0x1C);
        stack.sp12 = temp_r4 + 0x1FF;
        TBoss6PlotFalz__data_805D66F4 = create__11TBoss6Type2Fi((void *) (&sp8), (int) (temp_r4));
    }
}

void TBoss6PlotFalz__sub_802ABCDC(u8 *arg0) {
    Stack_802ABCDC stack;
    u8 *sp8;
    u16 temp_r4;
    if ((u32) TBoss6PlotFalz__data_805D66F0 == 0U) {
        sp8 = (u8 *)(arg0);
        stack.sp4C = M2C_FIELD(arg0, u8 *, 0x37C);
        TBoss4DarkFalz__sub_8004B4F0((void *) (&stack.spC), (void *) (arg0 + 0x388));
        stack.spC = M2C_FIELD(arg0, s16 *, 0x2C) + 0x200;
        temp_r4 = M2C_FIELD(arg0, u16 *, 0x1C);
        stack.sp12 = temp_r4 + 0x200;
        TBoss6PlotFalz__data_805D66F0 = create__11TBoss6Type1Fi((void *) (&sp8), (int) (temp_r4));
    }
}

void ensure_field384__14TBoss6PlotFalzFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x384) == 0U) {
        M2C_FIELD(arg0, u32 *, 0x384) = create__10TBoss6TubeFPv();
    }
}

    extern int lbl_805D5660;
    extern int lbl_805D5664;
    extern int lbl_805D5668;
    extern int lbl_805D7780;
    extern int lbl_805D7784;
    extern int some_id_805c6f74;

f32 TBoss6Mine__sub_802ABD88(s32 *arg0) {
    *arg0 = TBoss6Type1__sub_802ABDEC((void *) (*arg0));
    return (f32) (*arg0 & 0x7FFF) / lbl_805DE0B4;
}

void reset_fish_globals__8TObjFishFv(void) { lbl_805D7784 = lbl_805D5664; lbl_805D7780 = lbl_805D5668; some_id_805c6f74 = lbl_805D5660; }

}
