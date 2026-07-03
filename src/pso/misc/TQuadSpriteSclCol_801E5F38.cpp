#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TQuadSpriteSclCol__ct(void *arg0);
void fn_801E4F80(void *);

extern M2C_UNK __vt__17TQuadSpriteSclCol[];
extern void *lbl_805D35B8;

void *TQuadSpriteSclCol__ct(void *arg0) {
    fn_801E4F80(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TQuadSpriteSclCol;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D35B8;
    return arg0;
}

}
