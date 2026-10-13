#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void * construct_nug2000_bazooka__10TObjPlayerFPv(void *, M2C_UNK, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_nug2000_bazooka__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

void *item_equip_variant_deleting_dtor_80308450(void *arg0, s16 arg1);
void TItemWeapon__ct(void *);
void free_obj_heap__10TObjPlayerFPv(void *);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_80308450(void *arg0, s16 arg1);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

extern M2C_UNK lbl_804E71F8[];

void *construct_nug2000_bazooka__10TObjPlayerFPv(void *arg0, M2C_UNK _w1, void * _w2) {
    TItemWeapon__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E71F8;
    set_status_flags__10TObjPlayerFPvUi(arg0, 2);
    return arg0;
}
u8 *create_nug2000_bazooka__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)construct_nug2000_bazooka__10TObjPlayerFPv((void *)(temp_r3), (M2C_UNK)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

extern M2C_UNK lbl_804E71F8[];

void *item_equip_variant_deleting_dtor_80308450(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E71F8;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
