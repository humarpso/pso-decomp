#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneRe4Sorcerer__ct(void *arg0, void *arg1, void *arg2);
void TObjEneRe4Sorcerer__sub_800EFE30(void *);
void TObjEneRe4Sorcerer__sub_800F0118(void *);
void TObjPlayer__sub_8004433C(void *);
void TObjPlayer__sub_800A0610(void *);
void init_object__9TObjEneDDFPv(void *);
void TObjEneDD__sub_800BB8E0(void *, void *);

extern M2C_UNK __vt__18TObjEneRe4Sorcerer[];
extern M2C_UNK TObjPlayer__sub_800D7CB0[];
extern M2C_UNK fn_800D7C58[];
void __construct_array(void *, void *, void *, int, int);
extern void *lbl_805D2AF0;

void *TObjEneRe4Sorcerer__ct(void *arg0, void *arg1, void *arg2) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjEneRe4Sorcerer;
    TObjPlayer__sub_800A0610((void *)((char *)arg0 + 1020));
    TObjPlayer__sub_8004433C((void *)((char *)arg0 + 1048));
    __construct_array((void *)((char *)arg0 + 1140), TObjPlayer__sub_800D7CB0, fn_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2AF0;
    TObjEneDD__sub_800BB8E0(arg0, arg2);
    TObjEneRe4Sorcerer__sub_800EFE30(arg0);
    TObjEneRe4Sorcerer__sub_800F0118(arg0);
    return arg0;
}

}
