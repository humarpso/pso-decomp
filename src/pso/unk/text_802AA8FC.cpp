#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_next_point__14TBoss6PlotFalzFPvPvPv(void *arg0, s16 *arg1, s16 *arg2);
u8 is_flag_set__14TBoss6PlotFalzFv(void);
s32 TBoss6PlotFalz__sub_802AAC74(u8 *arg0);
void TBoss6PlotFalz__sub_802AAC98(void* p);
s32 get_main_phase();
int is_ready__14TBoss6PlotFalzFv(void);
s32 is_split_screen();

extern s32 TBoss6PlotFalz__data_805D66EC;

u8 is_flag_set__14TBoss6PlotFalzFv(void) {
    return (u8) (TBoss6PlotFalz__data_805D66EC != 0);
}

s32 get_next_point__14TBoss6PlotFalzFPvPvPv(void *arg0, s16 *arg1, s16 *arg2) {
    if (((s32 (*)(void))TBoss6PlotFalz__sub_802AAC74)() < 1) {
        return 0;
    }
    *arg1 = M2C_FIELD(arg0, s16 *, 0x2C) + M2C_FIELD(arg0, s32 *, 0x3C8);
    *arg2 = M2C_FIELD(arg0, u16 *, 0x1C) + M2C_FIELD(arg0, s32 *, 0x3C8);
    M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) + 1);
    return 1;
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
}

extern "C" {

void TBoss6PlotFalz__sub_802AAC98(void* p);
u8 is_ending_or_split_screen__14TBoss6PlotFalzFv(void);
int is_ready__14TBoss6PlotFalzFv(void);
s32 get_main_phase();
s32 is_split_screen();

s32 TBoss6PlotFalz__sub_802AAC74(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3C8);
    if ((temp_r0 < 1) || (temp_r0 > 0x1FD)) {
        return 0;
    }
    return 0x1FD - temp_r0;
}

void TBoss6PlotFalz__sub_802AAC98(void* p) { *(s32*)((char*)p + 0x3c8) = 1; }
u8 is_ending_or_split_screen__14TBoss6PlotFalzFv(void) {
    s32 var_r31;

    var_r31 = 0;
    if ((get_main_phase() == 0xF) || (is_split_screen() != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}
int is_ready__14TBoss6PlotFalzFv(void) { return 0; }

}
