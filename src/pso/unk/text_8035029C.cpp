#include "types.h"

extern "C" {

void *create_item_object_lbl_804F0C48(void *arg0);
void *item_object_variant_deleting_dtor_8035029C(void *arg0, s16 arg1);
void TItemObject__ct(void *);
void __dt__11TItemObjectFv(void *, int);
void clear_item_flags__10TObjPlayerFPvUi(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern s32 lbl_804F0C48[];

void *item_object_variant_deleting_dtor_8035029C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804F0C48;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804F0C48[];

void *create_item_object_lbl_804F0C48(void *arg0) {
    TItemObject__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804F0C48;
    clear_item_flags__10TObjPlayerFPvUi(arg0, 16);
    return arg0;
}

}
