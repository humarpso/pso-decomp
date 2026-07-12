#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneDf2Bringer__ct(void *arg0, void *arg1, void *arg2);
void TObjEneDf2Bringer__sub_800994F8(void *);
void TObjEneDf2Bringer__sub_80099800(void *);
void init_vtable_and_field18__10TObjPlayerFPv(void *);
void init_object__9TObjEneDDFPv(void *);
void TObjEneDD__sub_800BB8E0(void *, void *);

extern M2C_UNK __vt__17TObjEneDf2Bringer[];
extern M2C_UNK TObjPlayer__sub_800D7CB0[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
void __construct_array(void *, void *, void *, int, int);
extern void *lbl_805D29A0;

void *TObjEneDf2Bringer__ct(void *arg0, void *arg1, void *arg2) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneDf2Bringer;
    init_vtable_and_field18__10TObjPlayerFPv((void *)((char *)arg0 + 964));
    __construct_array((void *)((char *)arg0 + 992), TObjPlayer__sub_800D7CB0, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D29A0;
    TObjEneDD__sub_800BB8E0(arg0, arg2);
    TObjEneDf2Bringer__sub_800994F8(arg0);
    TObjEneDf2Bringer__sub_80099800(arg0);
    return arg0;
}

}
