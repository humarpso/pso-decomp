#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset__11TCameraCtrlFv(void);
M2C_UNK fn_80068354();

extern s8 lbl_804FF628[];
extern s16 lbl_805D4E0A;

void reset__11TCameraCtrlFv(void) {
    lbl_805D4E0A = 0;
    fn_80068354();
    M2C_FIELD(lbl_804FF628, s8 *, 0) = 0;
    M2C_FIELD(lbl_804FF628, s16 *, 2) = 0;
    M2C_FIELD(lbl_804FF628, s32 *, 4) = 0;
    M2C_FIELD(lbl_804FF628, s32 *, 8) = 0;
}

}
