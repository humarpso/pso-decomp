#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjLazerFence4__sub_80193378(void *arg0);
u8 TODoorAncient08__sub_80229220(u16);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);

void TObjLazerFence4__sub_80193378(void *arg0) {
    if (TODoorAncient08__sub_80229220(M2C_FIELD(arg0, u16 *, 0xBA)) == 0) {
        set_indexed_flags(arg0, 0, 1);
        M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    }
}

}
