#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8003C7EC_lbl_80483578 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8003C8B4_lbl_804FEEAC { M2C_UNK value; u8 remaining[0x10]; };

extern "C" {
extern RecoveredGlobal_8003C7EC_lbl_80483578 lbl_80483578;
extern const f32 lbl_805D825C;
void fn_8003C7EC(void);
u16 obj_getField1c(void *);
s32 rand(void);
s32 TObjPlayer__sub_8003C964();
extern RecoveredGlobal_8003C8B4_lbl_804FEEAC lbl_804FEEAC;
extern s32 lbl_805D4C48;
extern const f32 lbl_805D8658;
u16 fn_8003C8B4(void);
}

extern "C" {

typedef char RecoveredGlobal_8003C7EC_lbl_80483578_size[sizeof(RecoveredGlobal_8003C7EC_lbl_80483578) == 0x18 ? 1 : -1];
void fn_8003C7EC(void) {
    M2C_FIELD(&lbl_80483578.value, f32 *, 4) = (f32) lbl_805D825C;
    M2C_FIELD(&lbl_80483578.value, f32 *, 0x10) = (f32) lbl_805D825C;
}
u16 fn_8003C8B4(void) {
    u8 *temp_r3;
    if (TObjPlayer__sub_8003C964() == 0) {
        return 0xFFFFU;
    }
    temp_r3 = (u8 *)(M2C_FIELD(&lbl_804FEEAC.value, M2C_UNK *, ((s32) ((f32) lbl_805D4C48 * (lbl_805D8658 * (f32) rand())) * 4)));
    if (temp_r3 != NULL) {
        return obj_getField1c(temp_r3);
    }
    return 0xFFFFU;
}

}
