#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *init_from_item__10TObjPlayerFPvPvPv(void *arg0, void *arg1, void *arg2);
M2C_UNK TItemWeapon__ct();
M2C_UNK set_status_flags__10TObjPlayerFPvUi(void *, M2C_UNK);
M2C_UNK set_atp__10TObjPlayerFPvs(void *, M2C_UNK);

extern M2C_UNK lbl_804A62F8[];

void *init_from_item__10TObjPlayerFPvPvPv(void *arg0, void *arg1, void *arg2) {
    TItemWeapon__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A62F8;
    if (((u8) M2C_FIELD(arg2, u8 *, 2) == 5) || ((u8) M2C_FIELD(arg2, u8 *, 1) == 0x8F)) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x1F8) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) != 0) {
        set_status_flags__10TObjPlayerFPvUi(arg0, 0x800);
    }
    if ((u8) M2C_FIELD(arg2, u8 *, 2) > 5U) {
        set_atp__10TObjPlayerFPvs(arg0, -1);
    }
    return arg0;
}

}
