#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80381C68_lbl_80544980 {
    M2C_UNK value;
    u8 remaining[0x21C];
};

extern "C" {
extern RecoveredGlobal_80381C68_lbl_80544980 lbl_80544980;
s32 TAdPlayerLoadGC__sub_80381C68(s32 arg0);
}

extern "C" {

typedef char RecoveredGlobal_80381C68_lbl_80544980_size[sizeof(RecoveredGlobal_80381C68_lbl_80544980) == 0x220 ? 1 : -1];
s32 TAdPlayerLoadGC__sub_80381C68(s32 arg0) {
    if ((arg0 < 0) || (arg0 >= 2)) {
        return -0x80;
    }
    return M2C_FIELD(((u8 *)&lbl_80544980.value + (arg0 * 0x110)), s32 *, 4);
}

}
