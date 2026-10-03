#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_802AC040 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
};

extern "C" {
extern const f32 TBoss6PlotFalz__data_805DE09C;
extern const f32 lbl_805DE0C0;
extern const f32 lbl_805DE0C4;
void TBoss6PlotFalz__sub_802AC008(f32 farg0, f32 farg1);
M2C_UNK set_chunk_material_override_pair(int, int, int, void *, void *, int);
M2C_UNK set_chunk_material_color(void *, f32, f32, f32, f32);
M2C_UNK set_chunk_blend(int);
extern f32 TBoss6PlotFalz__data_805D3E54;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
extern f32 TBoss6PlotFalz__data_805DE098;
extern const f32 TBoss6PlotFalz__data_805DE09C;
extern f32 TBoss6PlotFalz__data_805DE0BC;
extern s32 lbl_805DE0C8;
void TBoss6PlotFalz__sub_802AC040(f32 farg0, f32 farg1, f32 farg2, f32 farg3);
extern s32 lbl_805D5550;
bool TBoss6PlotFalz__sub_802AC17C(void);
}

extern "C" {

void update_camera_target__14TBoss6PlotFalzFv(void);

extern f32 TBoss6PlotFalz__data_805D3E54;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
extern f32 TBoss6PlotFalz__data_805DE098;
extern f32 TBoss6PlotFalz__data_805DE0BC;

void update_camera_target__14TBoss6PlotFalzFv(void) {
    if (TBoss6PlotFalz__data_805D3E54 > TBoss6PlotFalz__data_805DE098) {
        lbl_805D7784 = lbl_805D5664;
        lbl_805D7780 = lbl_805D5668;
        some_id_805c6f74 = lbl_805D5660;
    }
    TBoss6PlotFalz__data_805D3E54 = TBoss6PlotFalz__data_805DE0BC;
}
#pragma push
#pragma fp_contract on
void TBoss6PlotFalz__sub_802AC008(f32 farg0, f32 farg1) {
    f32 temp_f3;
    temp_f3 = lbl_805DE0C0 * farg1;
    TBoss6PlotFalz__sub_802AC040(farg0, (lbl_805DE0C4 * farg1) + TBoss6PlotFalz__data_805DE09C, temp_f3, temp_f3);
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_dead_assignments off
#pragma fp_contract on
void TBoss6PlotFalz__sub_802AC040(f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    typedef char sp8_offset[(offsetof(Stack_802AC040, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802AC040, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802AC040, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_802AC040, sp14) == 0xC) ? 1 : -1];
    Stack_802AC040 stack;
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f1;
    s32 temp_r5;
    s32 temp_r8;
    var_f1 = farg0;
    if (((*(const f32 *)&TBoss6PlotFalz__data_805DE0BC) != TBoss6PlotFalz__data_805D3E54) || (var_f1 < (*(const f32 *)&TBoss6PlotFalz__data_805DE098)) || (var_f1 > TBoss6PlotFalz__data_805DE09C) || (farg1 < (*(const f32 *)&TBoss6PlotFalz__data_805DE098)) || (farg1 > TBoss6PlotFalz__data_805DE09C) || (farg2 < (*(const f32 *)&TBoss6PlotFalz__data_805DE098)) || (farg2 > TBoss6PlotFalz__data_805DE09C) || (farg3 < (*(const f32 *)&TBoss6PlotFalz__data_805DE098)) || (farg3 > TBoss6PlotFalz__data_805DE09C)) {
        var_f1 = (*(const f32 *)&TBoss6PlotFalz__data_805DE098);
    }
    TBoss6PlotFalz__data_805D3E54 = var_f1;
    if ((*(const f32 *)&TBoss6PlotFalz__data_805DE098) != var_f1) {
        temp_r8 = some_id_805c6f74;
        temp_r5 = temp_r8 & 0xFFFFFFDF;
        some_id_805c6f74 = temp_r5;
        lbl_805D5660 = temp_r8;
        lbl_805D5664 = lbl_805D7784;
        lbl_805D5668 = lbl_805D7780;
        some_id_805c6f74 = temp_r5 | lbl_805DE0C8;
        set_chunk_material_override_pair((int) (0), (int) (0x800), (int) (temp_r5), (void *) (lbl_805D7780), (void *) (lbl_805D7784), (int) (temp_r8));
        set_chunk_blend((int) (0x2500));
        stack.sp8 = TBoss6PlotFalz__data_805DE09C;
        temp_f2 = -((TBoss6PlotFalz__data_805D3E54 * (TBoss6PlotFalz__data_805DE09C - farg1)) - TBoss6PlotFalz__data_805DE09C);
        temp_f1 = -((TBoss6PlotFalz__data_805D3E54 * (TBoss6PlotFalz__data_805DE09C - farg2)) - TBoss6PlotFalz__data_805DE09C);
        stack.spC = temp_f2;
        stack.sp10 = temp_f1;
        stack.sp14 = -((TBoss6PlotFalz__data_805D3E54 * (TBoss6PlotFalz__data_805DE09C - farg3)) - TBoss6PlotFalz__data_805DE09C);
        set_chunk_material_color((void *) (&stack.sp8), (f32) (temp_f1), (f32) (temp_f2), (f32) (TBoss6PlotFalz__data_805DE09C), (f32) (TBoss6PlotFalz__data_805D3E54));
    }
}
#pragma pop

bool TBoss6PlotFalz__sub_802AC17C(void) {
    return lbl_805D5550 == 0;
}

}
