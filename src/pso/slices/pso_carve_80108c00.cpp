#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK obj_getField1c(void *);
M2C_UNK TLobby__sub_80103114(void *, M2C_UNK);
M2C_UNK TLobby__sub_80103B04();
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK fn_801566CC(void *);
M2C_UNK fn_80156990(void *, M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
extern M2C_UNK lbl_8049F038[];

void *fn_80108C00(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F038;
        if ((u32) M2C_FIELD(arg0, u32 *, 0xA4) != 0U) {
            TObjPlayer__sub_80154A00(arg0);
            fn_801566CC(arg0);
            obj_getField1c(arg0);
            TLobby__sub_80103B04();
            TLobby__sub_80103114(arg0, 0xFFFF);
        }
        fn_80156990(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
