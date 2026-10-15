#include "types.h"

extern "C" {

void *item_object_variant_deleting_dtor_80352AC0(void *arg0, s16 arg1);
void *TItemObject__sub_80352B18(void *arg0);
void TItemObject__ct(void *);
void __dt__11TItemObjectFv(void *, int);
void clear_item_flags__10TObjPlayerFUl(void *, int);
void free_obj_heap__10TObjPlayerFPv(void *);

extern s32 lbl_804F0FF0[];

void *item_object_variant_deleting_dtor_80352AC0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804F0FF0;
        __dt__11TItemObjectFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_804F0FF0[];

void *TItemObject__sub_80352B18(void *arg0) {
    TItemObject__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804F0FF0;
    clear_item_flags__10TObjPlayerFUl(arg0, 16);
    return arg0;
}

}
