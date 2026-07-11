#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_801D4D48 { char pad[0x18]; };
struct VObj_801D4D48 : Base_801D4D48 {
#define V8(b) virtual void b##0(); virtual void b##1(); virtual void b##2(); virtual void b##3(); virtual void b##4(); virtual void b##5(); virtual void b##6(); virtual void b##7();
    V8(a) V8(b) V8(c) V8(d)
    virtual void p32(); virtual void p33();
    virtual s32 m34();
};

extern "C" {

s32 TItemData__sub_8010CD6C(s32);
u32 fn_801D4E10(void *, s32);
M2C_UNK fn_801D551C(s32);
void *fn_801D5764();
s32 all_parents_unqueued_for_destruction__7TObjectFv();
extern s32 lbl_805D5DF4;
extern s32 lbl_805D5DFC;

s32 fn_801D4D48(void *arg0, s32 arg1) {
    void *temp_r3;

    if (TItemData__sub_8010CD6C(arg1) != 0) {
        if (fn_801D4E10(arg0, arg1) != 0U) {
            temp_r3 = fn_801D5764();
            if ((temp_r3 != NULL) && (all_parents_unqueued_for_destruction__7TObjectFv() != 0)) {
                return ((VObj_801D4D48 *)temp_r3)->m34();
            }
        }
        return 0;
    }
    lbl_805D5DFC = arg1;
    lbl_805D5DF4 = 0;
    fn_801D551C(M2C_FIELD(arg0, s32 *, 0x1C4));
    return lbl_805D5DF4;
}

}
