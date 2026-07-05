#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
u32 TAdMcSelectGC__sub_80019DA8(void *, M2C_UNK, f32);
M2C_UNK TWindow__close(void *);
M2C_UNK TAdPlyChrSelPlateGC__sub_802C4D88(s32);
M2C_UNK fn_802C7438(s32);
M2C_UNK TAdMcSelectGC__sub_802C7560(s32, M2C_UNK, M2C_UNK *);
M2C_UNK TAdSubPlyItemGC__sub_802D6D88(s32);
extern M2C_UNK lbl_80475840[];
extern M2C_UNK lbl_804758A0[];
extern const f32 lbl_805DF218;

void fn_8030D828(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    fn_802C7438(M2C_FIELD(arg0, s32 *, 0x2C));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x48));
        M2C_FIELD(arg0, u32 *, 0x48) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x4C));
        M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x50));
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
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x6C));
        M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x70));
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
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    switch (temp_r0) {
    case 0:
        TAdPlyChrSelPlateGC__sub_802C4D88(M2C_FIELD(arg0, s32 *, 0x34));
        TAdSubPlyItemGC__sub_802D6D88(M2C_FIELD(arg0, s32 *, 0x3C));
        break;
    case 1:
        TAdPlyChrSelPlateGC__sub_802C4D88(M2C_FIELD(arg0, s32 *, 0x34));
        TAdPlyChrSelPlateGC__sub_802C4D88(M2C_FIELD(arg0, s32 *, 0x38));
        TAdSubPlyItemGC__sub_802D6D88(M2C_FIELD(arg0, s32 *, 0x3C));
        TAdSubPlyItemGC__sub_802D6D88(M2C_FIELD(arg0, s32 *, 0x40));
        break;
    case 2:
        TAdPlyChrSelPlateGC__sub_802C4D88(M2C_FIELD(arg0, s32 *, 0x38));
        TAdSubPlyItemGC__sub_802D6D88(M2C_FIELD(arg0, s32 *, 0x40));
        break;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x20);
    switch (temp_r0_2) {
    case 0:
        M2C_FIELD(arg0, u32 *, 0x4C) = TAdMcSelectGC__sub_80019DA8(arg0, 0xC, lbl_805DF218);
        TAdMcSelectGC__sub_802C7560(M2C_FIELD(arg0, s32 *, 0x2C), 0, lbl_80475840);
        M2C_FIELD(arg0, u32 *, 0x48) = TAdMcSelectGC__sub_80019DA8(arg0, 0xB, lbl_805DF218);
        break;
    case 1:
        TAdMcSelectGC__sub_802C7560(M2C_FIELD(arg0, s32 *, 0x2C), 0, lbl_80475840);
        M2C_FIELD(arg0, u32 *, 0x48) = TAdMcSelectGC__sub_80019DA8(arg0, 0xB, lbl_805DF218);
        break;
    case 2:
        TAdMcSelectGC__sub_802C7560(M2C_FIELD(arg0, s32 *, 0x2C), 0, lbl_804758A0);
        M2C_FIELD(arg0, u32 *, 0x48) = TAdMcSelectGC__sub_80019DA8(arg0, 0xD, lbl_805DF218);
        M2C_FIELD(arg0, u32 *, 0x4C) = TAdMcSelectGC__sub_80019DA8(arg0, 0x14, lbl_805DF218);
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = 1;
}

}
