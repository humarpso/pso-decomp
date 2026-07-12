#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TGStream__ct(void *arg0, s16 arg1);
M2C_UNK __dl__FPv(void *);
M2C_UNK TLobby__sub_8001EE48(M2C_UNK *);
M2C_UNK TLobby__sub_803CCE9C(s32);

extern M2C_UNK lbl_8043DAF8[];

void *TGStream__ct(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28) == 0U) {
            TLobby__sub_803CCE9C(M2C_FIELD(arg0, s32 *, 0x20));
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0) {
            TLobby__sub_8001EE48(lbl_8043DAF8);
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
