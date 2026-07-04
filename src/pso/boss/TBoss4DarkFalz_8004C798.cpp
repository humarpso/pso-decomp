#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TBoss4DarkFalz__sub_8004C798(void *arg0);
void TBoss4DarkFalz__sub_8004BA70(void *);
void fn_8004F8AC(void *, void *, void *);
void fn_802274B8(void *);

extern M2C_UNK lbl_80437298[];

void TBoss4DarkFalz__sub_8004C798(void *arg0) {
    TBoss4DarkFalz__sub_8004BA70(arg0);
    fn_8004F8AC(arg0, (void *)((char *)arg0 + 924), M2C_FIELD(arg0, void **, 0x3A8));
    fn_802274B8(lbl_80437298);
    M2C_FIELD(arg0, u32 *, 0x380) = 114;
}

}
