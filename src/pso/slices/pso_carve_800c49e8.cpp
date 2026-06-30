#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void queue_destruction__7TObjectFv(void *);
void fn_800BC40C(void *, int);
void __dl__7TObjectFPv(void *);
extern M2C_UNK lbl_804933D8[];

void *fn_800C49E8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804933D8;
        if (M2C_FIELD(arg0, void **, 0xFC) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xFC)); M2C_FIELD(arg0, M2C_UNK *, 0xFC) = 0; }
        fn_800BC40C(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
