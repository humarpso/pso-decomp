#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80154788(void *, M2C_UNK, M2C_UNK);
u8 TODoorAncient08__sub_80229220(u16);

void TObjLazerFence4__sub_80193378(void *arg0) {
    if (TODoorAncient08__sub_80229220(M2C_FIELD(arg0, u16 *, 0xBA)) == 0) {
        fn_80154788(arg0, 0, 1);
        M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    }
}

}
