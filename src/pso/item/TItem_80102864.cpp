#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__5TItemFv(void *arg0, s16 arg1);
M2C_UNK set_mode__5TItemFPvc(void *, M2C_UNK);
M2C_UNK TItem__sub_80101B20(void *);
M2C_UNK TObjPlayer__sub_80102A58(void *);
M2C_UNK fn_801566CC(void *);
M2C_UNK TObjPlayer__sub_80156990(void *, M2C_UNK);

extern void *__vt__5TItem[];

void *__dt__5TItemFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = (void *) __vt__5TItem;
        set_mode__5TItemFPvc(arg0, 3);
        fn_801566CC(arg0);
        TItem__sub_80101B20(arg0);
        TObjPlayer__sub_80156990(arg0, 0);
        if (arg1 > 0) {
            TObjPlayer__sub_80102A58(arg0);
        }
    }
    return arg0;
}

}
