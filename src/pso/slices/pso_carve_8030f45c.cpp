#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TWindow__close(void *);
M2C_UNK TWindowSubComCard__sub_802A5748(void *);
M2C_UNK TAdPlyChrSelPlateGC__sub_802C4D88(s32);
M2C_UNK fn_802C7498(s32, M2C_UNK);
M2C_UNK TAdSubPlyItemGC__sub_802D6D88(s32);
u32 fn_8030CB08(M2C_UNK, M2C_UNK, M2C_UNK);
s32 fn_803100EC(void *);
M2C_UNK fn_803100F4();
M2C_UNK TAdChrSelMovePlateGC__sub_8032572C(s32);

void fn_8030F45C(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x44));
        M2C_FIELD(arg0, u32 *, 0x44) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x48));
        M2C_FIELD(arg0, u32 *, 0x48) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x4C));
        M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x6C));
        M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x70));
        M2C_FIELD(arg0, u32 *, 0x70) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x74));
        M2C_FIELD(arg0, u32 *, 0x74) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x78));
        M2C_FIELD(arg0, u32 *, 0x78) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x7C));
        M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x50));
        M2C_FIELD(arg0, u32 *, 0x50) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x54));
        M2C_FIELD(arg0, u32 *, 0x54) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x58));
        M2C_FIELD(arg0, u32 *, 0x58) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x5C));
        M2C_FIELD(arg0, u32 *, 0x5C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x60) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x60));
        M2C_FIELD(arg0, u32 *, 0x60) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x64));
        M2C_FIELD(arg0, u32 *, 0x64) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x68));
        M2C_FIELD(arg0, u32 *, 0x68) = 0U;
    }
    TAdPlyChrSelPlateGC__sub_802C4D88(M2C_FIELD(arg0, s32 *, 0x2C));
    TAdSubPlyItemGC__sub_802D6D88(M2C_FIELD(arg0, s32 *, 0x30));
    TAdChrSelMovePlateGC__sub_8032572C(M2C_FIELD(arg0, s32 *, 0x34));
    fn_802C7498(M2C_FIELD(arg0, s32 *, 0x28), 2);
    if (fn_803100EC(arg0) > 0xD) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        return;
    }
    if (fn_803100EC(arg0) < 0xC) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x40));
            M2C_FIELD(arg0, u32 *, 0x40) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x24) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x40) == 0U)) {
        fn_803100F4();
        M2C_FIELD(arg0, u32 *, 0x40) = fn_8030CB08(fn_803100F4(), 1, 1);
    }
}

}
