#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneMe3Shinowa__ct(void *arg0);
void init_object__9TObjEneDDFPv(void *);
void fn_800D764C(void *);

extern M2C_UNK __vt__17TObjEneMe3Shinowa[];
extern void *lbl_805D2AC8;

void *TObjEneMe3Shinowa__ct(void *arg0) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneMe3Shinowa;
    fn_800D764C((void *)((char *)arg0 + 1000));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2AC8;
    return arg0;
}

}
