#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TWindow__close(void *);
u32 TAdChrSelASlotGC__sub_8030CB08(void *, M2C_UNK, M2C_UNK);
s32 fn_8030E34C(s32);

void TAdChrSelASlotGC__sub_8030D554(void *arg0) {
    if (fn_8030E34C(M2C_FIELD(arg0, s32 *, 0x30)) > 1) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x58) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x58));
            M2C_FIELD(arg0, u32 *, 0x58) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x24) = 3;
        return;
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0xA) && ((u32) M2C_FIELD(arg0, u32 *, 0x58) == 0U)) {
        M2C_FIELD(arg0, u32 *, 0x58) = TAdChrSelASlotGC__sub_8030CB08(arg0, 0, 2);
    }
}

}
