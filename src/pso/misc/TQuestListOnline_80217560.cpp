#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TQuestListOnline__sub_80217560(void);

extern void *lbl_805D6194;
extern void *lbl_805D61E0;

int TQuestListOnline__sub_80217560(void) {
    if (((void *) lbl_805D61E0 != NULL) && ((u32) M2C_FIELD(lbl_805D61E0, u32 *, 0x40) != 0U)) {
        return M2C_FIELD(lbl_805D6194, u8 *, 1);
    }
    return -1;
}

}
