#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK free__11TOBoss4RockFUi(void *);
M2C_UNK __dl__7TObjectFPv(void *);
extern M2C_UNK lbl_804EFA88[];
extern s32 lbl_805D6DA0;

void *TLobby__sub_8033ECB0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EFA88;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
            free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x1C));
        }
        lbl_805D6DA0 = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
