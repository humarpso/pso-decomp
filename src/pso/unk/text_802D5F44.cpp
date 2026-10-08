#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void *alloc_from_obj_heap__10TObjPlayerFPv(u32);
void *setup_state__10TObjPlayerFPv(void *, s32, void *);
void *init_needle_effect__10TObjPlayerFPv(void *, s32, void *);
void *enter_state_341__10TObjPlayerFPv(void *, s32, void *);
void *TObjPlayer__sub_802D595C(void *, s32, void *);
void *init_type_447__10TObjPlayerFPv(void *, s32, void *);
void *init_vtable_and_handlers_341__10TObjPlayerFPv(void *, s32, void *);
void *init_vtable_and_field200__10TObjPlayerFPv(void *, s32, void *);
extern s32 tl_05;
void *create_object_by_type__10TObjPlayerFPv(u8 *arg0);
}

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

void *create_object_by_type__10TObjPlayerFPv(u8 *arg0) {
    void *p;
    if (arg0 != NULL) {
    switch (arg0[1]) {
    case 0x8C:
        switch (arg0[2]) {
        case 0:
            break;
        case 1:
            p = alloc_from_obj_heap__10TObjPlayerFPv(0x20C);
            if (p != NULL) {
                p = init_vtable_and_handlers_341__10TObjPlayerFPv(p, tl_05, arg0);
            }
            return p;
        case 2:
            p = alloc_from_obj_heap__10TObjPlayerFPv(0x20C);
            if (p != NULL) {
                p = init_type_447__10TObjPlayerFPv(p, tl_05, arg0);
            }
            return p;
        case 3:
            p = alloc_from_obj_heap__10TObjPlayerFPv(0x254);
            if (p != NULL) {
                p = TObjPlayer__sub_802D595C(p, tl_05, arg0);
            }
            return p;
        }
        break;
    case 0x93:
        p = alloc_from_obj_heap__10TObjPlayerFPv(0x20C);
        if (p != NULL) {
            p = enter_state_341__10TObjPlayerFPv(p, tl_05, arg0);
        }
        return p;
    case 0xA4:
        p = alloc_from_obj_heap__10TObjPlayerFPv(0x20C);
        if (p != NULL) {
            p = init_needle_effect__10TObjPlayerFPv(p, tl_05, arg0);
        }
        return p;
    case 0x96:
        p = alloc_from_obj_heap__10TObjPlayerFPv(0x20C);
        if (p != NULL) {
            p = setup_state__10TObjPlayerFPv(p, tl_05, arg0);
        }
        return p;
    }
    p = alloc_from_obj_heap__10TObjPlayerFPv(0x20C);
    if (p != NULL) {
        p = init_vtable_and_field200__10TObjPlayerFPv(p, tl_05, arg0);
    }
    return p;
    }
    return NULL;
}

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
