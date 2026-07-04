#pragma fp_contract on
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_801457A4 { char pad[0x18]; };
struct VObj_801457A4 : Base_801457A4 {
    virtual void m0(int);
};

extern "C" {

M2C_UNK fn_8007EBB4(s32);
M2C_UNK TOBoss4Rock__sub_80147A80(s32);
M2C_UNK fn_803DA16C(M2C_UNK *);
extern M2C_UNK lbl_804A74E8[];
extern s32 lbl_805D56B0;
extern s32 lbl_805D56B4;
extern s32 lbl_805D56BC;
extern struct VObj_801457A4 *lbl_805D56C4;

void fn_801457A4(void) {
    if (lbl_805D56C4 != NULL) {
        lbl_805D56C4->m0(1);
    }
    fn_803DA16C(lbl_804A74E8);
    TOBoss4Rock__sub_80147A80(lbl_805D56BC);
    TOBoss4Rock__sub_80147A80(lbl_805D56B4);
    fn_8007EBB4(lbl_805D56B0);
}

}
