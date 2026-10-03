#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_state_vt0cb8__10TObjPlayerFPv(void *arg0);
void set_flags__10TObjPlayerFPvUi(void *, int);
void TItemWeapon__ct(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804A0CB8[];
extern const f32 lbl_805DACD4;

void *init_state_vt0cb8__10TObjPlayerFPv(void *arg0) {
    TItemWeapon__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A0CB8;
    set_flags__10TObjPlayerFPvUi((void *)((char *)arg0 + 376), 32);
    M2C_FIELD(arg0, f32 *, 0x1E4) = lbl_805DACD4;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    M2C_FIELD(arg0, u32 *, 0x1F8) = 1;
    return arg0;
}

}
