#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void state_orbit__13TObjEneMe1GeeFPvi(void *arg0, s32 arg1);
M2C_UNK TObjEneDD__sub_800BAC14(void *, f32, f32, f32);
M2C_UNK fn_80143504();
f32 fn_803D64C0(s32, f32);
f32 fn_803D64DC(s32);

extern const f32 lbl_805DA0C4;

void state_orbit__13TObjEneMe1GeeFPvi(void *arg0, s32 arg1) {
    f32 temp_f1;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x3C);
        M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0x3EC));
        M2C_FIELD(arg0, f32 *, 0x448) = fn_803D64C0(M2C_FIELD(arg0, s32 *, 0x60), temp_f1);
        M2C_FIELD(arg0, f32 *, 0x44C) = fn_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
        return;
    case 0:
        fn_80143504();
        M2C_FIELD(arg0, f32 *, 0x3F8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3EC));
        M2C_FIELD(arg0, f32 *, 0x300) = (f32) M2C_FIELD(arg0, f32 *, 0x3F8);
        TObjEneDD__sub_800BAC14(arg0, M2C_FIELD(arg0, f32 *, 0x448), M2C_FIELD(arg0, f32 *, 0x44C), lbl_805DA0C4);
    case 3:
    case 5:
    case 1:
        return;
    }
}

}
