#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_801104C4 { char pad[0x18]; };
struct VObj_801104C4 : Base_801104C4 {
    virtual int m0();
    virtual int m1();
};

extern "C" {

M2C_UNK fn_8010F4F0();
s32 fn_801107F4(void *);
M2C_UNK set_parent__7TObjectFP7TObject(void *, u32);
extern void *lbl_805D5484;
extern u32 lbl_805D5488;

void fn_801104C4(void) {
    void *temp_r31;

    fn_8010F4F0();
    if (((void *) lbl_805D5484 != NULL) && ((u32) lbl_805D5488 != 0U)) {
        temp_r31 = M2C_FIELD(lbl_805D5484, void **, 0x14);
        if (temp_r31 != NULL) {
            ((VObj_801104C4 *)temp_r31)->m1();
            if (fn_801107F4(temp_r31) == 1) {
                set_parent__7TObjectFP7TObject(temp_r31, lbl_805D5488);
            }
        }
    }
}

}
