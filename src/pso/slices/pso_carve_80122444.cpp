#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TItemProShield__sub_8010B734();
M2C_UNK TItemEffOrgaFlowShot__sub_80115B80(s32, f32, f32);
extern f32 lbl_805DACE4;
extern f32 lbl_805DACE8;

void fn_80122444(s32 arg0) {
    if (TItemProShield__sub_8010B734() == 5) {
        TItemEffOrgaFlowShot__sub_80115B80(arg0 + 0x1F8, lbl_805DACE4, lbl_805DACE8);
    }
}

}
