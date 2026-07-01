#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_80156720(void *);
void fn_800D7C58(void *, int);
void fn_800D75F4(void *, int);
void __dt__15TObjEnemyCustomFv(void *, int);
void __dl__7TObjectFPv(void *);
extern M2C_UNK lbl_804E135C[];

void *fn_802CD780(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E135C;
        fn_80156720(arg0);
        fn_800D7C58((s8 *)arg0 + 0x418, -1);
        fn_800D75F4((s8 *)arg0 + 0x3FC, -1);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
