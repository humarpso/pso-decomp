#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create_item_object_lbl_804F0C48(void *arg0);
void *item_object_variant_deleting_dtor_8035029C(void *arg0, s16 arg1);
void TItemObject__ct(void *);
void __dt__11TItemObjectFv(void *, int);
void clear_item_flags__10TObjPlayerFPvUi(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_804F0C48[];

void *item_object_variant_deleting_dtor_8035029C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0C48;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804F0C48[];

void *create_item_object_lbl_804F0C48(void *arg0) {
    TItemObject__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F0C48;
    clear_item_flags__10TObjPlayerFPvUi(arg0, 16);
    return arg0;
}

}
