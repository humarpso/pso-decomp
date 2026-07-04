#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8001EEF4();
s32 fn_8001EEFC(M2C_UNK *);
M2C_UNK TItemBuff__ct();
s32 TOBoss4Rock__sub_80147AA8(s32);
extern M2C_UNK lbl_8043E038[];
extern s32 lbl_805D5410;
extern s32 lbl_805D5414;

s32 fn_801035AC(s32 arg0) {
    s32 temp_r3;

    if (arg0 != 0) {
        TItemBuff__ct();
        temp_r3 = fn_8001EEF4();
        lbl_805D5410 = temp_r3;
        if ((temp_r3 != 0) && (arg0 < 0x40000)) {
            lbl_805D5414 = fn_8001EEFC(lbl_8043E038);
        } else {
            lbl_805D5414 = TOBoss4Rock__sub_80147AA8(arg0);
        }
    }
    return lbl_805D5414;
}

}
