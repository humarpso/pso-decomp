#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int test_flags_1b8__10TObjPlayerFPvUi(void *, u32);
M2C_UNK TObjPlayer__sub_80120908(void *);
void TObjPlayer__sub_80363060(u8 *arg0);
}

extern "C" {

void *item_equip_variant_deleting_dtor_80363148(void *arg0, s16 arg1);
void create_cane_if_ready__10TObjPlayerFi(s32 arg0);
void *enter_state_804F27E0__10TObjPlayerFPv(void *arg0);
void set_pause_flag_from_state__10TObjPlayerFPv(void *arg0);
s32 TObjPlayer__sub_8011F63C();
void TObjPlayer__sub_8012A884(void *);
M2C_UNK create_item_eff_cane__10TObjPlayerFiUiii(s32, s32, M2C_UNK, M2C_UNK);
void free_obj_heap__10TObjPlayerFPv(void *);
void item_equip_variant_deleting_dtor_8012A82C(void *, int);
void *item_equip_variant_deleting_dtor_80363148(void *arg0, s16 arg1);
void set_status_flags__10TObjPlayerFPvUi(void *, int);

void set_pause_flag_from_state__10TObjPlayerFPv(void *arg0) {
    if (TObjPlayer__sub_8011F63C() == 2) {
        M2C_FIELD(arg0, s32 *, 0x1FC) = (s32) (M2C_FIELD(arg0, s32 *, 0x1FC) | 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1FC) = (s32) (M2C_FIELD(arg0, s32 *, 0x1FC) & 0xFFFFFFFE);
}

extern s32 tl_05;

void create_cane_if_ready__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_8011F63C() == 0) {
        create_item_eff_cane__10TObjPlayerFiUiii(tl_05, arg0, -1, 0x1BD);
    }
}

extern M2C_UNK lbl_804F27E0[];

void TObjPlayer__sub_80363060(u8 *arg0) {
    if (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0x01000000U) == 0U) {
        TObjPlayer__sub_80120908((void *) (arg0));
    }
}

void *enter_state_804F27E0__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F27E0;
    set_status_flags__10TObjPlayerFPvUi(arg0, 3);
    M2C_FIELD(arg0, u32 *, 0x1FC) = 0;
    return arg0;
}

extern M2C_UNK lbl_804F27E0[];

void *item_equip_variant_deleting_dtor_80363148(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F27E0;
        item_equip_variant_deleting_dtor_8012A82C(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
