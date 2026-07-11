#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneMe3Stelth__ct(void *arg0);
void TObjEneDD__sub_800B9A8C(void *);
void fn_800D764C(void *);

extern M2C_UNK __vt__16TObjEneMe3Stelth[];
extern void *lbl_805D2AF8;

void *TObjEneMe3Stelth__ct(void *arg0) {
    TObjEneDD__sub_800B9A8C(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjEneMe3Stelth;
    fn_800D764C((void *)((char *)arg0 + 1028));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2AF8;
    return arg0;
}

}
