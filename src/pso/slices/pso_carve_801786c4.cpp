#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TODoorAncient08__sub_80229220(u16);

s32 TOSymbolchatColli__sub_801786C4(void *arg0) {
    if (TODoorAncient08__sub_80229220(M2C_FIELD(arg0, u16 *, 0x37C)) == 1) {
        return 3;
    }
    if (TODoorAncient08__sub_80229220(M2C_FIELD(arg0, u16 *, 0x37A)) == 1) {
        return 2;
    }
    return (u32) __cntlzw(1 - TODoorAncient08__sub_80229220(M2C_FIELD(arg0, u16 *, 0x378))) >> 5;
}

}
