#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 fn_8028DA7C(void *);
u8 TCharaMaking__sub_8028DC74();
M2C_UNK fn_80290BE0();
M2C_UNK TObjCMMainMenu__sub_802972C8();
M2C_UNK fn_80298D98(M2C_UNK);
extern s32 lbl_805D659C;

void TObjCMMainMenu__sub_8029737C(void *arg0) {
    if (fn_8028DA7C(M2C_FIELD(arg0, void **, 0x1C)) == 0) {
        fn_8022675C(0x53F06, 0, 0, 0);
        return;
    }
    fn_8022675C(0x52D01, 0, 0, 0);
    if ((s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), u8 *, 0x30) == -1) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), u8 *, 0x30) = TCharaMaking__sub_8028DC74();
    } else {
        TObjCMMainMenu__sub_802972C8();
    }
    fn_80298D98(1);
    fn_80290BE0();
    M2C_FIELD(arg0, s32 *, 0x30) = 0x3C;
    lbl_805D659C = 2;
}

}
