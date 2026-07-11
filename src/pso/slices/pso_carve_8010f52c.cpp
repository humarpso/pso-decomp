#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK free__11TOBoss4RockFUi(s32);
extern void *lbl_805D549C;
extern void *lbl_805D54A0;
extern s32 lbl_805D54A4;

struct Base_8010F52C { char pad[0x14]; };
struct VObj_8010F52C : Base_8010F52C {
    virtual void m0(int);
};

void fn_8010F52C(void) {
    free__11TOBoss4RockFUi(lbl_805D54A4);
    if (lbl_805D54A0 != NULL) {
        ((struct VObj_8010F52C *)lbl_805D54A0)->m0(1);
    }
    if (lbl_805D549C != NULL) {
        ((struct VObj_8010F52C *)lbl_805D549C)->m0(1);
    }
    lbl_805D549C = NULL;
    lbl_805D54A0 = NULL;
    lbl_805D54A4 = 0;
}

}
