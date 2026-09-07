#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TObjNewFloorWin__sub_8007410C(void);
s32 TWindowSubComCard__sub_80244774(void);
M2C_UNK TWindowSubStatusDisp__sub_80244494(int, int, int);
void fn_8024450C(s32 arg0);
u32 TWindowSubStatusDisp__sub_80144D68(void *);
s32 __nw__7TObjectFUl(int);
s32 TWindowArea__ct();
M2C_UNK fn_802449E0(int);
u8 *fn_8026D504(s32);
M2C_UNK set_entry_display_value__20TWindowSubStatusDispFPvi(int, void *);
extern const f32 lbl_805DCABC;
extern const f32 lbl_805DCAC0;
s32 fn_80244554(s32 arg0);
}

extern "C" {

void fn_8024450C(s32 arg0) {
    s32 var_r30;
    s32 var_r31;
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    var_r30 = arg0;
    var_r31 = TObjNewFloorWin__sub_8007410C();
    var_r3 = var_r30;
    var_r5 = TWindowSubComCard__sub_80244774();
    var_r4 = var_r31;
    TWindowSubStatusDisp__sub_80244494((int) (var_r3), (int) (var_r4), (int) (var_r5));
}
#pragma push
#pragma fp_contract on
s32 fn_80244554(s32 arg0) {
    s32 var_r30;
    u8 *temp_r31;
    var_r30 = __nw__7TObjectFUl((int) (0x64));
    if (var_r30 != 0) {
        var_r30 = TWindowArea__ct();
    }
    set_entry_display_value__20TWindowSubStatusDispFPvi((int) (var_r30), (void *) (arg0));
    fn_802449E0((int) (var_r30));
    temp_r31 = (u8 *)(fn_8026D504(var_r30));
    M2C_FIELD(temp_r31, f32 *, 8) = (f32) -((lbl_805DCAC0 * (f32) TWindowSubStatusDisp__sub_80144D68((void *) (arg0))) - lbl_805DCABC);
    return var_r30;
}
#pragma pop

}
