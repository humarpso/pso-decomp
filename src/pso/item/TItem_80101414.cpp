#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy__5TItemFPv(void* p);
void copy_item_data_and_process__5TItemFPv(void *arg0);
int TItem__sub_80101B20(void*);
void copy_to_item_data__5TItemFPvPv(void *, void *);
int disallow_rendering__7TObjectFv(void*);
void fn_801047F0(void *);
int queue_destruction__7TObjectFv(void*);

void destroy__5TItemFPv(void* p) { TItem__sub_80101B20(p); disallow_rendering__7TObjectFv(p); queue_destruction__7TObjectFv(p); }

void copy_item_data_and_process__5TItemFPv(void *arg0) {
    M2C_UNK sp8[4];

    copy_to_item_data__5TItemFPvPv(arg0, &sp8);
    fn_801047F0(&sp8);
}

}
