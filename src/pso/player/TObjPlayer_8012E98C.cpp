#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_8012E98C(void *arg0);
void TObjPlayer__sub_80120D50(void *);
void TObjPlayer__sub_8012106C(void *, int);

extern M2C_UNK lbl_804A5E20[];
extern M2C_UNK fn_80109CBC[];
extern M2C_UNK fn_80109A30[];
extern M2C_UNK TObjPlayer__sub_8011BA54[];

void *TObjPlayer__sub_8012E98C(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A5E20;
    TObjPlayer__sub_8012106C(arg0, 2);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = fn_80109CBC;
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = fn_80109A30;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = TObjPlayer__sub_8011BA54;
    return arg0;
}

}
