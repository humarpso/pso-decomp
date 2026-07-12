#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TObjCMProportion__sub_80298FAC(void);
u8 *TObjCMProportion__sub_80298F08();

extern M2C_UNK lbl_80465168;
extern const f32 lbl_805DDC20;

f32 TObjCMProportion__sub_80298FAC(void) {
    return (f32) M2C_FIELD(TObjCMProportion__sub_80298F08(), u16 *, 0x18) / lbl_805DDC20;
}

}
