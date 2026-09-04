#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *item_object_variant_deleting_dtor_80117044(void *arg0, s16 arg1);
void *TItemProArmor__sub_80116F68(void *arg0);
void *TItemProArmor__sub_8011709C(void *arg0);
void TItemProArmor__sub_80117130(void *arg0);
void *TItemProArmor__sub_80117160(void *arg0, s16 arg1);
s16 calc_scaled_offset__13TItemProArmorFv(void);
int get_stat_value__13TItemProArmorFPv(void* p);
void *init__13TItemProArmorFPv(void *arg0);
void TItemObject__ct(void *);
u8 TItemObject__sub_80115D84();
M2C_UNK TObjPlayer__sub_8022D27C(M2C_UNK, M2C_UNK, s32);
void __dt__11TItemObjectFv(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);
int obj_getS16_2BA(void*);

extern M2C_UNK lbl_8049FBC0[];

void *TItemProArmor__sub_80116F68(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FBC0;
    return arg0;
}

extern M2C_UNK lbl_8049FC90[];

void *item_object_variant_deleting_dtor_80117044(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FC90;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8049FC90[];

void *TItemProArmor__sub_8011709C(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FC90;
    return arg0;
}

void TItemProArmor__sub_80117130(void *arg0) {
    TObjPlayer__sub_8022D27C(0xE, 0, M2C_FIELD(arg0, s32 *, 0xF0));
}

extern M2C_UNK lbl_8049FD48[];

void *TItemProArmor__sub_80117160(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FD48;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_8049FD48[];

void *init__13TItemProArmorFPv(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FD48;
    return arg0;
}

int get_stat_value__13TItemProArmorFPv(void* p) { return obj_getS16_2BA(*(void**)((char*)p + 0xf0)); }

extern s32 lbl_805D5550;

s16 calc_scaled_offset__13TItemProArmorFv(void) {
    return (s16) ((lbl_805D5550 * 0x32) + TItemObject__sub_80115D84());
}

}
