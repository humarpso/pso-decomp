#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjEneMe1Gee__sub_800CC788(void *arg0, void *arg1, void *arg2, void *arg3);
void TObjEneMe1Gee__sub_800CC0C4(void *);
void TObjEneMe1Gee__sub_800CC430(void *);
void fn_800B9A8C(void *);
void fn_800BB8E0(void *, void *);
void fn_800D764C(void *);

extern M2C_UNK __vt__13TObjEneMe1Gee[];
extern void *lbl_805D2A68;

void *TObjEneMe1Gee__sub_800CC788(void *arg0, void *arg1, void *arg2, void *arg3) {
    fn_800B9A8C(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjEneMe1Gee;
    fn_800D764C((void *)((char *)arg0 + 972));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2A68;
    fn_800BB8E0(arg0, arg2);
    M2C_FIELD(arg0, u32 *, 0x3C8) = 0;
    TObjEneMe1Gee__sub_800CC0C4(arg0);
    M2C_FIELD(arg0, void **, 0x3C0) = arg0;
    M2C_FIELD(arg0, void **, 0x3C4) = arg3;
    TObjEneMe1Gee__sub_800CC430(arg0);
    return arg0;
}

}
