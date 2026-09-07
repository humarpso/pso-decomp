#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern s32 lbl_805D36F0;
extern s32 **lbl_805D6258;
s32 TLobby__sub_80222CFC(s32 arg0);
extern s32 lbl_805D36F0;
extern s32 **lbl_805D6258;
s32 TLobby__sub_80222C28(s32 arg0, s32 arg1);
}

extern "C" {

s32 TLobby__sub_80222C28(s32 arg0, s32 arg1) {
    if ((s32 *) (*(s32 * *)&lbl_805D6258) != NULL) {
        return M2C_FIELD((M2C_FIELD((M2C_FIELD((*(s32 * *)&lbl_805D6258), s32 *, 0) + (arg0 * 4)), s32 *, 0) + (arg1 * 4)), s32 *, 0);
    }
    return lbl_805D36F0;
}

s32 TLobby__sub_80222CFC(s32 arg0) {
    if ((s32 **) lbl_805D6258 != NULL) {
        return M2C_FIELD(**lbl_805D6258, M2C_UNK *, (arg0 * 4));
    }
    return lbl_805D36F0;
}

}
