#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemProShield__sub_801166B0(void *arg0, s16 arg1);
void *TItemProShield__sub_80116708(void *arg0);
void *TItemProShield__sub_801167E8(void *arg0, s16 arg1);
void apply_to_equip_slot__14TItemProShieldFPv(void *arg0);
M2C_UNK TItemMag__sub_80111188(s32, s32);
void TItemObject__ct(void *);
void __dt__11TItemObjectFv(void *, int);
s32 activate_d04_slot__10TObjPlayerFPv(s32);
void free_obj_heap__10TObjPlayerFPv(void *);
s32 get_slot_count__14TItemProShieldFPv(void *);

extern M2C_UNK lbl_8049F770[];

void *TItemProShield__sub_801166B0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F770;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8049F770[];

void *TItemProShield__sub_80116708(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F770;
    return arg0;
}

void apply_to_equip_slot__14TItemProShieldFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = activate_d04_slot__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0xF0));
    if (temp_r3 != 0) {
        TItemMag__sub_80111188(temp_r3, get_slot_count__14TItemProShieldFPv(arg0));
    }
}

extern M2C_UNK lbl_8049F828[];

void *TItemProShield__sub_801167E8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F828;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
