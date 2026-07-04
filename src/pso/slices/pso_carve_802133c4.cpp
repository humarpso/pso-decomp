#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_802133C4 { char pad[0x18]; };
struct VObj_802133C4 : Base_802133C4 {
    virtual void m0(); virtual void m1();
};

extern "C" {

void *TQuestThread__sub_801F5BD4(s32);
extern s32 lbl_80513DC8[];

void fn_802133C4(void) {
    s32 v = lbl_80513DC8[3];
    if (v != -1) {
        void *obj = TQuestThread__sub_801F5BD4(v);
        if (obj != NULL) {
            ((VObj_802133C4 *)obj)->m1();
        }
    }
}

}
