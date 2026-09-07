#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8026B118_lbl_8044F464 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
s32 fn_8026B0C4(int, void *);
s32 TWindowSubComCard__sub_8026CBB8(int);
extern RecoveredGlobal_8026B118_lbl_8044F464 lbl_8044F464;
void fn_8026B118(void);
}

extern "C" {

typedef char RecoveredGlobal_8026B118_lbl_8044F464_size[sizeof(RecoveredGlobal_8026B118_lbl_8044F464) == 0xC ? 1 : -1];
void fn_8026B118(void) {
    fn_8026B0C4((int) (TWindowSubComCard__sub_8026CBB8((int) (0xAD))), (void *) (&lbl_8044F464.value));
}

}
