#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8007BA20();
M2C_UNK TParticleCtrl__sub_800867AC();
M2C_UNK fn_800F7B84();
M2C_UNK fn_800FD6A0(M2C_UNK *, M2C_UNK);
M2C_UNK fn_80207FFC();
M2C_UNK fn_80227248();
M2C_UNK fn_8022743C();
M2C_UNK fn_80227F7C();
extern M2C_UNK lbl_804A7368[];

void fn_801404CC(void) {
    fn_80227F7C();
    fn_8022743C();
    fn_80227248();
    fn_800FD6A0(lbl_804A7368, 8);
    TParticleCtrl__sub_800867AC();
    fn_80207FFC();
    fn_800F7B84();
    fn_8007BA20();
}

}
