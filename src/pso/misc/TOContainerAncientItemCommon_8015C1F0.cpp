#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TOContainerAncientItemCommon__ct(void *arg0);
void fn_8015C534(void *);

extern M2C_UNK __vt__28TOContainerAncientItemCommon[];
extern void *lbl_805D2EFC;

void *TOContainerAncientItemCommon__ct(void *arg0) {
    fn_8015C534(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__28TOContainerAncientItemCommon;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2EFC;
    return arg0;
}

}
