#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneDf2Bringer__ct(void *arg0, void *arg1, void *arg2);
void TObjEneDf2Bringer__sub_800994F8(void *);
void TObjEneDf2Bringer__sub_80099800(void *);
void fn_800A0610(void *);
void fn_800B9A8C(void *);
void fn_800BB8E0(void *, void *);

extern M2C_UNK __vt__17TObjEneDf2Bringer[];
extern M2C_UNK fn_800D7CB0[];
extern M2C_UNK fn_800D7C58[];
void __construct_array(void *, void *, void *, int, int);
extern void *lbl_805D29A0;

void *TObjEneDf2Bringer__ct(void *arg0, void *arg1, void *arg2) {
    fn_800B9A8C(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneDf2Bringer;
    fn_800A0610((void *)((char *)arg0 + 964));
    __construct_array((void *)((char *)arg0 + 992), fn_800D7CB0, fn_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D29A0;
    fn_800BB8E0(arg0, arg2);
    TObjEneDf2Bringer__sub_800994F8(arg0);
    TObjEneDf2Bringer__sub_80099800(arg0);
    return arg0;
}

}
