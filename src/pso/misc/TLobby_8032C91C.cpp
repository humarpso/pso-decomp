#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_8032C91C(void* p);
u8 TLobby__sub_8032C93C(void);
M2C_UNK TDLGraph__sub_8007F6F8(s32, M2C_UNK);
s32 TLobby__sub_801F34F8();
int fn_804326DC(void*);
s32 fn_80432858(M2C_UNK, u8 *);

int TLobby__sub_8032C91C(void* p) { return fn_804326DC(p); }

extern u32 TLobby__data_805D6CC4;

u8 TLobby__sub_8032C93C(void) {
    u8 sp8;

    if (TLobby__sub_801F34F8() == 3) {
        if (fn_80432858(3, &sp8) == 0) {
            return 0U;
        }
        if ((u32) TLobby__data_805D6CC4 != 0U) {
            TDLGraph__sub_8007F6F8(sp8 + 1, 0x65);
        }
        return sp8;
    }
    return 0U;
}

}
