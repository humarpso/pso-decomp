#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TOTrapAncient02R__vt84(void *arg0);
void TOTrapAncient02R__sub_80141CF0(void *, void *, void *);
void TOTrapAncient02R__sub_80154D78(void *);
s32 fn_800FD8B4(void *);

extern M2C_UNK lbl_8050BEE0[];
extern M2C_UNK lbl_804A7468[];

void TOTrapAncient02R__vt84(void *arg0) {
    s32 x;
    x = fn_800FD8B4(arg0);
    if (x == 1) {
        TOTrapAncient02R__sub_80141CF0((void *)((char *)arg0 + 80), lbl_8050BEE0, lbl_804A7468);
        TOTrapAncient02R__sub_80154D78(arg0);
    }
}

}
