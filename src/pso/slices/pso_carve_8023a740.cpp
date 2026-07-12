#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TObjEneGibbles__sub_80156720(void *);
void __dt__7TEffectFv(void *, int);
void __dl__7TObjectFPv(void *);
extern M2C_UNK lbl_804CCC68[];

void *fn_8023A740(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CCC68;
        if (M2C_FIELD(arg0, void **, 0x128) != NULL) { TObjEneGibbles__sub_80156720(M2C_FIELD(arg0, void **, 0x128)); M2C_FIELD(arg0, M2C_UNK *, 0x128) = 0; }
        __dt__7TEffectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
