#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_shield_ready__10TObjPlayerFi(s32 arg0);
void *init_vtable_and_flags__10TObjPlayerFPv(void *arg0);
u8 get_slot_count__14TItemProShieldFPv();
M2C_UNK draw_weapon_model(s32);
M2C_UNK TObjPlayer__sub_80120BBC(s32, M2C_UNK);
void TObjPlayer__sub_80120D50(void *);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern s32 lbl_805D5518;

void update_shield_ready__10TObjPlayerFi(s32 arg0) {
    if (get_slot_count__14TItemProShieldFPv() == 3) {
        lbl_805D5518 = 0;
        draw_weapon_model(arg0);
        lbl_805D5518 = 1;
        TObjPlayer__sub_80120BBC(arg0, 0x23);
    }
}

extern M2C_UNK lbl_804A2B98[];

void *init_vtable_and_flags__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_80120D50(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A2B98;
    set_status_flags__10TObjPlayerFPvUi(arg0, 577);
    return arg0;
}

}
