#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801E0CE0(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1B50(M2C_UNK);
M2C_UNK TWindow__close(void *);
M2C_UNK TWindowSubComCard__sub_802A5748(void *);
s32 TAdChrSelASlotGC__sub_8030C4F8(M2C_UNK, M2C_UNK);
s32 TAdChrSelASlotGC__sub_8030C688(M2C_UNK, M2C_UNK);
s32 fn_803100EC(void *);
M2C_UNK fn_803100F4();

void TAdChrSelBSlotGC__sub_8030ED88(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        TWindowSubComCard__sub_802A5748(M2C_FIELD(arg0, void **, 0x70));
        M2C_FIELD(arg0, u32 *, 0x70) = 0U;
    }
    if ((u32) (TAdPlayerLoadGC__sub_801E1B50(1) + 0x10000) != 0xFFFFU) {
        if ((fn_801E0CE0(1) != 0) && (TAdPlayerLoadGC__sub_801E1B50(1) == 0)) {
            M2C_FIELD(arg0, s32 *, 0x74) = TAdChrSelASlotGC__sub_8030C688(fn_803100F4(), 1);
            M2C_FIELD(arg0, s32 *, 0x1C) = 0xA;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x7C) = TAdChrSelASlotGC__sub_8030C4F8(fn_803100F4(), 1);
        M2C_FIELD(arg0, s32 *, 0x1C) = 0xB;
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
