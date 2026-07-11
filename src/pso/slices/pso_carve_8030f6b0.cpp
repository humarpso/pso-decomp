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
extern M2C_UNK lbl_80475910[];
extern const f32 lbl_805DF220;

void TAdChrSelBSlotGC__sub_8030F6B0(void *arg0) {
    fn_802C7438(M2C_FIELD(arg0, s32 *, 0x28));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x38));
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3C));
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x40));
        M2C_FIELD(arg0, u32 *, 0x40) = 0U;
    }
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
    TAdMcSelectGC__sub_802C7560(M2C_FIELD(arg0, s32 *, 0x28), 1, lbl_80475910);
    M2C_FIELD(arg0, u32 *, 0x38) = TAdMcSelectGC__sub_80019DA8(arg0, 0xE, lbl_805DF220);
    M2C_FIELD(arg0, u32 *, 0x3C) = TAdMcSelectGC__sub_80019DA8(arg0, 0x15, lbl_805DF220);
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
}

}
