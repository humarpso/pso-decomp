#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy_and_free__23TAdSinglePlyChrSelectGCFPvs(void *arg0, s16 arg1);
M2C_UNK TLobby__sub_803DA16C(s32);
M2C_UNK __dl__FPv(void *);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);

extern M2C_UNK lbl_804C57E0[];

void *destroy_and_free__23TAdSinglePlyChrSelectGCFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x50) = lbl_804C57E0;
        TLobby__sub_803DA16C(M2C_FIELD(arg0, s32 *, 0x3C));
        safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, s32 *, 0x44));
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
