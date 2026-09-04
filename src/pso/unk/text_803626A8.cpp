#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *item_equip_variant_deleting_dtor_80362D90(void *arg0, s16 arg1);
void *TObjEneEpsilon__ct(void *arg0);
void *TObjPlayer__sub_80362CFC(void *arg0);
void TObjPlayer__sub_8012A884(void *);
void __construct_array(void *, void *, void *, int, int);
void check_state_flag_4__9TObjEneDDFPv(void *);
void free_obj_heap__10TObjPlayerFPv(void *);
void init_object__9TObjEneDDFPv(void *);
void item_equip_variant_deleting_dtor_8012A82C(void *, int);
void *item_equip_variant_deleting_dtor_80362D90(void *arg0, s16 arg1);

extern M2C_UNK __vt__14TObjEneEpsilon[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
extern void *lbl_805D4468;

void *TObjEneEpsilon__ct(void *arg0) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjEneEpsilon;
    __construct_array((void *)((char *)arg0 + 960), init_and_activate__10TObjPlayerFPv, TObjPlayer__sub_800D7C58, 28, 4);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4468;
    check_state_flag_4__9TObjEneDDFPv(arg0);
    return arg0;
}

extern M2C_UNK lbl_804F26E0[];

void *TObjPlayer__sub_80362CFC(void *arg0) {
    TObjPlayer__sub_8012A884(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F26E0;
    return arg0;
}

extern M2C_UNK lbl_804F26E0[];

void *item_equip_variant_deleting_dtor_80362D90(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F26E0;
        item_equip_variant_deleting_dtor_8012A82C(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
