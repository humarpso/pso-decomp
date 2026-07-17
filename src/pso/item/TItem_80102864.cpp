#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__5TItemFv(void *arg0, s16 arg1);
M2C_UNK set_mode__5TItemFPvc(void *, M2C_UNK);
M2C_UNK TItem__sub_80101B20(void *);
M2C_UNK free_obj_heap__10TObjPlayerFPv(void *);
M2C_UNK clear_obj_links(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);

extern void *__vt__5TItem[];

void *__dt__5TItemFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = (void *) __vt__5TItem;
        set_mode__5TItemFPvc(arg0, 3);
        clear_obj_links(arg0);
        TItem__sub_80101B20(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
