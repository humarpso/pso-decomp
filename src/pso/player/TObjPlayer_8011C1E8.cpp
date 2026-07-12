#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

typedef struct Thing__8011c1e8 { u8 a; u8 b; } Thing;

void register_item_drop__10TObjPlayerFPv(void *arg0);
M2C_UNK set_drop_index__9TItemDropFPvPv(void *, void *);

extern void *item_mgr;

void register_item_drop__10TObjPlayerFPv(void *arg0) {
    Thing *p = (Thing *) arg0;

    if (p != 0 && item_mgr != 0 && p->a == 1 && p->b == 1) {
        set_drop_index__9TItemDropFPvPv(item_mgr, p);
    }
}

}
