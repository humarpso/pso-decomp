#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowCtrl__sub_8024A054(void);
M2C_UNK clear_flag1e_bit8__11TWindowCtrlFPv(void*);

struct Obj054 { char pad[0x38]; u32 field38; };
extern struct Obj054 *TWindowCtrl__data_805D63F8;

void TWindowCtrl__sub_8024A054(void) {
    if ((TWindowCtrl__data_805D63F8 != NULL) && (TWindowCtrl__data_805D63F8->field38 != 0U)) {
        clear_flag1e_bit8__11TWindowCtrlFPv((void*)TWindowCtrl__data_805D63F8->field38);
    }
}

}
