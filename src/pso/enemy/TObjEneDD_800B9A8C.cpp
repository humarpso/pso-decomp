#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneDD__sub_800B9A8C(void *arg0);
void TObjEneDD__ct(void *);
void TObjEneDD__sub_800B99B4(void *);
void TObjEneEpsilon__sub_800B965C(void *, int);
void fn_800B98A4(void *, int);
void fn_800B98C0(void *);

extern M2C_UNK lbl_80492558[];
extern void *lbl_805D2A34;

void *TObjEneDD__sub_800B9A8C(void *arg0) {
    TObjEneDD__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80492558;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2A34;
    fn_800B98C0(arg0);
    TObjEneDD__sub_800B99B4(arg0);
    fn_800B98A4(arg0, 30);
    TObjEneEpsilon__sub_800B965C(arg0, 30);
    return arg0;
}

}
