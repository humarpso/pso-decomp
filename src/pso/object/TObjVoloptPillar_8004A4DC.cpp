#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjVoloptPillar__sub_8004A4DC(void);

extern u8 *lbl_805D4C10;
extern s32 lbl_805D4D38;
extern s32 lbl_805D4D3C;
extern s32 lbl_805D4D40;
extern s32 lbl_805D4D44;

void TObjVoloptPillar__sub_8004A4DC(void) {
    lbl_805D4D38 = M2C_FIELD(M2C_FIELD(lbl_805D4C10, void **, 0x42C), s32 *, 0x178);
    lbl_805D4D40 = M2C_FIELD(M2C_FIELD(lbl_805D4C10, void **, 0x42C), s32 *, 0x17C);
    lbl_805D4D3C = M2C_FIELD(M2C_FIELD(lbl_805D4C10, void **, 0x42C), s32 *, 0x158);
    lbl_805D4D44 = M2C_FIELD(M2C_FIELD(lbl_805D4C10, void **, 0x42C), s32 *, 0x15C);
}

}
