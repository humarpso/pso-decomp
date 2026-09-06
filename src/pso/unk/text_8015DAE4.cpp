#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK fn_8015D5D4(void *);
u8 TODoorAncient08__sub_80229220(int);
void fn_8015DAE4(u8 *arg0);
}

extern "C" {

void fn_8015DAE4(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xCC);
    switch (temp_r0) {
    case 1:
        fn_8015D5D4((void *) (arg0));
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 1);
        return;
    case 2:
        if (TODoorAncient08__sub_80229220((int) ((u16) M2C_FIELD(arg0, s32 *, 0xC8))) == 1) {
            fn_8015D5D4((void *) (arg0));
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 1);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) & 0xFFFFFFFE);
        return;
    case 3:
        if (TODoorAncient08__sub_80229220((int) ((u16) M2C_FIELD(arg0, s32 *, 0xC8))) == 1) {
            fn_8015D5D4((void *) (arg0));
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) | 1);
        }
        break;
    default:
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (M2C_FIELD(arg0, s32 *, 0xD0) & 0xFFFFFFFE);
        break;
    }
}

}
