#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdVIConfigGC__ct(void *arg0);
void TAdVIConfigGC__sub_80308200(void *, int);
void TAdYesNoBaseGC__ct(void *);

extern M2C_UNK __vt__13TAdVIConfigGC[];
extern void *lbl_805D4094;

void *TAdVIConfigGC__ct(void *arg0) {
    TAdYesNoBaseGC__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TAdVIConfigGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4094;
    TAdVIConfigGC__sub_80308200(arg0, 0);
    M2C_FIELD(arg0, u32 *, 0x48) = 0;
    return arg0;
}

}
