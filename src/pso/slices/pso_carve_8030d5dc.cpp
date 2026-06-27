#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TWindowSubComCard__sub_80244A14(void *);
M2C_UNK fn_802C4D88(s32);
M2C_UNK fn_802C7498(s32, M2C_UNK);
M2C_UNK fn_802D6D88(s32);
u32 fn_8030CB08(void *, M2C_UNK, M2C_UNK);
s32 fn_8030E34C(s32);
M2C_UNK fn_8032572C(s32);

void fn_8030D5DC(void *arg0) {
    s32 temp_r0;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) {
        TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x58));
        M2C_FIELD(arg0, u32 *, 0x58) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x5C) != 0U) {
        TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x5C));
        M2C_FIELD(arg0, u32 *, 0x5C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x60) != 0U) {
        TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x60));
        M2C_FIELD(arg0, u32 *, 0x60) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x64) != 0U) {
        TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x64));
        M2C_FIELD(arg0, u32 *, 0x64) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
        TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x68));
        M2C_FIELD(arg0, u32 *, 0x68) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x6C) != 0U) {
        TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x6C));
        M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x70));
        M2C_FIELD(arg0, u32 *, 0x70) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
        TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x74));
        M2C_FIELD(arg0, u32 *, 0x74) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
        TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x78));
        M2C_FIELD(arg0, u32 *, 0x78) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x7C));
        M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    switch (temp_r0) {
    case 0:
        fn_802C4D88(M2C_FIELD(arg0, s32 *, 0x34));
        fn_802D6D88(M2C_FIELD(arg0, s32 *, 0x3C));
        fn_8032572C(M2C_FIELD(arg0, s32 *, 0x44));
        break;
    case 1:
        fn_802C4D88(M2C_FIELD(arg0, s32 *, 0x34));
        fn_802C4D88(M2C_FIELD(arg0, s32 *, 0x38));
        fn_802D6D88(M2C_FIELD(arg0, s32 *, 0x3C));
        fn_802D6D88(M2C_FIELD(arg0, s32 *, 0x40));
        fn_8032572C(M2C_FIELD(arg0, s32 *, 0x44));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x4C));
            M2C_FIELD(arg0, u32 *, 0x4C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x50));
            M2C_FIELD(arg0, u32 *, 0x50) = 0U;
        }
        break;
    case 2:
        fn_802C4D88(M2C_FIELD(arg0, s32 *, 0x38));
        fn_802D6D88(M2C_FIELD(arg0, s32 *, 0x40));
        break;
    }
    fn_802C7498(M2C_FIELD(arg0, s32 *, 0x2C), 0);
    fn_802C7498(M2C_FIELD(arg0, s32 *, 0x2C), 1);
    fn_802C7498(M2C_FIELD(arg0, s32 *, 0x2C), 2);
    if (fn_8030E34C(M2C_FIELD(arg0, s32 *, 0x30)) > 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x54) != 0U) {
            TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x54));
            M2C_FIELD(arg0, u32 *, 0x54) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x24) = 2;
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x54) == 0U)) {
        M2C_FIELD(arg0, u32 *, 0x54) = fn_8030CB08(arg0, 0, 0);
    }
}

}
