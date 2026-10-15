#include "types.h"

extern "C" {

s32 get_next_point__14TBoss6PlotFalzFPvPvPv(void *arg0, s16 *arg1, s16 *arg2);
u8 is_flag_set__14TBoss6PlotFalzFv(void);
s32 TBoss6PlotFalz__sub_802AAC74(u8 *arg0);
void TBoss6PlotFalz__sub_802AAC98(void* p);
s32 get_main_phase();
int is_ready__14TBoss6PlotFalzFv(void);
s32 is_split_screen();

extern s32 TBoss6PlotFalz__instance;

u8 is_flag_set__14TBoss6PlotFalzFv(void) {
    return (u8) (TBoss6PlotFalz__instance != 0);
}

s32 get_next_point__14TBoss6PlotFalzFPvPvPv(void *arg0, s16 *arg1, s16 *arg2) {
    if (((s32 (*)(void))TBoss6PlotFalz__sub_802AAC74)() < 1) {
        return 0;
    }
    *arg1 = *(s16 *)((s8 *)arg0 + 0x2C) + *(s32 *)((s8 *)arg0 + 0x3C8);
    *arg2 = *(u16 *)((s8 *)arg0 + 0x1C) + *(s32 *)((s8 *)arg0 + 0x3C8);
    *(s32 *)((s8 *)arg0 + 0x3C8) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C8) + 1);
    return 1;
}

}

#include "types.h"

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
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x3C8);
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
