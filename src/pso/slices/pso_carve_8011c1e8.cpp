#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TItemDrop__sub_8010619C(void *, void *);
extern void *item_mgr;

typedef struct Thing_ { u8 a; u8 b; } Thing;

void fn_8011C1E8(void *arg0) {
    Thing *p = (Thing *) arg0;

    if (p != 0 && item_mgr != 0 && p->a == 1 && p->b == 1) {
        TItemDrop__sub_8010619C(item_mgr, p);
    }
}

}
