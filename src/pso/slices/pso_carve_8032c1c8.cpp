#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__sub_8007341C(u32);
s32 fn_801A6D60(void *, M2C_UNK);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK TWindow__close(void *);
s32 TWindowSubComCard__sub_80265BF8(u32);
u32 TAdYesNoBaseGC__sub_8032C0B4();
u32 TAdYesNoBaseGC__sub_8032C118(void *);
extern const f64 lbl_804772F0;
extern s8 lbl_8050E208[];
extern s8 lbl_8050E3B8[];
extern const f32 lbl_805DF78C;

struct VtBase8032C1C8 { char pad[0x18]; };
struct VtObj8032C1C8 : VtBase8032C1C8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

void TAdYesNoBaseGC__vt6(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r4;

    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, u32 *, 0x40) = TAdYesNoBaseGC__sub_8032C0B4();
        M2C_FIELD(arg0, u32 *, 0x44) = TAdYesNoBaseGC__sub_8032C118(arg0);
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        break;
    case 1:
        if (TWindowSubComCard__sub_8007341C(M2C_FIELD(arg0, u32 *, 0x44)) != 0) {
            temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x44));
            switch (temp_r3) {
            case 0:
                ((VtObj8032C1C8*)arg0)->m6();
                M2C_FIELD(arg0, s32 *, 0x1C) = 2;
                M2C_FIELD(arg0, s32 *, 0x24) = 3;
                break;
            case 1:
                ((VtObj8032C1C8*)arg0)->m7();
                M2C_FIELD(arg0, s32 *, 0x1C) = 2;
                M2C_FIELD(arg0, s32 *, 0x24) = 4;
                break;
            }
        } else if ((TWindowShortListCtrl__check_controller_button(lbl_8050E3B8 + 0x20, 2) != 0) || (fn_801A6D60(lbl_8050E208 + 0x160, 2) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
            M2C_FIELD(arg0, s32 *, 0x24) = 4;
        }
        break;
    case 2:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x44));
            M2C_FIELD(arg0, u32 *, 0x44) = 0U;
        }
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x28) + 1;
        M2C_FIELD(arg0, s32 *, 0x28) = temp_r4;
        if ((f32) temp_r4 > lbl_805DF78C) {
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x24);
        }
        break;
    case 3:
        ((VtObj8032C1C8*)arg0)->m4();
        break;
    case 4:
        ((VtObj8032C1C8*)arg0)->m5();
        break;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) != (s32) M2C_FIELD(arg0, s32 *, 0x1C)) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
}

}
