#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_8012B854(void *arg0);
void TObjPlayer__sub_80120D50(void *);

extern M2C_UNK lbl_804A4E68[];

void *TObjPlayer__sub_8012B854(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A4E68;
    M2C_FIELD(arg0, u32 *, 0x1F8) = 0;
    return arg0;
}

}
