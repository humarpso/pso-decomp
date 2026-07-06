#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TItemProShield__sub_8010B734(void *);
M2C_UNK TItemEffOrgaFlowShot__sub_80115B80(void *, f32, f32);
extern const f32 lbl_805DAFF0;
extern const f32 lbl_805DAFF4;

void fn_80130040(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1FC) == 1) {
        M2C_FIELD(arg0, s32 *, 0x1FC) = 0;
    }
    if (TItemProShield__sub_8010B734(arg0) == 5) {
        TItemEffOrgaFlowShot__sub_80115B80(arg0 + 0x1F8, lbl_805DAFF0, lbl_805DAFF4);
    }
}

}
