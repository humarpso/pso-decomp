#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800AAF78_lbl_805009B8 {
    M2C_UNK value;
    u8 remaining[0x134];
};

extern "C" {
extern RecoveredGlobal_800AAF78_lbl_805009B8 lbl_805009B8;
f32 TObjPlayer__sub_800AAF78(u8 *arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_800AAF78_lbl_805009B8_size[sizeof(RecoveredGlobal_800AAF78_lbl_805009B8) == 0x138 ? 1 : -1];
f32 TObjPlayer__sub_800AAF78(u8 *arg0, s32 arg1) {
    return M2C_FIELD((M2C_FIELD(((u8 *)(&lbl_805009B8.value) + (M2C_FIELD(arg0, s32 *, 0x368) * 4)), s32 *, 0) + (arg1 * 4)), f32 *, 0);
}

}
