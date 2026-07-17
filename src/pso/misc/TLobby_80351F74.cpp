#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TLobby__sub_80351F74(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern const M2C_UNK lbl_804F0EA8[];
extern s32 lbl_805D6EC0;

void *TLobby__sub_80351F74(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, const M2C_UNK **, 0x18) = lbl_804F0EA8;
        queue_destruction__7TObjectFv(arg0);
        lbl_805D6EC0 = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
