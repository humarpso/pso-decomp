#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *item_equip_variant_deleting_dtor_802D60E0(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_802D6138(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_802D6190(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_802D61E8(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_802D6240(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_802D6298(void *arg0, s16 arg1);
void *item_equip_variant_deleting_dtor_802D62F0(void *arg0, s16 arg1);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_804E1E08[];

void *item_equip_variant_deleting_dtor_802D60E0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E1E08;
        item_equip_variant_deleting_dtor_802D62F0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804E1F04[];

void *item_equip_variant_deleting_dtor_802D6138(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E1F04;
        item_equip_variant_deleting_dtor_802D62F0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804E2000[];

void *item_equip_variant_deleting_dtor_802D6190(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E2000;
        item_equip_variant_deleting_dtor_802D62F0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804E20FC[];

void *item_equip_variant_deleting_dtor_802D61E8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E20FC;
        item_equip_variant_deleting_dtor_802D62F0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804E21F8[];

void *item_equip_variant_deleting_dtor_802D6240(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E21F8;
        item_equip_variant_deleting_dtor_802D62F0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804E22F4[];

void *item_equip_variant_deleting_dtor_802D6298(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E22F4;
        item_equip_variant_deleting_dtor_802D62F0((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804E23F0[];

void *item_equip_variant_deleting_dtor_802D62F0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E23F0;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
