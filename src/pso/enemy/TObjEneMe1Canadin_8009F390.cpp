#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init__17TObjEneMe1CanadinFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void update_by_field_0x354__17TObjEneMe1CanadinFPv(void *);
void TObjEneMe1Canadin__sub_8009F004(void *);
void fn_800B9A8C(void *);
void fn_800BB8E0(void *, void *);
void fn_800D764C(void *);

extern M2C_UNK __vt__17TObjEneMe1Canadin[];
extern void *lbl_805D29B0;

void *init__17TObjEneMe1CanadinFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    fn_800B9A8C(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneMe1Canadin;
    fn_800D764C((void *)((char *)arg0 + 972));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D29B0;
    fn_800BB8E0(arg0, arg2);
    M2C_FIELD(arg0, u32 *, 0x3C8) = 0;
    update_by_field_0x354__17TObjEneMe1CanadinFPv(arg0);
    M2C_FIELD(arg0, void **, 0x3C0) = arg0;
    M2C_FIELD(arg0, void **, 0x3C4) = arg3;
    TObjEneMe1Canadin__sub_8009F004(arg0);
    return arg0;
}

}
