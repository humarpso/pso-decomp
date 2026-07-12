#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init_items__9TItemListFPv(void *arg0);
void *init_array__9TItemListFPv(void *arg0);
void TItemList__sub_801D5CF8(void *);

extern M2C_UNK lbl_804C445C[];
extern M2C_UNK TObjPlayer__sub_801C2068[];
void __construct_array(void *, void *, int, int, int);

void *init_items__9TItemListFPv(void *arg0) {
    init_array__9TItemListFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = lbl_804C445C;
    __construct_array((void *)((char *)arg0 + 168), TObjPlayer__sub_801C2068, 0, 28, 9);
    return arg0;
}

extern M2C_UNK lbl_804C4450[];
extern M2C_UNK reset_position__9TItemListFPv[];
void __construct_array(void *, void *, int, int, int);

void *init_array__9TItemListFPv(void *arg0) {
    TItemList__sub_801D5CF8(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = lbl_804C4450;
    __construct_array((void *)((char *)arg0 + 40), reset_position__9TItemListFPv, 0, 16, 8);
    return arg0;
}

}
