#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TItemEffOrgaFlowShot__sub_80115B80(s32, f32, f32);
extern const f32 lbl_805DAFDC;
extern const f32 lbl_805DAFE0;
extern const f32 lbl_805DAFE4;
extern const f32 lbl_805DAFE8;

void fn_8012FE90(s32 arg0) {
    TItemEffOrgaFlowShot__sub_80115B80(arg0 + 0x1F8, lbl_805DAFDC, lbl_805DAFE0);
    TItemEffOrgaFlowShot__sub_80115B80(arg0 + 0x1FC, lbl_805DAFE4, lbl_805DAFE8);
    TItemEffOrgaFlowShot__sub_80115B80(arg0 + 0x200, lbl_805DAFDC, lbl_805DAFE0);
}

}
