#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801E24F8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TWindow__close(void *);
M2C_UNK TWindowSubComCard__sub_802A5748(void *);
s32 TWindowSubComCard__sub_802A5794(s32);
s32 TWindowSubComCard__sub_802A57C8(s32);
s32 TWindowSubComCard__sub_802A57FC(s32);
s32 fn_8030C4F8(M2C_UNK, M2C_UNK);
s32 fn_803100EC(void *);
M2C_UNK fn_803100F4();

void fn_8030EE64(void *arg0) {
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x6C));
        M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
    }
    if (TWindowSubComCard__sub_802A57FC(M2C_FIELD(arg0, s32 *, 0x70)) != 0) {
        temp_r3 = TWindowSubComCard__sub_802A5794(M2C_FIELD(arg0, s32 *, 0x70));
        switch (temp_r3) {
        case 1:
            M2C_FIELD(arg0, s32 *, 0x1C) = 7;
            return;
        case 0:
            if (fn_801E24F8(1, 0, 0, 0, 0) == 0) {
                M2C_FIELD(arg0, s32 *, 0x1C) = 9;
                return;
            }
            M2C_FIELD(arg0, s32 *, 0x7C) = fn_8030C4F8(fn_803100F4(), 1);
            M2C_FIELD(arg0, s32 *, 0x1C) = 0xB;
            return;
        }
    } else {
        if (TWindowSubComCard__sub_802A57C8(M2C_FIELD(arg0, s32 *, 0x70)) != 0) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 7;
            return;
        }
        if (fn_803100EC(arg0) < 0xC) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
                TWindow__close(M2C_FIELD(arg0, void **, 0x40));
                M2C_FIELD(arg0, u32 *, 0x40) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        }
    }
}

}
