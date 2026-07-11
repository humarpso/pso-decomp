#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern s32 lbl_805D4C00;

void set_global_flag_200__15TObjBoss2TunnelFv(void) {
    lbl_805D4C00 |= 0x200;
}

extern s32 lbl_805D4C00;

void set_global_flag_100__15TObjBoss2TunnelFv(void) {
    lbl_805D4C00 |= 0x100;
}

extern s32 lbl_805D4C00;

s32 TObjBoss2Tunnel__sub_8003C5DC(void) {
    return lbl_805D4C00 & 1;
}

extern s32 lbl_805D4C00;

void clear_global_flag_3000__15TObjBoss2TunnelFv(void) {
    lbl_805D4C00 &= 0xFFFFCFFF;
}

}
