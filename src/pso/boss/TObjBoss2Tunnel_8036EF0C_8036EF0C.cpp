#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_display_copy_filter(int arg0);
M2C_UNK Dolphin_GXSetCopyFilter(int, void *, void *, void *, void *);

extern s32 lbl_805D44F8;
extern u8 *lbl_805D7734;

void set_display_copy_filter(int arg0) {
    lbl_805D44F8 = (s32) arg0;
    Dolphin_GXSetCopyFilter((int) (M2C_FIELD(lbl_805D7734, u8 *, 0x19)), (void *) (lbl_805D7734 + 0x1A), (void *) ((u8) arg0), (void *) (lbl_805D7734 + 0x32), (void *) (lbl_805D7734));
}

}
