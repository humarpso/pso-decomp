#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_switch_available__6TLobbyFPvi(void *arg0, s32 arg1);
u8 TOSwitchItem__sub_80102C44();
s32 is_technique_ready__8TTecCtrlFv();
u32 start_inventory_update__10TObjPlayerFPvi(s32, s32);
u32 get_owner_if_alive__10TObjPlayerFPv();
u8 fn_801D719C(M2C_UNK *);
u8 fn_801D71D0(M2C_UNK *);

extern M2C_UNK lbl_8050EA40[];

s32 check_switch_available__6TLobbyFPvi(void *arg0, s32 arg1) {
    if (is_technique_ready__8TTecCtrlFv() != 0) {
        if (fn_801D71D0(lbl_8050EA40) == 2) {
            if (start_inventory_update__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xD00), arg1) == 0U) {
                return 0;
            }
            if (get_owner_if_alive__10TObjPlayerFPv() == 0U) {
                return 0;
            }
            if (TOSwitchItem__sub_80102C44() == 0) {
                return 0;
            }
            goto block_8;
        }
block_8:
        if (fn_801D719C(lbl_8050EA40) == 1) {
            if (start_inventory_update__10TObjPlayerFPvi(M2C_FIELD(arg0, s32 *, 0xD00), arg1) == 0U) {
                return 0;
            }
            if (get_owner_if_alive__10TObjPlayerFPv() == 0U) {
                return 0;
            }
            if (TOSwitchItem__sub_80102C44() == 2) {
                return 0;
            }
            goto block_15;
        }
        goto block_15;
    }
block_15:
    return 1;
}

}
