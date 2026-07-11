#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneRe7Berura__ct(void *arg0, void *arg1, void *arg2);
void TObjEneRe7Berura__sub_80095328(void *);
void TObjEneRe7Berura__sub_800955E0(void *);
void fn_800A0610(void *);
void TObjEneDD__sub_800B9A8C(void *);
void TObjEneDD__sub_800BB8E0(void *, void *);

extern M2C_UNK __vt__16TObjEneRe7Berura[];
extern M2C_UNK fn_800D7CB0[];
extern M2C_UNK fn_800D7C58[];
void __construct_array(void *, void *, void *, int, int);
extern void *lbl_805D2988;

void *TObjEneRe7Berura__ct(void *arg0, void *arg1, void *arg2) {
    TObjEneDD__sub_800B9A8C(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjEneRe7Berura;
    fn_800A0610((void *)((char *)arg0 + 984));
    fn_800A0610((void *)((char *)arg0 + 1020));
    __construct_array((void *)((char *)arg0 + 1096), fn_800D7CB0, fn_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2988;
    TObjEneDD__sub_800BB8E0(arg0, arg2);
    TObjEneRe7Berura__sub_80095328(arg0);
    TObjEneRe7Berura__sub_800955E0(arg0);
    return arg0;
}

}
