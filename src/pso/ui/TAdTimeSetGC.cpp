#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TAdTimeSetGC__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void fn_8022743C(void);
void fn_802E1E7C(void *);

extern M2C_UNK __vt__12TAdTimeSetGC[];
extern void *lbl_805D3F80;

void *TAdTimeSetGC__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TAdTimeSetGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3F80;
    fn_802E1E7C(arg0);
    fn_8022743C();
    return arg0;
}

}
