#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800F8A78();
s32 TQuestVmDownLoadServer__sub_8039DABC(s32, M2C_UNK *, M2C_UNK);
M2C_UNK strncpy(M2C_UNK *, s32, M2C_UNK);
M2C_UNK fn_803DEE48(s32);
extern M2C_UNK lbl_80501178[];
extern M2C_UNK lbl_805DA914;

void copy_name(s32 arg0) {
    strncpy(lbl_80501178, arg0, 0x10);
    if (TQuestVmDownLoadServer__sub_8039DABC(arg0, &lbl_805DA914, 0x10) == 0) {
        fn_800F8A78();
    }
    fn_803DEE48(arg0);
}

}
