#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8007BA20();
M2C_UNK fn_800F7B84();
M2C_UNK fn_800FD6A0(M2C_UNK *, M2C_UNK);
M2C_UNK TQuestVmDownLoadServer__sub_801F8E4C();
M2C_UNK fn_80207FFC();
M2C_UNK fn_8022743C();
M2C_UNK fn_80227F7C();
extern M2C_UNK lbl_804A73D0[];

void fn_80140A24(void) {
    TQuestVmDownLoadServer__sub_801F8E4C();
    fn_800F7B84();
    fn_80207FFC();
    fn_800FD6A0(lbl_804A73D0, 0x30);
    fn_8022743C();
    fn_80227F7C();
    fn_8022743C();
    fn_8007BA20();
}

}
