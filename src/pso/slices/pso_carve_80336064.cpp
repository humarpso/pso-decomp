#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK init__22THunterGuildSeqOfflineFPvPvPv(s32, M2C_UNK, M2C_UNK *);
u32 __nw__7TObjectFUl(M2C_UNK);
extern M2C_UNK TLobby__sub_803360CC[];
extern s32 tl_fade;

s32 fn_80336064(void *arg0) {
    M2C_UNK *temp_r3;
    if (!(M2C_FIELD(arg0, s32 *, 0x3C) & 2)) {
        temp_r3 = (M2C_UNK *) __nw__7TObjectFUl(0x28);
        if (temp_r3 != NULL) {
            init__22THunterGuildSeqOfflineFPvPvPv((s32) temp_r3, tl_fade, TLobby__sub_803360CC);
        }
        M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) | 2);
    }
    return M2C_FIELD(arg0, s32 *, 0x3C) & 4;
}

}
