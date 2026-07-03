#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowStatus__ct(void *arg0);
void TWindowSimpleStatus__ct(void *);

extern M2C_UNK __vt__13TWindowStatus[];
extern void *lbl_805D39F8;

void *TWindowStatus__ct(void *arg0) {
    TWindowSimpleStatus__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TWindowStatus;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D39F8;
    return arg0;
}

}
