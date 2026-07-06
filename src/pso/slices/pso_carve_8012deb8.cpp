#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TItemEffOrgaFlowShot__sub_80115B80(void *, f32, f32);
M2C_UNK fn_80115BC0(void *, M2C_UNK, M2C_UNK);
extern const f32 lbl_805DAF5C;
extern const f32 lbl_805DAF60;

void fn_8012DEB8(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x220) < 0x2000) {
        fn_80115BC0(arg0 + 0x220, 0x2D8, 0x2000);
    }
    TItemEffOrgaFlowShot__sub_80115B80(arg0 + 0x224, lbl_805DAF5C, lbl_805DAF60);
}

}
