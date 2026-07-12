#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TPlyItem__ct(void *arg0);
void init_items__9TItemListFPv(void *);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__8TPlyItem[];
extern void *lbl_805D356C;

void *TPlyItem__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TPlyItem;
    init_items__9TItemListFPv((void *)((char *)arg0 + 32));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D356C;
    M2C_FIELD(arg0, u16 *, 0x1C) = 0;
    M2C_FIELD(arg0, u16 *, 0x1E) = 0;
    return arg0;
}

}
