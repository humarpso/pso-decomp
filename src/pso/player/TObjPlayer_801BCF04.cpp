#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void load_character_state__10TObjPlayerFPvPv(void *arg0, u8 *arg1);
s32 TFontSmallLobby__sub_801AFEE0();
s32 TObjPlayer__sub_801C2114();
s32 get_ptr_4__10TObjPlayerFPv(u8 *);
M2C_UNK set_action_provider_variant__10TObjPlayerFPvs(void *, s16);
M2C_UNK fn_801B80C0(void *, s32, u8);
M2C_UNK bind_saved_inventory_equipment__10TObjPlayerFPvPvi(void *, s32, u8);
M2C_UNK create_inventory__10TObjPlayerFPv(void *);

s32 obj_isState2_324(void *);
u16 obj_getField1c(void *);
extern s32 lbl_805D5D84;
extern s32 lbl_805D5D88;

void load_character_state__10TObjPlayerFPvPv(void *arg0, u8 *arg1) {
    u8 temp_r31;
    s32 temp_r30;

    temp_r31 = *arg1;
    temp_r30 = get_ptr_4__10TObjPlayerFPv(arg1);
    create_inventory__10TObjPlayerFPv(arg0);
    set_action_provider_variant__10TObjPlayerFPvs(arg0, (s16) TObjPlayer__sub_801C2114());
    if ((obj_isState2_324(arg0) == 0) || (TFontSmallLobby__sub_801AFEE0() == 0)) {
        if (!(lbl_805D5D88 & 1)) {
            fn_801B80C0(arg0, temp_r30, temp_r31);
        }
        bind_saved_inventory_equipment__10TObjPlayerFPvPvi(arg0, temp_r30, temp_r31);
    }
    M2C_FIELD(arg0, s32 *, 0xDB4) = (s32) (lbl_805D5D84 + (obj_getField1c(arg0) * 0x600));
}

}
