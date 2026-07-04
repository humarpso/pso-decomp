#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_802A5748(void *);
s32 TWindowSubComCard__sub_802A5794(u32);
s32 TWindowSubComCard__sub_802A57FC(u32);
s32 fn_802D50A0(s32);
s32 fn_802E00C4(s32);
extern M2C_UNK lbl_8050E3B8[];

void fn_802DC760(void *arg0) {
    s32 temp_r3;

    if (TWindowShortListCtrl__check_controller_button((s8 *)lbl_8050E3B8 + 0x20, 2) != 0) {
        fn_8022675C(0x52F16, 0, 0, 0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
            TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x94));
            M2C_FIELD(arg0, u32 *, 0x94) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x58) = (s32) (M2C_FIELD(arg0, s32 *, 0x58) + 1);
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1F;
        return;
    }
    if (fn_802E00C4(M2C_FIELD(arg0, s32 *, 0x6C)) < 0x14) {
        if (fn_802D50A0(M2C_FIELD(arg0, s32 *, 0x68)) < 0xE) {
            M2C_FIELD(arg0, s32 *, 0x58) = 0;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
            TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x94));
            M2C_FIELD(arg0, u32 *, 0x94) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1D;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC(M2C_FIELD(arg0, u32 *, 0x94)) != 0) {
        temp_r3 = TWindowSubComCard__sub_802A5794(M2C_FIELD(arg0, u32 *, 0x94));
        switch (temp_r3) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x20) = 0x21;
            return;
        case 1:
            if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
                TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x94));
                M2C_FIELD(arg0, u32 *, 0x94) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x58) = (s32) (M2C_FIELD(arg0, s32 *, 0x58) + 1);
            M2C_FIELD(arg0, s32 *, 0x20) = 0x1F;
            break;
        }
    }
}

}
