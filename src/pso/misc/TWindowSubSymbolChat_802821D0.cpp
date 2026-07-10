#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_parts_set__20TWindowSubSymbolChatFPv(void *arg0);
s32 TWindowSubSymbolChat__sub_80282230(void);
s32 TWindowSubSymbolChatPartsSet__ct(s32, s32, s16, M2C_UNK *, M2C_UNK *);
s32 TWindowSubSymbolChatParts__ct(s32, s32, M2C_UNK *, M2C_UNK *);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 fn_8026CBB8(M2C_UNK);

extern M2C_UNK lbl_805D6498;
extern M2C_UNK lbl_805D649C;

s32 create_parts_set__20TWindowSubSymbolChatFPv(void *arg0) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x98);
    if (var_r31 != 0) {
        var_r31 = TWindowSubSymbolChatPartsSet__ct(var_r31, fn_8026CBB8(0x7D), M2C_FIELD(arg0, s16 *, 0x1E), &lbl_805D6498, &lbl_805D649C);
    }
    return var_r31;
}

extern M2C_UNK lbl_805D6498;
extern M2C_UNK lbl_805D649C;

s32 TWindowSubSymbolChat__sub_80282230(void) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x90);
    if (var_r31 != 0) {
        var_r31 = TWindowSubSymbolChatParts__ct(var_r31, fn_8026CBB8(0x7D), &lbl_805D6498, &lbl_805D649C);
    }
    return var_r31;
}

}
