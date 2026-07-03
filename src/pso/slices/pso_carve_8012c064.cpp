#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_80120D50(void *);
extern M2C_UNK lbl_804A5150[];
extern M2C_UNK fn_8011BDC8[];
extern M2C_UNK fn_80109CBC[];
extern M2C_UNK fn_80109A30[];

void *fn_8012C064(void *arg0) {
    fn_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A5150;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = fn_8011BDC8;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = fn_80109CBC;
    M2C_FIELD(arg0, M2C_UNK **, 0x1EC) = fn_80109A30;
    M2C_FIELD(arg0, u32 *, 0x1FC) = 0;
    M2C_FIELD(arg0, u32 *, 0x1F8) = 0;
    return arg0;
}

}
