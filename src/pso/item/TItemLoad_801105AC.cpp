#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801105AC { char pad[0x18]; };
struct VObj_801105AC : Base_801105AC {
    virtual void m0(s32);
};

extern "C" {

void TItemLoad__sub_801105AC(void);
M2C_UNK TOBoss4Rock__sub_80147A80(s32);
M2C_UNK fn_8001FE7C(s32, M2C_UNK);
M2C_UNK fn_8010F52C();
M2C_UNK fn_8010FDC4();

extern s32 lbl_805D5480;
extern void *lbl_805D5484;
extern void *lbl_805D5488;
extern s32 lbl_805D548C;
extern s32 lbl_805D5490;

void TItemLoad__sub_801105AC(void) {
    TOBoss4Rock__sub_80147A80(lbl_805D548C);
    if ((void *) lbl_805D5484 != NULL) {
        ((VObj_801105AC *)lbl_805D5484)->m0(1);
    }
    if ((void *) lbl_805D5488 != NULL) {
        ((VObj_801105AC *)lbl_805D5488)->m0(1);
    }
    fn_8001FE7C(lbl_805D5480, 1);
    lbl_805D5490 = 0;
    lbl_805D5480 = 0;
    lbl_805D5484 = NULL;
    lbl_805D5488 = NULL;
    lbl_805D548C = 0;
    fn_8010F52C();
    fn_8010FDC4();
}

}
